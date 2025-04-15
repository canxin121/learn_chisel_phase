package firrtl
package ir

import chisel3.RawModule
import circt.stage.CustomStage
import file_util.FileUtil
import java.io.File
import circt.stage.ChiselStage // 需要导入 ChiselStage 用于生成 old.sv

object TransformOutputData {
  var mainModuleName: String = ""
  var originalFirrtl: String = ""
  var transformedFirrtl: String = ""
  var coverageCollectorHeader: String = ""
  var simMainCpp: String = ""
  var coverageBashScript: String = ""

  def reset(): Unit = {
    mainModuleName = ""
    originalFirrtl = ""
    transformedFirrtl = ""
    coverageCollectorHeader = ""
    simMainCpp = ""
    coverageBashScript = ""
  }
}

class CustomTransform extends firrtl.options.Phase {
  override def invalidates(a: firrtl.options.Phase) = false

  override def transform(
      annotations: firrtl.AnnotationSeq
  ): firrtl.AnnotationSeq = {
    val (Seq(circuitAnno: firrtl.stage.FirrtlCircuitAnnotation), otherAnnos) =
      annotations.partition {
        case _: firrtl.stage.FirrtlCircuitAnnotation => true
        case _                                       => false
      }

    val circuit = circuitAnno.circuit

    val (new_mux_circuit, mux_port_info) = MuxCondPropagator.transform(circuit)
    val (new_cond_circuit, cond_port_info) =
      ConditionallyPredPropagator.transform(new_mux_circuit)
    val (new_reg_circuit, reg_port_info) =
      RegisterSignalPropagator.transform(new_cond_circuit)

    val port_info_list: List[TopLevelExportInfo] =
      (mux_port_info ++ cond_port_info ++ reg_port_info).toList

    val coverageHeaderCode =
      CoverageCollectorGenerator.generateCoverageCollectorHeader(
        circuit.main,
        port_info_list
      )
    val simMainCode =
      CoverageCollectorGenerator.generateSimMain(circuit.main)
    val coverageBashCode =
      CoverageCollectorGenerator.generateCoverageBashScript(circuit.main)

    TransformOutputData.mainModuleName = circuit.main
    TransformOutputData.originalFirrtl = Serializer.serialize(circuit).toString
    TransformOutputData.transformedFirrtl =
      Serializer.serialize(new_reg_circuit).toString
    TransformOutputData.coverageCollectorHeader = coverageHeaderCode
    TransformOutputData.simMainCpp = simMainCode
    TransformOutputData.coverageBashScript = coverageBashCode

    firrtl.stage.FirrtlCircuitAnnotation(new_reg_circuit) +: otherAnnos
  }
}

object CoverageUtil {

  /** 处理单个 Chisel 模块，执行转换并生成输出文件。
    *
    * @param moduleGenerator
    *   生成 Chisel RawModule 的函数。
    * @param outputDir
    *   所有输出文件的目标目录。
    * @param enableDevOutput
    *   如果为 true，则生成额外的开发文件（old.sv, old.fir, new.fir）到 `dev` 子目录中。
    * @param firtoolOpts
    *   传递给 firtool 的选项数组。
    */
  def processModule(
      moduleGenerator: () => RawModule,
      outputDir: String,
      enableDevOutput: Boolean = false,
      firtoolOpts: Array[String] =
        Array("-disable-all-randomization", "-strip-debug-info")
  ): Unit = {
    println(
      s"--- 开始处理模块: ${TransformOutputData.mainModuleName} ($outputDir) ---"
    )

    val specificOutputDir = outputDir
    val objDir = s"$specificOutputDir/obj_dir"
    val devDir = s"$specificOutputDir/dev" // 开发文件目录

    // 创建输出目录
    new File(specificOutputDir).mkdirs()
    new File(objDir).mkdirs()
    if (enableDevOutput) {
      new File(devDir).mkdirs()
    }

    // 实例化 CustomStage (包含 CustomTransform)
    val stage = new CustomStage(
      customPhases = Seq(new CustomTransform)
    )

    // 1. (可选) 生成原始 SystemVerilog (old.sv)
    if (enableDevOutput) {
      try {
        println(s"  生成 old.sv...")
        val old_sv = ChiselStage.emitSystemVerilog(
          moduleGenerator(),
          firtoolOpts = firtoolOpts
        )
        FileUtil.writeToFile(
          s"$devDir/old.sv", // 写入 dev 目录
          old_sv
        )
        println(s"  成功写入 $devDir/old.sv")
      } catch {
        case e: Exception =>
          println(
            s"   生成 old.sv 时出错: ${e.getMessage}"
          )
          e.printStackTrace() // 打印堆栈跟踪
      }
    }

    // 2. 通过 CustomStage 运行，触发 CustomTransform 并生成转换后的 SV
    try {
      println(s"  运行 CustomStage (转换并生成 .sv)...")
      val transformed_sv = stage.emitSystemVerilog(
        moduleGenerator(),
        firtoolOpts = firtoolOpts
      )
      // 从 TransformOutputData 获取模块名
      val moduleName = TransformOutputData.mainModuleName
      val transformedSvPath = s"$specificOutputDir/${moduleName}.sv"
      FileUtil.writeToFile(
        transformedSvPath,
        transformed_sv
      )
      println(s"  成功写入 $transformedSvPath")

      // 3. 从全局对象获取数据并写入文件
      if (moduleName.nonEmpty) {
        println(s"  写入 FIRRTL, C++, Bash 文件...")
        FileUtil.writeToFile(
          s"$objDir/coverage_collector.h",
          TransformOutputData.coverageCollectorHeader
        )
        FileUtil.writeToFile(
          s"$objDir/sim_main.cpp",
          TransformOutputData.simMainCpp,
          overwrite = false
        )
        FileUtil.writeToFile(
          s"$specificOutputDir/coverage.bash",
          TransformOutputData.coverageBashScript
        )
        println(s"  成功写入 $objDir/coverage_collector.h")
        println(s"  成功写入 $objDir/sim_main.cpp (如果不存在)")
        println(s"  成功写入 $specificOutputDir/coverage.bash")

        if (enableDevOutput) {
          println(s"  写入开发 FIRRTL 文件...")
          FileUtil.writeToFile(
            s"$devDir/old.fir",
            TransformOutputData.originalFirrtl
          )
          FileUtil.writeToFile(
            s"$devDir/new.fir",
            TransformOutputData.transformedFirrtl
          )
          println(s"  成功写入 $devDir/old.fir")
          println(s"  成功写入 $devDir/new.fir")
        }
      } else {
        println(
          s"  警告: 未能从 Transform 获取模块名，C++/FIRRTL 数据未写入。"
        )
      }
    } catch {
      case e: Exception =>
        println(
          s"  处理模块 (生成 .sv 或写入 .cpp/.h/.fir) 时出错: ${e.getMessage}"
        )
        e.printStackTrace()
    } finally {
      TransformOutputData.reset()
    }

    println(
      s"--- 完成处理模块: ${TransformOutputData.mainModuleName} ($outputDir) ---\n"
    )
  }
}
