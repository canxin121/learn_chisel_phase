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
      "output/old.firrtl",
      Serializer.serialize(circuit)
    )
    val new_circuit = MuxCondPropagator.transform(circuit)
    FileUtil.writeToFile(
      "output/new.firrtl",
      Serializer.serialize(new_circuit)
    )

    firrtl.stage.FirrtlCircuitAnnotation(
      new_circuit
    ) +: otherAnnos
  }
}

object ExampleMain extends App {
  val old_sv = ChiselStage.emitSystemVerilog(
    new example_module1.TopModule(32),
    // new example_module2.WaveformGenerator,
    // new example_module3.TopModule,
    firtoolOpts = Array("-disable-all-randomization", "-strip-debug-info")
  )

  FileUtil.writeToFile(
    "output/old.sv",
    old_sv
  )

  val new_sv = CustomStage.emitSystemVerilog(
    new example_module1.TopModule(32),
    // new example_module2.WaveformGenerator,
    // new example_module3.TopModule,
    firtoolOpts = Array("-disable-all-randomization", "-strip-debug-info")
  )

  FileUtil.writeToFile(
    "output/new.sv",
    new_sv
  )
}
