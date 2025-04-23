// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComplexExample.h for the primary calling header

#include "VComplexExample__pch.h"
#include "VComplexExample__Syms.h"
#include "VComplexExample___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VComplexExample___024root___dump_triggers__ico(VComplexExample___024root* vlSelf);
#endif  // VL_DEBUG

void VComplexExample___024root___eval_triggers__ico(VComplexExample___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval_triggers__ico\n"); );
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VComplexExample___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VComplexExample___024root___dump_triggers__act(VComplexExample___024root* vlSelf);
#endif  // VL_DEBUG

void VComplexExample___024root___eval_triggers__act(VComplexExample___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval_triggers__act\n"); );
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clock) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VComplexExample___024root___dump_triggers__act(vlSelf);
    }
#endif
}
