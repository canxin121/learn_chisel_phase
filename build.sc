// /home/canxin/Documents/git/test_rocket_chip/build.sc

import mill._
import mill.scalalib._
// 通常不需要显式导入 MavenRepository，除非你还需要其他快照依赖

object v {
  // --- 关键：确保这些版本与你本地发布时使用的版本完全一致 ---
  // 你本地发布的 Rocket Chip 构建使用的 Scala 版本
  val scala = "2.13.12"
  // 在 rocket-chip/build.sc 中定义的 publishVersion
  val rocketChipVersion = "1.6-SNAPSHOT"
  // 与你发布的交叉构建版本对应的 Chisel 版本 ("5.1.0" 或 "6.7.0" 等)
  val chiselVersion = "5.1.0" // <--- 修改这里来切换版本
  // ---

  // 使用上面的版本定义 Ivy 依赖
  val chiselLib = ivy"org.chipsalliance::chisel:${chiselVersion}"
  val chiselPlugin =
    ivy"org.chipsalliance:::chisel-plugin:${chiselVersion}" // 插件使用三个冒号 ':::'

  // **** 这是修正后的行 ****
  // 明确指定包含交叉构建值 ("5.1.0") 的构件名称
  // 使用 "::" 会自动添加 "_2.13" 后缀
  // 这将解析为 "org.chipsalliance:rocketchip-5.1.0_2.13:1.6-SNAPSHOT"，与你发布的相匹配
  val rocketchipLib =
    ivy"org.chipsalliance::rocketchip-5.1.0:${rocketChipVersion}"
}

// 定义你的项目模块，该模块将使用 Rocket Chip ALU
object chisel_coverage_tool extends ScalaModule {

  // 为你的项目设置 Scala 版本
  def scalaVersion = v.scala

  // 定义编译时库依赖
  override def ivyDeps = Agg(
    v.chiselLib, // 依赖 Chisel 库
    v.rocketchipLib // 依赖你本地发布的 Rocket Chip 库（使用正确的名称）
    // Mill 会在 ~/.ivy2/local 或 ~/.m2/repository 中找到它
  )

  // 定义 Scala 编译器插件依赖
  override def scalacPluginIvyDeps = Agg(
    v.chiselPlugin // 依赖 Chisel 编译器插件
  )

  // --- 修改：根据 Chisel 版本选择源目录 ---
  override def sources = T.sources {
    // 通用源文件目录
    val commonSourcesDir = millSourcePath / "src"
    // 根据 chiselVersion 的主版本号选择特定版本的源目录
    val versionSpecificSourcesDir = v.chiselVersion match {
      case version if version.startsWith("5.") =>
        millSourcePath / "src-chisel5"
      case version if version.startsWith("6.") =>
        millSourcePath / "src-chisel6"
      case other =>
        T.log.error(s"不支持的 Chisel 版本: $other. 无法确定 SignalPropagator 源目录。")
        // 可以选择抛出错误或默认使用某个版本
        // throw new Exception(s"Unsupported Chisel version: $other")
        millSourcePath / "src-chisel5" // 默认使用 Chisel 5 源目录
    }
    // 返回包含通用目录和特定版本目录的 PathRef 序列
    // Mill 会自动查找这些目录下的 .scala 文件
    Seq(PathRef(commonSourcesDir), PathRef(versionSpecificSourcesDir))
  }
  // --- 结束修改部分 ---

}
