package firrtl
package ir

import dataclass.{data, since}
import org.apache.commons.text.translate.{
  AggregateTranslator,
  JavaUnicodeEscaper,
  LookupTranslator
}
import scala.collection.JavaConverters._
import scala.collection.mutable

// --- Circe 库的导入 ---
import io.circe._ // 核心 Circe 类型 (Json, Encoder, Decoder)
import io.circe.generic.auto._ // 为 case class 自动派生 Encoder/Decoder
import io.circe.parser._ // 用于解析 JSON 字符串 (decode)
import io.circe.syntax._ // 提供 .asJson 等语法糖

@data // 假设使用了 dataclass 注解，否则移除
case class InstTree(
    inst_name: String,
    module_name: String,
    sub_inst: List[InstTree] // 递归结构
) {
  def toJson(
      prettyPrint: Boolean = false
  ): String = InstTree.toJson(this, prettyPrint)
}

object InstTree {
  private def buildInstTreeRecursive(
      current_inst_name: String,
      current_module_name: String,
      moduleMap: Map[String, DefModule]
  ): Option[InstTree] = {
    moduleMap.get(current_module_name) match {
      case Some(module: Module) =>
        val directSubInstances = StatementHelper.findInstances(module.body)
        // 对每个直接子实例递归构建树
        val subInsts = directSubInstances.flatMap { subDef =>
          // 使用子实例名(subDef.name)和子模块名(subDef.module)进行递归
          buildInstTreeRecursive(subDef.name, subDef.module, moduleMap)
        }
        Some(InstTree(current_inst_name, current_module_name, subInsts))

      case Some(ext: ExtModule) => // 外部模块是叶子节点
        Some(InstTree(current_inst_name, current_module_name, List.empty))

      case Some(int: IntModule) => // 固有模块也是叶子节点
        Some(InstTree(current_inst_name, current_module_name, List.empty))

      case Some(cls: DefClass) => // 类定义可能包含实例，处理逻辑类似 Module
        val directSubInstances = StatementHelper.findInstances(cls.body)
        val subInsts = directSubInstances.flatMap { subDef =>
          buildInstTreeRecursive(subDef.name, subDef.module, moduleMap)
        }
        Some(InstTree(current_inst_name, current_module_name, subInsts))

      case Some(other: DefModule) => // 处理其他未明确覆盖的 DefModule 子类
        System.err.println(
          s"警告：遇到未明确处理的模块类型 '${other.getClass.getName}' (模块名: '$current_module_name')。"
        )
        Some(
          InstTree(current_inst_name, current_module_name, List.empty)
        ) // 当作叶子节点处理

      case None => // 未找到模块定义
        System.err.println(s"警告：找不到模块 '$current_module_name' 的定义。")
        None // 返回 None 表示构建失败
    }
  }

  /** 根据给定的电路(Circuit)构建实例树(Inst)。
    *
    * @param circuit
    *   FIRRTL 电路对象。
    * @param topInstName
    *   顶层实例的名称，默认为 "mainInst"。
    * @return
    *   如果成功构建，返回 Option[Inst]，否则返回 None (例如，如果主模块未找到)。
    */
  def apply(
      circuit: Circuit,
      topInstName: String = "mainInst" // 如果需要，提供默认值
  ): Option[InstTree] = {
    // 创建一个从模块名到模块定义的映射，方便查找
    val moduleMap = circuit.modules.map(m => m.name -> m).toMap
    // 从主模块 (circuit.main) 开始递归构建
    buildInstTreeRecursive(topInstName, circuit.main, moduleMap)
  }

  // --- JSON 序列化/反序列化方法 ---

  /** 将一个 Inst 对象序列化为 JSON 字符串。
    *
    * @param inst
    *   要序列化的 Inst 对象。
    * @param prettyPrint
    *   如果为 true，则格式化 JSON（带缩进和换行），默认为 false（紧凑格式）。
    * @return
    *   Inst 对象的 JSON 字符串表示。
    */
  def toJson(inst: InstTree, prettyPrint: Boolean = false): String = {
    // .asJson 需要一个作用域内的隐式 Encoder[Inst]。
    // io.circe.generic.auto._ 会自动提供这个 Encoder。
    val jsonAst: Json = inst.asJson
    if (prettyPrint) {
      jsonAst.spaces2 // 或者 jsonAst.spaces4 使用4空格缩进
    } else {
      jsonAst.noSpaces // 生成无空格的紧凑 JSON
    }
  }

  /** 将一个 JSON 字符串反序列化为一个 Inst 对象。
    *
    * @param jsonString
    *   要反序列化的 JSON 字符串。
    * @return
    *   返回一个 Either 类型：
    *   - 如果解析或解码失败，返回 Left(io.circe.Error)。
    *   - 如果成功，返回 Right(Inst)。
    */
  def fromJson(jsonString: String): Either[Error, InstTree] = {
    // parse 函数尝试将字符串解析为 Circe 的 Json AST (抽象语法树)
    // 它返回 Either[ParsingFailure, Json]
    // .flatMap 用于链式操作：只有当 parse 成功时，才执行后续的解码操作
    // .as[Inst] 尝试将 Json AST 解码为一个 Inst 对象
    // 它需要一个作用域内的隐式 Decoder[Inst] (由 generic.auto._ 提供)
    // 它返回 Either[DecodingFailure, Inst]
    // 最终结果是 Either[Error, Inst]，其中 Error 是 ParsingFailure 和 DecodingFailure 的父类型
    parse(jsonString).flatMap(_.as[InstTree])
  }

  /** 可选方法：将 JSON 字符串反序列化为 Option[Inst]。 如果你只关心成功或失败，而不关心具体的错误信息，这个版本更简单。
    *
    * @param jsonString
    *   要反序列化的 JSON 字符串。
    * @return
    *   如果成功，返回 Some(Inst)，否则返回 None。
    */
  def fromJsonOpt(jsonString: String): Option[InstTree] = {
    fromJson(jsonString).toOption // 将 Either[Error, Inst] 转换为 Option[Inst]
  }

}

// === 使用示例 ===
// (可以将此代码放在 firrtl 包之外，例如测试代码或主应用程序中)
/*
import firrtl.ir._
// 如果需要创建测试用的 Circuit, Module 等，也需要导入 firrtl._
// import firrtl._

object JsonExample extends App {

  // 1. 创建一个示例 Inst 层次结构 (或者从一个 Circuit 对象生成)
  //    为了简单起见，这里手动创建：
  val subSubInst = Inst("subSub1", "LeafModule", List.empty)
  val subInst1 = Inst("sub1", "MiddleModule", List(subSubInst))
  val subInst2 = Inst("sub2", "AnotherLeaf", List.empty)
  val topInst = Inst("top", "TopModule", List(subInst1, subInst2))

  // 2. 序列化为 JSON
  val jsonStringCompact = Inst.toJson(topInst)
  val jsonStringPretty = Inst.toJson(topInst, prettyPrint = true)

  println("--- 紧凑 JSON ---")
  println(jsonStringCompact)
  // 预期输出 (大致): {"inst_name":"top","module_name":"TopModule","sub_inst":[{"inst_name":"sub1","module_name":"MiddleModule","sub_inst":[{"inst_name":"subSub1","module_name":"LeafModule","sub_inst":[]}]},{"inst_name":"sub2","module_name":"AnotherLeaf","sub_inst":[]}]}

  println("\n--- 格式化 JSON ---")
  println(jsonStringPretty)
  /* 预期输出 (大致):
  {
    "inst_name" : "top",
    "module_name" : "TopModule",
    "sub_inst" : [
      {
        "inst_name" : "sub1",
        "module_name" : "MiddleModule",
        "sub_inst" : [
          {
            "inst_name" : "subSub1",
            "module_name" : "LeafModule",
            "sub_inst" : [
            ]
          }
        ]
      },
      {
        "inst_name" : "sub2",
        "module_name" : "AnotherLeaf",
        "sub_inst" : [
        ]
      }
    ]
  }
 */


  // 3. 从 JSON 反序列化
  val deserializedEither: Either[Error, Inst] = Inst.fromJson(jsonStringCompact)

  deserializedEither match {
    case Right(inst) =>
      println("\n--- 反序列化成功 ---")
      println(inst)
      assert(inst == topInst) // 验证反序列化得到的对象与原始对象相同
      println("验证成功：反序列化对象与原始对象匹配。")
    case Left(error) =>
      println(s"\n--- 反序列化失败 ---")
      println(s"错误: $error")
  }

  // 使用 Option 版本的示例
  val deserializedOpt: Option[Inst] = Inst.fromJsonOpt(jsonStringCompact)
  println(s"\n--- 反序列化 (Option 版本) ---")
  // 使用 getOrElse 提供一个失败时的默认值
  println(deserializedOpt.getOrElse("反序列化失败"))

  // 反序列化失败的示例
  val badJson = """{"inst_name":"bad", "module_name":"BadModule", "sub_inst": "not_a_list"}""" // sub_inst 应该是列表，这里是字符串
  val failedDeserialization = Inst.fromJson(badJson)
  println(s"\n--- 尝试反序列化无效 JSON ---")
  failedDeserialization match {
    case Right(_) => println("意外成功！这不应该发生。")
    case Left(error) => println(s"符合预期的失败: $error") // 应该打印出解码错误信息
  }

}
 */
