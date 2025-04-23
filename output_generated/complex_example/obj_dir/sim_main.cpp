// --- BEGIN GENERATED sim_main.cpp ---
#include <iostream>
#include <memory> // For std::unique_ptr
#include <string> // For std::string (used by exportJson filename)

// Include Verilator core headers
#include "verilated.h"
#include "verilated_vcd_c.h" // For VCD tracing

// Include DUT header
#include "VComplexExample.h"

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
  std::unique_ptr<VComplexExample> top;
  try {
    top = std::make_unique<VComplexExample>(contextp.get(), "DUT");
  } catch (const std::exception &e) {
    std::cerr << "FATAL ERROR: Failed to instantiate DUT VComplexExample: "
              << e.what() << std::endl;
    return 1;
  } catch (...) {
    std::cerr << "FATAL ERROR: Unknown error during DUT VComplexExample "
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
    } // tfp managed by unique_ptr
    return 1; // Exit on initialization failure
  }

  std::cout << "Starting simulation (MAX_SIM_TIME_STEPS = "
            << max_sim_time_steps << ")" << std::endl;

  // --- Simulation Loop ---
  top->reset = 1; // Assert reset
  top->clock = 0; // Initialize clock
  // Initialize inputs during reset
  top->io_topInA = 0;
  top->io_topInB = 0;
  top->io_topSel = 0;

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
        // Keep inputs initialized during reset
        top->io_topInA = 0;
        top->io_topInB = 0;
        top->io_topSel = 0;
      } else if (sim_time_steps == 5) {
        top->reset = 0; // De-assert reset
        std::cout << "[" << global_time << "] Releasing reset" << std::endl;
      } else {
        top->reset = 0;
      }

      // --- Stimulus Generation ---
      if (top->reset == 0) {
        // Simple stimulus based on time steps to cover different scenarios
        uint64_t phase_time = sim_time_steps - 5; // Time since reset release

        // Phase 1: Cycle through io_topSel with fixed inputs (A=10, B=5)
        if (phase_time < 40) {
          top->io_topInA = 10;
          top->io_topInB = 5;
          top->io_topSel = (phase_time / 10) % 4;
          if (phase_time % 10 == 0) {
            std::cout << "[" << global_time
                      << "] Stimulus: Phase 1, Sel=" << (int)top->io_topSel
                      << ", A=10, B=5" << std::endl;
          }
        }
        // Phase 2: Vary inputs for io_topSel = 0 (Output = stateReg)
        else if (phase_time < 100) {
          top->io_topSel = 0;
          top->io_topInA = (phase_time * 3) % 256;
          top->io_topInB = (phase_time * 5 + 50) % 256;
          if (phase_time == 40)
            std::cout << "[" << global_time
                      << "] Stimulus: Phase 2, Sel=0, Varying A, B"
                      << std::endl;
        }
        // Phase 3: Vary inputs for io_topSel = 1 (Output = stateReg+1,
        // stateReg+=A+B)
        else if (phase_time < 200) {
          top->io_topSel = 1;
          top->io_topInA = (phase_time - 100) % 256;
          top->io_topInB = (255 - (phase_time - 100)) % 256;
          if (phase_time == 100)
            std::cout << "[" << global_time
                      << "] Stimulus: Phase 3, Sel=1, Varying A, B (Sum)"
                      << std::endl;
          // Try to make stateReg+1 > 100
          if (phase_time == 150)
            top->io_topInA = 120; // Cause stateReg to increase potentially
          if (phase_time == 151)
            top->io_topInB = 140;
        }
        // Phase 4: Vary inputs for io_topSel = 2 (Output = B, stateReg+=A-B)
        else if (phase_time < 300) {
          top->io_topSel = 2;
          top->io_topInA = (phase_time * 2) % 256;
          top->io_topInB = (phase_time - 200 + 10) % 256;
          if (phase_time == 200)
            std::cout << "[" << global_time
                      << "] Stimulus: Phase 4, Sel=2, Varying A, B (Diff)"
                      << std::endl;
          // Try to make B > 100
          if (phase_time == 250)
            top->io_topInB = 110;
        }
        // Phase 5: Vary inputs for io_topSel = 3 (Output = A, stateReg+=A&B)
        else if (phase_time < 400) {
          top->io_topSel = 3;
          top->io_topInA = (phase_time - 300 + 20) % 256;
          top->io_topInB = ((phase_time - 300) * 7) % 256;
          if (phase_time == 300)
            std::cout << "[" << global_time
                      << "] Stimulus: Phase 5, Sel=3, Varying A, B (And)"
                      << std::endl;
          // Try to make A > 100
          if (phase_time == 350)
            top->io_topInA = 180;
        }
        // Phase 6: Boundary values and specific targets
        else if (phase_time < 500) {
          if (phase_time == 400)
            std::cout << "[" << global_time
                      << "] Stimulus: Phase 6, Boundary/Specific" << std::endl;
          switch ((phase_time - 400) % 8) {
          case 0:
            top->io_topInA = 0;
            top->io_topInB = 0;
            top->io_topSel = 1;
            break;
          case 1:
            top->io_topInA = 255;
            top->io_topInB = 255;
            top->io_topSel = 1;
            break;
          case 2:
            top->io_topInA = 100;
            top->io_topInB = 50;
            top->io_topSel = 2;
            break; // A-B
          case 3:
            top->io_topInA = 50;
            top->io_topInB = 100;
            top->io_topSel = 2;
            break; // A-B (underflow)
          case 4:
            top->io_topInA = 0xFF;
            top->io_topInB = 0x0F;
            top->io_topSel = 3;
            break; // A&B
          case 5:
            top->io_topInA = 150;
            top->io_topInB = 10;
            top->io_topSel = 3;
            break; // Output A > 100
          case 6:
            top->io_topInA = 10;
            top->io_topInB = 120;
            top->io_topSel = 2;
            break; // Output B > 100
          case 7:
            top->io_topInA = 80;
            top->io_topInB = 90;
            top->io_topSel = 1;
            break; // A+B > 100 -> stateReg potentially > 100
          }
        }
        // Phase 7: Randomized inputs
        else {
          if (phase_time == 500)
            std::cout << "[" << global_time << "] Stimulus: Phase 7, Randomized"
                      << std::endl;
          top->io_topInA = rand() % 256;
          top->io_topInB = rand() % 256;
          top->io_topSel = rand() % 4;
        }
      }
      // --- End Stimulus Generation ---

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
