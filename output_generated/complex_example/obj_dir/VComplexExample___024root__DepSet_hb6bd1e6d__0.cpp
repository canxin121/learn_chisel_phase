// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComplexExample.h for the primary calling header

#include "VComplexExample__pch.h"
#include "VComplexExample___024root.h"

void VComplexExample___024root___ico_sequent__TOP__0(VComplexExample___024root* vlSelf);

void VComplexExample___024root___eval_ico(VComplexExample___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval_ico\n"); );
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VComplexExample___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VComplexExample___024root___ico_sequent__TOP__0(VComplexExample___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___ico_sequent__TOP__0\n"); );
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef._cond_pred_ComplexExample___05FI___05Fsub___05FI___05Flocal___05FI___05F_T 
        = (0U == (IData)(vlSelfRef.io_topSel));
    vlSelfRef._cond_pred_ComplexExample___05FI___05Fsub___05FI___05Flocal___05FI___05F_T_1 
        = (1U == (IData)(vlSelfRef.io_topSel));
    vlSelfRef._cond_pred_ComplexExample___05FI___05Fsub___05FI___05Flocal___05FI___05F_T_2 
        = (2U == (IData)(vlSelfRef.io_topSel));
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

void VComplexExample___024root___eval_triggers__ico(VComplexExample___024root* vlSelf);

bool VComplexExample___024root___eval_phase__ico(VComplexExample___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval_phase__ico\n"); );
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VComplexExample___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VComplexExample___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VComplexExample___024root___eval_act(VComplexExample___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval_act\n"); );
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VComplexExample___024root___nba_sequent__TOP__0(VComplexExample___024root* vlSelf);

void VComplexExample___024root___eval_nba(VComplexExample___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval_nba\n"); );
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VComplexExample___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VComplexExample___024root___nba_sequent__TOP__0(VComplexExample___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___nba_sequent__TOP__0\n"); );
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vdly__ComplexExample__DOT__sub__DOT__stateReg;
    __Vdly__ComplexExample__DOT__sub__DOT__stateReg = 0;
    // Body
    __Vdly__ComplexExample__DOT__sub__DOT__stateReg 
        = vlSelfRef.ComplexExample__DOT__sub__DOT__stateReg;
    if (vlSelfRef.reset) {
        __Vdly__ComplexExample__DOT__sub__DOT__stateReg = 0U;
        vlSelfRef.ComplexExample__DOT__anotherSub__DOT__delayedIn = 0U;
    } else {
        vlSelfRef.ComplexExample__DOT__sub__DOT__unnamedblk1__DOT___GEN_0 
            = ((((IData)(vlSelfRef.ComplexExample__DOT__sub__DOT__stateReg) 
                 << 0x18U) | (((IData)(vlSelfRef.io_topInA) 
                               & (IData)(vlSelfRef.io_topInB)) 
                              << 0x10U)) | ((0xff00U 
                                             & (((IData)(vlSelfRef.io_topInA) 
                                                 - (IData)(vlSelfRef.io_topInB)) 
                                                << 8U)) 
                                            | (0xffU 
                                               & ((IData)(vlSelfRef.io_topInA) 
                                                  + (IData)(vlSelfRef.io_topInB)))));
        __Vdly__ComplexExample__DOT__sub__DOT__stateReg 
            = (0xffU & (vlSelfRef.ComplexExample__DOT__sub__DOT__unnamedblk1__DOT___GEN_0 
                        >> (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.io_topSel), 3U))));
        vlSelfRef.ComplexExample__DOT__anotherSub__DOT__delayedIn 
            = vlSelfRef.ComplexExample__DOT___sub_io_out;
    }
    vlSelfRef.ComplexExample__DOT__sub__DOT__stateReg 
        = __Vdly__ComplexExample__DOT__sub__DOT__stateReg;
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
    vlSelfRef._reg_signals_ComplexExample___05FI___05FanotherSub___05FI___05Flocal___05FI___05FdelayedIn 
        = vlSelfRef.ComplexExample__DOT__anotherSub__DOT__delayedIn;
    vlSelfRef._cond_pred_ComplexExample___05FI___05FanotherSub___05FI___05Flocal___05FI___05F_T 
        = (0x64U < (IData)(vlSelfRef.ComplexExample__DOT___sub_io_out));
    vlSelfRef.io_topOut = (0xffU & ((IData)(vlSelfRef.ComplexExample__DOT__anotherSub__DOT__delayedIn) 
                                    + (IData)(vlSelfRef._cond_pred_ComplexExample___05FI___05FanotherSub___05FI___05Flocal___05FI___05F_T)));
}

void VComplexExample___024root___eval_triggers__act(VComplexExample___024root* vlSelf);

bool VComplexExample___024root___eval_phase__act(VComplexExample___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval_phase__act\n"); );
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VComplexExample___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VComplexExample___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VComplexExample___024root___eval_phase__nba(VComplexExample___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval_phase__nba\n"); );
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VComplexExample___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VComplexExample___024root___dump_triggers__ico(VComplexExample___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VComplexExample___024root___dump_triggers__nba(VComplexExample___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VComplexExample___024root___dump_triggers__act(VComplexExample___024root* vlSelf);
#endif  // VL_DEBUG

void VComplexExample___024root___eval(VComplexExample___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval\n"); );
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VComplexExample___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("ComplexExample.sv", 55, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VComplexExample___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VComplexExample___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("ComplexExample.sv", 55, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VComplexExample___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("ComplexExample.sv", 55, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VComplexExample___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VComplexExample___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VComplexExample___024root___eval_debug_assertions(VComplexExample___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval_debug_assertions\n"); );
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY(((vlSelfRef.io_topSel & 0xfcU)))) {
        Verilated::overWidthError("io_topSel");}
}
#endif  // VL_DEBUG
