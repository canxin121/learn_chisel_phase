// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VREGMODULE__SYMS_H_
#define VERILATED_VREGMODULE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VRegModule.h"

// INCLUDE MODULE CLASSES
#include "VRegModule___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VRegModule__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VRegModule* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VRegModule___024root           TOP;

    // CONSTRUCTORS
    VRegModule__Syms(VerilatedContext* contextp, const char* namep, VRegModule* modelp);
    ~VRegModule__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
