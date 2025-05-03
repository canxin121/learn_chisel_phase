// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VComplexExample__Syms.h"


void VComplexExample___024root__trace_chg_0_sub_0(VComplexExample___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VComplexExample___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root__trace_chg_0\n"); );
    // Init
    VComplexExample___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VComplexExample___024root*>(voidSelf);
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VComplexExample___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VComplexExample___024root__trace_chg_0_sub_0(VComplexExample___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clock));
    bufp->chgBit(oldp+1,(vlSelf->reset));
    bufp->chgCData(oldp+2,(vlSelf->io_topInA),8);
    bufp->chgCData(oldp+3,(vlSelf->io_topInB),8);
    bufp->chgCData(oldp+4,(vlSelf->io_topSel),2);
    bufp->chgCData(oldp+5,(vlSelf->io_topOut),8);
    bufp->chgCData(oldp+6,(vlSelf->ComplexExample__DOT____Vcellinp__anotherSub__io_in),8);
    bufp->chgCData(oldp+7,((0xffU & ((IData)(vlSelf->ComplexExample__DOT__anotherSub__DOT__delayedIn) 
                                     + (IData)(vlSelf->_cp___05Fs3)))),8);
    bufp->chgCData(oldp+8,(vlSelf->ComplexExample__DOT__anotherSub__DOT__delayedIn),8);
    bufp->chgCData(oldp+9,(vlSelf->ComplexExample__DOT____Vcellinp__sub__io_a),8);
    bufp->chgCData(oldp+10,(vlSelf->ComplexExample__DOT____Vcellinp__sub__io_b),8);
    bufp->chgCData(oldp+11,(vlSelf->ComplexExample__DOT___sub_io_out),8);
    bufp->chgCData(oldp+12,(vlSelf->ComplexExample__DOT__sub__DOT__stateReg),8);
}

void VComplexExample___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexExample___024root__trace_cleanup\n"); );
    // Init
    VComplexExample___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VComplexExample___024root*>(voidSelf);
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
