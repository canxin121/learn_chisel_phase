// SPDX-License-Identifier: Apache-2.0

package firrtl
package ir

import firrtl.Utils.throwInternalError
import scala.collection.mutable
import scala.collection.mutable.ListBuffer // 明确导入 ListBuffer

/** 通用信号传播器配置
  *
  * @param signalName
  *   用于错误消息和文档的信号类型名称 (例如 "predicate", "condition")
  * @param outputPortName
  *   添加到模块接口的输出端口名称 (例如 "_cond_pred", "_mux_cond")
  * @param intermediateWirePrefix
  *   为本地 DefNode 创建的中间线的名称前缀
  * @param localSignalExtractor
  *   一个函数，接收一个 Circuit，返回一个 Map，其中键是模块名，值是该模块内部直接定义的需要传播的信号表达式列表。
  */
case class PropagatorConfig(
    signalName: String,
    outputPortName: String,
    intermediateWirePrefix: String,
    localSignalExtractor: Circuit => Map[String, Seq[Expression]]
)

/** 通用信号传播器框架
  *
  * 该框架的目标是识别 FIRRTL 电路中特定类型的信号（由 PropagatorConfig 定义），
  * 并将它们沿着模块实例化层级向上传播。对于每个包含或使用了这些信号的模块实例，
  * 会在其接口上添加一个新的 Bundle 类型的输出端口（名称由 PropagatorConfig 定义）。
  * 这个 Bundle 包含了所有源自该模块内部或其子模块实例的被传播信号。
  */
object SignalPropagator {

  // --- 常量定义 ---
  val InstanceSeparator = "__I__"
  val SubfieldSeparator = "__S__"
  val LocalMarker = "local"

  // --- 通用数据结构 ---

  /** 封装信号原始来源的信息。
    * @param sourceExpression
    *   原始信号表达式
    * @param signalType
    *   原始表达式的 FIRRTL 类型 (通常期望为 1 位宽的 GroundType)
    */
  case class SignalOriginInfo(
      sourceExpression: Expression,
      signalType: Type
  )

  /** 信号来源的密封特质 (Sealed Trait)。 表示一个需要被传播到父模块输出端口的信号。
    */
  sealed trait SignalSource

  /** 表示源自当前模块内部的信号。
    * @param propagatedFieldName
    *   在父模块输出 Bundle 中代表此信号的唯一字段名。
    * @param originInfo
    *   包含原始信号表达式及其类型的信息。
    */
  case class LocalSignalSource(
      propagatedFieldName: String,
      originInfo: SignalOriginInfo
  ) extends SignalSource

  /** 表示从子模块实例传播上来的信号。
    * @param instanceName
    *   子模块实例的名称。
    * @param propagatedFieldName
    *   从子模块输出端口传入的字段名。
    * @param originInfo
    *   包含访问子模块信号端口字段的表达式及其类型的信息。
    */
  case class ChildSignalSource(
      instanceName: String,
      propagatedFieldName: String,
      originInfo: SignalOriginInfo
  ) extends SignalSource

  /** 封装单个模块转换操作的结果。
    * @param transformedModule
    *   转换后的模块定义。
    * @param signalPortInfo
    *   如果模块需要输出信号，则为 Some((端口名, Bundle类型))；否则为 None。
    */
  case class ModuleTransformResult(
      transformedModule: DefModule,
      signalPortInfo: Option[(String, BundleType)]
  )

  // --- 辅助函数 ---

  /** 收集模块顶层声明的名称（端口和 Body 内直接定义的元素）。
    * @param targetStmt
    *   模块的 Body (Statement)
    * @param ports
    *   模块的端口列表 (Seq[Port])
    * @return
    *   顶层声明名称的集合 (Set[String])
    */
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

  /** 获取表达式的根引用名称。
    * @param expr
    *   输入表达式
    * @return
    *   Option[String] 包含根引用名称，如果表达式不是以引用开头则为 None。
    */
  private def getRootReferenceName(expr: Expression): Option[String] =
    expr match {
      case Reference(name, _)        => Some(name)
      case SubField(innerExpr, _, _) => getRootReferenceName(innerExpr)
      case _                         => None
    }

  /** 根据信号表达式生成一个基础标识符字符串。
    * @param expr
    *   信号表达式（必须是 Reference 或 SubField 嵌套）
    * @return
    *   生成的基础标识符字符串
    * @throws firrtl.Utils.InternalErrorException
    *   如果表达式类型不符合预期
    */
  private def getSignalBaseIdentifier(
      expr: Expression,
      signalTypeName: String
  ): String = expr match {
    case Reference(name, _) => name
    case SubField(innerExpr, fieldName, _) =>
      val innerIdentifier = getSignalBaseIdentifier(innerExpr, signalTypeName)
      s"${innerIdentifier}${SubfieldSeparator}$fieldName"
    case otherExpr =>
      throwInternalError(
        s"SignalPropagator.getSignalBaseIdentifier: 遇到不符合假设的 ${signalTypeName} 表达式类型: ${otherExpr.getClass.getName}. " +
          s"表达式: ${otherExpr.serialize}. 假设信号是 Reference 或 SubField 嵌套。"
      )
  }

  // --- 核心转换逻辑 ---

  /** 对整个电路执行信号传播转换。
    * @param circuit
    *   原始 FIRRTL 电路
    * @param config
    *   传播器配置
    * @return
    *   转换后的 FIRRTL 电路
    */
  def transform(circuit: Circuit, config: PropagatorConfig): Circuit = {

    // 1. 获取每个模块内部直接使用的信号表达式映射 (根据配置调用提取函数)
    val internalSignalsMap: Map[String, Seq[Expression]] =
      config.localSignalExtractor(circuit)

    // 2. 创建模块名称到模块定义的映射
    val moduleMap: Map[String, DefModule] =
      circuit.modules.map(m => m.name -> m).toMap

    // 3. 缓存，存储已处理过的 (模块名, 实例路径) -> 转换结果
    val processedModuleInstancesCache =
      mutable.Map[(String, Seq[String]), ModuleTransformResult]()

    // 4. 预计算每个模块的顶层声明名称集合
    val topLevelNamesMap = mutable.Map[String, Set[String]]()
    circuit.modules.foreach {
      case module: Module =>
        val names = collectTopLevelNames(module.body, module.ports)
        topLevelNamesMap(module.name) = names
      case classDef: DefClass =>
        val names = collectTopLevelNames(classDef.body, classDef.ports)
        topLevelNamesMap(classDef.name) = names
      case _ => // ExtModule, IntModule 没有 body
    }

    /** 递归处理单个模块实例。
      */
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
                processModule, // Pass the recursive function itself
                config // Pass the configuration
              )
              processedModuleInstancesCache(moduleInstanceCacheKey) =
                transformResult
              transformResult

            case Some(classDef: DefClass) =>
              // 将 DefClass 视为 Module 进行处理
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
              // 将转换结果应用回 DefClass
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
              throwInternalError(
                s"SignalPropagator: 在电路图中找不到模块 '$moduleName'"
              )
          }
      }
    }

    // 5. 从顶层模块开始递归处理
    processModule(circuit.main, Seq(circuit.main))

    // 6. 收集所有处理过的模块定义
    val finalModulesMap = mutable.Map[String, DefModule]()
    processedModuleInstancesCache.values.foreach { result =>
      finalModulesMap(result.transformedModule.name) = result.transformedModule
    }
    // 确保未被处理的模块也包含在内
    circuit.modules.foreach { originalMod =>
      if (!finalModulesMap.contains(originalMod.name)) {
        finalModulesMap(originalMod.name) = originalMod
      }
    }

    // 7. 构建并返回包含已转换模块的新电路
    circuit.copy(modules = finalModulesMap.values.toSeq.sortBy(_.name))
  }

  /** 转换单个模块，添加信号输出端口（如果需要）。
    * @param module
    *   要转换的模块定义。
    * @param moduleMap
    *   电路中所有模块的名称到定义的映射。
    * @param internalSignalsMap
    *   模块名称到其内部信号表达式列表的映射。
    * @param topLevelNames
    *   当前模块顶层声明的名称集合。
    * @param currentInstancePath
    *   从顶层到当前模块实例的路径。
    * @param processFunc
    *   用于递归处理子模块实例的函数。
    * @param config
    *   传播器配置。
    * @return
    *   模块转换结果。
    */
  private def transformModule(
      module: Module,
      moduleMap: Map[String, DefModule],
      internalSignalsMap: Map[String, Seq[Expression]],
      topLevelNames: Set[String],
      currentInstancePath: Seq[String],
      processFunc: (String, Seq[String]) => ModuleTransformResult,
      config: PropagatorConfig
  ): ModuleTransformResult = {

    // 1. 收集当前模块的本地信号源
    val localSignalSources: List[LocalSignalSource] =
      internalSignalsMap
        .get(module.name)
        .map { moduleSignalExpressions =>
          moduleSignalExpressions
            .distinctBy(_.serialize)
            .map { signalExpr =>
              if (getRootReferenceName(signalExpr).isEmpty) {
                throwInternalError(
                  s"SignalPropagator.transformModule: 在模块 ${module.name} 中发现不符合假设的 ${config.signalName}: ${signalExpr.serialize}. " +
                    "无法获取根引用名称。假设信号是 Reference 或 SubField 嵌套。"
                )
              }
              val signalType = signalExpr.tpe match {
                case t: GroundType if t.width == IntWidth(1) => t
                case _                                       => UIntType(IntWidth(1)) // 默认 UInt<1>
              }
              val signalBaseId =
                getSignalBaseIdentifier(signalExpr, config.signalName)
              val instancePathPrefix =
                currentInstancePath.mkString(InstanceSeparator)
              val uniqueFieldName =
                s"${instancePathPrefix}${InstanceSeparator}${LocalMarker}${InstanceSeparator}$signalBaseId"

              LocalSignalSource(
                uniqueFieldName,
                SignalOriginInfo(signalExpr, signalType)
              )
            }
        }
        .getOrElse(Nil)
        .toList

    // 2. 递归处理子模块实例，并收集来自子模块的信号源
    val childSignalSources = mutable.ListBuffer[ChildSignalSource]()
    def findInstancesAndCollectChildSignals(statement: Statement): Unit =
      statement match {
        case inst: DefInstance =>
          val childModuleName = inst.module
          val childInstanceName = inst.name
          val childInstancePath = currentInstancePath :+ childInstanceName
          val childTransformResult =
            processFunc(childModuleName, childInstancePath) // 递归调用

          childTransformResult.signalPortInfo match {
            case Some((childPortName, childBundleType)) =>
              // 确保子端口名与当前配置匹配
              if (childPortName == config.outputPortName) {
                val childSignalPortAccess = SubField(
                  Reference(inst.name, UnknownType),
                  childPortName,
                  childBundleType
                )
                childBundleType.fields.foreach { field =>
                  val uniqueChildFieldName = field.name
                  val fieldAccessExpr =
                    SubField(childSignalPortAccess, field.name, field.tpe)
                  val originInfo =
                    SignalOriginInfo(fieldAccessExpr, field.tpe)
                  childSignalSources += ChildSignalSource(
                    inst.name,
                    uniqueChildFieldName,
                    originInfo
                  )
                }
              } else {
                // 如果子模块有端口但名称不匹配，可能是一个配置错误或意外情况
                // 这里可以选择警告或忽略，当前实现为忽略
              }
            case None => () // 子模块没有输出信号端口
          }
        case Block(stmts) => stmts.foreach(findInstancesAndCollectChildSignals)
        case Conditionally(_, _, conseq, alt) =>
          findInstancesAndCollectChildSignals(conseq);
          findInstancesAndCollectChildSignals(alt)
        case LayerBlock(_, _, body) =>
          findInstancesAndCollectChildSignals(body)
        case _ => ()
      }
    findInstancesAndCollectChildSignals(module.body)

    // 3. 合并本地和子信号源
    val allSignalSources: List[SignalSource] =
      localSignalSources ++ childSignalSources.toList

    if (allSignalSources.isEmpty) {
      return ModuleTransformResult(module, None) // 无需修改
    }

    // 4. 构建新的输出端口 Bundle 类型
    val bundleFields: Seq[Field] = allSignalSources.map { source =>
      val (propagatedFieldName, fieldType) = source match {
        case LocalSignalSource(pfname, origin) => (pfname, origin.signalType)
        case ChildSignalSource(_, pfname, origin) =>
          (pfname, origin.signalType)
      }
      val finalFieldType = fieldType match {
        case gt: GroundType if gt.width == IntWidth(1) => gt
        case _                                         => UIntType(IntWidth(1))
      }
      Field(propagatedFieldName, Default, finalFieldType)
    }
    val finalUniqueBundleFields: Seq[Field] =
      bundleFields.groupBy(_.name).map(_._2.head).toSeq.sortBy(_.name)

    if (finalUniqueBundleFields.isEmpty) {
      return ModuleTransformResult(module, None) // 去重后为空（理论上不应发生）
    }
    val combinedBundleType = BundleType(finalUniqueBundleFields)

    // 5. 创建新的输出端口定义
    val newOutputSignalPort = Port(
      module.info,
      config.outputPortName, // 使用配置的端口名
      Output,
      combinedBundleType
    )
    val updatedPorts = module.ports.filterNot(
      _.name == config.outputPortName
    ) :+ newOutputSignalPort

    // 6. 处理需要中间线的本地信号 (源自 DefNode)
    val localSignalsNeedingIntermediateWire =
      mutable.Map[String, (Expression, Type, String)]()
    val localSignalRootRefToFieldNameMap =
      mutable.Map[String, String]()

    localSignalSources.foreach {
      case LocalSignalSource(pfname, SignalOriginInfo(expr, tpe)) =>
        getRootReferenceName(expr) match {
          case Some(rootRefName) =>
            if (!topLevelNames.contains(rootRefName)) {
              val intermediateWireName = s"${config.intermediateWirePrefix}${pfname}"
              localSignalsNeedingIntermediateWire(rootRefName) =
                (expr, tpe, intermediateWireName)
              localSignalRootRefToFieldNameMap(rootRefName) = pfname
            }
          case None =>
            throwInternalError(
              s"SignalPropagator.transformModule: 在模块 ${module.name} 中为本地 ${config.signalName} ${expr.serialize} (字段名 ${pfname}) " +
                "调用 getRootReferenceName 失败。"
            )
        }
    }

    // 7. 生成中间线的定义语句 (DefWire)
    val intermediateWireDefs: Seq[DefWire] =
      localSignalsNeedingIntermediateWire.values.map {
        case (_, sigType, wireName) => DefWire(NoInfo, wireName, sigType)
      }.toSeq

    // 8. 生成中间线的默认连接语句 (Connect to 0)
    val intermediateWireDefaultConnects: Seq[Connect] =
      localSignalsNeedingIntermediateWire.values.map {
        case (_, sigType, wireName) =>
          val defaultValue = UIntLiteral(0, IntWidth(1))
          Connect(NoInfo, Reference(wireName, sigType), defaultValue)
      }.toSeq

    // 9. 修改模块 Body，插入 Node 到中间线的连接
    val nodeConnectedToIntermediateWire = mutable.Set[String]()
    def addIntermediateConnects(statement: Statement): Seq[Statement] =
      statement match {
        case nodeDef @ DefNode(info, nodeName, _) =>
          localSignalsNeedingIntermediateWire.get(nodeName) match {
            case Some((_, nodeType, wireName))
                if !nodeConnectedToIntermediateWire.contains(nodeName) =>
              val intermediateWireRef = Reference(wireName, nodeType)
              val connectStmt = Connect(
                info,
                intermediateWireRef,
                Reference(nodeName, nodeType)
              )
              nodeConnectedToIntermediateWire += nodeName
              Seq(nodeDef, connectStmt)
            case _ => Seq(nodeDef)
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
        case layer @ LayerBlock(_, _, body) =>
          val newBodyStmts = addIntermediateConnects(body)
          val finalBody = newBodyStmts match {
            case Seq(s) => s; case ss => Block(ss)
          }
          Seq(layer.copy(body = finalBody))
        case other => Seq(other)
      }

    val existingBodyStmts = module.body match {
      case Block(stmts) => stmts
      case EmptyStmt    => Seq.empty
      case s            => Seq(s)
    }
    val bodyWithIntermediateConnectsAdded: Seq[Statement] =
      existingBodyStmts.flatMap(addIntermediateConnects)

    // 10. 生成连接到最终输出端口字段的语句
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
              s"无法为字段 ${field.name} (${config.signalName}) 找到信号源"
            )
          )

        val connectSourceExpression = sourceInfo match {
          case LocalSignalSource(_, origin) =>
            getRootReferenceName(origin.sourceExpression) match {
              case Some(rootRefName)
                  if localSignalsNeedingIntermediateWire.contains(rootRefName)
                    && nodeConnectedToIntermediateWire.contains(rootRefName) =>
                val (_, wireType, wireName) =
                  localSignalsNeedingIntermediateWire(rootRefName)
                Reference(wireName, wireType)
              case _ => origin.sourceExpression
            }
          case ChildSignalSource(_, _, origin) =>
            origin.sourceExpression
        }
        Connect(NoInfo, portFieldAccess, connectSourceExpression)
    }

    // 11. 组合所有新的语句
    val finalBodyStmts: Seq[Statement] =
      intermediateWireDefs ++
        intermediateWireDefaultConnects ++
        bodyWithIntermediateConnectsAdded ++
        finalPortFieldConnects

    // 12. 创建转换后的模块定义
    val transformedModule = module.copy(
      ports = updatedPorts,
      body = Block(finalBodyStmts)
    )

    // 13. 返回转换结果
    ModuleTransformResult(
      transformedModule,
      Some((config.outputPortName, combinedBundleType))
    )
  }
}

/** Conditionally 谓词传播器 (使用通用框架)
  */
object ConditionallyPredPropagator {

  private object Extractor {
    // 缓存计算结果
    private val cache =
      mutable.WeakHashMap[Circuit, Map[String, Seq[Expression]]]()

    def extract(circuit: Circuit): Map[String, Seq[Expression]] = {
      cache.getOrElseUpdate(circuit, compute(circuit))
    }

    private def compute(circuit: Circuit): Map[String, Seq[Expression]] = {
      val modulePredicatesMap =
        mutable.Map[String, mutable.ListBuffer[Expression]]()
      var currentModuleName: String = ""
      val currentModulePredicatesBuffer = mutable.ListBuffer[Expression]()

      def findPredsInStmt(statement: Statement): Unit = statement match {
        case Conditionally(_, pred, conseq, alt) =>
          pred match {
            case _: Literal => // 忽略字面量谓词
            case _          => currentModulePredicatesBuffer += pred
          }
          findPredsInStmt(conseq)
          findPredsInStmt(alt)
        case Block(stmts)           => stmts.foreach(findPredsInStmt)
        case LayerBlock(_, _, body) => findPredsInStmt(body)
        case _                      => ()
      }

      circuit.modules.foreach { moduleDef =>
        currentModuleName = moduleDef.name
        currentModulePredicatesBuffer.clear()
        moduleDef match {
          case mod: Module                 => findPredsInStmt(mod.body)
          case cls: DefClass               => findPredsInStmt(cls.body)
          case _: ExtModule | _: IntModule =>
        }
        if (currentModulePredicatesBuffer.nonEmpty) {
          modulePredicatesMap(currentModuleName) =
            currentModulePredicatesBuffer.distinctBy(_.serialize)
        }
      }
      modulePredicatesMap.map { case (name, buffer) =>
        name -> buffer.toList
      }.toMap
    }
  }

  private val config = PropagatorConfig(
    signalName = "predicate",
    outputPortName = "_cond_pred",
    intermediateWirePrefix = "_cond_pred_prop_wire_",
    localSignalExtractor = Extractor.extract // 使用上面的提取逻辑
  )

  /** 对电路执行 Conditionally 谓词传播转换。
    * @param circuit
    *   原始 FIRRTL 电路
    * @return
    *   转换后的 FIRRTL 电路
    */
  def transform(circuit: Circuit): Circuit = {
    SignalPropagator.transform(circuit, config)
  }
}

/** Mux 条件传播器 (使用通用框架)
  */
object MuxCondPropagator {

  private object Extractor {
    // 缓存计算结果
    private val cache =
      mutable.WeakHashMap[Circuit, Map[String, Seq[Expression]]]()

    def extract(circuit: Circuit): Map[String, Seq[Expression]] = {
      cache.getOrElseUpdate(circuit, compute(circuit))
    }

    private def compute(circuit: Circuit): Map[String, Seq[Expression]] = {
      val moduleConditionsMap =
        mutable.Map[String, mutable.ListBuffer[Expression]]()
      var currentModuleName: String = ""
      val currentModuleConditionsBuffer = mutable.ListBuffer[Expression]()

      def findMuxCondsInExpr(expression: Expression): Unit = expression match {
        case Mux(cond, tval, fval, _) =>
          cond match {
            case _: Literal => // 忽略字面量条件
            case _          => currentModuleConditionsBuffer += cond
          }
          findMuxCondsInExpr(cond) // 递归检查条件本身是否包含 Mux
          findMuxCondsInExpr(tval)
          findMuxCondsInExpr(fval)
        case SubField(expr, _, _) => findMuxCondsInExpr(expr)
        case SubIndex(expr, _, _) => findMuxCondsInExpr(expr)
        case SubAccess(expr, index, _) =>
          findMuxCondsInExpr(expr); findMuxCondsInExpr(index)
        case ValidIf(cond, value, _) =>
          findMuxCondsInExpr(cond); findMuxCondsInExpr(value)
        case DoPrim(_, args, _, _) => args.foreach(findMuxCondsInExpr)
        // 添加对 FIRRTL 1.2+ 表达式类型的处理
        case PropExpr(_, _, _, args) => args.foreach(findMuxCondsInExpr)
        case ProbeExpr(expr, _)      => findMuxCondsInExpr(expr)
        case RWProbeExpr(expr, _)    => findMuxCondsInExpr(expr)
        case ProbeRead(expr, _)      => findMuxCondsInExpr(expr)
        case SequencePropertyValue(_, values) =>
          values.foreach(findMuxCondsInExpr)
        case _ => ()
      }

      def findMuxCondsInStmt(statement: Statement): Unit = statement match {
        case DefNode(_, _, value) => findMuxCondsInExpr(value)
        case Connect(_, _, expr)  => findMuxCondsInExpr(expr)
        case Stop(_, _, clk, en) =>
          findMuxCondsInExpr(clk); findMuxCondsInExpr(en)
        case Print(_, _, args, clk, en) =>
          args.foreach(findMuxCondsInExpr); findMuxCondsInExpr(clk);
          findMuxCondsInExpr(en)
        case Verification(_, _, clk, pred, en, _) =>
          findMuxCondsInExpr(clk); findMuxCondsInExpr(pred);
          findMuxCondsInExpr(en)
        case DefRegister(_, _, _, clock) => findMuxCondsInExpr(clock)
        case DefRegisterWithReset(_, _, _, clock, reset, init) =>
          findMuxCondsInExpr(clock); findMuxCondsInExpr(reset);
          findMuxCondsInExpr(init)
        // 添加对 FIRRTL 1.2+ 语句类型的处理
        case PropAssign(_, loc, expr) =>
          findMuxCondsInExpr(loc); findMuxCondsInExpr(expr)
        case Attach(_, exprs) => exprs.foreach(findMuxCondsInExpr)
        case ProbeDefine(_, sink, probeExpr) =>
          findMuxCondsInExpr(sink); findMuxCondsInExpr(probeExpr)
        case ProbeForceInitial(_, probe, value) =>
          findMuxCondsInExpr(probe); findMuxCondsInExpr(value)
        case ProbeReleaseInitial(_, probe) => findMuxCondsInExpr(probe)
        case ProbeForce(_, clock, cond, probe, value) =>
          findMuxCondsInExpr(clock); findMuxCondsInExpr(cond);
          findMuxCondsInExpr(probe); findMuxCondsInExpr(value)
        case ProbeRelease(_, clock, cond, probe) =>
          findMuxCondsInExpr(clock); findMuxCondsInExpr(cond);
          findMuxCondsInExpr(probe)

        case Block(stmts) => stmts.foreach(findMuxCondsInStmt)
        case Conditionally(_, pred, conseq, alt) =>
          findMuxCondsInExpr(pred) // Conditionally 的谓词也可能包含 Mux
          findMuxCondsInStmt(conseq)
          findMuxCondsInStmt(alt)
        case LayerBlock(_, _, body) => findMuxCondsInStmt(body)
        case _                      => ()
      }

      circuit.modules.foreach { moduleDef =>
        currentModuleName = moduleDef.name
        currentModuleConditionsBuffer.clear()
        moduleDef match {
          case mod: Module                 => findMuxCondsInStmt(mod.body)
          case cls: DefClass               => findMuxCondsInStmt(cls.body)
          case _: ExtModule | _: IntModule =>
        }
        if (currentModuleConditionsBuffer.nonEmpty) {
          moduleConditionsMap(currentModuleName) =
            currentModuleConditionsBuffer.distinctBy(_.serialize)
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
    localSignalExtractor = Extractor.extract // 使用上面的提取逻辑
  )

  /** 对电路执行 Mux 条件传播转换。
    * @param circuit
    *   原始 FIRRTL 电路
    * @return
    *   转换后的 FIRRTL 电路
    */
  def transform(circuit: Circuit): Circuit = {
    SignalPropagator.transform(circuit, config)
  }
}