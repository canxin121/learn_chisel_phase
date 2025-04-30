// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRocketALU.h for the primary calling header

#include "VRocketALU__pch.h"
#include "VRocketALU___024root.h"

VL_ATTR_COLD void VRocketALU___024root___eval_static(VRocketALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRocketALU___024root___eval_static\n"); );
    VRocketALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VRocketALU___024root___eval_initial__TOP(VRocketALU___024root* vlSelf);

VL_ATTR_COLD void VRocketALU___024root___eval_initial(VRocketALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRocketALU___024root___eval_initial\n"); );
    VRocketALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VRocketALU___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void VRocketALU___024root___eval_initial__TOP(VRocketALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRocketALU___024root___eval_initial__TOP\n"); );
    VRocketALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_bext_mask_T_1 = 0U;
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_69 = 1U;
}

VL_ATTR_COLD void VRocketALU___024root___eval_final(VRocketALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRocketALU___024root___eval_final\n"); );
    VRocketALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRocketALU___024root___dump_triggers__stl(VRocketALU___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VRocketALU___024root___eval_phase__stl(VRocketALU___024root* vlSelf);

VL_ATTR_COLD void VRocketALU___024root___eval_settle(VRocketALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRocketALU___024root___eval_settle\n"); );
    VRocketALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VRocketALU___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("RocketALU.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VRocketALU___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRocketALU___024root___dump_triggers__stl(VRocketALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRocketALU___024root___dump_triggers__stl\n"); );
    VRocketALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void VRocketALU___024root___ico_sequent__TOP__0(VRocketALU___024root* vlSelf);
VL_ATTR_COLD void VRocketALU___024root____Vm_traceActivitySetAll(VRocketALU___024root* vlSelf);

VL_ATTR_COLD void VRocketALU___024root___eval_stl(VRocketALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRocketALU___024root___eval_stl\n"); );
    VRocketALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VRocketALU___024root___ico_sequent__TOP__0(vlSelf);
        VRocketALU___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void VRocketALU___024root___eval_triggers__stl(VRocketALU___024root* vlSelf);

VL_ATTR_COLD bool VRocketALU___024root___eval_phase__stl(VRocketALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRocketALU___024root___eval_phase__stl\n"); );
    VRocketALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VRocketALU___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VRocketALU___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRocketALU___024root___dump_triggers__ico(VRocketALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRocketALU___024root___dump_triggers__ico\n"); );
    VRocketALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void VRocketALU___024root___dump_triggers__act(VRocketALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRocketALU___024root___dump_triggers__act\n"); );
    VRocketALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VRocketALU___024root___dump_triggers__nba(VRocketALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRocketALU___024root___dump_triggers__nba\n"); );
    VRocketALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VRocketALU___024root____Vm_traceActivitySetAll(VRocketALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRocketALU___024root____Vm_traceActivitySetAll\n"); );
    VRocketALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void VRocketALU___024root___ctor_var_reset(VRocketALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRocketALU___024root___ctor_var_reset\n"); );
    VRocketALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_dw = VL_RAND_RESET_I(1);
    vlSelf->io_fn = VL_RAND_RESET_I(5);
    vlSelf->io_in2 = VL_RAND_RESET_Q(64);
    vlSelf->io_in1 = VL_RAND_RESET_Q(64);
    vlSelf->io_out = VL_RAND_RESET_Q(64);
    vlSelf->io_adder_out = VL_RAND_RESET_Q(64);
    vlSelf->io_cmp_out = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_bext_mask_T_1 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_in2_inv_T = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_io_cmp_out_T_2 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_io_out_T_1 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_logic_T_14 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_logic_T_6 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_1 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_10 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_13 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_16 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_19 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_22 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_4 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_7 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_out_T = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_out_T_2 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_1 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_10 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_11 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_12 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_13 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_14 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_15 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_16 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_17 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_18 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_19 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_20 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_21 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_22 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_23 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_24 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_25 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_26 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_27 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_28 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_29 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_30 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_31 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_32 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_33 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_34 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_35 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_36 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_37 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_38 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_39 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_40 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_41 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_42 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_43 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_44 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_45 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_46 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_47 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_48 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_49 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_5 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_50 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_51 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_52 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_53 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_54 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_55 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_56 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_57 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_58 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_59 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_6 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_60 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_61 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_62 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_63 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_64 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_65 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_66 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_67 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_68 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_69 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_7 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_8 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_9 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rot_shamt_T = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rotin_T = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rotout_T = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rotout_T_2 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shin_T_7 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shin_hi_32_T_3 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shin_hi_T = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shout_T_4 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shout_T_6 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_slt_T_2 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_slt_T_4 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_tz_in_T_116 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_tz_in_T_118 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_tz_in_T_120 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_12 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_14 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_16 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_18 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_20 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_3 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_8 = VL_RAND_RESET_I(1);
    vlSelf->_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05Fio___05Fs___05Fcmp_out = VL_RAND_RESET_I(1);
    vlSelf->_cond_pred_RocketALU___05FM___05FRocketALU___05FS___05F_T_1 = VL_RAND_RESET_I(1);
    vlSelf->RocketALU__DOT__in2_inv = VL_RAND_RESET_Q(64);
    vlSelf->RocketALU__DOT__in1_xor_in2 = VL_RAND_RESET_Q(64);
    vlSelf->RocketALU__DOT__slt = VL_RAND_RESET_I(1);
    vlSelf->RocketALU__DOT__shin_hi = VL_RAND_RESET_I(32);
    vlSelf->RocketALU__DOT__shin = VL_RAND_RESET_Q(64);
    vlSelf->RocketALU__DOT__out = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
