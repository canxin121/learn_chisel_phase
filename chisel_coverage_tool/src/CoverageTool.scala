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
  var portInfoList: List[TopLevelExportInfo] = Nil
  var nameDictionary: Map[String, String] = Map.empty // 新增字段: 存储名称映射

  def reset(): Unit = {
    mainModuleName = ""
    originalFirrtl = ""
    transformedFirrtl = ""
    coverageCollectorHeader = ""
    simMainCpp = ""
    coverageBashScript = ""
    portInfoList = Nil
    nameDictionary = Map.empty // 重置新增字段
  }
}

class CoverageTransform extends firrtl.options.Phase {
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

    val (new_mux_circuit, mux_port_info, mux_name_dict) =
      MuxCondPropagator.transform(circuit)
    val (new_cond_circuit, cond_port_info, cond_name_dict) =
      ConditionallyPredPropagator.transform(new_mux_circuit)
    val (new_reg_circuit, reg_port_info, reg_name_dict) =
      RegisterSignalPropagator.transform(new_cond_circuit)

    val port_info_list: List[TopLevelExportInfo] =
      (mux_port_info ++ cond_port_info ++ reg_port_info).toList
    val combined_name_dictionary: Map[String, String] =
      mux_name_dict ++ cond_name_dict ++ reg_name_dict

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
    TransformOutputData.portInfoList = port_info_list
    TransformOutputData.nameDictionary = combined_name_dictionary // 存储合并后的名称字典

    firrtl.stage.FirrtlCircuitAnnotation(new_reg_circuit) +: otherAnnos
  }
}

object CoverageTool {

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
      firtoolOpts: Array[String] = Array(
        "-disable-all-randomization",
        "-strip-debug-info",
        "--disable-annotation-unknown"
      )
  ): Unit = {
    println(
      s"--- 开始处理模块: ${TransformOutputData.mainModuleName} ($outputDir) ---"
    )

    val specificOutputDir = outputDir
    val objDir = s"$specificOutputDir/obj_dir"
    val devDir = s"$specificOutputDir/dev" // 开发文件目录

    // 创建输出目录
    try {
      new File(specificOutputDir).mkdirs()
      new File(objDir).mkdirs()
      if (enableDevOutput) {
        new File(devDir).mkdirs()
      }
    } catch {
      case e: Exception =>
        println(s"  创建输出目录时出错: ${e.getMessage}")
    }

    // 实例化 CustomStage (包含 CustomTransform)
    val stage = new CustomStage(
      customPhases = Seq(new CoverageTransform)
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
      }
    }

    // 2. 通过 CustomStage 运行，触发 CustomTransform 并尝试生成转换后的 SV
    var transformedSvOption: Option[String] = None
    var moduleName: String = ""
    var retrievedPortInfoList: List[TopLevelExportInfo] = Nil
    var retrievedNameDictionary: Map[String, String] = Map.empty // 用于存储名称字典
    try {
      println(s"  运行 CustomStage (转换并尝试生成 .sv)...")
      val transformed_sv = stage.emitSystemVerilog(
        moduleGenerator(),
        firtoolOpts = firtoolOpts
      )
      transformedSvOption = Some(transformed_sv)
      moduleName = TransformOutputData.mainModuleName
      retrievedPortInfoList = TransformOutputData.portInfoList
      retrievedNameDictionary = TransformOutputData.nameDictionary // 获取名称字典
      if (moduleName.isEmpty) {
        println(s"  警告: CustomTransform 未能设置模块名。")
      }
      println(s"  CustomStage 运行成功，模块名: $moduleName")
    } catch {
      case e: Exception =>
        println(
          s"  运行 CustomStage (生成 .sv) 时出错: ${e.getMessage}"
        )
        moduleName = TransformOutputData.mainModuleName
        retrievedPortInfoList = TransformOutputData.portInfoList
        retrievedNameDictionary = TransformOutputData.nameDictionary // 获取名称字典
        if (moduleName.nonEmpty) {
          println(s"  虽然 SV 生成失败，但获取到模块名: $moduleName")
        } else {
          println(s"  SV 生成失败，且未能获取模块名。")
        }
    }

    // 3. 尝试写入其他文件 (FIRRTL, C++, Bash, JSON)
    if (moduleName.nonEmpty) {
      try {
        println(s"  尝试写入 FIRRTL, C++, Bash, JSON 文件...")

        // 写入转换后的 SV (如果成功生成)
        transformedSvOption match {
          case Some(transformed_sv) =>
            val transformedSvPath = s"$specificOutputDir/${moduleName}.sv"
            FileUtil.writeToFile(transformedSvPath, transformed_sv)
            println(s"  成功写入 $transformedSvPath")
          case None =>
            println(s"  跳过写入 ${moduleName}.sv，因为生成失败。")
        }

        // 写入 C++ 和 Bash 文件
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

        // 写入 Coverage Info JSON 文件
        if (retrievedPortInfoList.nonEmpty) {
          try {
            val coverageInfoJson =
              CoverageCollectorGenerator.generateCoverageInfoJson(
                moduleName,
                retrievedPortInfoList,
                retrievedNameDictionary // 传递名称字典
              )
            val jsonPath =
              s"$specificOutputDir/${moduleName}_coverage_info.json"
            FileUtil.writeToFile(jsonPath, coverageInfoJson, overwrite = false)
            println(s"  成功写入 $jsonPath (如果不存在)")
          } catch {
            case e: Exception =>
              println(s"   生成或写入 Coverage Info JSON 时出错: ${e.getMessage}")
          }
        } else {
          println(s"  跳过写入 Coverage Info JSON (端口信息为空)")
        }

        // 写入开发 FIRRTL 文件 (如果启用)
        if (enableDevOutput) {
          println(s"  写入开发 FIRRTL 文件...")
          if (TransformOutputData.originalFirrtl.nonEmpty) {
            FileUtil.writeToFile(
              s"$devDir/old.fir",
              TransformOutputData.originalFirrtl
            )
            println(s"  成功写入 $devDir/old.fir")
          } else {
            println(s"  跳过写入 old.fir (数据为空)")
          }
          if (TransformOutputData.transformedFirrtl.nonEmpty) {
            FileUtil.writeToFile(
              s"$devDir/new.fir",
              TransformOutputData.transformedFirrtl
            )
            println(s"  成功写入 $devDir/new.fir")
          } else {
            println(s"  跳过写入 new.fir (数据为空)")
          }
        }
      } catch {
        case e: Exception =>
          println(s"  写入 FIRRTL/C++/Bash/JSON 文件时出错: ${e.getMessage}")
      }
    } else {
      println(
        s"  警告: 未能获取模块名，无法写入 FIRRTL/C++/Bash/JSON 文件。"
      )
    }

    TransformOutputData.reset()

    val finalModuleName = if (moduleName.nonEmpty) moduleName else "未知模块"
    println(
      s"--- 完成处理模块: $finalModuleName ($outputDir) ---\n"
    )
  }
}
