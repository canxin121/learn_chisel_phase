// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VWaveformGenerator__Syms.h"


VL_ATTR_COLD void VWaveformGenerator___024root__trace_init_sub__TOP__0(VWaveformGenerator___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"io_waveType",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"io_freqCtrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"io_phaseOffset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+6,0,"io_output",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("WaveformGenerator", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"io_waveType",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"io_freqCtrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"io_phaseOffset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+6,0,"io_output",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"phaseAcc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void VWaveformGenerator___024root__trace_init_top(VWaveformGenerator___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root__trace_init_top\n"); );
    // Body
    VWaveformGenerator___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VWaveformGenerator___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VWaveformGenerator___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VWaveformGenerator___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VWaveformGenerator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VWaveformGenerator___024root__trace_register(VWaveformGenerator___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VWaveformGenerator___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VWaveformGenerator___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VWaveformGenerator___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VWaveformGenerator___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VWaveformGenerator___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root__trace_const_0\n"); );
    // Init
    VWaveformGenerator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VWaveformGenerator___024root*>(voidSelf);
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VWaveformGenerator___024root__trace_full_0_sub_0(VWaveformGenerator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VWaveformGenerator___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root__trace_full_0\n"); );
    // Init
    VWaveformGenerator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VWaveformGenerator___024root*>(voidSelf);
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VWaveformGenerator___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VWaveformGenerator___024root__trace_full_0_sub_0(VWaveformGenerator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VWaveformGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWaveformGenerator___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clock));
    bufp->fullBit(oldp+2,(vlSelf->reset));
    bufp->fullCData(oldp+3,(vlSelf->io_waveType),2);
    bufp->fullSData(oldp+4,(vlSelf->io_freqCtrl),16);
    bufp->fullSData(oldp+5,(vlSelf->io_phaseOffset),16);
    bufp->fullCData(oldp+6,(vlSelf->io_output),8);
    bufp->fullSData(oldp+7,(vlSelf->WaveformGenerator__DOT__phaseAcc),16);
}
