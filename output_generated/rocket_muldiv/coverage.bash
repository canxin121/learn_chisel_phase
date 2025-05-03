#!/bin/bash

# Default top module name, overridden by command line argument if provided
DEFAULT_TOP_MODULE="MulDiv"

show_help() {
    echo "Usage: $0 {generate|run|help} [TopModule]"
    echo "  generate: Run verilator to generate C++ code (compiles DUT)."
    echo "            Requires .sv and sim_main.cpp in the current directory."
    echo "            Creates obj_dir."
    echo "  run:      Build (if needed) and execute the simulation."
    echo "            Requires obj_dir to exist (run generate first)."
    echo "            Runs the executable from within obj_dir."
    echo "  help:     Show this help message."
    echo "  [TopModule]: Optional. The name of the top module (default: $DEFAULT_TOP_MODULE)."
    echo "             Must match the .sv filename (e.g., MyModule for MyModule.sv)."
}

# Function to run Verilator for code generation
generate_step() {
    local module_name=$1
    echo "--- Generating C++ simulation sources for $module_name ---"

    # Check if required source files exist
    if [ ! -f "$module_name.sv" ]; then
        echo "Error: SystemVerilog file '${module_name}.sv' not found in current directory."
        exit 1
    fi
     # Check for sim_main.cpp inside obj_dir, as it's now placed there
    if [ ! -f "obj_dir/sim_main.cpp" ]; then
        echo "Error: C++ testbench 'obj_dir/sim_main.cpp' not found."
        echo "       Ensure it was generated correctly in the 'obj_dir' subdirectory."
        exit 1
    fi
     # Check for coverage_collector.h inside obj_dir
    if [ ! -f "obj_dir/coverage_collector.h" ]; then
        echo "Error: Coverage header 'obj_dir/coverage_collector.h' not found."
        echo "       Ensure it was generated correctly in the 'obj_dir' subdirectory."
        exit 1
    fi


    # Run Verilator:
    # --cc: Generate C++ output
    # --trace: Enable waveform tracing (VCD)
    # <module_name>.sv: Input Verilog/SystemVerilog file
    # --exe sim_main.cpp: Link with this C++ file to create executable
    # --timing: Enable timing simulation features if needed (may require more setup)
    # -Iobj_dir: Tell Verilator to look for includes (like coverage_collector.h) in obj_dir
    # --top-module <module_name>: Explicitly specify the top module
    # --Mdir obj_dir: Specify the output directory for generated files
    # sim_main.cpp path needs to be relative to the execution directory (where this script runs)
    verilator --cc --trace ${module_name}.sv --exe obj_dir/sim_main.cpp --timing -Iobj_dir --top-module ${module_name} --Mdir obj_dir

    local verilator_status=$?
    if [ $verilator_status -ne 0 ]; then
        echo "Error: Verilator C++ code generation failed for $module_name (Exit code: $verilator_status)."
        exit 1
    fi
    echo "--- Verilator C++ generation complete for $module_name (Output in obj_dir) ---"
}

# Function to build the executable using make
build_step() {
    local module_name=$1
    echo "--- Building simulation executable for $module_name ---"

    # Check if obj_dir exists (should be created by generate_step)
    if [ ! -d "obj_dir" ]; then
        echo "Error: Output directory 'obj_dir' not found."
        echo "       Run the 'generate' step first or ensure Verilator ran successfully."
        exit 1
    fi
    # Check if the Verilator makefile exists in obj_dir
    if [ ! -f "obj_dir/V${module_name}.mk" ]; then
        echo "Error: Verilator makefile 'obj_dir/V${module_name}.mk' not found."
        echo "       Ensure the 'generate' step completed successfully."
        exit 1
    fi

    # Change into obj_dir to run make
    pushd obj_dir > /dev/null
    if [ $? -ne 0 ]; then
        echo "Error: Failed to change directory to obj_dir."
        exit 1
    fi

    # Run make using the Verilator-generated makefile
    # The target is typically V<module_name>
    echo "Running make in obj_dir..."
    make -j -f V${module_name}.mk V${module_name}
    local make_status=$?

    # Change back to the original directory
    popd > /dev/null

    if [ $make_status -ne 0 ]; then
        echo "Error: Build process (make) failed for $module_name (Exit code: $make_status)."
        exit 1
    fi
    echo "--- Build complete for $module_name (Executable in obj_dir) ---"
}

# Function to run the simulation executable
run_step() {
    local module_name=$1
    # Ensure the executable is built before running
    build_step "$module_name"

    echo "--- Running simulation for $module_name ---"
    local executable_path_win="obj_dir/V${module_name}.exe"
    local executable_path_nix="obj_dir/V${module_name}"

    # Check if the executable exists (either .exe for Windows or no extension for Linux/macOS)
    if [ ! -f "$executable_path_nix" ] && [ ! -f "$executable_path_win" ]; then
        echo "Error: Simulation executable V${module_name} (or .exe) not found in obj_dir after build."
        echo "       Ensure the 'build' step completed successfully."
        exit 1
    fi

    # Change into obj_dir to run the simulation
    # This is often necessary because the executable might expect related files (like VCD) there
    pushd obj_dir > /dev/null
    if [ $? -ne 0 ]; then
        echo "Error: Failed to change directory to obj_dir for execution."
        exit 1
    fi

    echo "Executing simulation..."
    local run_status=0
    if [ -f "V${module_name}.exe" ]; then
        ./V${module_name}.exe
        run_status=$?
    elif [ -f "V${module_name}" ]; then
        ./V${module_name}
        run_status=$?
    else
        echo "Internal Error: Could not find executable V${module_name} or V${module_name}.exe inside obj_dir."
        run_status=1
    fi

    # Change back to the original directory
    popd > /dev/null

    if [ $run_status -ne 0 ]; then
        echo "Error: Simulation run failed for $module_name (Exit code: $run_status)."
        exit 1
    fi
    echo "--- Simulation run complete for $module_name ---"
    echo "--- Coverage report generated: coverage_report.json ---"
    echo "--- Waveform file generated: obj_dir/waveform.vcd ---"

}

# --- Main Script Logic ---

# Get action (generate, run, help) and optional top module name from arguments
ACTION=$1
# Use provided TopModule name, otherwise use the default
TOP_MODULE=${2:-$DEFAULT_TOP_MODULE}

# Validate action
if [ -z "$ACTION" ] || [ "$ACTION" == "help" ]; then
    show_help
    exit 0
fi

# Execute the requested action
case "$ACTION" in
    generate)
        generate_step "$TOP_MODULE"
        ;;
    run)
        run_step "$TOP_MODULE"
        ;;
    *)
        echo "Error: Invalid action '$ACTION'."
        show_help
        exit 1
        ;;
esac

echo "--- Action '$ACTION' completed successfully for $TOP_MODULE ---"
exit 0
