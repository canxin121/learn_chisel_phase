// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComplexExample.h for the primary calling header

#include "VComplexExample__pch.h"
#include "VComplexExample__Syms.h"
#include "VComplexExample___024root.h"

void VComplexExample___024root___ctor_var_reset(VComplexExample___024root* vlSelf);

VComplexExample___024root::VComplexExample___024root(VComplexExample__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VComplexExample___024root___ctor_var_reset(this);
}

void VComplexExample___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VComplexExample___024root::~VComplexExample___024root() {
}
