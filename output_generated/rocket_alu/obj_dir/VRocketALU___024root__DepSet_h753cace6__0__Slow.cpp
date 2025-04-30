// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRocketALU.h for the primary calling header

#include "VRocketALU__pch.h"
#include "VRocketALU__Syms.h"
#include "VRocketALU___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VRocketALU___024root___dump_triggers__stl(VRocketALU___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VRocketALU___024root___eval_triggers__stl(VRocketALU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRocketALU___024root___eval_triggers__stl\n"); );
    VRocketALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRocketALU___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
