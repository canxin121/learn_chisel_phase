package circt.stage

import circt.stage.CLI
import circt.stage.ChiselStage
import firrtl.options.PhaseManager
import chisel3.RawModule
import chisel3.stage.ChiselGeneratorAnnotation
import circt.stage.CIRCTTargetAnnotation
import circt.stage.CIRCTTarget
import chisel3.stage.ChiselCircuitAnnotation
import firrtl.options.Unserializable
import firrtl.options.CustomFileEmission
import firrtl.AnnotationSeq
import firrtl.stage.FirrtlCircuitAnnotation
import circt.stage.FirtoolOption
import circt.stage.EmittedMLIR
import firrtl.EmittedVerilogCircuitAnnotation
import firrtl.options.Dependency
import firrtl.options.Phase
import firrtl.options.Shell // Added import

class CustomStage(val customPhases: Seq[Phase] = Seq.empty) {

  /** A phase shared by all the CIRCT backends */
  private def phase =
    new PhaseManager(
      Seq(
        Dependency[chisel3.aop.injecting.InjectingPhase],
        Dependency[chisel3.stage.phases.Elaborate],
        Dependency[chisel3.stage.phases.Convert]
      ) ++ customPhases.map(p => Dependency(p.getClass)) ++ Seq(
        Dependency[circt.stage.phases.AddImplicitOutputFile],
        Dependency[chisel3.stage.phases.AddImplicitOutputAnnotationFile],
        Dependency[circt.stage.phases.Checks],
        Dependency[circt.stage.phases.CIRCT]
      )
    )

  /** Compile a Chisel circuit to SystemVerilog
    *
    * @param gen
    *   a call-by-name Chisel module
    * @param args
    *   additional command line arguments to pass to Chisel
    * @param firtoolOpts
    *   additional [[circt.stage.FirtoolOption]] to pass to firtool
    * @return
    *   a string containing the Verilog output
    */
  def emitSystemVerilog(
      gen: => RawModule,
      args: Array[String] = Array.empty,
      firtoolOpts: Array[String] = Array.empty
  ): String = {
    val annos = Seq(
      ChiselGeneratorAnnotation(() => gen),
      CIRCTTargetAnnotation(CIRCTTarget.SystemVerilog)
    ) ++ (new Shell("circt")).parse(args) ++ firtoolOpts.map(FirtoolOption(_))
    phase
      .transform(annos)
      .collectFirst { case EmittedVerilogCircuitAnnotation(a) =>
        a
      }
      .get
      .value
  }
}
