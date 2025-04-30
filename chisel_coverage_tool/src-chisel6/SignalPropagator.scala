// 适用于chisel 6.7.0
package firrtl
package ir

// 导入 firrtl.Utils 中的辅助函数和类型定义
import firrtl.Utils.{throwInternalError, BoolType} // 导入 BoolType, IntWidth
import firrtl.ir.Info
import scala.collection.mutable
import scala.collection.mutable.ListBuffer

// --- 新增数据结构，用于描述顶层模块导出的信号信息 ---

/** 描述顶层模块导出 Bundle 中单个字段（信号）的信息
  *
  * @param fieldName
  *   该信号在导出 Bundle 中的唯一字段名 (例如 "Top__I__sub__I__local__I__myNode")。
  * @param fieldtype
  *   信号的类型 (`Type`)。
  * @param info
  *   该信号来源的原始信息 (`Info`)。
  */
case class ExportedSignalInfo(
    fieldName: String,
    fieldtype: Type,
    info: Info
)

/** 描述添加到顶层模块的整个导出端口的信息
  *
  * @param portName
  *   添加到顶层模块的新端口的名称 (例如 "_cond_pred", "_mux_cond", "_reg_signals")。
  * @param exportedSignals
  *   一个序列，包含该端口 Bundle 内所有字段（信号）的详细信息 (`ExportedSignalInfo`)。
  */
case class TopLevelExportInfo(
    portName: String,
    exportedSignals: Seq[ExportedSignalInfo]
)

// --- PropagatorConfig 和 SignalPropagator 的其余部分保持不变 ---

/** 通用信号传播器配置
  *
  * 用于配置 `SignalPropagator` 的行为。
  *
  * @param signalName
  *   信号类型的描述性名称 (例如 "predicate", "condition", "register signal")。
  *   主要用于生成错误消息和文档。
  * @param outputPortName
  *   添加到模块接口的新输出端口的名称 (例如 "_cond_pred", "_mux_cond", "_reg_signals")。
  *   此端口将承载所有需要传播的信号。
  * @param intermediateWirePrefix
  *   为本地定义的、非顶层信号（例如在 `when` 块内定义的 `DefNode`）创建的中间线的前缀。 (例如
  *   "_cond_pred_prop_wire_", "_mux_cond_prop_wire_")。
  *   这确保了即使信号定义在条件块内部，也能被连接到输出端口。
  * @param localSignalExtractor
  *   一个函数，它接收一个 `Circuit` 对象，并返回一个 `Map[String, Seq[(Expression, Info)]]`。 这个
  *   Map 的键是模块名称，值是该模块内部直接定义的、需要向上级传播的信号表达式及其原始 Info 的列表。 例如，对于谓词传播，它会提取
  *   `Conditionally` 语句的 `pred` 表达式和 `Conditionally` 语句的 `Info`。
  * @param defaultTypeForUnknown
  *   一个可选的 `Type`。当 `localSignalExtractor` 提取出的信号表达式类型为 `UnknownType` 时， 将使用此
  *   `defaultTypeForUnknown` 指定的类型作为该信号在传播过程中的类型（例如，在创建输出端口字段或中间线时）。
  *   - 对于谓词/条件，通常是 `Some(BoolType)`，因为它们预期是布尔值。
  *   - 对于像寄存器这样必须保留其原始类型的信号，应为 `None`。如果寄存器类型未知，则会抛出错误，因为无法安全地为其分配默认类型。 默认为
  *     `None`。
  */
case class PropagatorConfig(
    signalName: String,
    outputPortName: String,
    intermediateWirePrefix: String,
    localSignalExtractor: Circuit => Map[String, Seq[(Expression, Info)]],
    defaultTypeForUnknown: Option[Type] = None // 默认为 None
)

/** 通用信号传播器框架
  *
  * 这个对象提供了一个通用的机制，用于将特定类型的信号（由 `PropagatorConfig` 定义）
  * 从模块内部或子模块实例传播到模块的输出端口。这对于在仿真或分析中观察内部信号很有用。
  *
  * 工作流程：
  *   1. 使用 `localSignalExtractor` 识别每个模块内部直接定义的 "本地" 目标信号。 2. 递归地处理模块层次结构。 3.
  *      对于每个模块：
  *      a. 收集其本地目标信号。 b. 检查其子模块实例。如果子模块已经过处理并输出了目标信号，则收集这些来自子模块的信号。 c.
  *         如果存在本地信号或来自子模块的信号，则：
  *         i. 创建一个新的输出端口（类型为
  *            `BundleType`），其字段对应于所有需要传播的信号。字段名称是根据信号的来源（实例路径、本地标识符）生成的唯一名称。
  *            ii. 解析信号类型，如果原始类型是 `UnknownType` 且 `defaultTypeForUnknown`
  *            已设置，则使用默认类型。否则，保留原始类型或（对于寄存器等）在 `UnknownType` 时报错。 iii. 对于源自本地
  *            `DefNode`（非顶层定义）的信号，可能需要创建中间 `DefWire` 并连接 `DefNode` 到该线。 iv.
  *            将所有来源（本地信号、中间线、子模块端口字段）连接到新输出端口的相应字段。 v. 返回转换后的模块和新端口信息。 4.
  *            最终，顶层模块将包含一个输出端口，其中捆绑了整个设计中所有被传播的信号。 5. （新增）`transform`
  *            方法现在返回一个元组 `(Circuit,
  *            Option[TopLevelExportInfo])`，其中包含转换后的电路和关于顶层模块新增端口的详细信息（如果添加了端口）。
  */
object SignalPropagator {

  // --- 常量定义 ---
  val InstanceSeparator = "__I__"
  val ModuleMarker = "__M__" 
  val SignalMarker = "__S__" 
  val InternalSeparator = "__s__" 

  // --- 通用数据结构 ---
  case class SignalOriginInfo(
      sourceExpression: Expression,
      signalType: Type,
      originInfo: Info
  )

  sealed trait SignalSource {
    def getOriginInfo: Info
  }

  case class LocalSignalSource(
      propagatedFieldName: String,
      originInfo: SignalOriginInfo
  ) extends SignalSource {
    override def getOriginInfo: Info = originInfo.originInfo
  }

  case class ChildSignalSource(
      instanceName: String,
      propagatedFieldName: String,
      originInfo: SignalOriginInfo
  ) extends SignalSource {
    override def getOriginInfo: Info = originInfo.originInfo
  }

  case class ModuleTransformResult(
      transformedModule: DefModule,
      signalPortInfo: Option[(String, BundleType, Map[String, Info])]
  )

  // --- 辅助函数 ---
  private def collectTopLevelNames(
      targetStmt: Statement,
      ports: Seq[Port]
  ): Set[String] = {
    val collectedNames = mutable.Set[String]()
    ports.foreach(p => collectedNames += p.name)
    targetStmt match {
      case Block(stmts) =>
        stmts.foreach {
          case definition: HasName => collectedNames += definition.name
          case _                   => ()
        }
      case definition: HasName => collectedNames += definition.name
      case _                   => ()
    }
    collectedNames.toSet
  }

  private def getRootReferenceName(expr: Expression): Option[String] =
    expr match {
      case Reference(name, _)         => Some(name)
      case SubField(innerExpr, _, _)  => getRootReferenceName(innerExpr)
      case SubIndex(innerExpr, _, _)  => getRootReferenceName(innerExpr)
      case SubAccess(innerExpr, _, _) => getRootReferenceName(innerExpr)
      case _                          => None
    }

  private def getSignalBaseIdentifier(
      expr: Expression,
      signalTypeName: String
  ): String = expr match {
    case Reference(name, _) => name
    case SubField(innerExpr, fieldName, _) =>
      val innerIdentifier = getSignalBaseIdentifier(innerExpr, signalTypeName)
      s"${innerIdentifier}${InternalSeparator}$fieldName"
    case SubIndex(innerExpr, index, _) =>
      val innerIdentifier = getSignalBaseIdentifier(innerExpr, signalTypeName)
      s"${innerIdentifier}${InternalSeparator}$index"
    case SubAccess(innerExpr, indexExpr, _) =>
      val innerIdentifier = getSignalBaseIdentifier(innerExpr, signalTypeName)
      val indexStr = indexExpr.serialize.replaceAll("[^\\w]", "_")
      s"${innerIdentifier}${InternalSeparator}access_$indexStr"
    case otherExpr =>
      throwInternalError(
        s"SignalPropagator.getSignalBaseIdentifier: 遇到不符合假设的 ${signalTypeName} 表达式类型: ${otherExpr.getClass.getName}. " +
          s"表达式: ${otherExpr.serialize}. 假设信号是 Reference 或其字段/索引访问。"
      )
  }

  // --- 核心转换逻辑 ---

  /** 对整个电路执行信号传播转换。
    *
    * 这是信号传播器的入口点。它会遍历电路中的所有模块，从主模块开始， 应用 `transformModule`
    * 函数，并最终构建一个包含所有转换后模块的新电路。
    *
    * @param circuit
    *   原始 FIRRTL 电路。
    * @param config
    *   `PropagatorConfig`，定义了要传播的信号类型及其处理方式。
    * @return
    *   一个元组 `(Circuit, Option[TopLevelExportInfo])`: - 第一个元素是转换后的 FIRRTL 电路。 -
    *   第二个元素是 `Option[TopLevelExportInfo]`，如果顶层模块被修改并添加了新的导出端口，则包含该端口的详细信息； 否则为
    *   `None`。
    */
  def transform(
      circuit: Circuit,
      config: PropagatorConfig
  ): (Circuit, Option[TopLevelExportInfo]) = {
    val internalSignalsMap: Map[String, Seq[(Expression, Info)]] =
      config.localSignalExtractor(circuit)

    val moduleMap: Map[String, DefModule] =
      circuit.modules.map(m => m.name -> m).toMap

    val processedModuleInstancesCache =
      mutable.Map[(String, Seq[String]), ModuleTransformResult]()

    val topLevelNamesMap = mutable.Map[String, Set[String]]()
    circuit.modules.foreach {
      case module: Module =>
        topLevelNamesMap(module.name) = collectTopLevelNames(
          module.body,
          module.ports
        )
      case classDef: DefClass =>
        topLevelNamesMap(classDef.name) = collectTopLevelNames(
          classDef.body,
          classDef.ports
        )
      case _ =>
    }

    def processModule(
        moduleName: String,
        instancePath: Seq[String]
    ): ModuleTransformResult = {
      val moduleInstanceCacheKey = (moduleName, instancePath)
      processedModuleInstancesCache.get(moduleInstanceCacheKey) match {
        case Some(cachedResult) => cachedResult
        case None =>
          moduleMap.get(moduleName) match {
            case Some(module: Module) =>
              val transformResult = transformModule(
                module,
                moduleMap,
                internalSignalsMap,
                topLevelNamesMap.getOrElse(module.name, Set.empty),
                instancePath,
                processModule,
                config
              )
              processedModuleInstancesCache(moduleInstanceCacheKey) =
                transformResult
              transformResult
            case Some(classDef: DefClass) =>
              val fakeModule = Module(
                classDef.info,
                classDef.name,
                classDef.ports,
                classDef.body
              )
              val transformedFakeModuleResult = transformModule(
                fakeModule,
                moduleMap,
                internalSignalsMap,
                topLevelNamesMap.getOrElse(classDef.name, Set.empty),
                instancePath,
                processModule,
                config
              )
              val transformedClassDef = classDef.copy(
                ports = transformedFakeModuleResult.transformedModule
                  .asInstanceOf[Module]
                  .ports,
                body = transformedFakeModuleResult.transformedModule
                  .asInstanceOf[Module]
                  .body
              )
              val finalResult = ModuleTransformResult(
                transformedClassDef,
                transformedFakeModuleResult.signalPortInfo
              )
              processedModuleInstancesCache(moduleInstanceCacheKey) =
                finalResult
              finalResult
            case Some(extModule: ExtModule) =>
              val result = ModuleTransformResult(extModule, None)
              processedModuleInstancesCache((moduleName, Seq.empty)) = result
              result
            case Some(intModule: IntModule) =>
              val result = ModuleTransformResult(intModule, None)
              processedModuleInstancesCache((moduleName, Seq.empty)) = result
              result
            case Some(otherModuleType) =>
              throwInternalError(
                s"SignalPropagator: 遇到未知的模块类型：${otherModuleType.getClass.getName} ($moduleName)"
              )
            case None =>
              throwInternalError(s"SignalPropagator: 在电路图中找不到模块 '$moduleName'")
          }
      }
    }

    val mainModuleResult = processModule(circuit.main, Seq(circuit.main))

    val finalModulesMap = mutable.Map[String, DefModule]()
    processedModuleInstancesCache.values.foreach { result =>
      val moduleName = result.transformedModule.name
      if (!finalModulesMap.contains(moduleName)) {
        finalModulesMap(moduleName) = result.transformedModule
      } else {
        if (finalModulesMap(moduleName) ne result.transformedModule) {
          println(
            s"[WARN] SignalPropagator: 尝试多次添加模块 ${moduleName} 的不同转换版本。将保留第一个版本。"
          )
        }
      }
    }

    circuit.modules.foreach { originalMod =>
      if (!finalModulesMap.contains(originalMod.name)) {
        finalModulesMap(originalMod.name) = originalMod
      }
    }

    val finalOrderedModules = circuit.modules.map(m => finalModulesMap(m.name))

    val finalCircuit = circuit.copy(modules = finalOrderedModules)

    val topLevelExportInfo: Option[TopLevelExportInfo] =
      mainModuleResult.signalPortInfo.map {
        case (portName, bundleType, infoMap) =>
          val exportedSignals = bundleType.fields
            .map { field =>
              val originInfo = infoMap.getOrElse(
                field.name, {
                  println(
                    s"[WARN] SignalPropagator: 在顶层模块 ${circuit.main} 的 infoMap 中找不到字段 ${field.name} 的 Info，使用 NoInfo。"
                  )
                  NoInfo
                }
              )
              ExportedSignalInfo(field.name, field.tpe, originInfo)
            }
            .sortBy(_.fieldName)
          TopLevelExportInfo(portName, exportedSignals)
      }

    (finalCircuit, topLevelExportInfo)
  }

  private def transformModule(
      module: Module,
      moduleMap: Map[String, DefModule],
      internalSignalsMap: Map[String, Seq[(Expression, Info)]],
      topLevelNames: Set[String],
      currentInstancePath: Seq[String],
      processFunc: (String, Seq[String]) => ModuleTransformResult,
      config: PropagatorConfig
  ): ModuleTransformResult = {

    val localSignalSources: List[LocalSignalSource] =
      internalSignalsMap
        .get(module.name)
        .map { moduleSignalExprInfoPairs =>
          moduleSignalExprInfoPairs
            .distinctBy { case (expr, info) =>
              (expr.serialize, info.serialize)
            }
            .map { case (signalExpr, originInfo) =>
              if (getRootReferenceName(signalExpr).isEmpty) {
                throwInternalError(
                  s"SignalPropagator.transformModule: 在模块 ${module.name} 中发现不符合假设的 ${config.signalName}: ${signalExpr.serialize}. " +
                    "无法获取根引用名称。"
                )
              }
              val originalSignalType = signalExpr.tpe
              val signalBaseId = getSignalBaseIdentifier(
                signalExpr,
                config.signalName
              )
              val instancePathPrefix =
                currentInstancePath.mkString(InstanceSeparator)
              // **** MODIFIED: Use __S__ as SignalMarker ****
              // Format: Path__M__Module__S__Signal
              val uniqueFieldName =
                s"${instancePathPrefix}${ModuleMarker}${module.name}${SignalMarker}$signalBaseId"
              // **** END MODIFICATION ****
              LocalSignalSource(
                uniqueFieldName,
                SignalOriginInfo(signalExpr, originalSignalType, originInfo)
              )
            }
        }
        .getOrElse(Nil)
        .toList

    val childSignalSources = mutable.ListBuffer[ChildSignalSource]()
    val childInstanceResults = mutable.Map[String, ModuleTransformResult]()

    def findInstancesAndCollectChildSignals(statement: Statement): Unit =
      statement match {
        case inst: DefInstance =>
          val childModuleName = inst.module
          val childInstanceName = inst.name
          val childInstancePath = currentInstancePath :+ childInstanceName

          val childTransformResult = childInstanceResults.getOrElseUpdate(
            childInstanceName,
            processFunc(childModuleName, childInstancePath)
          )

          childTransformResult.signalPortInfo match {
            case Some((childPortName, childBundleType, childInfoMap))
                if childPortName == config.outputPortName =>
              val instanceRef = Reference(
                inst.name,
                UnknownType
              )
              val childSignalPortAccess = SubField(
                instanceRef,
                childPortName,
                childBundleType
              )

              childBundleType.fields.foreach { field =>
                val fieldAccessExpr =
                  SubField(childSignalPortAccess, field.name, field.tpe)
                val originInfoForField = childInfoMap.getOrElse(
                  field.name, {
                    println(
                      s"[WARN] SignalPropagator: 在子模块 ${childModuleName} (实例 ${inst.name}) 的 infoMap 中找不到字段 ${field.name} 的 Info，使用 NoInfo。"
                    )
                    NoInfo
                  }
                )
                val originInfo = SignalOriginInfo(
                  fieldAccessExpr,
                  field.tpe,
                  originInfoForField
                )
                childSignalSources += ChildSignalSource(
                  inst.name,
                  field.name,
                  originInfo
                )
              }
            case _ => ()
          }
        case Block(stmts) => stmts.foreach(findInstancesAndCollectChildSignals)
        case Conditionally(_, _, conseq, alt) =>
          findInstancesAndCollectChildSignals(conseq);
          findInstancesAndCollectChildSignals(alt)
        case LayerBlock(_, _, body) => findInstancesAndCollectChildSignals(body)
        case _                      => ()
      }
    findInstancesAndCollectChildSignals(module.body)

    val allSignalSources: List[SignalSource] =
      localSignalSources ++ childSignalSources.toList

    if (allSignalSources.isEmpty) {
      return ModuleTransformResult(module, None)
    }

    val fieldInfoPairs: Seq[(Field, Info)] = allSignalSources.map { source =>
      val (propagatedFieldName, originalType, originInfo) = source match {
        case LocalSignalSource(pfname, sigOrigin) =>
          (pfname, sigOrigin.signalType, sigOrigin.originInfo)
        case ChildSignalSource(_, pfname, sigOrigin) =>
          (pfname, sigOrigin.signalType, sigOrigin.originInfo)
      }

      val finalFieldType = originalType match {
        case UnknownType =>
          config.defaultTypeForUnknown match {
            case Some(defaultTpe) =>
              println(
                s"[INFO] SignalPropagator: 模块 '${module.name}' 中字段 '$propagatedFieldName' 类型未知，使用默认 ${defaultTpe.serialize}。"
              )
              defaultTpe
            case None =>
              throwInternalError(
                s"SignalPropagator: 模块 '${module.name}' 中字段 '$propagatedFieldName' 解析为 UnknownType，且未指定 defaultTypeForUnknown。"
              )
          }
        case validTpe => validTpe
      }
      (Field(propagatedFieldName, Default, finalFieldType), originInfo)
    }

    val finalUniqueFieldInfoMap = mutable.LinkedHashMap[String, (Field, Info)]()
    fieldInfoPairs.foreach { case (field, info) =>
      if (finalUniqueFieldInfoMap.contains(field.name)) {
        println(
          s"[WARN] SignalPropagator: 在模块 ${module.name} 的输出 Bundle ${config.outputPortName} 中检测到重复字段名 '${field.name}'。将保留第一个遇到的版本及其 Info。"
        )
      } else {
        finalUniqueFieldInfoMap(field.name) = (field, info)
      }
    }

    val finalUniqueBundleFields: Seq[Field] =
      finalUniqueFieldInfoMap.values.map(_._1).toSeq.sortBy(_.name)
    val finalInfoMap: Map[String, Info] =
      finalUniqueFieldInfoMap.map { case (name, (_, info)) =>
        name -> info
      }.toMap

    if (finalUniqueBundleFields.isEmpty) {
      println(
        s"[WARN] SignalPropagator: 模块 ${module.name} 存在信号源，但为端口 ${config.outputPortName} 生成的 Bundle 字段为空。"
      )
      return ModuleTransformResult(module, None)
    }

    val combinedBundleType = BundleType(finalUniqueBundleFields)

    val newOutputSignalPort =
      Port(module.info, config.outputPortName, Output, combinedBundleType)
    val updatedPorts = module.ports.filterNot(
      _.name == config.outputPortName
    ) :+ newOutputSignalPort

    val localSignalsNeedingIntermediateWire =
      mutable.Map[String, (Expression, Type, String)]()

    localSignalSources.foreach {
      case LocalSignalSource(pfname, SignalOriginInfo(expr, originalType, _)) =>
        getRootReferenceName(expr) match {
          case Some(rootRefName) if !topLevelNames.contains(rootRefName) =>
            val resolvedWireType = originalType match {
              case UnknownType =>
                config.defaultTypeForUnknown.getOrElse(
                  throwInternalError(
                    s"SignalPropagator: 模块 '${module.name}' 中，信号 '${expr.serialize}' (根 $rootRefName) 解析为 UnknownType，且未指定默认类型。"
                  )
                )
              case validTpe => validTpe
            }
            val intermediateWireName =
              s"${config.intermediateWirePrefix}${pfname}"
            localSignalsNeedingIntermediateWire(rootRefName) =
              (expr, resolvedWireType, intermediateWireName)
          case _ =>
        }
    }

    val intermediateWireDefs: Seq[DefWire] =
      localSignalsNeedingIntermediateWire.values.map {
        case (_, resolvedType, wireName) =>
          DefWire(NoInfo, wireName, resolvedType)
      }.toSeq

    val intermediateWireDefaultConnects: Seq[Statement] =
      localSignalsNeedingIntermediateWire.values.map {
        case (_, resolvedWireType, wireName) =>
          IsInvalid(
            NoInfo,
            Reference(
              wireName,
              resolvedWireType
            )
          )
      }.toSeq

    val nodeConnectedToIntermediateWire = mutable.Set[String]()
    def addIntermediateConnects(statement: Statement): Seq[Statement] =
      statement match {
        case nodeDef @ DefNode(info, nodeName, nodeValue) =>
          localSignalsNeedingIntermediateWire.get(nodeName) match {
            case Some((_, resolvedWireType, wireName))
                if !nodeConnectedToIntermediateWire.contains(nodeName) =>
              val intermediateWireRef = Reference(wireName, resolvedWireType)
              val nodeRef = Reference(nodeName, nodeValue.tpe)
              val connectStmt = Connect(info, intermediateWireRef, nodeRef)
              nodeConnectedToIntermediateWire += nodeName
              Seq(nodeDef, connectStmt)
            case _ => Seq(nodeDef)
          }
        case regDef @ DefRegister(info, regName, regType, clock) =>
          localSignalsNeedingIntermediateWire.get(regName) match {
            case Some((_, resolvedWireType, wireName))
                if !nodeConnectedToIntermediateWire.contains(regName) =>
              val intermediateWireRef = Reference(wireName, resolvedWireType)
              val regRef = Reference(regName, regType)
              val connectStmt = Connect(info, intermediateWireRef, regRef)
              nodeConnectedToIntermediateWire += regName
              Seq(regDef, connectStmt)
            case _ => Seq(regDef)
          }
        case regResetDef @ DefRegisterWithReset(
              info,
              regName,
              regType,
              clock,
              reset,
              init
            ) =>
          localSignalsNeedingIntermediateWire.get(regName) match {
            case Some((_, resolvedWireType, wireName))
                if !nodeConnectedToIntermediateWire.contains(regName) =>
              val intermediateWireRef = Reference(wireName, resolvedWireType)
              val regRef = Reference(regName, regType)
              val connectStmt = Connect(info, intermediateWireRef, regRef)
              nodeConnectedToIntermediateWire += regName
              Seq(regResetDef, connectStmt)
            case _ => Seq(regResetDef)
          }
        case block @ Block(stmts) =>
          Seq(block.copy(stmts = stmts.flatMap(addIntermediateConnects)))
        case conditional @ Conditionally(info, pred, conseq, alt) =>
          val newConseqStmts = addIntermediateConnects(conseq)
          val newAltStmts = addIntermediateConnects(alt)
          val finalConseq = newConseqStmts match {
            case Seq(s) => s; case ss => Block(ss)
          }
          val finalAlt = newAltStmts match {
            case Seq(s) => s; case ss => Block(ss)
          }
          Seq(conditional.copy(conseq = finalConseq, alt = finalAlt))
        case layer @ LayerBlock(info, _, body) =>
          val newBodyStmts = addIntermediateConnects(body)
          val finalBody = newBodyStmts match {
            case Seq(s) => s; case ss => Block(ss)
          }
          Seq(layer.copy(body = finalBody))
        case other => Seq(other)
      }

    val existingBodyStmts = module.body match {
      case Block(stmts) => stmts; case EmptyStmt => Seq.empty; case s => Seq(s)
    }
    val bodyWithIntermediateConnectsAdded: Seq[Statement] =
      existingBodyStmts.flatMap(addIntermediateConnects)

    val finalPortFieldConnects: Seq[Connect] = finalUniqueBundleFields.map {
      field =>
        val portFieldAccess = SubField(
          Reference(newOutputSignalPort.name, newOutputSignalPort.tpe),
          field.name,
          field.tpe
        )

        val sourceInfo = allSignalSources
          .find {
            case LocalSignalSource(fname, _)    => fname == field.name
            case ChildSignalSource(_, fname, _) => fname == field.name
          }
          .getOrElse(
            throwInternalError(
              s"SignalPropagator: 模块 ${module.name} 找不到输出字段 '${field.name}' 对应的信号源。"
            )
          )

        val connectSourceExpression: Expression = sourceInfo match {
          case LocalSignalSource(_, origin @ SignalOriginInfo(_, _, _)) =>
            getRootReferenceName(origin.sourceExpression) match {
              case Some(rootRefName)
                  if localSignalsNeedingIntermediateWire.contains(
                    rootRefName
                  ) &&
                    nodeConnectedToIntermediateWire.contains(rootRefName) =>
                val (_, resolvedWireType, wireName) =
                  localSignalsNeedingIntermediateWire(rootRefName)
                Reference(wireName, resolvedWireType)
              case _ =>
                if (
                  origin.signalType != field.tpe && origin.signalType != UnknownType
                ) {
                  println(
                    s"[WARN] SignalPropagator: 模块 ${module.name} 连接 ${origin.sourceExpression.serialize} (类型 ${origin.signalType.serialize}) 到端口 ${field.name} (类型 ${field.tpe.serialize}) 时类型可能不匹配。"
                  )
                }
                origin.sourceExpression
            }
          case ChildSignalSource(_, _, origin) => origin.sourceExpression
        }
        Connect(NoInfo, portFieldAccess, connectSourceExpression)
    }

    val finalBodyStmts: Seq[Statement] =
      intermediateWireDefs ++
        intermediateWireDefaultConnects ++
        bodyWithIntermediateConnectsAdded ++
        finalPortFieldConnects

    val transformedModule =
      module.copy(ports = updatedPorts, body = Block(finalBodyStmts))

    ModuleTransformResult(
      transformedModule,
      Some((config.outputPortName, combinedBundleType, finalInfoMap))
    )
  }
}

// =============================================================================
// === 具体信号传播器的实现 (使用通用框架) ===
// =============================================================================

/** `Conditionally` 谓词传播器
  *
  * 使用 `SignalPropagator` 框架来传播 FIRRTL 中 `when`/`else when` (`Conditionally`)
  * 语句的谓词（条件表达式）。
  */
object ConditionallyPredPropagator {
  private object Extractor {
    private val cache =
      mutable.WeakHashMap[Circuit, Map[String, Seq[(Expression, Info)]]]()
    def extract(circuit: Circuit): Map[String, Seq[(Expression, Info)]] =
      cache.getOrElseUpdate(circuit, compute(circuit))
    private def compute(
        circuit: Circuit
    ): Map[String, Seq[(Expression, Info)]] = {
      val modulePredicatesMap =
        mutable.Map[String, mutable.ListBuffer[(Expression, Info)]]()
      var currentModuleName: String = ""
      def findPredsInStmt(statement: Statement): Unit = statement match {
        case cond @ Conditionally(info, pred, conseq, alt) =>
          pred match {
            case _: Literal => ()
            case p =>
              modulePredicatesMap
                .getOrElseUpdate(
                  currentModuleName,
                  mutable.ListBuffer[(Expression, Info)]()
                ) += ((p, info))
          }
          findPredsInStmt(conseq); findPredsInStmt(alt)
        case Block(stmts)           => stmts.foreach(findPredsInStmt)
        case LayerBlock(_, _, body) => findPredsInStmt(body)
        case _                      => ()
      }
      circuit.modules.foreach { moduleDef =>
        currentModuleName = moduleDef.name
        moduleDef match {
          case mod: Module   => findPredsInStmt(mod.body)
          case cls: DefClass => findPredsInStmt(cls.body)
          case _             => ()
        }
      }
      modulePredicatesMap.map { case (name, buffer) =>
        name -> buffer.distinctBy { case (e, i) =>
          (e.serialize, i.serialize)
        }.toList
      }.toMap
    }
  }

  private val config = PropagatorConfig(
    signalName = "predicate",
    outputPortName = "_cond_pred",
    intermediateWirePrefix = "_cond_pred_prop_wire_",
    localSignalExtractor = Extractor.extract,
    defaultTypeForUnknown = Some(BoolType)
  )

  def transform(
      circuit: Circuit
  ): (Circuit, Option[TopLevelExportInfo]) =
    SignalPropagator.transform(circuit, config)
}

/** `Mux` 条件传播器
  *
  * 使用 `SignalPropagator` 框架来传播 FIRRTL 中 `Mux` (多路选择器) 表达式的 条件选择信号。
  */
object MuxCondPropagator {
  private object Extractor {
    private val cache =
      mutable.WeakHashMap[Circuit, Map[String, Seq[(Expression, Info)]]]()
    def extract(circuit: Circuit): Map[String, Seq[(Expression, Info)]] =
      cache.getOrElseUpdate(circuit, compute(circuit))
    private def compute(
        circuit: Circuit
    ): Map[String, Seq[(Expression, Info)]] = {
      val moduleConditionsMap =
        mutable.Map[String, mutable.ListBuffer[(Expression, Info)]]()
      var currentModuleName: String = ""
      val currentModuleConditionsBuffer =
        mutable.ListBuffer[(Expression, Info)]()

      def findMuxCondsInExpr(expression: Expression, stmtInfo: Info): Unit =
        expression match {
          case Mux(cond, tval, fval, _) =>
            cond match {
              case _: Literal => ()
              case c => currentModuleConditionsBuffer += ((c, stmtInfo))
            }
            findMuxCondsInExpr(cond, stmtInfo);
            findMuxCondsInExpr(tval, stmtInfo);
            findMuxCondsInExpr(fval, stmtInfo)
          case SubField(expr, _, _) => findMuxCondsInExpr(expr, stmtInfo)
          case SubIndex(expr, _, _) => findMuxCondsInExpr(expr, stmtInfo)
          case SubAccess(expr, index, _) =>
            findMuxCondsInExpr(expr, stmtInfo);
            findMuxCondsInExpr(index, stmtInfo)
          case ValidIf(cond, value, _) =>
            findMuxCondsInExpr(cond, stmtInfo);
            findMuxCondsInExpr(value, stmtInfo)
          case DoPrim(_, args, _, _) =>
            args.foreach(findMuxCondsInExpr(_, stmtInfo))
          case PropExpr(_, _, _, args) =>
            args.foreach(findMuxCondsInExpr(_, stmtInfo))
          case ProbeExpr(expr, _)   => findMuxCondsInExpr(expr, stmtInfo)
          case RWProbeExpr(expr, _) => findMuxCondsInExpr(expr, stmtInfo)
          case ProbeRead(expr, _)   => findMuxCondsInExpr(expr, stmtInfo)
          case SequencePropertyValue(_, vs) =>
            vs.foreach(findMuxCondsInExpr(_, stmtInfo))
          case _ => ()
        }
      def findMuxCondsInStmt(statement: Statement): Unit = statement match {
        case stmt @ DefNode(info, _, value) => findMuxCondsInExpr(value, info)
        case stmt @ Connect(info, _, expr)  => findMuxCondsInExpr(expr, info)
        case stmt @ DefRegister(info, _, _, clock) =>
          findMuxCondsInExpr(clock, info)
        case stmt @ DefRegisterWithReset(info, _, _, clock, reset, init) =>
          findMuxCondsInExpr(clock, info); findMuxCondsInExpr(reset, info);
          findMuxCondsInExpr(init, info)
        case stmt @ Stop(info, _, clk, en) =>
          findMuxCondsInExpr(clk, info); findMuxCondsInExpr(en, info)
        case stmt @ Print(info, _, args, clk, en) =>
          args.foreach(findMuxCondsInExpr(_, info));
          findMuxCondsInExpr(clk, info);
          findMuxCondsInExpr(en, info)
        case stmt @ Verification(op, info, clk, pred, en, msg) =>
          findMuxCondsInExpr(clk, info); findMuxCondsInExpr(pred, info);
          findMuxCondsInExpr(en, info)
        case stmt @ PropAssign(info, loc, expr) =>
          findMuxCondsInExpr(loc, info); findMuxCondsInExpr(expr, info)
        case stmt @ Attach(info, exprs) =>
          exprs.foreach(findMuxCondsInExpr(_, info))
        case stmt @ ProbeDefine(info, sink, probeExpr) =>
          findMuxCondsInExpr(sink, info); findMuxCondsInExpr(probeExpr, info)
        case stmt @ ProbeForceInitial(info, probe, value) =>
          findMuxCondsInExpr(probe, info); findMuxCondsInExpr(value, info)
        case stmt @ ProbeReleaseInitial(info, probe) =>
          findMuxCondsInExpr(probe, info)
        case stmt @ ProbeForce(info, clock, cond, probe, value) =>
          findMuxCondsInExpr(clock, info); findMuxCondsInExpr(cond, info);
          findMuxCondsInExpr(probe, info); findMuxCondsInExpr(value, info)
        case stmt @ ProbeRelease(info, clock, cond, probe) =>
          findMuxCondsInExpr(clock, info); findMuxCondsInExpr(cond, info);
          findMuxCondsInExpr(probe, info)
        case Block(stmts) => stmts.foreach(findMuxCondsInStmt)
        case stmt @ Conditionally(info, pred, conseq, alt) =>
          findMuxCondsInExpr(pred, info); findMuxCondsInStmt(conseq);
          findMuxCondsInStmt(alt)
        case stmt @ LayerBlock(info, _, body) => findMuxCondsInStmt(body)
        case _                                => ()
      }
      circuit.modules.foreach { moduleDef =>
        currentModuleName = moduleDef.name
        currentModuleConditionsBuffer.clear()
        moduleDef match {
          case mod: Module   => findMuxCondsInStmt(mod.body)
          case cls: DefClass => findMuxCondsInStmt(cls.body)
          case _             => ()
        }
        if (currentModuleConditionsBuffer.nonEmpty) {
          moduleConditionsMap(currentModuleName) = currentModuleConditionsBuffer
            .distinctBy { case (e, i) =>
              (e.serialize, i.serialize)
            }
            .clone()
        }
      }
      moduleConditionsMap.map { case (name, buffer) =>
        name -> buffer.toList
      }.toMap
    }
  }

  private val config = PropagatorConfig(
    signalName = "condition",
    outputPortName = "_mux_cond",
    intermediateWirePrefix = "_mux_cond_prop_wire_",
    localSignalExtractor = Extractor.extract,
    defaultTypeForUnknown = Some(BoolType)
  )

  def transform(
      circuit: Circuit
  ): (Circuit, Option[TopLevelExportInfo]) =
    SignalPropagator.transform(circuit, config)
}

/** 寄存器信号传播器
  *
  * 使用 `SignalPropagator` 框架来传播 FIRRTL 中所有寄存器 (`DefRegister`,
  * `DefRegisterWithReset`) 的值。
  */
object RegisterSignalPropagator {
  private object RegisterExtractor {
    private val cache =
      mutable.WeakHashMap[Circuit, Map[String, Seq[(Expression, Info)]]]()
    def extract(circuit: Circuit): Map[String, Seq[(Expression, Info)]] =
      cache.getOrElseUpdate(circuit, compute(circuit))
    private def compute(
        circuit: Circuit
    ): Map[String, Seq[(Expression, Info)]] = {
      val moduleRegistersMap =
        mutable.Map[String, mutable.ListBuffer[(Expression, Info)]]()
      var currentModuleName: String = ""
      def findRegistersInStmt(statement: Statement): Unit = statement match {
        case reg @ DefRegister(info, name, tpe, _) =>
          moduleRegistersMap
            .getOrElseUpdate(
              currentModuleName,
              mutable.ListBuffer[(Expression, Info)]()
            ) += ((Reference(name, tpe), info))
        case regReset @ DefRegisterWithReset(info, name, tpe, _, _, _) =>
          moduleRegistersMap
            .getOrElseUpdate(
              currentModuleName,
              mutable.ListBuffer[(Expression, Info)]()
            ) += ((Reference(name, tpe), info))
        case Block(stmts) => stmts.foreach(findRegistersInStmt)
        case Conditionally(_, _, conseq, alt) =>
          findRegistersInStmt(conseq); findRegistersInStmt(alt)
        case LayerBlock(_, _, body) => findRegistersInStmt(body)
        case _                      => ()
      }
      circuit.modules.foreach { moduleDef =>
        currentModuleName = moduleDef.name
        moduleDef match {
          case mod: Module   => findRegistersInStmt(mod.body)
          case cls: DefClass => findRegistersInStmt(cls.body)
          case _             => ()
        }
      }
      moduleRegistersMap.map { case (name, buffer) =>
        name -> buffer.distinctBy { case (e, i) =>
          (e.serialize, i.serialize)
        }.toList
      }.toMap
    }
  }

  private val config = PropagatorConfig(
    signalName = "register signal",
    outputPortName = "_reg_signals",
    intermediateWirePrefix = "_reg_prop_wire_",
    localSignalExtractor = RegisterExtractor.extract,
    defaultTypeForUnknown = None
  )

  def transform(
      circuit: Circuit
  ): (Circuit, Option[TopLevelExportInfo]) =
    SignalPropagator.transform(circuit, config)
}
