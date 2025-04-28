package modules

import chisel3._
import chisel3.util._

class SubModule extends Module {
  val io = IO(new Bundle {
    val a = Input(UInt(8.W))
    val b = Input(UInt(8.W))
    val sel = Input(UInt(2.W))
    val out = Output(UInt(8.W))
  })

  val stateReg = RegInit(0.U(8.W))

  // 默认赋值，确保在所有分支中都有定义
  io.out := stateReg // 默认输出当前状态
  val nextState = WireDefault(stateReg) // 默认下一状态是当前状态

  switch(io.sel) {
    is(0.U) {
      nextState := io.a + io.b
      io.out := io.a
    }
    is(1.U) {
      nextState := io.a - io.b
      io.out := io.b
    }
    is(2.U) {
      nextState := io.a & io.b
      io.out := stateReg + 1.U
    }
    // is(3.U) 分支使用默认值
  }

  stateReg := nextState
}
