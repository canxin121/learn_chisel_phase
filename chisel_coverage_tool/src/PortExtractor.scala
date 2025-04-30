import firrtl.ir._
import firrtl.Utils.throwInternalError
import scala.collection.mutable
import firrtl.ir.TopLevelExportInfo

/** 存储 FIRRTL 模块端口信息的 Case Class。
  *
  * @param name
  *   端口名称。
  * @param direction
  *   端口方向 (Input 或 Output)。
  * @param tpe
  *   端口的数据类型。
  * @param info
  *   端口的源信息。
  */
case class PortInfo(
    name: String,
    direction: Direction,
    tpe: Type,
    info: Info
)

/** 提供用于分析 FIRRTL 电路顶层模块端口的工具函数。
  */
object TopModulePortExtractor {

  /** 提取给定 FIRRTL 电路顶层模块中由信号传播器添加的端口信息。
    *
    * @param circuit
    *   要分析的 FIRRTL 电路。
    * @param propagatedPortInfo
    *   一个 `Seq[TopLevelExportInfo]`，包含由 `SignalPropagator`
    *   添加到顶层模块的端口信息。只有这些端口会被提取。
    * @return
    *   一个 Option，包含一个 `Seq[PortInfo]`。 该列表包含顶层模块中与 `propagatedPortInfo`
    *   匹配的端口信息。 如果找不到顶层模块、顶层模块不是一个标准的 `Module`，或者 `propagatedPortInfo` 为 `None`
    *   或为空，则返回 `None`。
    */
  def extractPropagatedPorts(
      circuit: Circuit,
      propagatedPortInfo: Option[Seq[TopLevelExportInfo]]
  ): Option[Seq[PortInfo]] = {

    // 如果 propagatedPortInfo 为 None 或为空，则直接返回 None，因为没有要提取的端口
    propagatedPortInfo match {
      case None | Some(Nil) =>
        println(
          "[INFO] TopModulePortExtractor: 没有提供或空的 propagatedPortInfo，无法提取传播的端口。"
        )
        return None
      case Some(infos) =>
        // 从 propagatedPortInfo 中提取出所有由传播器添加的端口名称集合
        val propagatedPortNames: Set[String] = infos.map(_.portName).toSet

        // 通过电路的 main 字段找到顶层模块的名称，然后在模块列表中查找该模块定义
        circuit.modules.find(_.name == circuit.main) match {
          // 成功找到顶层模块，并且它是一个 Module (包含端口和内部逻辑)
          case Some(mainModule: Module) =>
            val keptPorts = mutable.ListBuffer[PortInfo]()

            // 遍历顶层模块的所有端口
            mainModule.ports.foreach { port =>
              // **过滤步骤**：仅当端口名称在传播器添加的端口名称集合中时，才处理该端口
              if (propagatedPortNames.contains(port.name)) {
                // 为每个匹配的端口创建一个 PortInfo 实例并添加到列表
                val portInfo =
                  PortInfo(port.name, port.direction, port.tpe, port.info)
                keptPorts += portInfo
              } else {
                // （可选）可以添加日志记录，说明哪些端口被丢弃了
                // println(s"[DEBUG] TopModulePortExtractor: Discarding non-propagated port '${port.name}'")
              }
            }
            // 返回包含保留端口列表的 Option
            Some(keptPorts.toList)

          // 找到了名为 main 的模块，但它不是一个标准的 Module (可能是 ExtModule 或 IntModule)
          case Some(otherModuleType) =>
            println(
              s"[ERROR] TopModulePortExtractor: 顶层模块 '${circuit.main}' 的类型为 ${otherModuleType.getClass.getName}, 而不是预期的 Module。无法提取端口。"
            )
            None // ExtModule/IntModule 没有端口列表 `ports` 字段

          // 在电路的模块列表中找不到名为 main 的模块
          case None =>
            println(
              s"[ERROR] TopModulePortExtractor: 在电路中找不到名为 '${circuit.main}' 的顶层模块。"
            )
            None
        }
    }
  }
}
