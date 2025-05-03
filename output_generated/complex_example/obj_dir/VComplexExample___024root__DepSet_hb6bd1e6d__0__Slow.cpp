// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComplexExample.h for the primary calling header

#include "VComplexExample__pch.h"
#include "VComplexExample___024root.h"

VL_ATTR_COLD void VComplexExample___024root___eval_static(VComplexExample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval_static\n"); );
}

VL_ATTR_COLD void VComplexExample___024root___eval_initial(VComplexExample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
}

VL_ATTR_COLD void VComplexExample___024root___eval_final(VComplexExample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VComplexExample___024root___dump_triggers__stl(VComplexExample___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VComplexExample___024root___eval_phase__stl(VComplexExample___024root* vlSelf);

VL_ATTR_COLD void VComplexExample___024root___eval_settle(VComplexExample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VComplexExample___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("ComplexExample.sv", 55, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VComplexExample___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VComplexExample___024root___dump_triggers__stl(VComplexExample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VComplexExample___024root___stl_sequent__TOP__0(VComplexExample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->_rs___05Fs0 = vlSelf->ComplexExample__DOT__sub__DOT__stateReg;
    vlSelf->_rs___05Fs1 = vlSelf->ComplexExample__DOT__anotherSub__DOT__delayedIn;
    vlSelf->_cp___05Fs0 = (0U == (IData)(vlSelf->io_topSel));
    vlSelf->_cp___05Fs1 = (1U == (IData)(vlSelf->io_topSel));
    vlSelf->_cp___05Fs2 = (2U == (IData)(vlSelf->io_topSel));
    vlSelf->_cp___05Fs4 = (1U & ((IData)(vlSelf->io_topSel) 
                                 >> 1U));
    vlSelf->_mc___05Fs0 = (1U & (IData)(vlSelf->io_topSel));
    vlSelf->_cp___05Fs5 = vlSelf->_cp___05Fs0;
    vlSelf->_cp___05Fs6 = vlSelf->_cp___05Fs1;
    vlSelf->_cp___05Fs7 = vlSelf->_cp___05Fs2;
    vlSelf->ComplexExample__DOT____Vcellinp__sub__io_b 
        = ((IData)(vlSelf->_cp___05Fs4) ? (IData)(vlSelf->io_topInA)
            : (IData)(vlSelf->io_topInB));
    if (vlSelf->_mc___05Fs0) {
        vlSelf->_mc___05Fs1 = 1U;
        vlSelf->ComplexExample__DOT____Vcellinp__sub__io_a 
            = vlSelf->io_topInB;
    } else {
        vlSelf->_mc___05Fs1 = 0U;
        vlSelf->ComplexExample__DOT____Vcellinp__sub__io_a 
            = vlSelf->io_topInA;
    }
    vlSelf->ComplexExample__DOT___sub_io_out = (0xffU 
                                                & ((((IData)(vlSelf->ComplexExample__DOT__sub__DOT__stateReg) 
                                                     << 0x18U) 
                                                    | ((0xff0000U 
                                                        & (((IData)(1U) 
                                                            + (IData)(vlSelf->ComplexExample__DOT__sub__DOT__stateReg)) 
                                                           << 0x10U)) 
                                                       | (((IData)(vlSelf->ComplexExample__DOT____Vcellinp__sub__io_b) 
                                                           << 8U) 
                                                          | (IData)(vlSelf->ComplexExample__DOT____Vcellinp__sub__io_a)))) 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->io_topSel), 3U))));
    vlSelf->ComplexExample__DOT____Vcellinp__anotherSub__io_in 
        = ((IData)(vlSelf->_mc___05Fs0) ? (IData)(vlSelf->ComplexExample__DOT___sub_io_out)
            : (IData)(vlSelf->io_topInA));
    vlSelf->_cp___05Fs3 = (0x64U < (IData)(vlSelf->ComplexExample__DOT____Vcellinp__anotherSub__io_in));
    vlSelf->io_topOut = (0xffU & (((0xff0000U & (((IData)(vlSelf->io_topInA) 
                                                  + (IData)(vlSelf->io_topInB)) 
                                                 << 0x10U)) 
                                   | (((IData)(vlSelf->ComplexExample__DOT___sub_io_out) 
                                       << 8U) | (0xffU 
                                                 & ((IData)(vlSelf->ComplexExample__DOT__anotherSub__DOT__delayedIn) 
                                                    + (IData)(vlSelf->_cp___05Fs3))))) 
                                  >> (0x1fU & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->io_topSel), 3U))));
}

VL_ATTR_COLD void VComplexExample___024root___eval_stl(VComplexExample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VComplexExample___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VComplexExample___024root___eval_triggers__stl(VComplexExample___024root* vlSelf);

VL_ATTR_COLD bool VComplexExample___024root___eval_phase__stl(VComplexExample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VComplexExample___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VComplexExample___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VComplexExample___024root___dump_triggers__ico(VComplexExample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VComplexExample___024root___dump_triggers__act(VComplexExample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VComplexExample___024root___dump_triggers__nba(VComplexExample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VComplexExample___024root___ctor_var_reset(VComplexExample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_topInA = VL_RAND_RESET_I(8);
    vlSelf->io_topInB = VL_RAND_RESET_I(8);
    vlSelf->io_topSel = VL_RAND_RESET_I(2);
    vlSelf->io_topOut = VL_RAND_RESET_I(8);
    vlSelf->_mc___05Fs0 = VL_RAND_RESET_I(1);
    vlSelf->_mc___05Fs1 = VL_RAND_RESET_I(1);
    vlSelf->_cp___05Fs0 = VL_RAND_RESET_I(1);
    vlSelf->_cp___05Fs1 = VL_RAND_RESET_I(1);
    vlSelf->_cp___05Fs2 = VL_RAND_RESET_I(1);
    vlSelf->_cp___05Fs3 = VL_RAND_RESET_I(1);
    vlSelf->_cp___05Fs4 = VL_RAND_RESET_I(1);
    vlSelf->_cp___05Fs5 = VL_RAND_RESET_I(1);
    vlSelf->_cp___05Fs6 = VL_RAND_RESET_I(1);
    vlSelf->_cp___05Fs7 = VL_RAND_RESET_I(1);
    vlSelf->_rs___05Fs0 = VL_RAND_RESET_I(8);
    vlSelf->_rs___05Fs1 = VL_RAND_RESET_I(8);
    vlSelf->ComplexExample__DOT___sub_io_out = VL_RAND_RESET_I(8);
    vlSelf->ComplexExample__DOT____Vcellinp__sub__io_b = VL_RAND_RESET_I(8);
    vlSelf->ComplexExample__DOT____Vcellinp__sub__io_a = VL_RAND_RESET_I(8);
    vlSelf->ComplexExample__DOT____Vcellinp__anotherSub__io_in = VL_RAND_RESET_I(8);
    vlSelf->ComplexExample__DOT__sub__DOT__stateReg = VL_RAND_RESET_I(8);
    vlSelf->ComplexExample__DOT__sub__DOT__unnamedblk1__DOT___GEN_0 = VL_RAND_RESET_I(32);
    vlSelf->ComplexExample__DOT__anotherSub__DOT__delayedIn = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
}
