// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUART_tx.h for the primary calling header

#include "VUART_tx__pch.h"
#include "VUART_tx__Syms.h"
#include "VUART_tx___024root.h"

void VUART_tx___024root___ctor_var_reset(VUART_tx___024root* vlSelf);

VUART_tx___024root::VUART_tx___024root(VUART_tx__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VUART_tx___024root___ctor_var_reset(this);
}

void VUART_tx___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VUART_tx___024root::~VUART_tx___024root() {
}
