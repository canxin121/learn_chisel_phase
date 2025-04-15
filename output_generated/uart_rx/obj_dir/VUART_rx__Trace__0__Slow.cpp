// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VUART_rx__Syms.h"


VL_ATTR_COLD void VUART_rx___024root__trace_init_sub__TOP__0(VUART_rx___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root__trace_init_sub__TOP__0\n"); );
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+15,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"io_i_serial_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"io_o_rx_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"io_o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("UART_rx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+15,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"io_i_serial_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"io_o_rx_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"io_o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1,0,"clkCnterReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+2,0,"bitCnterReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+3,0,"outDataReg_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"outDataReg_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"outDataReg_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"outDataReg_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"outDataReg_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"outDataReg_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"outDataReg_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"outDataReg_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"outRxDoneReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"stateReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+13,0,"serialDataReg_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"serialDataReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void VUART_rx___024root__trace_init_top(VUART_rx___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root__trace_init_top\n"); );
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VUART_rx___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VUART_rx___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VUART_rx___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VUART_rx___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VUART_rx___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VUART_rx___024root__trace_register(VUART_rx___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root__trace_register\n"); );
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VUART_rx___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VUART_rx___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VUART_rx___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VUART_rx___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VUART_rx___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root__trace_const_0\n"); );
    // Init
    VUART_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VUART_rx___024root*>(voidSelf);
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VUART_rx___024root__trace_full_0_sub_0(VUART_rx___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VUART_rx___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root__trace_full_0\n"); );
    // Init
    VUART_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VUART_rx___024root*>(voidSelf);
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VUART_rx___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VUART_rx___024root__trace_full_0_sub_0(VUART_rx___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUART_rx___024root__trace_full_0_sub_0\n"); );
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelfRef.UART_rx__DOT__clkCnterReg),9);
    bufp->fullCData(oldp+2,(vlSelfRef.UART_rx__DOT__bitCnterReg),4);
    bufp->fullBit(oldp+3,(vlSelfRef.UART_rx__DOT__outDataReg_0));
    bufp->fullBit(oldp+4,(vlSelfRef.UART_rx__DOT__outDataReg_1));
    bufp->fullBit(oldp+5,(vlSelfRef.UART_rx__DOT__outDataReg_2));
    bufp->fullBit(oldp+6,(vlSelfRef.UART_rx__DOT__outDataReg_3));
    bufp->fullBit(oldp+7,(vlSelfRef.UART_rx__DOT__outDataReg_4));
    bufp->fullBit(oldp+8,(vlSelfRef.UART_rx__DOT__outDataReg_5));
    bufp->fullBit(oldp+9,(vlSelfRef.UART_rx__DOT__outDataReg_6));
    bufp->fullBit(oldp+10,(vlSelfRef.UART_rx__DOT__outDataReg_7));
    bufp->fullBit(oldp+11,(vlSelfRef.UART_rx__DOT__outRxDoneReg));
    bufp->fullCData(oldp+12,(vlSelfRef.UART_rx__DOT__stateReg),2);
    bufp->fullBit(oldp+13,(vlSelfRef.UART_rx__DOT__serialDataReg_REG));
    bufp->fullBit(oldp+14,(vlSelfRef.UART_rx__DOT__serialDataReg));
    bufp->fullBit(oldp+15,(vlSelfRef.clock));
    bufp->fullBit(oldp+16,(vlSelfRef.reset));
    bufp->fullBit(oldp+17,(vlSelfRef.io_i_serial_data));
    bufp->fullBit(oldp+18,(vlSelfRef.io_o_rx_done));
    bufp->fullCData(oldp+19,(vlSelfRef.io_o_data),8);
}
