// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUART_rx.h for the primary calling header

#include "VUART_rx__pch.h"
#include "VUART_rx___024root.h"

VL_ATTR_COLD void VUART_rx___024root___eval_static(VUART_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___eval_static\n"); );
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
}

VL_ATTR_COLD void VUART_rx___024root___eval_initial(VUART_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___eval_initial\n"); );
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VUART_rx___024root___eval_final(VUART_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___eval_final\n"); );
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VUART_rx___024root___dump_triggers__stl(VUART_rx___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VUART_rx___024root___eval_phase__stl(VUART_rx___024root* vlSelf);

VL_ATTR_COLD void VUART_rx___024root___eval_settle(VUART_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___eval_settle\n"); );
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VUART_rx___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("UART_rx.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VUART_rx___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VUART_rx___024root___dump_triggers__stl(VUART_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___dump_triggers__stl\n"); );
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void VUART_rx___024root___stl_sequent__TOP__0(VUART_rx___024root* vlSelf);

VL_ATTR_COLD void VUART_rx___024root___eval_stl(VUART_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___eval_stl\n"); );
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VUART_rx___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VUART_rx___024root___stl_sequent__TOP__0(VUART_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___stl_sequent__TOP__0\n"); );
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_o_rx_done = vlSelfRef.UART_rx__DOT__outRxDoneReg;
    vlSelfRef._reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutRxDoneReg 
        = vlSelfRef.UART_rx__DOT__outRxDoneReg;
    vlSelfRef._reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_0 
        = vlSelfRef.UART_rx__DOT__outDataReg_0;
    vlSelfRef._reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_1 
        = vlSelfRef.UART_rx__DOT__outDataReg_1;
    vlSelfRef._reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_2 
        = vlSelfRef.UART_rx__DOT__outDataReg_2;
    vlSelfRef._reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_3 
        = vlSelfRef.UART_rx__DOT__outDataReg_3;
    vlSelfRef._reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_4 
        = vlSelfRef.UART_rx__DOT__outDataReg_4;
    vlSelfRef._reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_5 
        = vlSelfRef.UART_rx__DOT__outDataReg_5;
    vlSelfRef._reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_6 
        = vlSelfRef.UART_rx__DOT__outDataReg_6;
    vlSelfRef._reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_7 
        = vlSelfRef.UART_rx__DOT__outDataReg_7;
    vlSelfRef._reg_signals_UART_rx___05FI___05Flocal___05FI___05FbitCnterReg 
        = vlSelfRef.UART_rx__DOT__bitCnterReg;
    vlSelfRef._reg_signals_UART_rx___05FI___05Flocal___05FI___05FclkCnterReg 
        = vlSelfRef.UART_rx__DOT__clkCnterReg;
    vlSelfRef._reg_signals_UART_rx___05FI___05Flocal___05FI___05FserialDataReg 
        = vlSelfRef.UART_rx__DOT__serialDataReg;
    vlSelfRef._reg_signals_UART_rx___05FI___05Flocal___05FI___05FstateReg 
        = vlSelfRef.UART_rx__DOT__stateReg;
    vlSelfRef.UART_rx__DOT___GEN_3 = (0x8aU > (IData)(vlSelfRef.UART_rx__DOT__clkCnterReg));
    vlSelfRef.UART_rx__DOT___GEN_0 = (0x45U > (IData)(vlSelfRef.UART_rx__DOT__clkCnterReg));
    vlSelfRef.UART_rx__DOT___GEN_4 = (8U == (IData)(vlSelfRef.UART_rx__DOT__bitCnterReg));
    vlSelfRef.UART_rx__DOT___GEN = (1U == (IData)(vlSelfRef.UART_rx__DOT__stateReg));
    vlSelfRef.UART_rx__DOT___GEN_1 = (2U == (IData)(vlSelfRef.UART_rx__DOT__stateReg));
    vlSelfRef._reg_signals_UART_rx___05FI___05Flocal___05FI___05FserialDataReg_REG 
        = vlSelfRef.UART_rx__DOT__serialDataReg_REG;
    vlSelfRef.io_o_data = (((((IData)(vlSelfRef.UART_rx__DOT__outDataReg_7) 
                              << 7U) | ((IData)(vlSelfRef.UART_rx__DOT__outDataReg_6) 
                                        << 6U)) | (
                                                   ((IData)(vlSelfRef.UART_rx__DOT__outDataReg_5) 
                                                    << 5U) 
                                                   | ((IData)(vlSelfRef.UART_rx__DOT__outDataReg_4) 
                                                      << 4U))) 
                           | ((((IData)(vlSelfRef.UART_rx__DOT__outDataReg_3) 
                                << 3U) | ((IData)(vlSelfRef.UART_rx__DOT__outDataReg_2) 
                                          << 2U)) | 
                              (((IData)(vlSelfRef.UART_rx__DOT__outDataReg_1) 
                                << 1U) | (IData)(vlSelfRef.UART_rx__DOT__outDataReg_0))));
    vlSelfRef.UART_rx__DOT___GEN_5 = ((1U == (IData)(vlSelfRef.UART_rx__DOT__stateReg)) 
                                      | (2U == (IData)(vlSelfRef.UART_rx__DOT__stateReg)));
    vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T 
        = (0U == (IData)(vlSelfRef.UART_rx__DOT__stateReg));
    vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_1 
        = ((~ (IData)(vlSelfRef.UART_rx__DOT__serialDataReg)) 
           & (IData)(vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T));
    vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_10 
        = ((~ ((IData)(vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T) 
               | (IData)(vlSelfRef.UART_rx__DOT___GEN_5))) 
           & (3U == (IData)(vlSelfRef.UART_rx__DOT__stateReg)));
    vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_2 
        = ((~ (IData)(vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T)) 
           & (1U == (IData)(vlSelfRef.UART_rx__DOT__stateReg)));
    vlSelfRef.UART_rx__DOT___GEN_2 = ((IData)(vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T) 
                                      | (1U == (IData)(vlSelfRef.UART_rx__DOT__stateReg)));
    vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_11 
        = ((IData)(vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_10) 
           & (0x8aU > (IData)(vlSelfRef.UART_rx__DOT__clkCnterReg)));
    vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_3 
        = ((IData)(vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_2) 
           & (0x45U > (IData)(vlSelfRef.UART_rx__DOT__clkCnterReg)));
    vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_4 
        = ((IData)(vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_2) 
           & ((0x45U <= (IData)(vlSelfRef.UART_rx__DOT__clkCnterReg)) 
              & (~ (IData)(vlSelfRef.UART_rx__DOT__serialDataReg))));
    vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_5 
        = ((~ (IData)(vlSelfRef.UART_rx__DOT___GEN_2)) 
           & (2U == (IData)(vlSelfRef.UART_rx__DOT__stateReg)));
    vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_6 
        = ((IData)(vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_5) 
           & (0x8aU > (IData)(vlSelfRef.UART_rx__DOT__clkCnterReg)));
    vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_9 
        = ((IData)(vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_5) 
           & (8U == (IData)(vlSelfRef.UART_rx__DOT__bitCnterReg)));
    vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_8 
        = ((~ ((0x8aU > (IData)(vlSelfRef.UART_rx__DOT__clkCnterReg)) 
               | ((IData)(vlSelfRef.UART_rx__DOT__bitCnterReg) 
                  >> 3U))) & (IData)(vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_5));
}

VL_ATTR_COLD void VUART_rx___024root___eval_triggers__stl(VUART_rx___024root* vlSelf);

VL_ATTR_COLD bool VUART_rx___024root___eval_phase__stl(VUART_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___eval_phase__stl\n"); );
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VUART_rx___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VUART_rx___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VUART_rx___024root___dump_triggers__act(VUART_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___dump_triggers__act\n"); );
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void VUART_rx___024root___dump_triggers__nba(VUART_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___dump_triggers__nba\n"); );
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void VUART_rx___024root___ctor_var_reset(VUART_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___ctor_var_reset\n"); );
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_i_serial_data = VL_RAND_RESET_I(1);
    vlSelf->io_o_rx_done = VL_RAND_RESET_I(1);
    vlSelf->io_o_data = VL_RAND_RESET_I(8);
    vlSelf->_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T = VL_RAND_RESET_I(1);
    vlSelf->_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_1 = VL_RAND_RESET_I(1);
    vlSelf->_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_10 = VL_RAND_RESET_I(1);
    vlSelf->_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_11 = VL_RAND_RESET_I(1);
    vlSelf->_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_2 = VL_RAND_RESET_I(1);
    vlSelf->_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_3 = VL_RAND_RESET_I(1);
    vlSelf->_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_4 = VL_RAND_RESET_I(1);
    vlSelf->_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_5 = VL_RAND_RESET_I(1);
    vlSelf->_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_6 = VL_RAND_RESET_I(1);
    vlSelf->_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_8 = VL_RAND_RESET_I(1);
    vlSelf->_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_9 = VL_RAND_RESET_I(1);
    vlSelf->_reg_signals_UART_rx___05FI___05Flocal___05FI___05FbitCnterReg = VL_RAND_RESET_I(4);
    vlSelf->_reg_signals_UART_rx___05FI___05Flocal___05FI___05FclkCnterReg = VL_RAND_RESET_I(9);
    vlSelf->_reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_0 = VL_RAND_RESET_I(1);
    vlSelf->_reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_1 = VL_RAND_RESET_I(1);
    vlSelf->_reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_2 = VL_RAND_RESET_I(1);
    vlSelf->_reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_3 = VL_RAND_RESET_I(1);
    vlSelf->_reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_4 = VL_RAND_RESET_I(1);
    vlSelf->_reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_5 = VL_RAND_RESET_I(1);
    vlSelf->_reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_6 = VL_RAND_RESET_I(1);
    vlSelf->_reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_7 = VL_RAND_RESET_I(1);
    vlSelf->_reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutRxDoneReg = VL_RAND_RESET_I(1);
    vlSelf->_reg_signals_UART_rx___05FI___05Flocal___05FI___05FserialDataReg = VL_RAND_RESET_I(1);
    vlSelf->_reg_signals_UART_rx___05FI___05Flocal___05FI___05FserialDataReg_REG = VL_RAND_RESET_I(1);
    vlSelf->_reg_signals_UART_rx___05FI___05Flocal___05FI___05FstateReg = VL_RAND_RESET_I(2);
    vlSelf->UART_rx__DOT__clkCnterReg = VL_RAND_RESET_I(9);
    vlSelf->UART_rx__DOT__bitCnterReg = VL_RAND_RESET_I(4);
    vlSelf->UART_rx__DOT__outDataReg_0 = VL_RAND_RESET_I(1);
    vlSelf->UART_rx__DOT__outDataReg_1 = VL_RAND_RESET_I(1);
    vlSelf->UART_rx__DOT__outDataReg_2 = VL_RAND_RESET_I(1);
    vlSelf->UART_rx__DOT__outDataReg_3 = VL_RAND_RESET_I(1);
    vlSelf->UART_rx__DOT__outDataReg_4 = VL_RAND_RESET_I(1);
    vlSelf->UART_rx__DOT__outDataReg_5 = VL_RAND_RESET_I(1);
    vlSelf->UART_rx__DOT__outDataReg_6 = VL_RAND_RESET_I(1);
    vlSelf->UART_rx__DOT__outDataReg_7 = VL_RAND_RESET_I(1);
    vlSelf->UART_rx__DOT__outRxDoneReg = VL_RAND_RESET_I(1);
    vlSelf->UART_rx__DOT__stateReg = VL_RAND_RESET_I(2);
    vlSelf->UART_rx__DOT__serialDataReg_REG = VL_RAND_RESET_I(1);
    vlSelf->UART_rx__DOT__serialDataReg = VL_RAND_RESET_I(1);
    vlSelf->UART_rx__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->UART_rx__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->UART_rx__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->UART_rx__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->UART_rx__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->UART_rx__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->UART_rx__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->UART_rx__DOT__unnamedblk1__DOT___GEN_7 = VL_RAND_RESET_Q(36);
    vlSelf->UART_rx__DOT__unnamedblk1__DOT___GEN_8 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
