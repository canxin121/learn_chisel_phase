// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUART_rx.h for the primary calling header

#include "VUART_rx__pch.h"
#include "VUART_rx__Syms.h"
#include "VUART_rx___024root.h"

void VUART_rx___024root___ctor_var_reset(VUART_rx___024root* vlSelf);

VUART_rx___024root::VUART_rx___024root(VUART_rx__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VUART_rx___024root___ctor_var_reset(this);
}

void VUART_rx___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VUART_rx___024root::~VUART_rx___024root() {
}
