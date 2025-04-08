package example_module3

import chisel3._
import chisel3.util._ // 引入 Mux 和 Switch 等工具

//=============================================================
// 第三层：内部模块 (InnerModule)
// 功能：一个简单的 Mux
//=============================================================
class InnerModule extends Module {
  val io = IO(new Bundle {
    val sel = Input(Bool()) // 选择信号
    val inputA = Input(UInt(8.W))
    val inputB = Input(UInt(8.W))
    val innerOut = Output(UInt(8.W))
  })

  // --- 防止 "not fully initialized" ---
  // 为输出信号提供一个默认值。虽然 Mux 通常会覆盖所有情况，
  // 但如果此模块的输出在更上层被条件性使用，提供默认值是好习惯。
  io.innerOut := 0.U // 默认输出 0

  // --- Mux 逻辑 ---
  io.innerOut := Mux(
    io.sel,
    io.inputB,
    io.inputA
  ) // 如果 sel 为 true，输出 inputB，否则输出 inputA
}

//=============================================================
// 第二层：中间层模块 (MidLevelModule)
// 功能：实例化 InnerModule，并包含 Mux 嵌套 Mux 的逻辑
//=============================================================
class MidLevelModule extends Module {
  val io = IO(new Bundle {
    val midSel1 = Input(Bool()) // 外层 Mux 选择
    val midSel2 = Input(Bool()) // 内层 Mux / InnerModule 选择
    val midInA = Input(UInt(8.W))
    val midInB = Input(UInt(8.W))
    val midInC = Input(UInt(8.W))
    val midInD = Input(UInt(8.W))
    val midOut = Output(UInt(8.W))
  })

  // --- 防止 "not fully initialized" ---
  io.midOut := 0.U // 提供默认输出值

  // --- 实例化内部模块 ---
  val inner = Module(new InnerModule())

  // --- 连接 InnerModule ---
  inner.io.sel := io.midSel2 // 将 midSel2 连接到 InnerModule 的选择信号
  inner.io.inputA := io.midInC // 将 midInC 连接到 InnerModule 的 inputA
  inner.io.inputB := io.midInD // 将 midInD 连接到 InnerModule 的 inputB

  // --- Mux 嵌套 Mux 逻辑 ---
  // 外层 Mux 由 midSel1 控制
  io.midOut := Mux(
    io.midSel1,
    // 当 midSel1 为 true 时：使用 InnerModule 的输出
    inner.io.innerOut,
    // 当 midSel1 为 false 时：使用内层 Mux
    Mux(io.midSel2, io.midInB, io.midInA) // 内层 Mux 由 midSel2 控制
  )
}

//=============================================================
// 第一层：顶层模块 (TopModule)
// 功能：实例化 MidLevelModule，并包含复杂的 switch 嵌套 Mux/Switch 逻辑
//=============================================================
class TopModule extends Module {
  val io = IO(new Bundle {
    // 控制信号
    val topSel1 = Input(UInt(2.W)) // 控制最外层 Mux
    val topSel2 = Input(UInt(2.W)) // 控制内层 switch
    val topSel3 = Input(Bool()) // 控制最内层 switch/Mux

    // 数据输入
    val dataIn1 = Input(UInt(8.W))
    val dataIn2 = Input(UInt(8.W))
    val dataIn3 = Input(UInt(8.W))
    val dataIn4 = Input(UInt(8.W))
    val dataIn5 = Input(UInt(8.W))
    val dataIn6 = Input(UInt(8.W))

    // 输出
    val finalOut = Output(UInt(8.W))
  })

  // --- 防止 "not fully initialized" ---
  // 为最终输出提供默认值，这非常重要，因为下面的 Mux/Switch 逻辑很复杂
  io.finalOut := 0.U(8.W) // 默认输出 0

  // --- 实例化中间层模块 ---
  val mid = Module(new MidLevelModule())

  // --- 连接 MidLevelModule ---
  // 将顶层输入连接到中间层模块的对应输入
  mid.io.midSel1 := io.topSel1(0) // 使用 topSel1 的最低位作为 midSel1
  mid.io.midSel2 := io.topSel3 // 使用 topSel3 作为 midSel2
  mid.io.midInA := io.dataIn1
  mid.io.midInB := io.dataIn2
  mid.io.midInC := io.dataIn3
  mid.io.midInD := io.dataIn4

  // --- 复杂的 Mux 嵌套 Switch 嵌套 Switch/Mux 逻辑 ---
  // 最外层使用 Mux，由 topSel1(1) 控制 (topSel1 的最高位)
  io.finalOut := Mux(
    io.topSel1(1), // 当 topSel1[1] == 1.U
    // --- 分支一：使用 MidLevelModule 的输出 ---
    mid.io.midOut,

    // --- 分支二：使用 Switch 结构 (当 topSel1[1] == 0.U) ---
    { // 使用花括号创建一个局部作用域，可以定义临时 Wire
      // 定义一个 Wire 来接收 switch 的结果，并提供默认值
      val switchResult = WireDefault(0.U(8.W)) // 为 switch 结果提供默认值

      // 外层 Switch，由 topSel2 控制
      switch(io.topSel2) {
        is(0.U) { // 当 topSel2 === 0.U
          // 内层 Switch，由 topSel3 控制
          switch(io.topSel3.asUInt) { // switch 需要 UInt 类型
            is(0.U) { switchResult := io.dataIn1 }
            is(1.U) { switchResult := io.dataIn2 }
          }
        }
        is(1.U) { // 当 topSel2 === 1.U
          // 内层 Mux，由 topSel3 控制
          switchResult := Mux(io.topSel3, io.dataIn4, io.dataIn3)
        }
        is(2.U) { // 当 topSel2 === 2.U
          // 另一个 Mux 嵌套 Mux 的例子
          switchResult := Mux(
            io.topSel3,
            Mux(io.topSel1(0), io.dataIn6, io.dataIn5), // 又一个 Mux
            io.dataIn1
          ) // 当 topSel3 为 false
        }
        // isDefault 或其他情况可以省略，因为 switchResult 有 WireDefault
      }
      switchResult // Mux 分支二返回 switchResult 的最终值
    }
  ) // Mux 结束
}
