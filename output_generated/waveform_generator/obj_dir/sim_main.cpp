// --- BEGIN GENERATED sim_main.cpp ---
#include <iostream>
#include <memory> // For std::unique_ptr
#include <string> // For std::string (used by exportJson filename)

// Include Verilator core headers
#include "verilated.h"
#include "verilated_vcd_c.h" // For VCD tracing

// Include DUT header
#include "VWaveformGenerator.h"

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
  std::unique_ptr<VWaveformGenerator> top;
  try {
    top = std::make_unique<VWaveformGenerator>(contextp.get(), "DUT");
  } catch (const std::exception &e) {
    std::cerr << "FATAL ERROR: Failed to instantiate DUT VWaveformGenerator: "
              << e.what() << std::endl;
    return 1;
  } catch (...) {
    std::cerr << "FATAL ERROR: Unknown error during DUT VWaveformGenerator "
                 "instantiation."
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
  vluint64_t max_sim_time_steps = 1000000;

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

      // --- Stimulus Generation (User Placeholder) ---
      // Drive inputs only when not in reset
      if (top->reset == 0) {
        // Example: Cycle through wave types every 50 steps
        if ((sim_time_steps - 5) % 50 ==
            0) { // Start cycling after reset release (step 5)
          top->io_waveType = (top->io_waveType + 1) & 0x3; // Cycle 0, 1, 2, 3
          std::cout << "[" << global_time << "] Changing io_waveType to "
                    << (int)top->io_waveType << std::endl;
        }

        // Example: Change frequency control every 200 steps
        if ((sim_time_steps - 5) % 200 ==
            10) { // Offset to avoid clash with waveType change
          top->io_freqCtrl = (top->io_freqCtrl + 51) &
                             0xFFFF; // Increment freqCtrl, wrap around
          std::cout << "[" << global_time << "] Changing io_freqCtrl to "
                    << top->io_freqCtrl << std::endl;
        }

        // Example: Change phase offset every 300 steps
        if ((sim_time_steps - 5) % 300 == 20) { // Offset further
          top->io_phaseOffset = (top->io_phaseOffset + 1000) &
                                0xFFFF; // Increment phaseOffset, wrap around
          std::cout << "[" << global_time << "] Changing io_phaseOffset to "
                    << top->io_phaseOffset << std::endl;
        }

      } else {
        // Default values during reset (optional, depends on design needs)
        top->io_waveType = 0;
        top->io_freqCtrl = 100;  // Example initial value
        top->io_phaseOffset = 0; // Example initial value
      }
      // --- End Stimulus Generation ---

      // --- Clock Toggle and Evaluation ---
      top->clock = 0; // Falling edge
      top->eval();    // Evaluate combinational logic
      if (tfp)
        tfp->dump(global_time); // Dump VCD at falling edge

      // Advance time for rising edge
      contextp->time(sim_time_steps * 10 +
                     5); // Time for rising edge (mid-period)
      global_time = contextp->time();

      top->clock = 1; // Rising edge
      top->eval();    // Evaluate sequential logic and combinational logic again
      if (tfp)
        tfp->dump(global_time); // Dump VCD at rising edge

      // --- Coverage Update ---
      if (top->reset == 0) { // Only update coverage when not in reset
        // No internal try-catch needed here as update() has one
        coverage_collector.update();
      }

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
