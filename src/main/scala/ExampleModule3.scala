package example_module3

import chisel3._
import chisel3.util._

class InnerModule extends Module {
  val io = IO(new Bundle {
    val sel = Input(Bool())
    val inputA = Input(UInt(8.W))
    val inputB = Input(UInt(8.W))
    val innerOut = Output(UInt(8.W))
  })

  io.innerOut := 0.U

  io.innerOut := Mux(
    io.sel,
    io.inputB,
    io.inputA
  )
}

class MidLevelModule extends Module {
  val io = IO(new Bundle {
    val midSel1 = Input(Bool())
    val midSel2 = Input(Bool())
    val midInA = Input(UInt(8.W))
    val midInB = Input(UInt(8.W))
    val midInC = Input(UInt(8.W))
    val midInD = Input(UInt(8.W))
    val midOut = Output(UInt(8.W))
  })

  io.midOut := 0.U

  val inner = Module(new InnerModule())

  inner.io.sel := io.midSel2
  inner.io.inputA := io.midInC
  inner.io.inputB := io.midInD

  io.midOut := Mux(
    io.midSel1,
    inner.io.innerOut,
    Mux(io.midSel2, io.midInB, io.midInA)
  )
}

class TopModule extends Module {
  val io = IO(new Bundle {

    val topSel1 = Input(UInt(2.W))
    val topSel2 = Input(UInt(2.W))
    val topSel3 = Input(Bool())

    val dataIn1 = Input(UInt(8.W))
    val dataIn2 = Input(UInt(8.W))
    val dataIn3 = Input(UInt(8.W))
    val dataIn4 = Input(UInt(8.W))
    val dataIn5 = Input(UInt(8.W))
    val dataIn6 = Input(UInt(8.W))

    val finalOut = Output(UInt(8.W))
  })

  io.finalOut := 0.U(8.W)

  val mid = Module(new MidLevelModule())

  mid.io.midSel1 := io.topSel1(0)
  mid.io.midSel2 := io.topSel3
  mid.io.midInA := io.dataIn1
  mid.io.midInB := io.dataIn2
  mid.io.midInC := io.dataIn3
  mid.io.midInD := io.dataIn4

  io.finalOut := Mux(
    io.topSel1(1),
    mid.io.midOut, {

      val switchResult = WireDefault(0.U(8.W))

      switch(io.topSel2) {
        is(0.U) {

          switch(io.topSel3.asUInt) {
            is(0.U) { switchResult := io.dataIn1 }
            is(1.U) { switchResult := io.dataIn2 }
          }
        }
        is(1.U) {

          val temp = Wire(Bool())
          temp := io.topSel3
          switchResult := Mux(temp === false.B, io.dataIn4, io.dataIn3)
        }
        is(2.U) {

          switchResult := Mux(
            io.topSel3,
            Mux(io.topSel1(0), io.dataIn6, io.dataIn5),
            io.dataIn1
          )
        }

      }
      switchResult
    }
  )
}
