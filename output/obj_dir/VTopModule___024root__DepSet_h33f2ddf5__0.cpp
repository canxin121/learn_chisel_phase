// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopModule.h for the primary calling header

#include "VTopModule__pch.h"
#include "VTopModule___024root.h"

void VTopModule___024root___ico_sequent__TOP__0(VTopModule___024root* vlSelf);

void VTopModule___024root___eval_ico(VTopModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___eval_ico\n"); );
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VTopModule___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VTopModule___024root___ico_sequent__TOP__0(VTopModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___ico_sequent__TOP__0\n"); );
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ TopModule__DOT__midMod__DOT____Vcellinp__lowMod1__io_inA;
    TopModule__DOT__midMod__DOT____Vcellinp__lowMod1__io_inA = 0;
    // Body
    vlSelfRef._mux_cond_topInst___05FmidMod___05Flocal___05Fio_sel2 
        = vlSelfRef.io_sel1;
    vlSelfRef._mux_cond_topInst___05FmidMod___05FlowMod1___05Flocal___05Fio_sel 
        = vlSelfRef.io_sel1;
    if (vlSelfRef.io_sel2) {
        vlSelfRef._mux_cond_topInst___05FmidMod___05Flocal___05Fio_sel1 = 1U;
        vlSelfRef._mux_cond_topInst___05Flocal___05Fio_sel1 
            = vlSelfRef.io_sel3;
        vlSelfRef._mux_cond_topInst___05Flocal___05Fio_sel2 = 1U;
        vlSelfRef._mux_cond_topInst___05Flocal___05Fio_sel3 = 1U;
        vlSelfRef._mux_cond_topInst___05FmidMod___05FlowMod2___05Flocal___05Fio_sel 
            = vlSelfRef.io_sel3;
        TopModule__DOT__midMod__DOT____Vcellinp__lowMod1__io_inA 
            = ((IData)(vlSelfRef.io_sel1) ? vlSelfRef.io_inA
                : vlSelfRef.io_inB);
    } else {
        vlSelfRef._mux_cond_topInst___05FmidMod___05Flocal___05Fio_sel1 = 0U;
        vlSelfRef._mux_cond_topInst___05Flocal___05Fio_sel1 
            = vlSelfRef.io_sel3;
        vlSelfRef._mux_cond_topInst___05Flocal___05Fio_sel2 = 0U;
        vlSelfRef._mux_cond_topInst___05Flocal___05Fio_sel3 = 0U;
        vlSelfRef._mux_cond_topInst___05FmidMod___05FlowMod2___05Flocal___05Fio_sel 
            = vlSelfRef.io_sel3;
        TopModule__DOT__midMod__DOT____Vcellinp__lowMod1__io_inA 
            = ((IData)(vlSelfRef.io_sel1) ? vlSelfRef.io_inC
                : vlSelfRef.io_inD);
    }
    vlSelfRef.io_out = ((IData)(vlSelfRef.io_sel3) ? 
                        ((IData)(vlSelfRef.io_sel3)
                          ? ((IData)(1U) + ((IData)(vlSelfRef.io_sel3)
                                             ? TopModule__DOT__midMod__DOT____Vcellinp__lowMod1__io_inA
                                             : ((IData)(vlSelfRef.io_sel2)
                                                 ? vlSelfRef.io_inE
                                                 : vlSelfRef.io_inF)))
                          : ((IData)(1U) + TopModule__DOT__midMod__DOT____Vcellinp__lowMod1__io_inA))
                         : TopModule__DOT__midMod__DOT____Vcellinp__lowMod1__io_inA);
}

void VTopModule___024root___eval_triggers__ico(VTopModule___024root* vlSelf);

bool VTopModule___024root___eval_phase__ico(VTopModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___eval_phase__ico\n"); );
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VTopModule___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VTopModule___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VTopModule___024root___eval_act(VTopModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___eval_act\n"); );
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VTopModule___024root___eval_nba(VTopModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___eval_nba\n"); );
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VTopModule___024root___eval_triggers__act(VTopModule___024root* vlSelf);

bool VTopModule___024root___eval_phase__act(VTopModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___eval_phase__act\n"); );
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTopModule___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VTopModule___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTopModule___024root___eval_phase__nba(VTopModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___eval_phase__nba\n"); );
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTopModule___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTopModule___024root___dump_triggers__ico(VTopModule___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTopModule___024root___dump_triggers__nba(VTopModule___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTopModule___024root___dump_triggers__act(VTopModule___024root* vlSelf);
#endif  // VL_DEBUG

void VTopModule___024root___eval(VTopModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___eval\n"); );
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VTopModule___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("TopModule.sv", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VTopModule___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VTopModule___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("TopModule.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VTopModule___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("TopModule.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VTopModule___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VTopModule___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTopModule___024root___eval_debug_assertions(VTopModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___eval_debug_assertions\n"); );
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY(((vlSelfRef.io_sel1 & 0xfeU)))) {
        Verilated::overWidthError("io_sel1");}
    if (VL_UNLIKELY(((vlSelfRef.io_sel2 & 0xfeU)))) {
        Verilated::overWidthError("io_sel2");}
    if (VL_UNLIKELY(((vlSelfRef.io_sel3 & 0xfeU)))) {
        Verilated::overWidthError("io_sel3");}
}
#endif  // VL_DEBUG
