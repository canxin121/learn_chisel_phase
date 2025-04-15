// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUART_tx.h for the primary calling header

#ifndef VERILATED_VUART_TX___024ROOT_H_
#define VERILATED_VUART_TX___024ROOT_H_  // guard

#include "verilated.h"


class VUART_tx__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUART_tx___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_i_tx_trig,0,0);
    VL_IN8(io_i_data,7,0);
    VL_OUT8(io_o_tx_busy,0,0);
    VL_OUT8(io_o_tx_done,0,0);
    VL_OUT8(io_o_serial_data,0,0);
    VL_OUT8(_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T,0,0);
    VL_OUT8(_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_1,0,0);
    VL_OUT8(_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_2,0,0);
    VL_OUT8(_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_3,0,0);
    VL_OUT8(_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_4,0,0);
    VL_OUT8(_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_5,0,0);
    VL_OUT8(_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_6,0,0);
    VL_OUT8(_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_7,0,0);
    VL_OUT8(_cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_8,0,0);
    VL_OUT8(_reg_signals_UART_tx___05FI___05Flocal___05FI___05FbitCnterReg,3,0);
    VL_OUT8(_reg_signals_UART_tx___05FI___05Flocal___05FI___05FclkCnterReg,7,0);
    VL_OUT8(_reg_signals_UART_tx___05FI___05Flocal___05FI___05FinDataReg,7,0);
    VL_OUT8(_reg_signals_UART_tx___05FI___05Flocal___05FI___05FoutDataReg,0,0);
    VL_OUT8(_reg_signals_UART_tx___05FI___05Flocal___05FI___05FoutTxBusyReg,0,0);
    VL_OUT8(_reg_signals_UART_tx___05FI___05Flocal___05FI___05FoutTxDoneReg,0,0);
    VL_OUT8(_reg_signals_UART_tx___05FI___05Flocal___05FI___05FstateReg,1,0);
    CData/*7:0*/ UART_tx__DOT__clkCnterReg;
    CData/*3:0*/ UART_tx__DOT__bitCnterReg;
    CData/*7:0*/ UART_tx__DOT__inDataReg;
    CData/*0:0*/ UART_tx__DOT__outDataReg;
    CData/*0:0*/ UART_tx__DOT__outTxBusyReg;
    CData/*0:0*/ UART_tx__DOT__outTxDoneReg;
    CData/*1:0*/ UART_tx__DOT__stateReg;
    CData/*0:0*/ UART_tx__DOT___GEN;
    CData/*0:0*/ UART_tx__DOT___GEN_0;
    CData/*0:0*/ UART_tx__DOT___GEN_1;
    CData/*0:0*/ UART_tx__DOT___GEN_3;
    IData/*31:0*/ UART_tx__DOT__unnamedblk1__DOT___GEN_5;
    CData/*7:0*/ UART_tx__DOT__unnamedblk1__DOT___GEN_6;
    CData/*7:0*/ UART_tx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_7;
    CData/*7:0*/ UART_tx__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___outDataReg_T;
    CData/*7:0*/ UART_tx__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___outDataReg_T_2;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VUART_tx__Syms* const vlSymsp;

    // CONSTRUCTORS
    VUART_tx___024root(VUART_tx__Syms* symsp, const char* v__name);
    ~VUART_tx___024root();
    VL_UNCOPYABLE(VUART_tx___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
