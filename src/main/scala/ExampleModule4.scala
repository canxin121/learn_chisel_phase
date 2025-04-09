package example_module4

import chisel3._
import chisel3.util._

// 1. 定义状态枚举
object State extends ChiselEnum {
  val sIdle, sProcessing, sDone = Value
}

// 2. 定义模块 IO
class SimpleFsmIO extends Bundle {
  val start = Input(Bool()) // 输入：开始信号
  val dataIn = Input(UInt(8.W)) // 输入：一些数据（本例中未使用，仅作演示）
  val busy = Output(Bool()) // 输出：状态机是否忙碌 (不在 Idle 状态)
  val dataOut = Output(UInt(8.W)) // 输出：一些数据（本例中未使用，仅作演示）
  val done = Output(Bool()) // 输出：处理完成信号
}

// 3. 定义状态机模块
class SimpleFsm extends Module {
  val io = IO(new SimpleFsmIO())

  // 导入状态枚举以便直接使用 sIdle, sProcessing, sDone
  import State._

  // 状态寄存器，复位时初始化为 sIdle
  val currentState = RegInit(sIdle)

  // 计数器，用于模拟处理时间
  val counter = RegInit(0.U(4.W)) // 假设处理需要数个周期，用4位计数器
  val PROCESSING_CYCLES = 5.U // 定义处理所需的周期数

  // --- 默认输出 ---
  // 通常为输出设置默认值，然后在特定状态下覆盖它们
  io.busy := (currentState =/= sIdle) // 只要不在Idle状态，就认为忙碌
  io.done := false.B
  io.dataOut := 0.U // 默认输出0

  // --- 下一状态逻辑 (组合逻辑) ---
  // 默认情况下，保持当前状态
  val nextState = WireDefault(currentState)
  // 默认情况下，计数器保持不变（除非在 sProcessing 中递增）
  // counter := counter // 这行其实不需要，因为寄存器默认保持原值

  switch(currentState) {
    is(sIdle) {
      // 在 Idle 状态：等待 start 信号
      when(io.start) {
        nextState := sProcessing
        counter := 0.U // 进入处理状态时，重置计数器
      }
    }

    is(sProcessing) {
      // 在 Processing 状态：计数器递增，模拟处理
      when(counter < PROCESSING_CYCLES) {
        counter := counter + 1.U
        nextState := sProcessing // 保持在处理状态
      }.otherwise {
        // 计数器达到目标值，处理完成
        nextState := sDone
        counter := 0.U // 可以选择在这里或进入 sDone 时重置
      }
      // 可以在这里根据 counter 或 dataIn 计算 dataOut
      // io.dataOut := io.dataIn + counter // 示例：输出可以依赖输入和内部状态
    }

    is(sDone) {
      // 在 Done 状态：发出完成信号，然后返回 Idle
      // 这个状态只持续一个周期
      nextState := sIdle
      // 在这个状态下设置完成信号
      io.done := true.B
      // 可以在这里设置最终的 dataOut 值
      // io.dataOut := some_result.U
    }
  }

  currentState := nextState

}
