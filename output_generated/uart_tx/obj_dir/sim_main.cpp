// --- BEGIN GENERATED sim_main.cpp ---
#include <iostream>
#include <limits>    // For numeric_limits
#include <memory>    // For std::unique_ptr
#include <stdexcept> // For exception handling in main
#include <string>    // For std::string (used by exportJson filename)
#include <vector>    // Include vector for test data sequence

// Include Verilator core headers
#include "verilated.h"
#include "verilated_vcd_c.h" // For VCD tracing

// Include DUT header
#include "VUART_tx.h"

// Include our Coverage Collector header
#include "coverage_collector.h"

// Global simulation time variable required by Verilator for sc_time_stamp()
vluint64_t global_time = 0;

// sc_time_stamp function (required by Verilator)
double sc_time_stamp() {
  return global_time; // Return current simulation time
}

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
  std::unique_ptr<VUART_tx> top;
  try {
    top = std::make_unique<VUART_tx>(contextp.get(), "DUT");
  } catch (const std::exception &e) {
    std::cerr << "FATAL ERROR: Failed to instantiate DUT VUART_tx: " << e.what()
              << std::endl;
    return 1;
  } catch (...) {
    std::cerr << "FATAL ERROR: Unknown error during DUT VUART_tx instantiation."
              << std::endl;
    return 1;
  }

  // Setup VCD tracing
  top->trace(tfp.get(), 99); // Trace 99 levels deep
  try {
    tfp->open("waveform.vcd"); // Open VCD file
    std::cout << "VCD tracing enabled, dumping to waveform.vcd" << std::endl;
  } catch (const std::exception &e) {
    std::cerr << "Warning: Failed to open VCD file waveform.vcd: " << e.what()
              << std::endl;
    tfp.reset(); // Disable tracing if open failed
  }

  // Simulation settings
  vluint64_t sim_time_steps = 0;
  // Allow overriding max simulation time via command line argument
  vluint64_t max_sim_time_steps = 20000; // Increased max simulation time
  if (argc > 1) {
    try {
      // Use std::stoull for unsigned long long parsing
      unsigned long long parsed_time = std::stoull(argv[1]);
      if (parsed_time > std::numeric_limits<vluint64_t>::max()) {
        std::cerr << "Warning: Simulation time argument '" << argv[1]
                  << "' exceeds maximum value. Using default: "
                  << max_sim_time_steps << std::endl;
      } else {
        max_sim_time_steps = static_cast<vluint64_t>(parsed_time);
        std::cout << "Overriding MAX_SIM_TIME_STEPS from command line: "
                  << max_sim_time_steps << std::endl;
      }
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
    } // tfp managed by unique_ptr
    return 1; // Exit on initialization failure
  }

  std::cout << "Starting simulation (MAX_SIM_TIME_STEPS = "
            << max_sim_time_steps << ")" << std::endl;

  // --- Simulation Loop ---
  top->reset = 1; // Assert reset
  top->clock = 0; // Initialize clock

  // --- Test Data Sequence ---
  std::vector<uint8_t> test_data = {0x00, 0xFF, 0xAA, 0x55, 0x01, 0x02, 0x04,
                                    0x08, 0x10, 0x20, 0x40, 0x80, 0xFE, 0xFD,
                                    0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F};
  size_t test_data_index = 0;
  // Testbench state machine
  enum class TbState { IDLE, TRIGGER_HOLD, WAIT_BUSY };
  TbState tb_state = TbState::IDLE;

  try { // Wrap simulation loop in try-catch
    while (sim_time_steps < max_sim_time_steps && !contextp->gotFinish()) {

      // --- Time Management ---
      // Manage time explicitly for clock edges
      contextp->time(
          sim_time_steps * 10 +
          0); // Time for falling edge (e.g., use a 10 unit clock period)
      global_time = contextp->time(); // Update global time

      // --- Reset Logic ---
      if (sim_time_steps <
          5) { // Keep reset for 5 clock cycles (arbitrary number)
        top->reset = 1;
        // Initialize inputs during reset
        top->io_i_tx_trig = 0;
        top->io_i_data = 0;
        test_data_index = 0;      // Reset test data index
        tb_state = TbState::IDLE; // Reset testbench state
      } else if (sim_time_steps == 5) {
        top->reset = 0; // De-assert reset
        std::cout << "[" << global_time << "] Releasing reset" << std::endl;
        top->io_i_tx_trig = 0;    // Ensure trigger is low after reset
        tb_state = TbState::IDLE; // Start in IDLE state after reset
      } else {
        top->reset = 0;
      }

      // --- Stimulus Generation (using state machine) ---
      if (top->reset == 0) {
        switch (tb_state) {
        case TbState::IDLE:
          top->io_i_tx_trig = 0; // Keep trigger low in idle
          // Check if UART is ready and data available
          if (top->io_o_tx_busy == 0 && test_data_index < test_data.size()) {
            // Set data and assert trigger
            top->io_i_data = test_data[test_data_index];
            top->io_i_tx_trig = 1;
            std::cout << "[" << global_time << "] State IDLE: Sending data: 0x"
                      << std::hex << (int)top->io_i_data
                      << " (Index: " << std::dec << test_data_index
                      << "), Asserting io_i_tx_trig" << std::endl;
            test_data_index++;
            tb_state = TbState::TRIGGER_HOLD; // Move to hold state
          }
          break;

        case TbState::TRIGGER_HOLD:
          // Keep trigger asserted for one more cycle
          top->io_i_tx_trig = 1;
          std::cout << "[" << global_time
                    << "] State TRIGGER_HOLD: Holding io_i_tx_trig"
                    << std::endl;
          tb_state = TbState::WAIT_BUSY; // Move to wait state next cycle
          break;

        case TbState::WAIT_BUSY:
          // De-assert trigger
          top->io_i_tx_trig = 0;
          std::cout << "[" << global_time
                    << "] State WAIT_BUSY: De-asserting io_i_tx_trig, waiting "
                       "for busy low"
                    << std::endl;
          // Wait until UART is not busy before going back to IDLE
          if (top->io_o_tx_busy == 0) {
            std::cout << "[" << global_time
                      << "] State WAIT_BUSY: UART idle, returning to TB_IDLE"
                      << std::endl;
            tb_state = TbState::IDLE;
          }
          break;
        }
      } else {
        // Keep trigger low during reset
        top->io_i_tx_trig = 0;
        tb_state = TbState::IDLE; // Ensure state is IDLE during reset
      }

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
  } catch (const std::exception &e) {
    std::cerr << "FATAL ERROR during simulation loop @ time " << global_time
              << ": " << e.what() << std::endl;
    if (tfp) {
      tfp->close();
    }
    return 1; // Indicate simulation error
  } catch (...) {
    std::cerr << "FATAL ERROR: Unknown exception during simulation loop @ time "
              << global_time << "." << std::endl;
    if (tfp) {
      tfp->close();
    }
    return 1; // Indicate simulation error
  }

  // Set final time for waveform dump if needed
  if (!contextp
           ->gotFinish()) { // Avoid setting time if $finish already occurred
    contextp->time(sim_time_steps * 10);
    global_time = contextp->time();
  }

  std::cout << "Simulation finished @ sim_time_steps = " << sim_time_steps
            << " (Verilator time = " << global_time << ")" << std::endl;

  // --- Finalization ---
  try {
    top->final(); // Final model cleanup
  } catch (const std::exception &e) {
    std::cerr << "Warning: Exception during top->final(): " << e.what()
              << std::endl;
  }

  // Close VCD trace file
  if (tfp) {
    try {
      tfp->close();
    } catch (const std::exception &e) {
      std::cerr << "Warning: Exception during VCD trace close: " << e.what()
                << std::endl;
    }
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
