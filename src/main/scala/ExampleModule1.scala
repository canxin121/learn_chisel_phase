package example_module1
import chisel3._
import chisel3.util._

// 最底层模块：LowModule
class LowModule(width: Int) extends Module {
  val io = IO(new Bundle {
    val inA = Input(UInt(width.W))
    val inB = Input(UInt(width.W))
    val sel = Input(Bool())
    val out = Output(UInt(width.W))
  })

  // 内部使用Mux
  val internalMux = Mux(io.sel, io.inA, io.inB)

  // 添加一些额外的逻辑
  val processed = internalMux + 1.U

  io.out := processed
}

// 中间层模块：MidModule
class MidModule(width: Int) extends Module {
  val io = IO(new Bundle {
    val inA = Input(UInt(width.W))
    val inB = Input(UInt(width.W))
    val inC = Input(UInt(width.W))
    val inD = Input(UInt(width.W))
    val sel1 = Input(Bool())
    val sel2 = Input(Bool())
    val out = Output(UInt(width.W))
  })

  // 实例化LowModule
  val lowMod1 = Module(new LowModule(width))
  val lowMod2 = Module(new LowModule(width))

  // 第一级Mux选择
  val mux1Out = Mux(io.sel1, io.inA, io.inB)
  val mux2Out = Mux(io.sel1, io.inC, io.inD)

  // 连接LowModule
  lowMod1.io.inA := mux1Out
  lowMod1.io.inB := mux2Out
  lowMod1.io.sel := io.sel2

  lowMod2.io.inA := io.inA
  lowMod2.io.inB := io.inB
  lowMod2.io.sel := io.sel1

  // 第二级Mux选择
  io.out := Mux(io.sel2, lowMod1.io.out, lowMod2.io.out)
}

// 顶层模块：TopModule
class TopModule(width: Int) extends Module {
  val io = IO(new Bundle {
    val inA = Input(UInt(width.W))
    val inB = Input(UInt(width.W))
    val inC = Input(UInt(width.W))
    val inD = Input(UInt(width.W))
    val inE = Input(UInt(width.W))
    val inF = Input(UInt(width.W))
    val sel1 = Input(Bool())
    val sel2 = Input(Bool())
    val sel3 = Input(Bool())
    val out = Output(UInt(width.W))
  })

  // 实例化MidModule
  val midMod = Module(new MidModule(width))

  // 第一级Mux选择
  val topMux1 = Mux(io.sel1, io.inA, io.inB)
  val topMux2 = Mux(io.sel1, io.inC, io.inD)
  val topMux3 = Mux(io.sel2, topMux1, topMux2)

  // 连接MidModule
  midMod.io.inA := topMux1
  midMod.io.inB := topMux2
  midMod.io.inC := io.inE
  midMod.io.inD := io.inF
  midMod.io.sel1 := io.sel2
  midMod.io.sel2 := io.sel3

  // 最终输出选择
  io.out := Mux(io.sel3, midMod.io.out, topMux3)
}
