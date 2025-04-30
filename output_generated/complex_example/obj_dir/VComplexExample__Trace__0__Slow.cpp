// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VComplexExample__Syms.h"


VL_ATTR_COLD void VComplexExample___024root__trace_init_sub__TOP__0(VComplexExample___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root__trace_init_sub__TOP__0\n"); );
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"io_topInA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"io_topInB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"io_topSel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+6,0,"io_topOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("ComplexExample", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"io_topInA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"io_topInB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"io_topSel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+6,0,"io_topOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("anotherSub", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"delayedIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("sub", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"io_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"stateReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VComplexExample___024root__trace_init_top(VComplexExample___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root__trace_init_top\n"); );
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VComplexExample___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VComplexExample___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VComplexExample___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VComplexExample___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VComplexExample___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VComplexExample___024root__trace_register(VComplexExample___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root__trace_register\n"); );
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VComplexExample___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VComplexExample___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VComplexExample___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VComplexExample___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VComplexExample___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root__trace_const_0\n"); );
    // Init
    VComplexExample___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VComplexExample___024root*>(voidSelf);
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VComplexExample___024root__trace_full_0_sub_0(VComplexExample___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VComplexExample___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root__trace_full_0\n"); );
    // Init
    VComplexExample___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VComplexExample___024root*>(voidSelf);
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VComplexExample___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VComplexExample___024root__trace_full_0_sub_0(VComplexExample___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root__trace_full_0_sub_0\n"); );
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.clock));
    bufp->fullBit(oldp+2,(vlSelfRef.reset));
    bufp->fullCData(oldp+3,(vlSelfRef.io_topInA),8);
    bufp->fullCData(oldp+4,(vlSelfRef.io_topInB),8);
    bufp->fullCData(oldp+5,(vlSelfRef.io_topSel),2);
    bufp->fullCData(oldp+6,(vlSelfRef.io_topOut),8);
    bufp->fullCData(oldp+7,(vlSelfRef.ComplexExample__DOT____Vcellinp__anotherSub__io_in),8);
    bufp->fullCData(oldp+8,((0xffU & ((IData)(vlSelfRef.ComplexExample__DOT__anotherSub__DOT__delayedIn) 
                                      + (IData)(vlSelfRef._cond_pred_ComplexExample___05FI___05FanotherSub___05FM___05FAnotherSubModule___05FS___05F_T)))),8);
    bufp->fullCData(oldp+9,(vlSelfRef.ComplexExample__DOT__anotherSub__DOT__delayedIn),8);
    bufp->fullCData(oldp+10,(vlSelfRef.ComplexExample__DOT____Vcellinp__sub__io_a),8);
    bufp->fullCData(oldp+11,(vlSelfRef.ComplexExample__DOT____Vcellinp__sub__io_b),8);
    bufp->fullCData(oldp+12,(vlSelfRef.ComplexExample__DOT___sub_io_out),8);
    bufp->fullCData(oldp+13,(vlSelfRef.ComplexExample__DOT__sub__DOT__stateReg),8);
}
