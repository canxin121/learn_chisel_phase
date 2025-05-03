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
    VL_OUT8(_cp___05Fs0,0,0);
    VL_OUT8(_cp___05Fs1,0,0);
    VL_OUT8(_cp___05Fs10,0,0);
    VL_OUT8(_cp___05Fs2,0,0);
    VL_OUT8(_cp___05Fs3,0,0);
    VL_OUT8(_cp___05Fs4,0,0);
    VL_OUT8(_cp___05Fs5,0,0);
    VL_OUT8(_cp___05Fs6,0,0);
    VL_OUT8(_cp___05Fs7,0,0);
    VL_OUT8(_cp___05Fs8,0,0);
    VL_OUT8(_cp___05Fs9,0,0);
    VL_OUT8(_rs___05Fs1,3,0);
    VL_OUT8(_rs___05Fs10,0,0);
    VL_OUT8(_rs___05Fs11,1,0);
    VL_OUT8(_rs___05Fs12,0,0);
    VL_OUT8(_rs___05Fs13,0,0);
    VL_OUT8(_rs___05Fs2,0,0);
    VL_OUT8(_rs___05Fs3,0,0);
    VL_OUT8(_rs___05Fs4,0,0);
    VL_OUT8(_rs___05Fs5,0,0);
    VL_OUT8(_rs___05Fs6,0,0);
    VL_OUT8(_rs___05Fs7,0,0);
    VL_OUT8(_rs___05Fs8,0,0);
    VL_OUT8(_rs___05Fs9,0,0);
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
    CData/*0:0*/ UART_rx__DOT__unnamedblk1__DOT___GEN_7;
    CData/*7:0*/ UART_rx__DOT__unnamedblk1__DOT___GEN_9;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(_rs___05Fs0,8,0);
    SData/*8:0*/ UART_rx__DOT__clkCnterReg;
    SData/*8:0*/ UART_rx__DOT__unnamedblk1__DOT___GEN_5;
    SData/*8:0*/ UART_rx__DOT__unnamedblk1__DOT___GEN_6;
    QData/*35:0*/ UART_rx__DOT__unnamedblk1__DOT___GEN_8;
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
