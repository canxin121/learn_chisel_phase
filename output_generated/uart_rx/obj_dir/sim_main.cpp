// --- BEGIN GENERATED sim_main.cpp ---
#include <iostream>
#include <memory> // For std::unique_ptr
#include <string> // For std::string (used by exportJson filename)

// Include Verilator core headers
#include "verilated.h"
#include "verilated_vcd_c.h" // For VCD tracing

// Include DUT header
#include "VUART_rx.h"

// Include our Coverage Collector header
#include "coverage_collector.h"

// Global simulation time variable required by Verilator for sc_time_stamp()
vluint64_t global_time = 0;

// sc_time_stamp function (required by Verilator)
double sc_time_stamp() {
  return global_time; // Return current simulation time
}

class UartStimulus {
private:
  // UART 发送状态定义 (UART transmission states definition)
  enum UartTxState { IDLE, START_BIT, DATA_BITS, STOP_BIT };

  UartTxState tx_state = IDLE;
  uint8_t data_to_send = 0x00;
  int bit_index = 0;
  int clk_count_in_bit = 0;
  int data_pattern_selector = 0;
  uint8_t sequence_counter = 0;
  uint8_t current_serial_data = 1; // Current value for io_i_serial_data

  // 仿真设置 (Simulation settings relevant to stimulus)
  const int CLKS_PER_BIT;
  const vluint64_t PHASE1_END;
  const vluint64_t PHASE2_END;
  const vluint64_t PHASE3_END;
  // const vluint64_t PHASE4_END; // PHASE4_END is implicitly MAX_SIM_TIME

public:
  // 构造函数，传入仿真参数 (Constructor passing simulation parameters)
  UartStimulus(int clks_per_bit, vluint64_t max_sim_time)
      : CLKS_PER_BIT(clks_per_bit), PHASE1_END(max_sim_time / 4),
        PHASE2_END(max_sim_time / 2), PHASE3_END(max_sim_time * 3 / 4)
  // PHASE4_END(max_sim_time) // Implicit
  {
    srand(time(nullptr)); // Initialize random seed
    std::cout << "UartStimulus: Initialized with CLKS_PER_BIT=" << CLKS_PER_BIT
              << std::endl;
    std::cout << "  Phase 1 (Predefined): 0 -> " << PHASE1_END << std::endl;
    std::cout << "  Phase 2 (Sequential): " << PHASE1_END << " -> "
              << PHASE2_END << std::endl;
    std::cout << "  Phase 3 (Random Burst): " << PHASE2_END << " -> "
              << PHASE3_END << std::endl;
    std::cout << "  Phase 4 (More Random): " << PHASE3_END << " -> MAX_SIM_TIME"
              << std::endl;
  }

  // 更新函数，在每个时钟周期调用 (Update function, called every clock cycle)
  void update(vluint64_t sim_time, bool reset_active) {
    if (reset_active) {
      // 复位期间的行为 (Behavior during reset)
      tx_state = IDLE;
      current_serial_data = 1;
      clk_count_in_bit = 0;
      bit_index = 0;
      data_pattern_selector = 0;
      sequence_counter = 0;
      return; // Reset takes priority
    }

    // 非复位期间的逻辑 (Logic during non-reset)
    clk_count_in_bit++;
    bool bit_period_done = (clk_count_in_bit >= CLKS_PER_BIT);

    switch (tx_state) {
    case IDLE:
      current_serial_data = 1; // Keep line high
      clk_count_in_bit = 0;    // Reset bit counter in idle

      // --- 根据仿真阶段确定要发送的数据 ---
      // (Determine data to send based on simulation phase)
      // 当处于空闲状态时立即发送（几乎是背靠背的帧）
      // (Send immediately when idle (almost back-to-back frames))
      if (sim_time > 15) { // Avoid starting immediately after reset release
        if (sim_time < PHASE1_END) { // Phase 1: Predefined patterns
          switch (data_pattern_selector % 6) {
          case 0:
            data_to_send = 0xAA;
            break;
          case 1:
            data_to_send = 0x55;
            break;
          case 2:
            data_to_send = 0x00;
            break;
          case 3:
            data_to_send = 0xFF;
            break;
          case 4:
            data_to_send = 0x01;
            break; // Boundary low
          case 5:
            data_to_send = 0xFE;
            break; // Boundary high
          }
          data_pattern_selector++;
        } else if (sim_time < PHASE2_END) { // Phase 2: Sequential Data
          if (data_pattern_selector % 2 == 0) {
            data_to_send = sequence_counter++; // Incremental
          } else {
            data_to_send = sequence_counter--; // Decremental
          }
          if (sequence_counter == 0 ||
              sequence_counter == 255) { // Change direction at ends
            data_pattern_selector++;
          }
        } else { // Phase 3 & 4: Random Data
          data_to_send = rand() % 256;
        }

        // --- 开始传输 --- (Start Transmission)
        // Uncomment below to reduce frequency of printing start message
        // if (sim_time % (CLKS_PER_BIT * 10) == 0) { // Print less often
        //     std::cout << "[" << sim_time << "] UART Tx Start: 0x" << std::hex
        //     << (int)data_to_send << std::dec << std::endl;
        // }
        tx_state = START_BIT;
        current_serial_data = 0; // Send start bit (low)
        clk_count_in_bit =
            1; // Start bit timing (already incremented once this cycle)
      }
      break;

    case START_BIT:
      current_serial_data = 0; // Hold start bit low
      if (bit_period_done) {
        tx_state = DATA_BITS;
        bit_index = 0;
        clk_count_in_bit = 0;
      }
      break;

    case DATA_BITS:
      current_serial_data = (data_to_send >> bit_index) & 1;
      if (bit_period_done) {
        bit_index++;
        clk_count_in_bit = 0;
        if (bit_index >= 8) {
          tx_state = STOP_BIT;
        }
      }
      break;

    case STOP_BIT:
      current_serial_data = 1; // Send stop bit (high)
      if (bit_period_done) {
        // Uncomment below to reduce frequency of printing completion message
        // if (sim_time % (CLKS_PER_BIT * 10) == 0) { // Print less often
        //     std::cout << "[" << sim_time << "] UART Tx Complete: 0x" <<
        //     std::hex << (int)data_to_send << std::dec << std::endl;
        // }
        tx_state = IDLE;      // Ready for the next frame immediately
        clk_count_in_bit = 0; // Reset for IDLE state logic
      }
      break;
    }
  }

  // 获取当前的串行数据输出值 (Get the current serial data output value)
  uint8_t get_serial_data() const { return current_serial_data; }
};

// --- Simulation Main Function ---
int main(int argc, char **argv) {
  // Initialize Verilator context
  std::unique_ptr<VerilatedContext> contextp =
      std::make_unique<VerilatedContext>();
  contextp->commandArgs(argc, argv);
  contextp->traceEverOn(true); // Enable VCD tracing

  // Create VCD trace object
  std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();

  // Instantiate DUT
  std::unique_ptr<VUART_rx> top =
      std::make_unique<VUART_rx>(contextp.get(), "DUT");

  // Setup VCD tracing
  top->trace(tfp.get(), 99); // Trace 99 levels deep
  tfp->open("waveform.vcd"); // Open VCD file
  std::cout << "VCD tracing enabled, dumping to waveform.vcd" << std::endl;

  // Simulation settings
  vluint64_t sim_time_steps = 0;
  // Allow overriding max simulation time via command line argument
  vluint64_t max_sim_time_steps = 10000; // Default max simulation time
  if (argc > 1) {
    try {
      max_sim_time_steps = std::stoull(argv[1]); // Use unsigned long long
      std::cout << "Overriding MAX_SIM_TIME_STEPS from command line: "
                << max_sim_time_steps << std::endl;
    } catch (const std::invalid_argument &ia) {
      std::cerr << "Warning: Invalid simulation time argument '" << argv[1]
                << "'. Using default: " << max_sim_time_steps << std::endl;
    } catch (const std::out_of_range &oor) {
      std::cerr << "Warning: Simulation time argument '" << argv[1]
                << "' out of range. Using default: " << max_sim_time_steps
                << std::endl;
    }
  }

  // Create and initialize Coverage Collector
  CoverageCollector coverage_collector;
  try {
    coverage_collector.initialize(top.get());
  } catch (const std::exception &e) {
    std::cerr << "Fatal Error during CoverageCollector initialization: "
              << e.what() << std::endl;
    if (tfp) {
      tfp->close();
    } // tfp managed by unique_ptr now
    return 1; // Exit on initialization failure
  }

  std::cout << "Starting simulation (MAX_SIM_TIME_STEPS = "
            << max_sim_time_steps << ")" << std::endl;

  // --- Simulation Loop ---
  top->reset = 1; // Assert reset
  top->clock = 0; // Initialize clock

  const int CLKS_PER_BIT = 20;
  UartStimulus uart_stimulus(CLKS_PER_BIT, max_sim_time_steps);
  while (sim_time_steps < max_sim_time_steps && !contextp->gotFinish()) {

    // --- Time Management ---
    // Manage time explicitly for clock edges
    contextp->time(
        sim_time_steps * 10 +
        0); // Time for falling edge (e.g., use a 10 unit clock period)
    global_time = contextp->time(); // Update global time

    // --- Reset Logic ---
    if (sim_time_steps < 5) { // Keep reset for 5 clock cycles
      top->reset = 1;
    } else if (sim_time_steps == 5) {
      top->reset = 0; // De-assert reset
      std::cout << "[" << global_time << "] Releasing reset" << std::endl;
    } else {
      top->reset = 0;
    }

    // --- Stimulus Generation (User Placeholder) ---
    uart_stimulus.update(sim_time_steps, top->reset);
    top->io_i_serial_data = uart_stimulus.get_serial_data();
    // --- Clock Toggle and Evaluation ---
    top->clock = 0; // Falling edge
    top->eval();    // Evaluate combinational logic
    if (tfp)
      tfp->dump(global_time); // Dump VCD at falling edge

    // --- Coverage Update ---
    // No internal try-catch needed here as update() has one
    coverage_collector.update();

    // Advance time for rising edge
    contextp->time(sim_time_steps * 10 +
                   5); // Time for rising edge (mid-period)
    global_time = contextp->time();

    top->clock = 1; // Rising edge
    top->eval();    // Evaluate sequential logic and combinational logic again
    if (tfp)
      tfp->dump(global_time); // Dump VCD at rising edge

    sim_time_steps++; // Increment logical time step count
  }

  // Set final time for waveform dump if needed
  contextp->time(sim_time_steps * 10);
  global_time = contextp->time();

  std::cout << "Simulation finished @ sim_time_steps = " << sim_time_steps
            << " (Verilator time = " << global_time << ")" << std::endl;

  // --- Finalization ---
  top->final(); // Final model cleanup

  // Close VCD trace file
  if (tfp) {
    tfp->close();
  }

  // Generate and Print Coverage Report (Console)
  try {
    coverage_collector.report();
  } catch (const std::exception &e) {
    std::cerr << "Error during console coverage report generation: " << e.what()
              << std::endl;
  }

  // Export Coverage Report to JSON File
  try {
    coverage_collector.exportJson("coverage_report.json");
  } catch (const std::exception &e) {
    std::cerr << "Error during JSON coverage report export: " << e.what()
              << std::endl;
  }

  // Check for Verilator errors or $finish
  if (contextp->gotFinish()) {
    std::cout << "Verilator simulation stopped by $finish" << std::endl;
  }

  return 0;
}
// --- END GENERATED sim_main.cpp ---
