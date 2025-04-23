package modules

import chisel3._
import chisel3.util._

class AnotherSubModule extends Module {
  val io = IO(new Bundle {
    val in  = Input(UInt(8.W))
    val out = Output(UInt(8.W))
  })

  val delayedIn = RegNext(io.in, 0.U) // 使用 RegNext 延迟输入，并提供初始值

  // 默认赋值
  io.out := 0.U

  when(io.in > 100.U) {
    io.out := delayedIn + 1.U
  } .otherwise {
    io.out := delayedIn // 在 otherwise 分支中赋值
  }
}
