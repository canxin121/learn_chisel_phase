// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRocketALU.h for the primary calling header

#include "VRocketALU__pch.h"
#include "VRocketALU___024root.h"

void VRocketALU___024root___ico_sequent__TOP__0(VRocketALU___024root* vlSelf);

void VRocketALU___024root___eval_ico(VRocketALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRocketALU___024root___eval_ico\n"); );
    VRocketALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VRocketALU___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void VRocketALU___024root___ico_sequent__TOP__0(VRocketALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRocketALU___024root___ico_sequent__TOP__0\n"); );
    VRocketALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ RocketALU__DOT___shin_T_6;
    RocketALU__DOT___shin_T_6 = 0;
    IData/*31:0*/ RocketALU__DOT___GEN;
    RocketALU__DOT___GEN = 0;
    IData/*31:0*/ RocketALU__DOT___GEN_0;
    RocketALU__DOT___GEN_0 = 0;
    IData/*31:0*/ RocketALU__DOT___GEN_1;
    RocketALU__DOT___GEN_1 = 0;
    QData/*45:0*/ RocketALU__DOT___GEN_2;
    RocketALU__DOT___GEN_2 = 0;
    IData/*31:0*/ RocketALU__DOT___GEN_3;
    RocketALU__DOT___GEN_3 = 0;
    CData/*1:0*/ RocketALU__DOT___GEN_4;
    RocketALU__DOT___GEN_4 = 0;
    CData/*7:0*/ RocketALU__DOT___GEN_5;
    RocketALU__DOT___GEN_5 = 0;
    QData/*54:0*/ RocketALU__DOT___GEN_6;
    RocketALU__DOT___GEN_6 = 0;
    VlWide<3>/*64:0*/ RocketALU__DOT___shout_r_T_5;
    VL_ZERO_W(65, RocketALU__DOT___shout_r_T_5);
    SData/*15:0*/ RocketALU__DOT___GEN_7;
    RocketALU__DOT___GEN_7 = 0;
    QData/*37:0*/ RocketALU__DOT___GEN_8;
    RocketALU__DOT___GEN_8 = 0;
    CData/*7:0*/ RocketALU__DOT___GEN_9;
    RocketALU__DOT___GEN_9 = 0;
    SData/*15:0*/ RocketALU__DOT___GEN_10;
    RocketALU__DOT___GEN_10 = 0;
    CData/*1:0*/ RocketALU__DOT___GEN_11;
    RocketALU__DOT___GEN_11 = 0;
    CData/*7:0*/ RocketALU__DOT___GEN_12;
    RocketALU__DOT___GEN_12 = 0;
    QData/*50:0*/ RocketALU__DOT___GEN_13;
    RocketALU__DOT___GEN_13 = 0;
    CData/*1:0*/ RocketALU__DOT___tz_in_T_3;
    RocketALU__DOT___tz_in_T_3 = 0;
    SData/*15:0*/ RocketALU__DOT___GEN_14;
    RocketALU__DOT___GEN_14 = 0;
    QData/*37:0*/ RocketALU__DOT___GEN_15;
    RocketALU__DOT___GEN_15 = 0;
    CData/*7:0*/ RocketALU__DOT___GEN_16;
    RocketALU__DOT___GEN_16 = 0;
    CData/*7:0*/ RocketALU__DOT___GEN_17;
    RocketALU__DOT___GEN_17 = 0;
    SData/*15:0*/ RocketALU__DOT___GEN_18;
    RocketALU__DOT___GEN_18 = 0;
    CData/*1:0*/ RocketALU__DOT___GEN_19;
    RocketALU__DOT___GEN_19 = 0;
    CData/*7:0*/ RocketALU__DOT___GEN_20;
    RocketALU__DOT___GEN_20 = 0;
    QData/*50:0*/ RocketALU__DOT___GEN_21;
    RocketALU__DOT___GEN_21 = 0;
    CData/*3:0*/ RocketALU__DOT___GEN_22;
    RocketALU__DOT___GEN_22 = 0;
    CData/*7:0*/ RocketALU__DOT___GEN_23;
    RocketALU__DOT___GEN_23 = 0;
    IData/*18:0*/ RocketALU__DOT___GEN_24;
    RocketALU__DOT___GEN_24 = 0;
    VlWide<8>/*255:0*/ RocketALU__DOT___GEN_25;
    VL_ZERO_W(256, RocketALU__DOT___GEN_25);
    CData/*0:0*/ RocketALU__DOT____VdfgRegularize_h85422d95_0_3;
    RocketALU__DOT____VdfgRegularize_h85422d95_0_3 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_1 
        = (0U != (0xffU & (IData)(vlSelfRef.io_in1)));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_10 
        = (0U != (0xffU & (IData)((vlSelfRef.io_in1 
                                   >> 0x18U))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_13 
        = (0U != (0xffU & (IData)((vlSelfRef.io_in1 
                                   >> 0x20U))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_16 
        = (0U != (0xffU & (IData)((vlSelfRef.io_in1 
                                   >> 0x28U))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_19 
        = (0U != (0xffU & (IData)((vlSelfRef.io_in1 
                                   >> 0x30U))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_22 
        = (0U != (0xffU & (IData)((vlSelfRef.io_in1 
                                   >> 0x38U))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_4 
        = (0U != (0xffU & (IData)((vlSelfRef.io_in1 
                                   >> 8U))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_7 
        = (0U != (0xffU & (IData)((vlSelfRef.io_in1 
                                   >> 0x10U))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T 
        = (1U & (IData)((vlSelfRef.io_in2 >> 1U)));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shin_hi_T 
        = vlSelfRef.io_dw;
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_12 
        = (0x287U == (0xfffU & (IData)(vlSelfRef.io_in2)));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_14 
        = (0x6b8U == (0xfffU & (IData)(vlSelfRef.io_in2)));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_16 
        = (0x80U == (0xfffU & (IData)(vlSelfRef.io_in2)));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_18 
        = (0x604U == (0xfffU & (IData)(vlSelfRef.io_in2)));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_20 
        = (0x605U == (0xfffU & (IData)(vlSelfRef.io_in2)));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_3 
        = (1U & (IData)((vlSelfRef.io_in1 >> 7U)));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_8 
        = (1U & (IData)((vlSelfRef.io_in1 >> 0xfU)));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rotin_T 
        = (1U & (IData)(vlSelfRef.io_fn));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_logic_T_14 
        = ((6U == (IData)(vlSelfRef.io_fn)) | ((7U 
                                                == (IData)(vlSelfRef.io_fn)) 
                                               | ((0x19U 
                                                   == (IData)(vlSelfRef.io_fn)) 
                                                  | (0x18U 
                                                     == (IData)(vlSelfRef.io_fn)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_logic_T_6 
        = ((4U == (IData)(vlSelfRef.io_fn)) | ((6U 
                                                == (IData)(vlSelfRef.io_fn)) 
                                               | ((0x19U 
                                                   == (IData)(vlSelfRef.io_fn)) 
                                                  | (0x1aU 
                                                     == (IData)(vlSelfRef.io_fn)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_out_T 
        = (0U == (IData)(vlSelfRef.io_fn));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_out_T_2 
        = (0xaU == (IData)(vlSelfRef.io_fn));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shout_T_6 
        = (1U == (IData)(vlSelfRef.io_fn));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_slt_T_4 
        = (1U & ((IData)(vlSelfRef.io_fn) >> 1U));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_slt_T_2 
        = ((1U & (IData)((vlSelfRef.io_in1 >> 0x3fU))) 
           == (1U & (IData)((vlSelfRef.io_in2 >> 0x3fU))));
    RocketALU__DOT___GEN_22 = (5U & ((0xcU & ((IData)(
                                                      (vlSelfRef.io_in1 
                                                       >> 6U)) 
                                              << 2U)) 
                                     | (3U & (IData)(
                                                     (vlSelfRef.io_in1 
                                                      >> 8U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_1 
        = (1U & (~ (IData)(vlSelfRef.io_dw)));
    RocketALU__DOT___GEN_16 = (0x33U & ((0xf0U & ((IData)(
                                                          (vlSelfRef.io_in1 
                                                           >> 0xcU)) 
                                                  << 4U)) 
                                        | (0xfU & (IData)(
                                                          (vlSelfRef.io_in1 
                                                           >> 0x10U)))));
    RocketALU__DOT____VdfgRegularize_h85422d95_0_3 
        = ((5U == (IData)(vlSelfRef.io_fn)) | (0xbU 
                                               == (IData)(vlSelfRef.io_fn)));
    RocketALU__DOT___GEN_14 = ((0xf0f0U & ((0xff00U 
                                            & ((IData)(
                                                       (vlSelfRef.io_in1 
                                                        >> 0x10U)) 
                                               << 8U)) 
                                           | (0xf0U 
                                              & ((IData)(
                                                         (vlSelfRef.io_in1 
                                                          >> 0x1cU)) 
                                                 << 4U)))) 
                               | (0xf0fU & ((0xff00U 
                                             & ((IData)(
                                                        (vlSelfRef.io_in1 
                                                         >> 0x18U)) 
                                                << 8U)) 
                                            | (0xffU 
                                               & (IData)(
                                                         (vlSelfRef.io_in1 
                                                          >> 0x20U))))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_in2_inv_T 
        = (1U & ((IData)(vlSelfRef.io_fn) >> 3U));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rotout_T 
        = vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rotin_T;
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rotout_T_2 
        = vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rotin_T;
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rot_shamt_T 
        = vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_1;
    vlSelfRef._cond_pred_RocketALU___05FM___05FRocketALU___05FS___05F_T_1 
        = vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_1;
    RocketALU__DOT___tz_in_T_3 = (((IData)(vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_1) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.io_in2))));
    RocketALU__DOT___GEN_23 = ((0xccU & ((0xf0U & ((IData)(
                                                           (vlSelfRef.io_in1 
                                                            >> 8U)) 
                                                   << 4U)) 
                                         | (0xcU & 
                                            ((IData)(
                                                     (vlSelfRef.io_in1 
                                                      >> 0xeU)) 
                                             << 2U)))) 
                               | (IData)(RocketALU__DOT___GEN_16));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shout_T_4 
        = ((IData)(RocketALU__DOT____VdfgRegularize_h85422d95_0_3) 
           | (0x13U == (IData)(vlSelfRef.io_fn)));
    RocketALU__DOT___shin_T_6 = ((IData)(RocketALU__DOT____VdfgRegularize_h85422d95_0_3) 
                                 | ((0x12U == (IData)(vlSelfRef.io_fn)) 
                                    | (0x13U == (IData)(vlSelfRef.io_fn))));
    RocketALU__DOT___GEN_15 = (0x3333333333ULL & (((QData)((IData)(
                                                                   ((0xf00U 
                                                                     & ((IData)(
                                                                                (vlSelfRef.io_in1 
                                                                                >> 8U)) 
                                                                        << 8U)) 
                                                                    | ((0xf0U 
                                                                        & ((IData)(
                                                                                (vlSelfRef.io_in1 
                                                                                >> 0xcU)) 
                                                                           << 4U)) 
                                                                       | (0xfU 
                                                                          & (IData)(
                                                                                (vlSelfRef.io_in1 
                                                                                >> 0x10U))))))) 
                                                   << 0x1aU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(RocketALU__DOT___GEN_14) 
                                                                      << 0xaU) 
                                                                     | ((0x3c0U 
                                                                         & ((IData)(
                                                                                (vlSelfRef.io_in1 
                                                                                >> 0x24U)) 
                                                                            << 6U)) 
                                                                        | ((0x3cU 
                                                                            & ((IData)(
                                                                                (vlSelfRef.io_in1 
                                                                                >> 0x28U)) 
                                                                               << 2U)) 
                                                                           | (3U 
                                                                              & (IData)(
                                                                                (vlSelfRef.io_in1 
                                                                                >> 0x2eU))))))))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_io_cmp_out_T_2 
        = (1U & (~ (IData)(vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_in2_inv_T)));
    vlSelfRef.RocketALU__DOT__in2_inv = ((- (QData)((IData)(vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_in2_inv_T))) 
                                         ^ vlSelfRef.io_in2);
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shin_hi_32_T_3 
        = ((IData)(vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_in2_inv_T) 
           & (IData)((vlSelfRef.io_in1 >> 0x1fU)));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_tz_in_T_116 
        = (1U == (IData)(RocketALU__DOT___tz_in_T_3));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_tz_in_T_118 
        = (2U == (IData)(RocketALU__DOT___tz_in_T_3));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_tz_in_T_120 
        = (3U == (IData)(RocketALU__DOT___tz_in_T_3));
    RocketALU__DOT___GEN_24 = (0x55555U & (((0x60000U 
                                             & ((IData)(
                                                        (vlSelfRef.io_in1 
                                                         >> 4U)) 
                                                << 0x11U)) 
                                            | ((0x18000U 
                                                & ((IData)(
                                                           (vlSelfRef.io_in1 
                                                            >> 6U)) 
                                                   << 0xfU)) 
                                               | (0x6000U 
                                                  & ((IData)(
                                                             (vlSelfRef.io_in1 
                                                              >> 8U)) 
                                                     << 0xdU)))) 
                                           | (((IData)(RocketALU__DOT___GEN_23) 
                                               << 5U) 
                                              | ((0x18U 
                                                  & ((IData)(
                                                             (vlSelfRef.io_in1 
                                                              >> 0x12U)) 
                                                     << 3U)) 
                                                 | ((6U 
                                                     & ((IData)(
                                                                (vlSelfRef.io_in1 
                                                                 >> 0x14U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (vlSelfRef.io_in1 
                                                                  >> 0x17U))))))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shin_T_7 
        = (1U & (~ (IData)(RocketALU__DOT___shin_T_6)));
    RocketALU__DOT___GEN_17 = (0xffU & ((IData)((RocketALU__DOT___GEN_15 
                                                 >> 0x1eU)) 
                                        | (IData)(RocketALU__DOT___GEN_16)));
    RocketALU__DOT___GEN_18 = (0xffffU & ((IData)((RocketALU__DOT___GEN_15 
                                                   >> 0xeU)) 
                                          | (0x3333U 
                                             & (IData)(RocketALU__DOT___GEN_14))));
    RocketALU__DOT___GEN_19 = (3U & ((IData)((RocketALU__DOT___GEN_15 
                                              >> 0xaU)) 
                                     | (IData)((vlSelfRef.io_in1 
                                                >> 0x24U))));
    RocketALU__DOT___GEN_20 = ((0xfcU & ((IData)(RocketALU__DOT___GEN_15) 
                                         << 2U)) | 
                               (0x33U & ((0xf0U & ((IData)(
                                                           (vlSelfRef.io_in1 
                                                            >> 0x2cU)) 
                                                   << 4U)) 
                                         | (0xfU & (IData)(
                                                           (vlSelfRef.io_in1 
                                                            >> 0x30U))))));
    vlSelfRef.RocketALU__DOT__in1_xor_in2 = (vlSelfRef.io_in1 
                                             ^ vlSelfRef.RocketALU__DOT__in2_inv);
    vlSelfRef.io_adder_out = (vlSelfRef.io_in1 + (vlSelfRef.RocketALU__DOT__in2_inv 
                                                  + (QData)((IData)(vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_in2_inv_T))));
    RocketALU__DOT___GEN_21 = (0x5555555555555ULL & 
                               (((QData)((IData)(((
                                                   ((IData)(
                                                            (vlSelfRef.io_in1 
                                                             >> 4U)) 
                                                    << 0x1eU) 
                                                   | ((0x30000000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.io_in1 
                                                                   >> 6U)) 
                                                          << 0x1cU)) 
                                                      | ((0xc000000U 
                                                          & ((IData)(
                                                                     (vlSelfRef.io_in1 
                                                                      >> 8U)) 
                                                             << 0x1aU)) 
                                                         | ((IData)(RocketALU__DOT___GEN_17) 
                                                            << 0x12U)))) 
                                                  | (((IData)(RocketALU__DOT___GEN_18) 
                                                      << 2U) 
                                                     | (3U 
                                                        & ((IData)(RocketALU__DOT___GEN_14) 
                                                           >> 2U)))))) 
                                 << 0x13U) | (QData)((IData)(
                                                             ((((IData)(RocketALU__DOT___GEN_19) 
                                                                << 0x11U) 
                                                               | ((0x18000U 
                                                                   & ((IData)(
                                                                              (vlSelfRef.io_in1 
                                                                               >> 0x26U)) 
                                                                      << 0xfU)) 
                                                                  | (0x6000U 
                                                                     & ((IData)(
                                                                                (vlSelfRef.io_in1 
                                                                                >> 0x28U)) 
                                                                        << 0xdU)))) 
                                                              | (((IData)(RocketALU__DOT___GEN_20) 
                                                                  << 5U) 
                                                                 | ((0x18U 
                                                                     & ((IData)(
                                                                                (vlSelfRef.io_in1 
                                                                                >> 0x32U)) 
                                                                        << 3U)) 
                                                                    | ((6U 
                                                                        & ((IData)(
                                                                                (vlSelfRef.io_in1 
                                                                                >> 0x34U)) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & (IData)(
                                                                                (vlSelfRef.io_in1 
                                                                                >> 0x37U)))))))))));
    vlSelfRef.RocketALU__DOT__slt = (1U & ((IData)(vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_slt_T_2)
                                            ? (IData)(
                                                      (vlSelfRef.io_adder_out 
                                                       >> 0x3fU))
                                            : ((IData)(vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_slt_T_4)
                                                ? (IData)(
                                                          (vlSelfRef.io_in2 
                                                           >> 0x3fU))
                                                : (IData)(
                                                          (vlSelfRef.io_in1 
                                                           >> 0x3fU)))));
    vlSelfRef.RocketALU__DOT__shin_hi = ((IData)(vlSelfRef.io_dw)
                                          ? (IData)(
                                                    (vlSelfRef.io_in1 
                                                     >> 0x20U))
                                          : (- (IData)((IData)(vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shin_hi_32_T_3))));
    RocketALU__DOT___GEN = (((IData)((vlSelfRef.io_in1 
                                      >> 0x10U)) << 0x10U) 
                            | (0xffffU & vlSelfRef.RocketALU__DOT__shin_hi));
    RocketALU__DOT___GEN_25[0U] = (IData)(vlSelfRef.io_in1);
    RocketALU__DOT___GEN_25[1U] = (IData)((vlSelfRef.io_in1 
                                           >> 0x20U));
    RocketALU__DOT___GEN_25[2U] = ((0xff800000U & RocketALU__DOT___GEN_25[2U]) 
                                   | (((0x7f8000U & 
                                        (((IData)((RocketALU__DOT___GEN_21 
                                                   >> 7U)) 
                                          << 0xfU) 
                                         | (0x2a8000U 
                                            & ((IData)(RocketALU__DOT___GEN_20) 
                                               << 0xfU)))) 
                                       | (((0x4000U 
                                            & ((IData)(RocketALU__DOT___GEN_20) 
                                               << 0xdU)) 
                                           | (0x2000U 
                                              & (((IData)(
                                                          (RocketALU__DOT___GEN_21 
                                                           >> 5U)) 
                                                  | (IData)(
                                                            (vlSelfRef.io_in1 
                                                             >> 0x32U))) 
                                                 << 0xdU))) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelfRef.io_in1 
                                                          >> 0x33U)) 
                                                 << 0xcU)) 
                                             | (0x800U 
                                                & ((IData)(
                                                           (vlSelfRef.io_in1 
                                                            >> 0x34U)) 
                                                   << 0xbU))))) 
                                      | ((((0x700U 
                                            & ((IData)(RocketALU__DOT___GEN_21) 
                                               << 8U)) 
                                           | (0x280U 
                                              & ((0x600U 
                                                  & ((IData)(
                                                             (vlSelfRef.io_in1 
                                                              >> 0x36U)) 
                                                     << 9U)) 
                                                 | (0x180U 
                                                    & ((IData)(
                                                               (vlSelfRef.io_in1 
                                                                >> 0x38U)) 
                                                       << 7U))))) 
                                          | ((0x40U 
                                              & ((IData)(
                                                         (vlSelfRef.io_in1 
                                                          >> 0x39U)) 
                                                 << 6U)) 
                                             | (0x20U 
                                                & ((IData)(
                                                           (vlSelfRef.io_in1 
                                                            >> 0x3aU)) 
                                                   << 5U)))) 
                                         | (((0x10U 
                                              & ((IData)(
                                                         (vlSelfRef.io_in1 
                                                          >> 0x3bU)) 
                                                 << 4U)) 
                                             | ((8U 
                                                 & ((IData)(
                                                            (vlSelfRef.io_in1 
                                                             >> 0x3cU)) 
                                                    << 3U)) 
                                                | (4U 
                                                   & ((IData)(
                                                              (vlSelfRef.io_in1 
                                                               >> 0x3dU)) 
                                                      << 2U)))) 
                                            | ((2U 
                                                & ((IData)(
                                                           (vlSelfRef.io_in1 
                                                            >> 0x3eU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelfRef.io_in1 
                                                             >> 0x3fU))))))));
    RocketALU__DOT___GEN_25[2U] = ((0x807fffffU & RocketALU__DOT___GEN_25[2U]) 
                                   | (0xff800000U & 
                                      ((0x40000000U 
                                        & ((IData)(RocketALU__DOT___GEN_18) 
                                           << 0x1dU)) 
                                       | ((0x20000000U 
                                           & (((IData)(
                                                       (RocketALU__DOT___GEN_21 
                                                        >> 0x15U)) 
                                               << 0x1dU) 
                                              | (0xe0000000U 
                                                 & ((IData)(RocketALU__DOT___GEN_14) 
                                                    << 0x1bU)))) 
                                          | (((0x10000000U 
                                               & ((IData)(RocketALU__DOT___GEN_14) 
                                                  << 0x19U)) 
                                              | (0x8000000U 
                                                 & ((IData)(RocketALU__DOT___GEN_19) 
                                                    << 0x1bU))) 
                                             | (0x7800000U 
                                                & (((IData)(
                                                            (RocketALU__DOT___GEN_21 
                                                             >> 0xfU)) 
                                                    << 0x17U) 
                                                   | (0x2800000U 
                                                      & ((0x6000000U 
                                                          & ((IData)(
                                                                     (vlSelfRef.io_in1 
                                                                      >> 0x26U)) 
                                                             << 0x19U)) 
                                                         | (0x1800000U 
                                                            & ((IData)(
                                                                       (vlSelfRef.io_in1 
                                                                        >> 0x28U)) 
                                                               << 0x17U)))))))))));
    RocketALU__DOT___GEN_25[2U] = ((0x7fffffffU & RocketALU__DOT___GEN_25[2U]) 
                                   | (((IData)((RocketALU__DOT___GEN_21 
                                                >> 0x17U)) 
                                       | (IData)(RocketALU__DOT___GEN_18)) 
                                      << 0x1fU));
    RocketALU__DOT___GEN_25[3U] = ((0xffff8000U & RocketALU__DOT___GEN_25[3U]) 
                                   | (0x7fffU & (((IData)(
                                                          (RocketALU__DOT___GEN_21 
                                                           >> 0x17U)) 
                                                  >> 1U) 
                                                 | (0x2aaaU 
                                                    & ((IData)(RocketALU__DOT___GEN_18) 
                                                       >> 1U)))));
    RocketALU__DOT___GEN_25[3U] = ((0x7fffU & RocketALU__DOT___GEN_25[3U]) 
                                   | (0xffff8000U & 
                                      ((((IData)(vlSelfRef.io_in1) 
                                         << 0x1fU) 
                                        | ((0x40000000U 
                                            & ((IData)(
                                                       (vlSelfRef.io_in1 
                                                        >> 1U)) 
                                               << 0x1eU)) 
                                           | (0x20000000U 
                                              & ((IData)(
                                                         (vlSelfRef.io_in1 
                                                          >> 2U)) 
                                                 << 0x1dU)))) 
                                       | ((0x10000000U 
                                           & ((IData)(
                                                      (vlSelfRef.io_in1 
                                                       >> 3U)) 
                                              << 0x1cU)) 
                                          | ((0x8000000U 
                                              & ((IData)(
                                                         (vlSelfRef.io_in1 
                                                          >> 4U)) 
                                                 << 0x1bU)) 
                                             | ((0x7800000U 
                                                 & (((IData)(
                                                             (RocketALU__DOT___GEN_21 
                                                              >> 0x2fU)) 
                                                     | (IData)(RocketALU__DOT___GEN_22)) 
                                                    << 0x17U)) 
                                                | (0x7f8000U 
                                                   & (((IData)(
                                                               (RocketALU__DOT___GEN_21 
                                                                >> 0x27U)) 
                                                       << 0xfU) 
                                                      | (0x2a8000U 
                                                         & ((IData)(RocketALU__DOT___GEN_17) 
                                                            << 0xfU))))))))));
    RocketALU__DOT___GEN_25[4U] = (IData)((0x100000000ULL 
                                           | (QData)((IData)(vlSelfRef.io_in1))));
    RocketALU__DOT___GEN_25[5U] = (IData)(((0x100000000ULL 
                                            | (QData)((IData)(vlSelfRef.io_in1))) 
                                           >> 0x20U));
    RocketALU__DOT___GEN_25[6U] = (((((IData)(vlSelfRef.io_in1) 
                                      << 0x1fU) | (
                                                   (0x40000000U 
                                                    & ((IData)(
                                                               (vlSelfRef.io_in1 
                                                                >> 1U)) 
                                                       << 0x1eU)) 
                                                   | (0x20000000U 
                                                      & ((IData)(
                                                                 (vlSelfRef.io_in1 
                                                                  >> 2U)) 
                                                         << 0x1dU)))) 
                                    | ((0x10000000U 
                                        & ((IData)(
                                                   (vlSelfRef.io_in1 
                                                    >> 3U)) 
                                           << 0x1cU)) 
                                       | ((0x8000000U 
                                           & ((IData)(
                                                      (vlSelfRef.io_in1 
                                                       >> 4U)) 
                                              << 0x1bU)) 
                                          | (0x7800000U 
                                             & ((0xff800000U 
                                                 & (RocketALU__DOT___GEN_24 
                                                    << 8U)) 
                                                | ((IData)(RocketALU__DOT___GEN_22) 
                                                   << 0x17U)))))) 
                                   | (((0x7f8000U & 
                                        ((0xffff8000U 
                                          & (RocketALU__DOT___GEN_24 
                                             << 8U)) 
                                         | (0x2a8000U 
                                            & ((IData)(RocketALU__DOT___GEN_23) 
                                               << 0xfU)))) 
                                       | (((0x4000U 
                                            & ((IData)(RocketALU__DOT___GEN_23) 
                                               << 0xdU)) 
                                           | (0x2000U 
                                              & ((0xffffe000U 
                                                  & (RocketALU__DOT___GEN_24 
                                                     << 8U)) 
                                                 | ((IData)(
                                                            (vlSelfRef.io_in1 
                                                             >> 0x12U)) 
                                                    << 0xdU)))) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (vlSelfRef.io_in1 
                                                          >> 0x13U)) 
                                                 << 0xcU)) 
                                             | (0x800U 
                                                & ((IData)(
                                                           (vlSelfRef.io_in1 
                                                            >> 0x14U)) 
                                                   << 0xbU))))) 
                                      | ((((0x700U 
                                            & (RocketALU__DOT___GEN_24 
                                               << 8U)) 
                                           | (0x280U 
                                              & ((0x600U 
                                                  & ((IData)(
                                                             (vlSelfRef.io_in1 
                                                              >> 0x16U)) 
                                                     << 9U)) 
                                                 | (0x180U 
                                                    & ((IData)(
                                                               (vlSelfRef.io_in1 
                                                                >> 0x18U)) 
                                                       << 7U))))) 
                                          | ((0x40U 
                                              & ((IData)(
                                                         (vlSelfRef.io_in1 
                                                          >> 0x19U)) 
                                                 << 6U)) 
                                             | (0x20U 
                                                & ((IData)(
                                                           (vlSelfRef.io_in1 
                                                            >> 0x1aU)) 
                                                   << 5U)))) 
                                         | (((0x10U 
                                              & ((IData)(
                                                         (vlSelfRef.io_in1 
                                                          >> 0x1bU)) 
                                                 << 4U)) 
                                             | ((8U 
                                                 & ((IData)(
                                                            (vlSelfRef.io_in1 
                                                             >> 0x1cU)) 
                                                    << 3U)) 
                                                | (4U 
                                                   & ((IData)(
                                                              (vlSelfRef.io_in1 
                                                               >> 0x1dU)) 
                                                      << 2U)))) 
                                            | ((2U 
                                                & ((IData)(
                                                           (vlSelfRef.io_in1 
                                                            >> 0x1eU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelfRef.io_in1 
                                                             >> 0x1fU))))))));
    RocketALU__DOT___GEN_25[7U] = 1U;
    vlSelfRef.io_cmp_out = ((IData)(vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rotin_T) 
                            ^ ((IData)(vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_in2_inv_T)
                                ? (IData)(vlSelfRef.RocketALU__DOT__slt)
                                : (0ULL == vlSelfRef.RocketALU__DOT__in1_xor_in2)));
    RocketALU__DOT___GEN_0 = ((0xff00ff00U & (((IData)(vlSelfRef.io_in1) 
                                               << 0x10U) 
                                              | (0xff00U 
                                                 & (RocketALU__DOT___GEN 
                                                    >> 0x10U)))) 
                              | (0xff00ffU & RocketALU__DOT___GEN));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_10 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(5U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(5U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_11 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(6U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(6U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_12 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(7U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(7U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_13 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(8U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(8U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_14 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(9U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(9U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_15 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0xaU) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0xaU) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_16 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0xbU) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0xbU) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_17 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0xcU) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0xcU) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_18 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0xdU) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0xdU) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_19 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0xeU) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0xeU) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_20 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0xfU) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0xfU) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_21 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x10U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x10U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_22 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x11U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x11U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_23 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x12U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x12U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_24 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x13U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x13U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_25 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x14U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x14U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_26 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x15U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x15U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_27 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x16U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x16U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_28 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x17U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x17U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_29 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x18U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x18U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_30 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x19U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x19U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_31 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x1aU) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x1aU) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_32 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x1bU) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x1bU) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_33 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x1cU) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x1cU) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_34 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x1dU) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x1dU) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_35 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x1eU) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x1eU) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_36 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x1fU) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x1fU) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_37 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x20U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x20U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_38 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x21U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x21U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_39 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x22U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x22U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_40 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x23U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x23U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_41 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x24U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x24U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_42 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x25U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x25U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_43 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x26U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x26U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_44 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x27U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x27U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_45 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x28U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x28U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_46 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x29U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x29U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_47 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x2aU) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x2aU) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_48 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x2bU) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x2bU) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_49 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x2cU) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x2cU) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_5 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U) 
                                                >> 5U))] 
                 >> (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_50 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x2dU) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x2dU) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_51 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x2eU) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x2eU) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_52 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x2fU) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x2fU) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_53 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x30U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x30U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_54 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x31U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x31U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_55 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x32U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x32U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_56 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x33U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x33U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_57 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x34U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x34U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_58 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x35U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x35U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_59 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x36U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x36U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_6 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(1U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(1U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_60 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x37U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x37U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_61 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x38U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x38U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_62 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x39U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x39U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_63 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x3aU) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x3aU) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_64 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x3bU) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x3bU) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_65 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x3cU) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x3cU) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_66 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x3dU) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x3dU) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_67 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x3eU) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x3eU) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_68 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(0x3fU) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(0x3fU) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_7 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(2U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(2U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_8 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(3U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(3U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_9 
        = (1U & (RocketALU__DOT___GEN_25[(7U & (((IData)(4U) 
                                                 + 
                                                 VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)) 
                                                >> 5U))] 
                 >> (0x1fU & ((IData)(4U) + VL_SHIFTL_III(8,8,32, (IData)(RocketALU__DOT___tz_in_T_3), 6U)))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05Fio___05Fs___05Fcmp_out 
        = vlSelfRef.io_cmp_out;
    RocketALU__DOT___GEN_1 = ((0xf0f0f0f0U & (((IData)(vlSelfRef.io_in1) 
                                               << 0x18U) 
                                              | (0xfffff0U 
                                                 & (RocketALU__DOT___GEN_0 
                                                    >> 8U)))) 
                              | (0xf0f0f0fU & RocketALU__DOT___GEN_0));
    RocketALU__DOT___GEN_2 = (0x333333333333ULL & (
                                                   ((QData)((IData)(
                                                                    (0xfU 
                                                                     & (IData)(vlSelfRef.io_in1)))) 
                                                    << 0x2aU) 
                                                   | (((QData)((IData)(RocketALU__DOT___GEN_1)) 
                                                       << 0xaU) 
                                                      | (QData)((IData)(
                                                                        ((0x3c0U 
                                                                          & (RocketALU__DOT___GEN_0 
                                                                             << 2U)) 
                                                                         | ((0x3cU 
                                                                             & (RocketALU__DOT___GEN 
                                                                                >> 6U)) 
                                                                            | (3U 
                                                                               & (RocketALU__DOT___GEN 
                                                                                >> 0xeU)))))))));
    RocketALU__DOT___GEN_3 = ((IData)((RocketALU__DOT___GEN_2 
                                       >> 0xeU)) | 
                              (0x33333333U & RocketALU__DOT___GEN_1));
    RocketALU__DOT___GEN_4 = (3U & ((IData)((RocketALU__DOT___GEN_2 
                                             >> 0xaU)) 
                                    | (RocketALU__DOT___GEN_0 
                                       >> 4U)));
    RocketALU__DOT___GEN_5 = ((0xfcU & ((IData)(RocketALU__DOT___GEN_2) 
                                        << 2U)) | (0x33U 
                                                   & ((0xf0U 
                                                       & (RocketALU__DOT___GEN 
                                                          >> 8U)) 
                                                      | (0xfU 
                                                         & (vlSelfRef.RocketALU__DOT__shin_hi 
                                                            >> 0x10U)))));
    RocketALU__DOT___GEN_6 = (0x55555555555555ULL & 
                              (((QData)((IData)((3U 
                                                 & (IData)(vlSelfRef.io_in1)))) 
                                << 0x35U) | (((QData)((IData)(RocketALU__DOT___GEN_3)) 
                                              << 0x15U) 
                                             | (QData)((IData)(
                                                               ((((0x180000U 
                                                                   & (RocketALU__DOT___GEN_1 
                                                                      << 0x11U)) 
                                                                  | ((IData)(RocketALU__DOT___GEN_4) 
                                                                     << 0x11U)) 
                                                                 | ((0x18000U 
                                                                     & (RocketALU__DOT___GEN_0 
                                                                        << 9U)) 
                                                                    | (0x6000U 
                                                                       & (RocketALU__DOT___GEN 
                                                                          << 5U)))) 
                                                                | (((IData)(RocketALU__DOT___GEN_5) 
                                                                    << 5U) 
                                                                   | ((0x18U 
                                                                       & (vlSelfRef.RocketALU__DOT__shin_hi 
                                                                          >> 0xfU)) 
                                                                      | ((6U 
                                                                          & (vlSelfRef.RocketALU__DOT__shin_hi 
                                                                             >> 0x13U)) 
                                                                         | (1U 
                                                                            & (vlSelfRef.RocketALU__DOT__shin_hi 
                                                                               >> 0x17U)))))))))));
    vlSelfRef.RocketALU__DOT__shin = ((IData)(RocketALU__DOT___shin_T_6)
                                       ? (((QData)((IData)(vlSelfRef.RocketALU__DOT__shin_hi)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelfRef.io_in1)))
                                       : (((QData)((IData)(
                                                           (1U 
                                                            & (IData)(vlSelfRef.io_in1)))) 
                                           << 0x3fU) 
                                          | (((QData)((IData)(
                                                              ((IData)(
                                                                       (RocketALU__DOT___GEN_6 
                                                                        >> 0x17U)) 
                                                               | (0x55555555U 
                                                                  & RocketALU__DOT___GEN_3)))) 
                                              << 0x1fU) 
                                             | (QData)((IData)(
                                                               (((0x40000000U 
                                                                  & (RocketALU__DOT___GEN_3 
                                                                     << 0x1dU)) 
                                                                 | ((0x20000000U 
                                                                     & (((IData)(
                                                                                (RocketALU__DOT___GEN_6 
                                                                                >> 0x15U)) 
                                                                         << 0x1dU) 
                                                                        | (0xe0000000U 
                                                                           & (RocketALU__DOT___GEN_1 
                                                                              << 0x1bU)))) 
                                                                    | (((0x10000000U 
                                                                         & (RocketALU__DOT___GEN_1 
                                                                            << 0x19U)) 
                                                                        | (0x8000000U 
                                                                           & ((IData)(RocketALU__DOT___GEN_4) 
                                                                              << 0x1bU))) 
                                                                       | ((0x7800000U 
                                                                           & (((IData)(
                                                                                (RocketALU__DOT___GEN_6 
                                                                                >> 0xfU)) 
                                                                               << 0x17U) 
                                                                              | (0x2800000U 
                                                                                & ((0x6000000U 
                                                                                & (RocketALU__DOT___GEN_0 
                                                                                << 0x13U)) 
                                                                                | (0x1800000U 
                                                                                & (RocketALU__DOT___GEN 
                                                                                << 0xfU)))))) 
                                                                          | (0x7f8000U 
                                                                             & (((IData)(
                                                                                (RocketALU__DOT___GEN_6 
                                                                                >> 7U)) 
                                                                                << 0xfU) 
                                                                                | (0x2a8000U 
                                                                                & ((IData)(RocketALU__DOT___GEN_5) 
                                                                                << 0xfU)))))))) 
                                                                | ((((0x4000U 
                                                                      & ((IData)(RocketALU__DOT___GEN_5) 
                                                                         << 0xdU)) 
                                                                     | (0x2000U 
                                                                        & (((IData)(
                                                                                (RocketALU__DOT___GEN_6 
                                                                                >> 5U)) 
                                                                            << 0xdU) 
                                                                           | (0x7ffe000U 
                                                                              & (vlSelfRef.RocketALU__DOT__shin_hi 
                                                                                >> 5U))))) 
                                                                    | ((0x1000U 
                                                                        & (vlSelfRef.RocketALU__DOT__shin_hi 
                                                                           >> 7U)) 
                                                                       | ((0x800U 
                                                                           & (vlSelfRef.RocketALU__DOT__shin_hi 
                                                                              >> 9U)) 
                                                                          | ((0x700U 
                                                                              & ((IData)(RocketALU__DOT___GEN_6) 
                                                                                << 8U)) 
                                                                             | (0x280U 
                                                                                & ((0x600U 
                                                                                & (vlSelfRef.RocketALU__DOT__shin_hi 
                                                                                >> 0xdU)) 
                                                                                | (0x180U 
                                                                                & (vlSelfRef.RocketALU__DOT__shin_hi 
                                                                                >> 0x11U)))))))) 
                                                                   | ((((0x40U 
                                                                         & (vlSelfRef.RocketALU__DOT__shin_hi 
                                                                            >> 0x13U)) 
                                                                        | (0x20U 
                                                                           & (vlSelfRef.RocketALU__DOT__shin_hi 
                                                                              >> 0x15U))) 
                                                                       | ((0x10U 
                                                                           & (vlSelfRef.RocketALU__DOT__shin_hi 
                                                                              >> 0x17U)) 
                                                                          | (8U 
                                                                             & (vlSelfRef.RocketALU__DOT__shin_hi 
                                                                                >> 0x19U)))) 
                                                                      | ((4U 
                                                                          & (vlSelfRef.RocketALU__DOT__shin_hi 
                                                                             >> 0x1bU)) 
                                                                         | ((2U 
                                                                             & (vlSelfRef.RocketALU__DOT__shin_hi 
                                                                                >> 0x1dU)) 
                                                                            | (vlSelfRef.RocketALU__DOT__shin_hi 
                                                                               >> 0x1fU)))))))))));
    __Vtemp_2[0U] = (IData)(vlSelfRef.RocketALU__DOT__shin);
    __Vtemp_2[1U] = (IData)((vlSelfRef.RocketALU__DOT__shin 
                             >> 0x20U));
    __Vtemp_2[2U] = ((IData)(vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_in2_inv_T) 
                     & (IData)((vlSelfRef.RocketALU__DOT__shin 
                                >> 0x3fU)));
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_3, __Vtemp_2, (
                                                   (((IData)(
                                                             (vlSelfRef.io_in2 
                                                              >> 5U)) 
                                                     & (IData)(vlSelfRef.io_dw)) 
                                                    << 5U) 
                                                   | (0x1fU 
                                                      & (IData)(vlSelfRef.io_in2))));
    RocketALU__DOT___shout_r_T_5[0U] = __Vtemp_3[0U];
    RocketALU__DOT___shout_r_T_5[1U] = __Vtemp_3[1U];
    RocketALU__DOT___shout_r_T_5[2U] = (1U & __Vtemp_3[2U]);
    RocketALU__DOT___GEN_7 = ((0xf0f0U & ((0xff00U 
                                           & (RocketALU__DOT___shout_r_T_5[0U] 
                                              >> 8U)) 
                                          | (0xf0U 
                                             & (RocketALU__DOT___shout_r_T_5[0U] 
                                                >> 0x18U)))) 
                              | (0xf0fU & ((0xff00U 
                                            & (RocketALU__DOT___shout_r_T_5[0U] 
                                               >> 0x10U)) 
                                           | (0xffU 
                                              & RocketALU__DOT___shout_r_T_5[1U]))));
    RocketALU__DOT___GEN_8 = (0x3333333333ULL & (((QData)((IData)(
                                                                  ((0xf00U 
                                                                    & RocketALU__DOT___shout_r_T_5[0U]) 
                                                                   | ((0xf0U 
                                                                       & (RocketALU__DOT___shout_r_T_5[0U] 
                                                                          >> 8U)) 
                                                                      | (0xfU 
                                                                         & (RocketALU__DOT___shout_r_T_5[0U] 
                                                                            >> 0x10U)))))) 
                                                  << 0x1aU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(RocketALU__DOT___GEN_7) 
                                                                     << 0xaU) 
                                                                    | ((0x3c0U 
                                                                        & (RocketALU__DOT___shout_r_T_5[1U] 
                                                                           << 2U)) 
                                                                       | ((0x3cU 
                                                                           & (RocketALU__DOT___shout_r_T_5[1U] 
                                                                              >> 6U)) 
                                                                          | (3U 
                                                                             & (RocketALU__DOT___shout_r_T_5[1U] 
                                                                                >> 0xeU)))))))));
    RocketALU__DOT___GEN_9 = (0xffU & ((IData)((RocketALU__DOT___GEN_8 
                                                >> 0x1eU)) 
                                       | (0x33U & (
                                                   (0xf0U 
                                                    & (RocketALU__DOT___shout_r_T_5[0U] 
                                                       >> 8U)) 
                                                   | (0xfU 
                                                      & (RocketALU__DOT___shout_r_T_5[0U] 
                                                         >> 0x10U))))));
    RocketALU__DOT___GEN_10 = (0xffffU & ((IData)((RocketALU__DOT___GEN_8 
                                                   >> 0xeU)) 
                                          | (0x3333U 
                                             & (IData)(RocketALU__DOT___GEN_7))));
    RocketALU__DOT___GEN_11 = (3U & ((IData)((RocketALU__DOT___GEN_8 
                                              >> 0xaU)) 
                                     | ((RocketALU__DOT___shout_r_T_5[1U] 
                                         << 0x1cU) 
                                        | (RocketALU__DOT___shout_r_T_5[1U] 
                                           >> 4U))));
    RocketALU__DOT___GEN_12 = ((0xfcU & ((IData)(RocketALU__DOT___GEN_8) 
                                         << 2U)) | 
                               (0x33U & ((0xf0U & (
                                                   RocketALU__DOT___shout_r_T_5[1U] 
                                                   >> 8U)) 
                                         | (0xfU & 
                                            (RocketALU__DOT___shout_r_T_5[1U] 
                                             >> 0x10U)))));
    RocketALU__DOT___GEN_13 = (0x5555555555555ULL & 
                               (((QData)((IData)(((
                                                   (0xc0000000U 
                                                    & (RocketALU__DOT___shout_r_T_5[0U] 
                                                       << 0x1aU)) 
                                                   | ((0x30000000U 
                                                       & (RocketALU__DOT___shout_r_T_5[0U] 
                                                          << 0x16U)) 
                                                      | ((0xc000000U 
                                                          & (RocketALU__DOT___shout_r_T_5[0U] 
                                                             << 0x12U)) 
                                                         | ((IData)(RocketALU__DOT___GEN_9) 
                                                            << 0x12U)))) 
                                                  | (((IData)(RocketALU__DOT___GEN_10) 
                                                      << 2U) 
                                                     | (3U 
                                                        & ((IData)(RocketALU__DOT___GEN_7) 
                                                           >> 2U)))))) 
                                 << 0x13U) | (QData)((IData)(
                                                             ((((IData)(RocketALU__DOT___GEN_11) 
                                                                << 0x11U) 
                                                               | ((0x18000U 
                                                                   & (RocketALU__DOT___shout_r_T_5[1U] 
                                                                      << 9U)) 
                                                                  | (0x6000U 
                                                                     & (RocketALU__DOT___shout_r_T_5[1U] 
                                                                        << 5U)))) 
                                                              | (((IData)(RocketALU__DOT___GEN_12) 
                                                                  << 5U) 
                                                                 | ((0x18U 
                                                                     & (RocketALU__DOT___shout_r_T_5[1U] 
                                                                        >> 0xfU)) 
                                                                    | ((6U 
                                                                        & (RocketALU__DOT___shout_r_T_5[1U] 
                                                                           >> 0x13U)) 
                                                                       | (1U 
                                                                          & (RocketALU__DOT___shout_r_T_5[1U] 
                                                                             >> 0x17U))))))))));
    vlSelfRef.RocketALU__DOT__out = (((IData)(vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_out_T_2) 
                                      | (IData)(vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_out_T))
                                      ? vlSelfRef.io_adder_out
                                      : ((QData)((IData)(
                                                         ((0xbU 
                                                           < (IData)(vlSelfRef.io_fn)) 
                                                          & ((~ 
                                                              ((IData)(vlSelfRef.io_fn) 
                                                               >> 4U)) 
                                                             & (IData)(vlSelfRef.RocketALU__DOT__slt))))) 
                                         | (((IData)(vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_logic_T_6)
                                              ? vlSelfRef.RocketALU__DOT__in1_xor_in2
                                              : 0ULL) 
                                            | (((IData)(vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_logic_T_14)
                                                 ? 
                                                (vlSelfRef.io_in1 
                                                 & vlSelfRef.RocketALU__DOT__in2_inv)
                                                 : 0ULL) 
                                               | (((IData)(vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shout_T_4)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     RocketALU__DOT___shout_r_T_5[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      RocketALU__DOT___shout_r_T_5[0U])))
                                                    : 0ULL) 
                                                  | ((IData)(vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shout_T_6)
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (((0x10000U 
                                                                          & (RocketALU__DOT___shout_r_T_5[0U] 
                                                                             << 0x10U)) 
                                                                         | ((0x8000U 
                                                                             & (RocketALU__DOT___shout_r_T_5[0U] 
                                                                                << 0xeU)) 
                                                                            | (0x4000U 
                                                                               & (RocketALU__DOT___shout_r_T_5[0U] 
                                                                                << 0xcU)))) 
                                                                        | ((0x2000U 
                                                                            & (RocketALU__DOT___shout_r_T_5[0U] 
                                                                               << 0xaU)) 
                                                                           | ((0x1000U 
                                                                               & (RocketALU__DOT___shout_r_T_5[0U] 
                                                                                << 8U)) 
                                                                              | ((0xf00U 
                                                                                & (((IData)(
                                                                                (RocketALU__DOT___GEN_13 
                                                                                >> 0x2fU)) 
                                                                                << 8U) 
                                                                                | (0x500U 
                                                                                & ((0xc00U 
                                                                                & (RocketALU__DOT___shout_r_T_5[0U] 
                                                                                << 4U)) 
                                                                                | (0x300U 
                                                                                & RocketALU__DOT___shout_r_T_5[0U]))))) 
                                                                                | (0xffU 
                                                                                & ((IData)(
                                                                                (RocketALU__DOT___GEN_13 
                                                                                >> 0x27U)) 
                                                                                | (0x55U 
                                                                                & (IData)(RocketALU__DOT___GEN_9)))))))))) 
                                                       << 0x2fU) 
                                                      | (((QData)((IData)(
                                                                          ((0xffff00U 
                                                                            & (((IData)(
                                                                                (RocketALU__DOT___GEN_13 
                                                                                >> 0x17U)) 
                                                                                << 8U) 
                                                                               | (0x555500U 
                                                                                & ((IData)(RocketALU__DOT___GEN_10) 
                                                                                << 8U)))) 
                                                                           | ((0x80U 
                                                                               & ((IData)(RocketALU__DOT___GEN_10) 
                                                                                << 6U)) 
                                                                              | ((0x40U 
                                                                                & (((IData)(
                                                                                (RocketALU__DOT___GEN_13 
                                                                                >> 0x15U)) 
                                                                                << 6U) 
                                                                                | (0xffffffc0U 
                                                                                & ((IData)(RocketALU__DOT___GEN_7) 
                                                                                << 4U)))) 
                                                                                | (((0x20U 
                                                                                & ((IData)(RocketALU__DOT___GEN_7) 
                                                                                << 2U)) 
                                                                                | (0x10U 
                                                                                & ((IData)(RocketALU__DOT___GEN_11) 
                                                                                << 4U))) 
                                                                                | (0xfU 
                                                                                & ((IData)(
                                                                                (RocketALU__DOT___GEN_13 
                                                                                >> 0xfU)) 
                                                                                | (5U 
                                                                                & ((0xcU 
                                                                                & (RocketALU__DOT___shout_r_T_5[1U] 
                                                                                >> 4U)) 
                                                                                | (3U 
                                                                                & (RocketALU__DOT___shout_r_T_5[1U] 
                                                                                >> 8U)))))))))))) 
                                                          << 0x17U) 
                                                         | (QData)((IData)(
                                                                           (((0x7f8000U 
                                                                              & (((IData)(
                                                                                (RocketALU__DOT___GEN_13 
                                                                                >> 7U)) 
                                                                                << 0xfU) 
                                                                                | (0x2a8000U 
                                                                                & ((IData)(RocketALU__DOT___GEN_12) 
                                                                                << 0xfU)))) 
                                                                             | (((0x4000U 
                                                                                & ((IData)(RocketALU__DOT___GEN_12) 
                                                                                << 0xdU)) 
                                                                                | (0x2000U 
                                                                                & (((IData)(
                                                                                (RocketALU__DOT___GEN_13 
                                                                                >> 5U)) 
                                                                                << 0xdU) 
                                                                                | (0x7ffe000U 
                                                                                & (RocketALU__DOT___shout_r_T_5[1U] 
                                                                                >> 5U))))) 
                                                                                | ((0x1000U 
                                                                                & (RocketALU__DOT___shout_r_T_5[1U] 
                                                                                >> 7U)) 
                                                                                | (0x800U 
                                                                                & (RocketALU__DOT___shout_r_T_5[1U] 
                                                                                >> 9U))))) 
                                                                            | ((((0x700U 
                                                                                & ((IData)(RocketALU__DOT___GEN_13) 
                                                                                << 8U)) 
                                                                                | (0x280U 
                                                                                & ((0x600U 
                                                                                & (RocketALU__DOT___shout_r_T_5[1U] 
                                                                                >> 0xdU)) 
                                                                                | (0x180U 
                                                                                & (RocketALU__DOT___shout_r_T_5[1U] 
                                                                                >> 0x11U))))) 
                                                                                | ((0x40U 
                                                                                & (RocketALU__DOT___shout_r_T_5[1U] 
                                                                                >> 0x13U)) 
                                                                                | (0x20U 
                                                                                & (RocketALU__DOT___shout_r_T_5[1U] 
                                                                                >> 0x15U)))) 
                                                                               | (((0x10U 
                                                                                & (RocketALU__DOT___shout_r_T_5[1U] 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (RocketALU__DOT___shout_r_T_5[1U] 
                                                                                >> 0x19U)) 
                                                                                | (4U 
                                                                                & (RocketALU__DOT___shout_r_T_5[1U] 
                                                                                >> 0x1bU)))) 
                                                                                | ((2U 
                                                                                & (RocketALU__DOT___shout_r_T_5[1U] 
                                                                                >> 0x1dU)) 
                                                                                | (RocketALU__DOT___shout_r_T_5[1U] 
                                                                                >> 0x1fU)))))))))
                                                      : 0ULL))))));
    vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_io_out_T_1 
        = (1U & (IData)((vlSelfRef.RocketALU__DOT__out 
                         >> 0x1fU)));
    vlSelfRef.io_out = ((IData)(vlSelfRef.io_dw) ? vlSelfRef.RocketALU__DOT__out
                         : (((QData)((IData)((- (IData)((IData)(vlSelfRef._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_io_out_T_1))))) 
                             << 0x20U) | (QData)((IData)(vlSelfRef.RocketALU__DOT__out))));
}

void VRocketALU___024root___eval_triggers__ico(VRocketALU___024root* vlSelf);

bool VRocketALU___024root___eval_phase__ico(VRocketALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRocketALU___024root___eval_phase__ico\n"); );
    VRocketALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VRocketALU___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VRocketALU___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VRocketALU___024root___eval_act(VRocketALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRocketALU___024root___eval_act\n"); );
    VRocketALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VRocketALU___024root___eval_nba(VRocketALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRocketALU___024root___eval_nba\n"); );
    VRocketALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VRocketALU___024root___eval_triggers__act(VRocketALU___024root* vlSelf);

bool VRocketALU___024root___eval_phase__act(VRocketALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRocketALU___024root___eval_phase__act\n"); );
    VRocketALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VRocketALU___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VRocketALU___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VRocketALU___024root___eval_phase__nba(VRocketALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRocketALU___024root___eval_phase__nba\n"); );
    VRocketALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VRocketALU___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRocketALU___024root___dump_triggers__ico(VRocketALU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRocketALU___024root___dump_triggers__nba(VRocketALU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRocketALU___024root___dump_triggers__act(VRocketALU___024root* vlSelf);
#endif  // VL_DEBUG

void VRocketALU___024root___eval(VRocketALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRocketALU___024root___eval\n"); );
    VRocketALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VRocketALU___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("RocketALU.sv", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VRocketALU___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VRocketALU___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("RocketALU.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VRocketALU___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("RocketALU.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VRocketALU___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VRocketALU___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VRocketALU___024root___eval_debug_assertions(VRocketALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRocketALU___024root___eval_debug_assertions\n"); );
    VRocketALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY(((vlSelfRef.io_dw & 0xfeU)))) {
        Verilated::overWidthError("io_dw");}
    if (VL_UNLIKELY(((vlSelfRef.io_fn & 0xe0U)))) {
        Verilated::overWidthError("io_fn");}
}
#endif  // VL_DEBUG
