// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VWaveformGenerator.h for the primary calling header

#include "VWaveformGenerator__pch.h"
#include "VWaveformGenerator___024root.h"

void VWaveformGenerator___024root___ico_sequent__TOP__0(VWaveformGenerator___024root* vlSelf);

void VWaveformGenerator___024root___eval_ico(VWaveformGenerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval_ico\n"); );
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VWaveformGenerator___024root___ico_sequent__TOP__0(vlSelf);
    }
}

extern const VlWide<64>/*2047:0*/ VWaveformGenerator__ConstPool__CONST_h06e6967c_0;
extern const VlWide<64>/*2047:0*/ VWaveformGenerator__ConstPool__CONST_h87adaed3_0;
extern const VlWide<64>/*2047:0*/ VWaveformGenerator__ConstPool__CONST_hddbd57b3_0;

VL_INLINE_OPT void VWaveformGenerator___024root___ico_sequent__TOP__0(VWaveformGenerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___ico_sequent__TOP__0\n"); );
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ WaveformGenerator__DOT___phase_T;
    WaveformGenerator__DOT___phase_T = 0;
    CData/*0:0*/ WaveformGenerator__DOT____VdfgRegularize_h5ebbd5b8_0_0;
    WaveformGenerator__DOT____VdfgRegularize_h5ebbd5b8_0_0 = 0;
    // Body
    WaveformGenerator__DOT___phase_T = (0xffffU & ((IData)(vlSelfRef.WaveformGenerator__DOT__phaseAcc) 
                                                   + (IData)(vlSelfRef.io_phaseOffset)));
    vlSelfRef._cond_pred_WaveformGenerator___05FI___05Flocal___05FI___05F_T 
        = (0U == (IData)(vlSelfRef.io_waveType));
    vlSelfRef.io_output = (0xffU & ((((((0x8000U & (IData)(WaveformGenerator__DOT___phase_T))
                                         ? 0x81U : 0x7fU) 
                                       << 0x18U) | 
                                      (0xff0000U & 
                                       ((((0U == (0x1fU 
                                                  & VL_SHIFTL_III(11,11,32, 
                                                                  (0xffU 
                                                                   & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                      >> 8U)), 3U)))
                                           ? 0U : (
                                                   VWaveformGenerator__ConstPool__CONST_h06e6967c_0[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0x7ffU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0xffU 
                                                                       & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                          >> 8U)), 3U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0xffU 
                                                                      & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                         >> 8U)), 3U))))) 
                                         | (VWaveformGenerator__ConstPool__CONST_h06e6967c_0[
                                            (0x3fU 
                                             & (VL_SHIFTL_III(11,11,32, 
                                                              (0xffU 
                                                               & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                  >> 8U)), 3U) 
                                                >> 5U))] 
                                            >> (0x1fU 
                                                & VL_SHIFTL_III(11,11,32, 
                                                                (0xffU 
                                                                 & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                    >> 8U)), 3U)))) 
                                        << 0x10U))) 
                                     | ((0xff00U & 
                                         ((((0U == 
                                             (0x1fU 
                                              & VL_SHIFTL_III(11,11,32, 
                                                              (0xffU 
                                                               & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                  >> 8U)), 3U)))
                                             ? 0U : 
                                            (VWaveformGenerator__ConstPool__CONST_h87adaed3_0[
                                             (((IData)(7U) 
                                               + (0x7ffU 
                                                  & VL_SHIFTL_III(11,11,32, 
                                                                  (0xffU 
                                                                   & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                      >> 8U)), 3U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(11,11,32, 
                                                                  (0xffU 
                                                                   & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                      >> 8U)), 3U))))) 
                                           | (VWaveformGenerator__ConstPool__CONST_h87adaed3_0[
                                              (0x3fU 
                                               & (VL_SHIFTL_III(11,11,32, 
                                                                (0xffU 
                                                                 & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                    >> 8U)), 3U) 
                                                  >> 5U))] 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(11,11,32, 
                                                                  (0xffU 
                                                                   & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                      >> 8U)), 3U)))) 
                                          << 8U)) | 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0xffU 
                                                                      & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                         >> 8U)), 3U)))
                                                    ? 0U
                                                    : 
                                                   (VWaveformGenerator__ConstPool__CONST_hddbd57b3_0[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0x7ffU 
                                                       & VL_SHIFTL_III(11,11,32, 
                                                                       (0xffU 
                                                                        & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                           >> 8U)), 3U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0xffU 
                                                                       & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                          >> 8U)), 3U))))) 
                                                  | (VWaveformGenerator__ConstPool__CONST_hddbd57b3_0[
                                                     (0x3fU 
                                                      & (VL_SHIFTL_III(11,11,32, 
                                                                       (0xffU 
                                                                        & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                           >> 8U)), 3U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0xffU 
                                                                       & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                          >> 8U)), 3U))))))) 
                                    >> (0x1fU & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.io_waveType), 3U))));
    vlSelfRef._cond_pred_WaveformGenerator___05FI___05Flocal___05FI___05F_T_1 
        = ((~ (IData)(vlSelfRef._cond_pred_WaveformGenerator___05FI___05Flocal___05FI___05F_T)) 
           & (1U == (IData)(vlSelfRef.io_waveType)));
    WaveformGenerator__DOT____VdfgRegularize_h5ebbd5b8_0_0 
        = ((IData)(vlSelfRef._cond_pred_WaveformGenerator___05FI___05Flocal___05FI___05F_T) 
           | (1U == (IData)(vlSelfRef.io_waveType)));
    vlSelfRef._cond_pred_WaveformGenerator___05FI___05Flocal___05FI___05F_T_2 
        = ((~ (IData)(WaveformGenerator__DOT____VdfgRegularize_h5ebbd5b8_0_0)) 
           & (2U == (IData)(vlSelfRef.io_waveType)));
    vlSelfRef._cond_pred_WaveformGenerator___05FI___05Flocal___05FI___05F_T_3 
        = ((~ ((IData)(WaveformGenerator__DOT____VdfgRegularize_h5ebbd5b8_0_0) 
               | (2U == (IData)(vlSelfRef.io_waveType)))) 
           & (3U == (IData)(vlSelfRef.io_waveType)));
    vlSelfRef._mux_cond_WaveformGenerator___05FI___05Flocal___05FI___05F_io_output_T_4 
        = ((IData)(vlSelfRef._cond_pred_WaveformGenerator___05FI___05Flocal___05FI___05F_T_3) 
           & ((IData)(WaveformGenerator__DOT___phase_T) 
              >> 0xfU));
}

void VWaveformGenerator___024root___eval_triggers__ico(VWaveformGenerator___024root* vlSelf);

bool VWaveformGenerator___024root___eval_phase__ico(VWaveformGenerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval_phase__ico\n"); );
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VWaveformGenerator___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VWaveformGenerator___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VWaveformGenerator___024root___eval_act(VWaveformGenerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval_act\n"); );
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VWaveformGenerator___024root___nba_sequent__TOP__0(VWaveformGenerator___024root* vlSelf);

void VWaveformGenerator___024root___eval_nba(VWaveformGenerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval_nba\n"); );
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VWaveformGenerator___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VWaveformGenerator___024root___nba_sequent__TOP__0(VWaveformGenerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___nba_sequent__TOP__0\n"); );
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ WaveformGenerator__DOT___phase_T;
    WaveformGenerator__DOT___phase_T = 0;
    // Body
    vlSelfRef.WaveformGenerator__DOT__phaseAcc = ((IData)(vlSelfRef.reset)
                                                   ? 0U
                                                   : 
                                                  (0xffffU 
                                                   & ((IData)(vlSelfRef.WaveformGenerator__DOT__phaseAcc) 
                                                      + (IData)(vlSelfRef.io_freqCtrl))));
    vlSelfRef._reg_signals_WaveformGenerator___05FI___05Flocal___05FI___05FphaseAcc 
        = vlSelfRef.WaveformGenerator__DOT__phaseAcc;
    WaveformGenerator__DOT___phase_T = (0xffffU & ((IData)(vlSelfRef.WaveformGenerator__DOT__phaseAcc) 
                                                   + (IData)(vlSelfRef.io_phaseOffset)));
    vlSelfRef.io_output = (0xffU & ((((((0x8000U & (IData)(WaveformGenerator__DOT___phase_T))
                                         ? 0x81U : 0x7fU) 
                                       << 0x18U) | 
                                      (0xff0000U & 
                                       ((((0U == (0x1fU 
                                                  & VL_SHIFTL_III(11,11,32, 
                                                                  (0xffU 
                                                                   & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                      >> 8U)), 3U)))
                                           ? 0U : (
                                                   VWaveformGenerator__ConstPool__CONST_h06e6967c_0[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0x7ffU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0xffU 
                                                                       & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                          >> 8U)), 3U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0xffU 
                                                                      & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                         >> 8U)), 3U))))) 
                                         | (VWaveformGenerator__ConstPool__CONST_h06e6967c_0[
                                            (0x3fU 
                                             & (VL_SHIFTL_III(11,11,32, 
                                                              (0xffU 
                                                               & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                  >> 8U)), 3U) 
                                                >> 5U))] 
                                            >> (0x1fU 
                                                & VL_SHIFTL_III(11,11,32, 
                                                                (0xffU 
                                                                 & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                    >> 8U)), 3U)))) 
                                        << 0x10U))) 
                                     | ((0xff00U & 
                                         ((((0U == 
                                             (0x1fU 
                                              & VL_SHIFTL_III(11,11,32, 
                                                              (0xffU 
                                                               & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                  >> 8U)), 3U)))
                                             ? 0U : 
                                            (VWaveformGenerator__ConstPool__CONST_h87adaed3_0[
                                             (((IData)(7U) 
                                               + (0x7ffU 
                                                  & VL_SHIFTL_III(11,11,32, 
                                                                  (0xffU 
                                                                   & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                      >> 8U)), 3U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(11,11,32, 
                                                                  (0xffU 
                                                                   & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                      >> 8U)), 3U))))) 
                                           | (VWaveformGenerator__ConstPool__CONST_h87adaed3_0[
                                              (0x3fU 
                                               & (VL_SHIFTL_III(11,11,32, 
                                                                (0xffU 
                                                                 & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                    >> 8U)), 3U) 
                                                  >> 5U))] 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(11,11,32, 
                                                                  (0xffU 
                                                                   & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                      >> 8U)), 3U)))) 
                                          << 8U)) | 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0xffU 
                                                                      & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                         >> 8U)), 3U)))
                                                    ? 0U
                                                    : 
                                                   (VWaveformGenerator__ConstPool__CONST_hddbd57b3_0[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0x7ffU 
                                                       & VL_SHIFTL_III(11,11,32, 
                                                                       (0xffU 
                                                                        & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                           >> 8U)), 3U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0xffU 
                                                                       & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                          >> 8U)), 3U))))) 
                                                  | (VWaveformGenerator__ConstPool__CONST_hddbd57b3_0[
                                                     (0x3fU 
                                                      & (VL_SHIFTL_III(11,11,32, 
                                                                       (0xffU 
                                                                        & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                           >> 8U)), 3U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0xffU 
                                                                       & ((IData)(WaveformGenerator__DOT___phase_T) 
                                                                          >> 8U)), 3U))))))) 
                                    >> (0x1fU & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.io_waveType), 3U))));
    vlSelfRef._mux_cond_WaveformGenerator___05FI___05Flocal___05FI___05F_io_output_T_4 
        = ((IData)(vlSelfRef._cond_pred_WaveformGenerator___05FI___05Flocal___05FI___05F_T_3) 
           & ((IData)(WaveformGenerator__DOT___phase_T) 
              >> 0xfU));
}

void VWaveformGenerator___024root___eval_triggers__act(VWaveformGenerator___024root* vlSelf);

bool VWaveformGenerator___024root___eval_phase__act(VWaveformGenerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval_phase__act\n"); );
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VWaveformGenerator___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VWaveformGenerator___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VWaveformGenerator___024root___eval_phase__nba(VWaveformGenerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval_phase__nba\n"); );
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VWaveformGenerator___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VWaveformGenerator___024root___dump_triggers__ico(VWaveformGenerator___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VWaveformGenerator___024root___dump_triggers__nba(VWaveformGenerator___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VWaveformGenerator___024root___dump_triggers__act(VWaveformGenerator___024root* vlSelf);
#endif  // VL_DEBUG

void VWaveformGenerator___024root___eval(VWaveformGenerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval\n"); );
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VWaveformGenerator___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("WaveformGenerator.sv", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VWaveformGenerator___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VWaveformGenerator___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("WaveformGenerator.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VWaveformGenerator___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("WaveformGenerator.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VWaveformGenerator___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VWaveformGenerator___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VWaveformGenerator___024root___eval_debug_assertions(VWaveformGenerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval_debug_assertions\n"); );
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY(((vlSelfRef.io_waveType & 0xfcU)))) {
        Verilated::overWidthError("io_waveType");}
}
#endif  // VL_DEBUG
