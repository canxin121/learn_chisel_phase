// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegModule.h for the primary calling header

#include "VRegModule__pch.h"
#include "VRegModule__Syms.h"
#include "VRegModule___024root.h"

void VRegModule___024root___ctor_var_reset(VRegModule___024root* vlSelf);

VRegModule___024root::VRegModule___024root(VRegModule__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRegModule___024root___ctor_var_reset(this);
}

void VRegModule___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VRegModule___024root::~VRegModule___024root() {
}
