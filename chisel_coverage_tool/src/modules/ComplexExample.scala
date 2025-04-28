package modules

import chisel3._
import chisel3.util._

class ComplexExample extends Module {
  val io = IO(new Bundle {
    val topInA = Input(UInt(8.W))
    val topInB = Input(UInt(8.W))
    val topSel = Input(UInt(2.W))
    val topOut = Output(UInt(8.W))
  })

  val sub = Module(new SubModule())
  val anotherSub = Module(new AnotherSubModule())

  // 连接 SubModule 输入
  sub.io.a := io.topInA
  sub.io.b := io.topInB
  sub.io.sel := io.topSel

  // 连接 AnotherSubModule 输入，例如使用 SubModule 的输出
  anotherSub.io.in := sub.io.out

  // 连接顶层输出
  io.topOut := anotherSub.io.out
}
