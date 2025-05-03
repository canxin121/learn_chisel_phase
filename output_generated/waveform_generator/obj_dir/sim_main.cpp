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
  vluint64_t max_sim_time_steps = 10000;

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
      // TODO: Add stimulus generation logic here based on sim_time_steps or
      // global_time Example: Toggle an input every 20 steps after reset release
      // if (top->reset == 0 && (sim_time_steps % 20 == 0)) {
      //    // Assuming an input 'io_some_input' exists and is bool/CData
      //    // top->io_some_input = !top->io_some_input;
      // }

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
