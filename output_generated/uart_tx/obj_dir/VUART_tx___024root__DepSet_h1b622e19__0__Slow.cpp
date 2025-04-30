// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUART_tx.h for the primary calling header

#include "VUART_tx__pch.h"
#include "VUART_tx___024root.h"

VL_ATTR_COLD void VUART_tx___024root___eval_static(VUART_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___eval_static\n"); );
}

VL_ATTR_COLD void VUART_tx___024root___eval_initial(VUART_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
}

VL_ATTR_COLD void VUART_tx___024root___eval_final(VUART_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VUART_tx___024root___dump_triggers__stl(VUART_tx___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VUART_tx___024root___eval_phase__stl(VUART_tx___024root* vlSelf);

VL_ATTR_COLD void VUART_tx___024root___eval_settle(VUART_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VUART_tx___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("UART_tx.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VUART_tx___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VUART_tx___024root___dump_triggers__stl(VUART_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VUART_tx___024root___stl_sequent__TOP__0(VUART_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_1 
        = vlSelf->io_i_tx_trig;
    vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T 
        = (0U == (IData)(vlSelf->UART_tx__DOT__stateReg));
    vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_2 
        = (1U == (IData)(vlSelf->UART_tx__DOT__stateReg));
    vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_4 
        = (2U == (IData)(vlSelf->UART_tx__DOT__stateReg));
    vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_7 
        = (3U == (IData)(vlSelf->UART_tx__DOT__stateReg));
    vlSelf->_reg_signals_UART_tx___05FI___05Flocal___05FI___05FstateReg 
        = vlSelf->UART_tx__DOT__stateReg;
    vlSelf->_reg_signals_UART_tx___05FI___05Flocal___05FI___05FclkCnterReg 
        = vlSelf->UART_tx__DOT__clkCnterReg;
    vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_6 
        = (1U & (~ ((IData)(vlSelf->UART_tx__DOT__bitCnterReg) 
                    >> 3U)));
    vlSelf->_reg_signals_UART_tx___05FI___05Flocal___05FI___05FbitCnterReg 
        = vlSelf->UART_tx__DOT__bitCnterReg;
    vlSelf->_reg_signals_UART_tx___05FI___05Flocal___05FI___05FinDataReg 
        = vlSelf->UART_tx__DOT__inDataReg;
    vlSelf->io_o_tx_busy = vlSelf->UART_tx__DOT__outTxBusyReg;
    vlSelf->io_o_tx_done = vlSelf->UART_tx__DOT__outTxDoneReg;
    vlSelf->io_o_serial_data = vlSelf->UART_tx__DOT__outDataReg;
    vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_3 
        = (0x56U > (IData)(vlSelf->UART_tx__DOT__clkCnterReg));
    vlSelf->_reg_signals_UART_tx___05FI___05Flocal___05FI___05FoutTxBusyReg 
        = vlSelf->io_o_tx_busy;
    vlSelf->_reg_signals_UART_tx___05FI___05Flocal___05FI___05FoutTxDoneReg 
        = vlSelf->io_o_tx_done;
    vlSelf->_reg_signals_UART_tx___05FI___05Flocal___05FI___05FoutDataReg 
        = vlSelf->io_o_serial_data;
    vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_5 
        = vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_3;
    vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_8 
        = vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_3;
}

VL_ATTR_COLD void VUART_tx___024root___eval_stl(VUART_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VUART_tx___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VUART_tx___024root___eval_triggers__stl(VUART_tx___024root* vlSelf);

VL_ATTR_COLD bool VUART_tx___024root___eval_phase__stl(VUART_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VUART_tx___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VUART_tx___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VUART_tx___024root___dump_triggers__ico(VUART_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VUART_tx___024root___dump_triggers__act(VUART_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VUART_tx___024root___dump_triggers__nba(VUART_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VUART_tx___024root___ctor_var_reset(VUART_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_i_tx_trig = VL_RAND_RESET_I(1);
    vlSelf->io_i_data = VL_RAND_RESET_I(8);
    vlSelf->io_o_tx_busy = VL_RAND_RESET_I(1);
    vlSelf->io_o_tx_done = VL_RAND_RESET_I(1);
    vlSelf->io_o_serial_data = VL_RAND_RESET_I(1);
    vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T = VL_RAND_RESET_I(1);
    vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_1 = VL_RAND_RESET_I(1);
    vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_2 = VL_RAND_RESET_I(1);
    vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_3 = VL_RAND_RESET_I(1);
    vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_4 = VL_RAND_RESET_I(1);
    vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_5 = VL_RAND_RESET_I(1);
    vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_6 = VL_RAND_RESET_I(1);
    vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_7 = VL_RAND_RESET_I(1);
    vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_8 = VL_RAND_RESET_I(1);
    vlSelf->_reg_signals_UART_tx___05FI___05Flocal___05FI___05FbitCnterReg = VL_RAND_RESET_I(4);
    vlSelf->_reg_signals_UART_tx___05FI___05Flocal___05FI___05FclkCnterReg = VL_RAND_RESET_I(8);
    vlSelf->_reg_signals_UART_tx___05FI___05Flocal___05FI___05FinDataReg = VL_RAND_RESET_I(8);
    vlSelf->_reg_signals_UART_tx___05FI___05Flocal___05FI___05FoutDataReg = VL_RAND_RESET_I(1);
    vlSelf->_reg_signals_UART_tx___05FI___05Flocal___05FI___05FoutTxBusyReg = VL_RAND_RESET_I(1);
    vlSelf->_reg_signals_UART_tx___05FI___05Flocal___05FI___05FoutTxDoneReg = VL_RAND_RESET_I(1);
    vlSelf->_reg_signals_UART_tx___05FI___05Flocal___05FI___05FstateReg = VL_RAND_RESET_I(2);
    vlSelf->UART_tx__DOT__clkCnterReg = VL_RAND_RESET_I(8);
    vlSelf->UART_tx__DOT__bitCnterReg = VL_RAND_RESET_I(4);
    vlSelf->UART_tx__DOT__inDataReg = VL_RAND_RESET_I(8);
    vlSelf->UART_tx__DOT__outDataReg = VL_RAND_RESET_I(1);
    vlSelf->UART_tx__DOT__outTxBusyReg = VL_RAND_RESET_I(1);
    vlSelf->UART_tx__DOT__outTxDoneReg = VL_RAND_RESET_I(1);
    vlSelf->UART_tx__DOT__stateReg = VL_RAND_RESET_I(2);
    vlSelf->UART_tx__DOT__unnamedblk1__DOT___GEN_0 = VL_RAND_RESET_I(32);
    vlSelf->UART_tx__DOT__unnamedblk1__DOT___GEN_1 = VL_RAND_RESET_I(8);
    vlSelf->UART_tx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2 = VL_RAND_RESET_I(8);
    vlSelf->UART_tx__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___outDataReg_T = VL_RAND_RESET_I(8);
    vlSelf->UART_tx__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___outDataReg_T_2 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
