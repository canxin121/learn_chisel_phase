// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTESTHARNESS__DPI_H_
#define VERILATED_VTESTHARNESS__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at TestHarness.sv:314392:29
    extern int debug_tick(svBit* debug_req_valid, svBit debug_req_ready, int* debug_req_bits_addr, int* debug_req_bits_op, int* debug_req_bits_data, svBit debug_resp_valid, svBit* debug_resp_ready, int debug_resp_bits_resp, int debug_resp_bits_data);

#ifdef __cplusplus
}
#endif

#endif  // guard
