// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VUART_rx__pch.h"
#include "VUART_rx.h"
#include "VUART_rx___024root.h"

// FUNCTIONS
VUART_rx__Syms::~VUART_rx__Syms()
{
}

VUART_rx__Syms::VUART_rx__Syms(VerilatedContext* contextp, const char* namep, VUART_rx* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(28);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
