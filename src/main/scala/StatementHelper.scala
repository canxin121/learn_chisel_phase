package firrtl.ir

import scala.collection.mutable

object StatementHelper {
  class StmtVisitor {
    def visit(s: Statement): Unit = s match {
      case _: DefInstance => // Handled specifically where needed
      case Block(stmts)   => stmts.foreach(visit)
      case Conditionally(_, _, conseq, alt) =>
        visit(conseq)
        visit(alt)
      case _ => // Base case: do nothing for terminals
    }
  }

  def findInstances(stmt: Statement): List[DefInstance] = {
    val instances = mutable.ListBuffer[DefInstance]()
    def rec(s: Statement): Unit = s match {
      case inst: DefInstance => instances += inst
      // case choice: DefInstanceChoice => // 如果需要可以处理
      case Block(stmts) => stmts.foreach(rec)
      case Conditionally(_, _, conseq, alt) =>
        rec(conseq)
        rec(alt)
      // 明确处理已知的、不直接包含实例定义的语句类型
      case _: Print | _: Verification | EmptyStmt | _: Connect | _: IsInvalid |
          _: DefWire | _: DefRegister | _: DefMemory | _: DefNode | _: Stop |
          _: Attach =>
        ()
      // 对于未明确处理的语句类型，可以添加警告或默认处理
      // case other => System.err.println(s"警告：在 findInstances 中遇到未处理的语句类型: ${other.getClass.getSimpleName}")
    }
    rec(stmt)
    instances.toList
  }
}
