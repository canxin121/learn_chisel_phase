package firrtl
package ir

// 导入 InstTree 类定义 (假设它在同一个包或已导入)
// import firrtl.ir.InstTree // 如果不在同一文件

import dataclass.data // 假设使用了 dataclass 注解
import io.circe._ // 核心 Circe 类型
import io.circe.generic.auto._ // 自动派生 Encoder/Decoder
import io.circe.parser._ // JSON 解析
import io.circe.syntax._ // .asJson 语法糖

/** 表示模块的层级依赖关系树。 与 InstTree 不同，ModuleTree 不包含实例名，并且对于同一父模块
  * 下实例化的多个相同类型的子模块，只在树中表示一次。
  *
  * @param module_name
  *   当前节点的模块名称。
  * @param sub_modules
  *   一个列表，包含此模块直接实例化的 *不同类型* 的子模块所对应的 ModuleTree。
  */
@data // 假设使用了 dataclass 注解，否则移除
case class ModuleTree(
    module_name: String,
    sub_modules: List[ModuleTree]
) {

  /** 将此 ModuleTree 对象序列化为 JSON 字符串。
    * @param prettyPrint
    *   是否进行格式化（带缩进和换行），默认为 false。
    * @return
    *   JSON 字符串。
    */
  def toJson(prettyPrint: Boolean = false): String =
    ModuleTree.toJson(this, prettyPrint)
}

object ModuleTree {

  /** 从一个 InstTree (实例树) 构建 ModuleTree (模块类型树)。 这个过程会去除实例名，并合并对同一模块类型的多次实例化。
    *
    * @param instTree
    *   输入的实例树。
    * @return
    *   构建好的模块类型树。
    */
  def apply(instTree: InstTree): ModuleTree = {
    // 1. 获取当前实例树节点的模块名
    val currentModuleName = instTree.module_name

    // 2. 获取所有直接子实例
    val subInstances = instTree.sub_inst

    // 3. 找出所有直接子实例的 *唯一* 模块名
    //    并为每个唯一的子模块名选择一个代表性的子 InstTree 用于递归
    //    我们使用 groupBy 分组，然后取每组的第一个元素 (head) 作为代表
    val representativeSubInsts = subInstances
      .groupBy(_.module_name) // 按子模块名分组 Map[String, List[InstTree]]
      .map { case (_, instList) => instList.head } // 取每组的第一个实例作为代表
      .toList // 转换为列表

    // 4. 对每个代表性的子 InstTree 递归调用 fromInstTree
    val subModuleTrees = representativeSubInsts.map { subInst =>
      ModuleTree(subInst) // 递归构建子模块树
    }

    // 5. 构建并返回当前的 ModuleTree 节点
    ModuleTree(currentModuleName, subModuleTrees)
  }

  // --- JSON 序列化/反序列化方法 ---

  /** 将一个 ModuleTree 对象序列化为 JSON 字符串。
    *
    * @param moduleTree
    *   要序列化的 ModuleTree 对象。
    * @param prettyPrint
    *   如果为 true，则格式化 JSON，默认为 false。
    * @return
    *   ModuleTree 对象的 JSON 字符串表示。
    */
  def toJson(moduleTree: ModuleTree, prettyPrint: Boolean = false): String = {
    val jsonAst: Json = moduleTree.asJson // 自动派生 Encoder[ModuleTree]
    if (prettyPrint) {
      jsonAst.spaces2 // 或 jsonAst.spaces4
    } else {
      jsonAst.noSpaces
    }
  }

  /** 将一个 JSON 字符串反序列化为一个 ModuleTree 对象。
    *
    * @param jsonString
    *   要反序列化的 JSON 字符串。
    * @return
    *   返回 Either 类型：Left(错误) 或 Right(ModuleTree)。
    */
  def fromJson(jsonString: String): Either[Error, ModuleTree] = {
    parse(jsonString).flatMap(_.as[ModuleTree]) // 自动派生 Decoder[ModuleTree]
  }

  /** 可选方法：将 JSON 字符串反序列化为 Option[ModuleTree]。
    *
    * @param jsonString
    *   要反序列化的 JSON 字符串。
    * @return
    *   如果成功，返回 Some(ModuleTree)，否则返回 None。
    */
  def fromJsonOpt(jsonString: String): Option[ModuleTree] = {
    fromJson(jsonString).toOption
  }

}
