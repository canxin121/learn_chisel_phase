package main

import circt.stage.CustomStage
import firrtl.ir._
import example_module1.TopModule
import file_util.FileUtil
import java.io.File
import circt.stage.ChiselStage

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

    FileUtil.writeToFile(
      "output1/old.firrtl",
      Serializer.serialize(circuit)
    )

    val new_mux_circuit = MuxCondPropagator.transform(circuit)
    FileUtil.writeToFile(
      "output1/new_mux.firrtl",
      Serializer.serialize(new_mux_circuit)
    )

    val new_cond_circuit =
      ConditionallyPredPropagator.transform(new_mux_circuit)
    FileUtil.writeToFile(
      "output1/new_cond.firrtl",
      Serializer.serialize(new_cond_circuit)
    )

    firrtl.stage.FirrtlCircuitAnnotation(
      new_cond_circuit
    ) +: otherAnnos
  }
}

object ExampleMain extends App {
  val old_sv = ChiselStage.emitSystemVerilog(
    // new example_module1.TopModule(32),
    new example_module2.WaveformGenerator,
    // new example_module3.TopModule,
    // new example_module4.SimpleFsm,
    firtoolOpts = Array("-disable-all-randomization", "-strip-debug-info")
  )

  FileUtil.writeToFile(
    "output1/old.sv",
    old_sv
  )

  val new_sv = CustomStage.emitSystemVerilog(
    // new example_module1.TopModule(32),
    new example_module2.WaveformGenerator,
    // new example_module3.TopModule,
    // new example_module4.SimpleFsm,
    firtoolOpts = Array("-disable-all-randomization", "-strip-debug-info")
  )

  FileUtil.writeToFile(
    "output1/new.sv",
    new_sv
  )
}
