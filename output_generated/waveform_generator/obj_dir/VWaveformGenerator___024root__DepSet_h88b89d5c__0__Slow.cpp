// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VWaveformGenerator.h for the primary calling header

#include "VWaveformGenerator__pch.h"
#include "VWaveformGenerator___024root.h"

VL_ATTR_COLD void VWaveformGenerator___024root___eval_static(VWaveformGenerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval_static\n"); );
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
}

VL_ATTR_COLD void VWaveformGenerator___024root___eval_initial(VWaveformGenerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval_initial\n"); );
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VWaveformGenerator___024root___eval_final(VWaveformGenerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval_final\n"); );
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VWaveformGenerator___024root___dump_triggers__stl(VWaveformGenerator___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VWaveformGenerator___024root___eval_phase__stl(VWaveformGenerator___024root* vlSelf);

VL_ATTR_COLD void VWaveformGenerator___024root___eval_settle(VWaveformGenerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval_settle\n"); );
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VWaveformGenerator___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("WaveformGenerator.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VWaveformGenerator___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VWaveformGenerator___024root___dump_triggers__stl(VWaveformGenerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___dump_triggers__stl\n"); );
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void VWaveformGenerator___024root___stl_sequent__TOP__0(VWaveformGenerator___024root* vlSelf);

VL_ATTR_COLD void VWaveformGenerator___024root___eval_stl(VWaveformGenerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval_stl\n"); );
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VWaveformGenerator___024root___stl_sequent__TOP__0(vlSelf);
    }
}

extern const VlWide<64>/*2047:0*/ VWaveformGenerator__ConstPool__CONST_h06e6967c_0;
extern const VlWide<64>/*2047:0*/ VWaveformGenerator__ConstPool__CONST_h87adaed3_0;
extern const VlWide<64>/*2047:0*/ VWaveformGenerator__ConstPool__CONST_hddbd57b3_0;

VL_ATTR_COLD void VWaveformGenerator___024root___stl_sequent__TOP__0(VWaveformGenerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___stl_sequent__TOP__0\n"); );
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ WaveformGenerator__DOT___phase_T;
    WaveformGenerator__DOT___phase_T = 0;
    CData/*0:0*/ WaveformGenerator__DOT____VdfgRegularize_h5ebbd5b8_0_0;
    WaveformGenerator__DOT____VdfgRegularize_h5ebbd5b8_0_0 = 0;
    // Body
    vlSelfRef._reg_signals_WaveformGenerator___05FI___05Flocal___05FI___05FphaseAcc 
        = vlSelfRef.WaveformGenerator__DOT__phaseAcc;
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

VL_ATTR_COLD void VWaveformGenerator___024root___eval_triggers__stl(VWaveformGenerator___024root* vlSelf);

VL_ATTR_COLD bool VWaveformGenerator___024root___eval_phase__stl(VWaveformGenerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___eval_phase__stl\n"); );
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VWaveformGenerator___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VWaveformGenerator___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VWaveformGenerator___024root___dump_triggers__ico(VWaveformGenerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___dump_triggers__ico\n"); );
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void VWaveformGenerator___024root___dump_triggers__act(VWaveformGenerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___dump_triggers__act\n"); );
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void VWaveformGenerator___024root___dump_triggers__nba(VWaveformGenerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___dump_triggers__nba\n"); );
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void VWaveformGenerator___024root___ctor_var_reset(VWaveformGenerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root___ctor_var_reset\n"); );
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_waveType = VL_RAND_RESET_I(2);
    vlSelf->io_freqCtrl = VL_RAND_RESET_I(16);
    vlSelf->io_phaseOffset = VL_RAND_RESET_I(16);
    vlSelf->io_output = VL_RAND_RESET_I(8);
    vlSelf->_mux_cond_WaveformGenerator___05FI___05Flocal___05FI___05F_io_output_T_4 = VL_RAND_RESET_I(1);
    vlSelf->_cond_pred_WaveformGenerator___05FI___05Flocal___05FI___05F_T = VL_RAND_RESET_I(1);
    vlSelf->_cond_pred_WaveformGenerator___05FI___05Flocal___05FI___05F_T_1 = VL_RAND_RESET_I(1);
    vlSelf->_cond_pred_WaveformGenerator___05FI___05Flocal___05FI___05F_T_2 = VL_RAND_RESET_I(1);
    vlSelf->_cond_pred_WaveformGenerator___05FI___05Flocal___05FI___05F_T_3 = VL_RAND_RESET_I(1);
    vlSelf->_reg_signals_WaveformGenerator___05FI___05Flocal___05FI___05FphaseAcc = VL_RAND_RESET_I(16);
    vlSelf->WaveformGenerator__DOT__phaseAcc = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
}
