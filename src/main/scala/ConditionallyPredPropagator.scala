// SPDX-License-Identifier: Apache-2.0

package firrtl
package ir

import firrtl.Utils.throwInternalError // 引入内部错误抛出工具

import scala.collection.mutable // 引入可变集合

/** Conditionally 谓词传播器 (Conditionally Predicate Propagator)
  *
  * 该 Pass 的目标是识别 FIRRTL 电路中所有的 Conditionally 语句的谓词 (predicate) 信号，
  * 并将它们沿着模块实例化层级向上传播。 对于每个包含或使用了 Conditionally 谓词的模块实例，会在其接口上添加一个新的 Bundle
  * 类型的输出端口 （默认为 `_cond_pred`）。 这个 Bundle 包含了所有源自该模块内部或其子模块实例的 Conditionally
  * 谓词信号。
  */
object ConditionallyPredPropagator {

  // --- 常量定义 ---
  // 用于在生成的唯一字段名中分隔实例名称的字符串
  val InstanceSeparator = "__I__"
  // 用于在生成的唯一字段名中分隔 SubField 名称的字符串
  val SubfieldSeparator = "__S__"
  // 用于在生成的唯一字段名中标记本地（非子模块传递）谓词的字符串
  val LocalMarker = "local"
  // 添加到模块接口用于输出 Conditionally 谓词的端口名称
  val PredicateOutputPortName = "_cond_pred"
  // 为在模块体内部定义的谓词（如 DefNode）创建的中间线的名称前缀
  val IntermediateWirePrefix = "_cond_pred_prop_wire_"

  // --- 数据结构 ---

  /** 封装 Conditionally 谓词原始来源的信息。
    * @param sourceExpression
    *   原始的 Conditionally 谓词表达式 (例如 `a.b`, `pred_wire`)
    * @param predicateType
    *   原始表达式的 FIRRTL 类型 (应为 1 位宽的 GroundType)
    */
  case class PredicateOriginInfo(
      sourceExpression: Expression,
      predicateType: Type
  )

  /** Conditionally 谓词来源的密封特质 (Sealed Trait)。 表示一个需要被传播到父模块输出端口的 Conditionally
    * 谓词。
    */
  sealed trait PredicateSource

  /** 表示源自当前模块内部的 Conditionally 谓词。
    * @param propagatedFieldName
    *   在父模块 `_cond_pred` Bundle 中代表此谓词的唯一字段名。 格式通常为:
    *   "instancePath__I__local__I__baseIdentifier"
    * @param originInfo
    *   包含原始 Conditionally 谓词表达式及其类型的信息。
    */
  case class LocalPredSource(
      propagatedFieldName: String,
      originInfo: PredicateOriginInfo
  ) extends PredicateSource

  /** 表示从子模块实例传播上来的 Conditionally 谓词。
    * @param instanceName
    *   子模块实例的名称。
    * @param propagatedFieldName
    *   从子模块的 `_cond_pred` 端口传入的字段名，此名称已包含子模块的路径和原始信息。 格式通常为:
    *   "childInstancePath__I__localOrChild__I__baseIdentifier"
    * @param originInfo
    *   包含访问子模块谓词端口字段的表达式 (`SubField(Reference(instanceName, ...),
    *   propagatedFieldName, ...)`) 及其类型的信息。
    */
  case class ChildPredSource(
      instanceName: String,
      propagatedFieldName: String,
      originInfo: PredicateOriginInfo
  ) extends PredicateSource

  /** 封装单个模块转换操作的结果。
    * @param transformedModule
    *   转换后的模块定义 (可能是 Module, DefClass, ExtModule, IntModule)。
    * @param conditionPortInfo
    *   如果模块需要输出 Conditionally 谓词，则为 Some((端口名, Bundle类型))；否则为 None。 (名称保持通用性
    *   conditionPortInfo，但实际代表谓词端口)
    */
  case class ModuleTransformResult(
      transformedModule: DefModule,
      conditionPortInfo: Option[(String, BundleType)]
  )

  // --- 辅助函数 ---

  /** 收集模块顶层声明的名称，包括端口和 Body 内直接定义的元素。 这个修正版本只检查 Body 的第一层语句，不会递归进入
    * Conditionally 块。
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
    * SubField 嵌套的表达式（如 `UInt<1>(1)`），返回 `None`。 Conditionally 谓词必须是引用或其字段，否则会报错
    * (基于此传播逻辑的假设)。
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

  /** 根据 Conditionally 谓词表达式生成一个基础标识符字符串。 用于构建 `_cond_pred` Bundle 中的字段名。
    * 例如：`Reference("a", _)` -> "a" `SubField(Reference("a", _), "b", _)` ->
    * "a__S__b" `SubField(SubField(Reference("a",_), "b", _), "c", _)` ->
    * "a__S__b__S__c"
    * @param expr
    *   Conditionally 谓词表达式（必须是 Reference 或 SubField 嵌套）
    * @return
    *   生成的基础标识符字符串
    * @throws firrtl.Utils.InternalErrorException
    *   如果表达式类型不符合预期
    */
  private def getPredicateBaseIdentifier(expr: Expression): String =
    expr match {
      case Reference(name, _) => name
      case SubField(innerExpr, fieldName, _) =>
        val innerIdentifier = getPredicateBaseIdentifier(innerExpr)
        s"${innerIdentifier}${SubfieldSeparator}$fieldName"
      case otherExpr =>
        throwInternalError(
          s"ConditionallyPredPropagator.getPredicateBaseIdentifier: 遇到不符合假设的谓词表达式类型: ${otherExpr.getClass.getName}. " +
            s"表达式: ${otherExpr.serialize}. 假设谓词是 Reference 或 SubField 嵌套。"
        )
    }

  // --- 核心转换逻辑 ---

  /** 对整个电路执行 Conditionally 谓词传播转换。
    * @param circuit
    *   原始 FIRRTL 电路
    * @return
    *   转换后的 FIRRTL 电路，其中相关模块添加了 `_cond_pred` 输出端口。
    */
  def transform(circuit: Circuit): Circuit = {

    // 1. 获取每个模块内部直接使用的 Conditionally 谓词表达式映射
    val internalPredicatesMap: Map[String, Seq[Expression]] =
      ModuleInternalPredsMapProvider.getMap(circuit)

    // 2. 创建模块名称到模块定义的映射，方便查找
    val moduleMap: Map[String, DefModule] =
      circuit.modules.map(m => m.name -> m).toMap

    // 3. 缓存，存储已处理过的 (模块名, 实例路径) -> 转换结果
    val processedModuleInstancesCache =
      mutable.Map[(String, Seq[String]), ModuleTransformResult]()

    // 4. 预计算每个模块的顶层声明名称集合 (调用修正后的函数)
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
                internalPredicatesMap,
                topLevelNamesMap
                  .getOrElse(module.name, Set.empty), // 使用预计算的 Map
                instancePath,
                processModule
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
                internalPredicatesMap,
                topLevelNamesMap
                  .getOrElse(classDef.name, Set.empty), // 使用预计算的 Map
                instancePath,
                processModule
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
                transformedFakeModuleResult.conditionPortInfo
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
                s"ConditionallyPredPropagator: 遇到未知的模块类型：${otherModuleType.getClass.getName} ($moduleName)"
              )
            case None =>
              throwInternalError(
                s"ConditionallyPredPropagator: 在电路图中找不到模块 '$moduleName'"
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
    circuit.modules.foreach { originalMod =>
      if (!finalModulesMap.contains(originalMod.name)) {
        finalModulesMap(originalMod.name) = originalMod
      }
    }

    // 7. 构建并返回包含已转换模块的新电路
    circuit.copy(modules = finalModulesMap.values.toSeq.sortBy(_.name))
  }

  /** 转换单个模块，添加 Conditionally 谓词输出端口（如果需要）。
    * @param module
    *   要转换的模块定义。
    * @param moduleMap
    *   电路中所有模块的名称到定义的映射。
    * @param internalPredicatesMap
    *   模块名称到其内部 Conditionally 谓词表达式列表的映射。
    * @param topLevelNames
    *   当前模块顶层声明（端口、内部定义）的名称集合 (来自修正后的计算)。
    * @param currentInstancePath
    *   从顶层到当前模块实例的路径。
    * @param processFunc
    *   用于递归处理子模块实例的函数 `(String, Seq[String]) => ModuleTransformResult`。
    * @return
    *   模块转换结果，包含转换后的模块和可选的谓词端口信息。
    */
  private def transformModule(
      module: Module,
      moduleMap: Map[String, DefModule],
      internalPredicatesMap: Map[String, Seq[Expression]],
      topLevelNames: Set[String], // 这个 Set 现在是正确的顶层名称
      currentInstancePath: Seq[String],
      processFunc: (String, Seq[String]) => ModuleTransformResult
  ): ModuleTransformResult = {

    // 1. 收集当前模块的本地 Conditionally 谓词源
    val localPredicateSources: List[LocalPredSource] =
      internalPredicatesMap
        .get(module.name)
        .map { modulePredicateExpressions =>
          modulePredicateExpressions
            .distinctBy(_.serialize)
            .map { predicateExpr =>
              if (getRootReferenceName(predicateExpr).isEmpty) {
                throwInternalError(
                  s"ConditionallyPredPropagator.transformModule: 在模块 ${module.name} 中发现不符合假设的谓词: ${predicateExpr.serialize}. " +
                    "无法获取根引用名称。假设谓词是 Reference 或 SubField 嵌套。"
                )
              }
              val predicateType = predicateExpr.tpe match {
                case t: GroundType if t.width == IntWidth(1) => t
                case _ => UIntType(IntWidth(1))
              }
              val predicateBaseId = getPredicateBaseIdentifier(predicateExpr)
              val instancePathPrefix =
                currentInstancePath.mkString(InstanceSeparator)
              val uniqueFieldName =
                s"${instancePathPrefix}${InstanceSeparator}${LocalMarker}${InstanceSeparator}$predicateBaseId"

              LocalPredSource(
                uniqueFieldName,
                PredicateOriginInfo(predicateExpr, predicateType)
              )
            }
        }
        .getOrElse(Nil)
        .toList

    // 2. 递归处理子模块实例，并收集来自子模块的谓词源
    val childPredicateSources = mutable.ListBuffer[ChildPredSource]()
    def findInstancesAndCollectChildPreds(statement: Statement): Unit =
      statement match {
        case inst: DefInstance =>
          val childModuleName = inst.module
          val childInstanceName = inst.name
          val childInstancePath = currentInstancePath :+ childInstanceName
          val childTransformResult =
            processFunc(childModuleName, childInstancePath)

          childTransformResult.conditionPortInfo match {
            case Some((childPortName, childBundleType)) =>
              val childPredicatePortAccess = SubField(
                Reference(inst.name, UnknownType),
                childPortName,
                childBundleType
              )
              childBundleType.fields.foreach { field =>
                val uniqueChildFieldName = field.name
                val fieldAccessExpr =
                  SubField(childPredicatePortAccess, field.name, field.tpe)
                val originInfo = PredicateOriginInfo(fieldAccessExpr, field.tpe)
                childPredicateSources += ChildPredSource(
                  inst.name,
                  uniqueChildFieldName,
                  originInfo
                )
              }
            case None => ()
          }
        case Block(stmts) => stmts.foreach(findInstancesAndCollectChildPreds)
        case Conditionally(_, _, conseq, alt) =>
          findInstancesAndCollectChildPreds(conseq);
          findInstancesAndCollectChildPreds(alt)
        case LayerBlock(_, _, body) => findInstancesAndCollectChildPreds(body)
        case _                      => ()
      }
    findInstancesAndCollectChildPreds(module.body)

    // 3. 合并本地和子谓词源
    val allPredicateSources: List[PredicateSource] =
      localPredicateSources ++ childPredicateSources.toList

    if (allPredicateSources.isEmpty) {
      return ModuleTransformResult(module, None)
    }

    // 4. 构建新的输出端口 Bundle 类型
    val bundleFields: Seq[Field] = allPredicateSources.map { source =>
      val (propagatedFieldName, fieldType) = source match {
        case LocalPredSource(pfname, origin) => (pfname, origin.predicateType)
        case ChildPredSource(_, pfname, origin) =>
          (pfname, origin.predicateType)
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
      return ModuleTransformResult(module, None)
    }
    val combinedBundleType = BundleType(finalUniqueBundleFields)

    // 5. 创建新的输出端口定义
    val newOutputPredicatePort = Port(
      module.info,
      PredicateOutputPortName,
      Output,
      combinedBundleType
    )
    val updatedPorts = module.ports.filterNot(
      _.name == PredicateOutputPortName
    ) :+ newOutputPredicatePort

    // 6. 处理需要中间线的本地谓词 (使用修正后的 topLevelNames)
    val localPredicatesNeedingIntermediateWire =
      mutable.Map[String, (Expression, Type, String)]()
    val localPredRootRefToFieldNameMap =
      mutable.Map[String, String]()

    localPredicateSources.foreach {
      case LocalPredSource(pfname, PredicateOriginInfo(expr, tpe)) =>
        getRootReferenceName(expr) match {
          case Some(rootRefName) =>
            // 这里的判断现在是准确的
            if (!topLevelNames.contains(rootRefName)) {
              val intermediateWireName = s"${IntermediateWirePrefix}${pfname}"
              localPredicatesNeedingIntermediateWire(rootRefName) =
                (expr, tpe, intermediateWireName)
              localPredRootRefToFieldNameMap(rootRefName) = pfname
            }
          case None =>
            throwInternalError(
              s"ConditionallyPredPropagator.transformModule: 在模块 ${module.name} 中为本地谓词 ${expr.serialize} (字段名 ${pfname}) " +
                "调用 getRootReferenceName 失败。这违反了谓词必须是 Reference 或 SubField 嵌套的假设。"
            )
        }
    }

    // 7. 生成中间线的定义语句 (DefWire)
    val intermediateWireDefs: Seq[DefWire] =
      localPredicatesNeedingIntermediateWire.values.map {
        case (_, predType, wireName) => DefWire(NoInfo, wireName, predType)
      }.toSeq

    // 8. 生成中间线的默认连接语句 (Connect to 0)
    val intermediateWireDefaultConnects: Seq[Connect] =
      localPredicatesNeedingIntermediateWire.values.map {
        case (_, condType, wireName) => // 使用 condType 作为 wire 类型
          val defaultValue = UIntLiteral(0, IntWidth(1))
          Connect(NoInfo, Reference(wireName, condType), defaultValue)
      }.toSeq

    // 9. 修改模块 Body，插入 Node 到中间线的连接
    val nodeConnectedToIntermediateWire = mutable.Set[String]()
    def addIntermediateConnects(statement: Statement): Seq[Statement] =
      statement match {
        case nodeDef @ DefNode(info, nodeName, _) =>
          localPredicatesNeedingIntermediateWire.get(nodeName) match {
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
          Reference(newOutputPredicatePort.name, newOutputPredicatePort.tpe),
          field.name,
          field.tpe
        )

        val sourceInfo = allPredicateSources
          .find {
            case LocalPredSource(fname, _)    => fname == field.name
            case ChildPredSource(_, fname, _) => fname == field.name
          }
          .getOrElse(throwInternalError(s"无法为字段 ${field.name} 找到谓词源"))

        val connectSourceExpression = sourceInfo match {
          case LocalPredSource(_, origin) =>
            getRootReferenceName(origin.sourceExpression) match {
              case Some(rootRefName)
                  if localPredicatesNeedingIntermediateWire.contains(
                    rootRefName
                  ) &&
                    nodeConnectedToIntermediateWire.contains(rootRefName) =>
                val (_, wireType, wireName) =
                  localPredicatesNeedingIntermediateWire(rootRefName)
                Reference(wireName, wireType)
              case _ => origin.sourceExpression
            }
          case ChildPredSource(_, _, origin) =>
            origin.sourceExpression
        }
        Connect(NoInfo, portFieldAccess, connectSourceExpression)
    }

    // 11. 组合所有新的语句，形成转换后模块的 Body
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
      Some((PredicateOutputPortName, combinedBundleType))
    )
  }

  /** 提供者对象，用于计算并缓存每个模块内部直接使用的 Conditionally 谓词表达式。
    */
  private object ModuleInternalPredsMapProvider {
    private val cache =
      mutable.WeakHashMap[Circuit, Map[String, Seq[Expression]]]()

    def getMap(circuit: Circuit): Map[String, Seq[Expression]] = {
      cache.getOrElseUpdate(circuit, computeMap(circuit))
    }

    /** 计算电路中每个模块内部的 Conditionally 谓词表达式。 */
    private def computeMap(circuit: Circuit): Map[String, Seq[Expression]] = {
      val modulePredicatesMap =
        mutable.Map[String, mutable.ListBuffer[Expression]]()
      var currentModuleName: String = ""
      val currentModulePredicatesBuffer = mutable.ListBuffer[Expression]()

      /** 递归查找语句中的 Conditionally 谓词 */
      def findPredsInStmt(statement: Statement): Unit = statement match {
        case Conditionally(_, pred, conseq, alt) =>
          pred match {
            case _: Literal => // 谓词是字面量，忽略
            case _          =>
              // 谓词不是字面量，记录它
              currentModulePredicatesBuffer += pred
          }
          // 递归检查 conseq 和 alt 内部的 Conditionally 语句
          findPredsInStmt(conseq)
          findPredsInStmt(alt)
        case Block(stmts)           => stmts.foreach(findPredsInStmt)
        case LayerBlock(_, _, body) => findPredsInStmt(body)
        // 其他语句类型不再检查
        case _ => ()
      }

      // 遍历电路中的所有模块
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

      // 转换为不可变 Map
      modulePredicatesMap.map { case (name, buffer) =>
        name -> buffer.toList
      }.toMap
    }
  }
}
