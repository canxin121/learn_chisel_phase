// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopModule.h for the primary calling header

#include "VTopModule__pch.h"
#include "VTopModule___024root.h"

VL_ATTR_COLD void VTopModule___024root___eval_static(VTopModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___eval_static\n"); );
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VTopModule___024root___eval_initial(VTopModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___eval_initial\n"); );
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VTopModule___024root___eval_final(VTopModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___eval_final\n"); );
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTopModule___024root___dump_triggers__stl(VTopModule___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTopModule___024root___eval_phase__stl(VTopModule___024root* vlSelf);

VL_ATTR_COLD void VTopModule___024root___eval_settle(VTopModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___eval_settle\n"); );
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VTopModule___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("TopModule.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTopModule___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTopModule___024root___dump_triggers__stl(VTopModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___dump_triggers__stl\n"); );
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void VTopModule___024root___ico_sequent__TOP__0(VTopModule___024root* vlSelf);

VL_ATTR_COLD void VTopModule___024root___eval_stl(VTopModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___eval_stl\n"); );
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VTopModule___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VTopModule___024root___eval_triggers__stl(VTopModule___024root* vlSelf);

VL_ATTR_COLD bool VTopModule___024root___eval_phase__stl(VTopModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___eval_phase__stl\n"); );
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTopModule___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VTopModule___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTopModule___024root___dump_triggers__ico(VTopModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___dump_triggers__ico\n"); );
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void VTopModule___024root___dump_triggers__act(VTopModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___dump_triggers__act\n"); );
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTopModule___024root___dump_triggers__nba(VTopModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___dump_triggers__nba\n"); );
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTopModule___024root___ctor_var_reset(VTopModule___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___ctor_var_reset\n"); );
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_inA = VL_RAND_RESET_I(32);
    vlSelf->io_inB = VL_RAND_RESET_I(32);
    vlSelf->io_inC = VL_RAND_RESET_I(32);
    vlSelf->io_inD = VL_RAND_RESET_I(32);
    vlSelf->io_inE = VL_RAND_RESET_I(32);
    vlSelf->io_inF = VL_RAND_RESET_I(32);
    vlSelf->io_sel1 = VL_RAND_RESET_I(1);
    vlSelf->io_sel2 = VL_RAND_RESET_I(1);
    vlSelf->io_sel3 = VL_RAND_RESET_I(1);
    vlSelf->io_out = VL_RAND_RESET_I(32);
    vlSelf->_mux_cond_topInst___05FmidMod___05Flocal___05Fio_sel2 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_topInst___05FmidMod___05FlowMod1___05Flocal___05Fio_sel = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_topInst___05FmidMod___05Flocal___05Fio_sel1 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_topInst___05Flocal___05Fio_sel1 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_topInst___05Flocal___05Fio_sel2 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_topInst___05Flocal___05Fio_sel3 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_topInst___05FmidMod___05FlowMod2___05Flocal___05Fio_sel = VL_RAND_RESET_I(1);
}
