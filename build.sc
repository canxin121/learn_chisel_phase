import mill._
import mill.scalalib._
import mill.scalalib.publish._

val chiselVersion = "6.7.0"
val circeVersion = "0.14.12"
val scalaV = "2.13.16"

object chisel_coverage_tool extends ScalaModule {
  def scalaVersion = scalaV

  def ivyDeps = Agg(
    ivy"org.chipsalliance::chisel::${chiselVersion}",
    ivy"io.circe::circe-core::${circeVersion}",
    ivy"io.circe::circe-generic::${circeVersion}",
    ivy"io.circe::circe-parser::${circeVersion}"
  )

  override def scalacPluginIvyDeps = Agg(
    ivy"org.chipsalliance:::chisel-plugin:${chiselVersion}",
  )

  def scalacOptions = super.scalacOptions() ++ Seq(
    "-language:reflectiveCalls",
    "-deprecation",
    "-feature",
    "-Xcheckinit",
    "-Ymacro-annotations"
  )

  def artifactName = "chisel_coverage_tool"
  def publishVersion = "0.1.0"
  def pomSettings = PomSettings(
    organization = "com.github.canxin121",
    description = "A tool for Chisel coverage analysis",
    url = "https://github.com/canxin121/chisel_coverage_tool",
    licenses = Seq(License.MIT),
    versionControl = VersionControl.github("canxin121", "chisel_coverage_tool"),
    developers = Seq(
      Developer(
        id = "canxin121",
        name = "canxin121",
        url = "https://github.com/canxin121"
      )
    )
  )
}
