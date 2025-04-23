// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegModule.h for the primary calling header

#include "VRegModule__pch.h"
#include "VRegModule___024root.h"

VL_ATTR_COLD void VRegModule___024root___eval_static(VRegModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegModule___024root___eval_static\n"); );
    VRegModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
}

VL_ATTR_COLD void VRegModule___024root___eval_initial__TOP(VRegModule___024root* vlSelf);

VL_ATTR_COLD void VRegModule___024root___eval_initial(VRegModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegModule___024root___eval_initial\n"); );
    VRegModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VRegModule___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void VRegModule___024root___eval_initial__TOP(VRegModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegModule___024root___eval_initial__TOP\n"); );
    VRegModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef._reg_signals_RegModule___05FI___05Flocal___05FI___05FregA_0_1 = 0U;
    vlSelfRef._reg_signals_RegModule___05FI___05Flocal___05FI___05FregA_0_2 = 0U;
    vlSelfRef._reg_signals_RegModule___05FI___05Flocal___05FI___05FregA_1_0 = 0U;
    vlSelfRef._reg_signals_RegModule___05FI___05Flocal___05FI___05FregA_1_1 = 0U;
    vlSelfRef._reg_signals_RegModule___05FI___05Flocal___05FI___05FregA_1_2 = 0U;
    vlSelfRef._reg_signals_RegModule___05FI___05Flocal___05FI___05FregB_0_0 = 0x64U;
    vlSelfRef._reg_signals_RegModule___05FI___05Flocal___05FI___05FregB_0_1 = 0x65U;
    vlSelfRef._reg_signals_RegModule___05FI___05Flocal___05FI___05FregB_0_2 = 0x66U;
    vlSelfRef._reg_signals_RegModule___05FI___05Flocal___05FI___05FregB_1_0 = 0x6eU;
    vlSelfRef._reg_signals_RegModule___05FI___05Flocal___05FI___05FregB_1_1 = 0x6fU;
}

VL_ATTR_COLD void VRegModule___024root___eval_final(VRegModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegModule___024root___eval_final\n"); );
    VRegModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegModule___024root___dump_triggers__stl(VRegModule___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VRegModule___024root___eval_phase__stl(VRegModule___024root* vlSelf);

VL_ATTR_COLD void VRegModule___024root___eval_settle(VRegModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegModule___024root___eval_settle\n"); );
    VRegModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VRegModule___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("RegModule.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VRegModule___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegModule___024root___dump_triggers__stl(VRegModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegModule___024root___dump_triggers__stl\n"); );
    VRegModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void VRegModule___024root___stl_sequent__TOP__0(VRegModule___024root* vlSelf);

VL_ATTR_COLD void VRegModule___024root___eval_stl(VRegModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegModule___024root___eval_stl\n"); );
    VRegModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VRegModule___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VRegModule___024root___stl_sequent__TOP__0(VRegModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegModule___024root___stl_sequent__TOP__0\n"); );
    VRegModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.io_sel) {
        vlSelfRef.io_out_0_1 = 0x65U;
        vlSelfRef.io_out_0_2 = 0x66U;
        vlSelfRef.io_out_1_0 = 0x6eU;
        vlSelfRef.io_out_1_1 = 0x6fU;
        vlSelfRef.io_out_0_0 = 0x64U;
        vlSelfRef.io_out_1_2 = vlSelfRef.RegModule__DOT__regB_1_2;
    } else {
        vlSelfRef.io_out_0_1 = 0U;
        vlSelfRef.io_out_0_2 = 0U;
        vlSelfRef.io_out_1_0 = 0U;
        vlSelfRef.io_out_1_1 = 0U;
        vlSelfRef.io_out_0_0 = vlSelfRef.RegModule__DOT__regA_0_0;
        vlSelfRef.io_out_1_2 = 0U;
    }
    vlSelfRef._cond_pred_RegModule___05FI___05Flocal___05FI___05F_T 
        = (1U & (~ (IData)(vlSelfRef.io_sel)));
    vlSelfRef._reg_signals_RegModule___05FI___05Flocal___05FI___05FregA_0_0 
        = vlSelfRef.RegModule__DOT__regA_0_0;
    vlSelfRef._reg_signals_RegModule___05FI___05Flocal___05FI___05FregB_1_2 
        = vlSelfRef.RegModule__DOT__regB_1_2;
}

VL_ATTR_COLD void VRegModule___024root___eval_triggers__stl(VRegModule___024root* vlSelf);

VL_ATTR_COLD bool VRegModule___024root___eval_phase__stl(VRegModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegModule___024root___eval_phase__stl\n"); );
    VRegModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VRegModule___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VRegModule___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegModule___024root___dump_triggers__ico(VRegModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegModule___024root___dump_triggers__ico\n"); );
    VRegModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void VRegModule___024root___dump_triggers__act(VRegModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegModule___024root___dump_triggers__act\n"); );
    VRegModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void VRegModule___024root___dump_triggers__nba(VRegModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegModule___024root___dump_triggers__nba\n"); );
    VRegModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void VRegModule___024root___ctor_var_reset(VRegModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegModule___024root___ctor_var_reset\n"); );
    VRegModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_sel = VL_RAND_RESET_I(1);
    vlSelf->io_out_0_0 = VL_RAND_RESET_I(8);
    vlSelf->io_out_0_1 = VL_RAND_RESET_I(8);
    vlSelf->io_out_0_2 = VL_RAND_RESET_I(8);
    vlSelf->io_out_1_0 = VL_RAND_RESET_I(8);
    vlSelf->io_out_1_1 = VL_RAND_RESET_I(8);
    vlSelf->io_out_1_2 = VL_RAND_RESET_I(8);
    vlSelf->_cond_pred_RegModule___05FI___05Flocal___05FI___05F_T = VL_RAND_RESET_I(1);
    vlSelf->_reg_signals_RegModule___05FI___05Flocal___05FI___05FregA_0_0 = VL_RAND_RESET_I(8);
    vlSelf->_reg_signals_RegModule___05FI___05Flocal___05FI___05FregA_0_1 = VL_RAND_RESET_I(8);
    vlSelf->_reg_signals_RegModule___05FI___05Flocal___05FI___05FregA_0_2 = VL_RAND_RESET_I(8);
    vlSelf->_reg_signals_RegModule___05FI___05Flocal___05FI___05FregA_1_0 = VL_RAND_RESET_I(8);
    vlSelf->_reg_signals_RegModule___05FI___05Flocal___05FI___05FregA_1_1 = VL_RAND_RESET_I(8);
    vlSelf->_reg_signals_RegModule___05FI___05Flocal___05FI___05FregA_1_2 = VL_RAND_RESET_I(8);
    vlSelf->_reg_signals_RegModule___05FI___05Flocal___05FI___05FregB_0_0 = VL_RAND_RESET_I(8);
    vlSelf->_reg_signals_RegModule___05FI___05Flocal___05FI___05FregB_0_1 = VL_RAND_RESET_I(8);
    vlSelf->_reg_signals_RegModule___05FI___05Flocal___05FI___05FregB_0_2 = VL_RAND_RESET_I(8);
    vlSelf->_reg_signals_RegModule___05FI___05Flocal___05FI___05FregB_1_0 = VL_RAND_RESET_I(8);
    vlSelf->_reg_signals_RegModule___05FI___05Flocal___05FI___05FregB_1_1 = VL_RAND_RESET_I(8);
    vlSelf->_reg_signals_RegModule___05FI___05Flocal___05FI___05FregB_1_2 = VL_RAND_RESET_I(8);
    vlSelf->RegModule__DOT__regA_0_0 = VL_RAND_RESET_I(8);
    vlSelf->RegModule__DOT__regB_1_2 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
}
