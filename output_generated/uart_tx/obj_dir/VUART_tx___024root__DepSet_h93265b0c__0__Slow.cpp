// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUART_tx.h for the primary calling header

#include "VUART_tx__pch.h"
#include "VUART_tx__Syms.h"
#include "VUART_tx___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VUART_tx___024root___dump_triggers__stl(VUART_tx___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VUART_tx___024root___eval_triggers__stl(VUART_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VUART_tx___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
