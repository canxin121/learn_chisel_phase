package firrtl
package ir

import firrtl.Utils.throwInternalError // 导入内部错误抛出工具

import scala.collection.mutable // 导入可变集合

/** 该对象负责在 FIRRTL 电路中识别并传播 Mux（多路选择器）的条件信号。 它通过在模块层级结构中向上添加特殊的 Bundle 类型输出端口
  * (`_mux_cond`) 来暴露这些条件， 以便后续分析或转换（例如，条件相关的优化或断言生成）可以使用这些信息。
  *
  * 主要步骤包括：
  *   1. 识别每个模块内部的 Mux 条件。 2. 递归处理模块实例，收集来自子模块的条件。 3. 为每个需要传播条件的模块添加一个
  *      `_mux_cond` 输出端口（Bundle 类型）。 4. Bundle
  *      的字段对应于来自本地或子模块的唯一条件信号，字段名包含实例路径信息以保证唯一性。 5. 处理在模块内部定义（如 Node）且用作 Mux
  *      条件的局部信号，可能需要创建中间 Wire 来“提升”(hoist) 这些信号，使其能在模块边界连接到输出端口。 6.
  *      将所有相关的条件信号连接到 `_mux_cond` 端口的相应字段。
  */
object MuxCondPropagator {

  // === 常量定义 ===

  /** 用于在生成的唯一字段名中分隔实例名称的字符串。 */
  val InstanceSeparator = "__I__"

  /** 用于在生成的唯一字段名中分隔嵌套字段或索引名称的字符串。 */
  val SubfieldSeparator = "__S__"

  /** 标记源自模块本地（而非子模块）的条件信号的特殊标识符，用于字段名生成。 */
  val LocalMarker = "local"

  /** 添加到模块的标准输出端口名称，用于承载所有传播的条件信号。 */
  val ConditionOutputPortName = "_mux_cond"

  /** 为需要提升的本地条件信号创建的中间 Wire 的名称前缀。 */
  val IntermediateWirePrefix = "_mux_cond_prop_wire_"

  // === 数据结构定义 ===

  /** 记录 Mux 条件信号的原始来源信息。
    * @param sourceExpr
    *   原始条件表达式 (例如 `Reference("a")`, `SubField(Reference("b"), "c")`)。
    * @param tpe
    *   条件表达式的 FIRRTL 类型 (通常是 `UInt<1>`)。
    */
  case class ConditionOriginInfo(sourceExpr: Expression, tpe: Type)

  /** 表示 Mux 条件信号来源的代数数据类型 (ADT) 的基类。 条件可以来自当前模块内部 (LocalCondSource) 或来自实例化的子模块
    * (ChildCondSource)。
    */
  sealed trait ConditionSource

  /** 表示条件信号直接源自当前模块内部（例如，一个 Node 或顶层信号）。
    * @param fieldName
    *   在父模块条件 Bundle 中为此本地条件生成的全局唯一字段名。 格式通常为
    *   `instance_path__local__base_name`。
    * @param info
    *   条件的原始来源信息 (表达式和类型)。
    */
  case class LocalCondSource(
      fieldName: String,
      info: ConditionOriginInfo
  ) extends ConditionSource

  /** 表示条件信号源自当前模块实例化的一个子模块。
    * @param instanceName
    *   子模块的实例名称。
    * @param fieldName
    *   在父模块条件 Bundle 中为此子模块条件生成的唯一字段名。 这通常直接继承自子模块传递上来的字段名，已经包含了子模块的实例路径。
    * @param info
    *   条件的来源信息，其中 `sourceExpr` 指向对子模块条件端口字段的访问 (例如 `SubField(Reference("inst"),
    *   "_mux_cond", ...)` 或 `SubField(SubField(Reference("inst"), "_mux_cond",
    *   ...), "field", ...)`).
    */
  case class ChildCondSource(
      instanceName: String,
      fieldName: String,
      info: ConditionOriginInfo
  ) extends ConditionSource

  /** 封装单个模块或类定义转换操作的结果。
    * @param transformedModule
    *   转换后的模块或类定义（可能已添加端口或修改主体）。
    * @param conditionPortInfo
    *   如果模块被修改并添加了条件端口，则包含该端口的名称 (`_mux_cond`) 和其 Bundle 类型；否则为 None。
    */
  case class ModuleTransformResult(
      transformedModule: DefModule,
      conditionPortInfo: Option[(String, BundleType)]
  )

  // === 辅助函数 ===

  /** 收集在模块或类定义的主体语句的顶层作用域中定义的名称。 这包括端口 (Ports)、连线 (Wires)、寄存器 (Regs)、节点
    * (Nodes)、存储器 (Memories)、 实例 (Instances)、实例选择 (InstanceChoices) 和对象实例
    * (Objects)。 这些名称用于后续判断一个 Mux 条件信号是否是“局部”的（即，不是顶层可以直接访问的）， 从而决定是否需要创建中间 Wire
    * 来将其值传递到模块的 `_mux_cond` 输出端口。
    *
    * @param targetStmt
    *   模块或类的主体语句 (通常是 `Block` 或单个语句)。
    * @return
    *   在顶层作用域定义的名称集合。
    */
  private def collectTopLevelNames(targetStmt: Statement): Set[String] = {
    val names = mutable.Set[String]()
    // 定义一个局部递归函数，仅处理顶层 Block 或单个语句
    def collect(stmt: Statement): Unit = stmt match {
      case Block(stmts) =>
        // 只检查 Block 下的第一层语句，不深入嵌套结构
        stmts.foreach {
          case d: DefWire           => names += d.name
          case d: DefRegister       => names += d.name
          case d: DefNode           => names += d.name // 假设顶层 Node 名称是可访问的
          case d: DefMemory         => names += d.name
          case d: DefInstance       => names += d.name
          case d: DefInstanceChoice => names += d.name
          case d: DefObject         => names += d.name // 类实例定义
          // 不递归进入 Conditionally, LayerBlock 等内部收集名称
          case _ => // 其他语句不贡献顶层名称
        }
      // 处理非 Block 的顶层语句
      case d: DefWire           => names += d.name
      case d: DefRegister       => names += d.name
      case d: DefNode           => names += d.name
      case d: DefMemory         => names += d.name
      case d: DefInstance       => names += d.name
      case d: DefInstanceChoice => names += d.name
      case d: DefObject         => names += d.name
      case _                    => // 其他顶层语句不贡献名称
    }
    collect(targetStmt) // 开始收集
    names.toSet // 返回不可变集合
  }

  /** 尝试提取表达式所基于的“根”引用名称。 例如，对于 `a.b.c` 或 `vec[1]` 或 `inst.mem.read_data`，它会尝试返回
    * `a`、`vec` 或 `inst`。 这主要用于 `transformModule` 中判断一个 Mux 条件是否基于一个局部定义的信号（例如
    * Node）， 如果是局部信号（其根名称不在顶层名称集合中），则可能需要创建中间 Wire 来提升它。
    *
    * @param expr
    *   输入的 FIRRTL 表达式。
    * @return
    *   如果表达式是基于一个引用（Reference）或其访问（SubField, SubIndex, SubAccess）， 则返回 Option
    *   包含根引用的名称；否则返回 None （例如对于 `DoPrim` 或 `Literal`）。
    */
  private def getRootReferenceName(expr: Expression): Option[String] =
    expr match {
      case Reference(name, _) => Some(name) // 直接引用，返回其名称
      case SubField(e, _, _)  => getRootReferenceName(e) // 字段访问，递归查找其基础表达式
      case SubIndex(e, _, _)  => getRootReferenceName(e) // 索引访问，递归查找其基础表达式
      case SubAccess(e, _, _) => getRootReferenceName(e) // 动态索引访问，递归查找其基础表达式
      case _                  => None // 其他类型的表达式（如 Literal, DoPrim）没有明确的根引用名称
    }

  // === 主要转换逻辑 ===

  /** 对整个 FIRRTL 电路执行 Mux 条件传播转换。 这是该 Pass 的主入口点。
    *
    * @param circuit
    *   原始 FIRRTL 电路。
    * @param "topInst"
    *   顶层模块在（假想的）上一层级中的实例名称。这用于为顶层模块内部的 本地条件生成全局唯一的字段名（虽然顶层没有父模块，但保持命名格式一致性）。
    * @return
    *   包含 Mux 条件传播修改的新 FIRRTL 电路。
    */
  def transform(circuit: Circuit): Circuit = {

    // 步骤 1: 获取每个模块内部原始 Mux 条件表达式的映射。
    // 使用 ModuleInternalCondsMapProvider 辅助对象来计算或从缓存获取。
    val internalCondMap = ModuleInternalCondsMapProvider.getMap(circuit)

    // 步骤 2: 构建从模块名称到模块定义的快速查找映射，方便后续查找。
    val moduleMap = circuit.modules.map(m => m.name -> m).toMap

    // 步骤 3: 缓存已处理过的模块及其转换结果。
    // 键是 (模块名, 实例路径)，值是 ModuleTransformResult。
    // 这对于处理模块实例化（模块复用）和避免重复计算至关重要。
    // 实例路径用于区分同一个模块在不同上下文中的使用，因为它们的条件来源（及其字段名）会不同。
    val processedModuleInsts =
      mutable.Map[(String, Seq[String]), ModuleTransformResult]()

    // 步骤 4: 预先计算并缓存每个模块/类的顶层作用域名称。
    // 这用于在 `transformModule` 中快速判断一个本地 Mux 条件是否需要被“提升”。
    val topLevelNamesMap = mutable.Map[String, Set[String]]()
    circuit.modules.foreach {
      case m: Module =>
        val portNames = m.ports.map(_.name).toSet // 获取端口名称
        val bodyNames = collectTopLevelNames(m.body) // 使用辅助函数收集主体顶层名称
        topLevelNamesMap(m.name) = portNames ++ bodyNames // 合并端口和主体名称
      case c: DefClass =>
        // 对 DefClass 应用相同的逻辑来收集其“顶层”名称
        val portNames = c.ports.map(_.name).toSet
        val bodyNames = collectTopLevelNames(c.body)
        topLevelNamesMap(c.name) = portNames ++ bodyNames
      case _ => // ExtModule, IntModule 没有主体或端口需要分析顶层名称
    }

    /** 递归处理单个模块或类定义，执行 Mux 条件传播。
      * @param moduleName
      *   要处理的模块或类的名称。
      * @param instancePath
      *   到达此模块/类的实例路径 (Seq[String])。例如，顶层是 `Seq("topInst")`， 如果顶层实例化了 `foo`，则处理
      *   `foo` 时路径是 `Seq("topInst", "foo")`。
      * @return
      *   该模块/类的转换结果 (ModuleTransformResult)。
      */
    def processModule(
        moduleName: String,
        instancePath: Seq[String]
    ): ModuleTransformResult = {
      // 使用 (模块名, 实例路径) 作为缓存键
      val cacheKey = (moduleName, instancePath)
      processedModuleInsts.get(cacheKey) match {
        case Some(result) => result // 如果已处理过（在此特定实例路径下），直接返回缓存结果
        case None => // 否则，需要处理该模块
          moduleMap.get(moduleName) match {
            case Some(module: Module) =>
              // 调用核心转换逻辑处理 Module
              val result = transformModule(
                module,
                moduleMap, // 传递模块查找表
                internalCondMap, // 传递内部条件映射
                topLevelNamesMap.getOrElse(
                  module.name,
                  Set.empty
                ), // 传递该模块的顶层名称集合
                instancePath, // 传递当前实例路径
                processModule // 传递自身引用，用于递归处理子模块
              )
              processedModuleInsts(cacheKey) = result // 缓存结果
              result

            case Some(cls: DefClass) =>
              // 对于 DefClass，暂时将其视为 Module 来复用 transformModule 逻辑。
              // 创建一个临时的 Module 对象，包含 DefClass 的端口和主体。
              val fakeModule = Module(cls.info, cls.name, cls.ports, cls.body)
              // 调用核心转换逻辑处理这个临时 Module
              val transformedFake = transformModule(
                fakeModule,
                moduleMap,
                internalCondMap,
                topLevelNamesMap.getOrElse(cls.name, Set.empty), // 传递该类的顶层名称集合
                instancePath,
                processModule
              )
              // 从转换后的临时 Module 中提取更新后的端口和主体，
              // 创建一个新的 DefClass 定义。
              val transformedCls = cls.copy(
                ports = transformedFake.transformedModule
                  .asInstanceOf[Module]
                  .ports, // 使用转换后的端口
                body = transformedFake.transformedModule
                  .asInstanceOf[Module]
                  .body // 使用转换后的主体
              )
              // 封装成 ModuleTransformResult
              val result = ModuleTransformResult(
                transformedCls, // 结果是转换后的 DefClass
                transformedFake.conditionPortInfo // 继承条件端口信息
              )
              processedModuleInsts(cacheKey) = result // 缓存结果
              result

            case Some(extModule: ExtModule) =>
              // 外部模块 (ExtModule) 不需要处理，它们没有内部逻辑和 Mux。
              // 直接返回原始定义，没有条件端口。
              val result = ModuleTransformResult(extModule, None)
              // 注意：外部模块没有实例路径的概念，可以用空路径或模块名自身作为缓存键的一部分
              // 这里我们选择使用空路径来缓存所有外部模块的（不变）结果。
              processedModuleInsts((moduleName, Seq.empty)) = result
              result

            case Some(intModule: IntModule) =>
              // 内联模块 (IntModule) 通常是 primitives，也不需要处理。
              val result = ModuleTransformResult(intModule, None)
              processedModuleInsts((moduleName, Seq.empty)) =
                result // 同上，用空路径缓存
              result

            case Some(other) =>
              // 遇到未知的或不支持的模块类型，抛出内部错误。
              throwInternalError(
                s"MuxCondPropagator: 未知的模块类型：${other.getClass.getName} ($moduleName)"
              )
            case None =>
              // 如果在 moduleMap 中找不到请求的模块名，说明电路定义有误。
              throwInternalError(
                s"MuxCondPropagator: 在电路图中找不到模块 '$moduleName'"
              )
          }
      }
    }

    // 步骤 5: 从顶层模块 (`circuit.main`) 开始，使用指定的顶层实例名 (`"topInst"`)
    // 和初始实例路径 `Seq("topInst")`，启动递归处理过程。
    processModule(circuit.main, Seq("topInst"))

    // 步骤 6: 收集所有处理过的模块（来自 processedModules 缓存）和未被处理的原始模块。
    // processedModules 可能包含同一个模块名但不同实例路径的多个条目，
    // 但它们的 transformedModule 字段应该是相同的（因为转换是确定性的）。
    // 我们只需要每个模块名一个最终的定义。
    val finalModules = mutable.Map[String, DefModule]()
    processedModuleInsts.values.foreach { result =>
      // 使用模块名称作为键，存入最终的模块定义。如果同一模块名有多个结果，后面的会覆盖前面的，
      // 但由于转换结果应一致，这没有影响。
      finalModules(result.transformedModule.name) = result.transformedModule
    }
    // 确保电路中所有原始模块都被考虑。如果某个模块从未被 `processModule` 触及
    // (例如，它未被顶层模块实例化，或者它是 ExtModule/IntModule 且缓存键不同)，
    // 则将其原始定义添加到 finalModules 中。
    circuit.modules.foreach { mod =>
      if (!finalModules.contains(mod.name)) {
        finalModules(mod.name) = mod
      }
    }

    // 步骤 7: 返回一个新的 Circuit 对象，其 modules 列表包含所有最终的模块定义。
    // 对模块列表按名称排序，以确保输出的确定性。
    circuit.copy(modules = finalModules.values.toSeq.sortBy(_.name))
  }

  /** 根据 Mux 条件表达式的结构，生成一个基础名称字符串。 此名称将作为生成全局唯一 Bundle 字段名的一部分，用于区分不同的条件来源。
    * 它尝试通过递归地处理字段访问 (`.`) 和索引访问 (`[]`) 来创建一个能代表该条件来源的、 相对易读的名称。
    *
    * 例如：
    *   - `Reference("cond_a")` -> "cond_a"
    *   - `SubField(Reference("status"), "valid")` -> "status__S__valid"
    *   - `SubIndex(Reference("flags"), 3)` -> "flags__S__3"
    *   - `SubAccess(Reference("array"), Reference("idx"))` -> "array__S__idx"
    *
    * @param expr
    *   Mux 条件表达式 (通常是 `Reference`, `SubField`, `SubIndex`, `SubAccess` 等)。
    * @return
    *   代表该表达式来源的基础名称字符串。
    */
  private def getConditionBaseName(expr: Expression): String = expr match {
    case Reference(name, _) => name // 基础是引用，直接返回其名称
    case SubField(innerExpr, fieldName, _) => // 基础是字段访问
      val innerName = getConditionBaseName(innerExpr) // 递归获取内部表达式的基础名称
      if (innerName.isEmpty) fieldName // 如果内部名称为空（理论上不太可能），直接用字段名
      else s"${innerName}${SubfieldSeparator}$fieldName" // 拼接：内部名称 + 分隔符 + 字段名
    case SubIndex(innerExpr, value, _) => // 基础是常量索引访问
      s"${getConditionBaseName(innerExpr)}${SubfieldSeparator}$value" // 拼接：内部名称 + 分隔符 + 索引值
    case SubAccess(innerExpr, index, _) => // 基础是动态索引访问
      // 拼接：内部名称 + 分隔符 + 索引表达式的基础名称
      // 注意：对索引表达式递归调用 getConditionBaseName 可能产生复杂或不太稳定的名称，但这是一种尝试
      s"${getConditionBaseName(innerExpr)}${SubfieldSeparator}${getConditionBaseName(index)}"
    case other => // 其他不支持的表达式类型
      // 如果遇到无法处理的表达式类型作为 Mux 条件，抛出内部错误。
      // 这通常意味着该条件表达式结构复杂，无法简单地映射到一个基础名称。
      throwInternalError(
        s"MuxCondPropagator.getConditionBaseName: 无法从 Mux 条件表达式类型推导基础名称: ${other.getClass.getName}. " +
          s"表达式: ${other.serialize}"
      )
  }

  /** 转换单个模块（或类，通过模拟 Module 处理）。 这是 Mux 条件传播的核心逻辑所在。 它会收集该模块本地的 Mux
    * 条件和来自子模块实例的条件， 如果有任何条件需要传播，它会：
    *   1. 创建（或更新）一个名为 `_mux_cond` 的输出端口 (Bundle 类型)。 2. Bundle
    *      的每个字段对应一个唯一的条件来源（本地或子模块）。 3. 对于源自本地、但不是顶层信号（如内部 Node）的条件，创建中间 Wire
    *      并连接， 以便将其值“提升”到模块边界。 4. 添加 Connect 语句，将所有条件源（可能是原始表达式、中间 Wire
    *      或子模块端口字段） 连接到 `_mux_cond` 输出端口的相应字段。
    *
    * @param module
    *   要转换的模块 (Module 或 模拟 DefClass 的 Module)。
    * @param moduleMap
    *   电路中所有模块名称到定义的映射，用于查找子模块类型等信息（虽然当前实现未使用）。
    * @param internalCondMap
    *   预先计算的每个模块内部 Mux 条件表达式列表的映射。
    * @param topLevelNames
    *   此模块顶层作用域定义的名称集合（来自 `collectTopLevelNames`）。 用于判断本地条件是否需要提升。
    * @param currentInstancePath
    *   到达此模块的实例路径 (Seq[String])。用于生成全局唯一的字段名。
    * @param processFunc
    *   用于递归处理子模块实例的函数 (即 `processModule` 自身)。
    * @return
    *   模块转换结果 (ModuleTransformResult)，包含转换后的模块定义和可能的条件端口信息。
    */
  private def transformModule(
      module: Module, // 注意：这里可能是真实的 Module，也可能是为了处理 DefClass 而创建的临时 Module
      moduleMap: Map[String, DefModule],
      internalCondMap: Map[String, Seq[Expression]],
      topLevelNames: Set[String],
      currentInstancePath: Seq[String],
      processFunc: (String, Seq[String]) => ModuleTransformResult
  ): ModuleTransformResult = {

    // === 步骤 1: 收集本地条件来源 (LocalCondSource) ===
    // 从预计算的 internalCondMap 中获取当前模块直接包含的 Mux 条件表达式列表。
    val localCondSources: List[LocalCondSource] =
      internalCondMap.get(module.name) match {
        case Some(condExprs) =>
          // 对找到的条件表达式进行处理：
          // 1. distinctBy(_.serialize): 基于表达式的序列化形式去重，避免重复处理完全相同的条件。
          condExprs
            .distinctBy(_.serialize)
            .map { expr =>
              // 2. 确定条件的类型。目标是 1 位宽的 GroundType (UInt<1>, SInt<1>, Analog<1>)。
              val condType = expr.tpe match {
                case UnknownType => UIntType(IntWidth(1)) // 类型未知，默认使用 UInt<1>
                case t: GroundType if t.width == IntWidth(1) =>
                  t // 如果已经是 1 位宽 GroundType，保持原样
                case _ =>
                  UIntType(
                    IntWidth(1)
                  ) // 其他类型（如 Bundle, Vector, 或 >1 位宽）强制为 UInt<1>
              }
              // 3. 获取条件表达式的基础名称 (用于字段名)。
              val baseName = getConditionBaseName(expr)
              // 4. 构造当前实例路径的字符串表示。
              val pathString =
                currentInstancePath.mkString(InstanceSeparator)
              // 5. 生成全局唯一的字段名，格式：path__local__basename
              val fieldName =
                s"${pathString}${InstanceSeparator}${LocalMarker}${InstanceSeparator}$baseName"
              // 6. 创建 LocalCondSource 对象。
              LocalCondSource(fieldName, ConditionOriginInfo(expr, condType))
            }
            .toList // 转换为 List
        case None => List.empty // 如果该模块在 internalCondMap 中没有条目，说明没有内部 Mux 条件。
      }

    // === 步骤 2: 递归处理子模块实例并收集子模块条件来源 (ChildCondSource) ===
    val childCondSources = mutable.ListBuffer[ChildCondSource]() // 存储来自子模块的条件
    val instanceMap =
      mutable.Map[String, DefInstance]() // 记录遇到的实例定义 (虽然当前未使用，但可能有用)

    // 定义一个递归函数，用于遍历模块主体语句，查找实例定义 (DefInstance)。
    // 查找到实例后，递归调用 processModule 来处理子模块。
    // 该函数会在子模块中查找 `_mux_cond` 端口，并将其字段信息传递回当前模块。
    def findInstancesAndCollectChildConds(s: Statement): Unit = s match {
      case inst: DefInstance => // 找到一个实例定义
        instanceMap(inst.name) = inst // 记录实例定义
        val childModuleName = inst.module // 获取子模块的名称
        val childInstanceName = inst.name // 获取此实例的名称
        // 构建子模块的实例路径：当前路径 + 子实例名称
        val childInstancePath =
          currentInstancePath :+ childInstanceName

        // 递归调用 processModule (通过传入的 processFunc) 来处理子模块的定义。
        // 这会返回子模块的转换结果，包括它可能添加的 _mux_cond 端口信息。
        val childResult = processFunc(childModuleName, childInstancePath)

        // 检查子模块的转换结果是否包含条件端口信息。
        childResult.conditionPortInfo match {
          case Some((childPortName, childBundleType)) =>
            // 如果子模块有 _mux_cond 端口：
            // 1. 创建访问子模块条件端口自身的表达式 (例如 `instName._mux_cond`)。
            //    注意：inst.tpe 应该是实例的类型（通常是 BundleType，但这里FIRRTL IR允许直接引用实例名）
            //    我们需要确保类型匹配，这里直接使用子模块返回的 Bundle 类型。
            val childPortAccess = SubField(
              Reference(inst.name, UnknownType), // 引用实例名，类型暂时未知或不重要，后续字段访问会带类型
              childPortName, // 子模块条件端口名 (_mux_cond)
              childBundleType // 子模块条件端口的 Bundle 类型
            )
            // 2. 遍历子模块条件端口 Bundle 中的每个字段。
            childBundleType.fields.foreach { field =>
              // field.name 是从子模块传递上来的全局唯一字段名，已经包含了子模块的实例路径信息。
              val uniqueChildFieldName = field.name
              // 3. 创建访问该特定字段的表达式 (例如 `instName._mux_cond.fieldName`)。
              val fieldAccess =
                SubField(childPortAccess, field.name, field.tpe)
              // 4. 创建 ConditionOriginInfo，记录来源表达式 (字段访问) 和类型。
              val originInfo = ConditionOriginInfo(fieldAccess, field.tpe)
              // 5. 创建 ChildCondSource，记录实例名、原始字段名（供参考）、
              //    最终在当前模块 Bundle 中使用的字段名 (即 uniqueChildFieldName) 和来源信息。
              childCondSources += ChildCondSource(
                inst.name, // 子模块实例名
                uniqueChildFieldName, // 在当前模块 Bundle 中的字段名
                originInfo // 来源信息 (访问子模块端口字段的表达式)
              )
            }
          case None => () // 子模块没有需要传播的条件，无需操作。
        }

      // 递归遍历 Block, Conditional, LayerBlock 等结构内部的语句。
      case Block(stmts) => stmts.foreach(findInstancesAndCollectChildConds)
      case Conditionally(_, _, conseq, alt) =>
        findInstancesAndCollectChildConds(conseq);
        findInstancesAndCollectChildConds(alt)
      case LayerBlock(_, _, body) =>
        findInstancesAndCollectChildConds(body)
      // 其他类型的语句不包含实例定义，或者我们不关心其内部结构（如 DefWire, Connect 等），停止递归。
      case _ => ()
    }

    // 对当前模块的body执行实例查找和子条件收集。
    findInstancesAndCollectChildConds(module.body)

    // === 步骤 3: 组合所有条件来源并确定最终的端口字段 ===
    // 将本地条件和从子模块收集到的条件合并到一个列表中。
    val allCondSources: List[ConditionSource] =
      localCondSources ++ childCondSources.toList

    // 如果合并后没有任何条件来源（本地没有，子模块也没有），
    // 则该模块无需修改，直接返回原始模块和 None 端口信息。
    if (allCondSources.isEmpty) {
      return ModuleTransformResult(module, None)
    }

    // 将所有条件来源 (ConditionSource) 映射到 Bundle 字段定义 (Field)。
    val bundleFields = allCondSources.map { source =>
      // 从 source 中提取字段名和原始类型。
      val (fieldName, fieldType) = source match {
        case LocalCondSource(fname, info)    => (fname, info.tpe)
        case ChildCondSource(_, fname, info) => (fname, info.tpe)
      }
      // 确保最终的字段类型是 1 位宽的 GroundType。如果不是，强制转换为 UInt<1>。
      val finalType = fieldType match {
        case gt: GroundType if gt.width == IntWidth(1) =>
          gt // 保持 1 位宽 GroundType
        case _ => UIntType(IntWidth(1)) // 强制为 UInt<1>
      }
      // 创建 Field 定义。方向使用 Default，因为它们是 Bundle 的内部字段。
      Field(fieldName, Default, finalType)
    }

    // 按字段名称分组并去重。由于字段名设计为全局唯一，理论上每个组只有一个元素。
    // 然后按字段名称排序，以确保生成的 Bundle 类型字段顺序是确定的。
    val finalUniqueFields = bundleFields
      .groupBy(_.name) // 按字段名分组
      .map { case (_, fields) => fields.head } // 每个组取第一个（即唯一的）元素
      .toSeq // 转换为 Seq
      .sortBy(_.name) // 按名称排序

    // 再次检查，如果去重排序后没有字段（理论上不应发生，除非 allCondSources 为空，但前面已处理），
    // 也无需修改模块。
    if (finalUniqueFields.isEmpty) {
      return ModuleTransformResult(module, None)
    }

    // 使用最终确定的唯一字段列表创建 Bundle 类型。
    val combinedBundleType = BundleType(finalUniqueFields)

    // === 步骤 4: 创建新的输出端口 (`_mux_cond`) ===
    // 创建 Port 定义。
    val newOutputPort = Port(
      module.info, // 使用模块的源信息 (Info)
      ConditionOutputPortName, // 标准端口名称 "_mux_cond"
      Output, // 方向为输出 (Output)
      combinedBundleType // 类型为上面创建的 Bundle 类型
    )
    // 更新模块的端口列表：先移除可能已存在的同名端口（以支持重新运行 Pass），
    // 然后添加新的 `_mux_cond` 端口。
    val updatedPorts =
      module.ports.filterNot(_.name == ConditionOutputPortName) :+ newOutputPort

    // === 步骤 5: 识别需要创建中间 Wire 来“提升”的本地条件 ===
    // 这个步骤是为了处理那些作为 Mux 条件、但定义在模块内部（例如 DefNode）
    // 且其值无法直接从模块顶层访问的信号。我们需要创建一个 Wire，
    // 将这个内部信号的值连接到 Wire，然后将 Wire 连接到输出端口的对应字段。

    // 存储需要提升的本地条件信息。
    // Map: 局部信号的根引用名称 -> (原始表达式, 信号类型, 生成的中间 Wire 名称)
    val localCondsToHoist = mutable.Map[String, (Expression, Type, String)]()
    // 存储局部信号根引用名称到其在最终 Bundle 中对应字段名的映射。
    // Map: 局部信号的根引用名称 -> Bundle 字段名称
    val localCondFieldNameMap = mutable.Map[String, String]()

    // 遍历所有本地条件来源 (LocalCondSource)。
    localCondSources.foreach {
      case LocalCondSource(fieldName, ConditionOriginInfo(expr, tpe)) =>
        // 尝试获取该条件表达式的根引用名称。
        getRootReferenceName(expr) match {
          case Some(refName) => // 如果表达式基于一个引用 (例如 a, a.b, vec[0])
            // 检查该根引用名称是否 *不* 在模块的顶层名称集合 (topLevelNames) 中。
            // 如果不在，说明它是一个局部定义的信号（如 Node），需要提升。
            if (!topLevelNames.contains(refName)) {
              // 生成中间 Wire 的唯一名称。
              val wireName =
                s"${IntermediateWirePrefix}${fieldName}" // 使用字段名保证唯一性
              // 记录需要提升的信息。
              localCondsToHoist(refName) = (expr, tpe, wireName)
              // 记录该引用名称对应的 Bundle 字段名。
              localCondFieldNameMap(refName) = fieldName
              // // Debugging print:
              // println(s"模块 ${module.name}: 识别到需要提升的局部信号 ${refName} (源自 ${expr.serialize}, 字段名: ${fieldName}, Wire: ${wireName})")
            } else {
              // 如果根引用名称在顶层名称中，说明可以直接访问，无需提升。
              // // Debugging print:
              // println(s"模块 ${module.name}: 信号 ${refName} (源自 ${expr.serialize}, 字段名: ${fieldName}) 是顶层信号，无需提升")
            }
          case None => // 如果表达式不是基于简单引用 (例如直接使用 DoPrim 的结果)
            // 这种情况通常意味着存在一个 DefNode 定义了这个表达式的值。
            // 我们假设这个 Node 的名称就是我们需要检查的名称。
            // 这依赖于 ModuleInternalCondsMapProvider 能正确找到并返回引用 Node 的表达式。
            // 我们尝试再次获取基础名称（可能与 refName 情况下的 baseName 不同，取决于 getConditionBaseName 实现）。
            val baseName = getConditionBaseName(expr)
            // 检查这个基础名称是否不在顶层名称集合中。
            if (!topLevelNames.contains(baseName)) {
              // 如果不在，也认为需要提升。
              val wireName = s"${IntermediateWirePrefix}${fieldName}"
              // 记录需要提升的信息。注意：这里存储的是原始复杂表达式 `expr`。
              // 连接时需要找到定义这个 `expr` 的 `DefNode` 并使用其引用。
              localCondsToHoist(baseName) = (expr, tpe, wireName)
              localCondFieldNameMap(baseName) = fieldName
              // // Debugging print:
              // println(s"模块 ${module.name}: 识别到复杂表达式基础名称 ${baseName} (源自 ${expr.serialize}) 需要提升 (字段名: ${fieldName}, Wire: ${wireName})")
            }
          // else { // Debugging print:
          //   println(s"模块 ${module.name}: 复杂表达式 ${expr.serialize} (基础名 ${baseName}) 无需提升")
          // }
        }
    }

    // === 步骤 6a: 创建中间 Wire 的定义语句 (DefWire) ===
    // 根据上一步收集到的 `localCondsToHoist` 信息，为每个需要提升的条件创建 DefWire 语句。
    val intermediateWires: Seq[DefWire] = localCondsToHoist.values.map {
      case (_, tpe, wireName) =>
        // 使用记录的类型和生成的唯一 Wire 名称创建 DefWire。
        DefWire(NoInfo, wireName, tpe) // Info 设为 NoInfo
    }.toSeq

    // === 步骤 6b: 为中间 Wires 创建默认连接 (Connect) ===
    // 这是为了解决 FIRRTL 的 "not fully initialized" 问题。如果一个 Wire 只在
    // 条件语句块 (如 `when`) 内部被赋值，编译器可能会报错。
    // 通过在模块开始处为所有中间 Wire 提供一个默认连接（通常连接到 0），可以避免此问题。
    val defaultConnects: Seq[Connect] = localCondsToHoist.values.map {
      case (_, tpe, wireName) =>
        // 确定默认值。对于 1 位宽的条件信号 (已被规范化为 1 位 GroundType)，
        // 使用 0 是安全的。我们统一使用 UInt<1>(0)。
        val defaultValue = tpe match {
          case gt: GroundType if gt.width == IntWidth(1) =>
            UIntLiteral(0, IntWidth(1)) // 规范的 1 位 0
          case _ =>
            // 如果类型不是预期的 1 位 GroundType（理论上不应发生，因为前面已规范化），
            // 打印警告并仍然尝试使用 UInt<1>(0)。
            println(
              s"警告: MuxCondPropagator - 为中间 Wire ${wireName} (类型 ${tpe.serialize}) 使用默认值 UInt<1>(0)，类型非预期。"
            )
            UIntLiteral(0, IntWidth(1))
        }
        // 创建连接语句: connect wireName, defaultValue
        Connect(NoInfo, Reference(wireName, tpe), defaultValue)
    }.toSeq

    // === 步骤 7: 修改模块主体，添加从局部 Node 到中间 Wire 的连接 ===
    // 我们需要遍历原始模块主体，找到定义了需要提升的局部条件信号的语句 (通常是 DefNode)，
    // 并在其后插入一条 Connect 语句，将该局部信号连接到对应的中间 Wire。

    // 记录已经为其添加了连接的局部信号名称（根引用名），以避免在某些代码结构中重复添加连接。
    val connectAdded = mutable.Set[String]()

    // 定义一个递归函数，用于遍历语句并可能插入连接。
    // 它接收一个语句，返回一个语句序列 (Seq[Statement])，
    // 因为插入 Connect 会使原来的单个语句变成两个语句。
    def addIntermediateConnects(stmt: Statement): Seq[Statement] = stmt match {
      case node @ DefNode(info, name, value) => // 遇到 Node 定义
        // 检查这个 Node 的名称是否是我们记录的需要提升的局部信号之一。
        localCondsToHoist.get(name) match {
          case Some((_, tpe, wireName)) => // 如果是需要提升的 Node
            // 并且我们还没有为这个名称添加过连接
            if (!connectAdded.contains(name)) {
              // // Debugging print:
              // println(s"模块 ${module.name}: 为提升的 Node ${name} 添加连接 -> ${wireName}")
              // 创建对中间 Wire 的引用。
              val intermediateWireRef = Reference(wireName, tpe)
              // 创建连接语句: connect intermediateWireRef, nodeRef
              // 连接的源是这个 Node 自身，使用 Reference(name, tpe)。
              // 注意：这里假设 Node 的类型 `tpe` 与我们之前记录的一致。
              val connectStmt =
                Connect(
                  info,
                  intermediateWireRef,
                  Reference(name, tpe)
                ) // 使用 Node 的 Info
              connectAdded += name // 标记该名称的连接已添加
              // 返回原始 Node 定义和新的 Connect 语句组成的序列。
              Seq(node, connectStmt)
            } else {
              // 如果已添加过连接（可能在某些复杂控制流中发生？谨慎起见保留此分支），只返回原始 Node。
              Seq(node)
            }
          case None => Seq(node) // 如果这个 Node 不是需要提升的，只返回原始 Node。
        }

      // 递归处理 Block, Conditional, LayerBlock 等结构
      case block @ Block(stmts) =>
        // 对 Block 内的每个语句递归调用 addIntermediateConnects，
        // 然后将返回的 Seq[Statement] 列表展平成一个新的语句列表。
        Seq(block.copy(stmts = stmts.flatMap(addIntermediateConnects)))

      case cond @ Conditionally(info, pred, conseq, alt) =>
        // 对 conseq (then 分支) 和 alt (else 分支) 的主体递归调用。
        val newConseqStmts = addIntermediateConnects(conseq)
        val newAltStmts = addIntermediateConnects(alt)
        // 如果递归调用返回了多个语句（因为插入了 connect），需要将它们重新包装成 Block。
        // 如果只返回一个语句，则保持原样。
        val newConseq = newConseqStmts match {
          case Seq(s) => s // 单个语句
          case ss     => Block(ss) // 多个语句包装成 Block
        }
        val newAlt = newAltStmts match {
          case Seq(s) => s
          case ss     => Block(ss)
        }
        // 返回更新了 conseq 和 alt 的 Conditional 语句。
        Seq(cond.copy(conseq = newConseq, alt = newAlt))

      case layer @ LayerBlock(_, _, body) => // 处理 LayerBlock (类似 Block)
        // 对 LayerBlock 的 body 递归调用
        val newBodyStmts = addIntermediateConnects(body)
        // 处理返回的 Seq[Statement]
        val newBody = newBodyStmts match {
          case Seq(s) => s
          case ss     => Block(ss)
        }
        // 返回更新了 body 的 LayerBlock 语句。
        Seq(layer.copy(body = newBody))

      // 其他类型的语句（如 DefWire, Connect, DefRegister 等）不包含需要处理的 Node 定义，
      // 或者不需要递归进入。直接将它们包装在 Seq 中返回。
      case other => Seq(other)
    }

    // 获取原始模块主体的语句列表。如果主体不是 Block，则将其视为单个语句的列表。
    val existingStmts = module.body match {
      case Block(stmts) => stmts
      case EmptyStmt    => Seq.empty
      case s            => Seq(s)
    }

    // 应用 `addIntermediateConnects` 转换到原始主体语句列表，
    // 得到包含了新插入的连接（用于提升局部信号）的主体语句列表。
    val bodyWithIntermediateConnects: Seq[Statement] =
      existingStmts.flatMap(addIntermediateConnects)

    // === 步骤 8: 创建连接到最终输出端口 (`_mux_cond`) 的语句 (Connect) ===
    // 现在需要为 `_mux_cond` 端口的每个字段添加一条 Connect 语句。
    val finalPortConnects: Seq[Connect] = finalUniqueFields.map { field =>
      // 1. 创建访问新输出端口的这个特定字段的表达式 (LHS of connect)。
      //    例如 `_mux_cond.path__local__basename`
      val portFieldAccess = SubField(
        Reference(newOutputPort.name, newOutputPort.tpe), // 引用新输出端口 "_mux_cond"
        field.name, // 字段名称
        field.tpe // 字段类型
      )

      // 2. 找到与此字段对应的原始条件来源 (ConditionSource)。
      //    这需要反向查找 allCondSources 列表。
      val source = allCondSources
        .find { // 根据字段名查找
          case LocalCondSource(fname, _)    => fname == field.name
          case ChildCondSource(_, fname, _) => fname == field.name
        }
        .getOrElse(
          // 理论上不应该发生，因为 finalUniqueFields 是从 allCondSources 派生的。
          throwInternalError(
            s"内部错误: 在模块 ${module.name} 中找不到字段 ${field.name} 的条件来源信息"
          )
        )

      // 3. 确定连接的源表达式 (RHS of connect)。
      val connectSourceExpr = source match {
        case LocalCondSource(fieldName, info) => // 如果来源是本地条件
          // 检查此本地条件是否是需要提升的，并且我们是否已成功为其添加了连接。
          getRootReferenceName(info.sourceExpr) match {
            // `getRootReferenceName` 返回 Some(refName) 并且...
            // `refName` 在需要提升的映射 `localCondsToHoist` 中 并且...
            // `refName` 在已添加连接的集合 `connectAdded` 中
            case Some(refName)
                if localCondsToHoist
                  .contains(refName) && connectAdded.contains(refName) =>
              // 如果是需要提升且已连接的局部信号，则连接源是对应的中间 Wire。
              val (_, tpe, wireName) = localCondsToHoist(refName)
              // // Debugging print:
              // println(s"模块 ${module.name}: 连接端口字段 ${field.name} 到中间 Wire ${wireName}")
              Reference(wireName, tpe) // 返回中间 Wire 的引用

            case _ =>
              // 否则（它是顶层信号，或者是不基于引用的表达式，或者提升/连接因某种原因失败），
              // 直接使用原始的条件表达式作为连接源。
              // // Debugging print:
              // println(s"模块 ${module.name}: 连接端口字段 ${field.name} 到原始表达式 ${info.sourceExpr.serialize}")
              info.sourceExpr // 返回原始表达式
          }
        case ChildCondSource(_, _, info) => // 如果来源是子模块条件
          // 连接源直接是记录在 ChildCondSource 中的表达式，
          // 它已经是访问子模块端口字段的形式 (例如 `inst._mux_cond.field`)。
          // // Debugging print:
          // println(s"模块 ${module.name}: 连接端口字段 ${field.name} 到子模块来源 ${info.sourceExpr.serialize}")
          info.sourceExpr // 返回访问子模块端口字段的表达式
      }

      // 4. 创建最终的 Connect 语句。
      Connect(NoInfo, portFieldAccess, connectSourceExpr) // Info 设为 NoInfo
    }

    // === 步骤 9: 组装最终的模块主体和模块定义 ===
    // 将所有新生成的语句和修改后的主体组合起来，形成最终的模块主体。
    // 顺序通常是：
    // 1. 中间 Wire 定义 (intermediateWires)
    // 2. 中间 Wire 的默认连接 (defaultConnects) <-- 添加在这里
    // 3. 包含 Node->Wire 连接的原主体语句 (bodyWithIntermediateConnects)
    // 4. 连接到输出端口字段的语句 (finalPortConnects)
    val finalBodyStmts: Seq[Statement] =
      intermediateWires ++ defaultConnects ++ bodyWithIntermediateConnects ++ finalPortConnects
    // 创建转换后的模块定义。使用更新后的端口列表 (updatedPorts) 和
    // 组装好的最终主体语句列表 (包装在 Block 中)。
    val transformedModule = module.copy(
      ports = updatedPorts, // 使用包含 _mux_cond 的新端口列表
      body = Block(finalBodyStmts) // 使用包含所有修改的新主体 Block
    )

    // 返回转换结果，包含转换后的模块定义和新添加的条件端口信息。
    ModuleTransformResult(
      transformedModule,
      Some((ConditionOutputPortName, combinedBundleType)) // 返回端口名和类型
    )
  }

  // === 辅助对象：用于获取模块内部 Mux 条件 ===

  /** 提供一个辅助功能，用于在转换开始前，预先计算并缓存每个模块内部直接出现的 （非字面量）Mux 条件表达式列表。 使用缓存
    * (`WeakHashMap`) 来避免重复计算，特别是在多次运行 Pass 或分析同一电路时。
    */
  object ModuleInternalCondsMapProvider {
    // 使用 WeakHashMap 缓存结果。
    // 键是 Circuit 对象，值是 Map[模块名, Seq[Mux 条件表达式]]。
    // WeakHashMap 允许在 Circuit 对象不再被强引用时，其对应的缓存条目可以被垃圾回收，
    // 有助于防止内存泄漏，尤其是在交互式环境或长时间运行的编译器中。
    private val cache =
      mutable.WeakHashMap[Circuit, Map[String, Seq[Expression]]]()

    /** 获取（如果已缓存）或计算给定电路的模块内部 Mux 条件映射。 这是外部调用者（如
      * `MuxCondPropagator.transform`）使用的公共接口。
      * @param circuit
      *   FIRRTL 电路对象。
      * @return
      *   一个不可变的 Map，将模块名称映射到该模块内部发现的 Mux 条件表达式列表 (Seq[Expression])。
      */
    def getMap(circuit: Circuit): Map[String, Seq[Expression]] = {
      // 尝试从缓存中获取。如果找不到（缓存未命中），则调用 computeMap 计算，
      // 并将结果存入缓存，然后返回结果。
      cache.getOrElseUpdate(circuit, computeMap(circuit))
    }

    /** 计算电路中每个模块的内部 Mux 条件表达式。 这是实际执行计算的私有方法。
      * @param circuit
      *   FIRRTL 电路对象。
      * @return
      *   Map[模块名, Seq[Mux 条件表达式]]。
      */
    private def computeMap(circuit: Circuit): Map[String, Seq[Expression]] = {
      // 使用可变 Map 来构建结果。
      val condsMap = mutable.Map[String, mutable.ListBuffer[Expression]]()
      // 存储当前正在处理的模块名称。
      var currentModuleName = ""
      // 使用临时的可变 ListBuffer 来收集当前模块的条件表达式，方便添加。
      val currentConds = mutable.ListBuffer[Expression]()

      // 定义一个递归函数，用于在表达式内部查找 Mux 条件。
      def findMuxCondsInExpr(e: Expression): Unit = e match {
        case Mux(cond, tval, fval, _) => // 找到了一个 Mux 表达式
          // **关键**: 只添加非字面量 (non-literal) 的条件表达式。
          // 例如，`Mux(UInt(1), a, b)` 中的条件 `UInt(1)` 是字面量，通常不关心。
          // 我们只关心像 `Mux(io.sel, a, b)` 中的 `io.sel` 这样的非字面量条件。
          cond match {
            case _: Literal => // 如果条件是字面量，忽略它。
            case _          => currentConds += cond // 否则，将条件表达式添加到当前模块的列表。
          }
          // **重要**: 递归地在 Mux 自身的条件、真值分支和假值分支表达式内部继续查找。
          // 因为这些分支本身也可能包含 Mux。例如 `Mux(c1, Mux(c2, a, b), d)`。
          findMuxCondsInExpr(cond)
          findMuxCondsInExpr(tval)
          findMuxCondsInExpr(fval)

        // 递归进入其他可能包含 Mux 的复合表达式结构。
        case SubField(expr, _, _) => findMuxCondsInExpr(expr) // 字段访问：检查基础表达式
        case SubIndex(expr, _, _) => findMuxCondsInExpr(expr) // 常量索引访问：检查基础表达式
        case SubAccess(expr, index, _) => // 动态索引访问：检查基础表达式和索引表达式
          findMuxCondsInExpr(expr); findMuxCondsInExpr(index)
        case ValidIf(cond, value, _) => // ValidIf：检查条件和值表达式
          findMuxCondsInExpr(cond); findMuxCondsInExpr(value)
        case DoPrim(_, args, _, _) => // Primitive Operation：检查所有参数表达式
          args.foreach(findMuxCondsInExpr)
        // --- 以下是较新或特定用途的表达式类型，也需要递归检查 ---
        case PropExpr(_, _, _, args) => // Property Expression: 检查参数
          args.foreach(findMuxCondsInExpr)
        case ProbeExpr(expr, _) =>
          findMuxCondsInExpr(expr) // Probe Expression: 检查内部表达式
        case RWProbeExpr(expr, _) =>
          findMuxCondsInExpr(expr) // RWProbe Expression: 检查内部表达式
        case ProbeRead(expr, _) =>
          findMuxCondsInExpr(expr) // Probe Read: 检查内部表达式
        case SequencePropertyValue(
              _,
              values
            ) => // Sequence Property Value: 检查值列表
          values.foreach(findMuxCondsInExpr)

        // 基本情况：简单引用或字面量本身不包含 Mux，停止递归。
        case _: Reference | _: Literal => ()
        // 其他未显式处理的表达式类型。可以根据需要添加更多 case。
        // 如果不处理，意味着这些结构内部的 Mux 将被忽略。
        case _ => ()
      }

      // 定义一个递归函数，用于在语句内部查找包含 Mux 的表达式。
      def findMuxCondsInStmt(s: Statement): Unit = s match {
        // 包含需要检查的表达式的语句类型：
        case DefNode(_, _, value) =>
          findMuxCondsInExpr(value) // Node 定义：检查其值表达式
        case Connect(_, _, expr) => findMuxCondsInExpr(expr) // Connect：检查右侧表达式
        case Stop(_, _, clk, en) => // Stop：检查时钟和使能表达式
          findMuxCondsInExpr(clk); findMuxCondsInExpr(en)
        case Print(_, _, args, clk, en) => // Print：检查所有参数、时钟和使能表达式
          args.foreach(findMuxCondsInExpr); findMuxCondsInExpr(clk);
          findMuxCondsInExpr(en)
        case Verification(
              _,
              _,
              clk,
              pred,
              en,
              _
            ) => // Verification (Assert, Assume, Cover)：检查时钟、断言谓词、使能表达式
          findMuxCondsInExpr(clk); findMuxCondsInExpr(pred);
          findMuxCondsInExpr(en)
        case DefRegister(_, _, _, clock) =>
          findMuxCondsInExpr(clock) // 简单寄存器：检查时钟表达式
        case DefRegisterWithReset(
              _,
              _,
              _,
              clock,
              reset,
              init
            ) => // 带复位寄存器：检查时钟、复位和初始值表达式
          findMuxCondsInExpr(clock); findMuxCondsInExpr(reset);
          findMuxCondsInExpr(init)
        // --- 属性和探测相关语句 ---
        case PropAssign(_, loc, expr) => // Property Assign: 检查位置和表达式
          findMuxCondsInExpr(loc); findMuxCondsInExpr(expr)
        case Attach(_, exprs) =>
          exprs.foreach(findMuxCondsInExpr) // Attach: 检查所有附加的表达式
        case ProbeDefine(
              _,
              sink,
              probeExpr
            ) => // Probe Define: 检查 sink 和 probe 表达式
          findMuxCondsInExpr(sink); findMuxCondsInExpr(probeExpr)
        case ProbeForceInitial(
              _,
              probe,
              value
            ) => // Probe Force Initial: 检查 probe 和 value
          findMuxCondsInExpr(probe); findMuxCondsInExpr(value)
        case ProbeReleaseInitial(_, probe) =>
          findMuxCondsInExpr(probe) // Probe Release Initial: 检查 probe
        case ProbeForce(
              _,
              clock,
              cond,
              probe,
              value
            ) => // Probe Force: 检查时钟、条件、probe 和 value
          findMuxCondsInExpr(clock); findMuxCondsInExpr(cond);
          findMuxCondsInExpr(probe); findMuxCondsInExpr(value)
        case ProbeRelease(
              _,
              clock,
              cond,
              probe
            ) => // Probe Release: 检查时钟、条件和 probe
          findMuxCondsInExpr(clock); findMuxCondsInExpr(cond);
          findMuxCondsInExpr(probe)

        // 递归进入控制流和块结构：
        case Block(stmts) =>
          stmts.foreach(findMuxCondsInStmt) // Block：递归处理其内部所有语句
        case Conditionally(
              _,
              pred,
              conseq,
              alt
            ) => // Conditional (when/else when/otherwise)：
          findMuxCondsInExpr(pred) // 检查 'when' 条件表达式本身是否包含 Mux
          findMuxCondsInStmt(conseq) // 递归处理 'then' 分支的主体语句
          findMuxCondsInStmt(alt) // 递归处理 'else' 分支的主体语句
        case LayerBlock(_, _, body) => // LayerBlock: 递归处理其主体语句
          findMuxCondsInStmt(body)

        case other => ()
      }

      // 遍历电路中的所有模块/类定义。
      circuit.modules.foreach { m =>
        currentModuleName = m.name // 设置当前正在处理的模块名称
        currentConds.clear() // 清空用于收集当前模块条件的 ListBuffer
        m match {
          case mod: Module => findMuxCondsInStmt(mod.body) // 如果是 Module，处理其主体语句
          case cls: DefClass =>
            findMuxCondsInStmt(cls.body) // 如果是 DefClass，处理其主体语句
          case _: ExtModule | _: IntModule => // ExtModule 和 IntModule 没有主体，无需处理
        }
        // 如果当前模块收集到了任何条件表达式
        if (currentConds.nonEmpty) {
          // 对收集到的条件列表，基于其序列化形式进行去重，
          // 然后将去重后的列表（转换为不可变 ListBuffer）存入结果 Map。
          condsMap(currentModuleName) = currentConds.distinctBy(_.serialize)
        }
      }

      // 将最终的可变 Map (mutable.Map[String, mutable.ListBuffer[Expression]])
      // 转换为不可变的 Map (Map[String, Seq[Expression]]) 并返回。
      condsMap.map { case (name, buffer) => name -> buffer.toList }.toMap
    }
  }
}
