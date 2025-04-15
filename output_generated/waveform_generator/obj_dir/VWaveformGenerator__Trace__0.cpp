// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VWaveformGenerator__Syms.h"


void VWaveformGenerator___024root__trace_chg_0_sub_0(VWaveformGenerator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VWaveformGenerator___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root__trace_chg_0\n"); );
    // Init
    VWaveformGenerator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VWaveformGenerator___024root*>(voidSelf);
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VWaveformGenerator___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VWaveformGenerator___024root__trace_chg_0_sub_0(VWaveformGenerator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root__trace_chg_0_sub_0\n"); );
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clock));
    bufp->chgBit(oldp+1,(vlSelfRef.reset));
    bufp->chgCData(oldp+2,(vlSelfRef.io_waveType),2);
    bufp->chgSData(oldp+3,(vlSelfRef.io_freqCtrl),16);
    bufp->chgSData(oldp+4,(vlSelfRef.io_phaseOffset),16);
    bufp->chgCData(oldp+5,(vlSelfRef.io_output),8);
    bufp->chgSData(oldp+6,(vlSelfRef.WaveformGenerator__DOT__phaseAcc),16);
}

void VWaveformGenerator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root__trace_cleanup\n"); );
    // Init
    VWaveformGenerator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VWaveformGenerator___024root*>(voidSelf);
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
