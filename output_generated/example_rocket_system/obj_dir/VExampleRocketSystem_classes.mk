# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VExampleRocketSystem.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VExampleRocketSystem \
	VExampleRocketSystem___024root__DepSet_h8b3cbfd1__0 \
	VExampleRocketSystem___024root__DepSet_h8b3cbfd1__1 \
	VExampleRocketSystem___024root__DepSet_h8b3cbfd1__2 \
	VExampleRocketSystem___024root__DepSet_h8b3cbfd1__3 \
	VExampleRocketSystem___024root__DepSet_h8b3cbfd1__4 \
	VExampleRocketSystem___024root__DepSet_h8b3cbfd1__5 \
	VExampleRocketSystem___024root__DepSet_h8b3cbfd1__6 \
	VExampleRocketSystem___024root__DepSet_h8b3cbfd1__7 \
	VExampleRocketSystem___024root__DepSet_h8b3cbfd1__8 \
	VExampleRocketSystem___024root__DepSet_h8b3cbfd1__9 \
	VExampleRocketSystem___024root__DepSet_h771ce12b__0 \
	VExampleRocketSystem___024root__DepSet_h771ce12b__1 \
	VExampleRocketSystem___024root__DepSet_h771ce12b__2 \
	VExampleRocketSystem___024root__DepSet_h771ce12b__3 \
	VExampleRocketSystem___024root__DepSet_h771ce12b__4 \
	VExampleRocketSystem___024root__DepSet_h771ce12b__5 \
	VExampleRocketSystem___024root__DepSet_h771ce12b__6 \
	VExampleRocketSystem___024root__DepSet_h771ce12b__7 \
	VExampleRocketSystem___024root__DepSet_h771ce12b__8 \
	VExampleRocketSystem___024root__DepSet_h771ce12b__9 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VExampleRocketSystem__ConstPool_0 \
	VExampleRocketSystem___024root__Slow \
	VExampleRocketSystem___024root__DepSet_h8b3cbfd1__0__Slow \
	VExampleRocketSystem___024root__DepSet_h771ce12b__0__Slow \
	VExampleRocketSystem___024root__DepSet_h771ce12b__1__Slow \
	VExampleRocketSystem___024root__DepSet_h771ce12b__2__Slow \
	VExampleRocketSystem___024root__DepSet_h771ce12b__3__Slow \
	VExampleRocketSystem___024root__DepSet_h771ce12b__4__Slow \
	VExampleRocketSystem___024root__DepSet_h771ce12b__5__Slow \
	VExampleRocketSystem___024root__DepSet_h771ce12b__6__Slow \
	VExampleRocketSystem___024root__DepSet_h771ce12b__7__Slow \
	VExampleRocketSystem___024root__DepSet_h771ce12b__8__Slow \
	VExampleRocketSystem___024root__DepSet_h771ce12b__9__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VExampleRocketSystem__Trace__0 \
	VExampleRocketSystem__Trace__1 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VExampleRocketSystem__Syms \
	VExampleRocketSystem__Trace__0__Slow \
	VExampleRocketSystem__TraceDecls__0__Slow \
	VExampleRocketSystem__Trace__1__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
