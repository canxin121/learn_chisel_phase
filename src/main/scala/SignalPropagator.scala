// SPDX-License-Identifier: Apache-2.0

package firrtl
package ir

// 导入 firrtl.Utils 中的辅助函数和类型定义
import firrtl.Utils.{throwInternalError, BoolType} // 导入 BoolType，用于默认类型
import scala.collection.mutable
import scala.collection.mutable.ListBuffer

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
  *   一个函数，它接收一个 `Circuit` 对象，并返回一个 `Map[String, Seq[Expression]]`。 这个 Map
  *   的键是模块名称，值是该模块内部直接定义的、需要向上级传播的信号表达式列表。 例如，对于谓词传播，它会提取 `Conditionally` 语句的
  *   `pred` 表达式。
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
    localSignalExtractor: Circuit => Map[String, Seq[Expression]],
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
  *            最终，顶层模块将包含一个输出端口，其中捆绑了整个设计中所有被传播的信号。
  */
object SignalPropagator {

  // --- 常量定义 ---
  // 用于在生成的唯一字段名中分隔实例名称
  val InstanceSeparator = "__I__"
  // 用于在生成的唯一字段名中分隔父引用和子字段/索引/访问器
  val SubfieldSeparator = "__S__"
  // 标记字段名是源自当前模块的本地信号，而不是来自子实例
  val LocalMarker = "local"

  // --- 通用数据结构 ---
  /** 封装信号原始来源的信息。
    *
    * @param sourceExpression
    *   表示原始信号的 FIRRTL 表达式 (例如 `Reference("myNode", ...)` 或 `SubField(...)`)。
    * @param signalType
    *   原始表达式的 FIRRTL 类型。 **注意：** 这可能是 `UnknownType`，特别是在 FIRRTL
    *   解析的早期阶段，或者如果类型推断尚未完成。 `transformModule` 函数将根据 `PropagatorConfig` 中的
    *   `defaultTypeForUnknown` 来处理这种情况。
    */
  case class SignalOriginInfo(
      sourceExpression: Expression,
      signalType: Type // 注意：这里可能存储 UnknownType
  )

  /** 信号来源的密封特质 (Sealed Trait)。 表示一个需要被传播到父模块输出端口的信号。 它可以是源自当前模块内部的信号
    * (`LocalSignalSource`)， 也可以是从子模块实例传播上来的信号 (`ChildSignalSource`)。
    */
  sealed trait SignalSource

  /** 表示源自当前模块内部定义的信号。
    *
    * 例如，一个 `DefNode` 或一个 `Conditionally` 的谓词。
    *
    * @param propagatedFieldName
    *   一个唯一生成的字符串，将用作父模块输出 Bundle 中代表此信号的字段名。 它通常包含实例路径、`LocalMarker`
    *   和信号的基本标识符。
    * @param originInfo
    *   包含原始信号表达式 (`sourceExpression`) 及其（可能未知的）类型 (`signalType`) 的信息。
    */
  case class LocalSignalSource(
      propagatedFieldName: String,
      originInfo: SignalOriginInfo
  ) extends SignalSource

  /** 表示从子模块实例传播上来的信号。
    *
    * 当一个子模块已经被 `SignalPropagator` 处理并添加了输出信号端口时， 父模块通过访问该子模块实例的这个端口来获取信号。
    *
    * @param instanceName
    *   子模块实例的名称。
    * @param propagatedFieldName
    *   从子模块的输出信号端口传入的字段名。这个名称本身已经是唯一的（由子模块生成）。
    * @param originInfo
    *   包含访问子模块信号端口中特定字段的表达式 (`sourceExpression`) 及其（已知且具体的）类型 (`signalType`)
    *   的信息。 这里的类型应该是已知的，因为它直接来自子模块端口的 Bundle 类型定义。
    */
  case class ChildSignalSource(
      instanceName: String,
      propagatedFieldName: String,
      originInfo: SignalOriginInfo // 来自子模块端口的类型应该是已知的
  ) extends SignalSource

  /** 封装单个模块转换操作的结果。
    *
    * @param transformedModule
    *   经过 `transformModule` 处理后的模块定义（可能是原始模块，如果没有信号需要传播）。
    * @param signalPortInfo
    *   如果此模块添加了用于输出信号的新端口，则为 `Some((端口名, Bundle类型))`。 `端口名` 通常是
    *   `config.outputPortName`。 `Bundle类型` 描述了该端口包含的所有传播信号及其类型。
    *   如果模块没有需要传播的信号（既没有本地信号，也没有来自子模块的信号），则为 `None`。
    */
  case class ModuleTransformResult(
      transformedModule: DefModule,
      signalPortInfo: Option[(String, BundleType)]
  )

  // --- 辅助函数 ---
  /** 收集模块顶层声明的名称（端口和 Body 内直接定义的元素）。
    *
    * 用于区分模块主体（`Module` 或 `DefClass`）中直接定义的名称（如 `wire`, `reg`, `node`, `inst`）
    * 和在嵌套结构（如 `when` 块）内部定义的名称。这对于确定是否需要为本地信号创建中间线很有用。
    *
    * @param targetStmt
    *   模块的 Body (`Statement`)。通常是一个 `Block`。
    * @param ports
    *   模块的端口列表 (`Seq[Port]`)。
    * @return
    *   一个包含所有顶层声明名称的集合 (`Set[String]`)。
    */
  private def collectTopLevelNames(
      targetStmt: Statement,
      ports: Seq[Port]
  ): Set[String] = {
    val collectedNames = mutable.Set[String]()
    // 添加所有端口名称
    ports.foreach(p => collectedNames += p.name)

    // 遍历模块主体（通常是 Block）的第一层语句
    targetStmt match {
      case Block(stmts) =>
        stmts.foreach {
          // 如果语句具有名称（如 DefWire, DefNode, DefRegister, DefInstance 等），则添加它
          case definition: HasName => collectedNames += definition.name
          // 忽略没有名称的语句（如 Connect, Print 等）
          case _ => ()
        }
      // 如果主体不是 Block 而是单个带名称的语句 (理论上不常见，但处理以防万一)
      case definition: HasName => collectedNames += definition.name
      // 其他情况（如 EmptyStmt）
      case _ => ()
    }
    collectedNames.toSet // 返回不可变集合
  }

  /** 获取表达式的根引用名称。
    *
    * 尝试从一个可能是嵌套访问（如 `a.b[0]`）的表达式中提取最底层的引用名称（如 `a`）。 这用于检查本地信号的来源是否是顶层定义。
    *
    * @param expr
    *   输入表达式。
    * @return
    *   `Option[String]`，如果表达式以 `Reference` 开头（可能嵌套在 `SubField`, `SubIndex`,
    *   `SubAccess` 中）， 则包含根引用的名称；否则返回 `None`（例如，如果表达式是 `Literal` 或 `PrimOp`）。
    */
  private def getRootReferenceName(expr: Expression): Option[String] =
    expr match {
      case Reference(name, _) => Some(name) // 基本情况：直接引用
      case SubField(innerExpr, _, _) =>
        getRootReferenceName(innerExpr) // 递归：字段访问
      case SubIndex(innerExpr, _, _) =>
        getRootReferenceName(innerExpr) // 递归：索引访问
      case SubAccess(innerExpr, _, _) =>
        getRootReferenceName(innerExpr) // 递归：动态索引访问
      case _ => None // 其他类型的表达式没有根引用
    }

  /** 根据信号表达式生成一个基础标识符字符串。
    *
    * 用于为本地信号创建唯一字段名的一部分。它将嵌套的访问结构（字段、索引）扁平化为一个字符串。 例如： `Reference("myNode",
    * ...)` -> `"myNode"` `SubField(Reference("bundle", ...), "fieldA", ...)` ->
    * `"bundle__S__fieldA"` `SubIndex(Reference("vec", ...), 1, ...)` ->
    * `"vec__S__1"` `SubAccess(Reference("mem", ...), idxExpr, ...)` ->
    * `"mem__S__access_idxExprSerialized"` (其中特殊字符被替换)
    *
    * @param expr
    *   信号表达式（必须是 `Reference` 或其嵌套的 `SubField`/`SubIndex`/`SubAccess`）。
    * @param signalTypeName
    *   信号类型的名称（来自 `config.signalName`），仅用于错误消息。
    * @return
    *   生成的基础标识符字符串。
    * @throws firrtl.Utils.InternalErrorException
    *   如果输入表达式不是预期的类型（Reference 或其访问形式）。
    */
  private def getSignalBaseIdentifier(
      expr: Expression,
      signalTypeName: String // 用于错误消息
  ): String = expr match {
    case Reference(name, _)                => name
    case SubField(innerExpr, fieldName, _) =>
      // 递归获取内部表达式的标识符，并附加字段名
      val innerIdentifier = getSignalBaseIdentifier(innerExpr, signalTypeName)
      s"${innerIdentifier}${SubfieldSeparator}$fieldName"
    case SubIndex(innerExpr, index, _) =>
      // 递归获取内部表达式的标识符，并附加索引值
      val innerIdentifier = getSignalBaseIdentifier(innerExpr, signalTypeName)
      s"${innerIdentifier}${SubfieldSeparator}$index"
    case SubAccess(innerExpr, indexExpr, _) =>
      // 递归获取内部表达式的标识符，并附加动态索引表达式的序列化形式（清理后）
      val innerIdentifier = getSignalBaseIdentifier(innerExpr, signalTypeName)
      // 将索引表达式序列化并替换非字母数字字符为下划线，以创建有效的标识符部分
      val indexStr = indexExpr.serialize.replaceAll("[^\\w]", "_")
      s"${innerIdentifier}${SubfieldSeparator}access_$indexStr"
    // 如果遇到其他类型的表达式，则违反了假设，抛出内部错误
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
    *   转换后的 FIRRTL 电路，其中相关模块已添加了信号输出端口，并且包含了传播逻辑。
    */
  def transform(circuit: Circuit, config: PropagatorConfig): Circuit = {
    // 1. 使用配置中的提取器函数，获取每个模块的本地信号列表
    val internalSignalsMap: Map[String, Seq[Expression]] =
      config.localSignalExtractor(circuit)

    // 2. 创建模块名称到模块定义的映射，方便查找
    val moduleMap: Map[String, DefModule] =
      circuit.modules.map(m => m.name -> m).toMap

    // 3. 缓存已处理的模块 *实例* 的转换结果
    // 键是 (模块名称, 实例路径)，值是 ModuleTransformResult
    // 这对于处理多次实例化的模块至关重要，确保每个实例路径的传播是独立的
    val processedModuleInstancesCache =
      mutable.Map[(String, Seq[String]), ModuleTransformResult]()

    // 4. 预计算每个模块的顶层名称集合，用于 `transformModule`
    val topLevelNamesMap = mutable.Map[String, Set[String]]()
    circuit.modules.foreach {
      case module: Module =>
        val names = collectTopLevelNames(module.body, module.ports)
        topLevelNamesMap(module.name) = names
      case classDef: DefClass => // DefClass 也被视为一种模块进行处理
        val names = collectTopLevelNames(classDef.body, classDef.ports)
        topLevelNamesMap(classDef.name) = names
      case _ => // 其他模块类型（ExtModule, IntModule）没有内部结构，不需要顶层名称
    }

    /** 递归处理单个模块实例。
      *
      * 这是核心的递归函数。它根据模块名称和当前实例路径查找或计算模块的转换结果。 使用缓存
      * (`processedModuleInstancesCache`) 避免重复计算同一实例路径。
      *
      * @param moduleName
      *   要处理的模块的名称。
      * @param instancePath
      *   从顶层模块到当前实例的路径序列 (例如 `Seq("Top", "subA", "subB")`)。
      * @return
      *   该模块实例的 `ModuleTransformResult`。
      */
    def processModule(
        moduleName: String,
        instancePath: Seq[String]
    ): ModuleTransformResult = {
      // 组成缓存键
      val moduleInstanceCacheKey = (moduleName, instancePath)
      // 检查缓存
      processedModuleInstancesCache.get(moduleInstanceCacheKey) match {
        case Some(cachedResult) => cachedResult // 缓存命中，直接返回
        case None => // 缓存未命中，需要处理
          moduleMap.get(moduleName) match {
            // 情况 A: 普通模块 (Module)
            case Some(module: Module) =>
              // 调用 transformModule 进行实际转换
              val transformResult = transformModule(
                module,
                moduleMap,
                internalSignalsMap,
                topLevelNamesMap.getOrElse(
                  module.name,
                  Set.empty
                ), // 获取预计算的顶层名称
                instancePath, // 传递当前实例路径
                processModule, // 传递自身引用，用于递归处理子模块
                config
              )
              // 存入缓存
              processedModuleInstancesCache(moduleInstanceCacheKey) =
                transformResult
              transformResult

            // 情况 B: 类定义 (DefClass) - 将其视为 Module 处理
            case Some(classDef: DefClass) =>
              // 创建一个临时的 Module 对象，以便 transformModule 可以处理
              val fakeModule = Module(
                classDef.info,
                classDef.name,
                classDef.ports,
                classDef.body
              )
              // 对临时 Module 进行转换
              val transformedFakeModuleResult = transformModule(
                fakeModule,
                moduleMap,
                internalSignalsMap,
                topLevelNamesMap.getOrElse(classDef.name, Set.empty),
                instancePath,
                processModule,
                config
              )
              // 将转换结果（更新的端口和主体）复制回 DefClass
              val transformedClassDef = classDef.copy(
                ports = transformedFakeModuleResult.transformedModule
                  .asInstanceOf[Module]
                  .ports, // DefClass 和 Module 结构相似
                body = transformedFakeModuleResult.transformedModule
                  .asInstanceOf[Module]
                  .body
              )
              // 封装最终结果
              val finalResult = ModuleTransformResult(
                transformedClassDef, // 返回转换后的 DefClass
                transformedFakeModuleResult.signalPortInfo // 保留信号端口信息
              )
              // 存入缓存
              processedModuleInstancesCache(moduleInstanceCacheKey) =
                finalResult
              finalResult

            // 情况 C: 外部模块 (ExtModule) - 无内部逻辑，无需转换
            case Some(extModule: ExtModule) =>
              val result = ModuleTransformResult(extModule, None) // 没有信号端口
              // 存入缓存（使用空路径或当前路径？为保持一致性，可能用空路径表示其原始定义）
              processedModuleInstancesCache((moduleName, Seq.empty)) = result
              result

            // 情况 D: 内部模块 (IntModule) - 黑盒，无需转换
            case Some(intModule: IntModule) =>
              val result = ModuleTransformResult(intModule, None) // 没有信号端口
              processedModuleInstancesCache((moduleName, Seq.empty)) = result
              result

            // 情况 E: 其他未知的模块类型 - 内部错误
            case Some(otherModuleType) =>
              throwInternalError(
                s"SignalPropagator: 遇到未知的模块类型：${otherModuleType.getClass.getName} ($moduleName)"
              )
            // 情况 F: 模块未在 moduleMap 中找到 - 内部错误
            case None =>
              throwInternalError(s"SignalPropagator: 在电路图中找不到模块 '$moduleName'")
          }
      }
    }

    // 5. 从主模块开始递归处理
    processModule(circuit.main, Seq(circuit.main)) // 初始路径只包含主模块名

    // 6. 收集所有处理过的模块实例的最终模块定义
    // 使用 Map 确保每个模块名称只保留一个最终定义（即使它被实例化多次）
    val finalModulesMap = mutable.Map[String, DefModule]()
    processedModuleInstancesCache.values.foreach { result =>
      val moduleName = result.transformedModule.name
      // 如果模块还未加入最终列表，则添加
      if (!finalModulesMap.contains(moduleName)) {
        finalModulesMap(moduleName) = result.transformedModule
      } else {
        // 如果模块已存在，检查是否是同一个对象（理想情况下应该是）
        // 如果不是同一个对象，意味着可能存在缓存键或逻辑问题，发出警告
        if (finalModulesMap(moduleName) ne result.transformedModule) {
          // 注意：此警告理论上不应触发，除非模块定义因不同的实例路径而产生不同的转换结果，
          // 这在当前设计中不应该发生，因为转换是基于模块本身和实例路径生成的名称，
          // 但模块结构本身的转换应该是确定性的。
          println(
            s"[WARN] SignalPropagator: 尝试多次添加模块 ${moduleName} 的不同转换版本。将保留第一个版本。"
          )
        }
      }
    }

    // 7. 添加原始电路中未被处理的模块
    // （例如，从未被实例化的模块，或者无法从主模块访问到的模块，以及未被实例化的 ExtModule/IntModule）
    circuit.modules.foreach { originalMod =>
      if (!finalModulesMap.contains(originalMod.name)) {
        finalModulesMap(originalMod.name) = originalMod
      }
    }

    // 8. 按照原始电路的模块顺序，重建最终的模块列表，使用转换后的版本
    val finalOrderedModules = circuit.modules.map(m => finalModulesMap(m.name))

    // 9. 返回包含转换后模块的新电路对象
    circuit.copy(modules = finalOrderedModules)
  }

  /** 转换单个模块，添加信号输出端口（如果需要）并连接相关信号。
    *
    * 这是执行实际转换工作的地方。它处理一个特定的模块定义， 考虑其本地信号、子模块实例以及当前的实例路径。
    *
    * @param module
    *   当前要转换的 `Module` 对象。
    * @param moduleMap
    *   电路中所有模块名称到定义的映射。
    * @param internalSignalsMap
    *   包含每个模块本地信号的映射（来自 `localSignalExtractor`）。
    * @param topLevelNames
    *   当前模块顶层定义的名称集合 (来自 `collectTopLevelNames`)。
    * @param currentInstancePath
    *   到达当前模块实例的路径。
    * @param processFunc
    *   对子模块进行递归处理的函数 (即 `processModule`)。
    * @param config
    *   信号传播器的配置。
    * @return
    *   `ModuleTransformResult`，包含转换后的模块和（可能存在的）新信号端口信息。
    */
  private def transformModule(
      module: Module, // 注意：这里接收的是 Module，DefClass 会被包装成 Module 传入
      moduleMap: Map[String, DefModule],
      internalSignalsMap: Map[String, Seq[Expression]],
      topLevelNames: Set[String],
      currentInstancePath: Seq[String],
      processFunc: (String, Seq[String]) => ModuleTransformResult,
      config: PropagatorConfig
  ): ModuleTransformResult = {

    // === 步骤 1: 收集当前模块的本地信号源 ===
    val localSignalSources: List[LocalSignalSource] =
      // 从预计算的 Map 中查找当前模块的本地信号表达式列表
      internalSignalsMap
        .get(module.name)
        .map { moduleSignalExpressions =>
          // 对提取出的表达式去重（以防提取器产生重复）
          moduleSignalExpressions.distinctBy(_.serialize).map { signalExpr =>
            // 检查信号表达式是否符合预期（以 Reference 开头）
            if (getRootReferenceName(signalExpr).isEmpty) {
              throwInternalError(
                s"SignalPropagator.transformModule: 在模块 ${module.name} 中发现不符合假设的 ${config.signalName}: ${signalExpr.serialize}. " +
                  "无法获取根引用名称。假设信号是 Reference 或其字段/索引访问。"
              )
            }
            // 获取原始类型（可能是 UnknownType）
            val originalSignalType = signalExpr.tpe
            // 生成信号的基础标识符（例如 "myNode" 或 "bundle__S__fieldA"）
            val signalBaseId =
              getSignalBaseIdentifier(signalExpr, config.signalName)
            // 构建实例路径前缀（例如 "Top__I__subA__I__subB"）
            val instancePathPrefix =
              currentInstancePath.mkString(InstanceSeparator)
            // 生成全局唯一的字段名，用于父模块的输出 Bundle
            val uniqueFieldName =
              s"${instancePathPrefix}${InstanceSeparator}${LocalMarker}${InstanceSeparator}$signalBaseId"
            // 创建 LocalSignalSource 对象
            LocalSignalSource(
              uniqueFieldName,
              SignalOriginInfo(
                signalExpr,
                originalSignalType // 存储原始类型
              )
            )
          }
        }
        .getOrElse(Nil) // 如果该模块没有本地信号，返回空列表
        .toList // 转换为 List

    // === 步骤 2: 递归处理子模块实例，并收集来自子模块的信号源 ===
    val childSignalSources =
      mutable.ListBuffer[ChildSignalSource]() // 存储来自子模块的信号
    // 缓存子模块实例的处理结果，避免在同一父模块内对同一子模块的多次引用重复调用 processFunc
    val childInstanceResults = mutable.Map[String, ModuleTransformResult]()

    // 定义一个递归函数来遍历模块主体语句，查找 DefInstance
    def findInstancesAndCollectChildSignals(statement: Statement): Unit =
      statement match {
        // 找到一个子模块实例定义
        case inst: DefInstance =>
          val childModuleName = inst.module // 子模块的类型名称
          val childInstanceName = inst.name // 子模块的实例名称
          // 构建子模块的实例路径
          val childInstancePath = currentInstancePath :+ childInstanceName

          // 获取子模块实例的转换结果（可能来自缓存或通过递归调用 processFunc）
          val childTransformResult = childInstanceResults.getOrElseUpdate(
            childInstanceName, // 使用实例名作为缓存键（在此模块内）
            {
              // 调用 processFunc 处理子模块实例
              processFunc(childModuleName, childInstancePath)
            }
          )

          // 检查子模块的转换结果是否包含我们期望的信号输出端口
          childTransformResult.signalPortInfo match {
            // 子模块确实添加了名为 config.outputPortName 的端口
            case Some((childPortName, childBundleType))
                if childPortName == config.outputPortName =>
              // 构建访问子模块实例本身的引用 (注意：这里的类型通常是 UnknownType，因为实例类型信息不直接可用)
              val instanceRef = Reference(inst.name, UnknownType)
              // 构建访问子模块新添加的输出端口的表达式 (端口类型 childBundleType 是已知的)
              val childSignalPortAccess = SubField(
                instanceRef, // 基础表达式是实例引用
                childPortName, // 字段名是端口名
                childBundleType // 结果类型是端口的 Bundle 类型
              )

              // 遍历子模块输出 Bundle 中的每个字段（每个字段代表一个从子模块传播上来的信号）
              childBundleType.fields.foreach { field =>
                // 构建访问该特定字段的表达式
                // 基础表达式是上面构建的端口访问表达式
                // 字段名是 Bundle 中的字段名 (field.name)
                // 结果类型是该字段的类型 (field.tpe)，这个类型是已知且具体的
                val fieldAccessExpr =
                  SubField(childSignalPortAccess, field.name, field.tpe)
                // 创建 SignalOriginInfo，使用访问字段的表达式和已知的字段类型
                val originInfo = SignalOriginInfo(fieldAccessExpr, field.tpe)
                // 创建 ChildSignalSource 对象，记录实例名、子模块传来的字段名和来源信息
                childSignalSources += ChildSignalSource(
                  inst.name, // 子实例名称
                  field.name, // 子模块传播上来的唯一字段名
                  originInfo // 访问该字段的表达式和已知类型
                )
              }
            // 子模块没有添加信号端口，或端口名不匹配，则忽略
            case _ => ()
          }
        // 递归遍历 Block 中的语句
        case Block(stmts) => stmts.foreach(findInstancesAndCollectChildSignals)
        // 递归遍历 Conditionally 的两个分支
        case Conditionally(_, _, conseq, alt) =>
          findInstancesAndCollectChildSignals(conseq);
          findInstancesAndCollectChildSignals(alt)
        // 递归遍历 LayerBlock 的主体
        case LayerBlock(_, _, body) => findInstancesAndCollectChildSignals(body)
        // 忽略其他类型的语句
        case _ => ()
      }
    // 开始遍历当前模块的主体
    findInstancesAndCollectChildSignals(module.body)

    // === 步骤 3: 合并本地和子信号源 ===
    val allSignalSources: List[SignalSource] =
      localSignalSources ++ childSignalSources.toList // 合并两个列表

    // 如果没有任何信号需要在此模块处理（既无本地信号，也无子模块信号传入），
    // 则无需修改模块，直接返回原始模块和 None 端口信息。
    if (allSignalSources.isEmpty) {
      return ModuleTransformResult(module, None)
    }

    // === 步骤 4: 构建新的输出端口 Bundle 类型 ===
    // 遍历所有收集到的信号源，为每个信号创建一个 Bundle 字段
    val bundleFields: Seq[Field] = allSignalSources.map { source =>
      // 提取传播用的字段名和原始信号类型
      val (propagatedFieldName, originalType) = source match {
        case LocalSignalSource(pfname, origin)    => (pfname, origin.signalType)
        case ChildSignalSource(_, pfname, origin) =>
          // 来自子模块的信号，其类型应已在子模块处理时确定
          (pfname, origin.signalType)
      }

      // *** 核心逻辑：解析 UnknownType ***
      // 如果原始类型是 UnknownType，尝试使用配置中提供的默认类型
      val finalFieldType = originalType match {
        case UnknownType =>
          config.defaultTypeForUnknown match {
            // 配置了默认类型，使用它
            case Some(defaultTpe) =>
              println( // 打印信息日志，说明发生了类型默认
                s"[INFO] SignalPropagator: 模块 '${module.name}' 中用于信号 '${config.signalName}' 的字段 '$propagatedFieldName' 的原始类型是 UnknownType。将使用默认类型 ${defaultTpe.serialize}。"
              )
              defaultTpe
            // 没有配置默认类型，但遇到了 UnknownType
            case None =>
              // 这是一个错误，因为无法确定端口字段的类型。
              // 对于像寄存器这样的信号，这是预期的行为（不允许类型未知）。
              throwInternalError(
                s"SignalPropagator: 模块 '${module.name}' 中信号类型 '${config.signalName}' 的字段 '$propagatedFieldName' 解析为 UnknownType，但配置中未指定 defaultTypeForUnknown。信号来源: ${source match {
                    case LocalSignalSource(_, o) => o.sourceExpression.serialize
                    case ChildSignalSource(_, _, o) =>
                      o.sourceExpression.serialize
                  }}"
              )
          }
        // 类型已知，直接使用
        case validTpe => validTpe
      }
      // 使用解析后的类型 `finalFieldType` 创建 Field 对象
      Field(propagatedFieldName, Default, finalFieldType)
    }

    // 确保 Bundle 中的字段名是唯一的（理论上由 uniqueFieldName 生成逻辑保证，但做一次检查更安全）
    val finalUniqueBundleFields: Seq[Field] =
      bundleFields
        .groupBy(_.name) // 按字段名分组
        .map { case (name, fields) =>
          if (fields.length > 1) {
            // 如果发现重复，说明 uniqueFieldName 生成逻辑可能有问题，发出警告
            println(
              s"[WARN] SignalPropagator: 在模块 ${module.name} 的输出 Bundle ${config.outputPortName} 中检测到重复的字段名 '$name'。请检查 uniqueFieldName 生成逻辑。"
            )
          }
          fields.head // 只取第一个（因为它们理论上应该相同）
        }
        .toSeq // 转换回 Seq
        .sortBy(_.name) // 按名称排序，确保生成的 FIRRTL 具有确定性

    // 防御性检查：如果处理后没有有效的字段（理论上不应发生，因为 allSignalSources 非空）
    if (finalUniqueBundleFields.isEmpty) {
      println(
        s"[WARN] SignalPropagator: 模块 ${module.name} 存在信号源，但为端口 ${config.outputPortName} 生成的 Bundle 字段为空。"
      )
      return ModuleTransformResult(module, None) // 返回原始模块
    }

    // 使用最终确定的唯一字段列表创建 BundleType
    val combinedBundleType = BundleType(finalUniqueBundleFields)

    // === 步骤 5: 创建新的输出端口定义 ===
    val newOutputSignalPort =
      Port(module.info, config.outputPortName, Output, combinedBundleType)
    // 更新模块的端口列表：移除可能存在的同名旧端口（不太可能发生），并添加新端口
    val updatedPorts = module.ports.filterNot(
      _.name == config.outputPortName
    ) :+ newOutputSignalPort

    // === 步骤 6: 处理需要中间线的本地信号 (主要针对源自 DefNode 的信号) ===
    // 这个 Map 用于存储需要通过中间线连接的本地信号的信息
    // 键: 信号来源的根引用名称 (例如 "myNode")
    // 值: (原始表达式, 解析后的类型, 中间线的名称)
    val localSignalsNeedingIntermediateWire =
      mutable.Map[String, (Expression, Type, String)]()

    localSignalSources.foreach {
      // 只处理本地信号源
      case LocalSignalSource(pfname, SignalOriginInfo(expr, originalType)) =>
        // 获取信号表达式的根引用名称
        getRootReferenceName(expr) match {
          case Some(rootRefName) =>
            // 检查这个根引用名称是否 *不* 存在于模块的顶层名称列表中
            // 如果不在顶层，意味着它可能定义在 'when' 块等内部（通常是 DefNode），需要中间线来连接
            if (!topLevelNames.contains(rootRefName)) {
              // *** 同样需要解析 UnknownType 来确定中间线的类型 ***
              val resolvedWireType = originalType match {
                case UnknownType =>
                  config.defaultTypeForUnknown match {
                    case Some(defaultTpe) =>
                      println(
                        s"[INFO] SignalPropagator: 模块 ${module.name} 中，中间线来源 '${expr.serialize}' (根 $rootRefName) 的类型是 UnknownType。将使用默认类型 ${defaultTpe.serialize} 定义中间线。"
                      )
                      defaultTpe
                    case None =>
                      // 如果类型未知且无默认值，无法创建中间线，抛出错误
                      throwInternalError(
                        s"SignalPropagator: 模块 '${module.name}' 中，信号类型 '${config.signalName}' 的中间线来源 '${expr.serialize}' (根 $rootRefName) 解析为 UnknownType，且未指定默认类型。"
                      )
                  }
                case validTpe => validTpe // 类型已知，直接使用
              }

              // 生成中间线的唯一名称，基于 config 前缀和传播字段名
              val intermediateWireName =
                s"${config.intermediateWirePrefix}${pfname}"

              // 存储创建和连接中间线所需的信息
              localSignalsNeedingIntermediateWire(rootRefName) =
                (expr, resolvedWireType, intermediateWireName)
            }
          // 如果无法获取根引用名称（理论上已被前面检查捕获），记录警告
          case None =>
            println(
              s"[WARN] SignalPropagator.transformModule: 在模块 ${module.name} 中，本地信号 ${config.signalName} ${expr.serialize} (字段 ${pfname}) 无法获取根引用名称。如果需要，将无法创建中间线。"
            )
        }
    }

    // === 步骤 7: 生成中间线的定义语句 (DefWire) ===
    // 使用步骤 6 收集的信息和 *解析后* 的类型来创建 DefWire 语句
    val intermediateWireDefs: Seq[DefWire] =
      localSignalsNeedingIntermediateWire.values.map {
        case (_, resolvedType, wireName) =>
          DefWire(NoInfo, wireName, resolvedType) // 使用解析后的类型
      }.toSeq

    // === 步骤 8: 生成中间线的默认连接语句 (可选，通常用于 Bool/UInt<1>) ===
    // 这有助于避免在未驱动时产生 Latch。仅为已知是 Bool 或 UInt<1> 的类型添加默认连接。
    val intermediateWireDefaultConnects: Seq[Statement] =
      localSignalsNeedingIntermediateWire.values.flatMap {
        case (_, resolvedWireType, wireName) =>
          resolvedWireType match {
            // 如果解析后的类型是 Bool 或 UInt<1>
            case tpe if tpe == BoolType || (tpe match {
                  // 匹配 UIntType 并检查其内部的 Width
                  case UIntType(w) => w == IntWidth(BigInt(1)) // 使用 equals 比较
                  // 如果 tpe 不是 UIntType，则此分支不匹配
                  case _ => false
                }) =>
              // 精确匹配 Bool 或 UInt<1> 的共享逻辑
              val defaultValue = UIntLiteral(0, IntWidth(1)) // 默认连接到 0
              // 创建连接语句
              Some(
                Connect(
                  NoInfo,
                  Reference(
                    wireName,
                    resolvedWireType
                  ), // resolvedWireType 仍然可用
                  defaultValue
                )
              )
            // 其他类型不添加默认连接
            case _ => None
          }
      }.toSeq

    // === 步骤 9: 修改模块 Body，插入从 DefNode 到中间线的连接 ===
    // 用于跟踪哪些 DefNode 已经被连接到中间线，防止重复连接（如果一个 Node 被多次引用为信号源）
    val nodeConnectedToIntermediateWire = mutable.Set[String]()
    // 定义一个递归函数来遍历和转换语句树
    def addIntermediateConnects(statement: Statement): Seq[Statement] =
      statement match {
        // 定位到 DefNode 语句
        case nodeDef @ DefNode(info, nodeName, nodeValue) =>
          // 检查这个 Node 是否是需要连接到中间线的信号源之一
          localSignalsNeedingIntermediateWire.get(nodeName) match {
            // 找到了对应的中间线信息，并且这个 Node 还没有被连接过
            case Some((_, resolvedWireType, wireName))
                if !nodeConnectedToIntermediateWire.contains(nodeName) =>
              // 创建对中间线的引用（使用解析后的类型）
              val intermediateWireRef = Reference(wireName, resolvedWireType)
              // 创建对当前 Node 的引用（使用 Node 定义时的类型 nodeValue.tpe）
              val nodeRef = Reference(nodeName, nodeValue.tpe)
              // 创建连接语句： intermediateWireRef <= nodeRef
              val connectStmt = Connect(info, intermediateWireRef, nodeRef)
              // 标记此 Node 已连接
              nodeConnectedToIntermediateWire += nodeName
              // 返回原始的 DefNode 语句和新的 Connect 语句
              Seq(nodeDef, connectStmt)
            // Node 不需要连接，或已被连接，则只返回原始 DefNode 语句
            case _ => Seq(nodeDef)
          }

        // 递归处理容器语句：Block
        case block @ Block(stmts) =>
          // 对 Block 内的每个语句递归调用 addIntermediateConnects，然后重建 Block
          // flatMap 用于处理 addIntermediateConnects 可能返回多个语句的情况 (DefNode + Connect)
          Seq(block.copy(stmts = stmts.flatMap(addIntermediateConnects)))

        // 递归处理容器语句：Conditionally (when/else)
        case conditional @ Conditionally(info, pred, conseq, alt) =>
          // 对 conseq 和 alt 分支的主体递归调用 addIntermediateConnects
          val newConseqStmts = addIntermediateConnects(conseq)
          val newAltStmts = addIntermediateConnects(alt)
          // 如果返回的是多个语句，需要用 Block 包裹起来；否则直接使用单个语句
          val finalConseq = newConseqStmts match {
            case Seq(s) => s; case ss => Block(ss)
          }
          val finalAlt = newAltStmts match {
            case Seq(s) => s; case ss => Block(ss)
          }
          // 返回更新了分支的 Conditionally 语句
          Seq(conditional.copy(conseq = finalConseq, alt = finalAlt))

        // 递归处理容器语句：LayerBlock
        case layer @ LayerBlock(info, name, body) =>
          val newBodyStmts = addIntermediateConnects(body)
          val finalBody = newBodyStmts match {
            case Seq(s) => s; case ss => Block(ss)
          }
          Seq(layer.copy(body = finalBody))

        // 其他类型的语句直接返回，不做修改
        case other => Seq(other)
      }

    // 获取原始模块主体的语句列表
    val existingBodyStmts = module.body match {
      case Block(stmts) => stmts
      case EmptyStmt    => Seq.empty
      case s: Statement => Seq(s) // 如果主体是单个语句
    }
    // 对原始主体语句应用上面的转换函数，得到插入了中间连接的新主体语句列表
    val bodyWithIntermediateConnectsAdded: Seq[Statement] =
      existingBodyStmts.flatMap(addIntermediateConnects)

    // === 步骤 10: 生成连接到最终输出端口字段的语句 ===
    val finalPortFieldConnects: Seq[Connect] = finalUniqueBundleFields.map {
      field =>
        // --- 连接的目标 (LHS) ---
        // 创建访问新输出端口中特定字段的表达式
        val portFieldAccess = SubField(
          // 引用新添加的输出端口 (使用其名称和类型)
          Reference(newOutputSignalPort.name, newOutputSignalPort.tpe),
          field.name, // 要访问的字段名称 (即 propagatedFieldName)
          field.tpe // 字段的类型 (这是 *解析后* 的类型)
        )

        // --- 连接的来源 (RHS) ---
        // 根据字段名找到对应的原始信号源信息 (SignalSource)
        val sourceInfo = allSignalSources
          .find { // 在所有信号源中查找
            case LocalSignalSource(fname, _) =>
              fname == field.name // 本地信号，比较字段名
            case ChildSignalSource(_, fname, _) =>
              fname == field.name // 子模块信号，比较字段名
          }
          .getOrElse( // 如果找不到，说明逻辑有误
            throwInternalError(
              s"SignalPropagator: 在模块 ${module.name} 中找不到输出字段 '${field.name}' 对应的信号源。"
            )
          )

        // 根据信号源的类型确定连接的 RHS 表达式
        val connectSourceExpression: Expression = sourceInfo match {
          // 情况 1: 信号源是本地信号
          case LocalSignalSource(_, origin) =>
            // 获取其根引用名称
            getRootReferenceName(origin.sourceExpression) match {
              // 检查这个本地信号的根引用是否需要中间线，并且该中间线确实已被连接
              case Some(rootRefName)
                  if localSignalsNeedingIntermediateWire.contains(
                    rootRefName
                  ) &&
                    nodeConnectedToIntermediateWire.contains(rootRefName) =>
                // 如果是，则连接的来源是中间线
                val (_, resolvedWireType, wireName) =
                  localSignalsNeedingIntermediateWire(rootRefName)
                // 引用中间线（使用其解析后的类型）
                Reference(wireName, resolvedWireType)

              // 情况 1b: 本地信号不需要中间线，或者中间线未成功连接（理论上不应发生后者）
              case _ =>
                // 直接连接原始的信号表达式
                // 注意：这里可能存在类型轻微不匹配的问题，例如原始类型是 UInt<1>，
                // 而端口字段类型是 Bool (如果使用了默认类型)。
                // FIRRTL 的后续 Pass（如 RemoveCHIRRTL）通常能处理这种兼容类型间的转换。
                // 我们发出警告，如果原始类型已知，但与最终字段类型不同。
                if (
                  origin.signalType != field.tpe && origin.signalType != UnknownType
                ) {
                  println(
                    s"[WARN] SignalPropagator: 在模块 ${module.name} 中，连接本地源 ${origin.sourceExpression.serialize} (类型 ${origin.signalType.serialize}) 到端口字段 ${field.name} (类型 ${field.tpe.serialize}) 时可能存在类型不匹配。原始类型已知但与解析后的字段类型不同。"
                  )
                }
                // 使用原始表达式作为连接源
                origin.sourceExpression
            }

          // 情况 2: 信号源来自子模块
          case ChildSignalSource(_, _, origin) =>
            // 连接的来源是访问子模块端口字段的那个表达式 (例如 `childInst._cond_pred.fieldA`)
            // 这个表达式的类型 (origin.signalType) 应该已经与目标端口字段类型 (field.tpe) 一致，
            // 因为它们都源自子模块处理时确定的类型。
            origin.sourceExpression
        }
        // 创建最终的 Connect 语句: portFieldAccess <= connectSourceExpression
        Connect(NoInfo, portFieldAccess, connectSourceExpression)
    }

    // === 步骤 11: 组合所有新的语句 ===
    // 最终模块主体的语句顺序：
    // 1. 中间线的定义 (DefWire)
    // 2. 中间线的默认连接 (Connect)
    // 3. 经过修改（可能插入了中间线连接）的原有模块主体语句
    // 4. 连接到新输出端口字段的语句 (Connect)
    val finalBodyStmts: Seq[Statement] =
      intermediateWireDefs ++ // 添加 wire 定义
        intermediateWireDefaultConnects ++ // 添加 wire 默认连接
        bodyWithIntermediateConnectsAdded ++ // 添加修改后的原主体
        finalPortFieldConnects // 添加到输出端口的连接

    // === 步骤 12: 创建转换后的模块定义 ===
    // 使用更新后的端口列表和组合后的新主体语句列表创建新的 Module 对象
    val transformedModule =
      module.copy(
        ports = updatedPorts,
        body = Block(finalBodyStmts)
      ) // 主体总是 Block

    // === 步骤 13: 返回转换结果 ===
    // 返回包含转换后模块和新添加的信号端口信息的 `ModuleTransformResult`
    ModuleTransformResult(
      transformedModule,
      Some((config.outputPortName, combinedBundleType)) // 提供端口名和类型
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
  *
  * 它会找到所有非字面量（non-literal）的谓词，并将它们通过层层模块接口传播到顶层。 这对于理解哪些条件在仿真过程中被激活非常有用。
  */
object ConditionallyPredPropagator {
  // 内部对象，用于实现谓词提取逻辑
  private object Extractor {
    // 使用 WeakHashMap 缓存每个 Circuit 的提取结果，避免重复计算
    private val cache =
      mutable.WeakHashMap[Circuit, Map[String, Seq[Expression]]]()

    // 公开的提取方法，带缓存逻辑
    def extract(circuit: Circuit): Map[String, Seq[Expression]] =
      cache.getOrElseUpdate(circuit, compute(circuit)) // 如果缓存未命中，则计算

    // 实际计算谓词提取的私有方法
    private def compute(circuit: Circuit): Map[String, Seq[Expression]] = {
      // 存储每个模块找到的谓词列表 (模块名 -> 谓词表达式列表)
      val modulePredicatesMap =
        mutable.Map[String, mutable.ListBuffer[Expression]]()
      var currentModuleName: String = "" // 跟踪当前正在处理的模块名称

      // 递归函数，用于在语句树中查找 Conditionally 谓词
      def findPredsInStmt(statement: Statement): Unit = statement match {
        // 找到 Conditionally 语句 (when/else when)
        case Conditionally(_, pred, conseq, alt) =>
          // 只传播非字面量 (non-constant) 的谓词
          pred match {
            case _: Literal => () // 忽略常量条件，如 when(UInt(1))
            case p          => // 如果谓词是表达式
              // 获取当前模块的谓词列表 Buffer（如果不存在则创建）
              val buffer = modulePredicatesMap.getOrElseUpdate(
                currentModuleName,
                mutable.ListBuffer[Expression]()
              )
              // 将谓词表达式添加到 Buffer 中
              buffer += p
          }
          // 递归进入 conseq (then) 和 alt (else) 分支继续查找
          findPredsInStmt(conseq)
          findPredsInStmt(alt)
        // 如果是 Block，遍历其中的语句
        case Block(stmts) => stmts.foreach(findPredsInStmt)
        // 如果是 LayerBlock，处理其主体
        case LayerBlock(_, _, body) => findPredsInStmt(body)
        // 可以添加对其他可能包含 Conditionally 的语句类型的处理（例如 DefClass? 已在外部处理）
        case _ => () // 忽略其他类型的语句
      }

      // 遍历电路中的所有模块定义
      circuit.modules.foreach { moduleDef =>
        currentModuleName = moduleDef.name // 设置当前处理的模块上下文
        moduleDef match {
          // 如果是 Module 或 DefClass，递归查找其主体中的谓词
          case mod: Module   => findPredsInStmt(mod.body)
          case cls: DefClass => findPredsInStmt(cls.body)
          // 忽略 ExtModule, IntModule 等没有内部实现的模块
          case _ => ()
        }
      }

      // 将结果转换为不可变 Map，并确保每个模块的谓词列表是唯一的
      modulePredicatesMap.map { case (name, buffer) =>
        // distinctBy(_.serialize) 根据表达式的文本表示去重
        name -> buffer.distinctBy(_.serialize).toList
      }.toMap
    }
  }

  // *** 配置 SignalPropagator ***
  private val config = PropagatorConfig(
    signalName = "predicate", // 信号类型名称
    outputPortName = "_cond_pred", // 输出端口名称
    intermediateWirePrefix = "_cond_pred_prop_wire_", // 中间线前缀
    localSignalExtractor = Extractor.extract, // 使用上面定义的提取器
    defaultTypeForUnknown = Some(BoolType) // *** 关键：如果谓词类型未知，假定它为 BoolType ***
    // 因为谓词预期是布尔条件 (UInt<1> 在 FIRRTL 中常用于表示 Bool)
  )

  /** 应用谓词传播转换到电路。
    *
    * @param circuit
    *   原始 FIRRTL 电路。
    * @return
    *   转换后的 FIRRTL 电路，包含了传播的谓词信号。
    */
  def transform(circuit: Circuit): Circuit =
    SignalPropagator.transform(circuit, config) // 调用通用框架进行转换
}

/** `Mux` 条件传播器
  *
  * 使用 `SignalPropagator` 框架来传播 FIRRTL 中 `Mux` (多路选择器) 表达式的 条件选择信号。
  *
  * 它会递归地查找所有表达式和语句中使用的 `Mux`，提取其非字面量的条件表达式， 并将它们传播到顶层模块。
  */
object MuxCondPropagator {
  // 内部对象，用于实现 Mux 条件提取逻辑
  private object Extractor {
    // 缓存提取结果
    private val cache =
      mutable.WeakHashMap[Circuit, Map[String, Seq[Expression]]]()

    // 公开的提取方法
    def extract(circuit: Circuit): Map[String, Seq[Expression]] =
      cache.getOrElseUpdate(circuit, compute(circuit))

    // 实际计算 Mux 条件提取的私有方法
    private def compute(circuit: Circuit): Map[String, Seq[Expression]] = {
      // 存储每个模块找到的 Mux 条件列表
      val moduleConditionsMap =
        mutable.Map[String, mutable.ListBuffer[Expression]]()
      var currentModuleName: String = ""
      // 为当前处理的模块创建一个临时的 Buffer 来收集条件
      val currentModuleConditionsBuffer = mutable.ListBuffer[Expression]()

      // 递归函数，用于在表达式树中查找 Mux 条件
      def findMuxCondsInExpr(expression: Expression): Unit = expression match {
        // 找到 Mux 表达式
        case Mux(cond, tval, fval, _) =>
          cond match {
            case _: Literal => () // 忽略常量条件
            case c          => currentModuleConditionsBuffer += c // 收集非字面量条件
          }
          // 递归检查 Mux 的子表达式（条件本身、真值、假值），因为它们内部也可能包含 Mux
          findMuxCondsInExpr(cond)
          findMuxCondsInExpr(tval)
          findMuxCondsInExpr(fval)
        // 递归遍历其他可能包含 Mux 的表达式结构
        case SubField(expr, _, _) => findMuxCondsInExpr(expr)
        case SubIndex(expr, _, _) => findMuxCondsInExpr(expr)
        case SubAccess(expr, index, _) =>
          findMuxCondsInExpr(expr); findMuxCondsInExpr(index)
        case ValidIf(cond, value, _) =>
          findMuxCondsInExpr(cond); findMuxCondsInExpr(value)
        case DoPrim(_, args, _, _) => args.foreach(findMuxCondsInExpr)
        // 如果属性表达式或序列值可能包含 Mux，也需要遍历
        case PropExpr(_, _, _, args)      => args.foreach(findMuxCondsInExpr)
        case ProbeExpr(expr, _)           => findMuxCondsInExpr(expr)
        case RWProbeExpr(expr, _)         => findMuxCondsInExpr(expr)
        case ProbeRead(expr, _)           => findMuxCondsInExpr(expr)
        case SequencePropertyValue(_, vs) => vs.foreach(findMuxCondsInExpr)
        // 其他叶子节点或未处理的表达式类型作为基本情况
        case _ => ()
      }

      // 递归函数，用于在语句树中查找使用 Mux 的地方
      def findMuxCondsInStmt(statement: Statement): Unit = statement match {
        // 定义语句，检查其值表达式
        case DefNode(_, _, value) => findMuxCondsInExpr(value)
        // 连接语句，检查其右侧表达式
        case Connect(_, _, expr) => findMuxCondsInExpr(expr)
        // 寄存器定义，检查时钟、复位、初始化值表达式
        case DefRegister(_, _, _, clock) => findMuxCondsInExpr(clock)
        case DefRegisterWithReset(_, _, _, clock, reset, init) =>
          findMuxCondsInExpr(clock); findMuxCondsInExpr(reset);
          findMuxCondsInExpr(init)
        // 其他包含表达式的语句，如 Stop, Print, Verification, PropAssign, Attach, Probe 等
        case Stop(_, _, clk, en) =>
          findMuxCondsInExpr(clk); findMuxCondsInExpr(en)
        case Print(_, _, args, clk, en) =>
          args.foreach(findMuxCondsInExpr); findMuxCondsInExpr(clk);
          findMuxCondsInExpr(en)
        case Verification(_, _, clk, pred, en, _) =>
          findMuxCondsInExpr(clk); findMuxCondsInExpr(pred);
          findMuxCondsInExpr(en)
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
        // 容器语句，递归进入
        case Block(stmts) => stmts.foreach(findMuxCondsInStmt)
        case Conditionally(_, pred, conseq, alt) =>
          findMuxCondsInExpr(pred) // 检查 when 条件本身是否含 Mux
          findMuxCondsInStmt(conseq) // 递归检查 then 分支
          findMuxCondsInStmt(alt) // 递归检查 else 分支
        case LayerBlock(_, _, body) => findMuxCondsInStmt(body)
        // 忽略其他语句类型
        case _ => ()
      }

      // 遍历所有模块
      circuit.modules.foreach { moduleDef =>
        currentModuleName = moduleDef.name
        currentModuleConditionsBuffer.clear() // 为每个模块重置 Buffer
        moduleDef match {
          case mod: Module   => findMuxCondsInStmt(mod.body)
          case cls: DefClass => findMuxCondsInStmt(cls.body)
          case _             => ()
        }
        // 如果当前模块收集到了 Mux 条件
        if (currentModuleConditionsBuffer.nonEmpty) {
          // 将去重后的条件列表存入主 Map
          moduleConditionsMap(currentModuleName) =
            currentModuleConditionsBuffer.distinctBy(_.serialize).clone()
        }
      }
      // 将 Map 中的 mutable ListBuffer 转换为 immutable List
      moduleConditionsMap.map { case (name, buffer) =>
        name -> buffer.toList
      }.toMap
    }
  }

  // *** 配置 SignalPropagator ***
  private val config = PropagatorConfig(
    signalName = "condition", // 信号类型名称 (Mux 条件)
    outputPortName = "_mux_cond", // 输出端口名称
    intermediateWirePrefix = "_mux_cond_prop_wire_", // 中间线前缀
    localSignalExtractor = Extractor.extract, // 使用 Mux 条件提取器
    defaultTypeForUnknown =
      Some(BoolType) // *** 关键：如果 Mux 条件类型未知，假定它为 BoolType ***
    // Mux 条件也预期是布尔值 (UInt<1>)
  )

  /** 应用 Mux 条件传播转换到电路。
    *
    * @param circuit
    *   原始 FIRRTL 电路。
    * @return
    *   转换后的 FIRRTL 电路，包含了传播的 Mux 条件信号。
    */
  def transform(circuit: Circuit): Circuit =
    SignalPropagator.transform(circuit, config) // 调用通用框架
}

/** 寄存器信号传播器
  *
  * 使用 `SignalPropagator` 框架来传播 FIRRTL 中所有寄存器 (`DefRegister`,
  * `DefRegisterWithReset`) 的值。
  *
  * 它会找到模块中定义的所有寄存器，并将对这些寄存器的引用（代表它们的值）传播到顶层模块。 这对于在仿真中观察所有寄存器的状态非常有用。
  */
object RegisterSignalPropagator {
  // 内部对象，用于实现寄存器提取逻辑
  private object RegisterExtractor {
    // 缓存提取结果
    private val cache =
      mutable.WeakHashMap[Circuit, Map[String, Seq[Expression]]]()

    // 公开的提取方法
    def extract(circuit: Circuit): Map[String, Seq[Expression]] =
      cache.getOrElseUpdate(circuit, compute(circuit))

    // 实际计算寄存器提取的私有方法
    private def compute(circuit: Circuit): Map[String, Seq[Expression]] = {
      // 存储每个模块找到的寄存器引用列表
      val moduleRegistersMap =
        mutable.Map[String, mutable.ListBuffer[Expression]]()
      var currentModuleName: String = "" // 跟踪当前模块

      // 递归函数，用于在语句树中查找寄存器定义
      def findRegistersInStmt(statement: Statement): Unit = statement match {
        // 找到普通寄存器定义
        case reg: DefRegister =>
          // 获取当前模块的 Buffer
          val buffer = moduleRegistersMap.getOrElseUpdate(
            currentModuleName,
            mutable.ListBuffer[Expression]()
          )
          // 将对该寄存器的引用（使用其名称和已知的类型 reg.tpe）添加到 Buffer
          buffer += Reference(reg.name, reg.tpe)
        // 找到带复位的寄存器定义
        case regReset: DefRegisterWithReset =>
          // 获取当前模块的 Buffer
          val buffer = moduleRegistersMap.getOrElseUpdate(
            currentModuleName,
            mutable.ListBuffer[Expression]()
          )
          // 将对该寄存器的引用（使用其名称和已知的类型 regReset.tpe）添加到 Buffer
          buffer += Reference(regReset.name, regReset.tpe)
        // 递归进入容器语句
        case Block(stmts) => stmts.foreach(findRegistersInStmt)
        case Conditionally(_, _, conseq, alt) =>
          findRegistersInStmt(conseq); findRegistersInStmt(alt)
        case LayerBlock(_, _, body) => findRegistersInStmt(body)
        // 忽略其他类型的语句
        case _ => ()
      }

      // 遍历所有模块
      circuit.modules.foreach { moduleDef =>
        currentModuleName = moduleDef.name
        moduleDef match {
          case mod: Module   => findRegistersInStmt(mod.body)
          case cls: DefClass => findRegistersInStmt(cls.body)
          case _             => ()
        }
      }
      // 将 Map 中的 mutable ListBuffer 转换为 immutable List
      // 这里不需要 distinctBy，因为寄存器名称在同一作用域内必须是唯一的
      moduleRegistersMap.map { case (name, buffer) =>
        name -> buffer.toList
      }.toMap
    }
  }

  // *** 配置 SignalPropagator ***
  private val config = PropagatorConfig(
    signalName = "register signal", // 信号类型名称
    outputPortName = "_reg_signals", // 输出端口名称
    // 中间线前缀（寄存器通常是顶层定义，所以这个前缀不太可能被实际使用）
    intermediateWirePrefix = "_reg_prop_wire_",
    localSignalExtractor = RegisterExtractor.extract, // 使用寄存器提取器
    // *** 关键：不提供默认类型 (None) ***
    // 寄存器的类型必须是已知的，不能随意赋一个默认值 (如 BoolType)。
    // 如果提取器发现一个类型为 UnknownType 的寄存器引用（理论上不应发生，因为 DefRegister 有类型），
    // SignalPropagator 在尝试创建端口字段时会抛出错误。
    defaultTypeForUnknown = None
  )

  /** 应用寄存器信号传播转换到电路。
    *
    * @param circuit
    *   原始 FIRRTL 电路。
    * @return
    *   转换后的 FIRRTL 电路，包含了传播的寄存器信号。
    */
  def transform(circuit: Circuit): Circuit =
    SignalPropagator.transform(circuit, config) // 调用通用框架
}
