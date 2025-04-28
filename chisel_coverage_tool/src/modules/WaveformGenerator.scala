package modules 
import chisel3._
import chisel3.util._

class WaveformGenerator(bitWidth: Int = 8, phaseWidth: Int = 16)
    extends Module {
  val io = IO(new Bundle {
    val waveType = Input(UInt(2.W))
    val freqCtrl = Input(UInt(phaseWidth.W))
    val phaseOffset = Input(UInt(phaseWidth.W))
    val output = Output(SInt(bitWidth.W))
  })

  val maxVal = (1 << (bitWidth - 1)) - 1
  val minVal = -(1 << (bitWidth - 1))

  val phaseAcc = RegInit(0.U(phaseWidth.W))
  phaseAcc := phaseAcc + io.freqCtrl

  val phase = phaseAcc + io.phaseOffset

  io.output := 0.S

  val sinTable = VecInit(Seq.tabulate(256) { i =>
    val rad = 2 * math.Pi * i / 256.0
    val sinValue = math.sin(rad)
    val scaled = (sinValue * maxVal).toInt
    scaled.S(bitWidth.W)
  })

  val triTable = VecInit(Seq.tabulate(256) { i =>
    if (i < 128)
      (-maxVal + ((2 * maxVal * i) / 128)).S(bitWidth.W)
    else
      (maxVal - ((2 * maxVal * (i - 128)) / 128)).S(bitWidth.W)
  })

  val sawTable = VecInit(Seq.tabulate(256) { i =>
    (-maxVal + ((2 * maxVal * i) / 255)).S(bitWidth.W)
  })

  switch(io.waveType) {
    is(0.U) {
      io.output := sinTable(phase(phaseWidth - 1, phaseWidth - 8))
    }
    is(1.U) {
      io.output := triTable(phase(phaseWidth - 1, phaseWidth - 8))
    }
    is(2.U) {
      io.output := sawTable(phase(phaseWidth - 1, phaseWidth - 8))
    }
    is(3.U) {
      io.output := Mux(phase(phaseWidth - 1) === 1.U, (-maxVal).S, maxVal.S)
    }
  }
}
