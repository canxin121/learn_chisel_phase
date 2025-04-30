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

  // 使用 Mux 根据 topSel(0) 选择 sub.io.a 的输入
  sub.io.a := Mux(io.topSel(0), io.topInB, io.topInA)

  // 使用 when 根据 topSel(1) 条件性地修改 sub.io.b 的输入
  sub.io.b := io.topInB
  when(io.topSel(1)) {
    sub.io.b := io.topInA // 当 topSel(1) 为 true 时，使用 topInA
  }

  // sub.io.sel 保持不变
  sub.io.sel := io.topSel

  // 使用 Mux 根据 topSel(0) 选择 anotherSub.io.in 的输入
  anotherSub.io.in := Mux(io.topSel(0), sub.io.out, io.topInA)

  // 使用 when/elsewhen/otherwise 根据 topSel 的不同值选择最终输出
  when(io.topSel === 0.U) {
    io.topOut := anotherSub.io.out
  }.elsewhen(io.topSel === 1.U) {
    io.topOut := sub.io.out
  }.elsewhen(io.topSel === 2.U) {
    io.topOut := io.topInA + io.topInB // 示例：执行一些计算
  }.otherwise {
    io.topOut := 0.U // 默认值
  }
}
