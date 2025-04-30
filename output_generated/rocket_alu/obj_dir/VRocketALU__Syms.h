// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VROCKETALU__SYMS_H_
#define VERILATED_VROCKETALU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VRocketALU.h"

// INCLUDE MODULE CLASSES
#include "VRocketALU___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VRocketALU__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VRocketALU* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VRocketALU___024root           TOP;

    // CONSTRUCTORS
    VRocketALU__Syms(VerilatedContext* contextp, const char* namep, VRocketALU* modelp);
    ~VRocketALU__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
