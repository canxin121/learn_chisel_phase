// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExampleRocketSystem.h for the primary calling header

#include "VExampleRocketSystem__pch.h"
#include "VExampleRocketSystem__Syms.h"
#include "VExampleRocketSystem___024root.h"

void VExampleRocketSystem___024root___ctor_var_reset(VExampleRocketSystem___024root* vlSelf);

VExampleRocketSystem___024root::VExampleRocketSystem___024root(VExampleRocketSystem__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VExampleRocketSystem___024root___ctor_var_reset(this);
}

void VExampleRocketSystem___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VExampleRocketSystem___024root::~VExampleRocketSystem___024root() {
}
