// --- BEGIN GENERATED sim_main.cpp ---
#include <iostream>
#include <memory> // For std::unique_ptr
#include <string> // For std::string (used by exportJson filename)
#include <random> // For random stimulus
#include <limits> // For numeric limits

// Include Verilator core headers
#include "verilated.h"
#include "verilated_vcd_c.h" // For VCD tracing

// Include DUT header
#include "VRocketALU.h"

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
  std::unique_ptr<VRocketALU> top;
  try {
    top = std::make_unique<VRocketALU>(contextp.get(), "DUT");
  } catch (const std::exception &e) {
    std::cerr << "FATAL ERROR: Failed to instantiate DUT VRocketALU: "
              << e.what() << std::endl;
    return 1;
  } catch (...) {
    std::cerr
        << "FATAL ERROR: Unknown error during DUT VRocketALU instantiation."
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
  // Allow overriding max simulation time
  vluint64_t max_sim_time_steps = 10000; // Keep this reasonably high for coverage

  // --- Random Number Generation Setup ---
  std::mt19937_64 rng(contextp->randSeed()); // Use Verilator's random seed
  std::uniform_int_distribution<uint64_t> dist64(0, std::numeric_limits<uint64_t>::max());
  std::uniform_int_distribution<uint8_t> dist_fn(0, 15); // Assuming io_fn is 4 bits (0-15)
  std::uniform_int_distribution<uint8_t> dist_dw(0, 1);  // Assuming io_dw is 1 bit

  // Create and initialize Coverage Collector
  CoverageCollector coverage_collector;
  try {
    coverage_collector.initialize(top.get());
  } catch (const std::exception &e) {
    std::cerr << "Fatal Error during CoverageCollector initialization: "
              << e.what() << std::endl;
    if (tfp) {
      tfp->close();
    }         // tfp managed by unique_ptr
    return 1; // Exit on initialization failure
  }

  std::cout << "Starting simulation (MAX_SIM_TIME_STEPS = "
            << max_sim_time_steps << ")" << std::endl;

  // --- Simulation Loop ---
  top->reset = 1; // Assert reset
  top->clock = 0; // Initialize clock
  // Initialize inputs to known values
  top->io_in1 = 0;
  top->io_in2 = 0;
  top->io_fn = 0;
  top->io_dw = 0;

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
      } else if (sim_time_steps == 5) {
        top->reset = 0; // De-assert reset
        std::cout << "[" << global_time << "] Releasing reset" << std::endl;
      } else {
        top->reset = 0;
      }

      // --- Stimulus Generation ---
      if (top->reset == 0) { // Apply stimulus only after reset
          // Define phases based on simulation time
          const vluint64_t reset_end_time = 5; // Matches reset logic
          const vluint64_t directed_cycles_per_fn = 20; // Cycles per function code
          const int num_fn_codes = 16; // Assuming 4-bit io_fn
          const vluint64_t directed_phase_end = reset_end_time + (num_fn_codes * directed_cycles_per_fn);

          if (sim_time_steps < directed_phase_end) {
              // --- Directed Test Phase ---
              vluint64_t time_in_phase = sim_time_steps - reset_end_time;
              uint8_t current_fn = (time_in_phase / directed_cycles_per_fn) % num_fn_codes;
              uint64_t cycle_within_fn = time_in_phase % directed_cycles_per_fn;

              top->io_fn = current_fn;

              // Apply different operands and dw based on cycle within the function test
              switch (cycle_within_fn) {
                  case 0:  top->io_in1 = 0; top->io_in2 = 0; top->io_dw = 0; break;
                  case 1:  top->io_in1 = 0; top->io_in2 = 0; top->io_dw = 1; break;
                  case 2:  top->io_in1 = 1; top->io_in2 = 0; top->io_dw = 0; break;
                  case 3:  top->io_in1 = 0; top->io_in2 = 1; top->io_dw = 1; break;
                  case 4:  top->io_in1 = 1; top->io_in2 = 1; top->io_dw = 0; break;
                  case 5:  top->io_in1 = 1; top->io_in2 = 1; top->io_dw = 1; break;
                  case 6:  top->io_in1 = std::numeric_limits<uint64_t>::max(); top->io_in2 = 0; top->io_dw = 0; break;
                  case 7:  top->io_in1 = 0; top->io_in2 = std::numeric_limits<uint64_t>::max(); top->io_dw = 1; break;
                  case 8:  top->io_in1 = std::numeric_limits<uint64_t>::max(); top->io_in2 = std::numeric_limits<uint64_t>::max(); top->io_dw = 0; break;
                  case 9:  top->io_in1 = std::numeric_limits<uint64_t>::max(); top->io_in2 = std::numeric_limits<uint64_t>::max(); top->io_dw = 1; break;
                  case 10: top->io_in1 = 0xAAAAAAAAAAAAAAAA; top->io_in2 = 0x5555555555555555; top->io_dw = 0; break;
                  case 11: top->io_in1 = 0x5555555555555555; top->io_in2 = 0xAAAAAAAAAAAAAAAA; top->io_dw = 1; break;
                  case 12: top->io_in1 = (1ULL << 31); top->io_in2 = (1ULL << 32); top->io_dw = 0; break;
                  case 13: top->io_in1 = (1ULL << 32); top->io_in2 = (1ULL << 31); top->io_dw = 1; break;
                  case 14: top->io_in1 = dist64(rng); top->io_in2 = dist64(rng); top->io_dw = 0; break; // Add some randomness even in directed phase
                  case 15: top->io_in1 = dist64(rng); top->io_in2 = dist64(rng); top->io_dw = 1; break;
                  // Add more specific cases if needed, up to directed_cycles_per_fn-1
                  default: // Fill remaining cycles with random data for this fn
                      top->io_in1 = dist64(rng);
                      top->io_in2 = dist64(rng);
                      top->io_dw = dist_dw(rng);
                      break;
              }
          } else {
              // --- Random Test Phase ---
              // Change inputs randomly every cycle after directed phase
              top->io_in1 = dist64(rng);
              top->io_in2 = dist64(rng);
              top->io_fn = dist_fn(rng);
              top->io_dw = dist_dw(rng);
          }
      } else {
          // Keep inputs stable during reset
          top->io_in1 = 0;
          top->io_in2 = 0;
          top->io_fn = 0;
          top->io_dw = 0;
      }
      // --- End of Stimulus Generation ---

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
           ->gotFinish()) { // Avoid setting time if $$finish already occurred
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

  // Check for Verilator errors or $$finish
  if (contextp->gotFinish()) {
    std::cout << "Verilator simulation stopped by $$finish" << std::endl;
  }

  return 0;
}
// --- END GENERATED sim_main.cpp ---
