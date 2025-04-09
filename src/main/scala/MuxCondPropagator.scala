package firrtl
package ir

import firrtl.Utils.throwInternalError // 引入内部错误抛出工具

import scala.collection.mutable // 引入可变集合

/** Mux 条件传播器
  *
  * 该 Pass 的目标是识别 FIRRTL 电路中所有的 Mux 条件信号，并将它们沿着模块实例化层级向上传播。 对于每个包含或使用了 Mux
  * 条件的模块实例，会在其接口上添加一个新的 Bundle 类型的输出端口（默认为 `_mux_cond`）。 这个 Bundle
  * 包含了所有源自该模块内部或其子模块实例的 Mux 条件信号。
  */
object MuxCondPropagator {

  // 用于在生成的唯一字段名中分隔实例名称的字符串
  val InstanceSeparator = "__I__"
  // 用于在生成的唯一字段名中分隔 SubField 名称的字符串
  val SubfieldSeparator = "__S__"
  // 用于在生成的唯一字段名中标记本地（非子模块传递）条件的字符串
  val LocalMarker = "local"
  // 添加到模块接口用于输出 Mux 条件的端口名称
  val ConditionOutputPortName = "_mux_cond"
  // 为在模块体内部定义的 Mux 条件（如 DefNode）创建的中间线的名称前缀
  val IntermediateWirePrefix = "_mux_cond_prop_wire_"

  /** 封装 Mux 条件原始来源的信息。
    * @param sourceExpression
    *   原始的 Mux 条件表达式 (例如 `a.b`, `cond_wire`)
    * @param conditionType
    *   原始表达式的 FIRRTL 类型 (应为 1 位宽的 GroundType)
    */
  case class ConditionOriginInfo(
      sourceExpression: Expression,
      conditionType: Type
  )

  /** Mux 条件来源的密封特质 (Sealed Trait)。 表示一个需要被传播到父模块输出端口的 Mux 条件。
    */
  sealed trait ConditionSource

  /** 表示源自当前模块内部的 Mux 条件。
    * @param propagatedFieldName
    *   在父模块 `_mux_cond` Bundle 中代表此条件的唯一字段名。 格式通常为:
    *   "instancePath__I__local__I__baseIdentifier"
    * @param originInfo
    *   包含原始 Mux 条件表达式及其类型的信息。
    */
  case class LocalCondSource(
      propagatedFieldName: String,
      originInfo: ConditionOriginInfo
  ) extends ConditionSource

  /** 表示从子模块实例传播上来的 Mux 条件。
    * @param instanceName
    *   子模块实例的名称。
    * @param propagatedFieldName
    *   从子模块的 `_mux_cond` 端口传入的字段名，此名称已包含子模块的路径和原始信息。 格式通常为:
    *   "childInstancePath__I__localOrChild__I__baseIdentifier"
    * @param originInfo
    *   包含访问子模块条件端口字段的表达式 (`SubField(Reference(instanceName, ...),
    *   propagatedFieldName, ...)`) 及其类型的信息。
    */
  case class ChildCondSource(
      instanceName: String,
      propagatedFieldName: String,
      originInfo: ConditionOriginInfo
  ) extends ConditionSource

  /** 封装单个模块转换操作的结果。
    * @param transformedModule
    *   转换后的模块定义 (可能是 Module, DefClass, ExtModule, IntModule)。
    * @param conditionPortInfo
    *   如果模块需要输出 Mux 条件，则为 Some((端口名, Bundle类型))；否则为 None。
    */
  case class ModuleTransformResult(
      transformedModule: DefModule,
      conditionPortInfo: Option[(String, BundleType)]
  )

  /** 收集模块顶层（端口和 Body 内直接定义）的声明名称。 用于判断一个 Mux 条件的根引用是否是模块内部定义的节点，这影响是否需要中间线。
    * @param targetStmt
    *   模块的 Body (Statement)
    * @return
    *   顶层声明名称的集合 (Set[String])
    */
  private def collectTopLevelNames(
      targetStmt: Statement,
      ports: Seq[Port]
  ): Set[String] = {
    val collectedNames = mutable.Set[String]()

    // 1. 添加所有端口名称
    ports.foreach(p => collectedNames += p.name)

    // 2. 处理 Body 语句 (只检查第一层)
    targetStmt match {
      case Block(stmts) =>
        // 遍历 Block 中的第一层语句
        stmts.foreach { stmt =>
          stmt match {
            // 检查是否为顶层定义语句
            case definition: DefWire     => collectedNames += definition.name
            case definition: DefRegister => collectedNames += definition.name
            case definition: DefNode     => collectedNames += definition.name
            case definition: DefMemory   => collectedNames += definition.name
            case definition: DefInstance => collectedNames += definition.name
            case definition: DefInstanceChoice =>
              collectedNames += definition.name
            case definition: DefObject => collectedNames += definition.name
            // 忽略 Conditionally, Connect, Attach 等非定义语句，并且不再递归
            case _ => ()
          }
        }
      // 如果 Body 不是 Block，而是单个语句，检查这个语句是否是顶层定义
      case definition: DefWire           => collectedNames += definition.name
      case definition: DefRegister       => collectedNames += definition.name
      case definition: DefNode           => collectedNames += definition.name
      case definition: DefMemory         => collectedNames += definition.name
      case definition: DefInstance       => collectedNames += definition.name
      case definition: DefInstanceChoice => collectedNames += definition.name
      case definition: DefObject         => collectedNames += definition.name
      // 其他单个语句类型（如 Connect, Conditionally）不是顶层定义，忽略
      case _ => ()
    }

    collectedNames.toSet
  }

  /** 获取表达式的根引用名称。 例如，对于 `a.b.c`，返回 `Some("a")`。对于 `a`，返回 `Some("a")`。 对于非引用或
    * SubField 嵌套的表达式（如 `UInt<1>(1)`），返回 `None`。 Mux 条件必须是引用或其字段，否则会报错。
    * @param expr
    *   输入表达式
    * @return
    *   Option[String] 包含根引用名称，如果表达式不是以引用开头则为 None。
    */
  private def getRootReferenceName(expr: Expression): Option[String] =
    expr match {
      case Reference(name, _) => Some(name) // 基本情况：直接是引用
      case SubField(innerExpr, _, _) =>
        getRootReferenceName(innerExpr) // 递归查找内部表达式
      // 其他表达式类型（Literal, PrimOp 等）没有根引用名称
      case _ => None
    }

  /** 对整个电路执行 Mux 条件传播转换。
    * @param circuit
    *   原始 FIRRTL 电路
    * @return
    *   转换后的 FIRRTL 电路，其中相关模块添加了 `_mux_cond` 输出端口。
    */
  def transform(circuit: Circuit): Circuit = {

    // 1. 获取每个模块内部直接使用的 Mux 条件表达式映射
    val internalConditionsMap: Map[String, Seq[Expression]] =
      ModuleInternalCondsMapProvider.getMap(circuit)

    // 2. 创建模块名称到模块定义的映射，方便查找
    val moduleMap: Map[String, DefModule] =
      circuit.modules.map(m => m.name -> m).toMap

    // 3. 缓存，存储已处理过的 (模块名, 实例路径) -> 转换结果，避免重复计算
    //    实例路径用于区分同一个模块在不同地方实例化的上下文
    val processedModuleInstancesCache =
      mutable.Map[(String, Seq[String]), ModuleTransformResult]()

    // 4. 预计算每个模块的顶层声明名称集合
    val topLevelNamesMap = mutable.Map[String, Set[String]]()
    circuit.modules.foreach {
      case module: Module =>
        // 调用修正后的 collectTopLevelNames，传入 body 和 ports
        val names = collectTopLevelNames(module.body, module.ports)
        topLevelNamesMap(module.name) = names
      case classDef: DefClass =>
        // 对 DefClass 也同样处理
        val names = collectTopLevelNames(classDef.body, classDef.ports)
        topLevelNamesMap(classDef.name) = names
      case _ => // ExtModule, IntModule 没有 body，不需要计算
    }

    /** 递归处理单个模块实例。
      * @param moduleName
      *   要处理的模块的名称。
      * @param instancePath
      *   从顶层模块到当前实例的路径（例如 `Seq("top", "inst_a", "inst_b")`）。
      * @return
      *   该模块实例的转换结果 (`ModuleTransformResult`)。
      */
    def processModule(
        moduleName: String,
        instancePath: Seq[String]
    ): ModuleTransformResult = {
      // 使用 (模块名, 实例路径) 作为缓存键
      val moduleInstanceCacheKey = (moduleName, instancePath)
      processedModuleInstancesCache.get(moduleInstanceCacheKey) match {
        case Some(cachedResult) =>
          // 如果缓存命中，直接返回结果
          cachedResult
        case None =>
          // 缓存未命中，需要处理该模块
          moduleMap.get(moduleName) match {
            case Some(module: Module) =>
              // 处理普通模块
              val transformResult = transformModule(
                module,
                moduleMap,
                internalConditionsMap,
                topLevelNamesMap
                  .getOrElse(module.name, Set.empty), // 获取预计算的顶层名称
                instancePath,
                processModule // 传入递归调用函数
              )
              processedModuleInstancesCache(moduleInstanceCacheKey) =
                transformResult // 存入缓存
              transformResult

            case Some(classDef: DefClass) =>
              // 将类定义 (DefClass) 暂时当作模块 (Module) 处理
              // 注意：这可能是一个简化处理，具体取决于 DefClass 的语义和用途
              val fakeModule = Module(
                classDef.info,
                classDef.name,
                classDef.ports,
                classDef.body
              )
              val transformedFakeModuleResult = transformModule(
                fakeModule,
                moduleMap,
                internalConditionsMap,
                topLevelNamesMap.getOrElse(classDef.name, Set.empty),
                instancePath,
                processModule
              )
              // 将转换结果（端口、Body）应用回 DefClass
              val transformedClassDef = classDef.copy(
                ports = transformedFakeModuleResult.transformedModule
                  .asInstanceOf[Module] // 转换结果保证是 Module
                  .ports,
                body = transformedFakeModuleResult.transformedModule
                  .asInstanceOf[Module]
                  .body
              )
              val finalResult = ModuleTransformResult(
                transformedClassDef, // 返回转换后的 DefClass
                transformedFakeModuleResult.conditionPortInfo // 保留条件端口信息
              )
              processedModuleInstancesCache(moduleInstanceCacheKey) =
                finalResult
              finalResult

            case Some(extModule: ExtModule) =>
              // 外部模块没有 Body，不包含 Mux 条件，直接返回
              val result = ModuleTransformResult(extModule, None)
              // 对于外部模块，实例路径通常不重要，但为保持一致性，可以用空路径或特定路径
              processedModuleInstancesCache((moduleName, Seq.empty)) = result
              result

            case Some(intModule: IntModule) =>
              // 内联模块（Intrinsic Module）通常也没有可分析的 Body
              val result = ModuleTransformResult(intModule, None)
              processedModuleInstancesCache((moduleName, Seq.empty)) = result
              result

            case Some(otherModuleType) =>
              // 遇到未知的模块类型，抛出内部错误
              throwInternalError(
                s"MuxCondPropagator: 遇到未知的模块类型：${otherModuleType.getClass.getName} ($moduleName)"
              )
            case None =>
              // 在 moduleMap 中找不到模块定义，说明电路有错误
              throwInternalError(
                s"MuxCondPropagator: 在电路图中找不到模块 '$moduleName'"
              )
          }
      }
    }

    // 5. 从顶层模块 (`circuit.main`) 开始递归处理
    //    顶层实例路径通常给一个特殊名称，如 "top" 或主模块名
    processModule(circuit.main, Seq(circuit.main)) // 使用主模块名作为路径起点

    // 6. 收集所有处理过的模块定义（包括未修改的和已转换的）
    val finalModulesMap = mutable.Map[String, DefModule]()
    // 从缓存中提取所有转换后的模块定义
    processedModuleInstancesCache.values.foreach { result =>
      // 注意：同一个模块可能被不同路径实例化，但转换逻辑应保证结果一致（除了实例路径生成的名字）
      // 这里简单地用模块名作为键，如果存在不同路径导致不同转换（理论上不应发生），可能会覆盖
      finalModulesMap(result.transformedModule.name) = result.transformedModule
    }

    // 确保原始电路中未被处理（例如未被实例化）的模块也被包含在最终结果中
    circuit.modules.foreach { originalMod =>
      if (!finalModulesMap.contains(originalMod.name)) {
        finalModulesMap(originalMod.name) = originalMod
      }
    }

    // 7. 构建并返回包含已转换模块的新电路，按名称排序以保证确定性
    circuit.copy(modules = finalModulesMap.values.toSeq.sortBy(_.name))
  }

  /** 根据 Mux 条件表达式生成一个基础标识符字符串。 用于构建 `_mux_cond` Bundle 中的字段名。
    * 例如：`Reference("a", _)` -> "a" `SubField(Reference("a", _), "b", _)` ->
    * "a__S__b" `SubField(SubField(Reference("a",_), "b", _), "c", _)` ->
    * "a__S__b__S__c"
    * @param expr
    *   Mux 条件表达式（必须是 Reference 或 SubField 嵌套）
    * @return
    *   生成的基础标识符字符串
    * @throws firrtl.Utils.InternalErrorException
    *   如果表达式类型不符合预期
    */
  private def getConditionBaseIdentifier(expr: Expression): String =
    expr match {
      case Reference(name, _)                => name // 基础情况：引用名称
      case SubField(innerExpr, fieldName, _) =>
        // 递归获取内部表达式的标识符，并用分隔符连接当前字段名
        val innerIdentifier = getConditionBaseIdentifier(innerExpr)
        s"${innerIdentifier}${SubfieldSeparator}$fieldName"

      case otherExpr =>
        // 如果遇到非 Reference 或 SubField 的 Mux 条件，说明之前的假设或处理有误
        throwInternalError(
          s"MuxCondPropagator.getConditionBaseIdentifier: 遇到不符合假设的 Mux 条件表达式类型: ${otherExpr.getClass.getName}. " +
            s"表达式: ${otherExpr.serialize}. 假设条件是 Reference 或 SubField 嵌套。"
        )
    }

  /** 转换单个模块，添加 Mux 条件输出端口（如果需要）。
    * @param module
    *   要转换的模块定义。
    * @param moduleMap
    *   电路中所有模块的名称到定义的映射。
    * @param internalConditionsMap
    *   模块名称到其内部 Mux 条件表达式列表的映射。
    * @param topLevelNames
    *   当前模块顶层声明（端口、内部定义）的名称集合。
    * @param currentInstancePath
    *   从顶层到当前模块实例的路径。
    * @param processFunc
    *   用于递归处理子模块实例的函数 `(String, Seq[String]) => ModuleTransformResult`。
    * @return
    *   模块转换结果，包含转换后的模块和可选的条件端口信息。
    */
  private def transformModule(
      module: Module,
      moduleMap: Map[String, DefModule],
      internalConditionsMap: Map[String, Seq[Expression]],
      topLevelNames: Set[String],
      currentInstancePath: Seq[String],
      processFunc: (String, Seq[String]) => ModuleTransformResult
  ): ModuleTransformResult = {

    // 1. 收集当前模块的本地 Mux 条件源
    val localConditionSources: List[LocalCondSource] =
      internalConditionsMap
        .get(module.name) // 获取当前模块的内部 Mux 条件列表
        .map { moduleConditionExpressions =>
          // 对条件表达式去重（基于序列化字符串）
          moduleConditionExpressions
            .distinctBy(_.serialize)
            .map { conditionExpr =>
              // 检查条件表达式是否符合 Reference/SubField 嵌套的假设
              if (getRootReferenceName(conditionExpr).isEmpty) {
                throwInternalError(
                  s"MuxCondPropagator.transformModule: 在模块 ${module.name} 中发现不符合假设的 Mux 条件: ${conditionExpr.serialize}. " +
                    "无法获取根引用名称。假设条件是 Reference 或 SubField 嵌套。"
                )
              }

              // 确定条件的类型，确保是 1 位宽
              val conditionType = conditionExpr.tpe match {
                case t: GroundType if t.width == IntWidth(1) =>
                  t // 保留 SInt/UInt
                case _ => UIntType(IntWidth(1)) // 默认为 UInt<1>
              }
              // 生成条件的基础标识符（例如 "a__S__b"）
              val conditionBaseId = getConditionBaseIdentifier(conditionExpr)
              // 构建实例路径字符串（例如 "top__I__inst_a__I__inst_b"）
              val instancePathPrefix =
                currentInstancePath.mkString(InstanceSeparator)
              // 生成全局唯一的字段名，用于父模块的 Bundle
              val uniqueFieldName =
                s"${instancePathPrefix}${InstanceSeparator}${LocalMarker}${InstanceSeparator}$conditionBaseId"
              // 创建本地条件源记录
              LocalCondSource(
                uniqueFieldName,
                ConditionOriginInfo(conditionExpr, conditionType)
              )
            }
        }
        .getOrElse(Nil) // 如果模块没有内部 Mux 条件，则列表为空
        .toList // 转换为不可变列表

    // 2. 递归处理子模块实例，并收集来自子模块的条件源
    val childConditionSources = mutable.ListBuffer[ChildCondSource]()

    // 辅助函数：遍历模块 Body 中的语句，查找 DefInstance 并处理
    def findInstancesAndCollectChildConds(statement: Statement): Unit =
      statement match {
        case inst: DefInstance => // 找到一个实例定义
          val childModuleName = inst.module // 子模块类型名
          val childInstanceName = inst.name // 子模块实例名
          val childInstancePath =
            currentInstancePath :+ childInstanceName // 更新实例路径
          // 递归调用 processModule 处理子模块实例
          val childTransformResult =
            processFunc(childModuleName, childInstancePath)

          // 检查子模块处理结果是否包含条件输出端口
          childTransformResult.conditionPortInfo match {
            case Some((childPortName, childBundleType)) =>
              // 子模块确实输出了条件 Bundle
              // 创建访问子模块该端口的表达式
              val childConditionPortAccess = SubField(
                Reference(inst.name, UnknownType), // 引用子实例，类型暂时未知，后续会推断
                childPortName, // 访问其条件端口
                childBundleType // 端口类型为 Bundle
              )
              // 遍历子模块条件 Bundle 中的每个字段
              childBundleType.fields.foreach { field =>
                // 子模块传出的字段名已经是全局唯一的
                val uniqueChildFieldName = field.name
                // 创建访问该特定字段的表达式
                val fieldAccessExpr =
                  SubField(childConditionPortAccess, field.name, field.tpe)
                // 记录子条件源信息，包括访问表达式和类型
                val originInfo = ConditionOriginInfo(fieldAccessExpr, field.tpe)
                childConditionSources += ChildCondSource(
                  inst.name, // 子实例名称
                  uniqueChildFieldName, // 子模块传出的唯一字段名
                  originInfo // 访问该字段的表达式信息
                )
              }
            case None => () // 子模块没有输出条件端口，无需处理
          }

        // 递归遍历语句结构
        case Block(stmts) => stmts.foreach(findInstancesAndCollectChildConds)
        case Conditionally(_, _, conseq, alt) =>
          findInstancesAndCollectChildConds(conseq);
          findInstancesAndCollectChildConds(alt)
        case LayerBlock(_, _, body) => findInstancesAndCollectChildConds(body)
        case _                      => () // 其他语句类型不包含实例定义
      }
    // 从模块 Body 开始遍历
    findInstancesAndCollectChildConds(module.body)

    // 3. 合并本地和子条件源
    val allConditionSources: List[ConditionSource] =
      localConditionSources ++ childConditionSources.toList

    // 如果没有任何条件源，说明该模块及其子树都不包含 Mux 条件，无需修改
    if (allConditionSources.isEmpty) {
      return ModuleTransformResult(module, None)
    }

    // 4. 构建新的输出端口 Bundle 类型
    val bundleFields: Seq[Field] = allConditionSources.map { source =>
      // 从条件源提取字段名和类型
      val (propagatedFieldName, fieldType) = source match {
        case LocalCondSource(pfname, origin) => (pfname, origin.conditionType)
        case ChildCondSource(_, pfname, origin) =>
          (pfname, origin.conditionType)
      }
      // 再次确保字段类型是 1 位宽
      val finalFieldType = fieldType match {
        case gt: GroundType if gt.width == IntWidth(1) => gt
        case _ => UIntType(IntWidth(1)) // 强制为 UInt<1>
      }
      // 创建 Bundle 字段
      Field(propagatedFieldName, Default, finalFieldType) // 使用默认翻转（输出）
    }

    // 去重：虽然理论上字段名应该是唯一的，但以防万一，按名称分组并取第一个
    // 并按名称排序以保证确定性
    val finalUniqueBundleFields: Seq[Field] =
      bundleFields.groupBy(_.name).map(_._2.head).toSeq.sortBy(_.name)

    // 如果去重后没有字段（理论上不应发生，因为 allConditionSources 非空），则返回
    if (finalUniqueBundleFields.isEmpty) {
      return ModuleTransformResult(module, None)
    }
    // 创建最终的 Bundle 类型
    val combinedBundleType = BundleType(finalUniqueBundleFields)

    // 5. 创建新的输出端口定义
    val newOutputConditionPort = Port(
      module.info, // 使用模块的源信息
      ConditionOutputPortName, // 使用预定义的端口名
      Output, // 方向为输出
      combinedBundleType // 类型为刚创建的 Bundle
    )
    // 更新模块的端口列表，过滤掉可能已存在的同名端口（重跑 pass 时），然后添加新端口
    val updatedPorts =
      module.ports.filterNot(
        _.name == ConditionOutputPortName
      ) :+ newOutputConditionPort

    // 6. 处理需要中间线的本地条件
    //    如果一个本地 Mux 条件的来源是一个在模块 Body 内部定义的 Node (`DefNode`)，
    //    直接连接 `Node` 到输出端口可能导致连接在使用之前发生（FIRRTL 顺序执行）。
    //    因此，需要创建一个中间线 (Wire)，在 `DefNode` 之后立即连接 `Node` 到 `Wire`，
    //    最后再将 `Wire` 连接到输出端口字段。
    val localConditionsNeedingIntermediateWire =
      mutable.Map[
        String, // 根引用名称 (Root Reference Name)
        (Expression, Type, String) // (原始表达式, 类型, 中间线名称)
      ]()
    // 记录根引用名称到最终输出字段名的映射，方便后续查找
    val localCondRootRefToFieldNameMap =
      mutable.Map[String, String]()

    localConditionSources.foreach {
      case LocalCondSource(pfname, ConditionOriginInfo(expr, tpe)) =>
        getRootReferenceName(expr) match {
          case Some(rootRefName) =>
            // 检查根引用名称是否 *不是* 顶层声明 (端口, wire, reg, inst 等)
            if (!topLevelNames.contains(rootRefName)) {
              // 如果不是顶层声明，意味着它很可能是一个 DefNode
              // 需要创建中间线
              val intermediateWireName =
                s"${IntermediateWirePrefix}${pfname}" // 基于唯一字段名创建线名
              localConditionsNeedingIntermediateWire(rootRefName) =
                (expr, tpe, intermediateWireName)
              localCondRootRefToFieldNameMap(rootRefName) = pfname // 记录映射
            }
          case None =>
            // 这通常不应该发生，因为之前已经检查过
            throwInternalError(
              s"MuxCondPropagator.transformModule: 在模块 ${module.name} 中为本地条件 ${expr.serialize} (字段名 ${pfname}) " +
                "调用 getRootReferenceName 失败。这违反了 Mux 条件必须是 Reference 或 SubField 嵌套的假设。"
            )
        }
    }

    // 7. 生成中间线的定义语句 (DefWire)
    val intermediateWireDefs: Seq[DefWire] =
      localConditionsNeedingIntermediateWire.values.map {
        case (_, condType, wireName) => DefWire(NoInfo, wireName, condType)
      }.toSeq

    // 8. 生成中间线的默认连接语句 (Connect to 0)
    //    这很重要，因为 DefNode 可能在条件语句块内部定义。如果条件不满足，
    //    中间线需要一个默认值。
    val intermediateWireDefaultConnects: Seq[Connect] =
      localConditionsNeedingIntermediateWire.values.map {
        case (_, condType, wireName) =>
          // 默认连接到 0 (UInt<1>(0))
          val defaultValue = UIntLiteral(0, IntWidth(1))
          Connect(NoInfo, Reference(wireName, condType), defaultValue)
      }.toSeq

    // 记录哪些 Node 已经被连接到对应的中间线，避免重复连接
    val nodeConnectedToIntermediateWire = mutable.Set[String]()

    // 9. 修改模块 Body，插入 Node 到中间线的连接
    //    需要遍历 Body，找到对应的 DefNode 语句，并在其后插入 Connect 语句。
    def addIntermediateConnects(statement: Statement): Seq[Statement] =
      statement match {
        // 找到一个 DefNode
        case nodeDef @ DefNode(info, nodeName, _) =>
          localConditionsNeedingIntermediateWire.get(nodeName) match {
            // 检查这个 Node 是否需要连接到中间线，并且尚未连接
            case Some((_, nodeType, wireName))
                if !nodeConnectedToIntermediateWire.contains(nodeName) =>
              // 创建对中间线的引用
              val intermediateWireRef = Reference(wireName, nodeType)
              // 创建连接语句： connect intermediateWireRef <- nodeName
              val connectStmt =
                Connect(
                  info,
                  intermediateWireRef,
                  Reference(nodeName, nodeType)
                )
              // 标记该 Node 已连接
              nodeConnectedToIntermediateWire += nodeName
              // 返回原始 DefNode 和新的 Connect 语句
              Seq(nodeDef, connectStmt)
            case _ =>
              // 该 Node 不需要连接或已连接，只返回原始语句
              Seq(nodeDef)
          }

        // 递归处理 Block, Conditionally, LayerBlock 等容器语句
        case block @ Block(stmts) =>
          // 对 Block 内的每个语句递归调用，然后重新构建 Block
          Seq(block.copy(stmts = stmts.flatMap(addIntermediateConnects)))
        case conditional @ Conditionally(info, pred, conseq, alt) =>
          // 递归处理 conseq 和 alt 分支
          val newConseqStmts = addIntermediateConnects(conseq)
          val newAltStmts = addIntermediateConnects(alt)
          // 如果递归结果是多个语句，需要用 Block 包裹
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
        // 其他语句类型直接返回
        case other => Seq(other)
      }

    // 获取原始模块 Body 中的语句列表
    val existingBodyStmts = module.body match {
      case Block(stmts) => stmts
      case EmptyStmt    => Seq.empty
      case s            => Seq(s) // 如果 Body 不是 Block，则视为单个语句
    }
    // 对原始 Body 中的所有语句应用 `addIntermediateConnects` 转换
    val bodyWithIntermediateConnectsAdded: Seq[Statement] =
      existingBodyStmts.flatMap(addIntermediateConnects)

    // 10. 生成连接到最终输出端口字段的语句
    val finalPortFieldConnects: Seq[Connect] = finalUniqueBundleFields.map {
      field =>
        // 创建访问新输出端口中特定字段的表达式
        val portFieldAccess = SubField(
          Reference(
            newOutputConditionPort.name,
            newOutputConditionPort.tpe
          ), // 引用新端口
          field.name, // 字段名
          field.tpe // 字段类型
        )

        // 找到该字段对应的原始条件源信息 (本地或子条件)
        val sourceInfo = allConditionSources
          .find {
            case LocalCondSource(fname, _)    => fname == field.name
            case ChildCondSource(_, fname, _) => fname == field.name
          }
          .getOrElse(
            throwInternalError(s"无法为字段 ${field.name} 找到条件源")
          ) // 理论上不应发生

        // 确定连接的源表达式
        val connectSourceExpression = sourceInfo match {
          case LocalCondSource(_, origin) =>
            // 如果是本地条件源
            getRootReferenceName(origin.sourceExpression) match {
              // 检查这个本地条件是否使用了中间线，并且连接已经添加
              case Some(rootRefName)
                  if localConditionsNeedingIntermediateWire.contains(
                    rootRefName
                  )
                    && nodeConnectedToIntermediateWire.contains(rootRefName) =>
                // 如果使用了中间线，则连接源是中间线
                val (_, wireType, wireName) =
                  localConditionsNeedingIntermediateWire(rootRefName)
                Reference(wireName, wireType)
              // 否则，直接使用原始的 Mux 条件表达式
              case _ => origin.sourceExpression
            }
          case ChildCondSource(_, _, origin) =>
            // 如果是子条件源，连接源是访问子模块端口字段的表达式
            origin.sourceExpression
        }
        // 创建连接语句： connect portFieldAccess <- connectSourceExpression
        Connect(NoInfo, portFieldAccess, connectSourceExpression)
    }

    // 11. 组合所有新的语句，形成转换后模块的 Body
    // 顺序： 中间线定义 -> 中间线默认连接 -> (原 Body + Node到线连接) -> 输出端口字段连接
    val finalBodyStmts: Seq[Statement] =
      intermediateWireDefs ++
        intermediateWireDefaultConnects ++
        bodyWithIntermediateConnectsAdded ++
        finalPortFieldConnects

    // 12. 创建转换后的模块定义
    val transformedModule = module.copy(
      ports = updatedPorts, // 使用更新后的端口列表
      body = Block(finalBodyStmts) // 使用包含所有新语句的 Block 作为 Body
    )

    // 13. 返回转换结果
    ModuleTransformResult(
      transformedModule,
      Some((ConditionOutputPortName, combinedBundleType)) // 包含新端口的信息
    )
  }

  /** 提供者对象，用于计算并缓存每个模块内部直接使用的 Mux 条件表达式。 使用 WeakHashMap 缓存，当 Circuit
    * 对象不再被强引用时，缓存可以被垃圾回收。
    */
  private object ModuleInternalCondsMapProvider {
    // 缓存：Circuit 对象 -> (模块名 -> Mux 条件表达式列表) 的映射
    private val cache =
      mutable.WeakHashMap[Circuit, Map[String, Seq[Expression]]]()

    /** 获取给定电路的内部 Mux 条件映射。 如果缓存中存在，则直接返回；否则，计算、存入缓存并返回。
      * @param circuit
      *   FIRRTL 电路
      * @return
      *   Map[String, Seq[Expression]] 模块名到 Mux 条件表达式列表的映射
      */
    def getMap(circuit: Circuit): Map[String, Seq[Expression]] = {
      cache.getOrElseUpdate(circuit, computeMap(circuit))
    }

    /** 计算电路中每个模块内部的 Mux 条件表达式。
      * @param circuit
      *   FIRRTL 电路
      * @return
      *   Map[String, Seq[Expression]] 模块名到 Mux 条件表达式列表的映射
      */
    private def computeMap(circuit: Circuit): Map[String, Seq[Expression]] = {
      // 可变 Map 用于存储结果
      val moduleConditionsMap =
        mutable.Map[String, mutable.ListBuffer[Expression]]()
      var currentModuleName: String = "" // 当前正在处理的模块名称
      // 可变 ListBuffer 用于收集当前模块的条件
      val currentModuleConditionsBuffer = mutable.ListBuffer[Expression]()

      /** 递归查找表达式中的 Mux 条件 */
      def findMuxCondsInExpr(expression: Expression): Unit = expression match {
        case Mux(cond, tval, fval, _) => // 找到 Mux 表达式
          cond match {
            case _: Literal => // 如果条件是字面量 (常量)，则忽略
            case _          =>
              // 如果条件不是字面量，则记录它
              currentModuleConditionsBuffer += cond
          }
          // 递归检查 Mux 的条件、真值和假值分支表达式
          findMuxCondsInExpr(cond)
          findMuxCondsInExpr(tval)
          findMuxCondsInExpr(fval)

        // 递归检查可能包含 Mux 的其他表达式结构
        case SubField(expr, _, _) => findMuxCondsInExpr(expr)
        case SubIndex(expr, _, _) => findMuxCondsInExpr(expr)
        case SubAccess(expr, index, _) =>
          findMuxCondsInExpr(expr); findMuxCondsInExpr(index)
        case ValidIf(cond, value, _) =>
          findMuxCondsInExpr(cond); findMuxCondsInExpr(value)
        case DoPrim(_, args, _, _) => args.foreach(findMuxCondsInExpr)
        // 其他可能包含表达式的结构 (根据 FIRRTL 规范)
        case PropExpr(_, _, _, args) => args.foreach(findMuxCondsInExpr)
        case ProbeExpr(expr, _)      => findMuxCondsInExpr(expr)
        case RWProbeExpr(expr, _)    => findMuxCondsInExpr(expr)
        case ProbeRead(expr, _)      => findMuxCondsInExpr(expr)
        case SequencePropertyValue(_, values) =>
          values.foreach(findMuxCondsInExpr)
        // 基本情况：引用和字面量不包含需要递归查找的 Mux
        case _: Reference | _: Literal => ()
        // 其他未列出的表达式类型，假设它们不包含 Mux 或其内部表达式不相关
        case _ => ()
      }

      /** 递归查找语句中的 Mux 条件 (通过查找语句中的表达式) */
      def findMuxCondsInStmt(statement: Statement): Unit = statement match {
        // 查找包含表达式的语句，并对这些表达式调用 findMuxCondsInExpr
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
        // 其他包含表达式的语句 (根据 FIRRTL 规范)
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

        // 递归遍历包含语句的结构
        case Block(stmts) => stmts.foreach(findMuxCondsInStmt)
        case Conditionally(_, pred, conseq, alt) =>
          findMuxCondsInExpr(pred) // 条件本身可能是 Mux
          findMuxCondsInStmt(conseq)
          findMuxCondsInStmt(alt)
        case LayerBlock(_, _, body) => findMuxCondsInStmt(body)
        // 其他语句类型不包含需要检查的表达式或子语句
        case _ => ()
      }

      // 遍历电路中的所有模块
      circuit.modules.foreach { moduleDef =>
        currentModuleName = moduleDef.name // 设置当前模块名
        currentModuleConditionsBuffer.clear() // 清空上一模块收集的条件
        moduleDef match {
          case mod: Module   => findMuxCondsInStmt(mod.body) // 处理普通模块的 Body
          case cls: DefClass => findMuxCondsInStmt(cls.body) // 处理类定义的 Body
          case _: ExtModule | _: IntModule => // 外部模块和内联模块没有 Body 可查
        }
        // 如果当前模块收集到了 Mux 条件
        if (currentModuleConditionsBuffer.nonEmpty) {
          // 使用序列化字符串进行去重，然后存入 Map
          moduleConditionsMap(currentModuleName) =
            currentModuleConditionsBuffer.distinctBy(_.serialize)
        }
      }

      // 将结果从可变 Map[String, ListBuffer] 转换为不可变 Map[String, List]
      moduleConditionsMap.map { case (name, buffer) =>
        name -> buffer.toList
      }.toMap
    }
  }
}
