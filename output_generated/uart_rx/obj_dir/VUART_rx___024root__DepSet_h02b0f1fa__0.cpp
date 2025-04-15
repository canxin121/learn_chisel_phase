// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUART_rx.h for the primary calling header

#include "VUART_rx__pch.h"
#include "VUART_rx___024root.h"

void VUART_rx___024root___eval_act(VUART_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___eval_act\n"); );
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VUART_rx___024root___nba_sequent__TOP__0(VUART_rx___024root* vlSelf);

void VUART_rx___024root___eval_nba(VUART_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___eval_nba\n"); );
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VUART_rx___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void VUART_rx___024root___nba_sequent__TOP__0(VUART_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___nba_sequent__TOP__0\n"); );
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    __Vdly__UART_rx__DOT__outRxDoneReg = vlSelfRef.UART_rx__DOT__outRxDoneReg;
    __Vdly__UART_rx__DOT__bitCnterReg = vlSelfRef.UART_rx__DOT__bitCnterReg;
    __Vdly__UART_rx__DOT__clkCnterReg = vlSelfRef.UART_rx__DOT__clkCnterReg;
    __Vdly__UART_rx__DOT__stateReg = vlSelfRef.UART_rx__DOT__stateReg;
    if (vlSelfRef.reset) {
        __Vdly__UART_rx__DOT__clkCnterReg = 0U;
        __Vdly__UART_rx__DOT__bitCnterReg = 0U;
        vlSelfRef.UART_rx__DOT__outDataReg_0 = 0U;
        vlSelfRef.UART_rx__DOT__outDataReg_1 = 0U;
        vlSelfRef.UART_rx__DOT__outDataReg_2 = 0U;
        vlSelfRef.UART_rx__DOT__outDataReg_3 = 0U;
        vlSelfRef.UART_rx__DOT__outDataReg_4 = 0U;
        vlSelfRef.UART_rx__DOT__outDataReg_5 = 0U;
        vlSelfRef.UART_rx__DOT__outDataReg_6 = 0U;
        vlSelfRef.UART_rx__DOT__outDataReg_7 = 0U;
        __Vdly__UART_rx__DOT__outRxDoneReg = 0U;
        __Vdly__UART_rx__DOT__stateReg = 0U;
    } else {
        vlSelfRef.UART_rx__DOT__unnamedblk1__DOT___GEN_7 
            = (((QData)((IData)(((((IData)(vlSelfRef.UART_rx__DOT___GEN_3)
                                    ? (0x1ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.UART_rx__DOT__clkCnterReg)))
                                    : 0U) << 9U) | 
                                 ((IData)(vlSelfRef.UART_rx__DOT___GEN_3)
                                   ? (0x1ffU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.UART_rx__DOT__clkCnterReg)))
                                   : 0U)))) << 0x12U) 
               | (QData)((IData)((((IData)(vlSelfRef.UART_rx__DOT___GEN_0)
                                    ? (0x1ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.UART_rx__DOT__clkCnterReg)))
                                    : 0U) << 9U))));
        if (vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T) {
            __Vdly__UART_rx__DOT__bitCnterReg = 0U;
        } else if ((1U & (~ (((IData)(vlSelfRef.UART_rx__DOT___GEN) 
                              | (~ (IData)(vlSelfRef.UART_rx__DOT___GEN_1))) 
                             | (IData)(vlSelfRef.UART_rx__DOT___GEN_3))))) {
            __Vdly__UART_rx__DOT__bitCnterReg = ((8U 
                                                  & (IData)(vlSelfRef.UART_rx__DOT__bitCnterReg))
                                                  ? 0U
                                                  : 
                                                 (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.UART_rx__DOT__bitCnterReg))));
        }
        vlSelfRef.UART_rx__DOT__unnamedblk1__DOT___GEN_8 
            = (0x20U | (((0xc0U & ((- (IData)((IData)(vlSelfRef.UART_rx__DOT___GEN_3))) 
                                   << 6U)) | ((IData)(vlSelfRef.UART_rx__DOT___GEN_4) 
                                              << 4U)) 
                        | ((((IData)(vlSelfRef.UART_rx__DOT___GEN_0)
                              ? 1U : (2U & ((~ (IData)(vlSelfRef.UART_rx__DOT__serialDataReg)) 
                                            << 1U))) 
                            << 2U) | (1U & (~ (IData)(vlSelfRef.UART_rx__DOT__serialDataReg))))));
        if ((1U & (~ ((((IData)(vlSelfRef.UART_rx__DOT___GEN_2) 
                        | (~ (IData)(vlSelfRef.UART_rx__DOT___GEN_1))) 
                       | (IData)(vlSelfRef.UART_rx__DOT___GEN_3)) 
                      | (0U != (7U & (IData)(vlSelfRef.UART_rx__DOT__bitCnterReg))))))) {
            vlSelfRef.UART_rx__DOT__outDataReg_0 = vlSelfRef.UART_rx__DOT__serialDataReg;
        }
        __Vdly__UART_rx__DOT__clkCnterReg = ((0x23U 
                                              >= (0x3fU 
                                                  & ((IData)(9U) 
                                                     * (IData)(vlSelfRef.UART_rx__DOT__stateReg))))
                                              ? (0x1ffU 
                                                 & (IData)(
                                                           (vlSelfRef.UART_rx__DOT__unnamedblk1__DOT___GEN_7 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(9U) 
                                                                * (IData)(vlSelfRef.UART_rx__DOT__stateReg))))))
                                              : 0U);
        if ((1U & (~ ((((IData)(vlSelfRef.UART_rx__DOT___GEN_2) 
                        | (~ (IData)(vlSelfRef.UART_rx__DOT___GEN_1))) 
                       | (IData)(vlSelfRef.UART_rx__DOT___GEN_3)) 
                      | (1U != (7U & (IData)(vlSelfRef.UART_rx__DOT__bitCnterReg))))))) {
            vlSelfRef.UART_rx__DOT__outDataReg_1 = vlSelfRef.UART_rx__DOT__serialDataReg;
        }
        if ((1U & (~ ((((IData)(vlSelfRef.UART_rx__DOT___GEN_2) 
                        | (~ (IData)(vlSelfRef.UART_rx__DOT___GEN_1))) 
                       | (IData)(vlSelfRef.UART_rx__DOT___GEN_3)) 
                      | (2U != (7U & (IData)(vlSelfRef.UART_rx__DOT__bitCnterReg))))))) {
            vlSelfRef.UART_rx__DOT__outDataReg_2 = vlSelfRef.UART_rx__DOT__serialDataReg;
        }
        __Vdly__UART_rx__DOT__outRxDoneReg = ((~ (IData)(vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T)) 
                                              & ((((~ (IData)(vlSelfRef.UART_rx__DOT___GEN_5)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.UART_rx__DOT__stateReg))) 
                                                  & (~ (IData)(vlSelfRef.UART_rx__DOT___GEN_3))) 
                                                 | (IData)(vlSelfRef.UART_rx__DOT__outRxDoneReg)));
        if ((1U & (~ ((((IData)(vlSelfRef.UART_rx__DOT___GEN_2) 
                        | (~ (IData)(vlSelfRef.UART_rx__DOT___GEN_1))) 
                       | (IData)(vlSelfRef.UART_rx__DOT___GEN_3)) 
                      | (3U != (7U & (IData)(vlSelfRef.UART_rx__DOT__bitCnterReg))))))) {
            vlSelfRef.UART_rx__DOT__outDataReg_3 = vlSelfRef.UART_rx__DOT__serialDataReg;
        }
        if ((1U & (~ ((((IData)(vlSelfRef.UART_rx__DOT___GEN_2) 
                        | (~ (IData)(vlSelfRef.UART_rx__DOT___GEN_1))) 
                       | (IData)(vlSelfRef.UART_rx__DOT___GEN_3)) 
                      | (4U != (7U & (IData)(vlSelfRef.UART_rx__DOT__bitCnterReg))))))) {
            vlSelfRef.UART_rx__DOT__outDataReg_4 = vlSelfRef.UART_rx__DOT__serialDataReg;
        }
        if ((1U & (~ ((((IData)(vlSelfRef.UART_rx__DOT___GEN_2) 
                        | (~ (IData)(vlSelfRef.UART_rx__DOT___GEN_1))) 
                       | (IData)(vlSelfRef.UART_rx__DOT___GEN_3)) 
                      | (5U != (7U & (IData)(vlSelfRef.UART_rx__DOT__bitCnterReg))))))) {
            vlSelfRef.UART_rx__DOT__outDataReg_5 = vlSelfRef.UART_rx__DOT__serialDataReg;
        }
        __Vdly__UART_rx__DOT__stateReg = (3U & ((IData)(vlSelfRef.UART_rx__DOT__unnamedblk1__DOT___GEN_8) 
                                                >> 
                                                (7U 
                                                 & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.UART_rx__DOT__stateReg), 1U))));
        if ((1U & (~ ((((IData)(vlSelfRef.UART_rx__DOT___GEN_2) 
                        | (~ (IData)(vlSelfRef.UART_rx__DOT___GEN_1))) 
                       | (IData)(vlSelfRef.UART_rx__DOT___GEN_3)) 
                      | (6U != (7U & (IData)(vlSelfRef.UART_rx__DOT__bitCnterReg))))))) {
            vlSelfRef.UART_rx__DOT__outDataReg_6 = vlSelfRef.UART_rx__DOT__serialDataReg;
        }
        if ((1U & (~ ((((IData)(vlSelfRef.UART_rx__DOT___GEN_2) 
                        | (~ (IData)(vlSelfRef.UART_rx__DOT___GEN_1))) 
                       | (IData)(vlSelfRef.UART_rx__DOT___GEN_3)) 
                      | (7U != (7U & (IData)(vlSelfRef.UART_rx__DOT__bitCnterReg))))))) {
            vlSelfRef.UART_rx__DOT__outDataReg_7 = vlSelfRef.UART_rx__DOT__serialDataReg;
        }
    }
    vlSelfRef.UART_rx__DOT__outRxDoneReg = __Vdly__UART_rx__DOT__outRxDoneReg;
    vlSelfRef.UART_rx__DOT__bitCnterReg = __Vdly__UART_rx__DOT__bitCnterReg;
    vlSelfRef.UART_rx__DOT__clkCnterReg = __Vdly__UART_rx__DOT__clkCnterReg;
    vlSelfRef.UART_rx__DOT__stateReg = __Vdly__UART_rx__DOT__stateReg;
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
    vlSelfRef._reg_signals_UART_rx___05FI___05Flocal___05FI___05FbitCnterReg 
        = vlSelfRef.UART_rx__DOT__bitCnterReg;
    vlSelfRef.UART_rx__DOT___GEN_4 = (8U == (IData)(vlSelfRef.UART_rx__DOT__bitCnterReg));
    vlSelfRef._reg_signals_UART_rx___05FI___05Flocal___05FI___05FclkCnterReg 
        = vlSelfRef.UART_rx__DOT__clkCnterReg;
    vlSelfRef.UART_rx__DOT___GEN_3 = (0x8aU > (IData)(vlSelfRef.UART_rx__DOT__clkCnterReg));
    vlSelfRef.UART_rx__DOT___GEN_0 = (0x45U > (IData)(vlSelfRef.UART_rx__DOT__clkCnterReg));
    vlSelfRef.UART_rx__DOT__serialDataReg = vlSelfRef.UART_rx__DOT__serialDataReg_REG;
    vlSelfRef._reg_signals_UART_rx___05FI___05Flocal___05FI___05FstateReg 
        = vlSelfRef.UART_rx__DOT__stateReg;
    vlSelfRef.UART_rx__DOT___GEN = (1U == (IData)(vlSelfRef.UART_rx__DOT__stateReg));
    vlSelfRef.UART_rx__DOT___GEN_1 = (2U == (IData)(vlSelfRef.UART_rx__DOT__stateReg));
    vlSelfRef.UART_rx__DOT___GEN_5 = ((1U == (IData)(vlSelfRef.UART_rx__DOT__stateReg)) 
                                      | (2U == (IData)(vlSelfRef.UART_rx__DOT__stateReg)));
    vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T 
        = (0U == (IData)(vlSelfRef.UART_rx__DOT__stateReg));
    vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_10 
        = ((~ ((IData)(vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T) 
               | (IData)(vlSelfRef.UART_rx__DOT___GEN_5))) 
           & (3U == (IData)(vlSelfRef.UART_rx__DOT__stateReg)));
    vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_2 
        = ((~ (IData)(vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T)) 
           & (1U == (IData)(vlSelfRef.UART_rx__DOT__stateReg)));
    vlSelfRef.UART_rx__DOT___GEN_2 = ((IData)(vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T) 
                                      | (1U == (IData)(vlSelfRef.UART_rx__DOT__stateReg)));
    vlSelfRef._reg_signals_UART_rx___05FI___05Flocal___05FI___05FserialDataReg 
        = vlSelfRef.UART_rx__DOT__serialDataReg;
    vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_1 
        = ((~ (IData)(vlSelfRef.UART_rx__DOT__serialDataReg)) 
           & (IData)(vlSelfRef._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T));
    vlSelfRef.UART_rx__DOT__serialDataReg_REG = vlSelfRef.io_i_serial_data;
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
    vlSelfRef._reg_signals_UART_rx___05FI___05Flocal___05FI___05FserialDataReg_REG 
        = vlSelfRef.UART_rx__DOT__serialDataReg_REG;
}

void VUART_rx___024root___eval_triggers__act(VUART_rx___024root* vlSelf);

bool VUART_rx___024root___eval_phase__act(VUART_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___eval_phase__act\n"); );
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VUART_rx___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VUART_rx___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VUART_rx___024root___eval_phase__nba(VUART_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___eval_phase__nba\n"); );
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VUART_rx___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___eval\n"); );
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VUART_rx___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("UART_rx.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VUART_rx___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("UART_rx.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VUART_rx___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VUART_rx___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VUART_rx___024root___eval_debug_assertions(VUART_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root___eval_debug_assertions\n"); );
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY(((vlSelfRef.io_i_serial_data & 0xfeU)))) {
        Verilated::overWidthError("io_i_serial_data");}
}
#endif  // VL_DEBUG
