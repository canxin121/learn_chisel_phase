// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUART_tx.h for the primary calling header

#include "VUART_tx__pch.h"
#include "VUART_tx__Syms.h"
#include "VUART_tx___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VUART_tx___024root___dump_triggers__ico(VUART_tx___024root* vlSelf);
#endif  // VL_DEBUG

void VUART_tx___024root___eval_triggers__ico(VUART_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___eval_triggers__ico\n"); );
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VUART_tx___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VUART_tx___024root___dump_triggers__act(VUART_tx___024root* vlSelf);
#endif  // VL_DEBUG

void VUART_tx___024root___eval_triggers__act(VUART_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___eval_triggers__act\n"); );
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clock) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VUART_tx___024root___dump_triggers__act(vlSelf);
    }
#endif
}
