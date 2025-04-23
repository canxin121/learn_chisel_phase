// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComplexExample.h for the primary calling header

#include "VComplexExample__pch.h"
#include "VComplexExample___024root.h"

VL_ATTR_COLD void VComplexExample___024root___eval_static(VComplexExample___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval_static\n"); );
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
}

VL_ATTR_COLD void VComplexExample___024root___eval_initial(VComplexExample___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval_initial\n"); );
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VComplexExample___024root___eval_final(VComplexExample___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval_final\n"); );
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VComplexExample___024root___dump_triggers__stl(VComplexExample___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VComplexExample___024root___eval_phase__stl(VComplexExample___024root* vlSelf);

VL_ATTR_COLD void VComplexExample___024root___eval_settle(VComplexExample___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval_settle\n"); );
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
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
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VComplexExample___024root___dump_triggers__stl(VComplexExample___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___dump_triggers__stl\n"); );
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VComplexExample___024root___stl_sequent__TOP__0(VComplexExample___024root* vlSelf);

VL_ATTR_COLD void VComplexExample___024root___eval_stl(VComplexExample___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval_stl\n"); );
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VComplexExample___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VComplexExample___024root___stl_sequent__TOP__0(VComplexExample___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___stl_sequent__TOP__0\n"); );
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef._cond_pred_ComplexExample___05FI___05Fsub___05FI___05Flocal___05FI___05F_T 
        = (0U == (IData)(vlSelfRef.io_topSel));
    vlSelfRef._cond_pred_ComplexExample___05FI___05Fsub___05FI___05Flocal___05FI___05F_T_1 
        = (1U == (IData)(vlSelfRef.io_topSel));
    vlSelfRef._cond_pred_ComplexExample___05FI___05Fsub___05FI___05Flocal___05FI___05F_T_2 
        = (2U == (IData)(vlSelfRef.io_topSel));
    vlSelfRef._reg_signals_ComplexExample___05FI___05FanotherSub___05FI___05Flocal___05FI___05FdelayedIn 
        = vlSelfRef.ComplexExample__DOT__anotherSub__DOT__delayedIn;
    vlSelfRef._reg_signals_ComplexExample___05FI___05Fsub___05FI___05Flocal___05FI___05FstateReg 
        = vlSelfRef.ComplexExample__DOT__sub__DOT__stateReg;
    vlSelfRef.ComplexExample__DOT___sub_io_out = (0xffU 
                                                  & (((((IData)(vlSelfRef.ComplexExample__DOT__sub__DOT__stateReg) 
                                                        << 0x18U) 
                                                       | (0xff0000U 
                                                          & (((IData)(1U) 
                                                              + (IData)(vlSelfRef.ComplexExample__DOT__sub__DOT__stateReg)) 
                                                             << 0x10U))) 
                                                      | (((IData)(vlSelfRef.io_topInB) 
                                                          << 8U) 
                                                         | (IData)(vlSelfRef.io_topInA))) 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.io_topSel), 3U))));
    vlSelfRef._cond_pred_ComplexExample___05FI___05FanotherSub___05FI___05Flocal___05FI___05F_T 
        = (0x64U < (IData)(vlSelfRef.ComplexExample__DOT___sub_io_out));
    vlSelfRef.io_topOut = (0xffU & ((IData)(vlSelfRef.ComplexExample__DOT__anotherSub__DOT__delayedIn) 
                                    + (IData)(vlSelfRef._cond_pred_ComplexExample___05FI___05FanotherSub___05FI___05Flocal___05FI___05F_T)));
}

VL_ATTR_COLD void VComplexExample___024root___eval_triggers__stl(VComplexExample___024root* vlSelf);

VL_ATTR_COLD bool VComplexExample___024root___eval_phase__stl(VComplexExample___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval_phase__stl\n"); );
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VComplexExample___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VComplexExample___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VComplexExample___024root___dump_triggers__ico(VComplexExample___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___dump_triggers__ico\n"); );
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VComplexExample___024root___dump_triggers__act(VComplexExample___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___dump_triggers__act\n"); );
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VComplexExample___024root___dump_triggers__nba(VComplexExample___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___dump_triggers__nba\n"); );
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VComplexExample___024root___ctor_var_reset(VComplexExample___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___ctor_var_reset\n"); );
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_topInA = VL_RAND_RESET_I(8);
    vlSelf->io_topInB = VL_RAND_RESET_I(8);
    vlSelf->io_topSel = VL_RAND_RESET_I(2);
    vlSelf->io_topOut = VL_RAND_RESET_I(8);
    vlSelf->_cond_pred_ComplexExample___05FI___05FanotherSub___05FI___05Flocal___05FI___05F_T = VL_RAND_RESET_I(1);
    vlSelf->_cond_pred_ComplexExample___05FI___05Fsub___05FI___05Flocal___05FI___05F_T = VL_RAND_RESET_I(1);
    vlSelf->_cond_pred_ComplexExample___05FI___05Fsub___05FI___05Flocal___05FI___05F_T_1 = VL_RAND_RESET_I(1);
    vlSelf->_cond_pred_ComplexExample___05FI___05Fsub___05FI___05Flocal___05FI___05F_T_2 = VL_RAND_RESET_I(1);
    vlSelf->_reg_signals_ComplexExample___05FI___05FanotherSub___05FI___05Flocal___05FI___05FdelayedIn = VL_RAND_RESET_I(8);
    vlSelf->_reg_signals_ComplexExample___05FI___05Fsub___05FI___05Flocal___05FI___05FstateReg = VL_RAND_RESET_I(8);
    vlSelf->ComplexExample__DOT___sub_io_out = VL_RAND_RESET_I(8);
    vlSelf->ComplexExample__DOT__sub__DOT__stateReg = VL_RAND_RESET_I(8);
    vlSelf->ComplexExample__DOT__sub__DOT__unnamedblk1__DOT___GEN_0 = VL_RAND_RESET_I(32);
    vlSelf->ComplexExample__DOT__anotherSub__DOT__delayedIn = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
}
