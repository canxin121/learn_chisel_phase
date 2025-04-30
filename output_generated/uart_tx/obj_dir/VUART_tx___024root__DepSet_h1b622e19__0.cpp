// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUART_tx.h for the primary calling header

#include "VUART_tx__pch.h"
#include "VUART_tx___024root.h"

VL_INLINE_OPT void VUART_tx___024root___ico_sequent__TOP__0(VUART_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_1 
        = vlSelf->io_i_tx_trig;
}

void VUART_tx___024root___eval_ico(VUART_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VUART_tx___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VUART_tx___024root___eval_triggers__ico(VUART_tx___024root* vlSelf);

bool VUART_tx___024root___eval_phase__ico(VUART_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VUART_tx___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VUART_tx___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VUART_tx___024root___eval_act(VUART_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___eval_act\n"); );
}

VL_INLINE_OPT void VUART_tx___024root___nba_sequent__TOP__0(VUART_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__UART_tx__DOT__clkCnterReg;
    __Vdly__UART_tx__DOT__clkCnterReg = 0;
    CData/*3:0*/ __Vdly__UART_tx__DOT__bitCnterReg;
    __Vdly__UART_tx__DOT__bitCnterReg = 0;
    CData/*0:0*/ __Vdly__UART_tx__DOT__outDataReg;
    __Vdly__UART_tx__DOT__outDataReg = 0;
    CData/*0:0*/ __Vdly__UART_tx__DOT__outTxDoneReg;
    __Vdly__UART_tx__DOT__outTxDoneReg = 0;
    CData/*1:0*/ __Vdly__UART_tx__DOT__stateReg;
    __Vdly__UART_tx__DOT__stateReg = 0;
    // Body
    __Vdly__UART_tx__DOT__outTxDoneReg = vlSelf->UART_tx__DOT__outTxDoneReg;
    __Vdly__UART_tx__DOT__outDataReg = vlSelf->UART_tx__DOT__outDataReg;
    __Vdly__UART_tx__DOT__bitCnterReg = vlSelf->UART_tx__DOT__bitCnterReg;
    __Vdly__UART_tx__DOT__clkCnterReg = vlSelf->UART_tx__DOT__clkCnterReg;
    __Vdly__UART_tx__DOT__stateReg = vlSelf->UART_tx__DOT__stateReg;
    if (vlSelf->reset) {
        __Vdly__UART_tx__DOT__clkCnterReg = 0U;
        __Vdly__UART_tx__DOT__bitCnterReg = 0U;
        __Vdly__UART_tx__DOT__outDataReg = 1U;
        vlSelf->UART_tx__DOT__outTxBusyReg = 0U;
        __Vdly__UART_tx__DOT__outTxDoneReg = 0U;
        __Vdly__UART_tx__DOT__stateReg = 0U;
        vlSelf->UART_tx__DOT__inDataReg = 0U;
    } else {
        vlSelf->UART_tx__DOT__unnamedblk1__DOT___GEN_0 
            = ((((IData)(vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_3)
                  ? (0xffU & ((IData)(1U) + (IData)(vlSelf->UART_tx__DOT__clkCnterReg)))
                  : 0U) << 0x18U) | ((((IData)(vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_3)
                                        ? (0xffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->UART_tx__DOT__clkCnterReg)))
                                        : 0U) << 0x10U) 
                                     | (((IData)(vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_3)
                                          ? (0xffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->UART_tx__DOT__clkCnterReg)))
                                          : 0U) << 8U)));
        vlSelf->UART_tx__DOT__unnamedblk1__DOT___GEN_1 
            = (0x20U | ((0xc0U & ((- (IData)((IData)(vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_3))) 
                                  << 6U)) | ((0x10U 
                                              & ((~ 
                                                  ((IData)(vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_3) 
                                                   | (~ 
                                                      ((IData)(vlSelf->UART_tx__DOT__bitCnterReg) 
                                                       >> 3U)))) 
                                                 << 4U)) 
                                             | ((((IData)(vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_3)
                                                   ? 1U
                                                   : 2U) 
                                                 << 2U) 
                                                | (IData)(vlSelf->io_i_tx_trig)))));
        __Vdly__UART_tx__DOT__clkCnterReg = (0xffU 
                                             & (vlSelf->UART_tx__DOT__unnamedblk1__DOT___GEN_0 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(5,32,32, (IData)(vlSelf->UART_tx__DOT__stateReg), 3U))));
        if (vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T) {
            __Vdly__UART_tx__DOT__outDataReg = ((~ (IData)(vlSelf->io_i_tx_trig)) 
                                                & (IData)(vlSelf->UART_tx__DOT__outDataReg));
            __Vdly__UART_tx__DOT__bitCnterReg = 0U;
        } else {
            vlSelf->UART_tx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2 
                = vlSelf->UART_tx__DOT__bitCnterReg;
            if (vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_2) {
                if ((1U & (~ (IData)(vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_3)))) {
                    __Vdly__UART_tx__DOT__bitCnterReg 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->UART_tx__DOT__bitCnterReg)));
                    vlSelf->UART_tx__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___outDataReg_T 
                        = (0xffU & VL_SHIFTR_III(8,8,8, (IData)(vlSelf->UART_tx__DOT__inDataReg), (IData)(vlSelf->UART_tx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2)));
                    __Vdly__UART_tx__DOT__outDataReg 
                        = (1U & (IData)(vlSelf->UART_tx__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___outDataReg_T));
                }
            } else if ((1U & (~ ((~ (IData)(vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_4)) 
                                 | (IData)(vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_3))))) {
                __Vdly__UART_tx__DOT__bitCnterReg = 
                    ((8U & (IData)(vlSelf->UART_tx__DOT__bitCnterReg))
                      ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->UART_tx__DOT__bitCnterReg))));
                vlSelf->UART_tx__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___outDataReg_T_2 
                    = (0xffU & VL_SHIFTR_III(8,8,8, (IData)(vlSelf->UART_tx__DOT__inDataReg), (IData)(vlSelf->UART_tx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2)));
                __Vdly__UART_tx__DOT__outDataReg = 
                    (1U & (((IData)(vlSelf->UART_tx__DOT__bitCnterReg) 
                            >> 3U) | (IData)(vlSelf->UART_tx__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___outDataReg_T_2)));
            }
        }
        vlSelf->UART_tx__DOT__outTxBusyReg = (0U != (IData)(vlSelf->UART_tx__DOT__stateReg));
        __Vdly__UART_tx__DOT__outTxDoneReg = ((~ (IData)(vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T)) 
                                              & ((((~ 
                                                    ((IData)(vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_2) 
                                                     | (IData)(vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_4))) 
                                                   & (3U 
                                                      == (IData)(vlSelf->UART_tx__DOT__stateReg))) 
                                                  & (~ (IData)(vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_3))) 
                                                 | (IData)(vlSelf->UART_tx__DOT__outTxDoneReg)));
        __Vdly__UART_tx__DOT__stateReg = (3U & ((IData)(vlSelf->UART_tx__DOT__unnamedblk1__DOT___GEN_1) 
                                                >> 
                                                (7U 
                                                 & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->UART_tx__DOT__stateReg), 1U))));
        if (((IData)(vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T) 
             & (IData)(vlSelf->io_i_tx_trig))) {
            vlSelf->UART_tx__DOT__inDataReg = vlSelf->io_i_data;
        }
    }
    vlSelf->UART_tx__DOT__bitCnterReg = __Vdly__UART_tx__DOT__bitCnterReg;
    vlSelf->UART_tx__DOT__outDataReg = __Vdly__UART_tx__DOT__outDataReg;
    vlSelf->UART_tx__DOT__outTxDoneReg = __Vdly__UART_tx__DOT__outTxDoneReg;
    vlSelf->UART_tx__DOT__clkCnterReg = __Vdly__UART_tx__DOT__clkCnterReg;
    vlSelf->UART_tx__DOT__stateReg = __Vdly__UART_tx__DOT__stateReg;
    vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_6 
        = (1U & (~ ((IData)(vlSelf->UART_tx__DOT__bitCnterReg) 
                    >> 3U)));
    vlSelf->_reg_signals_UART_tx___05FI___05Flocal___05FI___05FbitCnterReg 
        = vlSelf->UART_tx__DOT__bitCnterReg;
    vlSelf->io_o_serial_data = vlSelf->UART_tx__DOT__outDataReg;
    vlSelf->io_o_tx_busy = vlSelf->UART_tx__DOT__outTxBusyReg;
    vlSelf->io_o_tx_done = vlSelf->UART_tx__DOT__outTxDoneReg;
    vlSelf->_reg_signals_UART_tx___05FI___05Flocal___05FI___05FclkCnterReg 
        = vlSelf->UART_tx__DOT__clkCnterReg;
    vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_3 
        = (0x56U > (IData)(vlSelf->UART_tx__DOT__clkCnterReg));
    vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_2 
        = (1U == (IData)(vlSelf->UART_tx__DOT__stateReg));
    vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_4 
        = (2U == (IData)(vlSelf->UART_tx__DOT__stateReg));
    vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_7 
        = (3U == (IData)(vlSelf->UART_tx__DOT__stateReg));
    vlSelf->_reg_signals_UART_tx___05FI___05Flocal___05FI___05FstateReg 
        = vlSelf->UART_tx__DOT__stateReg;
    vlSelf->_reg_signals_UART_tx___05FI___05Flocal___05FI___05FoutDataReg 
        = vlSelf->io_o_serial_data;
    vlSelf->_reg_signals_UART_tx___05FI___05Flocal___05FI___05FoutTxBusyReg 
        = vlSelf->io_o_tx_busy;
    vlSelf->_reg_signals_UART_tx___05FI___05Flocal___05FI___05FoutTxDoneReg 
        = vlSelf->io_o_tx_done;
    vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_5 
        = vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_3;
    vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_8 
        = vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_3;
    vlSelf->_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T 
        = (0U == (IData)(vlSelf->UART_tx__DOT__stateReg));
    vlSelf->_reg_signals_UART_tx___05FI___05Flocal___05FI___05FinDataReg 
        = vlSelf->UART_tx__DOT__inDataReg;
}

void VUART_tx___024root___eval_nba(VUART_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VUART_tx___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VUART_tx___024root___eval_triggers__act(VUART_tx___024root* vlSelf);

bool VUART_tx___024root___eval_phase__act(VUART_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VUART_tx___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VUART_tx___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VUART_tx___024root___eval_phase__nba(VUART_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VUART_tx___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VUART_tx___024root___dump_triggers__ico(VUART_tx___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VUART_tx___024root___dump_triggers__nba(VUART_tx___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VUART_tx___024root___dump_triggers__act(VUART_tx___024root* vlSelf);
#endif  // VL_DEBUG

void VUART_tx___024root___eval(VUART_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VUART_tx___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("UART_tx.sv", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VUART_tx___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VUART_tx___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("UART_tx.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VUART_tx___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("UART_tx.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VUART_tx___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VUART_tx___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VUART_tx___024root___eval_debug_assertions(VUART_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_i_tx_trig & 0xfeU))) {
        Verilated::overWidthError("io_i_tx_trig");}
}
#endif  // VL_DEBUG
