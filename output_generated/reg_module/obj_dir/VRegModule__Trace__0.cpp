// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRegModule__Syms.h"


void VRegModule___024root__trace_chg_0_sub_0(VRegModule___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VRegModule___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegModule___024root__trace_chg_0\n"); );
    // Init
    VRegModule___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRegModule___024root*>(voidSelf);
    VRegModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VRegModule___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VRegModule___024root__trace_chg_0_sub_0(VRegModule___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegModule___024root__trace_chg_0_sub_0\n"); );
    VRegModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clock));
    bufp->chgBit(oldp+1,(vlSelfRef.reset));
    bufp->chgBit(oldp+2,(vlSelfRef.io_sel));
    bufp->chgCData(oldp+3,(vlSelfRef.io_out_0_0),8);
    bufp->chgCData(oldp+4,(vlSelfRef.io_out_0_1),8);
    bufp->chgCData(oldp+5,(vlSelfRef.io_out_0_2),8);
    bufp->chgCData(oldp+6,(vlSelfRef.io_out_1_0),8);
    bufp->chgCData(oldp+7,(vlSelfRef.io_out_1_1),8);
    bufp->chgCData(oldp+8,(vlSelfRef.io_out_1_2),8);
    bufp->chgCData(oldp+9,(vlSelfRef.RegModule__DOT__regA_0_0),8);
    bufp->chgCData(oldp+10,(vlSelfRef.RegModule__DOT__regB_1_2),8);
}

void VRegModule___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegModule___024root__trace_cleanup\n"); );
    // Init
    VRegModule___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRegModule___024root*>(voidSelf);
    VRegModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
