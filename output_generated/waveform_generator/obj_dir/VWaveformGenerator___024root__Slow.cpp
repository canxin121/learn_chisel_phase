// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VWaveformGenerator.h for the primary calling header

#include "VWaveformGenerator__pch.h"
#include "VWaveformGenerator__Syms.h"
#include "VWaveformGenerator___024root.h"

void VWaveformGenerator___024root___ctor_var_reset(VWaveformGenerator___024root* vlSelf);

VWaveformGenerator___024root::VWaveformGenerator___024root(VWaveformGenerator__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VWaveformGenerator___024root___ctor_var_reset(this);
}

void VWaveformGenerator___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VWaveformGenerator___024root::~VWaveformGenerator___024root() {
}
