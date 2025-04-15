// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUART_tx.h for the primary calling header

#include "VUART_tx__pch.h"
#include "VUART_tx___024root.h"

void VUART_tx___024root___ico_sequent__TOP__0(VUART_tx___024root* vlSelf);

void VUART_tx___024root___eval_ico(VUART_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___eval_ico\n"); );
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VUART_tx___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VUART_tx___024root___ico_sequent__TOP__0(VUART_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___ico_sequent__TOP__0\n"); );
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_1 
        = ((IData)(vlSelfRef._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T) 
           & (IData)(vlSelfRef.io_i_tx_trig));
}

void VUART_tx___024root___eval_triggers__ico(VUART_tx___024root* vlSelf);

bool VUART_tx___024root___eval_phase__ico(VUART_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___eval_phase__ico\n"); );
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VUART_tx___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VUART_tx___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VUART_tx___024root___eval_act(VUART_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___eval_act\n"); );
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VUART_tx___024root___nba_sequent__TOP__0(VUART_tx___024root* vlSelf);

void VUART_tx___024root___eval_nba(VUART_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___eval_nba\n"); );
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VUART_tx___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void VUART_tx___024root___nba_sequent__TOP__0(VUART_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___nba_sequent__TOP__0\n"); );
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    __Vdly__UART_tx__DOT__outDataReg = vlSelfRef.UART_tx__DOT__outDataReg;
    __Vdly__UART_tx__DOT__outTxDoneReg = vlSelfRef.UART_tx__DOT__outTxDoneReg;
    __Vdly__UART_tx__DOT__bitCnterReg = vlSelfRef.UART_tx__DOT__bitCnterReg;
    __Vdly__UART_tx__DOT__clkCnterReg = vlSelfRef.UART_tx__DOT__clkCnterReg;
    __Vdly__UART_tx__DOT__stateReg = vlSelfRef.UART_tx__DOT__stateReg;
    if (vlSelfRef.reset) {
        __Vdly__UART_tx__DOT__clkCnterReg = 0U;
        __Vdly__UART_tx__DOT__bitCnterReg = 0U;
        __Vdly__UART_tx__DOT__outDataReg = 1U;
        vlSelfRef.UART_tx__DOT__outTxBusyReg = 0U;
        __Vdly__UART_tx__DOT__outTxDoneReg = 0U;
        __Vdly__UART_tx__DOT__stateReg = 0U;
        vlSelfRef.UART_tx__DOT__inDataReg = 0U;
    } else {
        vlSelfRef.UART_tx__DOT__unnamedblk1__DOT___GEN_5 
            = (((((IData)(vlSelfRef.UART_tx__DOT___GEN_0)
                   ? (0xffU & ((IData)(1U) + (IData)(vlSelfRef.UART_tx__DOT__clkCnterReg)))
                   : 0U) << 0x18U) | (((IData)(vlSelfRef.UART_tx__DOT___GEN_0)
                                        ? (0xffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.UART_tx__DOT__clkCnterReg)))
                                        : 0U) << 0x10U)) 
               | (((IData)(vlSelfRef.UART_tx__DOT___GEN_0)
                    ? (0xffU & ((IData)(1U) + (IData)(vlSelfRef.UART_tx__DOT__clkCnterReg)))
                    : 0U) << 8U));
        vlSelfRef.UART_tx__DOT__unnamedblk1__DOT___GEN_6 
            = (0x20U | (((0xc0U & ((- (IData)((IData)(vlSelfRef.UART_tx__DOT___GEN_0))) 
                                   << 6U)) | (0x10U 
                                              & ((~ 
                                                  ((IData)(vlSelfRef.UART_tx__DOT___GEN_0) 
                                                   | (~ 
                                                      ((IData)(vlSelfRef.UART_tx__DOT__bitCnterReg) 
                                                       >> 3U)))) 
                                                 << 4U))) 
                        | ((((IData)(vlSelfRef.UART_tx__DOT___GEN_0)
                              ? 1U : 2U) << 2U) | (IData)(vlSelfRef.io_i_tx_trig))));
        __Vdly__UART_tx__DOT__clkCnterReg = (0xffU 
                                             & (vlSelfRef.UART_tx__DOT__unnamedblk1__DOT___GEN_5 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.UART_tx__DOT__stateReg), 3U))));
        if (vlSelfRef._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T) {
            __Vdly__UART_tx__DOT__outDataReg = ((~ (IData)(vlSelfRef.io_i_tx_trig)) 
                                                & (IData)(vlSelfRef.UART_tx__DOT__outDataReg));
            __Vdly__UART_tx__DOT__bitCnterReg = 0U;
        } else {
            vlSelfRef.UART_tx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_7 
                = vlSelfRef.UART_tx__DOT__bitCnterReg;
            if (vlSelfRef.UART_tx__DOT___GEN) {
                if ((1U & (~ (IData)(vlSelfRef.UART_tx__DOT___GEN_0)))) {
                    __Vdly__UART_tx__DOT__bitCnterReg 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.UART_tx__DOT__bitCnterReg)));
                    vlSelfRef.UART_tx__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___outDataReg_T 
                        = (0xffU & VL_SHIFTR_III(8,8,8, (IData)(vlSelfRef.UART_tx__DOT__inDataReg), (IData)(vlSelfRef.UART_tx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_7)));
                    __Vdly__UART_tx__DOT__outDataReg 
                        = (1U & (IData)(vlSelfRef.UART_tx__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___outDataReg_T));
                }
            } else if ((1U & (~ ((~ (IData)(vlSelfRef.UART_tx__DOT___GEN_1)) 
                                 | (IData)(vlSelfRef.UART_tx__DOT___GEN_0))))) {
                __Vdly__UART_tx__DOT__bitCnterReg = 
                    ((8U & (IData)(vlSelfRef.UART_tx__DOT__bitCnterReg))
                      ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelfRef.UART_tx__DOT__bitCnterReg))));
                vlSelfRef.UART_tx__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___outDataReg_T_2 
                    = (0xffU & VL_SHIFTR_III(8,8,8, (IData)(vlSelfRef.UART_tx__DOT__inDataReg), (IData)(vlSelfRef.UART_tx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_7)));
                __Vdly__UART_tx__DOT__outDataReg = 
                    (1U & (((IData)(vlSelfRef.UART_tx__DOT__bitCnterReg) 
                            >> 3U) | (IData)(vlSelfRef.UART_tx__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___outDataReg_T_2)));
            }
        }
        vlSelfRef.UART_tx__DOT__outTxBusyReg = (0U 
                                                != (IData)(vlSelfRef.UART_tx__DOT__stateReg));
        __Vdly__UART_tx__DOT__outTxDoneReg = ((~ (IData)(vlSelfRef._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T)) 
                                              & ((((~ (IData)(vlSelfRef.UART_tx__DOT___GEN_3)) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.UART_tx__DOT__stateReg))) 
                                                  & (~ (IData)(vlSelfRef.UART_tx__DOT___GEN_0))) 
                                                 | (IData)(vlSelfRef.UART_tx__DOT__outTxDoneReg)));
        __Vdly__UART_tx__DOT__stateReg = (3U & ((IData)(vlSelfRef.UART_tx__DOT__unnamedblk1__DOT___GEN_6) 
                                                >> 
                                                (7U 
                                                 & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.UART_tx__DOT__stateReg), 1U))));
        if (((IData)(vlSelfRef._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T) 
             & (IData)(vlSelfRef.io_i_tx_trig))) {
            vlSelfRef.UART_tx__DOT__inDataReg = vlSelfRef.io_i_data;
        }
    }
    vlSelfRef.UART_tx__DOT__outDataReg = __Vdly__UART_tx__DOT__outDataReg;
    vlSelfRef.UART_tx__DOT__outTxDoneReg = __Vdly__UART_tx__DOT__outTxDoneReg;
    vlSelfRef.UART_tx__DOT__bitCnterReg = __Vdly__UART_tx__DOT__bitCnterReg;
    vlSelfRef.UART_tx__DOT__clkCnterReg = __Vdly__UART_tx__DOT__clkCnterReg;
    vlSelfRef.UART_tx__DOT__stateReg = __Vdly__UART_tx__DOT__stateReg;
    vlSelfRef.io_o_serial_data = vlSelfRef.UART_tx__DOT__outDataReg;
    vlSelfRef._reg_signals_UART_tx___05FI___05Flocal___05FI___05FoutDataReg 
        = vlSelfRef.UART_tx__DOT__outDataReg;
    vlSelfRef.io_o_tx_busy = vlSelfRef.UART_tx__DOT__outTxBusyReg;
    vlSelfRef._reg_signals_UART_tx___05FI___05Flocal___05FI___05FoutTxBusyReg 
        = vlSelfRef.UART_tx__DOT__outTxBusyReg;
    vlSelfRef.io_o_tx_done = vlSelfRef.UART_tx__DOT__outTxDoneReg;
    vlSelfRef._reg_signals_UART_tx___05FI___05Flocal___05FI___05FoutTxDoneReg 
        = vlSelfRef.UART_tx__DOT__outTxDoneReg;
    vlSelfRef._reg_signals_UART_tx___05FI___05Flocal___05FI___05FbitCnterReg 
        = vlSelfRef.UART_tx__DOT__bitCnterReg;
    vlSelfRef._reg_signals_UART_tx___05FI___05Flocal___05FI___05FclkCnterReg 
        = vlSelfRef.UART_tx__DOT__clkCnterReg;
    vlSelfRef.UART_tx__DOT___GEN_0 = (0x56U > (IData)(vlSelfRef.UART_tx__DOT__clkCnterReg));
    vlSelfRef._reg_signals_UART_tx___05FI___05Flocal___05FI___05FstateReg 
        = vlSelfRef.UART_tx__DOT__stateReg;
    vlSelfRef.UART_tx__DOT___GEN = (1U == (IData)(vlSelfRef.UART_tx__DOT__stateReg));
    vlSelfRef.UART_tx__DOT___GEN_1 = (2U == (IData)(vlSelfRef.UART_tx__DOT__stateReg));
    vlSelfRef.UART_tx__DOT___GEN_3 = ((1U == (IData)(vlSelfRef.UART_tx__DOT__stateReg)) 
                                      | (2U == (IData)(vlSelfRef.UART_tx__DOT__stateReg)));
    vlSelfRef._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T 
        = (0U == (IData)(vlSelfRef.UART_tx__DOT__stateReg));
    vlSelfRef._reg_signals_UART_tx___05FI___05Flocal___05FI___05FinDataReg 
        = vlSelfRef.UART_tx__DOT__inDataReg;
    vlSelfRef._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_1 
        = ((IData)(vlSelfRef._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T) 
           & (IData)(vlSelfRef.io_i_tx_trig));
    vlSelfRef._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_2 
        = ((~ (IData)(vlSelfRef._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T)) 
           & (1U == (IData)(vlSelfRef.UART_tx__DOT__stateReg)));
    vlSelfRef._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_7 
        = ((~ ((IData)(vlSelfRef._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T) 
               | (IData)(vlSelfRef.UART_tx__DOT___GEN_3))) 
           & (3U == (IData)(vlSelfRef.UART_tx__DOT__stateReg)));
    vlSelfRef._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_4 
        = ((~ ((IData)(vlSelfRef._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T) 
               | (1U == (IData)(vlSelfRef.UART_tx__DOT__stateReg)))) 
           & (2U == (IData)(vlSelfRef.UART_tx__DOT__stateReg)));
    vlSelfRef._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_3 
        = ((IData)(vlSelfRef._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_2) 
           & (0x56U > (IData)(vlSelfRef.UART_tx__DOT__clkCnterReg)));
    vlSelfRef._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_8 
        = ((IData)(vlSelfRef._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_7) 
           & (0x56U > (IData)(vlSelfRef.UART_tx__DOT__clkCnterReg)));
    vlSelfRef._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_5 
        = ((IData)(vlSelfRef._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_4) 
           & (0x56U > (IData)(vlSelfRef.UART_tx__DOT__clkCnterReg)));
    vlSelfRef._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_6 
        = ((~ ((0x56U > (IData)(vlSelfRef.UART_tx__DOT__clkCnterReg)) 
               | ((IData)(vlSelfRef.UART_tx__DOT__bitCnterReg) 
                  >> 3U))) & (IData)(vlSelfRef._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_4));
}

void VUART_tx___024root___eval_triggers__act(VUART_tx___024root* vlSelf);

bool VUART_tx___024root___eval_phase__act(VUART_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___eval_phase__act\n"); );
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VUART_tx___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VUART_tx___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VUART_tx___024root___eval_phase__nba(VUART_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___eval_phase__nba\n"); );
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VUART_tx___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___eval\n"); );
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VUART_tx___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("UART_tx.sv", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VUART_tx___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VUART_tx___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("UART_tx.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VUART_tx___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("UART_tx.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VUART_tx___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VUART_tx___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VUART_tx___024root___eval_debug_assertions(VUART_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_tx___024root___eval_debug_assertions\n"); );
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY(((vlSelfRef.io_i_tx_trig & 0xfeU)))) {
        Verilated::overWidthError("io_i_tx_trig");}
}
#endif  // VL_DEBUG
