// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComplexExample.h for the primary calling header

#include "VComplexExample__pch.h"
#include "VComplexExample___024root.h"

VL_INLINE_OPT void VComplexExample___024root___ico_sequent__TOP__0(VComplexExample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___ico_sequent__TOP__0\n"); );
    // Body
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

void VComplexExample___024root___eval_ico(VComplexExample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VComplexExample___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VComplexExample___024root___eval_triggers__ico(VComplexExample___024root* vlSelf);

bool VComplexExample___024root___eval_phase__ico(VComplexExample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VComplexExample___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VComplexExample___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VComplexExample___024root___eval_act(VComplexExample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval_act\n"); );
}

VL_INLINE_OPT void VComplexExample___024root___nba_sequent__TOP__0(VComplexExample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__ComplexExample__DOT__sub__DOT__stateReg;
    __Vdly__ComplexExample__DOT__sub__DOT__stateReg = 0;
    // Body
    __Vdly__ComplexExample__DOT__sub__DOT__stateReg 
        = vlSelf->ComplexExample__DOT__sub__DOT__stateReg;
    if (vlSelf->reset) {
        __Vdly__ComplexExample__DOT__sub__DOT__stateReg = 0U;
        vlSelf->ComplexExample__DOT__anotherSub__DOT__delayedIn = 0U;
    } else {
        vlSelf->ComplexExample__DOT__sub__DOT__unnamedblk1__DOT___GEN_0 
            = (((IData)(vlSelf->ComplexExample__DOT__sub__DOT__stateReg) 
                << 0x18U) | ((((IData)(vlSelf->ComplexExample__DOT____Vcellinp__sub__io_a) 
                               & (IData)(vlSelf->ComplexExample__DOT____Vcellinp__sub__io_b)) 
                              << 0x10U) | ((0xff00U 
                                            & (((IData)(vlSelf->ComplexExample__DOT____Vcellinp__sub__io_a) 
                                                - (IData)(vlSelf->ComplexExample__DOT____Vcellinp__sub__io_b)) 
                                               << 8U)) 
                                           | (0xffU 
                                              & ((IData)(vlSelf->ComplexExample__DOT____Vcellinp__sub__io_a) 
                                                 + (IData)(vlSelf->ComplexExample__DOT____Vcellinp__sub__io_b))))));
        __Vdly__ComplexExample__DOT__sub__DOT__stateReg 
            = (0xffU & (vlSelf->ComplexExample__DOT__sub__DOT__unnamedblk1__DOT___GEN_0 
                        >> (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelf->io_topSel), 3U))));
        vlSelf->ComplexExample__DOT__anotherSub__DOT__delayedIn 
            = vlSelf->ComplexExample__DOT____Vcellinp__anotherSub__io_in;
    }
    vlSelf->ComplexExample__DOT__sub__DOT__stateReg 
        = __Vdly__ComplexExample__DOT__sub__DOT__stateReg;
    vlSelf->_rs___05Fs0 = vlSelf->ComplexExample__DOT__sub__DOT__stateReg;
    vlSelf->_rs___05Fs1 = vlSelf->ComplexExample__DOT__anotherSub__DOT__delayedIn;
}

VL_INLINE_OPT void VComplexExample___024root___nba_sequent__TOP__1(VComplexExample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___nba_sequent__TOP__1\n"); );
    // Body
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

void VComplexExample___024root___eval_nba(VComplexExample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VComplexExample___024root___nba_sequent__TOP__0(vlSelf);
        VComplexExample___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void VComplexExample___024root___eval_triggers__act(VComplexExample___024root* vlSelf);

bool VComplexExample___024root___eval_phase__act(VComplexExample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VComplexExample___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VComplexExample___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VComplexExample___024root___eval_phase__nba(VComplexExample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VComplexExample___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
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
    if (false && vlSelf) {}  // Prevent unused
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
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
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VComplexExample___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("ComplexExample.sv", 55, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VComplexExample___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("ComplexExample.sv", 55, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VComplexExample___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VComplexExample___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VComplexExample___024root___eval_debug_assertions(VComplexExample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_topSel & 0xfcU))) {
        Verilated::overWidthError("io_topSel");}
}
#endif  // VL_DEBUG
