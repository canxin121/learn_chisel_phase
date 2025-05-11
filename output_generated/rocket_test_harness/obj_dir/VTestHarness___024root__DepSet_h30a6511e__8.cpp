// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness__pch.h"
#include "VTestHarness__Syms.h"
#include "VTestHarness___024root.h"

void VTestHarness___024unit____Vdpiimwrap_debug_tick_TOP____024unit(CData/*0:0*/ &debug_req_valid, CData/*0:0*/ debug_req_ready, IData/*31:0*/ &debug_req_bits_addr, IData/*31:0*/ &debug_req_bits_op, IData/*31:0*/ &debug_req_bits_data, CData/*0:0*/ debug_resp_valid, CData/*0:0*/ &debug_resp_ready, IData/*31:0*/ debug_resp_bits_resp, IData/*31:0*/ debug_resp_bits_data, IData/*31:0*/ &debug_tick__Vfuncrtn);

VL_INLINE_OPT void VTestHarness___024root___nba_sequent__TOP__25(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___nba_sequent__TOP__25\n"); );
    // Init
    IData/*31:0*/ __Vfunc_debug_tick__0__Vfuncout;
    __Vfunc_debug_tick__0__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_debug_tick__0__debug_req_valid;
    __Vfunc_debug_tick__0__debug_req_valid = 0;
    IData/*31:0*/ __Vfunc_debug_tick__0__debug_req_bits_addr;
    __Vfunc_debug_tick__0__debug_req_bits_addr = 0;
    IData/*31:0*/ __Vfunc_debug_tick__0__debug_req_bits_op;
    __Vfunc_debug_tick__0__debug_req_bits_op = 0;
    IData/*31:0*/ __Vfunc_debug_tick__0__debug_req_bits_data;
    __Vfunc_debug_tick__0__debug_req_bits_data = 0;
    CData/*0:0*/ __Vfunc_debug_tick__0__debug_resp_ready;
    __Vfunc_debug_tick__0__debug_resp_ready = 0;
    // Body
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->TestHarness__DOT__SimDTM__DOT__r_reset))) {
        vlSelf->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_valid = 0U;
        vlSelf->TestHarness__DOT__SimDTM__DOT_____05Fdebug_resp_ready = 0U;
        vlSelf->TestHarness__DOT__SimDTM__DOT_____05Fexit = 0U;
    } else {
        VTestHarness___024unit____Vdpiimwrap_debug_tick_TOP____024unit(__Vfunc_debug_tick__0__debug_req_valid, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__in_0_a_ready), __Vfunc_debug_tick__0__debug_req_bits_addr, __Vfunc_debug_tick__0__debug_req_bits_op, __Vfunc_debug_tick__0__debug_req_bits_data, (IData)(vlSelf->_cp___05Fs11319), __Vfunc_debug_tick__0__debug_resp_ready, (IData)(vlSelf->_mc___05Fs3510), 
                                                                       (((IData)(vlSelf->_mc___05Fs3508)
                                                                          ? 
                                                                         ((IData)(vlSelf->_mc___05Fs3561)
                                                                           ? 0U
                                                                           : (IData)(
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                                >> 1U)))
                                                                          : 0U) 
                                                                        | ((IData)(vlSelf->_mc___05Fs3509)
                                                                            ? 
                                                                           ((IData)(vlSelf->_mc___05Fs3537)
                                                                             ? 
                                                                            ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT____VdfgTmp_hcef7e3f7__0)
                                                                              ? 0x112380U
                                                                              : 
                                                                             (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq) 
                                                                               << 0x1fU) 
                                                                              | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_ha6459e1f__0))))
                                                                             : 0U)
                                                                            : 0U)), __Vfunc_debug_tick__0__Vfuncout);
        vlSelf->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_valid 
            = __Vfunc_debug_tick__0__debug_req_valid;
        vlSelf->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr 
            = __Vfunc_debug_tick__0__debug_req_bits_addr;
        vlSelf->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_bits_op 
            = __Vfunc_debug_tick__0__debug_req_bits_op;
        vlSelf->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_bits_data 
            = __Vfunc_debug_tick__0__debug_req_bits_data;
        vlSelf->TestHarness__DOT__SimDTM__DOT_____05Fdebug_resp_ready 
            = __Vfunc_debug_tick__0__debug_resp_ready;
        vlSelf->TestHarness__DOT__SimDTM__DOT_____05Fexit 
            = __Vfunc_debug_tick__0__Vfuncout;
    }
    vlSelf->TestHarness__DOT__SimDTM__DOT__r_reset 
        = vlSelf->reset;
}
