// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUART_rx.h for the primary calling header

#ifndef VERILATED_VUART_RX___024ROOT_H_
#define VERILATED_VUART_RX___024ROOT_H_  // guard

#include "verilated.h"


class VUART_rx__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUART_rx___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_i_serial_data,0,0);
    VL_OUT8(io_o_rx_done,0,0);
    VL_OUT8(io_o_data,7,0);
    VL_OUT8(_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T,0,0);
    VL_OUT8(_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_1,0,0);
    VL_OUT8(_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_10,0,0);
    VL_OUT8(_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_11,0,0);
    VL_OUT8(_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_2,0,0);
    VL_OUT8(_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_3,0,0);
    VL_OUT8(_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_4,0,0);
    VL_OUT8(_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_5,0,0);
    VL_OUT8(_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_6,0,0);
    VL_OUT8(_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_8,0,0);
    VL_OUT8(_cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_9,0,0);
    VL_OUT8(_reg_signals_UART_rx___05FI___05Flocal___05FI___05FbitCnterReg,3,0);
    VL_OUT8(_reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_0,0,0);
    VL_OUT8(_reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_1,0,0);
    VL_OUT8(_reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_2,0,0);
    VL_OUT8(_reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_3,0,0);
    VL_OUT8(_reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_4,0,0);
    VL_OUT8(_reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_5,0,0);
    VL_OUT8(_reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_6,0,0);
    VL_OUT8(_reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_7,0,0);
    VL_OUT8(_reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutRxDoneReg,0,0);
    VL_OUT8(_reg_signals_UART_rx___05FI___05Flocal___05FI___05FserialDataReg,0,0);
    VL_OUT8(_reg_signals_UART_rx___05FI___05Flocal___05FI___05FserialDataReg_REG,0,0);
    VL_OUT8(_reg_signals_UART_rx___05FI___05Flocal___05FI___05FstateReg,1,0);
    CData/*3:0*/ UART_rx__DOT__bitCnterReg;
    CData/*0:0*/ UART_rx__DOT__outDataReg_0;
    CData/*0:0*/ UART_rx__DOT__outDataReg_1;
    CData/*0:0*/ UART_rx__DOT__outDataReg_2;
    CData/*0:0*/ UART_rx__DOT__outDataReg_3;
    CData/*0:0*/ UART_rx__DOT__outDataReg_4;
    CData/*0:0*/ UART_rx__DOT__outDataReg_5;
    CData/*0:0*/ UART_rx__DOT__outDataReg_6;
    CData/*0:0*/ UART_rx__DOT__outDataReg_7;
    CData/*0:0*/ UART_rx__DOT__outRxDoneReg;
    CData/*1:0*/ UART_rx__DOT__stateReg;
    CData/*0:0*/ UART_rx__DOT__serialDataReg_REG;
    CData/*0:0*/ UART_rx__DOT__serialDataReg;
    CData/*0:0*/ UART_rx__DOT___GEN;
    CData/*0:0*/ UART_rx__DOT___GEN_0;
    CData/*0:0*/ UART_rx__DOT___GEN_1;
    CData/*0:0*/ UART_rx__DOT___GEN_2;
    CData/*0:0*/ UART_rx__DOT___GEN_3;
    CData/*0:0*/ UART_rx__DOT___GEN_4;
    CData/*0:0*/ UART_rx__DOT___GEN_5;
    CData/*7:0*/ UART_rx__DOT__unnamedblk1__DOT___GEN_8;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(_reg_signals_UART_rx___05FI___05Flocal___05FI___05FclkCnterReg,8,0);
    SData/*8:0*/ UART_rx__DOT__clkCnterReg;
    QData/*35:0*/ UART_rx__DOT__unnamedblk1__DOT___GEN_7;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VUART_rx__Syms* const vlSymsp;

    // CONSTRUCTORS
    VUART_rx___024root(VUART_rx__Syms* symsp, const char* v__name);
    ~VUART_rx___024root();
    VL_UNCOPYABLE(VUART_rx___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
