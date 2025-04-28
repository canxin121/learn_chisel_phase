package modules

import chisel3._
import chisel3.util._

class RegModule extends Module {
  val io = IO(new Bundle {
    val sel = Input(UInt(1.W))
    // Change the output type to a nested Vec
    val out = Output(Vec(2, Vec(3, UInt(8.W))))
  })

  when(io.sel === 0.U) {
    // Create a register with the complex type, initialized to zeros
    val regA = RegInit(VecInit.fill(2)(VecInit.fill(3)(0.U(8.W))))
    // Example update: increment the first element
    regA(0)(0) := regA(0)(0) + 1.U
    io.out := regA
  }.otherwise {
    // Create another register with the complex type, initialized differently
    // Correct the initialization to create a Seq[Vec[UInt]]
    val regB = RegInit(
      VecInit(Seq.tabulate(2) { i =>
        VecInit(Seq.tabulate(3) { j => (i * 10 + j * 1 + 100).U(8.W) })
      })
    )
    // Example update: decrement the last element
    regB(1)(2) := regB(1)(2) - 1.U
    io.out := regB
  }
}
