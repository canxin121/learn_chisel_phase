// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUART_rx.h for the primary calling header

#include "VUART_rx__pch.h"
#include "VUART_rx___024root.h"

VL_ATTR_COLD void VUART_rx___024root___eval_static(VUART_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___eval_static\n"); );
}

VL_ATTR_COLD void VUART_rx___024root___eval_initial(VUART_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
}

VL_ATTR_COLD void VUART_rx___024root___eval_final(VUART_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VUART_rx___024root___dump_triggers__stl(VUART_rx___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VUART_rx___024root___eval_phase__stl(VUART_rx___024root* vlSelf);

VL_ATTR_COLD void VUART_rx___024root___eval_settle(VUART_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___eval_settle\n"); );
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
            VUART_rx___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("UART_rx.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VUART_rx___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VUART_rx___024root___dump_triggers__stl(VUART_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VUART_rx___024root___stl_sequent__TOP__0(VUART_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->_rs___05Fs2 = vlSelf->UART_rx__DOT__outDataReg_0;
    vlSelf->_rs___05Fs3 = vlSelf->UART_rx__DOT__outDataReg_1;
    vlSelf->_rs___05Fs4 = vlSelf->UART_rx__DOT__outDataReg_2;
    vlSelf->_rs___05Fs5 = vlSelf->UART_rx__DOT__outDataReg_3;
    vlSelf->_rs___05Fs6 = vlSelf->UART_rx__DOT__outDataReg_4;
    vlSelf->_rs___05Fs7 = vlSelf->UART_rx__DOT__outDataReg_5;
    vlSelf->_rs___05Fs8 = vlSelf->UART_rx__DOT__outDataReg_6;
    vlSelf->_rs___05Fs9 = vlSelf->UART_rx__DOT__outDataReg_7;
    vlSelf->_cp___05Fs0 = (0U == (IData)(vlSelf->UART_rx__DOT__stateReg));
    vlSelf->_cp___05Fs2 = (1U == (IData)(vlSelf->UART_rx__DOT__stateReg));
    vlSelf->_cp___05Fs5 = (2U == (IData)(vlSelf->UART_rx__DOT__stateReg));
    vlSelf->_cp___05Fs9 = (3U == (IData)(vlSelf->UART_rx__DOT__stateReg));
    vlSelf->_rs___05Fs11 = vlSelf->UART_rx__DOT__stateReg;
    vlSelf->_rs___05Fs13 = vlSelf->UART_rx__DOT__serialDataReg;
    vlSelf->_cp___05Fs3 = (0x45U > (IData)(vlSelf->UART_rx__DOT__clkCnterReg));
    vlSelf->_rs___05Fs0 = vlSelf->UART_rx__DOT__clkCnterReg;
    vlSelf->_cp___05Fs7 = (1U & (~ ((IData)(vlSelf->UART_rx__DOT__bitCnterReg) 
                                    >> 3U)));
    vlSelf->_cp___05Fs8 = (8U == (IData)(vlSelf->UART_rx__DOT__bitCnterReg));
    vlSelf->_rs___05Fs1 = vlSelf->UART_rx__DOT__bitCnterReg;
    vlSelf->_rs___05Fs12 = vlSelf->UART_rx__DOT__serialDataReg_REG;
    vlSelf->io_o_rx_done = vlSelf->UART_rx__DOT__outRxDoneReg;
    vlSelf->_cp___05Fs1 = (1U & (~ (IData)(vlSelf->UART_rx__DOT__serialDataReg)));
    vlSelf->_cp___05Fs10 = (0x8aU > (IData)(vlSelf->UART_rx__DOT__clkCnterReg));
    vlSelf->io_o_data = (((IData)(vlSelf->UART_rx__DOT__outDataReg_7) 
                          << 7U) | (((IData)(vlSelf->UART_rx__DOT__outDataReg_6) 
                                     << 6U) | (((IData)(vlSelf->UART_rx__DOT__outDataReg_5) 
                                                << 5U) 
                                               | (((IData)(vlSelf->UART_rx__DOT__outDataReg_4) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->UART_rx__DOT__outDataReg_3) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->UART_rx__DOT__outDataReg_2) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->UART_rx__DOT__outDataReg_1) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->UART_rx__DOT__outDataReg_0))))))));
    vlSelf->_rs___05Fs10 = vlSelf->io_o_rx_done;
    vlSelf->_cp___05Fs4 = vlSelf->_cp___05Fs1;
    vlSelf->_cp___05Fs6 = vlSelf->_cp___05Fs10;
}

VL_ATTR_COLD void VUART_rx___024root___eval_stl(VUART_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VUART_rx___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VUART_rx___024root___eval_triggers__stl(VUART_rx___024root* vlSelf);

VL_ATTR_COLD bool VUART_rx___024root___eval_phase__stl(VUART_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VUART_rx___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VUART_rx___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VUART_rx___024root___dump_triggers__act(VUART_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VUART_rx___024root___dump_triggers__nba(VUART_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VUART_rx___024root___ctor_var_reset(VUART_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_i_serial_data = VL_RAND_RESET_I(1);
    vlSelf->io_o_rx_done = VL_RAND_RESET_I(1);
    vlSelf->io_o_data = VL_RAND_RESET_I(8);
    vlSelf->_cp___05Fs0 = VL_RAND_RESET_I(1);
    vlSelf->_cp___05Fs1 = VL_RAND_RESET_I(1);
    vlSelf->_cp___05Fs10 = VL_RAND_RESET_I(1);
    vlSelf->_cp___05Fs2 = VL_RAND_RESET_I(1);
    vlSelf->_cp___05Fs3 = VL_RAND_RESET_I(1);
    vlSelf->_cp___05Fs4 = VL_RAND_RESET_I(1);
    vlSelf->_cp___05Fs5 = VL_RAND_RESET_I(1);
    vlSelf->_cp___05Fs6 = VL_RAND_RESET_I(1);
    vlSelf->_cp___05Fs7 = VL_RAND_RESET_I(1);
    vlSelf->_cp___05Fs8 = VL_RAND_RESET_I(1);
    vlSelf->_cp___05Fs9 = VL_RAND_RESET_I(1);
    vlSelf->_rs___05Fs0 = VL_RAND_RESET_I(9);
    vlSelf->_rs___05Fs1 = VL_RAND_RESET_I(4);
    vlSelf->_rs___05Fs10 = VL_RAND_RESET_I(1);
    vlSelf->_rs___05Fs11 = VL_RAND_RESET_I(2);
    vlSelf->_rs___05Fs12 = VL_RAND_RESET_I(1);
    vlSelf->_rs___05Fs13 = VL_RAND_RESET_I(1);
    vlSelf->_rs___05Fs2 = VL_RAND_RESET_I(1);
    vlSelf->_rs___05Fs3 = VL_RAND_RESET_I(1);
    vlSelf->_rs___05Fs4 = VL_RAND_RESET_I(1);
    vlSelf->_rs___05Fs5 = VL_RAND_RESET_I(1);
    vlSelf->_rs___05Fs6 = VL_RAND_RESET_I(1);
    vlSelf->_rs___05Fs7 = VL_RAND_RESET_I(1);
    vlSelf->_rs___05Fs8 = VL_RAND_RESET_I(1);
    vlSelf->_rs___05Fs9 = VL_RAND_RESET_I(1);
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
    vlSelf->UART_rx__DOT__unnamedblk1__DOT___GEN_5 = VL_RAND_RESET_I(9);
    vlSelf->UART_rx__DOT__unnamedblk1__DOT___GEN_6 = VL_RAND_RESET_I(9);
    vlSelf->UART_rx__DOT__unnamedblk1__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->UART_rx__DOT__unnamedblk1__DOT___GEN_8 = VL_RAND_RESET_Q(36);
    vlSelf->UART_rx__DOT__unnamedblk1__DOT___GEN_9 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
