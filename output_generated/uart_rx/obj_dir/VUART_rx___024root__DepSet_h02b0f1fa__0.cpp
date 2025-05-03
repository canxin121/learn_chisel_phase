// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUART_rx.h for the primary calling header

#include "VUART_rx__pch.h"
#include "VUART_rx___024root.h"

void VUART_rx___024root___eval_act(VUART_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___eval_act\n"); );
}

VL_INLINE_OPT void VUART_rx___024root___nba_sequent__TOP__0(VUART_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vdly__UART_rx__DOT__clkCnterReg;
    __Vdly__UART_rx__DOT__clkCnterReg = 0;
    CData/*3:0*/ __Vdly__UART_rx__DOT__bitCnterReg;
    __Vdly__UART_rx__DOT__bitCnterReg = 0;
    CData/*0:0*/ __Vdly__UART_rx__DOT__outRxDoneReg;
    __Vdly__UART_rx__DOT__outRxDoneReg = 0;
    CData/*1:0*/ __Vdly__UART_rx__DOT__stateReg;
    __Vdly__UART_rx__DOT__stateReg = 0;
    // Body
    __Vdly__UART_rx__DOT__outRxDoneReg = vlSelf->UART_rx__DOT__outRxDoneReg;
    __Vdly__UART_rx__DOT__bitCnterReg = vlSelf->UART_rx__DOT__bitCnterReg;
    __Vdly__UART_rx__DOT__clkCnterReg = vlSelf->UART_rx__DOT__clkCnterReg;
    __Vdly__UART_rx__DOT__stateReg = vlSelf->UART_rx__DOT__stateReg;
    if (vlSelf->reset) {
        __Vdly__UART_rx__DOT__clkCnterReg = 0U;
        __Vdly__UART_rx__DOT__bitCnterReg = 0U;
        vlSelf->UART_rx__DOT__outDataReg_0 = 0U;
        vlSelf->UART_rx__DOT__outDataReg_1 = 0U;
        vlSelf->UART_rx__DOT__outDataReg_2 = 0U;
        vlSelf->UART_rx__DOT__outDataReg_3 = 0U;
        vlSelf->UART_rx__DOT__outDataReg_4 = 0U;
        vlSelf->UART_rx__DOT__outDataReg_5 = 0U;
        vlSelf->UART_rx__DOT__outDataReg_6 = 0U;
        vlSelf->UART_rx__DOT__outDataReg_7 = 0U;
        __Vdly__UART_rx__DOT__outRxDoneReg = 0U;
        __Vdly__UART_rx__DOT__stateReg = 0U;
    } else {
        vlSelf->UART_rx__DOT__unnamedblk1__DOT___GEN_5 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->UART_rx__DOT__clkCnterReg)));
        vlSelf->UART_rx__DOT__unnamedblk1__DOT___GEN_7 
            = ((IData)(vlSelf->_cp___05Fs0) | (IData)(vlSelf->_cp___05Fs2));
        vlSelf->UART_rx__DOT__unnamedblk1__DOT___GEN_6 
            = ((IData)(vlSelf->_cp___05Fs10) ? (IData)(vlSelf->UART_rx__DOT__unnamedblk1__DOT___GEN_5)
                : 0U);
        if (vlSelf->_cp___05Fs0) {
            __Vdly__UART_rx__DOT__bitCnterReg = 0U;
        } else if ((1U & (~ (((IData)(vlSelf->_cp___05Fs2) 
                              | (~ (IData)(vlSelf->_cp___05Fs5))) 
                             | (IData)(vlSelf->_cp___05Fs10))))) {
            __Vdly__UART_rx__DOT__bitCnterReg = ((8U 
                                                  & (IData)(vlSelf->UART_rx__DOT__bitCnterReg))
                                                  ? 0U
                                                  : 
                                                 (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->UART_rx__DOT__bitCnterReg))));
        }
        vlSelf->UART_rx__DOT__unnamedblk1__DOT___GEN_8 
            = (((QData)((IData)((0x3ffffU & (((IData)(vlSelf->UART_rx__DOT__unnamedblk1__DOT___GEN_6) 
                                              << 9U) 
                                             | (IData)(vlSelf->UART_rx__DOT__unnamedblk1__DOT___GEN_6))))) 
                << 0x12U) | (QData)((IData)((((IData)(vlSelf->_cp___05Fs3)
                                               ? (IData)(vlSelf->UART_rx__DOT__unnamedblk1__DOT___GEN_5)
                                               : 0U) 
                                             << 9U))));
        if ((1U & (~ ((((IData)(vlSelf->UART_rx__DOT__unnamedblk1__DOT___GEN_7) 
                        | (~ (IData)(vlSelf->_cp___05Fs5))) 
                       | (IData)(vlSelf->_cp___05Fs10)) 
                      | (0U != (7U & (IData)(vlSelf->UART_rx__DOT__bitCnterReg))))))) {
            vlSelf->UART_rx__DOT__outDataReg_0 = vlSelf->UART_rx__DOT__serialDataReg;
        }
        vlSelf->UART_rx__DOT__unnamedblk1__DOT___GEN_9 
            = (0x20U | ((0xc0U & ((- (IData)((IData)(vlSelf->_cp___05Fs10))) 
                                  << 6U)) | (((IData)(vlSelf->_cp___05Fs8) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->_cp___05Fs3)
                                                   ? 1U
                                                   : 
                                                  (2U 
                                                   & ((~ (IData)(vlSelf->UART_rx__DOT__serialDataReg)) 
                                                      << 1U))) 
                                                 << 2U) 
                                                | (1U 
                                                   & (~ (IData)(vlSelf->UART_rx__DOT__serialDataReg)))))));
        if ((1U & (~ ((((IData)(vlSelf->UART_rx__DOT__unnamedblk1__DOT___GEN_7) 
                        | (~ (IData)(vlSelf->_cp___05Fs5))) 
                       | (IData)(vlSelf->_cp___05Fs10)) 
                      | (1U != (7U & (IData)(vlSelf->UART_rx__DOT__bitCnterReg))))))) {
            vlSelf->UART_rx__DOT__outDataReg_1 = vlSelf->UART_rx__DOT__serialDataReg;
        }
        __Vdly__UART_rx__DOT__clkCnterReg = ((0x23U 
                                              >= (0x3fU 
                                                  & ((IData)(9U) 
                                                     * (IData)(vlSelf->UART_rx__DOT__stateReg))))
                                              ? (0x1ffU 
                                                 & (IData)(
                                                           (vlSelf->UART_rx__DOT__unnamedblk1__DOT___GEN_8 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(9U) 
                                                                * (IData)(vlSelf->UART_rx__DOT__stateReg))))))
                                              : 0U);
        if ((1U & (~ ((((IData)(vlSelf->UART_rx__DOT__unnamedblk1__DOT___GEN_7) 
                        | (~ (IData)(vlSelf->_cp___05Fs5))) 
                       | (IData)(vlSelf->_cp___05Fs10)) 
                      | (2U != (7U & (IData)(vlSelf->UART_rx__DOT__bitCnterReg))))))) {
            vlSelf->UART_rx__DOT__outDataReg_2 = vlSelf->UART_rx__DOT__serialDataReg;
        }
        if ((1U & (~ ((((IData)(vlSelf->UART_rx__DOT__unnamedblk1__DOT___GEN_7) 
                        | (~ (IData)(vlSelf->_cp___05Fs5))) 
                       | (IData)(vlSelf->_cp___05Fs10)) 
                      | (3U != (7U & (IData)(vlSelf->UART_rx__DOT__bitCnterReg))))))) {
            vlSelf->UART_rx__DOT__outDataReg_3 = vlSelf->UART_rx__DOT__serialDataReg;
        }
        __Vdly__UART_rx__DOT__outRxDoneReg = ((~ (IData)(vlSelf->_cp___05Fs0)) 
                                              & ((((~ 
                                                    ((IData)(vlSelf->_cp___05Fs2) 
                                                     | (IData)(vlSelf->_cp___05Fs5))) 
                                                   & (3U 
                                                      == (IData)(vlSelf->UART_rx__DOT__stateReg))) 
                                                  & (~ (IData)(vlSelf->_cp___05Fs10))) 
                                                 | (IData)(vlSelf->UART_rx__DOT__outRxDoneReg)));
        if ((1U & (~ ((((IData)(vlSelf->UART_rx__DOT__unnamedblk1__DOT___GEN_7) 
                        | (~ (IData)(vlSelf->_cp___05Fs5))) 
                       | (IData)(vlSelf->_cp___05Fs10)) 
                      | (4U != (7U & (IData)(vlSelf->UART_rx__DOT__bitCnterReg))))))) {
            vlSelf->UART_rx__DOT__outDataReg_4 = vlSelf->UART_rx__DOT__serialDataReg;
        }
        if ((1U & (~ ((((IData)(vlSelf->UART_rx__DOT__unnamedblk1__DOT___GEN_7) 
                        | (~ (IData)(vlSelf->_cp___05Fs5))) 
                       | (IData)(vlSelf->_cp___05Fs10)) 
                      | (5U != (7U & (IData)(vlSelf->UART_rx__DOT__bitCnterReg))))))) {
            vlSelf->UART_rx__DOT__outDataReg_5 = vlSelf->UART_rx__DOT__serialDataReg;
        }
        if ((1U & (~ ((((IData)(vlSelf->UART_rx__DOT__unnamedblk1__DOT___GEN_7) 
                        | (~ (IData)(vlSelf->_cp___05Fs5))) 
                       | (IData)(vlSelf->_cp___05Fs10)) 
                      | (6U != (7U & (IData)(vlSelf->UART_rx__DOT__bitCnterReg))))))) {
            vlSelf->UART_rx__DOT__outDataReg_6 = vlSelf->UART_rx__DOT__serialDataReg;
        }
        __Vdly__UART_rx__DOT__stateReg = (3U & ((IData)(vlSelf->UART_rx__DOT__unnamedblk1__DOT___GEN_9) 
                                                >> 
                                                (7U 
                                                 & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->UART_rx__DOT__stateReg), 1U))));
        if ((1U & (~ ((((IData)(vlSelf->UART_rx__DOT__unnamedblk1__DOT___GEN_7) 
                        | (~ (IData)(vlSelf->_cp___05Fs5))) 
                       | (IData)(vlSelf->_cp___05Fs10)) 
                      | (7U != (7U & (IData)(vlSelf->UART_rx__DOT__bitCnterReg))))))) {
            vlSelf->UART_rx__DOT__outDataReg_7 = vlSelf->UART_rx__DOT__serialDataReg;
        }
    }
    vlSelf->UART_rx__DOT__outRxDoneReg = __Vdly__UART_rx__DOT__outRxDoneReg;
    vlSelf->UART_rx__DOT__bitCnterReg = __Vdly__UART_rx__DOT__bitCnterReg;
    vlSelf->UART_rx__DOT__clkCnterReg = __Vdly__UART_rx__DOT__clkCnterReg;
    vlSelf->UART_rx__DOT__stateReg = __Vdly__UART_rx__DOT__stateReg;
    vlSelf->io_o_rx_done = vlSelf->UART_rx__DOT__outRxDoneReg;
    vlSelf->_cp___05Fs7 = (1U & (~ ((IData)(vlSelf->UART_rx__DOT__bitCnterReg) 
                                    >> 3U)));
    vlSelf->_cp___05Fs8 = (8U == (IData)(vlSelf->UART_rx__DOT__bitCnterReg));
    vlSelf->_rs___05Fs1 = vlSelf->UART_rx__DOT__bitCnterReg;
    vlSelf->_cp___05Fs3 = (0x45U > (IData)(vlSelf->UART_rx__DOT__clkCnterReg));
    vlSelf->_rs___05Fs0 = vlSelf->UART_rx__DOT__clkCnterReg;
    vlSelf->_cp___05Fs10 = (0x8aU > (IData)(vlSelf->UART_rx__DOT__clkCnterReg));
    vlSelf->_rs___05Fs2 = vlSelf->UART_rx__DOT__outDataReg_0;
    vlSelf->_rs___05Fs3 = vlSelf->UART_rx__DOT__outDataReg_1;
    vlSelf->_rs___05Fs4 = vlSelf->UART_rx__DOT__outDataReg_2;
    vlSelf->_rs___05Fs5 = vlSelf->UART_rx__DOT__outDataReg_3;
    vlSelf->_rs___05Fs6 = vlSelf->UART_rx__DOT__outDataReg_4;
    vlSelf->_rs___05Fs7 = vlSelf->UART_rx__DOT__outDataReg_5;
    vlSelf->_rs___05Fs8 = vlSelf->UART_rx__DOT__outDataReg_6;
    vlSelf->_rs___05Fs9 = vlSelf->UART_rx__DOT__outDataReg_7;
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
    vlSelf->_cp___05Fs0 = (0U == (IData)(vlSelf->UART_rx__DOT__stateReg));
    vlSelf->_cp___05Fs2 = (1U == (IData)(vlSelf->UART_rx__DOT__stateReg));
    vlSelf->_cp___05Fs5 = (2U == (IData)(vlSelf->UART_rx__DOT__stateReg));
    vlSelf->_cp___05Fs9 = (3U == (IData)(vlSelf->UART_rx__DOT__stateReg));
    vlSelf->_rs___05Fs11 = vlSelf->UART_rx__DOT__stateReg;
    vlSelf->UART_rx__DOT__serialDataReg = vlSelf->UART_rx__DOT__serialDataReg_REG;
    vlSelf->_rs___05Fs10 = vlSelf->io_o_rx_done;
    vlSelf->_cp___05Fs6 = vlSelf->_cp___05Fs10;
    vlSelf->_rs___05Fs13 = vlSelf->UART_rx__DOT__serialDataReg;
    vlSelf->_cp___05Fs1 = (1U & (~ (IData)(vlSelf->UART_rx__DOT__serialDataReg)));
    vlSelf->UART_rx__DOT__serialDataReg_REG = vlSelf->io_i_serial_data;
    vlSelf->_cp___05Fs4 = vlSelf->_cp___05Fs1;
    vlSelf->_rs___05Fs12 = vlSelf->UART_rx__DOT__serialDataReg_REG;
}

void VUART_rx___024root___eval_nba(VUART_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VUART_rx___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VUART_rx___024root___eval_triggers__act(VUART_rx___024root* vlSelf);

bool VUART_rx___024root___eval_phase__act(VUART_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VUART_rx___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VUART_rx___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VUART_rx___024root___eval_phase__nba(VUART_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VUART_rx___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VUART_rx___024root___dump_triggers__nba(VUART_rx___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VUART_rx___024root___dump_triggers__act(VUART_rx___024root* vlSelf);
#endif  // VL_DEBUG

void VUART_rx___024root___eval(VUART_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VUART_rx___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("UART_rx.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VUART_rx___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("UART_rx.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VUART_rx___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VUART_rx___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VUART_rx___024root___eval_debug_assertions(VUART_rx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_i_serial_data & 0xfeU))) {
        Verilated::overWidthError("io_i_serial_data");}
}
#endif  // VL_DEBUG
