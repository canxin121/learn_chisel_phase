// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegModule.h for the primary calling header

#include "VRegModule__pch.h"
#include "VRegModule___024root.h"

void VRegModule___024root___ico_sequent__TOP__0(VRegModule___024root* vlSelf);

void VRegModule___024root___eval_ico(VRegModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegModule___024root___eval_ico\n"); );
    VRegModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VRegModule___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VRegModule___024root___ico_sequent__TOP__0(VRegModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegModule___024root___ico_sequent__TOP__0\n"); );
    VRegModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef._cond_pred_RegModule___05FI___05Flocal___05FI___05F_T 
        = (1U & (~ (IData)(vlSelfRef.io_sel)));
    vlSelfRef.io_out = ((IData)(vlSelfRef.io_sel) ? (IData)(vlSelfRef.RegModule__DOT__regB)
                         : (IData)(vlSelfRef.RegModule__DOT__regA));
}

void VRegModule___024root___eval_triggers__ico(VRegModule___024root* vlSelf);

bool VRegModule___024root___eval_phase__ico(VRegModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegModule___024root___eval_phase__ico\n"); );
    VRegModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VRegModule___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VRegModule___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VRegModule___024root___eval_act(VRegModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegModule___024root___eval_act\n"); );
    VRegModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VRegModule___024root___nba_sequent__TOP__0(VRegModule___024root* vlSelf);

void VRegModule___024root___eval_nba(VRegModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegModule___024root___eval_nba\n"); );
    VRegModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VRegModule___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VRegModule___024root___nba_sequent__TOP__0(VRegModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegModule___024root___nba_sequent__TOP__0\n"); );
    VRegModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.reset) {
        vlSelfRef.RegModule__DOT__regA = 0U;
        vlSelfRef.RegModule__DOT__regB = 0x64U;
    } else {
        vlSelfRef.RegModule__DOT__regA = (0xffU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.RegModule__DOT__regA)));
        vlSelfRef.RegModule__DOT__regB = (0xffU & ((IData)(vlSelfRef.RegModule__DOT__regB) 
                                                   - (IData)(1U)));
    }
    vlSelfRef._reg_signals_RegModule___05FI___05Flocal___05FI___05FregA 
        = vlSelfRef.RegModule__DOT__regA;
    vlSelfRef._reg_signals_RegModule___05FI___05Flocal___05FI___05FregB 
        = vlSelfRef.RegModule__DOT__regB;
    vlSelfRef.io_out = ((IData)(vlSelfRef.io_sel) ? (IData)(vlSelfRef.RegModule__DOT__regB)
                         : (IData)(vlSelfRef.RegModule__DOT__regA));
}

void VRegModule___024root___eval_triggers__act(VRegModule___024root* vlSelf);

bool VRegModule___024root___eval_phase__act(VRegModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegModule___024root___eval_phase__act\n"); );
    VRegModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VRegModule___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VRegModule___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VRegModule___024root___eval_phase__nba(VRegModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegModule___024root___eval_phase__nba\n"); );
    VRegModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VRegModule___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegModule___024root___dump_triggers__ico(VRegModule___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRegModule___024root___dump_triggers__nba(VRegModule___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRegModule___024root___dump_triggers__act(VRegModule___024root* vlSelf);
#endif  // VL_DEBUG

void VRegModule___024root___eval(VRegModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegModule___024root___eval\n"); );
    VRegModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VRegModule___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("RegModule.sv", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VRegModule___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VRegModule___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("RegModule.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VRegModule___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("RegModule.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VRegModule___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VRegModule___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VRegModule___024root___eval_debug_assertions(VRegModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegModule___024root___eval_debug_assertions\n"); );
    VRegModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY(((vlSelfRef.io_sel & 0xfeU)))) {
        Verilated::overWidthError("io_sel");}
}
#endif  // VL_DEBUG
