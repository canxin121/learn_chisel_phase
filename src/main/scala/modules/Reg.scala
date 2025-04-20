package modules

import chisel3._
import chisel3.util._

class RegModule extends Module {
  val io = IO(new Bundle {
    val sel = Input(UInt(1.W))
    val out = Output(UInt(8.W))
  })

  io.out := 0.U

  when(io.sel === 0.U) {
    val regA = RegInit(0.U(8.W))
    regA := regA + 1.U
    io.out := regA
  }.otherwise {
    val regB = RegInit(100.U(8.W))
    regB := regB - 1.U
    io.out := regB
  }
}
