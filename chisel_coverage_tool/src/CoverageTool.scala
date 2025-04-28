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
  var portInfoList: List[TopLevelExportInfo] = Nil // <-- 新增字段

  def reset(): Unit = {
    mainModuleName = ""
    originalFirrtl = ""
    transformedFirrtl = ""
    coverageCollectorHeader = ""
    simMainCpp = ""
    coverageBashScript = ""
    portInfoList = Nil // <-- 重置新增字段
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
    TransformOutputData.portInfoList = port_info_list // <-- 存储端口信息

    firrtl.stage.FirrtlCircuitAnnotation(new_reg_circuit) +: otherAnnos
  }
}

object CoverageTool {

  /** 辅助函数：转义 JSON 字符串中的特殊字符 */
  private def escapeJsonString(s: String): String = {
    s.replace("\\", "\\\\")
      .replace("\"", "\\\"")
      .replace("\b", "\\b")
      .replace("\f", "\\f")
      .replace("\n", "\\n")
      .replace("\r", "\\r")
      .replace("\t", "\\t")
  }

  /** 递归地将向量/数组信号展开为标量信号信息 */
  private def flattenSignalInfo(
      baseFieldName: String,
      fieldType: Type,
      originalInfo: Info
  ): Seq[ExportedSignalInfo] = {
    fieldType match {
      case VectorType(elementType, size) =>
        if (size > 0) {
          (0 until size).flatMap { i =>
            // 递归调用，为每个元素生成新的字段名
            flattenSignalInfo(s"${baseFieldName}_$i", elementType, originalInfo)
          }
        } else {
          // 零长度向量，不生成任何信号
          Seq.empty
        }
      case _: BundleType =>
        // 明确忽略 Bundle 类型，因为覆盖率通常不直接应用于整个 Bundle
        // 可以选择性地添加警告日志
        // println(s"[WARN] Skipping BundleType '$baseFieldName' during JSON generation.")
        Seq.empty
      case groundType: GroundType =>
        // 基本情况：遇到标量类型，生成一个 ExportedSignalInfo
        Seq(
          ExportedSignalInfo(
            fieldName = baseFieldName,
            fieldtype = groundType, // 类型是展开后的标量类型
            info = originalInfo // Info 保持不变
          )
        )
      case otherType =>
        // 处理其他未预期的类型，可以选择性地记录警告或错误
        println(
          s"[WARN] Encountered unexpected type '${otherType.serialize}' for field '$baseFieldName' during JSON generation. Skipping."
        )
        Seq.empty
    }
  }

  /** 生成包含 TopLevelExportInfo 信息的 JSON 字符串 */
  private def generateCoverageInfoJson(
      topModuleName: String,
      exportInfos: List[TopLevelExportInfo]
  ): String = {
    val portsJson = exportInfos
      .map { portInfo =>
        // 对每个端口中的信号列表进行 flatMap 操作，应用 flattenSignalInfo
        val flattenedSignals = portInfo.exportedSignals.flatMap { signal =>
          flattenSignalInfo(signal.fieldName, signal.fieldtype, signal.info)
        }

        // 为展开后的每个标量信号生成 JSON 条目
        val signalsJson = flattenedSignals
          .sortBy(_.fieldName) // 按名称排序以保持一致性
          .map { flatSignal =>
            s"""      {
               |        "fieldName": "${escapeJsonString(
                flatSignal.fieldName
              )}",
               |        "type": "${escapeJsonString(
                flatSignal.fieldtype.serialize
              )}",
               |        "info": "${escapeJsonString(flatSignal.info.serialize)}"
               |      }""".stripMargin
          }
          .mkString(",\n")

        s"""    {
           |      "portName": "${escapeJsonString(portInfo.portName)}",
           |      "signals": [
           |$signalsJson
           |      ]
           |    }""".stripMargin
      }
      .mkString(",\n")

    s"""{
       |  "topModuleName": "${escapeJsonString(topModuleName)}",
       |  "exportedPorts": [
       |$portsJson
       |  ]
       |}""".stripMargin
  }

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
    var retrievedPortInfoList: List[TopLevelExportInfo] = Nil // 用于存储端口信息
    try {
      println(s"  运行 CustomStage (转换并尝试生成 .sv)...")
      val transformed_sv = stage.emitSystemVerilog(
        moduleGenerator(),
        firtoolOpts = firtoolOpts
      )
      transformedSvOption = Some(transformed_sv)
      moduleName = TransformOutputData.mainModuleName // 获取模块名
      // 注意：这里获取的 portInfoList 仍然是 SignalPropagator 输出的原始列表
      // JSON 生成函数内部会处理展开逻辑
      retrievedPortInfoList = TransformOutputData.portInfoList
      if (moduleName.isEmpty) {
        println(s"  警告: CustomTransform 未能设置模块名。")
      }
      println(s"  CustomStage 运行成功，模块名: $moduleName")
    } catch {
      case e: Exception =>
        println(
          s"  运行 CustomStage (生成 .sv) 时出错: ${e.getMessage}"
        )
        // 即使 SV 生成失败，仍然尝试获取模块名和端口信息
        moduleName = TransformOutputData.mainModuleName
        retrievedPortInfoList = TransformOutputData.portInfoList
        if (moduleName.nonEmpty) {
          println(s"  虽然 SV 生成失败，但获取到模块名: $moduleName")
        } else {
          println(s"  SV 生成失败，且未能获取模块名。")
        }
    }

    // 3. 尝试写入其他文件 (FIRRTL, C++, Bash, JSON)，特别是当 enableDevOutput 为 true 时
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
            // 调用更新后的 generateCoverageInfoJson 函数，传入当前工作目录
            val coverageInfoJson =
              generateCoverageInfoJson(
                moduleName,
                retrievedPortInfoList,
              )
            val jsonPath =
              s"$specificOutputDir/${moduleName}_coverage_info.json"
            FileUtil.writeToFile(jsonPath, coverageInfoJson)
            println(s"  成功写入 $jsonPath")
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
