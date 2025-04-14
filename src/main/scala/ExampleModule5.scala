package example_module5

import chisel3._
import chisel3.util._

class ConditionalValidOutput(width: Int) extends Module {
  val io = IO(new Bundle {
    val dataIn = Input(UInt(width.W))
    val enable = Input(Bool())
    val dataOut =
      Output(Valid(UInt(width.W)))
  })

  io.dataOut.valid := io.enable

  io.dataOut.bits := io.dataIn
}
