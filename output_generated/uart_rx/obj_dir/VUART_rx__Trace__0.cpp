// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VUART_rx__Syms.h"


void VUART_rx___024root__trace_chg_0_sub_0(VUART_rx___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VUART_rx___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root__trace_chg_0\n"); );
    // Init
    VUART_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VUART_rx___024root*>(voidSelf);
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VUART_rx___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VUART_rx___024root__trace_chg_0_sub_0(VUART_rx___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelf->UART_rx__DOT__clkCnterReg),9);
        bufp->chgCData(oldp+1,(vlSelf->UART_rx__DOT__bitCnterReg),4);
        bufp->chgBit(oldp+2,(vlSelf->UART_rx__DOT__outDataReg_0));
        bufp->chgBit(oldp+3,(vlSelf->UART_rx__DOT__outDataReg_1));
        bufp->chgBit(oldp+4,(vlSelf->UART_rx__DOT__outDataReg_2));
        bufp->chgBit(oldp+5,(vlSelf->UART_rx__DOT__outDataReg_3));
        bufp->chgBit(oldp+6,(vlSelf->UART_rx__DOT__outDataReg_4));
        bufp->chgBit(oldp+7,(vlSelf->UART_rx__DOT__outDataReg_5));
        bufp->chgBit(oldp+8,(vlSelf->UART_rx__DOT__outDataReg_6));
        bufp->chgBit(oldp+9,(vlSelf->UART_rx__DOT__outDataReg_7));
        bufp->chgBit(oldp+10,(vlSelf->UART_rx__DOT__outRxDoneReg));
        bufp->chgCData(oldp+11,(vlSelf->UART_rx__DOT__stateReg),2);
        bufp->chgBit(oldp+12,(vlSelf->UART_rx__DOT__serialDataReg_REG));
        bufp->chgBit(oldp+13,(vlSelf->UART_rx__DOT__serialDataReg));
    }
    bufp->chgBit(oldp+14,(vlSelf->clock));
    bufp->chgBit(oldp+15,(vlSelf->reset));
    bufp->chgBit(oldp+16,(vlSelf->io_i_serial_data));
    bufp->chgBit(oldp+17,(vlSelf->io_o_rx_done));
    bufp->chgCData(oldp+18,(vlSelf->io_o_data),8);
}

void VUART_rx___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root__trace_cleanup\n"); );
    // Init
    VUART_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VUART_rx___024root*>(voidSelf);
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
