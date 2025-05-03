// 适用于chisel 5.1.0
package firrtl
package ir

// 导入 firrtl.Utils 中的辅助函数和类型定义
import firrtl.Utils.{throwInternalError, BoolType} // 导入 BoolType, IntWidth
import firrtl.ir.Info
import firrtl.ir.BundleType // 确保导入 BundleType
import firrtl.ir.VectorType // 确保导入 VectorType
import firrtl.ir.GroundType // 确保导入 GroundType
import scala.collection.mutable
import scala.collection.mutable.ListBuffer

/** 描述顶层模块导出 Bundle 中单个字段（信号）的信息
  *
  * @param fieldName
  *   该信号在导出 Bundle 中的唯一 **压缩后** 字段名 (例如 "_s0", "_s1")。
  * @param fieldtype
  *   信号的类型 (`Type`)。
  * @param info
  *   该信号来源的原始信息 (`Info`)。
  */
case class ExportedSignalInfo(
    fieldName: String, // 现在是压缩后的名称
    fieldtype: Type,
    info: Info
)

/** 描述添加到顶层模块的整个导出端口的信息
  *
  * @param portName
  *   添加到顶层模块的新端口的名称 (例如 "_cp", "_mc", "_rs")。
  * @param exportedSignals
  *   一个序列，包含该端口 Bundle 内所有字段（信号）的详细信息 (`ExportedSignalInfo`)。 字段名是压缩后的名称。
  */
case class TopLevelExportInfo(
    portName: String,
    exportedSignals: Seq[ExportedSignalInfo]
)

// --- PropagatorConfig 保持不变 ---
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
  *         i. 创建一个新的输出端口（类型为 `BundleType`），其字段对应于所有需要传播的信号。字段名称是压缩后的唯一名称。 ii.
  *            解析信号类型，如果原始类型是 `UnknownType` 且 `defaultTypeForUnknown`
  *            已设置，则使用默认类型。否则，保留原始类型或（对于寄存器等）在 `UnknownType` 时报错。 iii. 对于源自本地
  *            `DefNode`（非顶层定义）的信号，可能需要创建中间 `DefWire` 并连接 `DefNode` 到该线。 iv.
  *            将所有来源（本地信号、中间线、子模块端口字段）连接到新输出端口的相应字段。 v. 返回转换后的模块和新端口信息。 4.
  *            最终，顶层模块将包含一个输出端口，其中捆绑了整个设计中所有被传播的信号。 5. （新增）`transform`
  *            方法现在返回一个元组 `(Circuit, Option[TopLevelExportInfo], Map[String,
  *            String])`，其中包含转换后的电路、关于顶层模块新增端口的详细信息（如果添加了端口），以及一个从压缩名称映射回原始名称的字典。
  */
object SignalPropagator {

  // --- 名称压缩器 ---
  private class NameCompressor {
    private val originalToCompressed = mutable.Map[String, String]()
    private val compressedToOriginal = mutable.Map[String, String]()
    private var counter = 0

    def compress(originalName: String): String = {
      originalToCompressed.getOrElseUpdate(
        originalName, {
          val compressed = s"_s$counter"
          counter += 1
          compressedToOriginal(compressed) = originalName
          compressed
        }
      )
    }

    def getDictionary(): Map[String, String] = compressedToOriginal.toMap
  }

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
    def originalFieldName: String // 字段名现在存储原始长名称
  }

  case class LocalSignalSource(
      originalFieldName: String, // 重命名
      originInfo: SignalOriginInfo
  ) extends SignalSource {
    override def getOriginInfo: Info = originInfo.originInfo
  }

  case class ChildSignalSource(
      instanceName: String,
      originalFieldName: String, // 重命名
      originInfo: SignalOriginInfo,
      isConditional: Boolean
  ) extends SignalSource {
    override def getOriginInfo: Info = originInfo.originInfo
  }

  case class ModuleTransformResult(
      transformedModule: DefModule,
      signalPortInfo: Option[
        (String, BundleType, Map[String, Info])
      ] // Map key is compressed name
  )

  // --- 新增：辅助函数，用于递归扁平化信号表达式和名称 ---
  /** 递归地将信号（特别是寄存器）展开为其标量元素。
    *
    * @param baseExpr
    *   访问信号的基础表达式 (例如 Reference("myReg", ...))
    * @param baseOriginalName
    *   信号的原始基础名称 (例如 "Top__I__inst__M__MyModule__S__myReg")
    * @param signalType
    *   信号的 FIRRTL 类型
    * @param originInfo
    *   原始来源信息
    * @return
    *   一个序列，包含每个标量元素的信息： (扁平化原始名称, 标量访问表达式, 标量类型, 原始Info)
    */
  private def flattenSignalExpr(
      baseExpr: Expression,
      baseOriginalName: String,
      signalType: Type,
      originInfo: Info
  ): Seq[(String, Expression, Type, Info)] = {
    val results = ListBuffer[(String, Expression, Type, Info)]()

    def run(
        currentExpr: Expression,
        currentName: String,
        currentType: Type
    ): Unit = {
      currentType match {
        case vt @ VectorType(elementType, size) =>
          if (size > 0) {
            (0 until size).foreach { i =>
              // 递归处理每个元素，追加索引到名称和表达式
              val elementExpr = SubIndex(currentExpr, i, elementType)
              val elementName = s"${currentName}_$i"
              run(elementExpr, elementName, elementType)
            }
          } // 零长度向量忽略
        case bt @ BundleType(fields) =>
          fields.foreach { field =>
            // 递归处理每个字段，追加字段名到名称和表达式
            val fieldExpr = SubField(currentExpr, field.name, field.tpe)
            val fieldName = s"${currentName}_${field.name}" // 使用下划线分隔 Bundle 字段
            run(fieldExpr, fieldName, field.tpe)
          }
        case gt: GroundType =>
          // 基本情况：遇到标量类型，添加结果
          results += ((currentName, currentExpr, gt, originInfo))
        case otherType =>
          // 对于其他类型（例如 Analog），如果需要，可以按原样处理或发出警告
          // 当前行为：将其视为“标量”并添加
          println(
            s"[WARN] SignalPropagator.flattenSignalExpr: Encountered non-ground/vector/bundle type '${otherType.serialize}' for base '$baseOriginalName'. Treating as scalar."
          )
          results += ((currentName, currentExpr, otherType, originInfo))
      }
    }

    run(baseExpr, baseOriginalName, signalType)
    results.toList
  }

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
    * @param circuit
    *   原始 FIRRTL 电路。
    * @param config
    *   `PropagatorConfig`，定义了要传播的信号类型及其处理方式。
    * @return
    *   一个元组 `(Circuit, Option[TopLevelExportInfo], Map[String, String])`:
    *   - 第一个元素是转换后的 FIRRTL 电路。
    *   - 第二个元素是 `Option[TopLevelExportInfo]`，包含顶层导出端口信息（使用压缩字段名）。
    *   - 第三个元素是 `Map[String, String]`，是从压缩名称映射回原始长名称的字典。
    */
  def transform(
      circuit: Circuit,
      config: PropagatorConfig
  ): (Circuit, Option[TopLevelExportInfo], Map[String, String]) = {
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
      case _ =>
    }

    val nameCompressor = new NameCompressor()

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
                config,
                nameCompressor
              )
              processedModuleInstancesCache(moduleInstanceCacheKey) =
                transformResult
              transformResult
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
                    s"[WARN] SignalPropagator: 在顶层模块 ${circuit.main} 的 infoMap 中找不到压缩字段 ${field.name} 的 Info，使用 NoInfo。"
                  )
                  NoInfo
                }
              )
              ExportedSignalInfo(field.name, field.tpe, originInfo)
            }
            .distinct // 添加 distinct 来移除重复项
            .sortBy(_.fieldName)
          TopLevelExportInfo(portName, exportedSignals)
      }

    (finalCircuit, topLevelExportInfo, nameCompressor.getDictionary())
  }

  private def transformModule(
      module: Module,
      moduleMap: Map[String, DefModule],
      internalSignalsMap: Map[String, Seq[(Expression, Info)]],
      topLevelNames: Set[String],
      currentInstancePath: Seq[String],
      processFunc: (String, Seq[String]) => ModuleTransformResult,
      config: PropagatorConfig,
      nameCompressor: NameCompressor
  ): ModuleTransformResult = {

    // --- 修改本地信号处理以支持扁平化 ---
    val localSignalSources: List[LocalSignalSource] =
      internalSignalsMap
        .get(module.name)
        .map { moduleSignalExprInfoPairs =>
          moduleSignalExprInfoPairs
            .distinctBy { case (expr, info) =>
              (expr.serialize, info.serialize)
            }
            .flatMap { case (signalExpr, originInfo) => // 改为 flatMap
              val rootRefNameOpt = getRootReferenceName(signalExpr)
              if (rootRefNameOpt.isEmpty) {
                throwInternalError(
                  s"SignalPropagator.transformModule: 在模块 ${module.name} 中发现不符合假设的 ${config.signalName}: ${signalExpr.serialize}. " +
                    "无法获取根引用名称。"
                )
              }

              val signalBaseId = getSignalBaseIdentifier(
                signalExpr,
                config.signalName
              )
              val instancePathPrefix =
                currentInstancePath.mkString(InstanceSeparator)
              val originalBaseFieldName = // 这是未扁平化的基础名称
                s"${instancePathPrefix}${ModuleMarker}${module.name}${SignalMarker}$signalBaseId"

              // --- 开始扁平化逻辑 (仅对寄存器信号 _rs 生效) ---
              if (config.outputPortName == "_rs") {
                signalExpr match {
                  case ref @ Reference(_, tpe) =>
                    flattenSignalExpr(
                      ref,
                      originalBaseFieldName,
                      tpe,
                      originInfo
                    )
                      .map {
                        case (
                              flattenedName,
                              scalarExpr,
                              scalarType,
                              info
                            ) =>
                          LocalSignalSource(
                            flattenedName, // 使用扁平化后的名称
                            SignalOriginInfo(
                              scalarExpr,
                              scalarType,
                              info
                            ) // 使用标量信息
                          )
                      }
                  case otherExpr =>
                    // 对于非 Reference 的寄存器源（理论上不应发生，因为提取器应返回 Reference）
                    // 按原样处理，不进行扁平化，并发出警告
                    println(
                      s"[WARN] SignalPropagator: Register signal source in ${module.name} is not a simple Reference: ${otherExpr.serialize}. Flattening might be incomplete."
                    )
                    Seq(
                      LocalSignalSource(
                        originalBaseFieldName,
                        SignalOriginInfo(
                          otherExpr,
                          otherExpr.tpe,
                          originInfo
                        )
                      )
                    )
                }
              } else {
                // --- 对于非寄存器信号，保持原有逻辑 ---
                Seq(
                  LocalSignalSource(
                    originalBaseFieldName, // 使用原始（未扁平化）名称
                    SignalOriginInfo(
                      signalExpr,
                      signalExpr.tpe,
                      originInfo
                    ) // 使用原始表达式和类型
                  )
                )
              }
            // --- 结束扁平化逻辑 ---
            }
        }
        .getOrElse(Nil)
        .toList

    // --- 子信号处理逻辑基本不变，假设子模块已完成扁平化 ---
    val childSignalSources = mutable.ListBuffer[ChildSignalSource]()
    val childInstanceResults = mutable.Map[String, ModuleTransformResult]()

    def findInstancesAndCollectChildSignals(
        statement: Statement,
        isInConditionalContext: Boolean
    ): Unit =
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
                UnknownType // 类型在这里不重要，会被 SubField 覆盖
              )
              val childSignalPortAccessBase = SubField(
                instanceRef,
                childPortName,
                childBundleType
              )

              childBundleType.fields.foreach { field =>
                // field.name 是压缩后的名称 (e.g., _s10)
                // 我们需要通过字典找到原始的、扁平化的名称 (e.g., Top__I__childInst__M__ChildMod__S__regVec_0)
                val originalFlattenedFieldName = nameCompressor
                  .getDictionary()
                  .getOrElse(
                    field.name,
                    throwInternalError(
                      s"SignalPropagator: 在压缩字典中找不到压缩名称 ${field.name} (来自实例 ${inst.name} 的端口 ${childPortName}) 对应的原始名称。"
                    )
                  )

                val fieldAccessExpr =
                  SubField(childSignalPortAccessBase, field.name, field.tpe)

                val originInfoForField = childInfoMap.getOrElse(
                  field.name, {
                    println(
                      s"[WARN] SignalPropagator: 在子模块 ${childModuleName} (实例 ${inst.name}) 的 infoMap 中找不到压缩字段 ${field.name} 的 Info，使用 NoInfo。"
                    )
                    NoInfo
                  }
                )
                val originInfo = SignalOriginInfo(
                  fieldAccessExpr, // 表达式访问子模块端口的扁平化字段
                  field.tpe, // 子模块端口字段的类型（应为标量）
                  originInfoForField
                )
                childSignalSources += ChildSignalSource(
                  inst.name,
                  originalFlattenedFieldName, // 使用从字典查到的原始扁平化名称
                  originInfo,
                  isInConditionalContext
                )
              }
            case _ => () // 子模块没有输出此类型的信号端口
          }
        // ... (rest of findInstancesAndCollectChildSignals remains the same) ...
        case Block(stmts) =>
          stmts.foreach(
            findInstancesAndCollectChildSignals(_, isInConditionalContext)
          )
        case Conditionally(_, _, conseq, alt) =>
          findInstancesAndCollectChildSignals(conseq, true);
          findInstancesAndCollectChildSignals(alt, true)
        case _ =>
      }
    findInstancesAndCollectChildSignals(module.body, false)

    val allSignalSources: List[SignalSource] =
      localSignalSources ++ childSignalSources.toList

    if (allSignalSources.isEmpty) {
      return ModuleTransformResult(module, None)
    }

    // --- Bundle 创建逻辑不变，依赖于 allSignalSources 中的 originalFieldName ---
    val fieldInfoOriginalNameTriples: Seq[(Field, Info, String)] =
      allSignalSources.map { source =>
        // source.originalFieldName 现在是扁平化的名称
        val (originalFieldName, originalType, originInfo) = source match {
          case LocalSignalSource(ofname, sigOrigin) =>
            (ofname, sigOrigin.signalType, sigOrigin.originInfo)
          case ChildSignalSource(_, ofname, sigOrigin, _) =>
            (ofname, sigOrigin.signalType, sigOrigin.originInfo)
        }

        val compressedFieldName =
          nameCompressor.compress(originalFieldName) // 压缩扁平化名称

        // 类型检查：此时 originalType 应该是标量类型
        originalType match {
          case UnknownType =>
            config.defaultTypeForUnknown match {
              case Some(defaultTpe) =>
                println(
                  s"[INFO] SignalPropagator: 模块 '${module.name}' 中原始字段 '$originalFieldName' (压缩为 '$compressedFieldName') 类型未知，使用默认 ${defaultTpe.serialize}。"
                )
                (
                  Field(compressedFieldName, Default, defaultTpe),
                  originInfo,
                  originalFieldName
                )
              case None =>
                // 对于寄存器，UnknownType 通常不应该发生，因为 DefRegister 有类型
                // 但如果发生，并且没有默认值，则报错
                throwInternalError(
                  s"SignalPropagator: 模块 '${module.name}' 中原始字段 '$originalFieldName' (压缩为 '$compressedFieldName') 解析为 UnknownType，且未指定 defaultTypeForUnknown。"
                )
            }
          case gt: GroundType =>
            (
              Field(compressedFieldName, Default, gt),
              originInfo,
              originalFieldName
            )
          case otherType =>
            // 如果扁平化后仍然不是 GroundType (理论上不应发生，除非 flattenSignalExpr 逻辑有误或处理了特殊类型)
            throwInternalError(
              s"SignalPropagator: 模块 '${module.name}' 中原始字段 '$originalFieldName' (压缩为 '$compressedFieldName') 在扁平化后类型不是 GroundType: ${otherType.serialize}."
            )

        }
      }
    // ... (rest of bundle creation logic: finalUniqueFieldInfoMap, finalUniqueBundleFields, finalInfoMap) ...
    val finalUniqueFieldInfoMap =
      mutable.LinkedHashMap[String, (Field, Info, String)]()
    fieldInfoOriginalNameTriples.foreach { case (field, info, originalName) =>
      val compressedName = field.name
      if (finalUniqueFieldInfoMap.contains(compressedName)) {
        // 警告信息现在可能更有用，因为它显示了扁平化的原始名称
        println(
          s"[WARN] SignalPropagator: 在模块 ${module.name} 的输出 Bundle ${config.outputPortName} 中检测到重复压缩字段名 '${compressedName}' (原始: '${finalUniqueFieldInfoMap(compressedName)._3}' vs '${originalName}')。将保留第一个遇到的版本。"
        )
      } else {
        finalUniqueFieldInfoMap(compressedName) = (field, info, originalName)
      }
    }

    val finalUniqueBundleFields: Seq[Field] =
      finalUniqueFieldInfoMap.values.map(_._1).toSeq.sortBy(_.name)
    val finalInfoMap: Map[String, Info] =
      finalUniqueFieldInfoMap.map { case (cName, (_, info, _)) =>
        cName -> info
      }.toMap

    if (finalUniqueBundleFields.isEmpty) {
      println(
        s"[WARN] SignalPropagator: 模块 ${module.name} 存在信号源，但为端口 ${config.outputPortName} 生成的 Bundle 字段为空。"
      )
      return ModuleTransformResult(module, None)
    }

    val combinedBundleType = BundleType(
      finalUniqueBundleFields
    ) // Bundle 现在只包含标量字段

    val newOutputSignalPort =
      Port(module.info, config.outputPortName, Output, combinedBundleType)
    val updatedPorts = module.ports.filterNot(
      _.name == config.outputPortName
    ) :+ newOutputSignalPort

    // --- 中间线逻辑基本不变，但现在处理的是标量信号 ---
    val localSignalsNeedingIntermediateWire =
      mutable.Map[
        String,
        (Expression, Type, String)
      ]() // Key is now flattened original name

    val conditionalChildSignalsNeedingIntermediateWire =
      mutable
        .Map[String, (String, Type, String)]() // Key is flattened original name

    localSignalSources.foreach {
      case LocalSignalSource(
            originalFlattenedName, // 现在是扁平化名称
            SignalOriginInfo(scalarExpr, scalarType, _)
          ) =>
        // 检查 scalarExpr 的根引用是否是顶层定义
        getRootReferenceName(scalarExpr) match {
          case Some(rootRefName) if !topLevelNames.contains(rootRefName) =>
            // scalarType 应该是 GroundType 或解析后的默认类型
            val resolvedWireType = scalarType match {
              case UnknownType => // 不太可能发生，但以防万一
                config.defaultTypeForUnknown.getOrElse(
                  throwInternalError(
                    s"SignalPropagator: 模块 '${module.name}' 中，本地信号 '${scalarExpr.serialize}' (根 $rootRefName, 原始扁平化字段 $originalFlattenedName) 解析为 UnknownType，且未指定默认类型。"
                  )
                )
              case validTpe => validTpe
            }
            val compressedFieldName =
              nameCompressor.compress(originalFlattenedName)
            val intermediateWireName =
              s"${config.intermediateWirePrefix}${compressedFieldName}"
            // 使用原始扁平化名称作为 Key，存储标量表达式、类型和中间线名
            localSignalsNeedingIntermediateWire(originalFlattenedName) =
              (scalarExpr, resolvedWireType, intermediateWireName)
          case _ => // 顶层信号或无法确定根名称（理论上不应发生）
        }
    }

    childSignalSources.foreach {
      case ChildSignalSource(
            instName,
            originalFlattenedName, // 现在是扁平化名称
            sigOrigin,
            isConditional
          ) if isConditional =>
        val resolvedWireType = sigOrigin.signalType match { // signalType 应该是标量
          case UnknownType =>
            throwInternalError(
              s"SignalPropagator: 模块 '${module.name}' 中，来自条件实例 '$instName' 的信号 (原始扁平化字段 '$originalFlattenedName') 解析为 UnknownType。"
            )
          case validTpe => validTpe
        }
        val compressedFieldName = nameCompressor.compress(originalFlattenedName)
        val intermediateWireName =
          s"${config.intermediateWirePrefix}${compressedFieldName}"
        // 使用原始扁平化名称作为 Key
        conditionalChildSignalsNeedingIntermediateWire(originalFlattenedName) =
          (instName, resolvedWireType, intermediateWireName)
      case _ =>
    }

    // ... (Intermediate wire definitions and default connections remain similar, using compressedWireName and resolvedType) ...
    val localIntermediateWireDefs: Seq[DefWire] =
      localSignalsNeedingIntermediateWire.values.map {
        case (_, resolvedType, compressedWireName) =>
          DefWire(NoInfo, compressedWireName, resolvedType)
      }.toSeq

    val childIntermediateWireDefs: Seq[DefWire] =
      conditionalChildSignalsNeedingIntermediateWire.values.map {
        case (_, resolvedType, compressedWireName) =>
          DefWire(NoInfo, compressedWireName, resolvedType)
      }.toSeq

    val localIntermediateWireDefaults: Seq[Statement] =
      localSignalsNeedingIntermediateWire.values.map {
        case (_, resolvedWireType, compressedWireName) =>
          IsInvalid(NoInfo, Reference(compressedWireName, resolvedWireType))
      }.toSeq

    val childIntermediateWireDefaults: Seq[Statement] =
      conditionalChildSignalsNeedingIntermediateWire.values.map {
        case (_, resolvedType, compressedWireName) =>
          IsInvalid(NoInfo, Reference(compressedWireName, resolvedType))
      }.toSeq

    val intermediateWireDefs =
      localIntermediateWireDefs ++ childIntermediateWireDefs
    val intermediateWireDefaultConnects =
      localIntermediateWireDefaults ++ childIntermediateWireDefaults

    // --- 中间连接逻辑调整：匹配基于原始扁平化名称 ---
    val nodesConnectedToIntermediateWire =
      mutable.Set[String]() // Stores originalFlattenedName
    val conditionalInstancesConnected =
      mutable.Set[String]() // Stores originalFlattenedName

    def addIntermediateConnections(statement: Statement): Seq[Statement] =
      statement match {
        case nodeDef @ DefNode(info, nodeName, nodeValue) =>
          // 需要检查是否有任何 *扁平化* 的本地信号源自此 Node
          val connects = localSignalsNeedingIntermediateWire.collect {
            case (
                  origFlatName,
                  (scalarExpr, resolvedWireType, compressedWireName)
                )
                if getRootReferenceName(scalarExpr).contains(nodeName) &&
                  !nodesConnectedToIntermediateWire.contains(origFlatName) =>
              // 连接 Node 到对应的中间线
              val intermediateWireRef =
                Reference(compressedWireName, resolvedWireType)
              val nodeRef = Reference(nodeName, nodeValue.tpe) // Node 本身
              // 注意：这里可能需要更复杂的逻辑来连接 Node 的 *部分* 到中间线
              // 但对于简单情况（Node 直接等于标量表达式），这样可以工作
              // 如果 scalarExpr 是 SubField/SubIndex of nodeRef，则连接 nodeRef 可能不正确
              // 暂时假设 scalarExpr 就是 nodeRef (或其等效引用)
              // TODO: Review this connection logic for complex nodeValue cases
              if (scalarExpr.serialize != nodeRef.serialize) {
                println(
                  s"[WARN] SignalPropagator: Connecting Node '$nodeName' directly to intermediate wire '$compressedWireName' for flattened signal '$origFlatName'. Source expression was '${scalarExpr.serialize}'. This might be incorrect if the node is complex."
                )
              }
              val connectStmt = Connect(
                info,
                intermediateWireRef,
                nodeRef
              ) // Connect the node itself
              nodesConnectedToIntermediateWire += origFlatName
              connectStmt
          }.toSeq
          Seq(nodeDef) ++ connects

        case regDef @ DefRegister(info, regName, regType, clock, reset, init) =>
          // 检查是否有任何 *扁平化* 的本地信号源自此 Register
          val connects = localSignalsNeedingIntermediateWire.collect {
            case (
                  origFlatName,
                  (
                    scalarExpr @ (_: SubField | _: SubIndex | _: Reference),
                    resolvedWireType,
                    compressedWireName
                  ) // scalarExpr 应该是对寄存器或其部分的访问
                )
                if getRootReferenceName(scalarExpr).contains(regName) &&
                  !nodesConnectedToIntermediateWire.contains(origFlatName) =>
              val intermediateWireRef =
                Reference(compressedWireName, resolvedWireType)
              // 连接 scalarExpr (访问寄存器标量部分) 到中间线
              val connectStmt = Connect(info, intermediateWireRef, scalarExpr)
              nodesConnectedToIntermediateWire += origFlatName
              connectStmt
          }.toSeq
          Seq(regDef) ++ connects

        case inst @ DefInstance(info, instName, moduleName, _) =>
          val connectsToAdd =
            conditionalChildSignalsNeedingIntermediateWire.collect {
              case (
                    originalFlattenedName, // Key is now flattened name
                    (`instName`, wireType, compressedWireName)
                  )
                  if !conditionalInstancesConnected.contains(
                    originalFlattenedName // Check against flattened name
                  ) =>
                // 查找对应的 ChildSignalSource 以获取原始表达式
                val sourceInfoOpt = allSignalSources.collectFirst {
                  case cs @ ChildSignalSource(
                        `instName`,
                        `originalFlattenedName`, // Match flattened name
                        _,
                        true
                      ) =>
                    cs
                }
                sourceInfoOpt match {
                  case Some(ChildSignalSource(_, _, sigOrigin, _)) =>
                    val intermediateWireRef =
                      Reference(compressedWireName, wireType)
                    // sigOrigin.sourceExpression 应该是访问子模块输出端口的扁平化字段
                    if (
                      sigOrigin.sourceExpression.tpe != wireType && sigOrigin.sourceExpression.tpe != UnknownType
                    ) {
                      println(
                        s"[WARN] SignalPropagator: Type mismatch connecting conditional instance ${instName}'s signal (original flat: ${originalFlattenedName}, compressed: ${nameCompressor
                            .compress(originalFlattenedName)}) (${sigOrigin.sourceExpression.tpe.serialize}) to intermediate wire ${compressedWireName} (${wireType.serialize})"
                      )
                    }
                    val connectStmt = Connect(
                      info,
                      intermediateWireRef,
                      sigOrigin.sourceExpression // Connect the subfield/subindex expression
                    )
                    conditionalInstancesConnected += originalFlattenedName // Mark flattened name as connected
                    connectStmt
                  case None =>
                    throwInternalError(
                      s"SignalPropagator: Cannot find source info for conditional instance ${instName} signal (original flat: ${originalFlattenedName})."
                    )
                }
            }.toSeq
          Seq(inst) ++ connectsToAdd

        // ... (Block, Conditionally remain the same, recursively calling addIntermediateConnections) ...
        case block @ Block(stmts) =>
          Seq(block.copy(stmts = stmts.flatMap(addIntermediateConnections)))
        case conditional @ Conditionally(info, pred, conseq, alt) =>
          val newConseqStmts = addIntermediateConnections(conseq)
          val newAltStmts = addIntermediateConnections(alt)
          val finalConseq = newConseqStmts match {
            case Seq(s) => s; case ss => Block(ss)
          }
          val finalAlt = newAltStmts match {
            case Seq(s) => s; case ss => Block(ss)
          }
          Seq(conditional.copy(conseq = finalConseq, alt = finalAlt))
        case other => Seq(other)
      }

    val existingBodyStmts = module.body match {
      case Block(stmts) => stmts; case EmptyStmt => Seq.empty; case s => Seq(s)
    }

    val bodyWithIntermediateConnectsAdded: Seq[Statement] =
      existingBodyStmts.flatMap(addIntermediateConnections)

    // --- 最终端口连接逻辑不变，依赖于 allSignalSources 和中间线查找 ---
    val finalPortFieldConnects: Seq[Connect] =
      finalUniqueFieldInfoMap.values.map {
        case (field, _, originalFlattenedName) => // Name is flattened
          val portFieldAccess = SubField(
            Reference(newOutputSignalPort.name, newOutputSignalPort.tpe),
            field.name, // Compressed name
            field.tpe // Scalar type
          )

          val sourceInfo = allSignalSources
            .find(
              _.originalFieldName == originalFlattenedName
            ) // Find by flattened name
            .getOrElse(
              throwInternalError(
                s"SignalPropagator: Module ${module.name} cannot find signal source for original flattened field '${originalFlattenedName}' (compressed to '${field.name}')."
              )
            )

          val connectSourceExpression: Expression = sourceInfo match {
            case LocalSignalSource(
                  origFlatName,
                  origin @ SignalOriginInfo(_, _, _)
                ) =>
              // 检查此扁平化信号是否需要中间线
              localSignalsNeedingIntermediateWire.get(origFlatName) match {
                case Some((_, resolvedWireType, compressedWireName)) =>
                  // 连接来自中间线
                  Reference(compressedWireName, resolvedWireType)
                case None =>
                  // 直接连接原始标量表达式
                  origin.sourceExpression
              }
            case ChildSignalSource(
                  _,
                  childOriginalFlattenedName,
                  origin,
                  isConditional
                ) =>
              if (isConditional) {
                // 检查此条件子信号是否需要中间线
                conditionalChildSignalsNeedingIntermediateWire.get(
                  childOriginalFlattenedName
                ) match {
                  case Some((_, wireType, compressedWireName)) =>
                    // 连接来自中间线
                    Reference(compressedWireName, wireType)
                  case None =>
                    // 理论上不应发生，因为条件信号总是创建中间线
                    throwInternalError(
                      s"SignalPropagator: Cannot find intermediate wire info for conditional child signal (original flat: ${childOriginalFlattenedName})."
                    )
                }
              } else {
                // 直接连接来自子模块端口的标量字段访问表达式
                origin.sourceExpression
              }
          }
          Connect(NoInfo, portFieldAccess, connectSourceExpression)
      }.toSeq

    // ... (Final body assembly and return remain the same) ...
    val finalBodyStmts: Seq[Statement] =
      intermediateWireDefs ++
        intermediateWireDefaultConnects ++
        bodyWithIntermediateConnectsAdded ++
        finalPortFieldConnects

    val transformedModule =
      module.copy(ports = updatedPorts, body = Block(finalBodyStmts))

    ModuleTransformResult(
      transformedModule,
      Some(
        (config.outputPortName, combinedBundleType, finalInfoMap)
      ) // finalInfoMap keys are compressed names
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
        case Block(stmts) => stmts.foreach(findPredsInStmt)
        case _            => ()
      }
      circuit.modules.foreach { moduleDef =>
        currentModuleName = moduleDef.name
        moduleDef match {
          case mod: Module => findPredsInStmt(mod.body)
          case _           => ()
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
    outputPortName = "_cp",
    intermediateWirePrefix = "_cp_prop_wire_",
    localSignalExtractor = Extractor.extract,
    defaultTypeForUnknown = Some(BoolType)
  )

  def transform(
      circuit: Circuit
  ): (Circuit, Option[TopLevelExportInfo], Map[String, String]) =
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
          case _ => ()
        }
      def findMuxCondsInStmt(statement: Statement): Unit = statement match {
        case stmt @ DefNode(info, _, value) => findMuxCondsInExpr(value, info)
        case stmt @ Connect(info, _, expr)  => findMuxCondsInExpr(expr, info)
        case stmt @ DefRegister(info, _, _, clock, reset, init) =>
          findMuxCondsInExpr(clock, info)
        case stmt @ Stop(info, _, clk, en) =>
          findMuxCondsInExpr(clk, info); findMuxCondsInExpr(en, info)
        case stmt @ Print(info, _, args, clk, en) =>
          args.foreach(findMuxCondsInExpr(_, info));
          findMuxCondsInExpr(clk, info);
          findMuxCondsInExpr(en, info)
        case stmt @ Verification(op, info, clk, pred, en, msg) =>
          findMuxCondsInExpr(clk, info); findMuxCondsInExpr(pred, info);
          findMuxCondsInExpr(en, info)
        case stmt @ Attach(info, exprs) =>
          exprs.foreach(findMuxCondsInExpr(_, info))
        case Block(stmts) => stmts.foreach(findMuxCondsInStmt)
        case stmt @ Conditionally(info, pred, conseq, alt) =>
          findMuxCondsInExpr(pred, info); findMuxCondsInStmt(conseq);
          findMuxCondsInStmt(alt)
        case _ => ()
      }
      circuit.modules.foreach { moduleDef =>
        currentModuleName = moduleDef.name
        currentModuleConditionsBuffer.clear()
        moduleDef match {
          case mod: Module => findMuxCondsInStmt(mod.body)
          case _           => ()
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
    outputPortName = "_mc",
    intermediateWirePrefix = "_mc_prop_wire_",
    localSignalExtractor = Extractor.extract,
    defaultTypeForUnknown = Some(BoolType)
  )

  def transform(
      circuit: Circuit
  ): (Circuit, Option[TopLevelExportInfo], Map[String, String]) =
    SignalPropagator.transform(circuit, config)
}

/** 寄存器信号传播器
  *
  * 使用 `SignalPropagator` 框架来传播 FIRRTL 中所有寄存器 (`DefRegister`) 的 **标量** 值。向量和
  * Bundle 类型的寄存器会被递归展开。
  */
object RegisterSignalPropagator {
  // RegisterExtractor 保持不变，它只负责识别顶层 DefRegister
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
        case reg @ DefRegister(info, name, tpe, _, _, _) =>
          moduleRegistersMap
            .getOrElseUpdate(
              currentModuleName,
              mutable.ListBuffer[(Expression, Info)]()
            ) += ((
            Reference(name, tpe),
            info
          )) // Extractor returns the Reference to the whole register
        case Block(stmts) => stmts.foreach(findRegistersInStmt)
        case Conditionally(_, _, conseq, alt) =>
          findRegistersInStmt(conseq); findRegistersInStmt(alt)
        case _ => ()
      }
      circuit.modules.foreach { moduleDef =>
        currentModuleName = moduleDef.name
        moduleDef match {
          case mod: Module => findRegistersInStmt(mod.body)
          case _           => ()
        }
      }
      moduleRegistersMap.map { case (name, buffer) =>
        name -> buffer.distinctBy { case (e, i) =>
          (e.serialize, i.serialize)
        }.toList
      }.toMap
    }
  }

  // Config 保持不变
  private val config = PropagatorConfig(
    signalName = "register signal",
    outputPortName = "_rs",
    intermediateWirePrefix = "_reg_prop_wire_",
    localSignalExtractor = RegisterExtractor.extract,
    defaultTypeForUnknown = None // 寄存器类型应该是已知的
  )

  // transform 调用不变
  def transform(
      circuit: Circuit
  ): (Circuit, Option[TopLevelExportInfo], Map[String, String]) =
    SignalPropagator.transform(circuit, config)
}
