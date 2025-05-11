cmake_minimum_required(VERSION 3.20)
project(emulator)
include_directories(/home/canxin/git/rocket-chip/src/main/resources/csrc)
# plusarg is here
include_directories(/home/canxin/git/rocket-chip/out/emulator/freechips.rocketchip.system.TestHarness/freechips.rocketchip.system.DefaultConfig/generator/elaborate.dest)
link_directories(/opt/riscv/lib)
include_directories(/opt/riscv/include)

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_COMPILER "gcc")
set(CMAKE_CXX_COMPILER "g++")
set(CMAKE_CXX_FLAGS
"${CMAKE_CXX_FLAGS} -DVERILATOR -DTEST_HARNESS=VTestHarness -include VTestHarness.h -include verilator.h -include /home/canxin/git/rocket-chip/out/emulator/freechips.rocketchip.system.TestHarness/freechips.rocketchip.system.DefaultConfig/generator/elaborate.dest/freechips.rocketchip.system.DefaultConfig.plusArgs")
set(THREADS_PREFER_PTHREAD_FLAG ON)

find_package(verilator)
find_package(Threads)

add_executable(emulator
/home/canxin/git/chisel_coverage_tool/output_generated/rocket_test_harness/emulator/SimDTM.cc
/home/canxin/git/chisel_coverage_tool/output_generated/rocket_test_harness/emulator/SimJTAG.cc
/home/canxin/git/chisel_coverage_tool/output_generated/rocket_test_harness/emulator/debug_rob.cc
/home/canxin/git/chisel_coverage_tool/output_generated/rocket_test_harness/emulator/emulator.cc
/home/canxin/git/chisel_coverage_tool/output_generated/rocket_test_harness/emulator/remote_bitbang.cc
)

target_link_libraries(emulator PRIVATE ${CMAKE_THREAD_LIBS_INIT})
target_link_libraries(emulator PRIVATE fesvr)
verilate(emulator
  SOURCES
/home/canxin/git/chisel_coverage_tool/output_generated/rocket_test_harness/TestHarness.sv
  TOP_MODULE TestHarness
  PREFIX VTestHarness
  VERILATOR_ARGS -Wno-UNOPTTHREADS -Wno-STMTDLY -Wno-LATCH -Wno-WIDTH --no-timing --x-assign unique +define+PRINTF_COND=\$c\(\"verbose\",\"&&\",\"done_reset\"\) +define+STOP_COND=\$c\(\"done_reset\"\) +define+RANDOMIZE_GARBAGE_ASSIGN --output-split 20000 --output-split-cfuncs 20000 --max-num-width 1048576 -I/home/canxin/git/rocket-chip/src/main/resources/vsrc
)
