package main

import firrtl.ir._
import circt.stage.CustomStage
import file_util.FileUtil
import java.io.File
import circt.stage.ChiselStage
import chisel3.RawModule

import example_module1.TopModule
import example_module2.WaveformGenerator
import example_module3.{TopModule => TopModule3}
import example_module4.SimpleFsm
import example_module5.ConditionalValidOutput
import example_module6.RegisterExample

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

    val new_mux_circuit = MuxCondPropagator.transform(circuit)
    val new_cond_circuit =
      ConditionallyPredPropagator.transform(new_mux_circuit)
    val new_reg_circuit = RegisterSignalPropagator.transform(new_cond_circuit)

    firrtl.stage.FirrtlCircuitAnnotation(
      new_reg_circuit
    ) +: otherAnnos
  }
}

object ExampleMain extends App {

  val firtoolOpts = Array("-disable-all-randomization", "-strip-debug-info")
  val baseOutputDir = "output_generated"

  val stage = new CustomStage(
    customPhases = Seq(new CustomTransform)
  )

  val modulesToProcess: Seq[(() => RawModule, String, String)] = Seq(
    (() => new example_module1.TopModule(32), "ExampleModule1", "example1"),
    (
      () => new example_module2.WaveformGenerator,
      "WaveformGenerator",
      "example2_waveform"
    ),
    (
      () => new example_module3.TopModule(),
      "ExampleModule3",
      "example3"
    ),
    (() => new example_module4.SimpleFsm(), "SimpleFsm", "example4_fsm"),
    (
      () => new example_module5.ConditionalValidOutput(8),
      "ConditionalValidOutput",
      "example5_condvalid"
    ),
    (
      () => new example_module6.RegisterExample(),
      "RegisterExample",
      "example6_register"
    ),
    (
      () => new example_module7.UART_rx(),
      "UART_rx",
      "example7_uart_rx"
    ),
    (
      () => new example_module7.UART_tx(),
      "UART_tx",
      "example7_uart_tx"
    )
  )

  modulesToProcess.foreach { case (moduleGenerator, moduleName, outputSubDir) =>
    println(s"--- 开始处理模块: $moduleName ---")

    val specificOutputDir = s"$baseOutputDir/$outputSubDir";

    try {

      val old_sv = ChiselStage.emitSystemVerilog(
        moduleGenerator(),
        firtoolOpts = firtoolOpts
      )
      val old_firrtl = ChiselStage.emitCHIRRTL(
        moduleGenerator()
      )
      FileUtil.writeToFile(
        s"$specificOutputDir/old.sv",
        old_sv
      )
      FileUtil.writeToFile(
        s"$specificOutputDir/old.fir",
        old_firrtl
      )
    } catch {
      case e: Exception => println(s"生成 old 时出错: ${e.getMessage}")

    }

    try {

      val new_sv = stage.emitSystemVerilog(
        moduleGenerator(),
        firtoolOpts = firtoolOpts
      )
      val new_firrtl = stage.emitCHIRRTL(
        moduleGenerator()
      )
      FileUtil.writeToFile(
        s"$specificOutputDir/new.sv",
        new_sv
      )
      FileUtil.writeToFile(
        s"$specificOutputDir/new.fir",
        new_firrtl
      )
    } catch {
      case e: Exception => println(s"生成 new 时出错: ${e.getMessage}")

    }

    println(s"--- 完成处理模块: $moduleName ---\n")
  }

  println("所有模块处理完毕.")
}
