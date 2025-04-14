package example_module6

import chisel3._
import chisel3.util._

class RegisterExample extends Module {
  val io = IO(new Bundle {
    val dataIn = Input(UInt(8.W))
    val enable = Input(Bool())

    val dataOutReg = Output(UInt(8.W))
    val dataOutRegInit = Output(UInt(8.W))
  })

  val simpleReg = Reg(UInt(8.W))

  val resettingReg = RegInit(0.U(8.W))

  when(io.enable) {
    simpleReg := io.dataIn
    resettingReg := resettingReg + 1.U
  }

  io.dataOutReg := simpleReg
  io.dataOutRegInit := resettingReg
}
