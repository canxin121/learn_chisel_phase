// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExampleRocketSystem.h for the primary calling header

#include "VExampleRocketSystem__pch.h"
#include "VExampleRocketSystem___024root.h"

VL_INLINE_OPT void VExampleRocketSystem___024root___nba_sequent__TOP__18(VExampleRocketSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root___nba_sequent__TOP__18\n"); );
    // Init
    CData/*0:0*/ ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___GEN_8;
    ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___GEN_8 = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___GEN_19;
    ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___GEN_19 = 0;
    // Body
    vlSelf->_cp___05Fs2785 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_77)));
    vlSelf->_cp___05Fs2848 = ((IData)(vlSelf->_mc___05Fs288) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__readys_valid)));
    vlSelf->_cp___05Fs2763 = vlSelf->_cp___05Fs2735;
    vlSelf->_cp___05Fs2816 = vlSelf->_cp___05Fs2735;
    vlSelf->_cp___05Fs2747 = ((IData)(vlSelf->_mc___05Fs266) 
                              & (IData)(vlSelf->_cp___05Fs2735));
    vlSelf->_cp___05Fs2766 = ((IData)(vlSelf->_cp___05Fs2735) 
                              & (IData)(vlSelf->_mc___05Fs270));
    vlSelf->_cp___05Fs2790 = ((IData)(vlSelf->_cp___05Fs2735) 
                              | (IData)(vlSelf->_cp___05Fs2471));
    vlSelf->_cp___05Fs2820 = ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi42tl_auto_out_a_bits_source) 
                                  >> 3U)) & (IData)(vlSelf->_cp___05Fs2735));
    vlSelf->_cp___05Fs2821 = ((IData)(vlSelf->_cp___05Fs2735) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi42tl_auto_out_a_bits_source) 
                                 >> 3U));
    vlSelf->_cp___05Fs2818 = ((IData)(vlSelf->_mc___05Fs279) 
                              & (IData)(vlSelf->_cp___05Fs2735));
    ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___GEN_8 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_out_ready) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4yank_auto_out_ar_valid));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN_2 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q__DOT___io_deq_valid_output) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_out_ready));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4yank_auto_in_ar_ready 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__r_out_ready) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4yank_auto_in_w_ready 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__w_out_ready) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4yank_auto_out_aw_valid));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__nodeIn_aw_ready 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__w_out_ready) 
           & ((1U == (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__w_todo)) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__nodeOut_w_valid)));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_70 
        = (1U & ((0xffffU & ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT__inflight) 
                             >> (0xfU & (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                         >> 9U)))) 
                 | (IData)(vlSelf->_cp___05Fs2497)));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_78 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready) 
            != ((IData)(vlSelf->_cp___05Fs2492) ? (0xffffU 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 9U))))
                 : 0U)) | (0U == (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready)));
    vlSelf->_cp___05Fs2822 = vlSelf->_cp___05Fs2818;
    vlSelf->_cp___05Fs2838 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4frag_auto_out_ar_bits_id)) 
                              & (IData)(ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___GEN_8));
    vlSelf->_cp___05Fs2839 = ((IData)(ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___GEN_8) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4frag_auto_out_ar_bits_id));
    vlSelf->_cp___05Fs2856 = ((~ (IData)(vlSelf->_mc___05Fs298)) 
                              & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4frag_auto_out_ar_bits_id)) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN_2)));
    vlSelf->_cp___05Fs2859 = ((~ (IData)(vlSelf->_mc___05Fs299)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN_2) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4frag_auto_out_ar_bits_id)));
    vlSelf->_cp___05Fs2892 = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q__DOT___io_deq_valid_output) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4yank_auto_in_ar_ready));
    vlSelf->_cp___05Fs2877 = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4yank_auto_in_ar_ready) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__nodeOut_ar_bits_echo_real_last));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_30 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4yank_auto_in_w_ready) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__nodeOut_w_valid));
    vlSelf->_cp___05Fs2889 = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4yank_auto_in_w_ready) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_32));
    ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___GEN_19 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__nodeIn_aw_ready) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4yank_auto_out_aw_valid));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN_6 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__nodeOut_aw_valid) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__nodeIn_aw_ready));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4yank_auto_in_aw_ready 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__nodeIn_aw_ready) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN_3));
    vlSelf->_cp___05Fs2496 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_70)));
    vlSelf->_cp___05Fs2510 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_78)));
    vlSelf->_cp___05Fs2858 = ((IData)(vlSelf->_cp___05Fs2856) 
                              != (IData)(vlSelf->_cp___05Fs2857));
    vlSelf->_cp___05Fs2861 = ((IData)(vlSelf->_cp___05Fs2859) 
                              != (IData)(vlSelf->_cp___05Fs2860));
    vlSelf->_cp___05Fs2872 = ((~ ((IData)(vlSelf->l2_frontend_bus_axi4_0_ar_ready) 
                                  & (IData)(vlSelf->_cp___05Fs2877))) 
                              & ((IData)(vlSelf->l2_frontend_bus_axi4_0_ar_ready) 
                                 & (IData)(vlSelf->l2_frontend_bus_axi4_0_ar_valid)));
    vlSelf->_cp___05Fs2873 = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q__DOT__full) 
                              & ((IData)(vlSelf->_cp___05Fs2877) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q__DOT___io_deq_valid_output)));
    vlSelf->_cp___05Fs2899 = (1U & (~ ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_30)) 
                                       | (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__w_todo)))));
    vlSelf->_cp___05Fs2884 = ((~ ((IData)(vlSelf->l2_frontend_bus_axi4_0_w_ready) 
                                  & (IData)(vlSelf->_cp___05Fs2889))) 
                              & ((IData)(vlSelf->l2_frontend_bus_axi4_0_w_ready) 
                                 & (IData)(vlSelf->l2_frontend_bus_axi4_0_w_valid)));
    vlSelf->_cp___05Fs2885 = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__in_w_deq_q__DOT__full) 
                              & ((IData)(vlSelf->_cp___05Fs2889) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__in_w_deq_q__DOT___io_deq_valid_output)));
    vlSelf->_cp___05Fs2844 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4frag_auto_out_aw_bits_id)) 
                              & (IData)(ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___GEN_19));
    vlSelf->_cp___05Fs2845 = ((IData)(ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___GEN_19) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4frag_auto_out_aw_bits_id));
    vlSelf->_cp___05Fs2862 = ((~ (IData)(vlSelf->_mc___05Fs300)) 
                              & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4frag_auto_out_aw_bits_id)) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN_6)));
    vlSelf->_cp___05Fs2865 = ((~ (IData)(vlSelf->_mc___05Fs301)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN_6) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4frag_auto_out_aw_bits_id)));
    vlSelf->_cp___05Fs2897 = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4yank_auto_in_aw_ready) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__nodeOut_aw_valid));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__in_aw_ready 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4yank_auto_in_aw_ready) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_29));
    vlSelf->_cp___05Fs2874 = ((IData)(vlSelf->_cp___05Fs2872) 
                              != (IData)(vlSelf->_cp___05Fs2873));
    vlSelf->_cp___05Fs2886 = ((IData)(vlSelf->_cp___05Fs2884) 
                              != (IData)(vlSelf->_cp___05Fs2885));
    vlSelf->_cp___05Fs2864 = ((IData)(vlSelf->_cp___05Fs2862) 
                              != (IData)(vlSelf->_cp___05Fs2863));
    vlSelf->_cp___05Fs2867 = ((IData)(vlSelf->_cp___05Fs2865) 
                              != (IData)(vlSelf->_cp___05Fs2866));
    vlSelf->_cp___05Fs2895 = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__in_aw_ready) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q_1__DOT___io_deq_valid_output));
    vlSelf->_cp___05Fs2883 = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__in_aw_ready) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__nodeOut_aw_bits_echo_real_last));
    vlSelf->_cp___05Fs2878 = ((~ ((IData)(vlSelf->l2_frontend_bus_axi4_0_aw_ready) 
                                  & (IData)(vlSelf->_cp___05Fs2883))) 
                              & ((IData)(vlSelf->l2_frontend_bus_axi4_0_aw_ready) 
                                 & (IData)(vlSelf->l2_frontend_bus_axi4_0_aw_valid)));
    vlSelf->_cp___05Fs2879 = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q_1__DOT__full) 
                              & ((IData)(vlSelf->_cp___05Fs2883) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q_1__DOT___io_deq_valid_output)));
    vlSelf->_cp___05Fs2880 = ((IData)(vlSelf->_cp___05Fs2878) 
                              != (IData)(vlSelf->_cp___05Fs2879));
}

VL_INLINE_OPT void VExampleRocketSystem___024root___nba_sequent__TOP__19(VExampleRocketSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root___nba_sequent__TOP__19\n"); );
    // Init
    CData/*0:0*/ __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq;
    __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq = 0;
    CData/*0:0*/ __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_resumereq;
    __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_resumereq = 0;
    CData/*0:0*/ __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartreset;
    __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartreset = 0;
    CData/*0:0*/ __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ackhavereset;
    __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ackhavereset = 0;
    CData/*0:0*/ __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_reserved0;
    __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_reserved0 = 0;
    CData/*0:0*/ __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hasel;
    __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hasel = 0;
    CData/*0:0*/ __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_setresethaltreq;
    __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_setresethaltreq = 0;
    CData/*0:0*/ __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_clrresethaltreq;
    __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_clrresethaltreq = 0;
    CData/*0:0*/ __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset;
    __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset = 0;
    CData/*0:0*/ __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0;
    __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0 = 0;
    CData/*0:0*/ __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx_widx_bin;
    __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx_widx_bin = 0;
    CData/*0:0*/ __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin;
    __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin = 0;
    // Body
    __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin 
        = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin;
    __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx_widx_bin 
        = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx_widx_bin;
    __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0 
        = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0;
    __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_clrresethaltreq 
        = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_clrresethaltreq;
    __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_setresethaltreq 
        = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_setresethaltreq;
    __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hasel 
        = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hasel;
    __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_reserved0 
        = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_reserved0;
    __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ackhavereset 
        = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ackhavereset;
    __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartreset 
        = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartreset;
    __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_resumereq 
        = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_resumereq;
    __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq 
        = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq;
    __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset 
        = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_gray 
        = ((1U & (~ (IData)(vlSelf->debug_clockeddmi_dmiReset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__hrmaskReg_0 
        = ((1U & (~ (IData)(vlSelf->debug_clockeddmi_dmiReset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__hrmaskNxt_0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_ridx_bin 
        = ((1U & (~ (IData)(vlSelf->debug_clockeddmi_dmiReset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlAckHaveResetReg 
        = ((1U & (~ (IData)(vlSelf->debug_clockeddmi_dmiReset))) 
           && ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT___io_innerCtrl_bits_ackhavereset_output) 
               & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT___io_enq_ready_output))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlResumeReqReg 
        = ((1U & (~ (IData)(vlSelf->debug_clockeddmi_dmiReset))) 
           && ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT___io_innerCtrl_bits_resumereq_output) 
               & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT___io_enq_ready_output))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlValidReg 
        = ((1U & (~ (IData)(vlSelf->debug_clockeddmi_dmiReset))) 
           && ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT___io_innerCtrl_valid_output) 
               & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT___io_enq_ready_output))));
    if (vlSelf->debug_clockeddmi_dmiReset) {
        __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin = 0U;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ready_reg = 0U;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_gray = 0U;
        __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx_widx_bin = 0U;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__ready_reg = 0U;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx_gray = 0U;
        __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq = 0U;
        __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_resumereq = 0U;
        __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartreset = 0U;
        __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ackhavereset = 0U;
        __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_reserved0 = 0U;
        __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hasel = 0U;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartsello = 0U;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartselhi = 0U;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_reserved1 = 0U;
        __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_setresethaltreq = 0U;
        __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_clrresethaltreq = 0U;
        __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset = 0U;
        __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0 = 0U;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive = 0U;
    } else {
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__unnamedblk1__DOT__widx 
            = ((IData)(vlSelf->_rs___05Fs3859) & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin) 
                                                  + (IData)(vlSelf->_cp___05Fs12583)));
        __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin 
            = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__unnamedblk1__DOT__widx;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ready_reg 
            = ((IData)(vlSelf->_rs___05Fs3859) & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__unnamedblk1__DOT__widx) 
                                                  != 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->_rs___05Fs3847)))));
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_gray 
            = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__unnamedblk1__DOT__widx;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__unnamedblk1__DOT__widx 
            = ((IData)(vlSelf->_rs___05Fs3811) & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx_widx_bin) 
                                                  + (IData)(vlSelf->_cp___05Fs12500)));
        __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx_widx_bin 
            = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__unnamedblk1__DOT__widx;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__ready_reg 
            = ((IData)(vlSelf->_rs___05Fs3811) & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__unnamedblk1__DOT__widx) 
                                                  != 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->_rs___05Fs3799)))));
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx_gray 
            = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__unnamedblk1__DOT__widx;
        __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq 
            = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
               & ((IData)(vlSelf->_cp___05Fs11748) ? 
                  (vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_data 
                   >> 0x1fU) : (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq)));
        __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_resumereq 
            = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
               & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_resumereq));
        __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartreset 
            = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
               & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartreset));
        __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ackhavereset 
            = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
               & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ackhavereset));
        __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_reserved0 
            = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
               & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_reserved0));
        __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hasel 
            = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
               & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hasel));
        __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_setresethaltreq 
            = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
               & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_setresethaltreq));
        __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_clrresethaltreq 
            = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
               & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_clrresethaltreq));
        __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset 
            = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
               & ((IData)(vlSelf->_cp___05Fs11748) ? 
                  (vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_data 
                   >> 1U) : (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset)));
        __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0 
            = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
               & ((IData)(vlSelf->_cp___05Fs11748) ? 
                  (vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_data 
                   >> 0x1fU) : (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0)));
        if ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive)))) {
            vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartsello = 0U;
            vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartselhi = 0U;
            vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_reserved1 = 0U;
        }
        if (vlSelf->_cp___05Fs11748) {
            vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive 
                = (1U & vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_data);
        }
    }
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->debug_clockeddmi_dmiReset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->debug_clockeddmi_dmiReset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->debug_clockeddmi_dmiReset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->debug_clockeddmi_dmiReset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->debug_clockeddmi_dmiReset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSelf->debug_clockeddmi_dmiReset))) 
           && (IData)(vlSelf->_cp___05Fs12582));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->debug_clockeddmi_dmiReset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->debug_clockeddmi_dmiReset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin 
        = __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx_widx_bin 
        = __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx_widx_bin;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_resumereq 
        = __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_resumereq;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartreset 
        = __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartreset;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ackhavereset 
        = __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ackhavereset;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_reserved0 
        = __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_reserved0;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hasel 
        = __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hasel;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_setresethaltreq 
        = __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_setresethaltreq;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_clrresethaltreq 
        = __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_clrresethaltreq;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq 
        = __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset 
        = __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0 
        = __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0;
    vlSelf->_rs___05Fs3702 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__hrmaskReg_0;
    vlSelf->_rs___05Fs3841 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_ridx_bin;
    vlSelf->_rs___05Fs3706 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlAckHaveResetReg;
    vlSelf->_rs___05Fs3705 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlResumeReqReg;
    vlSelf->_rs___05Fs3704 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlValidReg;
    vlSelf->_rs___05Fs3868 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin;
    vlSelf->_rs___05Fs3869 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ready_reg;
    vlSelf->_rs___05Fs3822 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx_widx_bin;
    vlSelf->_rs___05Fs3823 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__ready_reg;
    vlSelf->_rs___05Fs3847 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->debug_clockeddmi_dmiReset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs3799 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->debug_clockeddmi_dmiReset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs3825 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->debug_clockeddmi_dmiReset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->_mc___05Fs3603 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)));
    vlSelf->_rs___05Fs3859 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT___io_enq_ready_output 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ready_reg) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->debug_clockeddmi_dmiReset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_mc___05Fs3601 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)));
    vlSelf->_rs___05Fs3811 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___io_enq_ready_output 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__ready_reg) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->debug_clockeddmi_dmiReset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs3842 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__valid_reg;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->debug_clockeddmi_dmiReset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_mc___05Fs3602 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)));
    vlSelf->_rs___05Fs3838 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->_cp___05Fs12423 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                               & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__valid_reg));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->debug_clockeddmi_dmiReset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs3844 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_0;
    vlSelf->_rs___05Fs3688 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_resumereq;
    vlSelf->_rs___05Fs3689 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartreset;
    vlSelf->_rs___05Fs3690 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ackhavereset;
    vlSelf->_rs___05Fs3691 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_reserved0;
    vlSelf->_rs___05Fs3692 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hasel;
    vlSelf->_rs___05Fs3694 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartselhi;
    vlSelf->_rs___05Fs3695 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_reserved1;
    vlSelf->_rs___05Fs3696 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_setresethaltreq;
    vlSelf->_rs___05Fs3697 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_clrresethaltreq;
    vlSelf->_rs___05Fs3687 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq;
    vlSelf->debug_ndreset = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset;
    vlSelf->_rs___05Fs3703 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0;
    vlSelf->_rs___05Fs3698 = vlSelf->debug_ndreset;
    vlSelf->_rs___05Fs3848 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->debug_clockeddmi_dmiReset))) 
           && (IData)(vlSelf->_rs___05Fs4085));
    vlSelf->_rs___05Fs3800 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->debug_clockeddmi_dmiReset))) 
           && (IData)(vlSelf->_rs___05Fs4037));
    vlSelf->_rs___05Fs3826 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->debug_clockeddmi_dmiReset))) 
           && (IData)(vlSelf->_rs___05Fs4063));
    vlSelf->_rs___05Fs3860 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->debug_clockeddmi_dmiReset))) 
           && (IData)(vlSelf->_rs___05Fs3856));
    vlSelf->_rs___05Fs3812 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->debug_clockeddmi_dmiReset))) 
           && (IData)(vlSelf->_rs___05Fs3808));
    vlSelf->_rs___05Fs3839 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->debug_clockeddmi_dmiReset))) 
           && (IData)(vlSelf->_rs___05Fs3835));
    vlSelf->_rs___05Fs3845 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->debug_clockeddmi_dmiReset))) 
           && (IData)(vlSelf->debug_dmactiveAck));
    vlSelf->_cp___05Fs11747 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive)));
    vlSelf->__VdfgTmp_h68d180b8__0 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
                                      & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_0));
    vlSelf->_cp___05Fs11754 = vlSelf->_cp___05Fs11747;
    vlSelf->_cp___05Fs11757 = vlSelf->_cp___05Fs11747;
    vlSelf->_rs___05Fs3849 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs3801 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs3827 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs3861 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs3813 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs3840 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs3846 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_2;
}

VL_INLINE_OPT void VExampleRocketSystem___024root___nba_sequent__TOP__20(VExampleRocketSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root___nba_sequent__TOP__20\n"); );
    // Init
    CData/*0:0*/ __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx_widx_bin;
    __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx_widx_bin = 0;
    // Body
    __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx_widx_bin 
        = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx_widx_bin;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hrDebugIntReg_0 
        = ((~ (IData)(vlSelf->debug_reset)) & (((IData)(vlSelf->_rs___05Fs4064) 
                                                & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hrmaskReg_0)) 
                                               & ((IData)(vlSelf->_rs___05Fs3921) 
                                                  | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hrDebugIntReg_0) 
                                                     & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartHalted))))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_gray 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__ridx_gray 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__ridx));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_ridx_bin 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__ridx_ridx_bin 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__ridx));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->_cp___05Fs13389));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->_cp___05Fs13387));
    if (vlSelf->debug_reset) {
        __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx_widx_bin = 0U;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__ready_reg = 0U;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx_gray = 0U;
    } else {
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__unnamedblk1__DOT__widx 
            = ((IData)(vlSelf->_rs___05Fs4050) & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx_widx_bin) 
                                                  + (IData)(vlSelf->_cp___05Fs12774)));
        __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx_widx_bin 
            = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__unnamedblk1__DOT__widx;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__ready_reg 
            = ((IData)(vlSelf->_rs___05Fs4050) & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__unnamedblk1__DOT__widx) 
                                                  != 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->_rs___05Fs4038)))));
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx_gray 
            = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__unnamedblk1__DOT__widx;
    }
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx_widx_bin 
        = __Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx_widx_bin;
    vlSelf->_rs___05Fs3929 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hrDebugIntReg_0;
    vlSelf->_rs___05Fs4085 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_gray;
    vlSelf->_rs___05Fs4037 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__ridx_gray;
    vlSelf->_rs___05Fs4083 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_ridx_bin;
    vlSelf->_rs___05Fs4035 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__ridx_ridx_bin;
    vlSelf->_rs___05Fs4084 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__valid_reg;
    vlSelf->_rs___05Fs3921 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs4038 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs4067 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs4019 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->_cp___05Fs13117 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0)));
    vlSelf->_rs___05Fs4064 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_2));
    vlSelf->_mc___05Fs3674 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)));
    vlSelf->_rs___05Fs4080 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->_cp___05Fs13118 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                               & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__valid_reg));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs4036 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__valid_reg;
    vlSelf->_rs___05Fs4061 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx_widx_bin;
    vlSelf->_rs___05Fs4063 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx_gray;
    vlSelf->_rs___05Fs4062 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__ready_reg;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_mc___05Fs3673 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)));
    vlSelf->_rs___05Fs4050 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->_cp___05Fs12846 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__ready_reg) 
                               & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_mc___05Fs3672 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)));
    vlSelf->_rs___05Fs4032 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->_cp___05Fs12584 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                               & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__valid_reg));
    vlSelf->_cp___05Fs13119 = vlSelf->_cp___05Fs13117;
    vlSelf->_cp___05Fs13122 = vlSelf->_cp___05Fs13117;
    vlSelf->_cp___05Fs13124 = vlSelf->_cp___05Fs13117;
    vlSelf->_cp___05Fs13131 = vlSelf->_cp___05Fs13117;
    vlSelf->_cp___05Fs13134 = vlSelf->_cp___05Fs13117;
    vlSelf->_cp___05Fs13136 = vlSelf->_cp___05Fs13117;
    vlSelf->_cp___05Fs13285 = vlSelf->_cp___05Fs13117;
    vlSelf->_cp___05Fs13364 = vlSelf->_cp___05Fs13117;
    vlSelf->_cp___05Fs13384 = vlSelf->_cp___05Fs13117;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_ridx_bin) 
              + (IData)(vlSelf->_cp___05Fs13118)));
    vlSelf->_cp___05Fs12697 = vlSelf->_cp___05Fs12584;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_9 
        = ((IData)(vlSelf->_cp___05Fs12584) & (IData)(vlSelf->_cp___05Fs12846));
    vlSelf->_cp___05Fs12774 = ((IData)(vlSelf->_cp___05Fs12846) 
                               & (IData)(vlSelf->_cp___05Fs12584));
    vlSelf->_rs___05Fs3922 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->resetctrl_hartIsInReset_0));
    vlSelf->_rs___05Fs4039 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->_rs___05Fs3843));
    vlSelf->_rs___05Fs4068 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->_rs___05Fs3870));
    vlSelf->_rs___05Fs4020 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->_rs___05Fs3824));
    vlSelf->_rs___05Fs4065 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->debug_dmactive));
    vlSelf->_cp___05Fs13389 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                               & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx) 
                                  != (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->_rs___05Fs4081 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->_rs___05Fs4077));
    vlSelf->_rs___05Fs4051 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->_rs___05Fs4047));
    vlSelf->_rs___05Fs4033 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->debug_reset))) 
           && (IData)(vlSelf->_rs___05Fs4029));
    vlSelf->_cp___05Fs12787 = vlSelf->_cp___05Fs12774;
    vlSelf->_cp___05Fs12802 = vlSelf->_cp___05Fs12774;
    vlSelf->_cp___05Fs12803 = vlSelf->_cp___05Fs12774;
    vlSelf->_cp___05Fs12827 = vlSelf->_cp___05Fs12774;
    vlSelf->_cp___05Fs12829 = vlSelf->_cp___05Fs12774;
    vlSelf->_cp___05Fs12849 = vlSelf->_cp___05Fs12774;
    vlSelf->_cp___05Fs13388 = vlSelf->_cp___05Fs12774;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__ridx 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__ridx_ridx_bin) 
              + (IData)(vlSelf->_cp___05Fs12774)));
    vlSelf->_cp___05Fs13387 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                               & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__ridx) 
                                  != (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->_rs___05Fs3923 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4040 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4069 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4021 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4066 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4082 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4052 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4034 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
}

VL_INLINE_OPT void VExampleRocketSystem___024root___nba_sequent__TOP__21(VExampleRocketSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root___nba_sequent__TOP__21\n"); );
    // Body
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__intsource__DOT__reg_0__DOT__reg_0 = 0U;
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__intsource_1__DOT__reg_0__DOT__reg_0 
        = ((~ (IData)(vlSelf->_cp___05Fs10034)) & (IData)(vlSelf->_rs___05Fs3498));
    vlSelf->ExampleRocketSystem__DOT__ibus_intsource__DOT__reg_0__DOT__reg_0 
        = ((IData)(vlSelf->_cp___05Fs10034) ? 0U : (IData)(vlSelf->interrupts));
    vlSelf->_rs___05Fs3556 = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__intsource__DOT__reg_0__DOT__reg_0;
    vlSelf->_rs___05Fs3558 = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__intsource__DOT__reg_0__DOT__reg_0;
    vlSelf->_rs___05Fs3557 = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__intsource_1__DOT__reg_0__DOT__reg_0;
    vlSelf->_rs___05Fs6 = vlSelf->ExampleRocketSystem__DOT__ibus_intsource__DOT__reg_0__DOT__reg_0;
}

VL_INLINE_OPT void VExampleRocketSystem___024root___nba_sequent__TOP__22(VExampleRocketSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root___nba_sequent__TOP__22\n"); );
    // Body
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs3856 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs3835 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs3808 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs3851 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0)));
    vlSelf->_rs___05Fs3830 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0)));
    vlSelf->_rs___05Fs3803 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0)));
    vlSelf->_rs___05Fs3857 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->_rs___05Fs4074));
    vlSelf->_rs___05Fs3854 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->_rs___05Fs3850));
    vlSelf->_rs___05Fs3836 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->_rs___05Fs4044));
    vlSelf->_rs___05Fs3833 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->_rs___05Fs3829));
    vlSelf->_rs___05Fs3809 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->_rs___05Fs4026));
    vlSelf->_rs___05Fs3806 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->_rs___05Fs3802));
    vlSelf->_rs___05Fs3850 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->_rs___05Fs3829 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->_rs___05Fs3802 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->_rs___05Fs3852 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs3831 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs3804 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs3858 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs3855 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs3837 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs3834 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs3810 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs3807 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
}

VL_INLINE_OPT void VExampleRocketSystem___024root___nba_sequent__TOP__23(VExampleRocketSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root___nba_sequent__TOP__23\n"); );
    // Body
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs4077 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs4074 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs4047 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs4044 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs4029 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs4026 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs4072 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0)));
    vlSelf->_rs___05Fs4042 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0)));
    vlSelf->_rs___05Fs4024 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0)));
    vlSelf->_rs___05Fs4078 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->_rs___05Fs3853));
    vlSelf->_rs___05Fs4075 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->_rs___05Fs4071));
    vlSelf->_rs___05Fs4048 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->_rs___05Fs3832));
    vlSelf->_rs___05Fs4045 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->_rs___05Fs4041));
    vlSelf->_rs___05Fs4030 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->_rs___05Fs3805));
    vlSelf->_rs___05Fs4027 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->_rs___05Fs4023));
    vlSelf->_rs___05Fs4071 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->_rs___05Fs4041 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->_rs___05Fs4023 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->_rs___05Fs4073 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4043 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4025 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4079 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4076 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4049 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4046 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4031 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4028 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
}

VL_INLINE_OPT void VExampleRocketSystem___024root___nba_sequent__TOP__24(VExampleRocketSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root___nba_sequent__TOP__24\n"); );
    // Body
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__intsource__DOT__reg_0__DOT__reg_0 
        = ((IData)(vlSelf->io_aggregator_1_reset) ? 0U
            : (((vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__time_0 
                 >= vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__pad) 
                << 1U) | (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__ipi_0)));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__intsource_1__DOT__reg_0__DOT__reg_0 
        = ((~ (IData)(vlSelf->io_aggregator_1_reset)) 
           & ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__intnodeOut_0_REG_1) 
              > (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__threshold_1)));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__intsource__DOT__reg_0__DOT__reg_0 
        = ((~ (IData)(vlSelf->io_aggregator_1_reset)) 
           & ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__intnodeOut_0_REG) 
              > (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__threshold_0)));
    vlSelf->_rs___05Fs3587 = vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__intsource__DOT__reg_0__DOT__reg_0;
    vlSelf->_rs___05Fs3632 = vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__intsource_1__DOT__reg_0__DOT__reg_0;
    vlSelf->_rs___05Fs3631 = vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__intsource__DOT__reg_0__DOT__reg_0;
}

VL_INLINE_OPT void VExampleRocketSystem___024root___nba_comb__TOP__0(VExampleRocketSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->_cp___05Fs11167 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__pending_1)) 
                               & (IData)(vlSelf->ExampleRocketSystem__DOT__ibus_intsink__DOT__chain__DOT__output_chain_1__DOT__sync_0));
    vlSelf->_cp___05Fs11165 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__pending_0)) 
                               & (IData)(vlSelf->ExampleRocketSystem__DOT__ibus_intsink__DOT__chain__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VExampleRocketSystem___024root___nba_sequent__TOP__25(VExampleRocketSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root___nba_sequent__TOP__25\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_5;
    // Body
    vlSelf->_cp___05Fs1351 = (1U & (~ ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT__maybe_full)) 
                                       & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT__ptr_match))));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT___fixer_auto_anon_out_1_e_bits_sink 
        = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_e_q__DOT__ram_sink_ext__DOT__Memory
        [vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_e_q__DOT__wrap_1];
    vlSelf->_cp___05Fs10602 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_e_q__DOT__empty)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
        = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT__ram_ext__DOT__Memory
        [vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT__wrap_1][0U];
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[1U] 
        = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT__ram_ext__DOT__Memory
        [vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT__wrap_1][1U];
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[2U] 
        = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT__ram_ext__DOT__Memory
        [vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT__wrap_1][2U];
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[3U] 
        = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT__ram_ext__DOT__Memory
        [vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT__wrap_1][3U];
    __Vtemp_5[0U] = (IData)((((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT___ram_ext_R0_data[2U])) 
                              << 0x3cU) | (((QData)((IData)(
                                                            vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT___ram_ext_R0_data[1U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT___ram_ext_R0_data[0U])) 
                                              >> 4U))));
    __Vtemp_5[1U] = (IData)(((((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT___ram_ext_R0_data[2U])) 
                               << 0x3cU) | (((QData)((IData)(
                                                             vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT___ram_ext_R0_data[1U])) 
                                             << 0x1cU) 
                                            | ((QData)((IData)(
                                                               vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT___ram_ext_R0_data[0U])) 
                                               >> 4U))) 
                             >> 0x20U));
    __Vtemp_5[2U] = (IData)((((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT___ram_ext_R0_data[2U])) 
                              << 0x3cU) | (((QData)((IData)(
                                                            vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT___ram_ext_R0_data[1U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT___ram_ext_R0_data[0U])) 
                                              >> 4U))));
    __Vtemp_5[3U] = (IData)(((((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT___ram_ext_R0_data[2U])) 
                               << 0x3cU) | (((QData)((IData)(
                                                             vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT___ram_ext_R0_data[1U])) 
                                             << 0x1cU) 
                                            | ((QData)((IData)(
                                                               vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT___ram_ext_R0_data[0U])) 
                                               >> 4U))) 
                             >> 0x20U));
    __Vtemp_5[4U] = (IData)((((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT___ram_ext_R0_data[2U])) 
                              << 0x3cU) | (((QData)((IData)(
                                                            vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT___ram_ext_R0_data[1U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT___ram_ext_R0_data[0U])) 
                                              >> 4U))));
    __Vtemp_5[5U] = (IData)(((((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT___ram_ext_R0_data[2U])) 
                               << 0x3cU) | (((QData)((IData)(
                                                             vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT___ram_ext_R0_data[1U])) 
                                             << 0x1cU) 
                                            | ((QData)((IData)(
                                                               vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT___ram_ext_R0_data[0U])) 
                                               >> 4U))) 
                             >> 0x20U));
    __Vtemp_5[6U] = (IData)((((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT___ram_ext_R0_data[2U])) 
                              << 0x3cU) | (((QData)((IData)(
                                                            vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT___ram_ext_R0_data[1U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT___ram_ext_R0_data[0U])) 
                                              >> 4U))));
    __Vtemp_5[7U] = (IData)(((((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT___ram_ext_R0_data[2U])) 
                               << 0x3cU) | (((QData)((IData)(
                                                             vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT___ram_ext_R0_data[1U])) 
                                             << 0x1cU) 
                                            | ((QData)((IData)(
                                                               vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT___ram_ext_R0_data[0U])) 
                                               >> 4U))) 
                             >> 0x20U));
    __Vtemp_5[8U] = (IData)((((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT___ram_ext_R0_data[2U])) 
                              << 0x3cU) | (((QData)((IData)(
                                                            vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT___ram_ext_R0_data[1U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT___ram_ext_R0_data[0U])) 
                                              >> 4U))));
    __Vtemp_5[9U] = (IData)(((((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT___ram_ext_R0_data[2U])) 
                               << 0x3cU) | (((QData)((IData)(
                                                             vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT___ram_ext_R0_data[1U])) 
                                             << 0x1cU) 
                                            | ((QData)((IData)(
                                                               vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT___ram_ext_R0_data[0U])) 
                                               >> 4U))) 
                             >> 0x20U));
    __Vtemp_5[0xaU] = 0U;
    __Vtemp_5[0xbU] = 0U;
    __Vtemp_5[0xcU] = 0U;
    __Vtemp_5[0xdU] = 0U;
    __Vtemp_5[0xeU] = 0U;
    __Vtemp_5[0xfU] = 0U;
    __Vtemp_5[0x10U] = 0U;
    __Vtemp_5[0x11U] = 0U;
    __Vtemp_5[0x12U] = 0U;
    __Vtemp_5[0x13U] = 0U;
    __Vtemp_5[0x14U] = 0U;
    __Vtemp_5[0x15U] = 0U;
    __Vtemp_5[0x16U] = 0U;
    __Vtemp_5[0x17U] = 0U;
    __Vtemp_5[0x18U] = 0U;
    __Vtemp_5[0x19U] = 0U;
    __Vtemp_5[0x1aU] = 0U;
    __Vtemp_5[0x1bU] = 0U;
    __Vtemp_5[0x1cU] = 0U;
    __Vtemp_5[0x1dU] = 0U;
    __Vtemp_5[0x1eU] = 0U;
    __Vtemp_5[0x1fU] = 0U;
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4index_auto_in_r_bits_data 
        = (((QData)((IData)(__Vtemp_5[(((IData)(0x3fU) 
                                        + (0x3ffU & 
                                           VL_SHIFTL_III(10,10,32, (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id), 6U))) 
                                       >> 5U)])) << 
            ((0U == (0x1fU & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id), 6U)))
              ? 0x20U : ((IData)(0x40U) - (0x1fU & 
                                           VL_SHIFTL_III(10,10,32, (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id), 6U))))) 
           | (((0U == (0x1fU & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id), 6U)))
                ? 0ULL : ((QData)((IData)(__Vtemp_5[
                                          (((IData)(0x1fU) 
                                            + (0x3ffU 
                                               & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id), 6U))) 
                                           >> 5U)])) 
                          << ((IData)(0x20U) - (0x1fU 
                                                & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id), 6U))))) 
              | ((QData)((IData)(__Vtemp_5[(0x1fU & 
                                            (VL_SHIFTL_III(10,10,32, (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id), 6U) 
                                             >> 5U))])) 
                 >> (0x1fU & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id), 6U)))));
    vlSelf->_rs___05Fs3498 = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__wfiNodeOut_0_REG;
    vlSelf->_cp___05Fs556 = vlSelf->_cp___05Fs1351;
    vlSelf->_cp___05Fs7275 = vlSelf->_cp___05Fs1351;
    vlSelf->_cp___05Fs1484 = ((IData)(vlSelf->_cp___05Fs1351) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__c_first_counter)));
    vlSelf->_cp___05Fs689 = ((IData)(vlSelf->_cp___05Fs1351) 
                             & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__c_first_counter)));
    vlSelf->_cp___05Fs1439 = vlSelf->_cp___05Fs10602;
    vlSelf->_cp___05Fs1553 = vlSelf->_cp___05Fs10602;
    vlSelf->_cp___05Fs644 = vlSelf->_cp___05Fs10602;
    vlSelf->_cp___05Fs7363 = vlSelf->_cp___05Fs10602;
    vlSelf->_cp___05Fs7477 = vlSelf->_cp___05Fs10602;
    vlSelf->_cp___05Fs758 = vlSelf->_cp___05Fs10602;
    vlSelf->_cp___05Fs7490 = ((IData)(vlSelf->_cp___05Fs10602) 
                              & (0U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___fixer_auto_anon_out_1_e_bits_sink)));
    vlSelf->_cp___05Fs7507 = ((IData)(vlSelf->_cp___05Fs10602) 
                              & (1U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___fixer_auto_anon_out_1_e_bits_sink)));
    vlSelf->_cp___05Fs7524 = ((IData)(vlSelf->_cp___05Fs10602) 
                              & (2U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___fixer_auto_anon_out_1_e_bits_sink)));
    vlSelf->_cp___05Fs7541 = ((IData)(vlSelf->_cp___05Fs10602) 
                              & (3U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___fixer_auto_anon_out_1_e_bits_sink)));
    vlSelf->_cp___05Fs10603 = ((IData)(vlSelf->_cp___05Fs10586) 
                               != (IData)(vlSelf->_cp___05Fs10602));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_106 
        = ((7U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U]) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__opcode_3));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_107 
        = ((7U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                  >> 3U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__param_3));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_108 
        = ((0xfU & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                    >> 6U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__size_3));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_109 
        = ((3U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                  >> 0xaU)) == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__source_3));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_110 
        = (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__address_2 
           == ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[1U] 
                << 0x14U) | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xcU)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_142 
        = (7U & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_1) 
                 >> (3U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                           >> 0xaU))));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_106 
        = ((7U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U]) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__opcode_3));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_107 
        = ((7U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                  >> 3U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__param_3));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_108 
        = ((0xfU & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                    >> 6U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__size_3));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_109 
        = ((3U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                  >> 0xaU)) == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__source_3));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_110 
        = (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__address_2 
           == ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[1U] 
                << 0x14U) | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xcU)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_142 
        = (7U & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_1) 
                 >> (3U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                           >> 0xaU))));
    vlSelf->_cp___05Fs1408 = (0U == (7U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs1419 = (1U == (7U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs1428 = (2U == (7U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_54 
        = (IData)(((0x180U == (0xdc0U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U])) 
                   & (0x800U == (0xf00U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[1U]))));
    vlSelf->_cp___05Fs7286 = (2U >= (7U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                           >> 6U)));
    vlSelf->_cp___05Fs7282 = (8U != (0xfU & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[1U] 
                                             >> 8U)));
    vlSelf->_cp___05Fs1362 = (2U >= (0xfU & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U)));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_46 
        = (0x3fU & ((~ ((IData)(0x3fU) << (7U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 6U)))) 
                    & ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                        << 0x14U) | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                     >> 0xcU))));
    vlSelf->_mc___05Fs158 = (1U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U]);
    vlSelf->_cp___05Fs1416 = (0U != (7U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                           >> 3U)));
    vlSelf->_cp___05Fs1366 = (3U == (3U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                           >> 4U)));
    vlSelf->_cp___05Fs1368 = (1U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[3U] 
                                    >> 0xcU));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_62 
        = (0xfffU & ((~ ((IData)(0xfffU) << (0xfU & 
                                             (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U)))) 
                     & ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                         << 0x14U) | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                      >> 0xcU))));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__address_ok_1 
        = ((0U == (0xfffffU & ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[1U] 
                                << 8U) | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0x18U)))) 
           | ((0U == ((0xffffcU & ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[1U] 
                                    << 8U) | (0xfcU 
                                              & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0x18U)))) 
                      | (3U & (~ ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                   << 8U) | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0x18U)))))) 
              | ((0U == ((0xfffeU & ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[1U] 
                                      << 4U) | (0xeU 
                                                & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0x1cU)))) 
                         | (1U & (~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                     >> 0x1cU))))) 
                 | ((0U == ((0xfc00U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[1U] 
                                        << 4U)) | (0x3ffU 
                                                   & (0x200U 
                                                      ^ 
                                                      ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[1U] 
                                                        << 4U) 
                                                       | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 0x1cU)))))) 
                    | ((0U == ((0x3cU & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[1U] 
                                         >> 6U)) | 
                               (3U & (~ ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[1U] 
                                          << 0x1aU) 
                                         | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[1U] 
                                            >> 6U)))))) 
                       | ((0U == ((4U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[1U] 
                                         >> 9U)) | 
                                  (3U & (~ ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[1U] 
                                             << 0x17U) 
                                            | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[1U] 
                                               >> 9U)))))) 
                          | (8U == (0xfU & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[1U] 
                                            >> 8U)))))))));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__source_ok_2 
        = ((0U == (3U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                         >> 0xaU))) | ((1U == (3U & 
                                               (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xaU))) 
                                       | (2U == (3U 
                                                 & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0xaU)))));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_138 
        = (IData)((6U == (6U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_eq_5 
        = (IData)((0x6000U == (0x6000U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_eq_4 
        = (IData)((0x4000U == (0x6000U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_eq_3 
        = (IData)((0x2000U == (0x6000U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_eq_2 
        = (IData)((0U == (0x6000U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_acc 
        = ((2U < (7U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                        >> 6U))) | (IData)((0x80U == 
                                            (0x40c0U 
                                             & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U]))));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_acc_1 
        = ((2U < (7U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                        >> 6U))) | (IData)((0x4080U 
                                            == (0x40c0U 
                                                & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U]))));
    vlSelf->_cp___05Fs1356 = (4U == (7U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs1369 = (5U == (7U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_mc___05Fs831 = (7U == (7U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_mc___05Fs828 = (6U == (7U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs691 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_106)));
    vlSelf->_cp___05Fs693 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_107)));
    vlSelf->_cp___05Fs695 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_108)));
    vlSelf->_cp___05Fs697 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_109)));
    vlSelf->_cp___05Fs699 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_110)));
    vlSelf->_cp___05Fs734 = (1U & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_142));
    vlSelf->_cp___05Fs1486 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_106)));
    vlSelf->_cp___05Fs1488 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_107)));
    vlSelf->_cp___05Fs1490 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_108)));
    vlSelf->_cp___05Fs1492 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_109)));
    vlSelf->_cp___05Fs1494 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_110)));
    vlSelf->_cp___05Fs1529 = (1U & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_142));
    vlSelf->_cp___05Fs613 = vlSelf->_cp___05Fs1408;
    vlSelf->_cp___05Fs7332 = vlSelf->_cp___05Fs1408;
    vlSelf->_cp___05Fs624 = vlSelf->_cp___05Fs1419;
    vlSelf->_cp___05Fs7343 = vlSelf->_cp___05Fs1419;
    vlSelf->_cp___05Fs633 = vlSelf->_cp___05Fs1428;
    vlSelf->_cp___05Fs7352 = vlSelf->_cp___05Fs1428;
    vlSelf->_cp___05Fs7308 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_54)));
    vlSelf->_cp___05Fs7299 = vlSelf->_cp___05Fs7286;
    vlSelf->_cp___05Fs7312 = vlSelf->_cp___05Fs7286;
    vlSelf->_cp___05Fs7327 = vlSelf->_cp___05Fs7286;
    vlSelf->_cp___05Fs7295 = vlSelf->_cp___05Fs7282;
    vlSelf->_cp___05Fs7334 = vlSelf->_cp___05Fs7282;
    vlSelf->_cp___05Fs7345 = vlSelf->_cp___05Fs7282;
    vlSelf->_cp___05Fs7354 = vlSelf->_cp___05Fs7282;
    vlSelf->_cp___05Fs1375 = vlSelf->_cp___05Fs1362;
    vlSelf->_cp___05Fs1388 = vlSelf->_cp___05Fs1362;
    vlSelf->_cp___05Fs1403 = vlSelf->_cp___05Fs1362;
    vlSelf->_cp___05Fs567 = vlSelf->_cp___05Fs1362;
    vlSelf->_cp___05Fs580 = vlSelf->_cp___05Fs1362;
    vlSelf->_cp___05Fs593 = vlSelf->_cp___05Fs1362;
    vlSelf->_cp___05Fs608 = vlSelf->_cp___05Fs1362;
    vlSelf->_cp___05Fs7288 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_46));
    vlSelf->_mc___05Fs164 = vlSelf->_mc___05Fs158;
    vlSelf->_mc___05Fs34 = vlSelf->_mc___05Fs158;
    vlSelf->_mc___05Fs40 = vlSelf->_mc___05Fs158;
    vlSelf->_mc___05Fs48 = vlSelf->_mc___05Fs158;
    vlSelf->_mc___05Fs787 = vlSelf->_mc___05Fs158;
    vlSelf->_mc___05Fs793 = vlSelf->_mc___05Fs158;
    vlSelf->_mc___05Fs829 = vlSelf->_mc___05Fs158;
    vlSelf->_mc___05Fs887 = vlSelf->_mc___05Fs158;
    vlSelf->_cp___05Fs1427 = vlSelf->_cp___05Fs1416;
    vlSelf->_cp___05Fs1436 = vlSelf->_cp___05Fs1416;
    vlSelf->_cp___05Fs621 = vlSelf->_cp___05Fs1416;
    vlSelf->_cp___05Fs632 = vlSelf->_cp___05Fs1416;
    vlSelf->_cp___05Fs641 = vlSelf->_cp___05Fs1416;
    vlSelf->_cp___05Fs7340 = vlSelf->_cp___05Fs1416;
    vlSelf->_cp___05Fs7351 = vlSelf->_cp___05Fs1416;
    vlSelf->_cp___05Fs7360 = vlSelf->_cp___05Fs1416;
    vlSelf->_cp___05Fs1379 = vlSelf->_cp___05Fs1366;
    vlSelf->_cp___05Fs1392 = vlSelf->_cp___05Fs1366;
    vlSelf->_cp___05Fs1407 = vlSelf->_cp___05Fs1366;
    vlSelf->_cp___05Fs571 = vlSelf->_cp___05Fs1366;
    vlSelf->_cp___05Fs584 = vlSelf->_cp___05Fs1366;
    vlSelf->_cp___05Fs597 = vlSelf->_cp___05Fs1366;
    vlSelf->_cp___05Fs612 = vlSelf->_cp___05Fs1366;
    vlSelf->_cp___05Fs7290 = vlSelf->_cp___05Fs1366;
    vlSelf->_cp___05Fs7303 = vlSelf->_cp___05Fs1366;
    vlSelf->_cp___05Fs7316 = vlSelf->_cp___05Fs1366;
    vlSelf->_cp___05Fs7331 = vlSelf->_cp___05Fs1366;
    vlSelf->_cp___05Fs1394 = vlSelf->_cp___05Fs1368;
    vlSelf->_cp___05Fs1418 = vlSelf->_cp___05Fs1368;
    vlSelf->_cp___05Fs1438 = vlSelf->_cp___05Fs1368;
    vlSelf->_cp___05Fs573 = vlSelf->_cp___05Fs1368;
    vlSelf->_cp___05Fs599 = vlSelf->_cp___05Fs1368;
    vlSelf->_cp___05Fs623 = vlSelf->_cp___05Fs1368;
    vlSelf->_cp___05Fs643 = vlSelf->_cp___05Fs1368;
    vlSelf->_cp___05Fs7292 = vlSelf->_cp___05Fs1368;
    vlSelf->_cp___05Fs7318 = vlSelf->_cp___05Fs1368;
    vlSelf->_cp___05Fs7342 = vlSelf->_cp___05Fs1368;
    vlSelf->_cp___05Fs7362 = vlSelf->_cp___05Fs1368;
    vlSelf->_cp___05Fs1364 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_62));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_77 
        = (IData)((((0x180U == (0xfc0U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U])) 
                    & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__address_ok_1)) 
                   & (0xdU > (0xfU & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                      >> 6U)))));
    vlSelf->_cp___05Fs1358 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__address_ok_1)));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_53 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__source_ok_2) 
           & (IData)(((0x800U == (0xf00U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[1U])) 
                      & (7U != (7U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                      >> 6U))))));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_76 
        = ((0xdU > (0xfU & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U))) & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__source_ok_2) 
                                        & (IData)((
                                                   (0x800U 
                                                    == 
                                                    (0xf00U 
                                                     & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[1U])) 
                                                   & (7U 
                                                      > 
                                                      (0xfU 
                                                       & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U)))))));
    vlSelf->_cp___05Fs1360 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__source_ok_2)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT____VdfgTmp_h565f0b49__0 
        = ((IData)(vlSelf->_mc___05Fs41) & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_138));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT____VdfgTmp_h565f0b49__0 
        = ((IData)(vlSelf->_mc___05Fs165) & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_138));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_acc_3 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_acc) 
           | (IData)(((0x40U == (0xc0U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_eq_3))));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_acc_2 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_acc) 
           | (IData)(((0x40U == (0xc0U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_eq_2))));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_acc_5 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_acc_1) 
           | (IData)(((0x40U == (0xc0U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_eq_5))));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_acc_4 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_acc_1) 
           | (IData)(((0x40U == (0xc0U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_eq_4))));
    vlSelf->_cp___05Fs561 = vlSelf->_cp___05Fs1356;
    vlSelf->_cp___05Fs7280 = vlSelf->_cp___05Fs1356;
    vlSelf->_cp___05Fs574 = vlSelf->_cp___05Fs1369;
    vlSelf->_cp___05Fs7293 = vlSelf->_cp___05Fs1369;
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_6 
        = ((IData)(vlSelf->_cp___05Fs1356) | (IData)(vlSelf->_cp___05Fs1369));
    vlSelf->_cp___05Fs1395 = vlSelf->_mc___05Fs831;
    vlSelf->_cp___05Fs600 = vlSelf->_mc___05Fs831;
    vlSelf->_cp___05Fs7319 = vlSelf->_mc___05Fs831;
    vlSelf->_mc___05Fs847 = ((IData)(vlSelf->_cp___05Fs1351) 
                             & ((IData)(vlSelf->_cp___05Fs1369) 
                                | (IData)(vlSelf->_mc___05Fs831)));
    vlSelf->_cp___05Fs1380 = vlSelf->_mc___05Fs828;
    vlSelf->_cp___05Fs585 = vlSelf->_mc___05Fs828;
    vlSelf->_cp___05Fs7304 = vlSelf->_mc___05Fs828;
    vlSelf->_mc___05Fs834 = ((IData)(vlSelf->_cp___05Fs1351) 
                             & (IData)(vlSelf->_mc___05Fs828));
    vlSelf->_cp___05Fs7323 = vlSelf->_cp___05Fs7308;
    vlSelf->_cp___05Fs7301 = vlSelf->_cp___05Fs7288;
    vlSelf->_cp___05Fs7314 = vlSelf->_cp___05Fs7288;
    vlSelf->_cp___05Fs7329 = vlSelf->_cp___05Fs7288;
    vlSelf->_cp___05Fs7338 = vlSelf->_cp___05Fs7288;
    vlSelf->_cp___05Fs7349 = vlSelf->_cp___05Fs7288;
    vlSelf->_cp___05Fs7358 = vlSelf->_cp___05Fs7288;
    vlSelf->_cp___05Fs1377 = vlSelf->_cp___05Fs1364;
    vlSelf->_cp___05Fs1390 = vlSelf->_cp___05Fs1364;
    vlSelf->_cp___05Fs1405 = vlSelf->_cp___05Fs1364;
    vlSelf->_cp___05Fs1414 = vlSelf->_cp___05Fs1364;
    vlSelf->_cp___05Fs1425 = vlSelf->_cp___05Fs1364;
    vlSelf->_cp___05Fs1434 = vlSelf->_cp___05Fs1364;
    vlSelf->_cp___05Fs569 = vlSelf->_cp___05Fs1364;
    vlSelf->_cp___05Fs582 = vlSelf->_cp___05Fs1364;
    vlSelf->_cp___05Fs595 = vlSelf->_cp___05Fs1364;
    vlSelf->_cp___05Fs610 = vlSelf->_cp___05Fs1364;
    vlSelf->_cp___05Fs619 = vlSelf->_cp___05Fs1364;
    vlSelf->_cp___05Fs630 = vlSelf->_cp___05Fs1364;
    vlSelf->_cp___05Fs639 = vlSelf->_cp___05Fs1364;
    vlSelf->_cp___05Fs1384 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_77)));
    vlSelf->_cp___05Fs1371 = vlSelf->_cp___05Fs1358;
    vlSelf->_cp___05Fs1410 = vlSelf->_cp___05Fs1358;
    vlSelf->_cp___05Fs1421 = vlSelf->_cp___05Fs1358;
    vlSelf->_cp___05Fs1430 = vlSelf->_cp___05Fs1358;
    vlSelf->_cp___05Fs563 = vlSelf->_cp___05Fs1358;
    vlSelf->_cp___05Fs576 = vlSelf->_cp___05Fs1358;
    vlSelf->_cp___05Fs615 = vlSelf->_cp___05Fs1358;
    vlSelf->_cp___05Fs626 = vlSelf->_cp___05Fs1358;
    vlSelf->_cp___05Fs635 = vlSelf->_cp___05Fs1358;
    vlSelf->_cp___05Fs7306 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_53)));
    vlSelf->_cp___05Fs1382 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_76)));
    vlSelf->_cp___05Fs1373 = vlSelf->_cp___05Fs1360;
    vlSelf->_cp___05Fs1386 = vlSelf->_cp___05Fs1360;
    vlSelf->_cp___05Fs1401 = vlSelf->_cp___05Fs1360;
    vlSelf->_cp___05Fs1412 = vlSelf->_cp___05Fs1360;
    vlSelf->_cp___05Fs1423 = vlSelf->_cp___05Fs1360;
    vlSelf->_cp___05Fs1432 = vlSelf->_cp___05Fs1360;
    vlSelf->_cp___05Fs565 = vlSelf->_cp___05Fs1360;
    vlSelf->_cp___05Fs578 = vlSelf->_cp___05Fs1360;
    vlSelf->_cp___05Fs591 = vlSelf->_cp___05Fs1360;
    vlSelf->_cp___05Fs606 = vlSelf->_cp___05Fs1360;
    vlSelf->_cp___05Fs617 = vlSelf->_cp___05Fs1360;
    vlSelf->_cp___05Fs628 = vlSelf->_cp___05Fs1360;
    vlSelf->_cp___05Fs637 = vlSelf->_cp___05Fs1360;
    vlSelf->_cp___05Fs7284 = vlSelf->_cp___05Fs1360;
    vlSelf->_cp___05Fs7297 = vlSelf->_cp___05Fs1360;
    vlSelf->_cp___05Fs7310 = vlSelf->_cp___05Fs1360;
    vlSelf->_cp___05Fs7325 = vlSelf->_cp___05Fs1360;
    vlSelf->_cp___05Fs7336 = vlSelf->_cp___05Fs1360;
    vlSelf->_cp___05Fs7347 = vlSelf->_cp___05Fs1360;
    vlSelf->_cp___05Fs7356 = vlSelf->_cp___05Fs1360;
    vlSelf->_cp___05Fs731 = ((IData)(vlSelf->_cp___05Fs1351) 
                             & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT____VdfgTmp_h565f0b49__0));
    vlSelf->_cp___05Fs1526 = ((IData)(vlSelf->_cp___05Fs1351) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT____VdfgTmp_h565f0b49__0));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT____VdfgTmp_h96b65360__0 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_6) 
           & ((0U == (7U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                            >> 3U))) | (4U == (7U & 
                                               (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                                >> 3U)))));
    vlSelf->_cp___05Fs1399 = vlSelf->_cp___05Fs1384;
    vlSelf->_cp___05Fs589 = vlSelf->_cp___05Fs1384;
    vlSelf->_cp___05Fs604 = vlSelf->_cp___05Fs1384;
    vlSelf->_cp___05Fs7321 = vlSelf->_cp___05Fs7306;
    vlSelf->_cp___05Fs1397 = vlSelf->_cp___05Fs1382;
    vlSelf->_cp___05Fs587 = vlSelf->_cp___05Fs1382;
    vlSelf->_cp___05Fs602 = vlSelf->_cp___05Fs1382;
    if (vlSelf->_cp___05Fs731) {
        vlSelf->_cp___05Fs748 = (0U != (7U & ((IData)(1U) 
                                              << (3U 
                                                  & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xaU)))));
        vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__c_set_wo_ready 
            = (7U & ((IData)(1U) << (3U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xaU))));
    } else {
        vlSelf->_cp___05Fs748 = 0U;
        vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__c_set_wo_ready = 0U;
    }
    if (vlSelf->_cp___05Fs1526) {
        vlSelf->_cp___05Fs1543 = (0U != (7U & ((IData)(1U) 
                                               << (3U 
                                                   & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0xaU)))));
        vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__c_set_wo_ready 
            = (7U & ((IData)(1U) << (3U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xaU))));
    } else {
        vlSelf->_cp___05Fs1543 = 0U;
        vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__c_set_wo_ready = 0U;
    }
}

VL_INLINE_OPT void VExampleRocketSystem___024root___nba_sequent__TOP__26(VExampleRocketSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root___nba_sequent__TOP__26\n"); );
    // Init
    VlWide<16>/*511:0*/ ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_43;
    VL_ZERO_W(512, ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_43);
    VlWide<16>/*511:0*/ ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_43;
    VL_ZERO_W(512, ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_43);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_14;
    VlWide<16>/*511:0*/ __Vtemp_15;
    VlWide<16>/*511:0*/ __Vtemp_16;
    VlWide<16>/*511:0*/ __Vtemp_17;
    VlWide<16>/*511:0*/ __Vtemp_18;
    // Body
    vlSelf->_mc___05Fs682 = (((IData)(vlSelf->mem_axi4_0_r_valid) 
                              & (7U != (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__b_delay))) 
                             | (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_holds_d));
    vlSelf->_mc___05Fs685 = vlSelf->_mc___05Fs682;
    vlSelf->_mc___05Fs689 = vlSelf->_mc___05Fs682;
    vlSelf->_mc___05Fs693 = vlSelf->_mc___05Fs682;
    vlSelf->_mc___05Fs696 = vlSelf->_mc___05Fs682;
    vlSelf->_mc___05Fs699 = vlSelf->_mc___05Fs682;
    vlSelf->_mc___05Fs734 = vlSelf->_mc___05Fs682;
    vlSelf->_mc___05Fs738 = vlSelf->_mc___05Fs682;
    vlSelf->_mc___05Fs741 = vlSelf->_mc___05Fs682;
    vlSelf->_mc___05Fs750 = vlSelf->_mc___05Fs682;
    vlSelf->_mc___05Fs817 = vlSelf->_mc___05Fs682;
    vlSelf->_mc___05Fs891 = vlSelf->_mc___05Fs682;
    vlSelf->_mc___05Fs895 = vlSelf->_mc___05Fs682;
    vlSelf->_mc___05Fs898 = vlSelf->_mc___05Fs682;
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_37 
        = ((IData)(vlSelf->_mc___05Fs682) == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__opcode_1));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_37 
        = ((IData)(vlSelf->_mc___05Fs682) == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__opcode_1));
    vlSelf->_cp___05Fs5857 = vlSelf->_mc___05Fs682;
    vlSelf->_cp___05Fs5848 = (1U & (~ (IData)(vlSelf->_mc___05Fs682)));
    __Vtemp_1[0U] = (IData)((((QData)((IData)((0x7fU 
                                               & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_8__DOT___ram_ext_R0_data) 
                                                  >> 4U)))) 
                              << 0x38U) | (((QData)((IData)(
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_7__DOT___ram_ext_R0_data) 
                                                                >> 4U)))) 
                                            << 0x31U) 
                                           | (((QData)((IData)(
                                                               (0x7fU 
                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_6__DOT___ram_ext_R0_data) 
                                                                   >> 4U)))) 
                                               << 0x2aU) 
                                              | (((QData)((IData)(
                                                                  (0x7fU 
                                                                   & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_5__DOT___ram_ext_R0_data) 
                                                                      >> 4U)))) 
                                                  << 0x23U) 
                                                 | (((QData)((IData)(
                                                                     (0x7fU 
                                                                      & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_4__DOT___ram_ext_R0_data) 
                                                                         >> 4U)))) 
                                                     << 0x1cU) 
                                                    | (QData)((IData)(
                                                                      ((0xfe00000U 
                                                                        & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_3__DOT___ram_ext_R0_data) 
                                                                           << 0x11U)) 
                                                                       | ((0x1fc000U 
                                                                           & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_2__DOT___ram_ext_R0_data) 
                                                                              << 0xaU)) 
                                                                          | ((0x3f80U 
                                                                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_1__DOT___ram_ext_R0_data) 
                                                                                << 3U)) 
                                                                             | (0x7fU 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap__DOT___ram_ext_R0_data) 
                                                                                >> 4U)))))))))))));
    __Vtemp_1[1U] = ((0x80000000U & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_9__DOT___ram_ext_R0_data) 
                                     << 0x1bU)) | (IData)(
                                                          ((((QData)((IData)(
                                                                             (0x7fU 
                                                                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_8__DOT___ram_ext_R0_data) 
                                                                                >> 4U)))) 
                                                             << 0x38U) 
                                                            | (((QData)((IData)(
                                                                                (0x7fU 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_7__DOT___ram_ext_R0_data) 
                                                                                >> 4U)))) 
                                                                << 0x31U) 
                                                               | (((QData)((IData)(
                                                                                (0x7fU 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_6__DOT___ram_ext_R0_data) 
                                                                                >> 4U)))) 
                                                                   << 0x2aU) 
                                                                  | (((QData)((IData)(
                                                                                (0x7fU 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_5__DOT___ram_ext_R0_data) 
                                                                                >> 4U)))) 
                                                                      << 0x23U) 
                                                                     | (((QData)((IData)(
                                                                                (0x7fU 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_4__DOT___ram_ext_R0_data) 
                                                                                >> 4U)))) 
                                                                         << 0x1cU) 
                                                                        | (QData)((IData)(
                                                                                ((0xfe00000U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_3__DOT___ram_ext_R0_data) 
                                                                                << 0x11U)) 
                                                                                | ((0x1fc000U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_2__DOT___ram_ext_R0_data) 
                                                                                << 0xaU)) 
                                                                                | ((0x3f80U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_1__DOT___ram_ext_R0_data) 
                                                                                << 3U)) 
                                                                                | (0x7fU 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap__DOT___ram_ext_R0_data) 
                                                                                >> 4U)))))))))))) 
                                                           >> 0x20U)));
    __Vtemp_7[0U] = __Vtemp_1[0U];
    __Vtemp_7[1U] = __Vtemp_1[1U];
    __Vtemp_7[2U] = ((0xf8000000U & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_13__DOT___ram_ext_R0_data) 
                                     << 0x17U)) | (
                                                   (0x7f00000U 
                                                    & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_12__DOT___ram_ext_R0_data) 
                                                       << 0x10U)) 
                                                   | ((0xfe000U 
                                                       & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_11__DOT___ram_ext_R0_data) 
                                                          << 9U)) 
                                                      | ((0x1fc0U 
                                                          & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_10__DOT___ram_ext_R0_data) 
                                                             << 2U)) 
                                                         | (0x3fU 
                                                            & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_9__DOT___ram_ext_R0_data) 
                                                               >> 5U))))));
    __Vtemp_7[3U] = ((0xfe00U & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_15__DOT___ram_ext_R0_data) 
                                 << 5U)) | ((0x1fcU 
                                             & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_14__DOT___ram_ext_R0_data) 
                                                >> 2U)) 
                                            | (3U & 
                                               ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_13__DOT___ram_ext_R0_data) 
                                                >> 9U))));
    __Vtemp_8[0U] = (IData)((((QData)((IData)((0x7fU 
                                               & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_24__DOT___ram_ext_R0_data) 
                                                  >> 4U)))) 
                              << 0x38U) | (((QData)((IData)(
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_23__DOT___ram_ext_R0_data) 
                                                                >> 4U)))) 
                                            << 0x31U) 
                                           | (((QData)((IData)(
                                                               (0x7fU 
                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_22__DOT___ram_ext_R0_data) 
                                                                   >> 4U)))) 
                                               << 0x2aU) 
                                              | (((QData)((IData)(
                                                                  (0x7fU 
                                                                   & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_21__DOT___ram_ext_R0_data) 
                                                                      >> 4U)))) 
                                                  << 0x23U) 
                                                 | (((QData)((IData)(
                                                                     (0x7fU 
                                                                      & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_20__DOT___ram_ext_R0_data) 
                                                                         >> 4U)))) 
                                                     << 0x1cU) 
                                                    | (QData)((IData)(
                                                                      ((0xfe00000U 
                                                                        & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_19__DOT___ram_ext_R0_data) 
                                                                           << 0x11U)) 
                                                                       | ((0x1fc000U 
                                                                           & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_18__DOT___ram_ext_R0_data) 
                                                                              << 0xaU)) 
                                                                          | ((0x3f80U 
                                                                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_17__DOT___ram_ext_R0_data) 
                                                                                << 3U)) 
                                                                             | (0x7fU 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_16__DOT___ram_ext_R0_data) 
                                                                                >> 4U)))))))))))));
    __Vtemp_8[1U] = ((0x80000000U & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_25__DOT___ram_ext_R0_data) 
                                     << 0x1bU)) | (IData)(
                                                          ((((QData)((IData)(
                                                                             (0x7fU 
                                                                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_24__DOT___ram_ext_R0_data) 
                                                                                >> 4U)))) 
                                                             << 0x38U) 
                                                            | (((QData)((IData)(
                                                                                (0x7fU 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_23__DOT___ram_ext_R0_data) 
                                                                                >> 4U)))) 
                                                                << 0x31U) 
                                                               | (((QData)((IData)(
                                                                                (0x7fU 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_22__DOT___ram_ext_R0_data) 
                                                                                >> 4U)))) 
                                                                   << 0x2aU) 
                                                                  | (((QData)((IData)(
                                                                                (0x7fU 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_21__DOT___ram_ext_R0_data) 
                                                                                >> 4U)))) 
                                                                      << 0x23U) 
                                                                     | (((QData)((IData)(
                                                                                (0x7fU 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_20__DOT___ram_ext_R0_data) 
                                                                                >> 4U)))) 
                                                                         << 0x1cU) 
                                                                        | (QData)((IData)(
                                                                                ((0xfe00000U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_19__DOT___ram_ext_R0_data) 
                                                                                << 0x11U)) 
                                                                                | ((0x1fc000U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_18__DOT___ram_ext_R0_data) 
                                                                                << 0xaU)) 
                                                                                | ((0x3f80U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_17__DOT___ram_ext_R0_data) 
                                                                                << 3U)) 
                                                                                | (0x7fU 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_16__DOT___ram_ext_R0_data) 
                                                                                >> 4U)))))))))))) 
                                                           >> 0x20U)));
    __Vtemp_14[0U] = __Vtemp_8[0U];
    __Vtemp_14[1U] = __Vtemp_8[1U];
    __Vtemp_14[2U] = ((0xf8000000U & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_29__DOT___ram_ext_R0_data) 
                                      << 0x17U)) | 
                      ((0x7f00000U & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_28__DOT___ram_ext_R0_data) 
                                      << 0x10U)) | 
                       ((0xfe000U & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_27__DOT___ram_ext_R0_data) 
                                     << 9U)) | ((0x1fc0U 
                                                 & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_26__DOT___ram_ext_R0_data) 
                                                    << 2U)) 
                                                | (0x3fU 
                                                   & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_25__DOT___ram_ext_R0_data) 
                                                      >> 5U))))));
    __Vtemp_14[3U] = ((0xfe00U & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_31__DOT___ram_ext_R0_data) 
                                  << 5U)) | ((0x1fcU 
                                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_30__DOT___ram_ext_R0_data) 
                                                 >> 2U)) 
                                             | (3U 
                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_29__DOT___ram_ext_R0_data) 
                                                   >> 9U))));
    if (vlSelf->_mc___05Fs682) {
        vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size 
            = (7U & (IData)(((((QData)((IData)((0xfU 
                                                & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_15__DOT___ram_ext_R0_data)))) 
                               << 0x3cU) | (((QData)((IData)(
                                                             (0xfU 
                                                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_14__DOT___ram_ext_R0_data)))) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                (0xfU 
                                                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_13__DOT___ram_ext_R0_data)))) 
                                                << 0x34U) 
                                               | (((QData)((IData)(
                                                                   (0xfU 
                                                                    & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_12__DOT___ram_ext_R0_data)))) 
                                                   << 0x30U) 
                                                  | (((QData)((IData)(
                                                                      (0xfU 
                                                                       & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_11__DOT___ram_ext_R0_data)))) 
                                                      << 0x2cU) 
                                                     | (((QData)((IData)(
                                                                         (0xfU 
                                                                          & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_10__DOT___ram_ext_R0_data)))) 
                                                         << 0x28U) 
                                                        | (((QData)((IData)(
                                                                            (0xfU 
                                                                             & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_9__DOT___ram_ext_R0_data)))) 
                                                            << 0x24U) 
                                                           | (((QData)((IData)(
                                                                               (0xfU 
                                                                                & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_8__DOT___ram_ext_R0_data)))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                (((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_7__DOT___ram_ext_R0_data) 
                                                                                << 0x1cU) 
                                                                                | ((0xf000000U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_6__DOT___ram_ext_R0_data) 
                                                                                << 0x18U)) 
                                                                                | ((0xf00000U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_5__DOT___ram_ext_R0_data) 
                                                                                << 0x14U)) 
                                                                                | ((0xf0000U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_4__DOT___ram_ext_R0_data) 
                                                                                << 0x10U)) 
                                                                                | ((0xf000U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_3__DOT___ram_ext_R0_data) 
                                                                                << 0xcU)) 
                                                                                | ((0xf00U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_2__DOT___ram_ext_R0_data) 
                                                                                << 8U)) 
                                                                                | ((0xf0U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_1__DOT___ram_ext_R0_data) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap__DOT___ram_ext_R0_data))))))))))))))))))) 
                             >> (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->mem_axi4_0_r_bits_id), 2U)))));
        vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount 
            = ((((0x2fU >= (0x3fU & ((IData)(3U) * (IData)(vlSelf->mem_axi4_0_r_bits_id))))
                  ? (7U & (IData)(((((QData)((IData)(
                                                     (7U 
                                                      & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_15__DOT___ram_ext_R0_data) 
                                                         >> 0xbU)))) 
                                     << 0x2dU) | (((QData)((IData)(
                                                                   (7U 
                                                                    & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_14__DOT___ram_ext_R0_data) 
                                                                       >> 0xbU)))) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(
                                                                      (7U 
                                                                       & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_13__DOT___ram_ext_R0_data) 
                                                                          >> 0xbU)))) 
                                                      << 0x27U) 
                                                     | (((QData)((IData)(
                                                                         (7U 
                                                                          & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_12__DOT___ram_ext_R0_data) 
                                                                             >> 0xbU)))) 
                                                         << 0x24U) 
                                                        | (((QData)((IData)(
                                                                            (7U 
                                                                             & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_11__DOT___ram_ext_R0_data) 
                                                                                >> 0xbU)))) 
                                                            << 0x21U) 
                                                           | (((QData)((IData)(
                                                                               (7U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_10__DOT___ram_ext_R0_data) 
                                                                                >> 0xbU)))) 
                                                               << 0x1eU) 
                                                              | (QData)((IData)(
                                                                                ((0x38000000U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_9__DOT___ram_ext_R0_data) 
                                                                                << 0x10U)) 
                                                                                | ((0x7000000U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_8__DOT___ram_ext_R0_data) 
                                                                                << 0xdU)) 
                                                                                | ((0xe00000U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_7__DOT___ram_ext_R0_data) 
                                                                                << 0xaU)) 
                                                                                | ((0x1c0000U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_6__DOT___ram_ext_R0_data) 
                                                                                << 7U)) 
                                                                                | ((0x38000U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_5__DOT___ram_ext_R0_data) 
                                                                                << 4U)) 
                                                                                | ((0x7000U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_4__DOT___ram_ext_R0_data) 
                                                                                << 1U)) 
                                                                                | ((0xe00U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_3__DOT___ram_ext_R0_data) 
                                                                                >> 2U)) 
                                                                                | ((0x1c0U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_2__DOT___ram_ext_R0_data) 
                                                                                >> 5U)) 
                                                                                | ((0x38U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_1__DOT___ram_ext_R0_data) 
                                                                                >> 8U)) 
                                                                                | (7U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap__DOT___ram_ext_R0_data) 
                                                                                >> 0xbU))))))))))))))))))) 
                                   >> (0x3fU & ((IData)(3U) 
                                                * (IData)(vlSelf->mem_axi4_0_r_bits_id))))))
                  : 0U) << 4U) | (IData)(vlSelf->mem_axi4_0_r_bits_id));
        vlSelf->_cp___05Fs5804 = vlSelf->mem_axi4_0_r_valid;
        vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source 
            = (0x7fU & ((0x6fU >= (0x7fU & ((IData)(7U) 
                                            * (IData)(vlSelf->mem_axi4_0_r_bits_id))))
                         ? (((0U == (0x1fU & ((IData)(7U) 
                                              * (IData)(vlSelf->mem_axi4_0_r_bits_id))))
                              ? 0U : (__Vtemp_7[(((IData)(6U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->mem_axi4_0_r_bits_id)))) 
                                                 >> 5U)] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(7U) 
                                                * (IData)(vlSelf->mem_axi4_0_r_bits_id)))))) 
                            | (__Vtemp_7[(3U & (((IData)(7U) 
                                                 * (IData)(vlSelf->mem_axi4_0_r_bits_id)) 
                                                >> 5U))] 
                               >> (0x1fU & ((IData)(7U) 
                                            * (IData)(vlSelf->mem_axi4_0_r_bits_id)))))
                         : 0U));
        vlSelf->_cp___05Fs5817 = vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_denied;
        vlSelf->_cp___05Fs5815 = ((0U != (IData)(vlSelf->mem_axi4_0_r_bits_resp)) 
                                  | (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_denied));
    } else {
        vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size 
            = (7U & (IData)(((((QData)((IData)((0xfU 
                                                & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_31__DOT___ram_ext_R0_data)))) 
                               << 0x3cU) | (((QData)((IData)(
                                                             (0xfU 
                                                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_30__DOT___ram_ext_R0_data)))) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                (0xfU 
                                                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_29__DOT___ram_ext_R0_data)))) 
                                                << 0x34U) 
                                               | (((QData)((IData)(
                                                                   (0xfU 
                                                                    & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_28__DOT___ram_ext_R0_data)))) 
                                                   << 0x30U) 
                                                  | (((QData)((IData)(
                                                                      (0xfU 
                                                                       & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_27__DOT___ram_ext_R0_data)))) 
                                                      << 0x2cU) 
                                                     | (((QData)((IData)(
                                                                         (0xfU 
                                                                          & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_26__DOT___ram_ext_R0_data)))) 
                                                         << 0x28U) 
                                                        | (((QData)((IData)(
                                                                            (0xfU 
                                                                             & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_25__DOT___ram_ext_R0_data)))) 
                                                            << 0x24U) 
                                                           | (((QData)((IData)(
                                                                               (0xfU 
                                                                                & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_24__DOT___ram_ext_R0_data)))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                (((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_23__DOT___ram_ext_R0_data) 
                                                                                << 0x1cU) 
                                                                                | ((0xf000000U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_22__DOT___ram_ext_R0_data) 
                                                                                << 0x18U)) 
                                                                                | ((0xf00000U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_21__DOT___ram_ext_R0_data) 
                                                                                << 0x14U)) 
                                                                                | ((0xf0000U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_20__DOT___ram_ext_R0_data) 
                                                                                << 0x10U)) 
                                                                                | ((0xf000U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_19__DOT___ram_ext_R0_data) 
                                                                                << 0xcU)) 
                                                                                | ((0xf00U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_18__DOT___ram_ext_R0_data) 
                                                                                << 8U)) 
                                                                                | ((0xf0U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_17__DOT___ram_ext_R0_data) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_16__DOT___ram_ext_R0_data))))))))))))))))))) 
                             >> (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->mem_axi4_0_b_bits_id), 2U)))));
        vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount 
            = ((((0x2fU >= (0x3fU & ((IData)(3U) * (IData)(vlSelf->mem_axi4_0_b_bits_id))))
                  ? (7U & (IData)(((((QData)((IData)(
                                                     (7U 
                                                      & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_31__DOT___ram_ext_R0_data) 
                                                         >> 0xbU)))) 
                                     << 0x2dU) | (((QData)((IData)(
                                                                   (7U 
                                                                    & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_30__DOT___ram_ext_R0_data) 
                                                                       >> 0xbU)))) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(
                                                                      (7U 
                                                                       & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_29__DOT___ram_ext_R0_data) 
                                                                          >> 0xbU)))) 
                                                      << 0x27U) 
                                                     | (((QData)((IData)(
                                                                         (7U 
                                                                          & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_28__DOT___ram_ext_R0_data) 
                                                                             >> 0xbU)))) 
                                                         << 0x24U) 
                                                        | (((QData)((IData)(
                                                                            (7U 
                                                                             & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_27__DOT___ram_ext_R0_data) 
                                                                                >> 0xbU)))) 
                                                            << 0x21U) 
                                                           | (((QData)((IData)(
                                                                               (7U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_26__DOT___ram_ext_R0_data) 
                                                                                >> 0xbU)))) 
                                                               << 0x1eU) 
                                                              | (QData)((IData)(
                                                                                ((0x38000000U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_25__DOT___ram_ext_R0_data) 
                                                                                << 0x10U)) 
                                                                                | ((0x7000000U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_24__DOT___ram_ext_R0_data) 
                                                                                << 0xdU)) 
                                                                                | ((0xe00000U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_23__DOT___ram_ext_R0_data) 
                                                                                << 0xaU)) 
                                                                                | ((0x1c0000U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_22__DOT___ram_ext_R0_data) 
                                                                                << 7U)) 
                                                                                | ((0x38000U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_21__DOT___ram_ext_R0_data) 
                                                                                << 4U)) 
                                                                                | ((0x7000U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_20__DOT___ram_ext_R0_data) 
                                                                                << 1U)) 
                                                                                | ((0xe00U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_19__DOT___ram_ext_R0_data) 
                                                                                >> 2U)) 
                                                                                | ((0x1c0U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_18__DOT___ram_ext_R0_data) 
                                                                                >> 5U)) 
                                                                                | ((0x38U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_17__DOT___ram_ext_R0_data) 
                                                                                >> 8U)) 
                                                                                | (7U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_16__DOT___ram_ext_R0_data) 
                                                                                >> 0xbU))))))))))))))))))) 
                                   >> (0x3fU & ((IData)(3U) 
                                                * (IData)(vlSelf->mem_axi4_0_b_bits_id))))))
                  : 0U) << 4U) | (IData)(vlSelf->mem_axi4_0_b_bits_id));
        vlSelf->_cp___05Fs5804 = vlSelf->mem_axi4_0_b_valid;
        vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source 
            = (0x7fU & ((0x6fU >= (0x7fU & ((IData)(7U) 
                                            * (IData)(vlSelf->mem_axi4_0_b_bits_id))))
                         ? (((0U == (0x1fU & ((IData)(7U) 
                                              * (IData)(vlSelf->mem_axi4_0_b_bits_id))))
                              ? 0U : (__Vtemp_14[(((IData)(6U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(7U) 
                                                       * (IData)(vlSelf->mem_axi4_0_b_bits_id)))) 
                                                  >> 5U)] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(7U) 
                                                * (IData)(vlSelf->mem_axi4_0_b_bits_id)))))) 
                            | (__Vtemp_14[(3U & (((IData)(7U) 
                                                  * (IData)(vlSelf->mem_axi4_0_b_bits_id)) 
                                                 >> 5U))] 
                               >> (0x1fU & ((IData)(7U) 
                                            * (IData)(vlSelf->mem_axi4_0_b_bits_id)))))
                         : 0U));
        vlSelf->_cp___05Fs5817 = (0U != (IData)(vlSelf->mem_axi4_0_b_bits_resp));
        vlSelf->_cp___05Fs5815 = 0U;
    }
    vlSelf->_cp___05Fs5897 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_37)));
    vlSelf->_cp___05Fs6268 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_37)));
    vlSelf->_cp___05Fs6228 = vlSelf->_cp___05Fs5857;
    vlSelf->_cp___05Fs7737 = vlSelf->_cp___05Fs5857;
    vlSelf->_cp___05Fs6219 = vlSelf->_cp___05Fs5848;
    vlSelf->_cp___05Fs7728 = vlSelf->_cp___05Fs5848;
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_38 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__size_1));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_38 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__size_1));
    vlSelf->_cp___05Fs5950 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size));
    vlSelf->_cp___05Fs5811 = (2U >= (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size));
    vlSelf->_cp___05Fs6175 = vlSelf->_cp___05Fs5804;
    vlSelf->_cp___05Fs7684 = vlSelf->_cp___05Fs5804;
    vlSelf->_cp___05Fs5895 = ((IData)(vlSelf->_cp___05Fs5804) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__d_first_counter)));
    vlSelf->_cp___05Fs6266 = ((IData)(vlSelf->_cp___05Fs5804) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter)));
    vlSelf->_cp___05Fs5915 = ((IData)(vlSelf->_cp___05Fs5804) 
                              & (IData)(vlSelf->_mc___05Fs694));
    vlSelf->_cp___05Fs6286 = ((IData)(vlSelf->_cp___05Fs5804) 
                              & (IData)(vlSelf->_mc___05Fs739));
    vlSelf->_cp___05Fs7551 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs5804)) 
                                       | (IData)(((0x20U 
                                                   != 
                                                   (0x60U 
                                                    & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source))) 
                                                  | (IData)(vlSelf->_cp___05Fs5848))))));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_39 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__source_1));
    VL_SHIFTR_WWI(128,128,7, vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_70, vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_1, (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_39 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__source_1));
    VL_SHIFTR_WWI(128,128,7, vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_70, vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_1, (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_15, vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_61 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size) 
           == (7U & (__Vtemp_15[0U] >> 1U)));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_16, vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_71 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size) 
           == (7U & (__Vtemp_16[0U] >> 1U)));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_17, vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_61 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size) 
           == (7U & (__Vtemp_17[0U] >> 1U)));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_18, vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_71 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size) 
           == (7U & (__Vtemp_18[0U] >> 1U)));
    VL_SHIFTR_WWI(512,512,9, ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_43, vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                   << 2U));
    VL_SHIFTR_WWI(512,512,9, ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_43, vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                   << 2U));
    vlSelf->_mc___05Fs818 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                                   >> 5U));
    vlSelf->_cp___05Fs7552 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                                    >> 6U));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__d_normal_valid 
        = ((1U != (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                         >> 5U))) & (IData)(vlSelf->_cp___05Fs5804));
    vlSelf->_cp___05Fs6188 = vlSelf->_cp___05Fs5817;
    vlSelf->_cp___05Fs7697 = vlSelf->_cp___05Fs5817;
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_40 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__denied) 
           == (IData)(vlSelf->_cp___05Fs5817));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_40 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__denied) 
           == (IData)(vlSelf->_cp___05Fs5817));
    vlSelf->_cp___05Fs5830 = vlSelf->_cp___05Fs5815;
    vlSelf->_cp___05Fs5854 = vlSelf->_cp___05Fs5815;
    vlSelf->_cp___05Fs5872 = vlSelf->_cp___05Fs5815;
    vlSelf->_cp___05Fs6186 = vlSelf->_cp___05Fs5815;
    vlSelf->_cp___05Fs6201 = vlSelf->_cp___05Fs5815;
    vlSelf->_cp___05Fs6225 = vlSelf->_cp___05Fs5815;
    vlSelf->_cp___05Fs6243 = vlSelf->_cp___05Fs5815;
    vlSelf->_cp___05Fs7695 = vlSelf->_cp___05Fs5815;
    vlSelf->_cp___05Fs7710 = vlSelf->_cp___05Fs5815;
    vlSelf->_cp___05Fs7734 = vlSelf->_cp___05Fs5815;
    vlSelf->_cp___05Fs7752 = vlSelf->_cp___05Fs5815;
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_23 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs5817)) 
                 | (IData)(vlSelf->_cp___05Fs5815)));
    vlSelf->_cp___05Fs5901 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_38)));
    vlSelf->_cp___05Fs6272 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_38)));
    vlSelf->_cp___05Fs6321 = vlSelf->_cp___05Fs5950;
    vlSelf->_cp___05Fs7830 = vlSelf->_cp___05Fs5950;
    vlSelf->_cp___05Fs5824 = vlSelf->_cp___05Fs5811;
    vlSelf->_cp___05Fs5839 = vlSelf->_cp___05Fs5811;
    vlSelf->_cp___05Fs6182 = vlSelf->_cp___05Fs5811;
    vlSelf->_cp___05Fs6195 = vlSelf->_cp___05Fs5811;
    vlSelf->_cp___05Fs6210 = vlSelf->_cp___05Fs5811;
    vlSelf->_cp___05Fs7691 = vlSelf->_cp___05Fs5811;
    vlSelf->_cp___05Fs7704 = vlSelf->_cp___05Fs5811;
    vlSelf->_cp___05Fs7719 = vlSelf->_cp___05Fs5811;
    vlSelf->_cp___05Fs5917 = vlSelf->_cp___05Fs5915;
    vlSelf->_cp___05Fs6288 = vlSelf->_cp___05Fs6286;
    vlSelf->_cp___05Fs5903 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_39)));
    vlSelf->_cp___05Fs5947 = (1U & (~ vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_70[0U]));
    vlSelf->_cp___05Fs6274 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_39)));
    vlSelf->_cp___05Fs6318 = (1U & (~ vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_70[0U]));
    vlSelf->_cp___05Fs5928 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_61)));
    vlSelf->_cp___05Fs5952 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_71)));
    vlSelf->_cp___05Fs6299 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_61)));
    vlSelf->_cp___05Fs6323 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_71)));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_60 
        = (((IData)(vlSelf->_mc___05Fs682) == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_43[0U] 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x911240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_43[0U] 
                                                              >> 1U))))))
                                                : 0U)) 
           | ((IData)(vlSelf->_mc___05Fs682) == ((0x17U 
                                                  >= 
                                                  (0x1fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (7U 
                                                       & (ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_43[0U] 
                                                          >> 1U)))))
                                                  ? 
                                                 (7U 
                                                  & (0x951240U 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         * 
                                                         (7U 
                                                          & (ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_43[0U] 
                                                             >> 1U))))))
                                                  : 0U)));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_60 
        = (((IData)(vlSelf->_mc___05Fs682) == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_43[0U] 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x911240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_43[0U] 
                                                              >> 1U))))))
                                                : 0U)) 
           | ((IData)(vlSelf->_mc___05Fs682) == ((0x17U 
                                                  >= 
                                                  (0x1fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (7U 
                                                       & (ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_43[0U] 
                                                          >> 1U)))))
                                                  ? 
                                                 (7U 
                                                  & (0x951240U 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         * 
                                                         (7U 
                                                          & (ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_43[0U] 
                                                             >> 1U))))))
                                                  : 0U)));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__d_normal_bits_opcode 
        = ((IData)(vlSelf->_cp___05Fs7552) ? ((IData)(vlSelf->_mc___05Fs682)
                                               ? 5U
                                               : 6U)
            : (IData)(vlSelf->_mc___05Fs682));
    vlSelf->_cp___05Fs5907 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_40)));
    vlSelf->_cp___05Fs6278 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_40)));
    vlSelf->_cp___05Fs5845 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_23)));
    vlSelf->_cp___05Fs5926 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_60)));
    vlSelf->_cp___05Fs6297 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_60)));
    vlSelf->_mc___05Fs815 = (1U & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__d_normal_bits_opcode));
    vlSelf->_cp___05Fs5863 = vlSelf->_cp___05Fs5845;
    vlSelf->_cp___05Fs6216 = vlSelf->_cp___05Fs5845;
    vlSelf->_cp___05Fs6234 = vlSelf->_cp___05Fs5845;
    vlSelf->_cp___05Fs7725 = vlSelf->_cp___05Fs5845;
    vlSelf->_cp___05Fs7743 = vlSelf->_cp___05Fs5845;
    vlSelf->_mc___05Fs833 = vlSelf->_mc___05Fs815;
}

extern const VlWide<28>/*895:0*/ VExampleRocketSystem__ConstPool__CONST_h71f8a302_0;

VL_INLINE_OPT void VExampleRocketSystem___024root___nba_comb__TOP__1(VExampleRocketSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root___nba_comb__TOP__1\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelf->_cp___05Fs1471 = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_todo) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__b_first_counter)));
    vlSelf->_cp___05Fs676 = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_todo) 
                             & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__b_first_counter)));
    vlSelf->_cp___05Fs10595 = ((~ (IData)(vlSelf->_mc___05Fs3402)) 
                               & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_todo));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_100 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_perms) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__param_2));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_100 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_perms) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__param_2));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_102 
        = (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__address_1 
           == (vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_line 
               << 6U));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_102 
        = (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__address_1 
           == (vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_line 
               << 6U));
    vlSelf->_cp___05Fs7408 = ((IData)(vlSelf->_cp___05Fs1351) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__c_first_counter)));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_84 
        = ((7U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U]) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__opcode_3));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_85 
        = ((7U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                  >> 3U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__param_3));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_86 
        = ((7U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                  >> 6U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__size_3));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_87 
        = ((0x10U | (3U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                           >> 0xaU))) == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__source_3));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_88 
        = (vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__address_2 
           == ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[1U] 
                << 0x14U) | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xcU)));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_119 
        = (0x7ffffU & (vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__inflight_1 
                       >> (0x10U | (3U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0xaU)))));
    vlSelf->_mc___05Fs823 = ((vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__address 
                              >> 6U) == (0x3ffffffU 
                                         & ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[1U] 
                                             << 0xeU) 
                                            | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0x12U))));
    vlSelf->_mc___05Fs824 = ((vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__address 
                              >> 6U) == (0x3ffffffU 
                                         & ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[1U] 
                                             << 0xeU) 
                                            | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0x12U))));
    vlSelf->_mc___05Fs825 = ((vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__address 
                              >> 6U) == (0x3ffffffU 
                                         & ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[1U] 
                                             << 0xeU) 
                                            | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0x12U))));
    vlSelf->_mc___05Fs826 = ((vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__address 
                              >> 6U) == (0x3ffffffU 
                                         & ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[1U] 
                                             << 0xeU) 
                                            | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0x12U))));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____VdfgTmp_h4c79c061__0 
        = ((IData)(vlSelf->_mc___05Fs794) & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_138));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_18 
        = ((IData)(vlSelf->_mc___05Fs847) | ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_io_out_a_valid) 
                                             | ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_1_io_out_a_valid) 
                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_2_io_out_a_valid) 
                                                   | (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_3_io_out_a_valid)))));
    vlSelf->_mc___05Fs848 = ((~ (IData)(vlSelf->_mc___05Fs847)) 
                             & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_io_out_a_valid));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_14 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_io_out_a_valid) 
           | (IData)(vlSelf->_mc___05Fs847));
    vlSelf->_mc___05Fs840 = ((IData)(vlSelf->_mc___05Fs837)
                              ? (IData)(vlSelf->_mc___05Fs834)
                              : (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_0));
    vlSelf->_cp___05Fs1470 = vlSelf->_cp___05Fs10595;
    vlSelf->_cp___05Fs675 = vlSelf->_cp___05Fs10595;
    vlSelf->_cp___05Fs7394 = vlSelf->_cp___05Fs10595;
    vlSelf->_cp___05Fs7564 = vlSelf->_cp___05Fs10595;
    vlSelf->_cp___05Fs1482 = ((IData)(vlSelf->_mc___05Fs157) 
                              & (IData)(vlSelf->_cp___05Fs10595));
    vlSelf->_cp___05Fs687 = ((IData)(vlSelf->_mc___05Fs33) 
                             & (IData)(vlSelf->_cp___05Fs10595));
    vlSelf->_cp___05Fs7406 = ((IData)(vlSelf->_mc___05Fs786) 
                              & (IData)(vlSelf->_cp___05Fs10595));
    vlSelf->_cp___05Fs10597 = ((IData)(vlSelf->_cp___05Fs10595) 
                               != (IData)(vlSelf->_cp___05Fs10503));
    vlSelf->_cp___05Fs680 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_100)));
    vlSelf->_cp___05Fs1475 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_100)));
    vlSelf->_cp___05Fs686 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_102)));
    vlSelf->_cp___05Fs1481 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_102)));
    vlSelf->_cp___05Fs7410 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_84)));
    vlSelf->_cp___05Fs7412 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_85)));
    vlSelf->_cp___05Fs7414 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_86)));
    vlSelf->_cp___05Fs7416 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_87)));
    vlSelf->_cp___05Fs7418 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_88)));
    vlSelf->_cp___05Fs7453 = (1U & vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_119);
    vlSelf->_cp___05Fs7450 = ((IData)(vlSelf->_cp___05Fs1351) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____VdfgTmp_h4c79c061__0));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__prefixOR_2 
        = ((IData)(vlSelf->_mc___05Fs847) | (IData)(vlSelf->_mc___05Fs848));
    vlSelf->_mc___05Fs849 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_14)) 
                             & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_1_io_out_a_valid));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_16 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_1_io_out_a_valid) 
           | (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_14));
    if (vlSelf->_cp___05Fs7450) {
        vlSelf->_cp___05Fs7467 = (0U != (0x7ffffU & 
                                         ((IData)(1U) 
                                          << (0x10U 
                                              | (3U 
                                                 & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0xaU))))));
        vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__c_set_wo_ready 
            = (0x7ffffU & ((IData)(1U) << (0x10U | 
                                           (3U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)))));
    } else {
        vlSelf->_cp___05Fs7467 = 0U;
        vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__c_set_wo_ready = 0U;
    }
    if (vlSelf->_mc___05Fs853) {
        vlSelf->_mc___05Fs859 = vlSelf->_mc___05Fs847;
        vlSelf->_cp___05Fs5691 = vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_18;
    } else {
        vlSelf->_mc___05Fs859 = vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1_0;
        vlSelf->_cp___05Fs5691 = (((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1_0) 
                                   & (IData)(vlSelf->_mc___05Fs847)) 
                                  | (((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_io_out_a_valid) 
                                      & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1_1)) 
                                     | (((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_1_io_out_a_valid) 
                                         & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1_2)) 
                                        | (((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_2_io_out_a_valid) 
                                            & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1_3)) 
                                           | ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_3_io_out_a_valid) 
                                              & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1_4))))));
    }
    vlSelf->_cp___05Fs6062 = vlSelf->_cp___05Fs5691;
    vlSelf->_cp___05Fs7571 = vlSelf->_cp___05Fs5691;
    vlSelf->_cp___05Fs7762 = ((IData)(vlSelf->_cp___05Fs5691) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__a_first_counter)));
    vlSelf->_cp___05Fs7791 = ((IData)(vlSelf->_cp___05Fs5691) 
                              & (IData)(vlSelf->_mc___05Fs894));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__prefixOR_3 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__prefixOR_2) 
           | (IData)(vlSelf->_mc___05Fs849));
    vlSelf->_mc___05Fs850 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_16)) 
                             & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_2_io_out_a_valid));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_15 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_2_io_out_a_valid) 
           | (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_16));
    vlSelf->_mc___05Fs851 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_15)) 
                             & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_3_io_out_a_valid));
    if (vlSelf->_mc___05Fs853) {
        vlSelf->_mc___05Fs860 = vlSelf->_mc___05Fs848;
        vlSelf->_mc___05Fs861 = vlSelf->_mc___05Fs849;
        vlSelf->_mc___05Fs862 = vlSelf->_mc___05Fs850;
        vlSelf->_mc___05Fs863 = vlSelf->_mc___05Fs851;
    } else {
        vlSelf->_mc___05Fs860 = vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1_1;
        vlSelf->_mc___05Fs861 = vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1_2;
        vlSelf->_mc___05Fs862 = vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1_3;
        vlSelf->_mc___05Fs863 = vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1_4;
    }
    vlSelf->_cp___05Fs7563 = (1U & (~ ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_18)) 
                                       | ((IData)(vlSelf->_mc___05Fs847) 
                                          | ((IData)(vlSelf->_mc___05Fs848) 
                                             | ((IData)(vlSelf->_mc___05Fs849) 
                                                | ((IData)(vlSelf->_mc___05Fs850) 
                                                   | (IData)(vlSelf->_mc___05Fs851))))))));
    vlSelf->_cp___05Fs7561 = (1U & (~ ((~ ((((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__prefixOR_3) 
                                             | (IData)(vlSelf->_mc___05Fs850)) 
                                            & (IData)(vlSelf->_mc___05Fs851)) 
                                           | (((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__prefixOR_3) 
                                               & (IData)(vlSelf->_mc___05Fs850)) 
                                              | ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__prefixOR_2) 
                                                 & (IData)(vlSelf->_mc___05Fs849))))) 
                                       & ((~ (IData)(vlSelf->_mc___05Fs847)) 
                                          | (~ (IData)(vlSelf->_mc___05Fs848))))));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_data 
        = (((IData)(vlSelf->_mc___05Fs859) ? (((QData)((IData)(
                                                               vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[3U])) 
                                               << 0x34U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[2U])) 
                                                  << 0x14U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[1U])) 
                                                    >> 0xcU)))
             : 0ULL) | (((IData)(vlSelf->_mc___05Fs860)
                          ? (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT___ram_ext_R0_data[2U])) 
                              << 0x38U) | (((QData)((IData)(
                                                            vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT___ram_ext_R0_data[1U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT___ram_ext_R0_data[0U])) 
                                              >> 8U)))
                          : 0ULL) | (((IData)(vlSelf->_mc___05Fs861)
                                       ? (((QData)((IData)(
                                                           vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT___ram_ext_R0_data[2U])) 
                                           << 0x38U) 
                                          | (((QData)((IData)(
                                                              vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT___ram_ext_R0_data[1U])) 
                                              << 0x18U) 
                                             | ((QData)((IData)(
                                                                vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT___ram_ext_R0_data[0U])) 
                                                >> 8U)))
                                       : 0ULL) | (((IData)(vlSelf->_mc___05Fs862)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT___ram_ext_R0_data[2U])) 
                                                     << 0x38U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT___ram_ext_R0_data[1U])) 
                                                        << 0x18U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT___ram_ext_R0_data[0U])) 
                                                          >> 8U)))
                                                    : 0ULL) 
                                                  | ((IData)(vlSelf->_mc___05Fs863)
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT___ram_ext_R0_data[2U])) 
                                                       << 0x38U) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT___ram_ext_R0_data[1U])) 
                                                          << 0x18U) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT___ram_ext_R0_data[0U])) 
                                                            >> 8U)))
                                                      : 0ULL)))));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_prot 
        = (((((IData)(vlSelf->_mc___05Fs860) & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__user_amba_prot_fetch)) 
             | (((IData)(vlSelf->_mc___05Fs861) & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__user_amba_prot_fetch)) 
                | (((IData)(vlSelf->_mc___05Fs862) 
                    & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__user_amba_prot_fetch)) 
                   | ((IData)(vlSelf->_mc___05Fs863) 
                      & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__user_amba_prot_fetch))))) 
            << 2U) | ((2U & ((~ ((IData)(vlSelf->_mc___05Fs859) 
                                 | (((IData)(vlSelf->_mc___05Fs860) 
                                     & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__user_amba_prot_secure)) 
                                    | (((IData)(vlSelf->_mc___05Fs861) 
                                        & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__user_amba_prot_secure)) 
                                       | (((IData)(vlSelf->_mc___05Fs862) 
                                           & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__user_amba_prot_secure)) 
                                          | ((IData)(vlSelf->_mc___05Fs863) 
                                             & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__user_amba_prot_secure))))))) 
                             << 1U)) | ((IData)(vlSelf->_mc___05Fs859) 
                                        | (((IData)(vlSelf->_mc___05Fs860) 
                                            & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__user_amba_prot_privileged)) 
                                           | (((IData)(vlSelf->_mc___05Fs861) 
                                               & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__user_amba_prot_privileged)) 
                                              | (((IData)(vlSelf->_mc___05Fs862) 
                                                  & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__user_amba_prot_privileged)) 
                                                 | ((IData)(vlSelf->_mc___05Fs863) 
                                                    & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__user_amba_prot_privileged))))))));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_cache 
        = ((((IData)(vlSelf->_mc___05Fs859) | (((IData)(vlSelf->_mc___05Fs860) 
                                                & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__user_amba_prot_writealloc)) 
                                               | (((IData)(vlSelf->_mc___05Fs861) 
                                                   & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__user_amba_prot_writealloc)) 
                                                  | (((IData)(vlSelf->_mc___05Fs862) 
                                                      & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__user_amba_prot_writealloc)) 
                                                     | ((IData)(vlSelf->_mc___05Fs863) 
                                                        & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__user_amba_prot_writealloc)))))) 
            << 3U) | ((((IData)(vlSelf->_mc___05Fs859) 
                        | (((IData)(vlSelf->_mc___05Fs860) 
                            & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__user_amba_prot_readalloc)) 
                           | (((IData)(vlSelf->_mc___05Fs861) 
                               & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__user_amba_prot_readalloc)) 
                              | (((IData)(vlSelf->_mc___05Fs862) 
                                  & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__user_amba_prot_readalloc)) 
                                 | ((IData)(vlSelf->_mc___05Fs863) 
                                    & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__user_amba_prot_readalloc)))))) 
                       << 2U) | ((((IData)(vlSelf->_mc___05Fs859) 
                                   | (((IData)(vlSelf->_mc___05Fs860) 
                                       & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__user_amba_prot_modifiable)) 
                                      | (((IData)(vlSelf->_mc___05Fs861) 
                                          & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__user_amba_prot_modifiable)) 
                                         | (((IData)(vlSelf->_mc___05Fs862) 
                                             & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__user_amba_prot_modifiable)) 
                                            | ((IData)(vlSelf->_mc___05Fs863) 
                                               & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__user_amba_prot_modifiable)))))) 
                                  << 1U) | ((IData)(vlSelf->_mc___05Fs859) 
                                            | (((IData)(vlSelf->_mc___05Fs860) 
                                                & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__user_amba_prot_bufferable)) 
                                               | (((IData)(vlSelf->_mc___05Fs861) 
                                                   & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__user_amba_prot_bufferable)) 
                                                  | (((IData)(vlSelf->_mc___05Fs862) 
                                                      & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__user_amba_prot_bufferable)) 
                                                     | ((IData)(vlSelf->_mc___05Fs863) 
                                                        & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__user_amba_prot_bufferable)))))))));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_mask 
        = (0xffU & (((IData)(vlSelf->_mc___05Fs859)
                      ? ((((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_acc_5) 
                           << 7U) | (0x7ffff80U & (
                                                   ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_eq_5) 
                                                    << 7U) 
                                                   & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 5U)))) 
                         | ((((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_acc_5) 
                              | ((~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                     >> 0xcU)) & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_eq_5))) 
                             << 6U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_acc_4) 
                                         << 5U) | (0x1ffffe0U 
                                                   & (((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_eq_4) 
                                                       << 5U) 
                                                      & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 7U)))) 
                                       | ((((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_acc_4) 
                                            | ((~ (
                                                   vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xcU)) 
                                               & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_eq_4))) 
                                           << 4U) | 
                                          ((((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_acc_3) 
                                             << 3U) 
                                            | (0x7ffff8U 
                                               & (((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_eq_3) 
                                                   << 3U) 
                                                  & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 9U)))) 
                                           | ((((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_acc_3) 
                                                | ((~ 
                                                    (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xcU)) 
                                                   & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_eq_3))) 
                                               << 2U) 
                                              | ((((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_acc_2) 
                                                   << 1U) 
                                                  | (0x1ffffeU 
                                                     & (((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_eq_2) 
                                                         << 1U) 
                                                        & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0xbU)))) 
                                                 | ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_acc_2) 
                                                    | ((~ 
                                                        (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0xcU)) 
                                                       & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_eq_2))))))))))
                      : 0U) | (((IData)(vlSelf->_mc___05Fs860)
                                 ? vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT___ram_ext_R0_data[0U]
                                 : 0U) | (((IData)(vlSelf->_mc___05Fs861)
                                            ? vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT___ram_ext_R0_data[0U]
                                            : 0U) | 
                                          (((IData)(vlSelf->_mc___05Fs862)
                                             ? vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT___ram_ext_R0_data[0U]
                                             : 0U) 
                                           | ((IData)(vlSelf->_mc___05Fs863)
                                               ? vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT___ram_ext_R0_data[0U]
                                               : 0U))))));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_param 
        = (((IData)(vlSelf->_mc___05Fs860) ? ((IData)(vlSelf->_mc___05Fs802)
                                               ? 0U
                                               : (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__param))
             : 0U) | (((IData)(vlSelf->_mc___05Fs861)
                        ? ((IData)(vlSelf->_mc___05Fs806)
                            ? 0U : (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__param))
                        : 0U) | (((IData)(vlSelf->_mc___05Fs862)
                                   ? ((IData)(vlSelf->_mc___05Fs810)
                                       ? 0U : (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__param))
                                   : 0U) | ((IData)(vlSelf->_mc___05Fs863)
                                             ? ((IData)(vlSelf->_mc___05Fs814)
                                                 ? 0U
                                                 : (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__param))
                                             : 0U))));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_address 
        = (((IData)(vlSelf->_mc___05Fs859) ? ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[1U] 
                                               << 0x14U) 
                                              | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xcU))
             : 0U) | (((IData)(vlSelf->_mc___05Fs860)
                        ? vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__address
                        : 0U) | (((IData)(vlSelf->_mc___05Fs861)
                                   ? vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__address
                                   : 0U) | (((IData)(vlSelf->_mc___05Fs862)
                                              ? vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__address
                                              : 0U) 
                                            | ((IData)(vlSelf->_mc___05Fs863)
                                                ? vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__address
                                                : 0U)))));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_size 
        = (7U & (((IData)(vlSelf->_mc___05Fs859) ? 
                  ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                    << 0x1aU) | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                 >> 6U)) : 0U) | (((IData)(vlSelf->_mc___05Fs860)
                                                    ? (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__size)
                                                    : 0U) 
                                                  | (((IData)(vlSelf->_mc___05Fs861)
                                                       ? (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__size)
                                                       : 0U) 
                                                     | (((IData)(vlSelf->_mc___05Fs862)
                                                          ? (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__size)
                                                          : 0U) 
                                                        | ((IData)(vlSelf->_mc___05Fs863)
                                                            ? (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__size)
                                                            : 0U))))));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_opcode 
        = (((IData)(vlSelf->_mc___05Fs860) ? (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_io_out_a_bits_opcode)
             : 0U) | (((IData)(vlSelf->_mc___05Fs861)
                        ? (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_1_io_out_a_bits_opcode)
                        : 0U) | (((IData)(vlSelf->_mc___05Fs862)
                                   ? (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_2_io_out_a_bits_opcode)
                                   : 0U) | ((IData)(vlSelf->_mc___05Fs863)
                                             ? (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_3_io_out_a_bits_opcode)
                                             : 0U))));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_source 
        = (((IData)(vlSelf->_mc___05Fs859) ? ((((IData)(vlSelf->_mc___05Fs831)
                                                 ? 2U
                                                 : 1U) 
                                               << 5U) 
                                              | ((IData)(vlSelf->_mc___05Fs831)
                                                  ? 
                                                 (0x10U 
                                                  | (3U 
                                                     & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0xaU)))
                                                  : 
                                                 (((IData)(vlSelf->_mc___05Fs823)
                                                    ? (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__source)
                                                    : 0U) 
                                                  | (((IData)(vlSelf->_mc___05Fs824)
                                                       ? (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__source)
                                                       : 0U) 
                                                     | (((IData)(vlSelf->_mc___05Fs825)
                                                          ? (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__source)
                                                          : 0U) 
                                                        | ((IData)(vlSelf->_mc___05Fs826)
                                                            ? (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__source)
                                                            : 0U))))))
             : 0U) | (((IData)(vlSelf->_mc___05Fs860)
                        ? ((((IData)(vlSelf->_mc___05Fs802)
                              ? (2U | (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__shared))))
                              : 0U) << 5U) | (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__source))
                        : 0U) | (((IData)(vlSelf->_mc___05Fs861)
                                   ? ((((IData)(vlSelf->_mc___05Fs806)
                                         ? (2U | (1U 
                                                  & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__shared))))
                                         : 0U) << 5U) 
                                      | (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__source))
                                   : 0U) | (((IData)(vlSelf->_mc___05Fs862)
                                              ? ((((IData)(vlSelf->_mc___05Fs810)
                                                    ? 
                                                   (2U 
                                                    | (1U 
                                                       & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__shared))))
                                                    : 0U) 
                                                  << 5U) 
                                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__source))
                                              : 0U) 
                                            | ((IData)(vlSelf->_mc___05Fs863)
                                                ? (
                                                   (((IData)(vlSelf->_mc___05Fs814)
                                                      ? 
                                                     (2U 
                                                      | (1U 
                                                         & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__shared))))
                                                      : 0U) 
                                                    << 5U) 
                                                   | (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__source))
                                                : 0U)))));
    vlSelf->_cp___05Fs5710 = (0xffU != (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_mask));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_30 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_param) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__param));
    vlSelf->_cp___05Fs5777 = (5U <= (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_param));
    vlSelf->_cp___05Fs5788 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_param) 
                                    >> 2U));
    vlSelf->_cp___05Fs5799 = (2U <= (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_param));
    vlSelf->_cp___05Fs5708 = (3U <= (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_param));
    vlSelf->_cp___05Fs5742 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_param));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_33 
        = (vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__address 
           == vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_address);
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_address)));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_address)));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_address)));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_address)));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_31 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__size));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_8 
        = ((7U != (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_size)) 
           & (8U == (vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_address 
                     >> 0x1cU)));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_2 
        = (0x3fU & ((~ ((IData)(0x3fU) << (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_size))) 
                    & vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_address));
    vlSelf->_mc___05Fs748 = (2U < (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_size));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_29 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_opcode) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__opcode));
    vlSelf->_cp___05Fs5696 = (6U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_opcode));
    vlSelf->_cp___05Fs5713 = (7U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_opcode));
    vlSelf->_cp___05Fs5732 = (4U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_opcode));
    vlSelf->_cp___05Fs5747 = (0U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_opcode));
    vlSelf->_cp___05Fs5758 = (1U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_opcode));
    vlSelf->_cp___05Fs5769 = (2U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_opcode));
    vlSelf->_cp___05Fs5780 = (3U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_opcode));
    vlSelf->_cp___05Fs5791 = (5U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_opcode));
    vlSelf->_mc___05Fs681 = (1U & (~ ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_opcode) 
                                      >> 2U)));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_32 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_source) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__source));
    VL_SHIFTR_WWI(128,128,7, vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_49, vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight, (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_source));
    __Vtemp_1[0U] = 1U;
    __Vtemp_1[1U] = 0U;
    __Vtemp_1[2U] = 0U;
    __Vtemp_1[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_source));
    if (vlSelf->_cp___05Fs7791) {
        vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[0U] 
            = __Vtemp_2[0U];
        vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[1U] 
            = __Vtemp_2[1U];
        vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[2U] 
            = __Vtemp_2[2U];
        vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[3U] 
            = __Vtemp_2[3U];
    } else {
        vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[0U] = 0U;
        vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[1U] = 0U;
        vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[2U] = 0U;
        vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[3U] = 0U;
    }
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id 
        = ((0x37fU >= (0x3ffU & ((IData)(7U) * (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_source))))
            ? (0x7fU & (((0U == (0x1fU & ((IData)(7U) 
                                          * (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_source))))
                          ? 0U : (VExampleRocketSystem__ConstPool__CONST_h71f8a302_0[
                                  (((IData)(6U) + (0x3ffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_source)))) 
                                   >> 5U)] << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_source)))))) 
                        | (VExampleRocketSystem__ConstPool__CONST_h71f8a302_0[
                           (0x1fU & (((IData)(7U) * (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_source)) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_source))))))
            : 0U);
    vlSelf->_cp___05Fs5729 = vlSelf->_cp___05Fs5710;
    vlSelf->_cp___05Fs6081 = vlSelf->_cp___05Fs5710;
    vlSelf->_cp___05Fs6100 = vlSelf->_cp___05Fs5710;
    vlSelf->_cp___05Fs7590 = vlSelf->_cp___05Fs5710;
    vlSelf->_cp___05Fs7609 = vlSelf->_cp___05Fs5710;
    vlSelf->_cp___05Fs7766 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_30)));
    vlSelf->_cp___05Fs6148 = vlSelf->_cp___05Fs5777;
    vlSelf->_cp___05Fs7657 = vlSelf->_cp___05Fs5777;
    vlSelf->_cp___05Fs6159 = vlSelf->_cp___05Fs5788;
    vlSelf->_cp___05Fs7668 = vlSelf->_cp___05Fs5788;
    vlSelf->_cp___05Fs6170 = vlSelf->_cp___05Fs5799;
    vlSelf->_cp___05Fs7679 = vlSelf->_cp___05Fs5799;
    vlSelf->_cp___05Fs5725 = vlSelf->_cp___05Fs5708;
    vlSelf->_cp___05Fs6079 = vlSelf->_cp___05Fs5708;
    vlSelf->_cp___05Fs6096 = vlSelf->_cp___05Fs5708;
    vlSelf->_cp___05Fs7588 = vlSelf->_cp___05Fs5708;
    vlSelf->_cp___05Fs7605 = vlSelf->_cp___05Fs5708;
    vlSelf->_cp___05Fs5755 = vlSelf->_cp___05Fs5742;
    vlSelf->_cp___05Fs5766 = vlSelf->_cp___05Fs5742;
    vlSelf->_cp___05Fs6113 = vlSelf->_cp___05Fs5742;
    vlSelf->_cp___05Fs6126 = vlSelf->_cp___05Fs5742;
    vlSelf->_cp___05Fs6137 = vlSelf->_cp___05Fs5742;
    vlSelf->_cp___05Fs7622 = vlSelf->_cp___05Fs5742;
    vlSelf->_cp___05Fs7635 = vlSelf->_cp___05Fs5742;
    vlSelf->_cp___05Fs7646 = vlSelf->_cp___05Fs5742;
    vlSelf->_cp___05Fs5727 = (1U & (~ (IData)(vlSelf->_cp___05Fs5742)));
    vlSelf->_cp___05Fs7772 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_33)));
    vlSelf->_cp___05Fs7768 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_31)));
    vlSelf->_cp___05Fs5736 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_8)));
    vlSelf->_cp___05Fs5706 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_2));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_size 
        = ((IData)(vlSelf->_mc___05Fs748) ? 3U : (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_size));
    vlSelf->_cp___05Fs5704 = (1U & (~ (IData)(vlSelf->_mc___05Fs748)));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_acc 
        = ((IData)(vlSelf->_mc___05Fs748) | ((~ (vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_address 
                                                 >> 2U)) 
                                             & (2U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_size)))));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_acc_1 
        = ((IData)(vlSelf->_mc___05Fs748) | ((2U == 
                                              (3U & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_size))) 
                                             & (vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_address 
                                                >> 2U)));
    vlSelf->_cp___05Fs7764 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_29)));
    vlSelf->_cp___05Fs6067 = vlSelf->_cp___05Fs5696;
    vlSelf->_cp___05Fs7576 = vlSelf->_cp___05Fs5696;
    vlSelf->_cp___05Fs6084 = vlSelf->_cp___05Fs5713;
    vlSelf->_cp___05Fs7593 = vlSelf->_cp___05Fs5713;
    vlSelf->_cp___05Fs6103 = vlSelf->_cp___05Fs5732;
    vlSelf->_cp___05Fs7612 = vlSelf->_cp___05Fs5732;
    vlSelf->_cp___05Fs6118 = vlSelf->_cp___05Fs5747;
    vlSelf->_cp___05Fs7627 = vlSelf->_cp___05Fs5747;
    vlSelf->_cp___05Fs6129 = vlSelf->_cp___05Fs5758;
    vlSelf->_cp___05Fs7638 = vlSelf->_cp___05Fs5758;
    vlSelf->_cp___05Fs6140 = vlSelf->_cp___05Fs5769;
    vlSelf->_cp___05Fs7649 = vlSelf->_cp___05Fs5769;
    vlSelf->_cp___05Fs6151 = vlSelf->_cp___05Fs5780;
    vlSelf->_cp___05Fs7660 = vlSelf->_cp___05Fs5780;
    vlSelf->_cp___05Fs6162 = vlSelf->_cp___05Fs5791;
    vlSelf->_cp___05Fs7671 = vlSelf->_cp___05Fs5791;
    vlSelf->_mc___05Fs683 = vlSelf->_mc___05Fs681;
    vlSelf->_mc___05Fs687 = vlSelf->_mc___05Fs681;
    vlSelf->_mc___05Fs691 = vlSelf->_mc___05Fs681;
    vlSelf->_mc___05Fs698 = vlSelf->_mc___05Fs681;
    vlSelf->_mc___05Fs732 = vlSelf->_mc___05Fs681;
    vlSelf->_mc___05Fs736 = vlSelf->_mc___05Fs681;
    vlSelf->_mc___05Fs745 = vlSelf->_mc___05Fs681;
    vlSelf->_mc___05Fs749 = vlSelf->_mc___05Fs681;
    vlSelf->_mc___05Fs889 = vlSelf->_mc___05Fs681;
    vlSelf->_mc___05Fs893 = vlSelf->_mc___05Fs681;
    vlSelf->_cp___05Fs7770 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_32)));
    vlSelf->_cp___05Fs7794 = (1U & vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_49[0U]);
    vlSelf->_cp___05Fs6098 = vlSelf->_cp___05Fs5727;
    vlSelf->_cp___05Fs7607 = vlSelf->_cp___05Fs5727;
    vlSelf->_cp___05Fs5749 = vlSelf->_cp___05Fs5736;
    vlSelf->_cp___05Fs5760 = vlSelf->_cp___05Fs5736;
    vlSelf->_cp___05Fs6107 = vlSelf->_cp___05Fs5736;
    vlSelf->_cp___05Fs6120 = vlSelf->_cp___05Fs5736;
    vlSelf->_cp___05Fs6131 = vlSelf->_cp___05Fs5736;
    vlSelf->_cp___05Fs7616 = vlSelf->_cp___05Fs5736;
    vlSelf->_cp___05Fs7629 = vlSelf->_cp___05Fs5736;
    vlSelf->_cp___05Fs7640 = vlSelf->_cp___05Fs5736;
    vlSelf->_cp___05Fs5723 = vlSelf->_cp___05Fs5706;
    vlSelf->_cp___05Fs5740 = vlSelf->_cp___05Fs5706;
    vlSelf->_cp___05Fs5753 = vlSelf->_cp___05Fs5706;
    vlSelf->_cp___05Fs5764 = vlSelf->_cp___05Fs5706;
    vlSelf->_cp___05Fs5775 = vlSelf->_cp___05Fs5706;
    vlSelf->_cp___05Fs5786 = vlSelf->_cp___05Fs5706;
    vlSelf->_cp___05Fs5797 = vlSelf->_cp___05Fs5706;
    vlSelf->_cp___05Fs6077 = vlSelf->_cp___05Fs5706;
    vlSelf->_cp___05Fs6094 = vlSelf->_cp___05Fs5706;
    vlSelf->_cp___05Fs6111 = vlSelf->_cp___05Fs5706;
    vlSelf->_cp___05Fs6124 = vlSelf->_cp___05Fs5706;
    vlSelf->_cp___05Fs6135 = vlSelf->_cp___05Fs5706;
    vlSelf->_cp___05Fs6146 = vlSelf->_cp___05Fs5706;
    vlSelf->_cp___05Fs6157 = vlSelf->_cp___05Fs5706;
    vlSelf->_cp___05Fs6168 = vlSelf->_cp___05Fs5706;
    vlSelf->_cp___05Fs7586 = vlSelf->_cp___05Fs5706;
    vlSelf->_cp___05Fs7603 = vlSelf->_cp___05Fs5706;
    vlSelf->_cp___05Fs7620 = vlSelf->_cp___05Fs5706;
    vlSelf->_cp___05Fs7633 = vlSelf->_cp___05Fs5706;
    vlSelf->_cp___05Fs7644 = vlSelf->_cp___05Fs5706;
    vlSelf->_cp___05Fs7655 = vlSelf->_cp___05Fs5706;
    vlSelf->_cp___05Fs7666 = vlSelf->_cp___05Fs5706;
    vlSelf->_cp___05Fs7677 = vlSelf->_cp___05Fs5706;
    vlSelf->_cp___05Fs5721 = vlSelf->_cp___05Fs5704;
    vlSelf->_cp___05Fs6075 = vlSelf->_cp___05Fs5704;
    vlSelf->_cp___05Fs6092 = vlSelf->_cp___05Fs5704;
    vlSelf->_cp___05Fs7584 = vlSelf->_cp___05Fs5704;
    vlSelf->_cp___05Fs7601 = vlSelf->_cp___05Fs5704;
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_size))) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_eq_2)));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_size))) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_eq_3)));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_size))) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_eq_4)));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_size))) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_eq_5)));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_eq_5) 
                & vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_address)) 
            << 7U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_acc_5) 
                        | ((~ vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_address) 
                           & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_eq_5))) 
                       << 6U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_eq_4) 
                                      & vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_address)) 
                                  << 5U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_acc_4) 
                                              | ((~ vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_address) 
                                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_eq_4))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((~ vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_address) 
                                                       & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_eq_3))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((~ vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_address) 
                                                           & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask_eq_2))))))))));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_12 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask)) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_mask));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_9 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_mask) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__mask));
    vlSelf->_cp___05Fs5768 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_12));
    vlSelf->_cp___05Fs5744 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_9)));
    vlSelf->_cp___05Fs6139 = vlSelf->_cp___05Fs5768;
    vlSelf->_cp___05Fs7648 = vlSelf->_cp___05Fs5768;
    vlSelf->_cp___05Fs5757 = vlSelf->_cp___05Fs5744;
    vlSelf->_cp___05Fs5779 = vlSelf->_cp___05Fs5744;
    vlSelf->_cp___05Fs5790 = vlSelf->_cp___05Fs5744;
    vlSelf->_cp___05Fs5801 = vlSelf->_cp___05Fs5744;
    vlSelf->_cp___05Fs6115 = vlSelf->_cp___05Fs5744;
    vlSelf->_cp___05Fs6128 = vlSelf->_cp___05Fs5744;
    vlSelf->_cp___05Fs6150 = vlSelf->_cp___05Fs5744;
    vlSelf->_cp___05Fs6161 = vlSelf->_cp___05Fs5744;
    vlSelf->_cp___05Fs6172 = vlSelf->_cp___05Fs5744;
    vlSelf->_cp___05Fs7624 = vlSelf->_cp___05Fs5744;
    vlSelf->_cp___05Fs7637 = vlSelf->_cp___05Fs5744;
    vlSelf->_cp___05Fs7659 = vlSelf->_cp___05Fs5744;
    vlSelf->_cp___05Fs7670 = vlSelf->_cp___05Fs5744;
    vlSelf->_cp___05Fs7681 = vlSelf->_cp___05Fs5744;
}

VL_INLINE_OPT void VExampleRocketSystem___024root___nba_sequent__TOP__27(VExampleRocketSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root___nba_sequent__TOP__27\n"); );
    // Body
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hasel 
        = vlSelf->__Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hasel;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hamask_0 
        = vlSelf->__Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hamask_0;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_source 
        = vlSelf->__Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_source;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_corrupt 
        = vlSelf->__Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_corrupt;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___GEN_15 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__address) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_anon_out_1_a_bits_address));
    vlSelf->_cp___05Fs11950 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter) 
                               & (IData)(vlSelf->_cp___05Fs11759));
    vlSelf->_cp___05Fs11979 = ((IData)(vlSelf->_mc___05Fs3545) 
                               & (IData)(vlSelf->_cp___05Fs11759));
    vlSelf->_cp___05Fs11672 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter) 
                               & (IData)(vlSelf->_cp___05Fs11481));
    vlSelf->_cp___05Fs11685 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter) 
                               & (IData)(vlSelf->_cp___05Fs11481));
    vlSelf->_cp___05Fs11705 = ((IData)(vlSelf->_mc___05Fs3518) 
                               & (IData)(vlSelf->_cp___05Fs11481));
    vlSelf->_cp___05Fs11701 = ((IData)(vlSelf->_mc___05Fs3516) 
                               & (IData)(vlSelf->_cp___05Fs11481));
    vlSelf->_rs___05Fs3865 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hasel;
    vlSelf->_rs___05Fs3866 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hamask_0;
    if (vlSelf->_cp___05Fs12583) {
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hartsel 
            = vlSelf->_rs___05Fs3693;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_resumereq 
            = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT___io_innerCtrl_bits_resumereq_output;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_ackhavereset 
            = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT___io_innerCtrl_bits_ackhavereset_output;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hrmask_0 
            = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__hrmaskNxt_0;
    }
    vlSelf->_rs___05Fs3817 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_source;
    vlSelf->_rs___05Fs3821 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_corrupt;
    if (vlSelf->_cp___05Fs12500) {
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_param = 0U;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_size = 2U;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_mask = 0xfU;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_data 
            = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_data;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_address 
            = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_address;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_opcode 
            = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode;
    }
    vlSelf->_cp___05Fs11682 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___GEN_15)));
    vlSelf->_cp___05Fs11707 = vlSelf->_cp___05Fs11705;
    vlSelf->_cp___05Fs11710 = vlSelf->_cp___05Fs11701;
    vlSelf->_cp___05Fs11719 = ((IData)(vlSelf->_cp___05Fs11705) 
                               & (IData)(vlSelf->_cp___05Fs11701));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___GEN_24 
        = ((IData)(vlSelf->_cp___05Fs11704) | (IData)(vlSelf->_cp___05Fs11701));
    vlSelf->_cp___05Fs11709 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___GEN_24)));
    vlSelf->_rs___05Fs3863 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hartsel;
    vlSelf->_rs___05Fs3862 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_resumereq;
    vlSelf->_rs___05Fs3864 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_ackhavereset;
    vlSelf->_rs___05Fs3867 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hrmask_0;
    vlSelf->_rs___05Fs3815 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_param;
    vlSelf->_rs___05Fs3816 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_size;
    vlSelf->_rs___05Fs3819 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_mask;
    vlSelf->_rs___05Fs3820 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_data;
    vlSelf->_rs___05Fs3818 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_address;
    vlSelf->_rs___05Fs3814 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_opcode;
}

extern const VlWide<10>/*319:0*/ VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0;
extern const VlWide<10>/*319:0*/ VExampleRocketSystem__ConstPool__CONST_h2dc653e5_0;
extern const VlWide<10>/*319:0*/ VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0;

VL_INLINE_OPT void VExampleRocketSystem___024root___nba_sequent__TOP__28(VExampleRocketSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root___nba_sequent__TOP__28\n"); );
    // Init
    CData/*2:0*/ ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT___GEN_3;
    ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT___GEN_3 = 0;
    VlWide<3>/*75:0*/ ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_63;
    VL_ZERO_W(76, ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_63);
    CData/*0:0*/ ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_72;
    ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_72 = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT____VdfgTmp_h788cf908__0;
    ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT____VdfgTmp_h788cf908__0 = 0;
    CData/*6:0*/ ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT___GEN_1;
    ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT___GEN_1 = 0;
    VlWide<3>/*75:0*/ ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_63;
    VL_ZERO_W(76, ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_63);
    CData/*0:0*/ ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT____VdfgTmp_h788cf908__0;
    ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT____VdfgTmp_h788cf908__0 = 0;
    VlWide<38>/*1215:0*/ ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_40;
    VL_ZERO_W(1216, ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_40);
    CData/*0:0*/ ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0;
    ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0 = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN;
    ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN_0;
    ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN_0 = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0;
    ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0 = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT____VdfgTmp_hd3fe7d91__0;
    ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT____VdfgTmp_hd3fe7d91__0 = 0;
    VlWide<38>/*1215:0*/ ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_32;
    VL_ZERO_W(1216, ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_32);
    CData/*0:0*/ ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0;
    ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0 = 0;
    CData/*0:0*/ __VdfgTmp_hcd8cfd14__0;
    __VdfgTmp_hcd8cfd14__0 = 0;
    VlWide<38>/*1215:0*/ __Vtemp_4;
    VlWide<10>/*319:0*/ __Vtemp_5;
    VlWide<38>/*1215:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<4>/*127:0*/ __Vtemp_23;
    VlWide<5>/*159:0*/ __Vtemp_35;
    VlWide<5>/*159:0*/ __Vtemp_42;
    VlWide<5>/*159:0*/ __Vtemp_49;
    VlWide<5>/*159:0*/ __Vtemp_56;
    VlWide<6>/*191:0*/ __Vtemp_67;
    VlWide<6>/*191:0*/ __Vtemp_74;
    VlWide<6>/*191:0*/ __Vtemp_81;
    VlWide<6>/*191:0*/ __Vtemp_88;
    VlWide<7>/*223:0*/ __Vtemp_99;
    VlWide<7>/*223:0*/ __Vtemp_106;
    VlWide<7>/*223:0*/ __Vtemp_113;
    VlWide<7>/*223:0*/ __Vtemp_120;
    VlWide<8>/*255:0*/ __Vtemp_131;
    VlWide<8>/*255:0*/ __Vtemp_138;
    VlWide<8>/*255:0*/ __Vtemp_145;
    VlWide<8>/*255:0*/ __Vtemp_152;
    VlWide<10>/*319:0*/ __Vtemp_156;
    VlWide<38>/*1215:0*/ __Vtemp_157;
    VlWide<10>/*319:0*/ __Vtemp_158;
    VlWide<10>/*319:0*/ __Vtemp_159;
    VlWide<38>/*1215:0*/ __Vtemp_160;
    VlWide<38>/*1215:0*/ __Vtemp_161;
    VlWide<10>/*319:0*/ __Vtemp_162;
    VlWide<3>/*95:0*/ __Vtemp_164;
    VlWide<3>/*95:0*/ __Vtemp_167;
    VlWide<3>/*95:0*/ __Vtemp_170;
    VlWide<3>/*95:0*/ __Vtemp_173;
    VlWide<3>/*95:0*/ __Vtemp_176;
    VlWide<3>/*95:0*/ __Vtemp_179;
    VlWide<3>/*95:0*/ __Vtemp_182;
    VlWide<10>/*319:0*/ __Vtemp_184;
    VlWide<10>/*319:0*/ __Vtemp_186;
    VlWide<10>/*319:0*/ __Vtemp_188;
    VlWide<5>/*159:0*/ __Vtemp_192;
    VlWide<5>/*159:0*/ __Vtemp_195;
    VlWide<5>/*159:0*/ __Vtemp_198;
    VlWide<5>/*159:0*/ __Vtemp_201;
    VlWide<3>/*95:0*/ __Vtemp_204;
    VlWide<3>/*95:0*/ __Vtemp_206;
    // Body
    vlSelf->ExampleRocketSystem__DOT___cbus_auto_bus_xing_in_d_bits_data 
        = ((IData)(vlSelf->_cp___05Fs4012) ? vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data
            : (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                << 0x30U) | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                              << 0x10U) | ((QData)((IData)(
                                                           vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                           >> 0x10U))));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__time_0 
        = vlSelf->__Vdly__ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__time_0;
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__pad 
        = vlSelf->__Vdly__ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__pad;
    vlSelf->_rs___05Fs3584 = vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__time_0;
    vlSelf->_rs___05Fs3585 = vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__pad;
    if (vlSelf->io_aggregator_1_reset) {
        vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__ipi_0 = 0U;
    } else if (vlSelf->_cp___05Fs10876) {
        vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__ipi_0 
            = (1U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                     >> 0x13U));
    }
    if (vlSelf->_cp___05Fs11180) {
        vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__threshold_1 
            = (3U & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[0U] 
                     >> 0x18U));
    }
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__intnodeOut_0_REG_1 
        = ((IData)(vlSelf->_mc___05Fs3455) ? ((IData)(vlSelf->_mc___05Fs3454)
                                               ? 0U
                                               : (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__priority_0))
            : (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__priority_1));
    if (vlSelf->_cp___05Fs11183) {
        vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__threshold_0 
            = (3U & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[0U] 
                     >> 0x18U));
    }
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__intnodeOut_0_REG 
        = ((IData)(vlSelf->_mc___05Fs3453) ? ((IData)(vlSelf->_mc___05Fs3452)
                                               ? 0U
                                               : (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__priority_0))
            : (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__priority_1));
    vlSelf->_rs___05Fs3586 = vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__ipi_0;
    vlSelf->_rs___05Fs3619 = vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__threshold_1;
    vlSelf->_rs___05Fs3627 = vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__intnodeOut_0_REG_1;
    vlSelf->_rs___05Fs3618 = vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__threshold_0;
    vlSelf->_rs___05Fs3626 = vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__intnodeOut_0_REG;
    if (vlSelf->_cp___05Fs11179) {
        vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__priority_1 
            = (3U & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[0U] 
                     >> 0x18U));
    }
    if (vlSelf->_cp___05Fs11187) {
        vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__priority_0 
            = (3U & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[1U] 
                     >> 0x18U));
    }
    vlSelf->_rs___05Fs3617 = vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__priority_1;
    vlSelf->_rs___05Fs3616 = vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__priority_0;
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__fanin__DOT__effectivePriority_1 
        = ((4U & ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT____Vcellinp__fanin__io_ip) 
                  << 2U)) | (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__priority_0));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__fanin_1__DOT__effectivePriority_1 
        = ((4U & ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT____Vcellinp__fanin_1__io_ip) 
                  << 2U)) | (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__priority_0));
    if (vlSelf->_cp___05Fs11084) {
        vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[0U] 
            = (((IData)((((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                          << 0x2dU) | (((QData)((IData)(
                                                        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                        << 0xdU) | 
                                       ((QData)((IData)(
                                                        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                        >> 0x13U)))) 
                << 0x18U) | ((0xfffffeU & (vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_address 
                                           >> 2U)) 
                             | (IData)(vlSelf->_mc___05Fs3480)));
        vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[1U] 
            = (((IData)((((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                          << 0x2dU) | (((QData)((IData)(
                                                        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                        << 0xdU) | 
                                       ((QData)((IData)(
                                                        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                        >> 0x13U)))) 
                >> 8U) | ((IData)(((((QData)((IData)(
                                                     vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                                     << 0x2dU) | (((QData)((IData)(
                                                                   vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                                   << 0xdU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                                     >> 0x13U))) 
                                   >> 0x20U)) << 0x18U));
        vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[2U] 
            = (((IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_mask) 
                << 0x18U) | ((IData)(((((QData)((IData)(
                                                        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                         << 0xdU) | 
                                        ((QData)((IData)(
                                                         vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                         >> 0x13U))) 
                                      >> 0x20U)) >> 8U));
        vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
            = (((IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_size) 
                << 9U) | (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_source));
    }
    vlSelf->_mc___05Fs3452 = (5U > (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__fanin__DOT__effectivePriority_1));
    vlSelf->_mc___05Fs3454 = (5U > (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__fanin_1__DOT__effectivePriority_1));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
        = vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory
        [vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1][0U];
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
        = vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory
        [vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1][1U];
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
        = vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory
        [vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1][2U];
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
        = vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory
        [vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1][3U];
    vlSelf->_mc___05Fs3453 = (((IData)(vlSelf->_mc___05Fs3452)
                                ? 4U : (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__fanin__DOT__effectivePriority_1)) 
                              >= ((4U & ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT____Vcellinp__fanin__io_ip) 
                                         << 1U)) | (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__priority_1)));
    vlSelf->_mc___05Fs3455 = (((IData)(vlSelf->_mc___05Fs3454)
                                ? 4U : (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__fanin_1__DOT__effectivePriority_1)) 
                              >= ((4U & ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT____Vcellinp__fanin_1__io_ip) 
                                         << 1U)) | (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__priority_1)));
    vlSelf->_mc___05Fs3469 = (1U & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[2U] 
                                    >> 0x19U));
    vlSelf->_mc___05Fs3470 = (1U & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[2U] 
                                    >> 0x1aU));
    vlSelf->_mc___05Fs3471 = (1U & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[2U] 
                                    >> 0x1bU));
    vlSelf->_cp___05Fs11153 = (0U != (3U & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                            >> 9U)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_46 
        = ((0x1fU & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                     >> 4U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source_1));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_75 
        = (0x7ffffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_1 
                       >> (0x1fU & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                    >> 4U))));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_36 
        = ((3U & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                  >> 9U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__size_1));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_37 
        = ((0x1ffU & vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U]) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__source_1));
    VL_SHIFTR_WWI(1216,1216,11, __Vtemp_4, vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__inflight_sizes, 
                  (0x7fcU & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                             << 2U)));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_58 
        = ((3U & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                  >> 9U)) == (7U & (__Vtemp_4[0U] >> 1U)));
    VL_SHIFTR_WWI(304,304,9, __Vtemp_5, vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__inflight_1, 
                  (0x1ffU & vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U]));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_67[0U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[0U] 
           & __Vtemp_5[0U]);
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_67[1U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[1U] 
           & __Vtemp_5[1U]);
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_67[2U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[2U] 
           & __Vtemp_5[2U]);
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_67[3U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[3U] 
           & __Vtemp_5[3U]);
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_67[4U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[4U] 
           & __Vtemp_5[4U]);
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_67[5U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[5U] 
           & __Vtemp_5[5U]);
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_67[6U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[6U] 
           & __Vtemp_5[6U]);
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_67[7U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[7U] 
           & __Vtemp_5[7U]);
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_67[8U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[8U] 
           & __Vtemp_5[8U]);
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_67[9U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[9U] 
           & __Vtemp_5[9U]);
    VL_SHIFTR_WWI(1216,1216,11, __Vtemp_6, vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__inflight_sizes_1, 
                  (0x7fcU & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                             << 2U)));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_68 
        = ((3U & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                  >> 9U)) == (7U & (__Vtemp_6[0U] >> 1U)));
    vlSelf->_cp___05Fs11014 = (1U & (~ (IData)((3U 
                                                == 
                                                (3U 
                                                 & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                                    >> 9U))))));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_8, vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, 
                  (0x7cU & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                            >> 2U)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_49[0U] 
        = __Vtemp_8[0U];
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_49[1U] 
        = __Vtemp_8[1U];
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_49[2U] 
        = (0xfffU & __Vtemp_8[2U]);
    VL_SHIFTR_WWI(1216,1216,11, vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_40, vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__inflight_opcodes, 
                  (0x7fcU & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                             << 2U)));
    vlSelf->_cp___05Fs11012 = (0x130U <= (0x1ffU & 
                                          vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U]));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source_ok_1 
        = ((0U == (3U & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                         >> 7U))) | ((1U == (3U & (
                                                   vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                                   >> 7U))) 
                                     | ((0x10U == (0x1fU 
                                                   & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                                      >> 4U))) 
                                        | ((0x11U == 
                                            (0x1fU 
                                             & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                                >> 4U))) 
                                           | (0x12U 
                                              == (0x1fU 
                                                  & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                                     >> 4U)))))));
    vlSelf->_mc___05Fs3468 = (1U & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[2U] 
                                    >> 0x18U));
    vlSelf->_mc___05Fs3473 = (1U & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[2U] 
                                    >> 0x1dU));
    vlSelf->_mc___05Fs3474 = (1U & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[2U] 
                                    >> 0x1eU));
    vlSelf->_mc___05Fs3475 = (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[2U] 
                              >> 0x1fU);
    vlSelf->_mc___05Fs3472 = (1U & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[2U] 
                                    >> 0x1cU));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN_10 
        = (0U == ((0x3c000U & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[0U] 
                               >> 6U)) | ((0x3f80U 
                                           & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[0U] 
                                              >> 5U)) 
                                          | ((0x78U 
                                              & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[0U] 
                                                 >> 3U)) 
                                             | (7U 
                                                & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[0U] 
                                                   >> 2U))))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___GEN_0 
        = (((0x38U & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                      << 3U)) | (7U & (~ ((IData)(7U) 
                                          << (3U & 
                                              (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                               >> 9U)))))) 
           & (0x20U | ((0x1cU & ((~ vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U]) 
                                 << 2U)) | (3U & (((IData)(7U) 
                                                   << 
                                                   (3U 
                                                    & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                                       >> 9U))) 
                                                  >> 1U)))));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_oindex 
        = ((0x10U & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[0U] 
                     >> 0xfU)) | ((0xcU & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[0U] 
                                           >> 8U)) 
                                  | ((2U & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[0U] 
                                            >> 4U)) 
                                     | (1U & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[0U] 
                                              >> 1U)))));
    vlSelf->_mc___05Fs3443 = (1U & vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[0U]);
    vlSelf->_cp___05Fs5174 = (7U == (7U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 6U)));
    vlSelf->_mc___05Fs3460 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xbU)));
    vlSelf->_mc___05Fs3461 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xcU)));
    vlSelf->_mc___05Fs3462 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xdU)));
    vlSelf->_mc___05Fs3463 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xeU)));
    vlSelf->_mc___05Fs3464 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xfU)));
    vlSelf->_mc___05Fs3465 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0x10U)));
    vlSelf->_mc___05Fs3466 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0x11U)));
    vlSelf->_mc___05Fs3467 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0x12U)));
    vlSelf->_cp___05Fs4845 = (1U & (~ ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                       | (0xffU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full)
                                             ? (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                             : ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                 << 0x15U) 
                                                | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                   >> 0xbU))))))));
    vlSelf->_cp___05Fs5128 = (1U & (~ ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                       | (0xffU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
                                             ? (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                             : ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                 << 0x15U) 
                                                | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                   >> 0xbU))))))));
    vlSelf->_cp___05Fs5406 = (1U & (~ ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                       | (0xffU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full)
                                             ? (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                             : ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                 << 0x15U) 
                                                | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                   >> 0xbU))))))));
    vlSelf->_cp___05Fs5684 = (1U & (~ ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                       | (0xffU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                                             ? (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                             : ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                 << 0x15U) 
                                                | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                   >> 0xbU))))))));
    vlSelf->_cp___05Fs13289 = (0U != (0x3ffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                >> 0x13U)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_15 
        = ((7U != (7U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                         >> 6U))) & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 0x1fU));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_48 
        = ((7U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__opcode));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_49 
        = ((7U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 3U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__param));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_50 
        = ((0xfU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                    >> 6U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__size));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_51 
        = ((0x1fU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xaU)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__source));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_52 
        = (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__address 
           == (0xfffffffU & ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                              << 0x11U) | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xfU))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_68 
        = (0x7ffffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight 
                       >> (0x1fU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0xaU))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_48 
        = ((7U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__opcode));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_49 
        = ((7U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 3U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__param));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_50 
        = ((0xfU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                    >> 6U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__size));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_51 
        = ((0x1fU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xaU)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__source));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_52 
        = (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__address 
           == (0xfffffffU & ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                              << 0x11U) | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xfU))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_68 
        = (0x7ffffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight 
                       >> (0x1fU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0xaU))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_41 
        = ((7U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__opcode));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_42 
        = ((7U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 3U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__param));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_43 
        = ((0xfU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                    >> 6U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__size));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_44 
        = ((0x1fU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xaU)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__source));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_45 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__address) 
           == (0x3fffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                          >> 0xfU)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_62 
        = (0x7ffffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight 
                       >> (0x1fU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0xaU))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_72 
        = ((0xfU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                    >> 6U)) == (0xfU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                        >> 5U)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_37 
        = ((7U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__opcode));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_38 
        = ((7U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 3U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__param));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_39 
        = ((7U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 6U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__size));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_40 
        = ((0x1fU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xaU)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__source));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_41 
        = (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__address 
           == (0x3ffffffU & ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                              << 0x11U) | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xfU))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_54 
        = (0x7ffffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight 
                       >> (0x1fU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0xaU))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_36 
        = ((7U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__opcode));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_37 
        = ((7U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 3U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__param));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_38 
        = ((7U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 6U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__size));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_39 
        = ((0x1fU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xaU)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_40 
        = (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__address 
           == (0xfffffffU & ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                              << 0x11U) | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xfU))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_54 
        = (0x7ffffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight 
                       >> (0x1fU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0xaU))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_36 
        = ((7U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__opcode));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_37 
        = ((7U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 3U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__param));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_38 
        = ((7U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 6U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__size));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_39 
        = ((0x1fU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xaU)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__source));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_40 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__address) 
           == (0xfffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                         >> 0xfU)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_53 
        = (0x7ffffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight 
                       >> (0x1fU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0xaU))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_27 
        = ((7U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__opcode));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_28 
        = ((7U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 3U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__param));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_29 
        = ((7U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 6U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__size));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_30 
        = ((0x1fU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xaU)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__source));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_31 
        = (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__address 
           == (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
               >> 0xfU));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_44 
        = (0x7ffffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight 
                       >> (0x1fU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0xaU))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_11 
        = (IData)(((0x4180U == (0x7dc0U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                   & (0x200U == (0x3ffU & ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                            << 1U) 
                                           | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0x1fU))))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_10 
        = (IData)(((0x4180U == (0x7dc0U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                   & (0x600U == (0x600U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U]))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_10 
        = (IData)((0x4180U == (0x7dc0U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_10 
        = (IData)((0x80004180U == (0x80007dc0U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_16 
        = ((7U != (7U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                         >> 6U))) & (0x200U == (0x3ffU 
                                                & ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                    << 1U) 
                                                   | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x1fU)))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_15 
        = (IData)(((0x600U == (0x600U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                   & (7U != (7U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                   >> 6U)))));
    vlSelf->_cp___05Fs2917 = (2U >= (0xfU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U)));
    vlSelf->_cp___05Fs2909 = (6U == (7U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs2926 = (7U == (7U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs2945 = (4U == (7U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs2960 = (0U == (7U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs2971 = (1U == (7U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs2982 = (2U == (7U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs2990 = (5U <= (7U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 3U)));
    vlSelf->_cp___05Fs2993 = (3U == (7U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs3001 = (1U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 5U));
    vlSelf->_cp___05Fs3004 = (5U == (7U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs3012 = (2U <= (7U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 3U)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_59 
        = ((0x1fU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xaU)) == (0x1fU & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                            >> 4U)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_67 
        = ((0x1fU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xaU)) == (0x1fU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U)));
    vlSelf->_cp___05Fs4581 = (2U >= (7U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 6U)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_11 
        = (IData)(((0x18000000U == (0x18000000U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                   & (0xdU > (0xfU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                      >> 6U)))));
    vlSelf->_mc___05Fs3417 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xcU)));
    vlSelf->_mc___05Fs3418 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xdU)));
    vlSelf->_mc___05Fs3419 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xeU)));
    vlSelf->_mc___05Fs3420 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xfU)));
    vlSelf->_mc___05Fs3421 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0x10U)));
    vlSelf->_mc___05Fs3422 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0x11U)));
    vlSelf->_mc___05Fs3423 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0x12U)));
    vlSelf->_mc___05Fs3416 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xbU)));
    vlSelf->_mc___05Fs327 = (1U & (~ (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                      >> 2U)));
    vlSelf->_cp___05Fs2921 = (3U <= (7U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 3U)));
    vlSelf->_cp___05Fs2923 = (0xffU != (0xffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                 >> 0xbU)));
    vlSelf->_mc___05Fs3649 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xdU)));
    vlSelf->_mc___05Fs3650 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xeU)));
    vlSelf->_mc___05Fs3653 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0x11U)));
    vlSelf->_mc___05Fs3654 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0x12U)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT____VdfgTmp_h4ea4ca6f__0 
        = ((0U == ((0xc00U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                              << 1U)) | (0x3ffU & (0x200U 
                                                   ^ 
                                                   ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                     << 1U) 
                                                    | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x1fU)))))) 
           | (3U == (3U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                           >> 9U))));
    if ((0x17U >= (0x1fU & ((IData)(3U) * (7U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) {
        vlSelf->__VdfgTmp_h001e9a75__0 = (7U & (0x911240U 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
        vlSelf->__VdfgTmp_hff05a675__0 = (7U & (0x951240U 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
    } else {
        vlSelf->__VdfgTmp_h001e9a75__0 = 0U;
        vlSelf->__VdfgTmp_hff05a675__0 = 0U;
    }
    vlSelf->_mc___05Fs3647 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xbU)));
    vlSelf->_mc___05Fs3648 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xcU)));
    vlSelf->_mc___05Fs3651 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xfU)));
    vlSelf->_mc___05Fs3652 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0x10U)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_7 
        = (0xfffU & ((~ ((IData)(0xfffU) << (0xfU & 
                                             (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U)))) 
                     & ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                         << 0x11U) | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                      >> 0xfU))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_12 
        = (0U == ((0xfffcU & ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                               << 5U) | (0x1cU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x1bU)))) 
                  | (3U & (~ ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                               << 5U) | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0x1bU))))));
    vlSelf->_cp___05Fs2955 = (0U != (7U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 3U)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_7 
        = (0x3fU & ((~ ((IData)(0x3fU) << (7U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 6U)))) 
                    & ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                        << 0x11U) | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 0xfU))));
    vlSelf->_cp___05Fs2925 = (1U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                    >> 0x13U));
    if (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full) {
        vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_mask = 0xffU;
        vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_param 
            = (7U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_param));
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode 
            = (7U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_opcode));
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source 
            = (0x1fU & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_source));
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
            = (0x1ffffU & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_address);
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_size 
            = (7U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_size));
        vlSelf->_cp___05Fs13411 = vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt;
    } else {
        vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_mask 
            = (0xffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                        >> 0xbU));
        vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_param 
            = (7U & ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                      << 0x1dU) | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                   >> 3U)));
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode 
            = (7U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]);
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source 
            = (0x1fU & ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                         << 0x16U) | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                      >> 0xaU)));
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
            = (0x1ffffU & ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            << 0x11U) | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xfU)));
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_size 
            = (7U & ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                      << 0x1aU) | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                   >> 6U)));
        vlSelf->_cp___05Fs13411 = vlSelf->_cp___05Fs2925;
    }
    if (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full) {
        vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_mask = 0xffU;
        vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_param 
            = (7U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_param));
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source 
            = (0x1fU & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_source));
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
            = (0xfffU & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_address));
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode 
            = (7U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_opcode));
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_size 
            = (7U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_size));
        vlSelf->_cp___05Fs12871 = vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt;
    } else {
        vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_mask 
            = (0xffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                        >> 0xbU));
        vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_param 
            = (7U & ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                      << 0x1dU) | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                   >> 3U)));
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source 
            = (0x1fU & ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                         << 0x16U) | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                      >> 0xaU)));
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
            = (0xfffU & ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                          << 0x11U) | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 0xfU)));
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode 
            = (7U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]);
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_size 
            = (7U & ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                      << 0x1aU) | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                   >> 6U)));
        vlSelf->_cp___05Fs12871 = vlSelf->_cp___05Fs2925;
    }
    if (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full) {
        vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_mask = 0xffU;
        vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_param 
            = (7U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_param));
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode 
            = (7U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_opcode));
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
            = (0xfffffffU & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_address);
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_size 
            = (7U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_size));
        vlSelf->_cp___05Fs10915 = vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt;
    } else {
        vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_mask 
            = (0xffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                        >> 0xbU));
        vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_param 
            = (7U & ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                      << 0x1dU) | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                   >> 3U)));
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode 
            = (7U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]);
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
            = (0xfffffffU & ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                              << 0x11U) | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xfU)));
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_size 
            = (7U & ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                      << 0x1aU) | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                   >> 6U)));
        vlSelf->_cp___05Fs10915 = vlSelf->_cp___05Fs2925;
    }
    if (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full) {
        vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_mask = 0xffU;
        vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_param 
            = (7U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_param));
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source 
            = (0x1fU & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_source));
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
            = (0x3ffffffU & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_address);
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode 
            = (7U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_opcode));
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_size 
            = (7U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_size));
        vlSelf->_cp___05Fs10628 = vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt;
    } else {
        vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_mask 
            = (0xffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                        >> 0xbU));
        vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_param 
            = (7U & ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                      << 0x1dU) | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                   >> 3U)));
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source 
            = (0x1fU & ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                         << 0x16U) | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                      >> 0xaU)));
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
            = (0x3ffffffU & ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                              << 0x11U) | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xfU)));
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode 
            = (7U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]);
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_size 
            = (7U & ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                      << 0x1aU) | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                   >> 6U)));
        vlSelf->_cp___05Fs10628 = vlSelf->_cp___05Fs2925;
    }
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__source_ok 
        = ((0U == (3U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                         >> 0xdU))) | ((1U == (3U & 
                                               (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xdU))) 
                                       | ((0x10U == 
                                           (0x1fU & 
                                            (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xaU))) 
                                          | ((0x11U 
                                              == (0x1fU 
                                                  & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xaU))) 
                                             | (0x12U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0xaU)))))));
    vlSelf->__VdfgTmp_h152b2164__0 = (IData)((0x80U 
                                              == (0x200c0U 
                                                  & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->__VdfgTmp_h18218b42__0 = (IData)((0x20080U 
                                              == (0x200c0U 
                                                  & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (0x30000U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_3 
        = (IData)((0x10000U == (0x30000U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_4 
        = (IData)((0x20000U == (0x30000U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_5 
        = (IData)((0x30000U == (0x30000U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->_mc___05Fs343 = (1U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                   >> 0xaU));
    vlSelf->_cp___05Fs5058 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_46)));
    vlSelf->_cp___05Fs5102 = (1U & (~ vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_75));
    vlSelf->_cp___05Fs11104 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_36)));
    vlSelf->_cp___05Fs11106 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_37)));
    vlSelf->_cp___05Fs11131 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_58)));
    vlSelf->_cp___05Fs11150 = (1U & (~ vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_67[0U]));
    vlSelf->_cp___05Fs11155 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_68)));
    vlSelf->_cp___05Fs11027 = vlSelf->_cp___05Fs11014;
    vlSelf->_cp___05Fs11042 = vlSelf->_cp___05Fs11014;
    vlSelf->_cp___05Fs11023 = vlSelf->_cp___05Fs11012;
    vlSelf->_cp___05Fs11038 = vlSelf->_cp___05Fs11012;
    vlSelf->_cp___05Fs11053 = vlSelf->_cp___05Fs11012;
    vlSelf->_cp___05Fs11062 = vlSelf->_cp___05Fs11012;
    vlSelf->_cp___05Fs11071 = vlSelf->_cp___05Fs11012;
    vlSelf->_cp___05Fs4964 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source_ok_1)));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN_11 
        = (((- (IData)((IData)(vlSelf->_mc___05Fs3475))) 
            << 0x18U) | ((0xff0000U & ((- (IData)((IData)(vlSelf->_mc___05Fs3474))) 
                                       << 0x10U)) | 
                         ((0xff00U & ((- (IData)((IData)(vlSelf->_mc___05Fs3473))) 
                                      << 8U)) | (0xffU 
                                                 & (- (IData)((IData)(vlSelf->_mc___05Fs3472)))))));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT____VdfgTmp_he21ecb82__0 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN_10) 
           & (IData)(vlSelf->_mc___05Fs3468));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___GEN_1 
        = (7U & ((3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___GEN_0) 
                        >> 4U)) | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___GEN_0)));
    vlSelf->_cp___05Fs11190 = (4U == (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_oindex));
    vlSelf->_cp___05Fs11189 = (1U == (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_oindex));
    vlSelf->_cp___05Fs11191 = (8U == (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_oindex));
    vlSelf->_cp___05Fs11192 = (0xaU == (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_oindex));
    vlSelf->_cp___05Fs11188 = (0U == (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_oindex));
    vlSelf->_cp___05Fs11194 = (0x14U == (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_oindex));
    vlSelf->_cp___05Fs11193 = (0x10U == (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_oindex));
    vlSelf->_mc___05Fs3447 = vlSelf->_mc___05Fs3443;
    vlSelf->_mc___05Fs3450 = vlSelf->_mc___05Fs3443;
    vlSelf->_mc___05Fs3481 = vlSelf->_mc___05Fs3443;
    vlSelf->_mc___05Fs3483 = vlSelf->_mc___05Fs3443;
    vlSelf->_mc___05Fs377 = vlSelf->_mc___05Fs3443;
    vlSelf->_mc___05Fs595 = vlSelf->_mc___05Fs3443;
    vlSelf->_mc___05Fs599 = vlSelf->_mc___05Fs3443;
    vlSelf->_mc___05Fs603 = vlSelf->_mc___05Fs3443;
    vlSelf->_mc___05Fs606 = vlSelf->_mc___05Fs3443;
    vlSelf->_cp___05Fs11051 = (1U & (~ (IData)(vlSelf->_mc___05Fs3443)));
    vlSelf->_cp___05Fs11060 = vlSelf->_mc___05Fs3443;
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_44 
        = ((IData)(vlSelf->_mc___05Fs3443) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__opcode_1));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_65 
        = (((IData)(vlSelf->_mc___05Fs3443) == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_49[0U] 
                                                         >> 1U)))))
                                                 ? 
                                                (7U 
                                                 & (0x911240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * 
                                                        (7U 
                                                         & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_49[0U] 
                                                            >> 1U))))))
                                                 : 0U)) 
           | ((IData)(vlSelf->_mc___05Fs3443) == ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_49[0U] 
                                                           >> 1U)))))
                                                   ? 
                                                  (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_49[0U] 
                                                              >> 1U))))))
                                                   : 0U)));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_35 
        = ((IData)(vlSelf->_mc___05Fs3443) == (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__opcode_1));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_56 
        = (((IData)(vlSelf->_mc___05Fs3443) == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_40[0U] 
                                                         >> 1U)))))
                                                 ? 
                                                (7U 
                                                 & (0x911240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * 
                                                        (7U 
                                                         & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_40[0U] 
                                                            >> 1U))))))
                                                 : 0U)) 
           | ((IData)(vlSelf->_mc___05Fs3443) == ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_40[0U] 
                                                           >> 1U)))))
                                                   ? 
                                                  (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_40[0U] 
                                                              >> 1U))))))
                                                   : 0U)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__drop 
        = ((~ (IData)(vlSelf->_mc___05Fs3443)) & (0U 
                                                  != 
                                                  (7U 
                                                   & vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U])));
    vlSelf->_cp___05Fs13379 = vlSelf->_cp___05Fs13289;
    vlSelf->_cp___05Fs5452 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_15)));
    vlSelf->_cp___05Fs3097 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_48)));
    vlSelf->_cp___05Fs3099 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_49)));
    vlSelf->_cp___05Fs3101 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_50)));
    vlSelf->_cp___05Fs3103 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_51)));
    vlSelf->_cp___05Fs3105 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_52)));
    vlSelf->_cp___05Fs3127 = (1U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_68);
    vlSelf->_cp___05Fs3371 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_48)));
    vlSelf->_cp___05Fs3373 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_49)));
    vlSelf->_cp___05Fs3375 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_50)));
    vlSelf->_cp___05Fs3377 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_51)));
    vlSelf->_cp___05Fs3379 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_52)));
    vlSelf->_cp___05Fs3401 = (1U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_68);
    vlSelf->_cp___05Fs4484 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_41)));
    vlSelf->_cp___05Fs4486 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_42)));
    vlSelf->_cp___05Fs4488 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_43)));
    vlSelf->_cp___05Fs4490 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_44)));
    vlSelf->_cp___05Fs4492 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_45)));
    vlSelf->_cp___05Fs4514 = (1U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_62);
    vlSelf->_cp___05Fs4524 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_72)));
    vlSelf->_cp___05Fs4761 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_37)));
    vlSelf->_cp___05Fs4763 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_38)));
    vlSelf->_cp___05Fs4765 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_39)));
    vlSelf->_cp___05Fs4767 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_40)));
    vlSelf->_cp___05Fs4769 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_41)));
    vlSelf->_cp___05Fs4791 = (1U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_54);
    vlSelf->_cp___05Fs5039 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_36)));
    vlSelf->_cp___05Fs5041 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_37)));
    vlSelf->_cp___05Fs5043 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_38)));
    vlSelf->_cp___05Fs5045 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_39)));
    vlSelf->_cp___05Fs5047 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_40)));
    vlSelf->_cp___05Fs5069 = (1U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_54);
    vlSelf->_cp___05Fs5322 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_36)));
    vlSelf->_cp___05Fs5324 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_37)));
    vlSelf->_cp___05Fs5326 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_38)));
    vlSelf->_cp___05Fs5328 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_39)));
    vlSelf->_cp___05Fs5330 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_40)));
    vlSelf->_cp___05Fs5352 = (1U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_53);
    vlSelf->_cp___05Fs5600 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_27)));
    vlSelf->_cp___05Fs5602 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_28)));
    vlSelf->_cp___05Fs5604 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_29)));
    vlSelf->_cp___05Fs5606 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_30)));
    vlSelf->_cp___05Fs5608 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_31)));
    vlSelf->_cp___05Fs5630 = (1U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_44);
    vlSelf->_cp___05Fs4577 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_11)));
    vlSelf->_cp___05Fs4855 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_10)));
    vlSelf->_cp___05Fs5138 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_10)));
    vlSelf->_cp___05Fs5416 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_10)));
    vlSelf->_cp___05Fs4613 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_16)));
    vlSelf->_cp___05Fs4891 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_15)));
    vlSelf->_cp___05Fs2934 = vlSelf->_cp___05Fs2917;
    vlSelf->_cp___05Fs3191 = vlSelf->_cp___05Fs2917;
    vlSelf->_cp___05Fs3208 = vlSelf->_cp___05Fs2917;
    vlSelf->_cp___05Fs4304 = vlSelf->_cp___05Fs2917;
    vlSelf->_cp___05Fs4321 = vlSelf->_cp___05Fs2917;
    vlSelf->_cp___05Fs3183 = vlSelf->_cp___05Fs2909;
    vlSelf->_cp___05Fs4296 = vlSelf->_cp___05Fs2909;
    vlSelf->_cp___05Fs4573 = vlSelf->_cp___05Fs2909;
    vlSelf->_cp___05Fs4851 = vlSelf->_cp___05Fs2909;
    vlSelf->_cp___05Fs5134 = vlSelf->_cp___05Fs2909;
    vlSelf->_cp___05Fs5412 = vlSelf->_cp___05Fs2909;
    vlSelf->_cp___05Fs3200 = vlSelf->_cp___05Fs2926;
    vlSelf->_cp___05Fs4313 = vlSelf->_cp___05Fs2926;
    vlSelf->_cp___05Fs4590 = vlSelf->_cp___05Fs2926;
    vlSelf->_cp___05Fs4868 = vlSelf->_cp___05Fs2926;
    vlSelf->_cp___05Fs5151 = vlSelf->_cp___05Fs2926;
    vlSelf->_cp___05Fs5429 = vlSelf->_cp___05Fs2926;
    vlSelf->_cp___05Fs3219 = vlSelf->_cp___05Fs2945;
    vlSelf->_cp___05Fs4332 = vlSelf->_cp___05Fs2945;
    vlSelf->_cp___05Fs4609 = vlSelf->_cp___05Fs2945;
    vlSelf->_cp___05Fs4887 = vlSelf->_cp___05Fs2945;
    vlSelf->_cp___05Fs5170 = vlSelf->_cp___05Fs2945;
    vlSelf->_cp___05Fs5448 = vlSelf->_cp___05Fs2945;
    vlSelf->_cp___05Fs3234 = vlSelf->_cp___05Fs2960;
    vlSelf->_cp___05Fs4347 = vlSelf->_cp___05Fs2960;
    vlSelf->_cp___05Fs4624 = vlSelf->_cp___05Fs2960;
    vlSelf->_cp___05Fs4902 = vlSelf->_cp___05Fs2960;
    vlSelf->_cp___05Fs5185 = vlSelf->_cp___05Fs2960;
    vlSelf->_cp___05Fs5463 = vlSelf->_cp___05Fs2960;
    vlSelf->_cp___05Fs3245 = vlSelf->_cp___05Fs2971;
    vlSelf->_cp___05Fs4358 = vlSelf->_cp___05Fs2971;
    vlSelf->_cp___05Fs4635 = vlSelf->_cp___05Fs2971;
    vlSelf->_cp___05Fs4913 = vlSelf->_cp___05Fs2971;
    vlSelf->_cp___05Fs5196 = vlSelf->_cp___05Fs2971;
    vlSelf->_cp___05Fs5474 = vlSelf->_cp___05Fs2971;
    vlSelf->_cp___05Fs3256 = vlSelf->_cp___05Fs2982;
    vlSelf->_cp___05Fs4369 = vlSelf->_cp___05Fs2982;
    vlSelf->_cp___05Fs4646 = vlSelf->_cp___05Fs2982;
    vlSelf->_cp___05Fs4924 = vlSelf->_cp___05Fs2982;
    vlSelf->_cp___05Fs5207 = vlSelf->_cp___05Fs2982;
    vlSelf->_cp___05Fs5485 = vlSelf->_cp___05Fs2982;
    vlSelf->_cp___05Fs3264 = vlSelf->_cp___05Fs2990;
    vlSelf->_cp___05Fs4377 = vlSelf->_cp___05Fs2990;
    vlSelf->_cp___05Fs4654 = vlSelf->_cp___05Fs2990;
    vlSelf->_cp___05Fs4932 = vlSelf->_cp___05Fs2990;
    vlSelf->_cp___05Fs5215 = vlSelf->_cp___05Fs2990;
    vlSelf->_cp___05Fs5493 = vlSelf->_cp___05Fs2990;
    vlSelf->_cp___05Fs3267 = vlSelf->_cp___05Fs2993;
    vlSelf->_cp___05Fs4380 = vlSelf->_cp___05Fs2993;
    vlSelf->_cp___05Fs4657 = vlSelf->_cp___05Fs2993;
    vlSelf->_cp___05Fs4935 = vlSelf->_cp___05Fs2993;
    vlSelf->_cp___05Fs5218 = vlSelf->_cp___05Fs2993;
    vlSelf->_cp___05Fs5496 = vlSelf->_cp___05Fs2993;
    vlSelf->_cp___05Fs3275 = vlSelf->_cp___05Fs3001;
    vlSelf->_cp___05Fs4388 = vlSelf->_cp___05Fs3001;
    vlSelf->_cp___05Fs4665 = vlSelf->_cp___05Fs3001;
    vlSelf->_cp___05Fs4943 = vlSelf->_cp___05Fs3001;
    vlSelf->_cp___05Fs5226 = vlSelf->_cp___05Fs3001;
    vlSelf->_cp___05Fs5504 = vlSelf->_cp___05Fs3001;
    vlSelf->_cp___05Fs3278 = vlSelf->_cp___05Fs3004;
    vlSelf->_cp___05Fs4391 = vlSelf->_cp___05Fs3004;
    vlSelf->_cp___05Fs4668 = vlSelf->_cp___05Fs3004;
    vlSelf->_cp___05Fs4946 = vlSelf->_cp___05Fs3004;
    vlSelf->_cp___05Fs5229 = vlSelf->_cp___05Fs3004;
    vlSelf->_cp___05Fs5507 = vlSelf->_cp___05Fs3004;
    vlSelf->_cp___05Fs3286 = vlSelf->_cp___05Fs3012;
    vlSelf->_cp___05Fs4399 = vlSelf->_cp___05Fs3012;
    vlSelf->_cp___05Fs4676 = vlSelf->_cp___05Fs3012;
    vlSelf->_cp___05Fs4954 = vlSelf->_cp___05Fs3012;
    vlSelf->_cp___05Fs5237 = vlSelf->_cp___05Fs3012;
    vlSelf->_cp___05Fs5515 = vlSelf->_cp___05Fs3012;
    vlSelf->_cp___05Fs4598 = vlSelf->_cp___05Fs4581;
    vlSelf->_cp___05Fs4859 = vlSelf->_cp___05Fs4581;
    vlSelf->_cp___05Fs4876 = vlSelf->_cp___05Fs4581;
    vlSelf->_cp___05Fs5142 = vlSelf->_cp___05Fs4581;
    vlSelf->_cp___05Fs5159 = vlSelf->_cp___05Fs4581;
    vlSelf->_cp___05Fs5420 = vlSelf->_cp___05Fs4581;
    vlSelf->_cp___05Fs5437 = vlSelf->_cp___05Fs4581;
    vlSelf->_cp___05Fs4336 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_11)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_12 
        = (IData)(((0x4180U == (0x7fc0U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                   & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_11)));
    vlSelf->_mc___05Fs3425 = vlSelf->_mc___05Fs3417;
    vlSelf->_mc___05Fs3426 = vlSelf->_mc___05Fs3418;
    vlSelf->_mc___05Fs3427 = vlSelf->_mc___05Fs3419;
    vlSelf->_mc___05Fs3428 = vlSelf->_mc___05Fs3420;
    vlSelf->_mc___05Fs3429 = vlSelf->_mc___05Fs3421;
    vlSelf->_mc___05Fs3430 = vlSelf->_mc___05Fs3422;
    vlSelf->_mc___05Fs3431 = vlSelf->_mc___05Fs3423;
    vlSelf->_cp___05Fs13409 = (0xffU != (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_mask));
    vlSelf->_cp___05Fs12869 = (0xffU != (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_mask));
    vlSelf->_cp___05Fs10913 = (0xffU != (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_mask));
    vlSelf->_cp___05Fs10626 = (0xffU != (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_mask));
    vlSelf->_cp___05Fs13476 = (5U <= (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_param));
    vlSelf->_cp___05Fs13487 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_param) 
                                     >> 2U));
    vlSelf->_cp___05Fs13498 = (2U <= (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_param));
    vlSelf->_cp___05Fs13407 = (3U <= (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_param));
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_21 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_param) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__param));
    vlSelf->_cp___05Fs13441 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_param));
    vlSelf->_cp___05Fs12936 = (5U <= (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_param));
    vlSelf->_cp___05Fs12947 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_param) 
                                     >> 2U));
    vlSelf->_cp___05Fs12958 = (2U <= (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_param));
    vlSelf->_cp___05Fs12867 = (3U <= (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_param));
    vlSelf->_cp___05Fs12901 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_param));
    vlSelf->_cp___05Fs10980 = (5U <= (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_param));
    vlSelf->_cp___05Fs10991 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_param) 
                                     >> 2U));
    vlSelf->_cp___05Fs11002 = (2U <= (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_param));
    vlSelf->_cp___05Fs10911 = (3U <= (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_param));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_29 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_param) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__param));
    vlSelf->_cp___05Fs10945 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_param));
    vlSelf->_cp___05Fs10693 = (5U <= (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_param));
    vlSelf->_cp___05Fs10704 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_param) 
                                     >> 2U));
    vlSelf->_cp___05Fs10715 = (2U <= (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_param));
    vlSelf->_cp___05Fs10624 = (3U <= (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_param));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_29 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_param) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__param));
    vlSelf->_cp___05Fs10658 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_param));
    vlSelf->_mc___05Fs3424 = vlSelf->_mc___05Fs3416;
    vlSelf->_mc___05Fs331 = vlSelf->_mc___05Fs327;
    vlSelf->_mc___05Fs344 = vlSelf->_mc___05Fs327;
    vlSelf->_mc___05Fs361 = vlSelf->_mc___05Fs327;
    vlSelf->_mc___05Fs365 = vlSelf->_mc___05Fs327;
    vlSelf->_mc___05Fs373 = vlSelf->_mc___05Fs327;
    vlSelf->_mc___05Fs534 = vlSelf->_mc___05Fs327;
    vlSelf->_mc___05Fs538 = vlSelf->_mc___05Fs327;
    vlSelf->_mc___05Fs558 = vlSelf->_mc___05Fs327;
    vlSelf->_mc___05Fs562 = vlSelf->_mc___05Fs327;
    vlSelf->_mc___05Fs593 = vlSelf->_mc___05Fs327;
    vlSelf->_mc___05Fs597 = vlSelf->_mc___05Fs327;
    vlSelf->_mc___05Fs628 = vlSelf->_mc___05Fs327;
    vlSelf->_mc___05Fs632 = vlSelf->_mc___05Fs327;
    vlSelf->_cp___05Fs2938 = vlSelf->_cp___05Fs2921;
    vlSelf->_cp___05Fs3195 = vlSelf->_cp___05Fs2921;
    vlSelf->_cp___05Fs3212 = vlSelf->_cp___05Fs2921;
    vlSelf->_cp___05Fs4308 = vlSelf->_cp___05Fs2921;
    vlSelf->_cp___05Fs4325 = vlSelf->_cp___05Fs2921;
    vlSelf->_cp___05Fs4585 = vlSelf->_cp___05Fs2921;
    vlSelf->_cp___05Fs4602 = vlSelf->_cp___05Fs2921;
    vlSelf->_cp___05Fs4863 = vlSelf->_cp___05Fs2921;
    vlSelf->_cp___05Fs4880 = vlSelf->_cp___05Fs2921;
    vlSelf->_cp___05Fs5146 = vlSelf->_cp___05Fs2921;
    vlSelf->_cp___05Fs5163 = vlSelf->_cp___05Fs2921;
    vlSelf->_cp___05Fs5424 = vlSelf->_cp___05Fs2921;
    vlSelf->_cp___05Fs5441 = vlSelf->_cp___05Fs2921;
    vlSelf->_cp___05Fs2942 = vlSelf->_cp___05Fs2923;
    vlSelf->_cp___05Fs3197 = vlSelf->_cp___05Fs2923;
    vlSelf->_cp___05Fs3216 = vlSelf->_cp___05Fs2923;
    vlSelf->_cp___05Fs4310 = vlSelf->_cp___05Fs2923;
    vlSelf->_cp___05Fs4329 = vlSelf->_cp___05Fs2923;
    vlSelf->_cp___05Fs4587 = vlSelf->_cp___05Fs2923;
    vlSelf->_cp___05Fs4606 = vlSelf->_cp___05Fs2923;
    vlSelf->_cp___05Fs4865 = vlSelf->_cp___05Fs2923;
    vlSelf->_cp___05Fs4884 = vlSelf->_cp___05Fs2923;
    vlSelf->_cp___05Fs5148 = vlSelf->_cp___05Fs2923;
    vlSelf->_cp___05Fs5167 = vlSelf->_cp___05Fs2923;
    vlSelf->_cp___05Fs5426 = vlSelf->_cp___05Fs2923;
    vlSelf->_cp___05Fs5445 = vlSelf->_cp___05Fs2923;
    vlSelf->_mc___05Fs3657 = vlSelf->_mc___05Fs3649;
    vlSelf->_mc___05Fs3658 = vlSelf->_mc___05Fs3650;
    vlSelf->_mc___05Fs3661 = vlSelf->_mc___05Fs3653;
    vlSelf->_mc___05Fs3662 = vlSelf->_mc___05Fs3654;
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT____VdfgTmp_h79ced34c__0 
        = ((0U == ((0xffeU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                              << 1U)) | (1U & (~ (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x1fU))))) 
           | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT____VdfgTmp_h4ea4ca6f__0));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_51 
        = ((1U == (IData)(vlSelf->__VdfgTmp_h001e9a75__0)) 
           | (1U == (IData)(vlSelf->__VdfgTmp_hff05a675__0)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_71 
        = (((7U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
            == (IData)(vlSelf->__VdfgTmp_h001e9a75__0)) 
           | ((7U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
              == (IData)(vlSelf->__VdfgTmp_hff05a675__0)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_63 
        = (((IData)(vlSelf->_mc___05Fs3443) == (IData)(vlSelf->__VdfgTmp_h001e9a75__0)) 
           | ((IData)(vlSelf->_mc___05Fs3443) == (IData)(vlSelf->__VdfgTmp_hff05a675__0)));
    vlSelf->_mc___05Fs3655 = vlSelf->_mc___05Fs3647;
    vlSelf->_mc___05Fs3656 = vlSelf->_mc___05Fs3648;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_85 
        = ((0x300U & ((- (IData)((IData)(vlSelf->_mc___05Fs3648))) 
                      << 8U)) | (0xffU & (- (IData)((IData)(vlSelf->_mc___05Fs3647)))));
    vlSelf->_cp___05Fs13395 = (6U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_cp___05Fs13412 = (7U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs672 = (0U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs673 = (1U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs674 = (2U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs675 = (3U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs676 = (4U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs677 = (5U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_43 
        = ((1U == ((0x17U >= (0x1fU & ((IData)(3U) 
                                       * (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))))
                    ? (7U & (0x911240U >> (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode)))))
                    : 0U)) | (1U == ((0x17U >= (0x1fU 
                                                & ((IData)(3U) 
                                                   * (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))))
                                      ? (7U & (0x951240U 
                                               >> (0x1fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode)))))
                                      : 0U)));
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_20 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__opcode));
    vlSelf->_mc___05Fs3659 = vlSelf->_mc___05Fs3651;
    vlSelf->_mc___05Fs3660 = vlSelf->_mc___05Fs3652;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_86 
        = ((0x300U & ((- (IData)((IData)(vlSelf->_mc___05Fs3652))) 
                      << 8U)) | (0xffU & (- (IData)((IData)(vlSelf->_mc___05Fs3651)))));
    vlSelf->_cp___05Fs2919 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_7));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_20 
        = ((0xdU > (0xfU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U))) & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_12));
    vlSelf->_cp___05Fs2968 = vlSelf->_cp___05Fs2955;
    vlSelf->_cp___05Fs2979 = vlSelf->_cp___05Fs2955;
    vlSelf->_cp___05Fs3229 = vlSelf->_cp___05Fs2955;
    vlSelf->_cp___05Fs3242 = vlSelf->_cp___05Fs2955;
    vlSelf->_cp___05Fs3253 = vlSelf->_cp___05Fs2955;
    vlSelf->_cp___05Fs4342 = vlSelf->_cp___05Fs2955;
    vlSelf->_cp___05Fs4355 = vlSelf->_cp___05Fs2955;
    vlSelf->_cp___05Fs4366 = vlSelf->_cp___05Fs2955;
    vlSelf->_cp___05Fs4619 = vlSelf->_cp___05Fs2955;
    vlSelf->_cp___05Fs4632 = vlSelf->_cp___05Fs2955;
    vlSelf->_cp___05Fs4643 = vlSelf->_cp___05Fs2955;
    vlSelf->_cp___05Fs4897 = vlSelf->_cp___05Fs2955;
    vlSelf->_cp___05Fs4910 = vlSelf->_cp___05Fs2955;
    vlSelf->_cp___05Fs4921 = vlSelf->_cp___05Fs2955;
    vlSelf->_cp___05Fs5180 = vlSelf->_cp___05Fs2955;
    vlSelf->_cp___05Fs5193 = vlSelf->_cp___05Fs2955;
    vlSelf->_cp___05Fs5204 = vlSelf->_cp___05Fs2955;
    vlSelf->_cp___05Fs5458 = vlSelf->_cp___05Fs2955;
    vlSelf->_cp___05Fs5471 = vlSelf->_cp___05Fs2955;
    vlSelf->_cp___05Fs5482 = vlSelf->_cp___05Fs2955;
    vlSelf->_cp___05Fs2940 = (1U & (~ (IData)(vlSelf->_cp___05Fs2955)));
    vlSelf->_cp___05Fs10899 = (6U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_cp___05Fs10916 = (7U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_cp___05Fs5126 = (1U & (~ ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                       | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
                                          >> 2U))));
    vlSelf->_mc___05Fs608 = (0U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs609 = (1U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs610 = (2U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs611 = (3U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs613 = (5U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_28 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__opcode));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_54 
        = (((IData)(vlSelf->_mc___05Fs3443) == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))))
                                                 ? 
                                                (7U 
                                                 & (0x911240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode)))))
                                                 : 0U)) 
           | ((IData)(vlSelf->_mc___05Fs3443) == ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))))
                                                   ? 
                                                  (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode)))))
                                                   : 0U)));
    vlSelf->_mc___05Fs3441 = (1U & (~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
                                       >> 2U)));
    vlSelf->_mc___05Fs3480 = (4U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_cp___05Fs4583 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_7));
    vlSelf->_cp___05Fs2944 = vlSelf->_cp___05Fs2925;
    vlSelf->_cp___05Fs2959 = vlSelf->_cp___05Fs2925;
    vlSelf->_cp___05Fs3016 = vlSelf->_cp___05Fs2925;
    vlSelf->_cp___05Fs3199 = vlSelf->_cp___05Fs2925;
    vlSelf->_cp___05Fs3218 = vlSelf->_cp___05Fs2925;
    vlSelf->_cp___05Fs3233 = vlSelf->_cp___05Fs2925;
    vlSelf->_cp___05Fs3290 = vlSelf->_cp___05Fs2925;
    vlSelf->_cp___05Fs4312 = vlSelf->_cp___05Fs2925;
    vlSelf->_cp___05Fs4331 = vlSelf->_cp___05Fs2925;
    vlSelf->_cp___05Fs4346 = vlSelf->_cp___05Fs2925;
    vlSelf->_cp___05Fs4403 = vlSelf->_cp___05Fs2925;
    vlSelf->_cp___05Fs4589 = vlSelf->_cp___05Fs2925;
    vlSelf->_cp___05Fs4608 = vlSelf->_cp___05Fs2925;
    vlSelf->_cp___05Fs4623 = vlSelf->_cp___05Fs2925;
    vlSelf->_cp___05Fs4680 = vlSelf->_cp___05Fs2925;
    vlSelf->_cp___05Fs4867 = vlSelf->_cp___05Fs2925;
    vlSelf->_cp___05Fs4886 = vlSelf->_cp___05Fs2925;
    vlSelf->_cp___05Fs4901 = vlSelf->_cp___05Fs2925;
    vlSelf->_cp___05Fs4958 = vlSelf->_cp___05Fs2925;
    vlSelf->_cp___05Fs5150 = vlSelf->_cp___05Fs2925;
    vlSelf->_cp___05Fs5169 = vlSelf->_cp___05Fs2925;
    vlSelf->_cp___05Fs5184 = vlSelf->_cp___05Fs2925;
    vlSelf->_cp___05Fs5241 = vlSelf->_cp___05Fs2925;
    vlSelf->_cp___05Fs5428 = vlSelf->_cp___05Fs2925;
    vlSelf->_cp___05Fs5447 = vlSelf->_cp___05Fs2925;
    vlSelf->_cp___05Fs5462 = vlSelf->_cp___05Fs2925;
    vlSelf->_cp___05Fs5519 = vlSelf->_cp___05Fs2925;
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_19 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__source_ok) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_16));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_18 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__source_ok) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_15));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_18 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__source_ok) 
           & (7U != (7U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                           >> 6U))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_19 
        = ((0xdU > (0xfU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U))) & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__source_ok));
    vlSelf->_cp___05Fs2915 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__source_ok)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc 
        = ((2U < (0xfU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                          >> 6U))) | (IData)(vlSelf->__VdfgTmp_h152b2164__0));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc 
        = ((2U < (7U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                        >> 6U))) | (IData)(vlSelf->__VdfgTmp_h152b2164__0));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_1 
        = ((2U < (0xfU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                          >> 6U))) | (IData)(vlSelf->__VdfgTmp_h18218b42__0));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1 
        = ((2U < (7U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                        >> 6U))) | (IData)(vlSelf->__VdfgTmp_h18218b42__0));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_37 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__source_1));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_10, vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_40[0U] 
        = __Vtemp_10[0U];
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_40[1U] 
        = __Vtemp_10[1U];
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_40[2U] 
        = (0xfffU & __Vtemp_10[2U]);
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__source_ok_1 
        = ((0U == (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                         >> 3U))) | ((1U == (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                                                   >> 3U))) 
                                     | ((0x10U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source)) 
                                        | ((0x11U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source)) 
                                           | (0x12U 
                                              == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source))))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_47 
        = ((0x1fU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xaU)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_46 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__source_1));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_72 
        = (0x7ffffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_1 
                       >> (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source)));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_12, vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_49[0U] 
        = __Vtemp_12[0U];
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_49[1U] 
        = __Vtemp_12[1U];
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_49[2U] 
        = (0xfffU & __Vtemp_12[2U]);
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__source_ok_1 
        = ((0U == (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                         >> 3U))) | ((1U == (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                                                   >> 3U))) 
                                     | ((0x10U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source)) 
                                        | ((0x11U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source)) 
                                           | (0x12U 
                                              == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source))))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_57 
        = ((0x1fU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xaU)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_47 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__source_1));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_73 
        = (0x7ffffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_1 
                       >> (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source)));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_14, vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_50[0U] 
        = __Vtemp_14[0U];
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_50[1U] 
        = __Vtemp_14[1U];
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_50[2U] 
        = (0xfffU & __Vtemp_14[2U]);
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__source_ok_1 
        = ((0U == (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                         >> 3U))) | ((1U == (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                                                   >> 3U))) 
                                     | ((0x10U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source)) 
                                        | ((0x11U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source)) 
                                           | (0x12U 
                                              == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source))))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_58 
        = ((0x1fU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xaU)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source));
    vlSelf->__VdfgTmp_haa4ef414__0 = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_2) 
                                      & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xfU));
    vlSelf->__VdfgTmp_h9cd04859__0 = ((~ (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0xfU)) 
                                      & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_2));
    vlSelf->__VdfgTmp_h0c353422__0 = (IData)(((0x40U 
                                               == (0xc0U 
                                                   & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                              & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_2)));
    vlSelf->__VdfgTmp_h1f299c44__0 = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_3) 
                                      & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xfU));
    vlSelf->__VdfgTmp_h1722ef27__0 = ((~ (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0xfU)) 
                                      & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_3));
    vlSelf->__VdfgTmp_h78e76b18__0 = (IData)(((0x40U 
                                               == (0xc0U 
                                                   & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                              & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_3)));
    vlSelf->__VdfgTmp_hff0142f7__0 = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_4) 
                                      & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xfU));
    vlSelf->__VdfgTmp_hac9964de__0 = ((~ (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0xfU)) 
                                      & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_4));
    vlSelf->__VdfgTmp_h1c6c13a1__0 = (IData)(((0x40U 
                                               == (0xc0U 
                                                   & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                              & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_4)));
    vlSelf->__VdfgTmp_h9181dae4__0 = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_5) 
                                      & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xfU));
    vlSelf->__VdfgTmp_hfd16ea19__0 = ((~ (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0xfU)) 
                                      & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_5));
    vlSelf->__VdfgTmp_h6eea96e2__0 = (IData)(((0x40U 
                                               == (0xc0U 
                                                   & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                              & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_5)));
    vlSelf->_cp___05Fs10939 = (3U != (3U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                            >> 0x1aU)));
    vlSelf->_cp___05Fs13435 = (1U & (~ (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                        >> 0x10U)));
    vlSelf->_mc___05Fs3681 = (0U != (0xfU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                             >> 0xcU)));
    vlSelf->_cp___05Fs10652 = (0x200U != (0x3ffU & 
                                          (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                           >> 0x10U)));
    __Vtemp_23[3U] = (0x7eU | ((0x1000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                               >> 0xbU)) 
                                           << 0xcU)) 
                               | ((0x800U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                 >> 0xbU)) 
                                             << 0xbU)) 
                                  | ((0x400U & ((~ 
                                                 ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                  >> 0xbU)) 
                                                << 0xaU)) 
                                     | ((0x200U & (
                                                   (~ 
                                                    ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                     >> 0xbU)) 
                                                   << 9U)) 
                                        | ((0x100U 
                                            & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                   >> 0xbU)) 
                                               << 8U)) 
                                           | ((0x80U 
                                               & ((~ 
                                                   ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                    >> 0xbU)) 
                                                  << 7U)) 
                                              | (1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                     >> 0xbU))))))))));
    __Vtemp_35[4U] = ((0x40U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                    >> 0xbU)) << 6U)) 
                      | ((0x20U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                       >> 0xbU)) << 5U)) 
                         | ((0x10U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                          >> 0xbU)) 
                                      << 4U)) | ((8U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                       >> 0xbU)) 
                                                     << 3U)) 
                                                 | ((4U 
                                                     & ((~ 
                                                         ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                          >> 0xbU)) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & ((~ 
                                                            ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                             >> 0xbU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (~ 
                                                             ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                              >> 0xbU)))))))));
    __Vtemp_42[4U] = ((0x2000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                      >> 0xbU)) << 0xdU)) 
                      | ((0x1000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                         >> 0xbU)) 
                                     << 0xcU)) | ((0x800U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                        >> 0xbU)) 
                                                      << 0xbU)) 
                                                  | ((0x400U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                           >> 0xbU)) 
                                                         << 0xaU)) 
                                                     | ((0x200U 
                                                         & ((~ 
                                                             ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                              >> 0xbU)) 
                                                            << 9U)) 
                                                        | ((0x100U 
                                                            & ((~ 
                                                                ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                 >> 0xbU)) 
                                                               << 8U)) 
                                                           | ((0x80U 
                                                               & ((~ 
                                                                   ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                    >> 0xbU)) 
                                                                  << 7U)) 
                                                              | __Vtemp_35[4U])))))));
    __Vtemp_49[4U] = ((0x100000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                        >> 0xbU)) << 0x14U)) 
                      | ((0x80000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                          >> 0xbU)) 
                                      << 0x13U)) | 
                         ((0x40000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                           >> 0xbU)) 
                                       << 0x12U)) | 
                          ((0x20000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                            >> 0xbU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                               >> 0xbU)) 
                                           << 0x10U)) 
                              | ((0x8000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                 >> 0xbU)) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((~ 
                                                 ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                  >> 0xbU)) 
                                                << 0xeU)) 
                                    | __Vtemp_42[4U])))))));
    __Vtemp_56[4U] = ((0x8000000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                         >> 0xbU)) 
                                     << 0x1bU)) | (
                                                   (0x4000000U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                         >> 0xbU)) 
                                                       << 0x1aU)) 
                                                   | ((0x2000000U 
                                                       & ((~ 
                                                           ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                            >> 0xbU)) 
                                                          << 0x19U)) 
                                                      | ((0x1000000U 
                                                          & ((~ 
                                                              ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                               >> 0xbU)) 
                                                             << 0x18U)) 
                                                         | ((0x800000U 
                                                             & ((~ 
                                                                 ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                  >> 0xbU)) 
                                                                << 0x17U)) 
                                                            | ((0x400000U 
                                                                & ((~ 
                                                                    ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                     >> 0xbU)) 
                                                                   << 0x16U)) 
                                                               | ((0x200000U 
                                                                   & ((~ 
                                                                       ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                        >> 0xbU)) 
                                                                      << 0x15U)) 
                                                                  | __Vtemp_49[4U])))))));
    __Vtemp_67[5U] = ((0x40U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                    >> 0xbU)) << 6U)) 
                      | ((0x20U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                       >> 0xbU)) << 5U)) 
                         | ((0x10U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                          >> 0xbU)) 
                                      << 4U)) | ((8U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                       >> 0xbU)) 
                                                     << 3U)) 
                                                 | ((4U 
                                                     & ((~ 
                                                         ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                          >> 0xbU)) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & ((~ 
                                                            ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                             >> 0xbU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (~ 
                                                             ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                              >> 0xbU)))))))));
    __Vtemp_74[5U] = ((0x2000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                      >> 0xbU)) << 0xdU)) 
                      | ((0x1000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                         >> 0xbU)) 
                                     << 0xcU)) | ((0x800U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                        >> 0xbU)) 
                                                      << 0xbU)) 
                                                  | ((0x400U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                           >> 0xbU)) 
                                                         << 0xaU)) 
                                                     | ((0x200U 
                                                         & ((~ 
                                                             ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                              >> 0xbU)) 
                                                            << 9U)) 
                                                        | ((0x100U 
                                                            & ((~ 
                                                                ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                 >> 0xbU)) 
                                                               << 8U)) 
                                                           | ((0x80U 
                                                               & ((~ 
                                                                   ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                    >> 0xbU)) 
                                                                  << 7U)) 
                                                              | __Vtemp_67[5U])))))));
    __Vtemp_81[5U] = ((0x100000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                        >> 0xbU)) << 0x14U)) 
                      | ((0x80000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                          >> 0xbU)) 
                                      << 0x13U)) | 
                         ((0x40000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                           >> 0xbU)) 
                                       << 0x12U)) | 
                          ((0x20000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                            >> 0xbU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                               >> 0xbU)) 
                                           << 0x10U)) 
                              | ((0x8000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                 >> 0xbU)) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((~ 
                                                 ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                  >> 0xbU)) 
                                                << 0xeU)) 
                                    | __Vtemp_74[5U])))))));
    __Vtemp_88[5U] = ((0x8000000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                         >> 0xbU)) 
                                     << 0x1bU)) | (
                                                   (0x4000000U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                         >> 0xbU)) 
                                                       << 0x1aU)) 
                                                   | ((0x2000000U 
                                                       & ((~ 
                                                           ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                            >> 0xbU)) 
                                                          << 0x19U)) 
                                                      | ((0x1000000U 
                                                          & ((~ 
                                                              ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                               >> 0xbU)) 
                                                             << 0x18U)) 
                                                         | ((0x800000U 
                                                             & ((~ 
                                                                 ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                  >> 0xbU)) 
                                                                << 0x17U)) 
                                                            | ((0x400000U 
                                                                & ((~ 
                                                                    ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                     >> 0xbU)) 
                                                                   << 0x16U)) 
                                                               | ((0x200000U 
                                                                   & ((~ 
                                                                       ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                        >> 0xbU)) 
                                                                      << 0x15U)) 
                                                                  | __Vtemp_81[5U])))))));
    __Vtemp_99[6U] = ((0x40U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                    >> 0xbU)) << 6U)) 
                      | ((0x20U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                       >> 0xbU)) << 5U)) 
                         | ((0x10U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                          >> 0xbU)) 
                                      << 4U)) | ((8U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                       >> 0xbU)) 
                                                     << 3U)) 
                                                 | ((4U 
                                                     & ((~ 
                                                         ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                          >> 0xbU)) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & ((~ 
                                                            ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                             >> 0xbU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (~ 
                                                             ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                              >> 0xbU)))))))));
    __Vtemp_106[6U] = ((0x2000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                       >> 0xbU)) << 0xdU)) 
                       | ((0x1000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                          >> 0xbU)) 
                                      << 0xcU)) | (
                                                   (0x800U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                         >> 0xbU)) 
                                                       << 0xbU)) 
                                                   | ((0x400U 
                                                       & ((~ 
                                                           ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                            >> 0xbU)) 
                                                          << 0xaU)) 
                                                      | ((0x200U 
                                                          & ((~ 
                                                              ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                               >> 0xbU)) 
                                                             << 9U)) 
                                                         | ((0x100U 
                                                             & ((~ 
                                                                 ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                  >> 0xbU)) 
                                                                << 8U)) 
                                                            | ((0x80U 
                                                                & ((~ 
                                                                    ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                     >> 0xbU)) 
                                                                   << 7U)) 
                                                               | __Vtemp_99[6U])))))));
    __Vtemp_113[6U] = ((0x100000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                         >> 0xbU)) 
                                     << 0x14U)) | (
                                                   (0x80000U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                         >> 0xbU)) 
                                                       << 0x13U)) 
                                                   | ((0x40000U 
                                                       & ((~ 
                                                           ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                            >> 0xbU)) 
                                                          << 0x12U)) 
                                                      | ((0x20000U 
                                                          & ((~ 
                                                              ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                               >> 0xbU)) 
                                                             << 0x11U)) 
                                                         | ((0x10000U 
                                                             & ((~ 
                                                                 ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                  >> 0xbU)) 
                                                                << 0x10U)) 
                                                            | ((0x8000U 
                                                                & ((~ 
                                                                    ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                     >> 0xbU)) 
                                                                   << 0xfU)) 
                                                               | ((0x4000U 
                                                                   & ((~ 
                                                                       ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                        >> 0xbU)) 
                                                                      << 0xeU)) 
                                                                  | __Vtemp_106[6U])))))));
    __Vtemp_120[6U] = ((0x8000000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                          >> 0xbU)) 
                                      << 0x1bU)) | 
                       ((0x4000000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                           >> 0xbU)) 
                                       << 0x1aU)) | 
                        ((0x2000000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                            >> 0xbU)) 
                                        << 0x19U)) 
                         | ((0x1000000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                               >> 0xbU)) 
                                           << 0x18U)) 
                            | ((0x800000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                 >> 0xbU)) 
                                             << 0x17U)) 
                               | ((0x400000U & ((~ 
                                                 ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                  >> 0xbU)) 
                                                << 0x16U)) 
                                  | ((0x200000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                     >> 0xbU)) 
                                                   << 0x15U)) 
                                     | __Vtemp_113[6U])))))));
    __Vtemp_131[7U] = ((0x40U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                     >> 0xbU)) << 6U)) 
                       | ((0x20U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                        >> 0xbU)) << 5U)) 
                          | ((0x10U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                           >> 0xbU)) 
                                       << 4U)) | ((8U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                        >> 0xbU)) 
                                                      << 3U)) 
                                                  | ((4U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                           >> 0xbU)) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & ((~ 
                                                             ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                              >> 0xbU)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                               >> 0xbU)))))))));
    __Vtemp_138[7U] = ((0x2000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                       >> 0xbU)) << 0xdU)) 
                       | ((0x1000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                          >> 0xbU)) 
                                      << 0xcU)) | (
                                                   (0x800U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                         >> 0xbU)) 
                                                       << 0xbU)) 
                                                   | ((0x400U 
                                                       & ((~ 
                                                           ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                            >> 0xbU)) 
                                                          << 0xaU)) 
                                                      | ((0x200U 
                                                          & ((~ 
                                                              ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                               >> 0xbU)) 
                                                             << 9U)) 
                                                         | ((0x100U 
                                                             & ((~ 
                                                                 ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                  >> 0xbU)) 
                                                                << 8U)) 
                                                            | ((0x80U 
                                                                & ((~ 
                                                                    ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                     >> 0xbU)) 
                                                                   << 7U)) 
                                                               | __Vtemp_131[7U])))))));
    __Vtemp_145[7U] = ((0x100000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                         >> 0xbU)) 
                                     << 0x14U)) | (
                                                   (0x80000U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                         >> 0xbU)) 
                                                       << 0x13U)) 
                                                   | ((0x40000U 
                                                       & ((~ 
                                                           ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                            >> 0xbU)) 
                                                          << 0x12U)) 
                                                      | ((0x20000U 
                                                          & ((~ 
                                                              ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                               >> 0xbU)) 
                                                             << 0x11U)) 
                                                         | ((0x10000U 
                                                             & ((~ 
                                                                 ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                  >> 0xbU)) 
                                                                << 0x10U)) 
                                                            | ((0x8000U 
                                                                & ((~ 
                                                                    ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                     >> 0xbU)) 
                                                                   << 0xfU)) 
                                                               | ((0x4000U 
                                                                   & ((~ 
                                                                       ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                        >> 0xbU)) 
                                                                      << 0xeU)) 
                                                                  | __Vtemp_138[7U])))))));
    __Vtemp_152[7U] = ((0x8000000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                          >> 0xbU)) 
                                      << 0x1bU)) | 
                       ((0x4000000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                           >> 0xbU)) 
                                       << 0x1aU)) | 
                        ((0x2000000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                            >> 0xbU)) 
                                        << 0x19U)) 
                         | ((0x1000000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                               >> 0xbU)) 
                                           << 0x18U)) 
                            | ((0x800000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                 >> 0xbU)) 
                                             << 0x17U)) 
                               | ((0x400000U & ((~ 
                                                 ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                  >> 0xbU)) 
                                                << 0x16U)) 
                                  | ((0x200000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                     >> 0xbU)) 
                                                   << 0x15U)) 
                                     | __Vtemp_145[7U])))))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_88[0U] 
        = (IData)((((QData)((IData)((1U & (~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                              >> 0xbU))))) 
                    << 0x21U) | (((QData)((IData)((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                       >> 0xbU))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (0xfffff800U 
                                                               | (0x7ffU 
                                                                  & (- (IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                                >> 0xbU)))))))))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_88[1U] 
        = (0xfffffffcU | (IData)(((((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                         >> 0xbU))))) 
                                    << 0x21U) | (((QData)((IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                       >> 0xbU))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (0xfffff800U 
                                                                    | (0x7ffU 
                                                                       & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                                >> 0xbU)))))))))) 
                                  >> 0x20U)));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_88[2U] = 0xffffffffU;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_88[3U] 
        = (0xfffe0000U | ((0x10000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                           >> 0xbU)) 
                                       << 0x10U)) | 
                          ((0x8000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                           >> 0xbU)) 
                                       << 0xfU)) | 
                           ((0x4000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                            >> 0xbU)) 
                                        << 0xeU)) | 
                            ((0x2000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                             >> 0xbU)) 
                                         << 0xdU)) 
                             | __Vtemp_23[3U])))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_88[4U] 
        = (((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                >> 0xbU)) << 0x1fU) | ((0x40000000U 
                                        & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                               >> 0xbU)) 
                                           << 0x1eU)) 
                                       | ((0x20000000U 
                                           & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                  >> 0xbU)) 
                                              << 0x1dU)) 
                                          | ((0x10000000U 
                                              & ((~ 
                                                  ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                   >> 0xbU)) 
                                                 << 0x1cU)) 
                                             | __Vtemp_56[4U]))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_88[5U] 
        = (((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                >> 0xbU)) << 0x1fU) | ((0x40000000U 
                                        & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                               >> 0xbU)) 
                                           << 0x1eU)) 
                                       | ((0x20000000U 
                                           & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                  >> 0xbU)) 
                                              << 0x1dU)) 
                                          | ((0x10000000U 
                                              & ((~ 
                                                  ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                   >> 0xbU)) 
                                                 << 0x1cU)) 
                                             | __Vtemp_88[5U]))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_88[6U] 
        = (((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                >> 0xbU)) << 0x1fU) | ((0x40000000U 
                                        & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                               >> 0xbU)) 
                                           << 0x1eU)) 
                                       | ((0x20000000U 
                                           & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                  >> 0xbU)) 
                                              << 0x1dU)) 
                                          | ((0x10000000U 
                                              & ((~ 
                                                  ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                   >> 0xbU)) 
                                                 << 0x1cU)) 
                                             | __Vtemp_120[6U]))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_88[7U] 
        = (((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                >> 0xbU)) << 0x1fU) | ((0x40000000U 
                                        & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                               >> 0xbU)) 
                                           << 0x1eU)) 
                                       | ((0x20000000U 
                                           & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                  >> 0xbU)) 
                                              << 0x1dU)) 
                                          | ((0x10000000U 
                                              & ((~ 
                                                  ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                   >> 0xbU)) 
                                                 << 0x1cU)) 
                                             | __Vtemp_152[7U]))));
    vlSelf->_mc___05Fs614 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_size) 
                                   >> 2U));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFragnum 
        = (7U & ((IData)(vlSelf->_mc___05Fs616) ? (~ 
                                                   (0x3ffU 
                                                    & (((IData)(0x3fU) 
                                                        << (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                       >> 3U)))
                  : ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__gennum) 
                     - (IData)(1U))));
    vlSelf->_mc___05Fs678 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_size) 
                                   >> 2U));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0 
        = (7U & ((IData)(vlSelf->_mc___05Fs679) ? (~ 
                                                   (0x3ffU 
                                                    & (((IData)(0x3fU) 
                                                        << (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                       >> 3U)))
                  : ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__gennum) 
                     - (IData)(1U))));
    vlSelf->_cp___05Fs10612 = (6U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_cp___05Fs10629 = (7U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_cp___05Fs4843 = (1U & (~ ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                       | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
                                          >> 2U))));
    vlSelf->_mc___05Fs573 = (0U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs574 = (1U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs575 = (2U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs576 = (3U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs578 = (5U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_28 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__opcode));
    vlSelf->_mc___05Fs3405 = (1U & (~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
                                       >> 2U)));
    vlSelf->_mc___05Fs3407 = (4U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_cp___05Fs12855 = (6U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_cp___05Fs12872 = (7U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_cp___05Fs5404 = (1U & (~ ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                       | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
                                          >> 2U))));
    vlSelf->_mc___05Fs643 = (0U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs644 = (1U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs645 = (2U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs646 = (3U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs648 = (5U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs3615 = (1U & (~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
                                       >> 2U)));
    vlSelf->_mc___05Fs3617 = (4U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs579 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_size) 
                                   >> 2U));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0 
        = (7U & ((IData)(vlSelf->_mc___05Fs581) ? (~ 
                                                   (0x3ffU 
                                                    & (((IData)(0x3fU) 
                                                        << (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                       >> 3U)))
                  : ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__gennum) 
                     - (IData)(1U))));
    vlSelf->_mc___05Fs649 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_size) 
                                   >> 2U));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0 
        = (7U & ((IData)(vlSelf->_mc___05Fs651) ? (~ 
                                                   (0x3ffU 
                                                    & (((IData)(0x3fU) 
                                                        << (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                       >> 3U)))
                  : ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__gennum) 
                     - (IData)(1U))));
    vlSelf->_mc___05Fs381 = vlSelf->_mc___05Fs343;
    vlSelf->_mc___05Fs340 = (0U == (((IData)(vlSelf->_mc___05Fs343) 
                                     << 3U) | ((4U 
                                                & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                   >> 6U)) 
                                               | ((2U 
                                                   & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x1eU)) 
                                                  | (1U 
                                                     & (~ 
                                                        (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x1cU)))))));
    vlSelf->_mc___05Fs341 = (0U == (((IData)(vlSelf->_mc___05Fs343) 
                                     << 2U) | ((2U 
                                                & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                   >> 7U)) 
                                               | (1U 
                                                  & (~ 
                                                     (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x1fU))))));
    vlSelf->_mc___05Fs342 = (0U == (((IData)(vlSelf->_mc___05Fs343) 
                                     << 2U) | ((2U 
                                                & ((~ 
                                                    (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                     >> 8U)) 
                                                   << 1U)) 
                                               | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x1fU))));
    vlSelf->_mc___05Fs339 = (0U == (((IData)(vlSelf->_mc___05Fs343) 
                                     << 3U) | ((4U 
                                                & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                   >> 6U)) 
                                               | ((2U 
                                                   & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x1eU)) 
                                                  | (1U 
                                                     & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x1cU))))));
    vlSelf->_cp___05Fs4975 = vlSelf->_cp___05Fs4964;
    vlSelf->_cp___05Fs4990 = vlSelf->_cp___05Fs4964;
    vlSelf->_cp___05Fs5005 = vlSelf->_cp___05Fs4964;
    vlSelf->_cp___05Fs5014 = vlSelf->_cp___05Fs4964;
    vlSelf->_cp___05Fs5023 = vlSelf->_cp___05Fs4964;
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT____VdfgTmp_h64ff008c__0 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN_10) 
           & (0U != vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN_11));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dFirst_size 
        = (((IData)((0U != (7U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___GEN_0) 
                                  >> 3U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___GEN_1) 
                                     >> 1U)))) << 1U) 
              | (IData)((0U != (5U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___GEN_1))))));
    vlSelf->_cp___05Fs11197 = vlSelf->_cp___05Fs11190;
    vlSelf->_cp___05Fs11196 = vlSelf->_cp___05Fs11189;
    vlSelf->_cp___05Fs11198 = vlSelf->_cp___05Fs11191;
    vlSelf->_cp___05Fs11199 = vlSelf->_cp___05Fs11192;
    vlSelf->_cp___05Fs11195 = vlSelf->_cp___05Fs11188;
    vlSelf->_cp___05Fs11201 = vlSelf->_cp___05Fs11194;
    vlSelf->_cp___05Fs11200 = vlSelf->_cp___05Fs11193;
    vlSelf->_mc___05Fs3482 = (1U & ((~ ((IData)(vlSelf->_cp___05Fs11188) 
                                        | ((IData)(vlSelf->_cp___05Fs11189) 
                                           | ((IData)(vlSelf->_cp___05Fs11190) 
                                              | ((IData)(vlSelf->_cp___05Fs11191) 
                                                 | ((IData)(vlSelf->_cp___05Fs11192) 
                                                    | ((IData)(vlSelf->_cp___05Fs11193) 
                                                       | (IData)(vlSelf->_cp___05Fs11194)))))))) 
                                    | (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN_10)));
    vlSelf->_cp___05Fs5003 = vlSelf->_cp___05Fs11051;
    vlSelf->_cp___05Fs5012 = vlSelf->_cp___05Fs11060;
    vlSelf->_cp___05Fs5052 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_44)));
    vlSelf->_cp___05Fs5081 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_65)));
    vlSelf->_cp___05Fs11100 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_35)));
    vlSelf->_cp___05Fs11129 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_56)));
    vlSelf->_cp___05Fs4959 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__drop)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__full));
    vlSelf->_cp___05Fs4594 = vlSelf->_cp___05Fs4577;
    vlSelf->_cp___05Fs4872 = vlSelf->_cp___05Fs4855;
    vlSelf->_cp___05Fs5155 = vlSelf->_cp___05Fs5138;
    vlSelf->_cp___05Fs5433 = vlSelf->_cp___05Fs5416;
    vlSelf->_cp___05Fs4300 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_12)));
    vlSelf->_cp___05Fs13428 = vlSelf->_cp___05Fs13409;
    vlSelf->_cp___05Fs12888 = vlSelf->_cp___05Fs12869;
    vlSelf->_cp___05Fs10932 = vlSelf->_cp___05Fs10913;
    vlSelf->_cp___05Fs10645 = vlSelf->_cp___05Fs10626;
    vlSelf->_cp___05Fs13424 = vlSelf->_cp___05Fs13407;
    vlSelf->_cp___05Fs13585 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_21)));
    vlSelf->_cp___05Fs13426 = (1U & (~ (IData)(vlSelf->_cp___05Fs13441)));
    vlSelf->_cp___05Fs13454 = vlSelf->_cp___05Fs13441;
    vlSelf->_cp___05Fs13465 = vlSelf->_cp___05Fs13441;
    vlSelf->_cp___05Fs12884 = vlSelf->_cp___05Fs12867;
    vlSelf->_cp___05Fs12886 = (1U & (~ (IData)(vlSelf->_cp___05Fs12901)));
    vlSelf->_cp___05Fs12914 = vlSelf->_cp___05Fs12901;
    vlSelf->_cp___05Fs12925 = vlSelf->_cp___05Fs12901;
    vlSelf->_cp___05Fs10928 = vlSelf->_cp___05Fs10911;
    vlSelf->_cp___05Fs11089 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_29)));
    vlSelf->_cp___05Fs10930 = (1U & (~ (IData)(vlSelf->_cp___05Fs10945)));
    vlSelf->_cp___05Fs10958 = vlSelf->_cp___05Fs10945;
    vlSelf->_cp___05Fs10969 = vlSelf->_cp___05Fs10945;
    vlSelf->_cp___05Fs10641 = vlSelf->_cp___05Fs10624;
    vlSelf->_cp___05Fs10802 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_29)));
    vlSelf->_cp___05Fs10643 = (1U & (~ (IData)(vlSelf->_cp___05Fs10658)));
    vlSelf->_cp___05Fs10671 = vlSelf->_cp___05Fs10658;
    vlSelf->_cp___05Fs10682 = vlSelf->_cp___05Fs10658;
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_15 
        = (IData)(((0x4180U == (0x7fc0U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                   & ((0xdU > (0xfU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 6U))) & (
                                                   (0U 
                                                    == 
                                                    (0xffffU 
                                                     & ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                         << 5U) 
                                                        | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0x1bU)))) 
                                                   | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_12) 
                                                      | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT____VdfgTmp_h79ced34c__0))))));
    vlSelf->_cp___05Fs5638 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_51)));
    vlSelf->_cp___05Fs4522 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_71)));
    vlSelf->_cp___05Fs5077 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_63)));
    vlSelf->_cp___05Fs13446 = vlSelf->_mc___05Fs672;
    vlSelf->_cp___05Fs13457 = vlSelf->_mc___05Fs673;
    vlSelf->_cp___05Fs13468 = vlSelf->_mc___05Fs674;
    vlSelf->_cp___05Fs13479 = vlSelf->_mc___05Fs675;
    vlSelf->_cp___05Fs13431 = vlSelf->_mc___05Fs676;
    vlSelf->_cp___05Fs13490 = vlSelf->_mc___05Fs677;
    vlSelf->_cp___05Fs13621 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_43)));
    vlSelf->_cp___05Fs13583 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_20)));
    vlSelf->_cp___05Fs2936 = vlSelf->_cp___05Fs2919;
    vlSelf->_cp___05Fs2953 = vlSelf->_cp___05Fs2919;
    vlSelf->_cp___05Fs2966 = vlSelf->_cp___05Fs2919;
    vlSelf->_cp___05Fs2977 = vlSelf->_cp___05Fs2919;
    vlSelf->_cp___05Fs2988 = vlSelf->_cp___05Fs2919;
    vlSelf->_cp___05Fs2999 = vlSelf->_cp___05Fs2919;
    vlSelf->_cp___05Fs3010 = vlSelf->_cp___05Fs2919;
    vlSelf->_cp___05Fs3193 = vlSelf->_cp___05Fs2919;
    vlSelf->_cp___05Fs3210 = vlSelf->_cp___05Fs2919;
    vlSelf->_cp___05Fs3227 = vlSelf->_cp___05Fs2919;
    vlSelf->_cp___05Fs3240 = vlSelf->_cp___05Fs2919;
    vlSelf->_cp___05Fs3251 = vlSelf->_cp___05Fs2919;
    vlSelf->_cp___05Fs3262 = vlSelf->_cp___05Fs2919;
    vlSelf->_cp___05Fs3273 = vlSelf->_cp___05Fs2919;
    vlSelf->_cp___05Fs3284 = vlSelf->_cp___05Fs2919;
    vlSelf->_cp___05Fs4306 = vlSelf->_cp___05Fs2919;
    vlSelf->_cp___05Fs4323 = vlSelf->_cp___05Fs2919;
    vlSelf->_cp___05Fs4340 = vlSelf->_cp___05Fs2919;
    vlSelf->_cp___05Fs4353 = vlSelf->_cp___05Fs2919;
    vlSelf->_cp___05Fs4364 = vlSelf->_cp___05Fs2919;
    vlSelf->_cp___05Fs4375 = vlSelf->_cp___05Fs2919;
    vlSelf->_cp___05Fs4386 = vlSelf->_cp___05Fs2919;
    vlSelf->_cp___05Fs4397 = vlSelf->_cp___05Fs2919;
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_22 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_20) 
           | ((7U > (0xfU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 6U))) & ((0U == (0xffffU 
                                                 & ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                     << 5U) 
                                                    | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x1bU)))) 
                                         | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT____VdfgTmp_h79ced34c__0))));
    vlSelf->_cp___05Fs3214 = vlSelf->_cp___05Fs2940;
    vlSelf->_cp___05Fs4327 = vlSelf->_cp___05Fs2940;
    vlSelf->_cp___05Fs4604 = vlSelf->_cp___05Fs2940;
    vlSelf->_cp___05Fs4882 = vlSelf->_cp___05Fs2940;
    vlSelf->_cp___05Fs5165 = vlSelf->_cp___05Fs2940;
    vlSelf->_cp___05Fs5443 = vlSelf->_cp___05Fs2940;
    vlSelf->_cp___05Fs10950 = vlSelf->_mc___05Fs608;
    vlSelf->_cp___05Fs10961 = vlSelf->_mc___05Fs609;
    vlSelf->_cp___05Fs10972 = vlSelf->_mc___05Fs610;
    vlSelf->_cp___05Fs10983 = vlSelf->_mc___05Fs611;
    vlSelf->_cp___05Fs10994 = vlSelf->_mc___05Fs613;
    vlSelf->_cp___05Fs11087 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_28)));
    vlSelf->_cp___05Fs11125 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_54)));
    vlSelf->_mc___05Fs3445 = vlSelf->_mc___05Fs3441;
    vlSelf->_mc___05Fs615 = vlSelf->_mc___05Fs3441;
    vlSelf->_mc___05Fs612 = vlSelf->_mc___05Fs3480;
    vlSelf->_cp___05Fs10935 = vlSelf->_mc___05Fs3480;
    vlSelf->_cp___05Fs4600 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs4617 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs4630 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs4641 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs4652 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs4663 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs4674 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs4861 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs4878 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs4895 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs4908 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs4919 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs4930 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs4941 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs4952 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs5144 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs5161 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs5178 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs5191 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs5202 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs5213 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs5224 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs5235 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs5422 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs5439 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs5456 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs5469 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs5480 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs5491 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs5502 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs5513 = vlSelf->_cp___05Fs4583;
    vlSelf->_cp___05Fs10647 = vlSelf->_cp___05Fs10628;
    vlSelf->_cp___05Fs10662 = vlSelf->_cp___05Fs10628;
    vlSelf->_cp___05Fs10719 = vlSelf->_cp___05Fs10628;
    vlSelf->_cp___05Fs10934 = vlSelf->_cp___05Fs10915;
    vlSelf->_cp___05Fs10949 = vlSelf->_cp___05Fs10915;
    vlSelf->_cp___05Fs11006 = vlSelf->_cp___05Fs10915;
    vlSelf->_cp___05Fs12890 = vlSelf->_cp___05Fs12871;
    vlSelf->_cp___05Fs12905 = vlSelf->_cp___05Fs12871;
    vlSelf->_cp___05Fs12962 = vlSelf->_cp___05Fs12871;
    vlSelf->_cp___05Fs13430 = vlSelf->_cp___05Fs13411;
    vlSelf->_cp___05Fs13445 = vlSelf->_cp___05Fs13411;
    vlSelf->_cp___05Fs13502 = vlSelf->_cp___05Fs13411;
    vlSelf->_cp___05Fs4626 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_19)));
    vlSelf->_cp___05Fs4904 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_18)));
    vlSelf->_cp___05Fs5187 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_18)));
    vlSelf->_cp___05Fs2947 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_19)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_33 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_19) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_20));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_23 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_19) 
           & (IData)(((0x18000000U == (0x18000000U 
                                       & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                      & (4U > (0xfU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 6U))))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_19 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_19) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_11));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_29 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_19) 
           & ((4U > (0xfU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 6U))) & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_12)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_25 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_19) 
           & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_20) 
              | ((7U > (0xfU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                >> 6U))) & ((0U == 
                                             (0xffffU 
                                              & ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                  << 5U) 
                                                 | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x1bU)))) 
                                            | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT____VdfgTmp_h4ea4ca6f__0)))));
    vlSelf->_cp___05Fs2932 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs2951 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs2964 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs2975 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs2986 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs2997 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs3008 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs3189 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs3206 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs3225 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs3238 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs3249 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs3260 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs3271 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs3282 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs4302 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs4319 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs4338 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs4351 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs4362 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs4373 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs4384 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs4395 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs4579 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs4596 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs4611 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs4615 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs4628 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs4639 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs4650 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs4661 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs4672 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs4857 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs4874 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs4889 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs4893 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs4906 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs4917 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs4928 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs4939 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs4950 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs5140 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs5157 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs5172 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs5176 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs5189 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs5200 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs5211 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs5222 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs5233 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs5418 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs5435 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs5450 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs5454 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs5467 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs5478 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs5489 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs5500 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs5511 = vlSelf->_cp___05Fs2915;
    vlSelf->_cp___05Fs5619 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_37)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_53 
        = ((1U == ((0x17U >= (0x1fU & ((IData)(3U) 
                                       * (7U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_40[0U] 
                                                >> 1U)))))
                    ? (7U & (0x911240U >> (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_40[0U] 
                                                >> 1U))))))
                    : 0U)) | (1U == ((0x17U >= (0x1fU 
                                                & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_40[0U] 
                                                       >> 1U)))))
                                      ? (7U & (0x951240U 
                                               >> (0x1fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_40[0U] 
                                                          >> 1U))))))
                                      : 0U)));
    vlSelf->_cp___05Fs5525 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__source_ok_1)));
    vlSelf->_cp___05Fs5341 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_46)));
    vlSelf->_cp___05Fs5383 = (1U & (~ vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_72));
    vlSelf->_cp___05Fs5247 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__source_ok_1)));
    vlSelf->_cp___05Fs4780 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_47)));
    vlSelf->_cp___05Fs4822 = (1U & (~ vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_73));
    vlSelf->_cp___05Fs4686 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__source_ok_1)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc) 
           | (IData)(vlSelf->__VdfgTmp_h0c353422__0));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc) 
           | (IData)(vlSelf->__VdfgTmp_h0c353422__0));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc) 
           | (IData)(vlSelf->__VdfgTmp_h78e76b18__0));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc) 
           | (IData)(vlSelf->__VdfgTmp_h78e76b18__0));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_1) 
           | (IData)(vlSelf->__VdfgTmp_h1c6c13a1__0));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1) 
           | (IData)(vlSelf->__VdfgTmp_h1c6c13a1__0));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_1) 
           | (IData)(vlSelf->__VdfgTmp_h6eea96e2__0));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1) 
           | (IData)(vlSelf->__VdfgTmp_h6eea96e2__0));
    ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0 
        = ((IData)(vlSelf->_mc___05Fs614) | (3U == 
                                             (3U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_size))));
    vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_size 
        = ((IData)(vlSelf->_mc___05Fs614) ? 3U : (3U 
                                                  & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_size)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
            >> 2U) & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFragnum)));
    vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_source 
        = ((0x1f0U & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
                        ? (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_source)
                        : ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            << 0x16U) | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xaU))) 
                      << 4U)) | ((8U & ((~ ((IData)(vlSelf->_mc___05Fs616)
                                             ? (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dToggle)
                                             : (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aToggle_r))) 
                                        << 3U)) | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFragnum)));
    vlSelf->__VdfgTmp_h96c6a3a1__0 = (0x3fU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                               | (0x38U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFragnum) 
                                                       | (0x3ffU 
                                                          & (((IData)(0x3fU) 
                                                              << (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                             >> 3U)))) 
                                                     << 3U))));
    vlSelf->_cp___05Fs13647 = ((IData)(vlSelf->_mc___05Fs678) 
                               | (0U != (3U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_size))));
    ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0 
        = ((IData)(vlSelf->_mc___05Fs678) | (3U == 
                                             (3U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_size))));
    vlSelf->ExampleRocketSystem__DOT___bootrom_domain_auto_bootrom_in_d_bits_size 
        = ((IData)(vlSelf->_mc___05Fs678) ? 3U : (3U 
                                                  & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_size)));
    vlSelf->ExampleRocketSystem__DOT___bootrom_domain_auto_bootrom_in_d_bits_source 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
            << 4U) | ((8U & ((~ ((IData)(vlSelf->_mc___05Fs679)
                                  ? (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dToggle)
                                  : (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__aToggle_r))) 
                             << 3U)) | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0)));
    vlSelf->__VdfgTmp_h19671478__0 = (0x3fU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                               | (0x38U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0) 
                                                       | (0x3ffU 
                                                          & (((IData)(0x3fU) 
                                                              << (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                             >> 3U)))) 
                                                     << 3U))));
    vlSelf->_cp___05Fs10663 = vlSelf->_mc___05Fs573;
    vlSelf->_cp___05Fs10674 = vlSelf->_mc___05Fs574;
    vlSelf->_cp___05Fs10685 = vlSelf->_mc___05Fs575;
    vlSelf->_cp___05Fs10696 = vlSelf->_mc___05Fs576;
    vlSelf->_cp___05Fs10707 = vlSelf->_mc___05Fs578;
    vlSelf->_cp___05Fs10800 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_28)));
    vlSelf->_mc___05Fs3409 = vlSelf->_mc___05Fs3405;
    vlSelf->_mc___05Fs580 = vlSelf->_mc___05Fs3405;
    vlSelf->_mc___05Fs3411 = vlSelf->_mc___05Fs3407;
    vlSelf->_mc___05Fs3414 = vlSelf->_mc___05Fs3407;
    vlSelf->_mc___05Fs3436 = vlSelf->_mc___05Fs3407;
    vlSelf->_mc___05Fs3440 = vlSelf->_mc___05Fs3407;
    vlSelf->_mc___05Fs376 = vlSelf->_mc___05Fs3407;
    vlSelf->_mc___05Fs560 = vlSelf->_mc___05Fs3407;
    vlSelf->_mc___05Fs564 = vlSelf->_mc___05Fs3407;
    vlSelf->_mc___05Fs568 = vlSelf->_mc___05Fs3407;
    vlSelf->_mc___05Fs571 = vlSelf->_mc___05Fs3407;
    vlSelf->_mc___05Fs577 = vlSelf->_mc___05Fs3407;
    vlSelf->_cp___05Fs10648 = vlSelf->_mc___05Fs3407;
    vlSelf->_cp___05Fs10764 = (1U & (~ (IData)(vlSelf->_mc___05Fs3407)));
    vlSelf->_cp___05Fs10773 = vlSelf->_mc___05Fs3407;
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_45 
        = ((IData)(vlSelf->_mc___05Fs3407) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__opcode_1));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_64 
        = (((IData)(vlSelf->_mc___05Fs3407) == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_50[0U] 
                                                         >> 1U)))))
                                                 ? 
                                                (7U 
                                                 & (0x911240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * 
                                                        (7U 
                                                         & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_50[0U] 
                                                            >> 1U))))))
                                                 : 0U)) 
           | ((IData)(vlSelf->_mc___05Fs3407) == ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_50[0U] 
                                                           >> 1U)))))
                                                   ? 
                                                  (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_50[0U] 
                                                              >> 1U))))))
                                                   : 0U)));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_35 
        = ((IData)(vlSelf->_mc___05Fs3407) == (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__opcode_1));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_52 
        = (((IData)(vlSelf->_mc___05Fs3407) == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))))
                                                 ? 
                                                (7U 
                                                 & (0x911240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode)))))
                                                 : 0U)) 
           | ((IData)(vlSelf->_mc___05Fs3407) == ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))))
                                                   ? 
                                                  (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode)))))
                                                   : 0U)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_62 
        = (((IData)(vlSelf->_mc___05Fs3407) == (IData)(vlSelf->__VdfgTmp_h001e9a75__0)) 
           | ((IData)(vlSelf->_mc___05Fs3407) == (IData)(vlSelf->__VdfgTmp_hff05a675__0)));
    vlSelf->_cp___05Fs12906 = vlSelf->_mc___05Fs643;
    vlSelf->_cp___05Fs12917 = vlSelf->_mc___05Fs644;
    vlSelf->_cp___05Fs12928 = vlSelf->_mc___05Fs645;
    vlSelf->_cp___05Fs12939 = vlSelf->_mc___05Fs646;
    vlSelf->_cp___05Fs12950 = vlSelf->_mc___05Fs648;
    vlSelf->_mc___05Fs3619 = vlSelf->_mc___05Fs3615;
    vlSelf->_mc___05Fs650 = vlSelf->_mc___05Fs3615;
    vlSelf->_mc___05Fs3621 = vlSelf->_mc___05Fs3617;
    vlSelf->_mc___05Fs3624 = vlSelf->_mc___05Fs3617;
    vlSelf->_mc___05Fs3667 = vlSelf->_mc___05Fs3617;
    vlSelf->_mc___05Fs3671 = vlSelf->_mc___05Fs3617;
    vlSelf->_mc___05Fs378 = vlSelf->_mc___05Fs3617;
    vlSelf->_mc___05Fs630 = vlSelf->_mc___05Fs3617;
    vlSelf->_mc___05Fs634 = vlSelf->_mc___05Fs3617;
    vlSelf->_mc___05Fs638 = vlSelf->_mc___05Fs3617;
    vlSelf->_mc___05Fs641 = vlSelf->_mc___05Fs3617;
    vlSelf->_mc___05Fs647 = vlSelf->_mc___05Fs3617;
    vlSelf->_cp___05Fs12891 = vlSelf->_mc___05Fs3617;
    vlSelf->_cp___05Fs13007 = (1U & (~ (IData)(vlSelf->_mc___05Fs3617)));
    vlSelf->_cp___05Fs13016 = vlSelf->_mc___05Fs3617;
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_44 
        = ((IData)(vlSelf->_mc___05Fs3617) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__opcode_1));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_63 
        = (((IData)(vlSelf->_mc___05Fs3617) == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_49[0U] 
                                                         >> 1U)))))
                                                 ? 
                                                (7U 
                                                 & (0x911240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * 
                                                        (7U 
                                                         & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_49[0U] 
                                                            >> 1U))))))
                                                 : 0U)) 
           | ((IData)(vlSelf->_mc___05Fs3617) == ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_49[0U] 
                                                           >> 1U)))))
                                                   ? 
                                                  (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_49[0U] 
                                                              >> 1U))))))
                                                   : 0U)));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_50 
        = (((IData)(vlSelf->_mc___05Fs3617) == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))))
                                                 ? 
                                                (7U 
                                                 & (0x911240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode)))))
                                                 : 0U)) 
           | ((IData)(vlSelf->_mc___05Fs3617) == ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))))
                                                   ? 
                                                  (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode)))))
                                                   : 0U)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_61 
        = (((IData)(vlSelf->_mc___05Fs3617) == (IData)(vlSelf->__VdfgTmp_h001e9a75__0)) 
           | ((IData)(vlSelf->_mc___05Fs3617) == (IData)(vlSelf->__VdfgTmp_hff05a675__0)));
    vlSelf->_cp___05Fs10864 = ((IData)(vlSelf->_mc___05Fs579) 
                               | (0U != (3U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_size))));
    ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0 
        = ((IData)(vlSelf->_mc___05Fs579) | (3U == 
                                             (3U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_size))));
    vlSelf->ExampleRocketSystem__DOT___clint_domain_auto_clint_in_d_bits_size 
        = ((IData)(vlSelf->_mc___05Fs579) ? 3U : (3U 
                                                  & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_size)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
            >> 2U) & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0)));
    vlSelf->ExampleRocketSystem__DOT___clint_domain_auto_clint_in_d_bits_source 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
            << 4U) | ((8U & ((~ ((IData)(vlSelf->_mc___05Fs581)
                                  ? (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dToggle)
                                  : (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__aToggle_r))) 
                             << 3U)) | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0)));
    vlSelf->__VdfgTmp_hcb83c8d4__0 = (0x3fU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                               | (0x38U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0) 
                                                       | (0x3ffU 
                                                          & (((IData)(0x3fU) 
                                                              << (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                             >> 3U)))) 
                                                     << 3U))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__drop 
        = ((~ (IData)(vlSelf->_mc___05Fs3407)) & (0U 
                                                  != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0)));
    vlSelf->_cp___05Fs13107 = ((IData)(vlSelf->_mc___05Fs649) 
                               | (0U != (3U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_size))));
    ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT____VdfgTmp_hd3fe7d91__0 
        = ((IData)(vlSelf->_mc___05Fs649) | (3U == 
                                             (3U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_size))));
    vlSelf->ExampleRocketSystem__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size 
        = ((IData)(vlSelf->_mc___05Fs649) ? 3U : (3U 
                                                  & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_size)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
            >> 2U) & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0)));
    vlSelf->ExampleRocketSystem__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_source 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
            << 4U) | ((8U & ((~ ((IData)(vlSelf->_mc___05Fs651)
                                  ? (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dToggle)
                                  : (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aToggle_r))) 
                             << 3U)) | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0)));
    vlSelf->__VdfgTmp_h877be8cd__0 = (0x3fU & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                               | (0x38U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0) 
                                                       | (0x3ffU 
                                                          & (((IData)(0x3fU) 
                                                              << (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                             >> 3U)))) 
                                                     << 3U))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__drop 
        = ((~ (IData)(vlSelf->_mc___05Fs3617)) & (0U 
                                                  != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0)));
    vlSelf->_mc___05Fs379 = vlSelf->_mc___05Fs340;
    vlSelf->_mc___05Fs383 = vlSelf->_mc___05Fs341;
    vlSelf->_mc___05Fs380 = vlSelf->_mc___05Fs342;
    vlSelf->_mc___05Fs382 = vlSelf->_mc___05Fs339;
    ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT___GEN_3 
        = ((((IData)(vlSelf->_mc___05Fs339) << 2U) 
            | (IData)(vlSelf->_mc___05Fs340)) | ((IData)(vlSelf->_mc___05Fs341)
                                                  ? 5U
                                                  : 0U));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__anonIn_d_bits_size 
        = ((IData)(vlSelf->_mc___05Fs607) ? (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dFirst_size)
            : (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dOrig));
    vlSelf->_cp___05Fs5050 = ((IData)(vlSelf->_cp___05Fs4959) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter)));
    vlSelf->_cp___05Fs5070 = ((IData)(vlSelf->_cp___05Fs4959) 
                              & (IData)(vlSelf->_mc___05Fs600));
    vlSelf->_cp___05Fs4317 = vlSelf->_cp___05Fs4300;
    vlSelf->_cp___05Fs2913 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_15)));
    vlSelf->_cp___05Fs2949 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_22)));
    vlSelf->_cp___05Fs4637 = vlSelf->_cp___05Fs4626;
    vlSelf->_cp___05Fs4915 = vlSelf->_cp___05Fs4904;
    vlSelf->_cp___05Fs5198 = vlSelf->_cp___05Fs5187;
    vlSelf->_cp___05Fs3221 = vlSelf->_cp___05Fs2947;
    vlSelf->_cp___05Fs4334 = vlSelf->_cp___05Fs2947;
    vlSelf->_cp___05Fs3006 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_33)));
    vlSelf->_cp___05Fs4371 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_23)));
    vlSelf->_cp___05Fs4349 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_19)));
    vlSelf->_cp___05Fs2984 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_29)));
    vlSelf->_cp___05Fs2962 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_25)));
    vlSelf->_cp___05Fs5642 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_53)));
    vlSelf->_cp___05Fs5536 = vlSelf->_cp___05Fs5525;
    vlSelf->_cp___05Fs5551 = vlSelf->_cp___05Fs5525;
    vlSelf->_cp___05Fs5566 = vlSelf->_cp___05Fs5525;
    vlSelf->_cp___05Fs5575 = vlSelf->_cp___05Fs5525;
    vlSelf->_cp___05Fs5584 = vlSelf->_cp___05Fs5525;
    vlSelf->_cp___05Fs5258 = vlSelf->_cp___05Fs5247;
    vlSelf->_cp___05Fs5273 = vlSelf->_cp___05Fs5247;
    vlSelf->_cp___05Fs5288 = vlSelf->_cp___05Fs5247;
    vlSelf->_cp___05Fs5297 = vlSelf->_cp___05Fs5247;
    vlSelf->_cp___05Fs5306 = vlSelf->_cp___05Fs5247;
    vlSelf->_cp___05Fs4697 = vlSelf->_cp___05Fs4686;
    vlSelf->_cp___05Fs4712 = vlSelf->_cp___05Fs4686;
    vlSelf->_cp___05Fs4727 = vlSelf->_cp___05Fs4686;
    vlSelf->_cp___05Fs4736 = vlSelf->_cp___05Fs4686;
    vlSelf->_cp___05Fs4745 = vlSelf->_cp___05Fs4686;
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_5) 
             | (IData)(vlSelf->__VdfgTmp_h9181dae4__0)) 
            << 7U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_5) 
                        | (IData)(vlSelf->__VdfgTmp_hfd16ea19__0)) 
                       << 6U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_4) 
                                   | (IData)(vlSelf->__VdfgTmp_hff0142f7__0)) 
                                  << 5U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_4) 
                                              | (IData)(vlSelf->__VdfgTmp_hac9964de__0)) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_3) 
                                                 | (IData)(vlSelf->__VdfgTmp_h1f299c44__0)) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_3) 
                                                    | (IData)(vlSelf->__VdfgTmp_h1722ef27__0)) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_2) 
                                                       | (IData)(vlSelf->__VdfgTmp_haa4ef414__0)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_2) 
                                                        | (IData)(vlSelf->__VdfgTmp_h9cd04859__0)))))))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
             | (IData)(vlSelf->__VdfgTmp_h9181dae4__0)) 
            << 7U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                        | (IData)(vlSelf->__VdfgTmp_hfd16ea19__0)) 
                       << 6U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                   | (IData)(vlSelf->__VdfgTmp_hff0142f7__0)) 
                                  << 5U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                              | (IData)(vlSelf->__VdfgTmp_hac9964de__0)) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                 | (IData)(vlSelf->__VdfgTmp_h1f299c44__0)) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                    | (IData)(vlSelf->__VdfgTmp_h1722ef27__0)) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                       | (IData)(vlSelf->__VdfgTmp_haa4ef414__0)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                        | (IData)(vlSelf->__VdfgTmp_h9cd04859__0)))))))));
    vlSelf->_cp___05Fs10907 = (1U & (~ (IData)(ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0)));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_30 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__size));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_55 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_size) 
           == (3U & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                     >> 9U)));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_31 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_source) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__source));
    VL_SHIFTR_WWI(304,304,9, __Vtemp_156, vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__inflight, (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_source));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_45[0U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[0U] 
           & __Vtemp_156[0U]);
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_45[1U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[1U] 
           & __Vtemp_156[1U]);
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_45[2U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[2U] 
           & __Vtemp_156[2U]);
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_45[3U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[3U] 
           & __Vtemp_156[3U]);
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_45[4U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[4U] 
           & __Vtemp_156[4U]);
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_45[5U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[5U] 
           & __Vtemp_156[5U]);
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_45[6U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[6U] 
           & __Vtemp_156[6U]);
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_45[7U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[7U] 
           & __Vtemp_156[7U]);
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_45[8U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[8U] 
           & __Vtemp_156[8U]);
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_45[9U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[9U] 
           & __Vtemp_156[9U]);
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_11 
        = ((~ (IData)(vlSelf->_cp___05Fs10939)) & (0x130U 
                                                   > (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_source)));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_50 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_source) 
           == (0x1ffU & vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U]));
    vlSelf->_cp___05Fs10905 = (0x130U <= (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_source));
    vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_address 
        = ((0xfffffc0U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
           | (IData)(vlSelf->__VdfgTmp_h96c6a3a1__0));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_3 
        = (7U & ((~ ((IData)(7U) << (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_size))) 
                 & (IData)(vlSelf->__VdfgTmp_h96c6a3a1__0)));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & (IData)(vlSelf->__VdfgTmp_h96c6a3a1__0))));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & (IData)(vlSelf->__VdfgTmp_h96c6a3a1__0))));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & (IData)(vlSelf->__VdfgTmp_h96c6a3a1__0))));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & (IData)(vlSelf->__VdfgTmp_h96c6a3a1__0))));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc 
        = ((IData)(ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
           | ((~ ((IData)(vlSelf->__VdfgTmp_h96c6a3a1__0) 
                  >> 2U)) & (2U == (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_size))));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_1 
        = ((IData)(ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
           | ((2U == (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_size)) 
              & ((IData)(vlSelf->__VdfgTmp_h96c6a3a1__0) 
                 >> 2U)));
    vlSelf->_cp___05Fs13403 = (1U & (~ (IData)(ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0)));
    vlSelf->_cp___05Fs13649 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT___bootrom_domain_auto_bootrom_in_d_bits_size));
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_22 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___bootrom_domain_auto_bootrom_in_d_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__size));
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_28 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___bootrom_domain_auto_bootrom_in_d_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__size_1));
    vlSelf->_cp___05Fs13510 = (3U != (IData)(vlSelf->ExampleRocketSystem__DOT___bootrom_domain_auto_bootrom_in_d_bits_size));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___GEN_0 
        = ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0) 
             << 3U) | (7U & (~ ((IData)(7U) << (IData)(vlSelf->ExampleRocketSystem__DOT___bootrom_domain_auto_bootrom_in_d_bits_size))))) 
           & (0x20U | ((0x1cU & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0)) 
                                 << 2U)) | (3U & (((IData)(7U) 
                                                   << (IData)(vlSelf->ExampleRocketSystem__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                  >> 1U)))));
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_23 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___bootrom_domain_auto_bootrom_in_d_bits_source) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__source));
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_29 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___bootrom_domain_auto_bootrom_in_d_bits_source) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__source_1));
    VL_SHIFTR_WWI(1216,1216,11, __Vtemp_157, vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT___bootrom_domain_auto_bootrom_in_d_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_47 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___bootrom_domain_auto_bootrom_in_d_bits_size) 
           == (7U & (__Vtemp_157[0U] >> 1U)));
    VL_SHIFTR_WWI(1216,1216,11, ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_32, vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT___bootrom_domain_auto_bootrom_in_d_bits_source) 
                   << 2U));
    VL_SHIFTR_WWI(304,304,9, __Vtemp_158, vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__inflight, (IData)(vlSelf->ExampleRocketSystem__DOT___bootrom_domain_auto_bootrom_in_d_bits_source));
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_36[0U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[0U] 
           & __Vtemp_158[0U]);
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_36[1U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[1U] 
           & __Vtemp_158[1U]);
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_36[2U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[2U] 
           & __Vtemp_158[2U]);
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_36[3U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[3U] 
           & __Vtemp_158[3U]);
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_36[4U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[4U] 
           & __Vtemp_158[4U]);
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_36[5U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[5U] 
           & __Vtemp_158[5U]);
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_36[6U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[6U] 
           & __Vtemp_158[6U]);
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_36[7U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[7U] 
           & __Vtemp_158[7U]);
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_36[8U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[8U] 
           & __Vtemp_158[8U]);
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_36[9U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[9U] 
           & __Vtemp_158[9U]);
    vlSelf->_cp___05Fs13401 = (0x130U <= (IData)(vlSelf->ExampleRocketSystem__DOT___bootrom_domain_auto_bootrom_in_d_bits_source));
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_3 
        = (7U & ((~ ((IData)(7U) << (IData)(vlSelf->ExampleRocketSystem__DOT___bootrom_domain_auto_bootrom_in_d_bits_size))) 
                 & (IData)(vlSelf->__VdfgTmp_h19671478__0)));
    vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_address 
        = ((0x1ffc0U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
           | (IData)(vlSelf->__VdfgTmp_h19671478__0));
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & (IData)(vlSelf->__VdfgTmp_h19671478__0))));
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & (IData)(vlSelf->__VdfgTmp_h19671478__0))));
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & (IData)(vlSelf->__VdfgTmp_h19671478__0))));
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & (IData)(vlSelf->__VdfgTmp_h19671478__0))));
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc 
        = ((IData)(ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
           | ((~ ((IData)(vlSelf->__VdfgTmp_h19671478__0) 
                  >> 2U)) & (2U == (IData)(vlSelf->ExampleRocketSystem__DOT___bootrom_domain_auto_bootrom_in_d_bits_size))));
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_1 
        = ((IData)(ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
           | ((2U == (IData)(vlSelf->ExampleRocketSystem__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
              & ((IData)(vlSelf->__VdfgTmp_h19671478__0) 
                 >> 2U)));
    vlSelf->_cp___05Fs4725 = vlSelf->_cp___05Fs10764;
    vlSelf->_cp___05Fs4734 = vlSelf->_cp___05Fs10773;
    vlSelf->_cp___05Fs4774 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_45)));
    vlSelf->_cp___05Fs4803 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_64)));
    vlSelf->_cp___05Fs10813 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_35)));
    vlSelf->_cp___05Fs10838 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_52)));
    vlSelf->_cp___05Fs4799 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_62)));
    vlSelf->_cp___05Fs5286 = vlSelf->_cp___05Fs13007;
    vlSelf->_cp___05Fs5295 = vlSelf->_cp___05Fs13016;
    vlSelf->_cp___05Fs5335 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_44)));
    vlSelf->_cp___05Fs5364 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_63)));
    vlSelf->_cp___05Fs13081 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_50)));
    vlSelf->_cp___05Fs5360 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_61)));
    vlSelf->_cp___05Fs10620 = (1U & (~ (IData)(ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0)));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_30 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___clint_domain_auto_clint_in_d_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__size));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_36 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___clint_domain_auto_clint_in_d_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__size_1));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___GEN_0 
        = ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0) 
             << 3U) | (7U & (~ ((IData)(7U) << (IData)(vlSelf->ExampleRocketSystem__DOT___clint_domain_auto_clint_in_d_bits_size))))) 
           & (0x20U | ((0x1cU & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0)) 
                                 << 2U)) | (3U & (((IData)(7U) 
                                                   << (IData)(vlSelf->ExampleRocketSystem__DOT___clint_domain_auto_clint_in_d_bits_size)) 
                                                  >> 1U)))));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_31 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___clint_domain_auto_clint_in_d_bits_source) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__source));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_37 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___clint_domain_auto_clint_in_d_bits_source) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__source_1));
    VL_SHIFTR_WWI(304,304,9, __Vtemp_159, vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__inflight_1, (IData)(vlSelf->ExampleRocketSystem__DOT___clint_domain_auto_clint_in_d_bits_source));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_64[0U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[0U] 
           & __Vtemp_159[0U]);
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_64[1U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[1U] 
           & __Vtemp_159[1U]);
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_64[2U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[2U] 
           & __Vtemp_159[2U]);
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_64[3U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[3U] 
           & __Vtemp_159[3U]);
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_64[4U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[4U] 
           & __Vtemp_159[4U]);
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_64[5U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[5U] 
           & __Vtemp_159[5U]);
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_64[6U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[6U] 
           & __Vtemp_159[6U]);
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_64[7U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[7U] 
           & __Vtemp_159[7U]);
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_64[8U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[8U] 
           & __Vtemp_159[8U]);
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_64[9U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[9U] 
           & __Vtemp_159[9U]);
    VL_SHIFTR_WWI(1216,1216,11, __Vtemp_160, vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT___clint_domain_auto_clint_in_d_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_56 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___clint_domain_auto_clint_in_d_bits_size) 
           == (7U & (__Vtemp_160[0U] >> 1U)));
    VL_SHIFTR_WWI(1216,1216,11, __Vtemp_161, vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT___clint_domain_auto_clint_in_d_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_65 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___clint_domain_auto_clint_in_d_bits_size) 
           == (7U & (__Vtemp_161[0U] >> 1U)));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_11 
        = ((~ (IData)(vlSelf->_cp___05Fs10652)) & (0x130U 
                                                   > (IData)(vlSelf->ExampleRocketSystem__DOT___clint_domain_auto_clint_in_d_bits_source)));
    VL_SHIFTR_WWI(1216,1216,11, ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_40, vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT___clint_domain_auto_clint_in_d_bits_source) 
                   << 2U));
    VL_SHIFTR_WWI(304,304,9, __Vtemp_162, vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__inflight, (IData)(vlSelf->ExampleRocketSystem__DOT___clint_domain_auto_clint_in_d_bits_source));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_44[0U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[0U] 
           & __Vtemp_162[0U]);
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_44[1U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[1U] 
           & __Vtemp_162[1U]);
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_44[2U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[2U] 
           & __Vtemp_162[2U]);
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_44[3U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[3U] 
           & __Vtemp_162[3U]);
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_44[4U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[4U] 
           & __Vtemp_162[4U]);
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_44[5U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[5U] 
           & __Vtemp_162[5U]);
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_44[6U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[6U] 
           & __Vtemp_162[6U]);
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_44[7U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[7U] 
           & __Vtemp_162[7U]);
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_44[8U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[8U] 
           & __Vtemp_162[8U]);
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_44[9U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[9U] 
           & __Vtemp_162[9U]);
    vlSelf->_cp___05Fs10618 = (0x130U <= (IData)(vlSelf->ExampleRocketSystem__DOT___clint_domain_auto_clint_in_d_bits_source));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_3 
        = (7U & ((~ ((IData)(7U) << (IData)(vlSelf->ExampleRocketSystem__DOT___clint_domain_auto_clint_in_d_bits_size))) 
                 & (IData)(vlSelf->__VdfgTmp_hcb83c8d4__0)));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & (IData)(vlSelf->__VdfgTmp_hcb83c8d4__0))));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & (IData)(vlSelf->__VdfgTmp_hcb83c8d4__0))));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & (IData)(vlSelf->__VdfgTmp_hcb83c8d4__0))));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & (IData)(vlSelf->__VdfgTmp_hcb83c8d4__0))));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc 
        = ((IData)(ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
           | ((~ ((IData)(vlSelf->__VdfgTmp_hcb83c8d4__0) 
                  >> 2U)) & (2U == (IData)(vlSelf->ExampleRocketSystem__DOT___clint_domain_auto_clint_in_d_bits_size))));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_1 
        = ((IData)(ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
           | ((2U == (IData)(vlSelf->ExampleRocketSystem__DOT___clint_domain_auto_clint_in_d_bits_size)) 
              & ((IData)(vlSelf->__VdfgTmp_hcb83c8d4__0) 
                 >> 2U)));
    vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_address 
        = ((0x3ffffc0U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
           | (IData)(vlSelf->__VdfgTmp_hcb83c8d4__0));
    vlSelf->_cp___05Fs12863 = (1U & (~ (IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT____VdfgTmp_hd3fe7d91__0)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___GEN_0 
        = ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0) 
             << 3U) | (7U & (~ ((IData)(7U) << (IData)(vlSelf->ExampleRocketSystem__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size))))) 
           & (0x20U | ((0x1cU & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0)) 
                                 << 2U)) | (3U & (((IData)(7U) 
                                                   << (IData)(vlSelf->ExampleRocketSystem__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
                                                  >> 1U)))));
    vlSelf->_cp___05Fs12861 = (0x130U <= (IData)(vlSelf->ExampleRocketSystem__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_source));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_3 
        = (7U & ((~ ((IData)(7U) << (IData)(vlSelf->ExampleRocketSystem__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size))) 
                 & (IData)(vlSelf->__VdfgTmp_h877be8cd__0)));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_2 
        = (IData)((0U == (6U & (IData)(vlSelf->__VdfgTmp_h877be8cd__0))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_3 
        = (IData)((2U == (6U & (IData)(vlSelf->__VdfgTmp_h877be8cd__0))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_4 
        = (IData)((4U == (6U & (IData)(vlSelf->__VdfgTmp_h877be8cd__0))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_5 
        = (IData)((6U == (6U & (IData)(vlSelf->__VdfgTmp_h877be8cd__0))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT____VdfgTmp_hd3fe7d91__0) 
           | ((~ ((IData)(vlSelf->__VdfgTmp_h877be8cd__0) 
                  >> 2U)) & (2U == (IData)(vlSelf->ExampleRocketSystem__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_1 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT____VdfgTmp_hd3fe7d91__0) 
           | ((2U == (IData)(vlSelf->ExampleRocketSystem__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
              & ((IData)(vlSelf->__VdfgTmp_h877be8cd__0) 
                 >> 2U)));
    vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address 
        = ((0xfc0U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address)) 
           | (IData)(vlSelf->__VdfgTmp_h877be8cd__0));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__a_id 
        = ((4U & (IData)(ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT___GEN_3)) 
           | (3U & ((IData)(ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT___GEN_3) 
                    | (((IData)(vlSelf->_mc___05Fs342) 
                        << 1U) | (- (IData)((IData)(vlSelf->_mc___05Fs343)))))));
    vlSelf->_cp___05Fs5105 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__anonIn_d_bits_size));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_45 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__anonIn_d_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__size_1));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_64 
        = ((7U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 6U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__anonIn_d_bits_size));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_164, vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes, 
                  (0x7cU & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                            >> 2U)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_66 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__anonIn_d_bits_size) 
           == (7U & (__Vtemp_164[0U] >> 1U)));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_167, vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1, 
                  (0x7cU & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                            >> 2U)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_76 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__anonIn_d_bits_size) 
           == (7U & (__Vtemp_167[0U] >> 1U)));
    vlSelf->_cp___05Fs4966 = (2U >= (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__anonIn_d_bits_size));
    vlSelf->_cp___05Fs5072 = vlSelf->_cp___05Fs5070;
    vlSelf->_cp___05Fs2930 = vlSelf->_cp___05Fs2913;
    vlSelf->_cp___05Fs3187 = vlSelf->_cp___05Fs2913;
    vlSelf->_cp___05Fs3204 = vlSelf->_cp___05Fs2913;
    vlSelf->_cp___05Fs3223 = vlSelf->_cp___05Fs2949;
    vlSelf->_cp___05Fs3280 = vlSelf->_cp___05Fs3006;
    vlSelf->_cp___05Fs4382 = vlSelf->_cp___05Fs4371;
    vlSelf->_cp___05Fs4360 = vlSelf->_cp___05Fs4349;
    vlSelf->_cp___05Fs4393 = vlSelf->_cp___05Fs4349;
    vlSelf->_cp___05Fs2995 = vlSelf->_cp___05Fs2984;
    vlSelf->_cp___05Fs3258 = vlSelf->_cp___05Fs2984;
    vlSelf->_cp___05Fs3269 = vlSelf->_cp___05Fs2984;
    vlSelf->_cp___05Fs2973 = vlSelf->_cp___05Fs2962;
    vlSelf->_cp___05Fs3236 = vlSelf->_cp___05Fs2962;
    vlSelf->_cp___05Fs3247 = vlSelf->_cp___05Fs2962;
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_27 
        = (0xffU & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask)) 
                    & ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                        << 0x15U) | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                     >> 0xbU))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_23 
        = ((0xffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                     >> 0xbU)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_21 
        = (0xffU & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask)) 
                    & ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                        << 0x15U) | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                     >> 0xbU))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_17 
        = ((0xffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                     >> 0xbU)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask));
    vlSelf->_cp___05Fs10924 = vlSelf->_cp___05Fs10907;
    vlSelf->_cp___05Fs11091 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_30)));
    vlSelf->_cp___05Fs11127 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_55)));
    vlSelf->_cp___05Fs11093 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_31)));
    vlSelf->_cp___05Fs11117 = (1U & vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_45[0U]);
    vlSelf->_cp___05Fs10952 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_11)));
    vlSelf->_cp___05Fs10922 = vlSelf->_cp___05Fs10905;
    vlSelf->_cp___05Fs10937 = vlSelf->_cp___05Fs10905;
    vlSelf->_cp___05Fs10941 = vlSelf->_cp___05Fs10905;
    vlSelf->_cp___05Fs10954 = vlSelf->_cp___05Fs10905;
    vlSelf->_cp___05Fs10965 = vlSelf->_cp___05Fs10905;
    vlSelf->_cp___05Fs10976 = vlSelf->_cp___05Fs10905;
    vlSelf->_cp___05Fs10987 = vlSelf->_cp___05Fs10905;
    vlSelf->_cp___05Fs10998 = vlSelf->_cp___05Fs10905;
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_32 
        = (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__address 
           == vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_address);
    vlSelf->_cp___05Fs10909 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_3));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc) 
           | ((1U == (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_size)) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_2)));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc) 
           | ((1U == (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_size)) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_3)));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_size)) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_4)));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_size)) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_5)));
    vlSelf->_cp___05Fs13420 = vlSelf->_cp___05Fs13403;
    vlSelf->_cp___05Fs13587 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_22)));
    vlSelf->_cp___05Fs13600 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_28)));
    vlSelf->_cp___05Fs13523 = vlSelf->_cp___05Fs13510;
    vlSelf->_cp___05Fs13538 = vlSelf->_cp___05Fs13510;
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___GEN_1 
        = (7U & ((3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___GEN_0) 
                        >> 4U)) | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___GEN_0)));
    vlSelf->_cp___05Fs13589 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_23)));
    vlSelf->_cp___05Fs13602 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_29)));
    vlSelf->_cp___05Fs13627 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_47)));
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_45 
        = ((1U == ((0x17U >= (0x1fU & ((IData)(3U) 
                                       * (7U & (ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_32[0U] 
                                                >> 1U)))))
                    ? (7U & (0x911240U >> (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               (ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_32[0U] 
                                                >> 1U))))))
                    : 0U)) | (1U == ((0x17U >= (0x1fU 
                                                & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_32[0U] 
                                                       >> 1U)))))
                                      ? (7U & (0x951240U 
                                               >> (0x1fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (7U 
                                                       & (ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_32[0U] 
                                                          >> 1U))))))
                                      : 0U)));
    vlSelf->_cp___05Fs13613 = (1U & vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_36[0U]);
    vlSelf->_cp___05Fs13418 = vlSelf->_cp___05Fs13401;
    vlSelf->_cp___05Fs13433 = vlSelf->_cp___05Fs13401;
    vlSelf->_cp___05Fs13437 = vlSelf->_cp___05Fs13401;
    vlSelf->_cp___05Fs13450 = vlSelf->_cp___05Fs13401;
    vlSelf->_cp___05Fs13461 = vlSelf->_cp___05Fs13401;
    vlSelf->_cp___05Fs13472 = vlSelf->_cp___05Fs13401;
    vlSelf->_cp___05Fs13483 = vlSelf->_cp___05Fs13401;
    vlSelf->_cp___05Fs13494 = vlSelf->_cp___05Fs13401;
    vlSelf->_cp___05Fs13508 = vlSelf->_cp___05Fs13401;
    vlSelf->_cp___05Fs13519 = vlSelf->_cp___05Fs13401;
    vlSelf->_cp___05Fs13534 = vlSelf->_cp___05Fs13401;
    vlSelf->_cp___05Fs13549 = vlSelf->_cp___05Fs13401;
    vlSelf->_cp___05Fs13558 = vlSelf->_cp___05Fs13401;
    vlSelf->_cp___05Fs13567 = vlSelf->_cp___05Fs13401;
    vlSelf->_cp___05Fs13405 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_3));
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_24 
        = (vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__address 
           == vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_address);
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc) 
           | ((1U == (IData)(vlSelf->ExampleRocketSystem__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_2)));
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc) 
           | ((1U == (IData)(vlSelf->ExampleRocketSystem__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_3)));
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (IData)(vlSelf->ExampleRocketSystem__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_4)));
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (IData)(vlSelf->ExampleRocketSystem__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_5)));
    vlSelf->_cp___05Fs10637 = vlSelf->_cp___05Fs10620;
    vlSelf->_cp___05Fs10727 = vlSelf->_cp___05Fs10620;
    vlSelf->_cp___05Fs10740 = vlSelf->_cp___05Fs10620;
    vlSelf->_cp___05Fs10755 = vlSelf->_cp___05Fs10620;
    vlSelf->_cp___05Fs10804 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_30)));
    vlSelf->_cp___05Fs10817 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_36)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___GEN_1 
        = (7U & ((3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___GEN_0) 
                        >> 4U)) | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___GEN_0)));
    vlSelf->_cp___05Fs10806 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_31)));
    vlSelf->_cp___05Fs10819 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_37)));
    vlSelf->_cp___05Fs10861 = (1U & (~ vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_64[0U]));
    vlSelf->_cp___05Fs10844 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_56)));
    vlSelf->_cp___05Fs10866 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_65)));
    vlSelf->_cp___05Fs10665 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_11)));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_54 
        = (((IData)(vlSelf->_mc___05Fs3407) == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_40[0U] 
                                                         >> 1U)))))
                                                 ? 
                                                (7U 
                                                 & (0x911240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * 
                                                        (7U 
                                                         & (ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_40[0U] 
                                                            >> 1U))))))
                                                 : 0U)) 
           | ((IData)(vlSelf->_mc___05Fs3407) == ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * 
                                                       (7U 
                                                        & (ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_40[0U] 
                                                           >> 1U)))))
                                                   ? 
                                                  (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_40[0U] 
                                                              >> 1U))))))
                                                   : 0U)));
    vlSelf->_cp___05Fs10830 = (1U & vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_44[0U]);
    vlSelf->_cp___05Fs10635 = vlSelf->_cp___05Fs10618;
    vlSelf->_cp___05Fs10650 = vlSelf->_cp___05Fs10618;
    vlSelf->_cp___05Fs10654 = vlSelf->_cp___05Fs10618;
    vlSelf->_cp___05Fs10667 = vlSelf->_cp___05Fs10618;
    vlSelf->_cp___05Fs10678 = vlSelf->_cp___05Fs10618;
    vlSelf->_cp___05Fs10689 = vlSelf->_cp___05Fs10618;
    vlSelf->_cp___05Fs10700 = vlSelf->_cp___05Fs10618;
    vlSelf->_cp___05Fs10711 = vlSelf->_cp___05Fs10618;
    vlSelf->_cp___05Fs10725 = vlSelf->_cp___05Fs10618;
    vlSelf->_cp___05Fs10736 = vlSelf->_cp___05Fs10618;
    vlSelf->_cp___05Fs10751 = vlSelf->_cp___05Fs10618;
    vlSelf->_cp___05Fs10766 = vlSelf->_cp___05Fs10618;
    vlSelf->_cp___05Fs10775 = vlSelf->_cp___05Fs10618;
    vlSelf->_cp___05Fs10784 = vlSelf->_cp___05Fs10618;
    vlSelf->_cp___05Fs10622 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_3));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc) 
           | ((1U == (IData)(vlSelf->ExampleRocketSystem__DOT___clint_domain_auto_clint_in_d_bits_size)) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_2)));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc) 
           | ((1U == (IData)(vlSelf->ExampleRocketSystem__DOT___clint_domain_auto_clint_in_d_bits_size)) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_3)));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (IData)(vlSelf->ExampleRocketSystem__DOT___clint_domain_auto_clint_in_d_bits_size)) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_4)));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (IData)(vlSelf->ExampleRocketSystem__DOT___clint_domain_auto_clint_in_d_bits_size)) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_5)));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_32 
        = (vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__address 
           == vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_address);
    vlSelf->_mc___05Fs3439 = (1U & ((8U | (((IData)(
                                                    (0x7ffU 
                                                     == 
                                                     (0x7ffU 
                                                      & (vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_address 
                                                         >> 3U)))) 
                                            << 2U) 
                                           | (3U & 
                                              (- (IData)(
                                                         (0U 
                                                          == 
                                                          (0x7ffU 
                                                           & (vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_address 
                                                              >> 3U)))))))) 
                                    >> (3U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                              >> 0xeU))));
    vlSelf->_cp___05Fs12880 = vlSelf->_cp___05Fs12863;
    vlSelf->_cp___05Fs12970 = vlSelf->_cp___05Fs12863;
    vlSelf->_cp___05Fs12983 = vlSelf->_cp___05Fs12863;
    vlSelf->_cp___05Fs12998 = vlSelf->_cp___05Fs12863;
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___GEN_1 
        = (7U & ((3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___GEN_0) 
                        >> 4U)) | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___GEN_0)));
    vlSelf->_cp___05Fs12878 = vlSelf->_cp___05Fs12861;
    vlSelf->_cp___05Fs12893 = vlSelf->_cp___05Fs12861;
    vlSelf->_cp___05Fs12897 = vlSelf->_cp___05Fs12861;
    vlSelf->_cp___05Fs12908 = vlSelf->_cp___05Fs12861;
    vlSelf->_cp___05Fs12910 = vlSelf->_cp___05Fs12861;
    vlSelf->_cp___05Fs12919 = vlSelf->_cp___05Fs12861;
    vlSelf->_cp___05Fs12921 = vlSelf->_cp___05Fs12861;
    vlSelf->_cp___05Fs12932 = vlSelf->_cp___05Fs12861;
    vlSelf->_cp___05Fs12943 = vlSelf->_cp___05Fs12861;
    vlSelf->_cp___05Fs12954 = vlSelf->_cp___05Fs12861;
    vlSelf->_cp___05Fs12968 = vlSelf->_cp___05Fs12861;
    vlSelf->_cp___05Fs12979 = vlSelf->_cp___05Fs12861;
    vlSelf->_cp___05Fs12994 = vlSelf->_cp___05Fs12861;
    vlSelf->_cp___05Fs13009 = vlSelf->_cp___05Fs12861;
    vlSelf->_cp___05Fs13018 = vlSelf->_cp___05Fs12861;
    vlSelf->_cp___05Fs13027 = vlSelf->_cp___05Fs12861;
    vlSelf->_cp___05Fs12865 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_3));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_2 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc) 
           | ((1U == (IData)(vlSelf->ExampleRocketSystem__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_2)));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_3 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc) 
           | ((1U == (IData)(vlSelf->ExampleRocketSystem__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_3)));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_4 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_1) 
           | ((1U == (IData)(vlSelf->ExampleRocketSystem__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_4)));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_5 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_1) 
           | ((1U == (IData)(vlSelf->ExampleRocketSystem__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_5)));
    vlSelf->_mc___05Fs3670 = (1U & (vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_88[
                                    (7U & ((IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address) 
                                           >> 8U))] 
                                    >> (0x1fU & ((IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address) 
                                                 >> 3U))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__stall 
        = ((IData)((((0U == (0x6000U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                     & (IData)(vlSelf->_mc___05Fs345)) 
                    & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__flight_0) 
                        | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__flight_1) 
                           | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__flight_2) 
                              | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__flight_3) 
                                 | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__flight_4) 
                                    | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__flight_5) 
                                       | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__flight_6) 
                                          | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__flight_7)))))))) 
                       & ((0U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__a_id)) 
                          | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__stalls_id) 
                             != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__a_id)))))) 
           | (IData)((((0x2000U == (0x6000U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                       & (IData)(vlSelf->_mc___05Fs345)) 
                      & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__flight_8) 
                          | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__flight_9) 
                             | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__flight_10) 
                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__flight_11) 
                                   | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__flight_12) 
                                      | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__flight_13) 
                                         | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__flight_14) 
                                            | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__flight_15)))))))) 
                         & ((0U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__a_id)) 
                            | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__stalls_id_1) 
                               != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__a_id)))))));
    vlSelf->_cp___05Fs5056 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_45)));
    vlSelf->_cp___05Fs5079 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_64)));
    vlSelf->_cp___05Fs5083 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_66)));
    vlSelf->_cp___05Fs5107 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_76)));
    vlSelf->_cp___05Fs4979 = vlSelf->_cp___05Fs4966;
    vlSelf->_cp___05Fs4994 = vlSelf->_cp___05Fs4966;
    vlSelf->_cp___05Fs2981 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_27));
    vlSelf->_cp___05Fs2957 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_23)));
    vlSelf->_cp___05Fs4645 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_21));
    vlSelf->_cp___05Fs4621 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_17)));
    vlSelf->_cp___05Fs10963 = vlSelf->_cp___05Fs10952;
    vlSelf->_cp___05Fs11095 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_32)));
    vlSelf->_cp___05Fs10926 = vlSelf->_cp___05Fs10909;
    vlSelf->_cp___05Fs10943 = vlSelf->_cp___05Fs10909;
    vlSelf->_cp___05Fs10956 = vlSelf->_cp___05Fs10909;
    vlSelf->_cp___05Fs10967 = vlSelf->_cp___05Fs10909;
    vlSelf->_cp___05Fs10978 = vlSelf->_cp___05Fs10909;
    vlSelf->_cp___05Fs10989 = vlSelf->_cp___05Fs10909;
    vlSelf->_cp___05Fs11000 = vlSelf->_cp___05Fs10909;
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_5) 
                & (IData)(vlSelf->__VdfgTmp_h96c6a3a1__0))) 
            << 7U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_5) 
                        | ((~ (IData)(vlSelf->__VdfgTmp_h96c6a3a1__0)) 
                           & (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_5))) 
                       << 6U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_4) 
                                      & (IData)(vlSelf->__VdfgTmp_h96c6a3a1__0))) 
                                  << 5U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_4) 
                                              | ((~ (IData)(vlSelf->__VdfgTmp_h96c6a3a1__0)) 
                                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_4))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_3) 
                                                    & (IData)(vlSelf->__VdfgTmp_h96c6a3a1__0))) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((~ (IData)(vlSelf->__VdfgTmp_h96c6a3a1__0)) 
                                                       & (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_3))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_2) 
                                                          & (IData)(vlSelf->__VdfgTmp_h96c6a3a1__0))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((~ (IData)(vlSelf->__VdfgTmp_h96c6a3a1__0)) 
                                                           & (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_2))))))))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dFirst_size 
        = (((IData)((0U != (7U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___GEN_0) 
                                  >> 3U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___GEN_1) 
                                     >> 1U)))) << 1U) 
              | (IData)((0U != (5U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___GEN_1))))));
    vlSelf->_cp___05Fs13625 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_45)));
    vlSelf->_cp___05Fs13422 = vlSelf->_cp___05Fs13405;
    vlSelf->_cp___05Fs13439 = vlSelf->_cp___05Fs13405;
    vlSelf->_cp___05Fs13452 = vlSelf->_cp___05Fs13405;
    vlSelf->_cp___05Fs13463 = vlSelf->_cp___05Fs13405;
    vlSelf->_cp___05Fs13474 = vlSelf->_cp___05Fs13405;
    vlSelf->_cp___05Fs13485 = vlSelf->_cp___05Fs13405;
    vlSelf->_cp___05Fs13496 = vlSelf->_cp___05Fs13405;
    vlSelf->_cp___05Fs13591 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_24)));
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_5) 
                & (IData)(vlSelf->__VdfgTmp_h19671478__0))) 
            << 7U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_5) 
                        | ((~ (IData)(vlSelf->__VdfgTmp_h19671478__0)) 
                           & (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_5))) 
                       << 6U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_4) 
                                      & (IData)(vlSelf->__VdfgTmp_h19671478__0))) 
                                  << 5U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_4) 
                                              | ((~ (IData)(vlSelf->__VdfgTmp_h19671478__0)) 
                                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_4))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_3) 
                                                    & (IData)(vlSelf->__VdfgTmp_h19671478__0))) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((~ (IData)(vlSelf->__VdfgTmp_h19671478__0)) 
                                                       & (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_3))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_2) 
                                                          & (IData)(vlSelf->__VdfgTmp_h19671478__0))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((~ (IData)(vlSelf->__VdfgTmp_h19671478__0)) 
                                                           & (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_2))))))))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dFirst_size 
        = (((IData)((0U != (7U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___GEN_0) 
                                  >> 3U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___GEN_1) 
                                     >> 1U)))) << 1U) 
              | (IData)((0U != (5U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___GEN_1))))));
    vlSelf->_cp___05Fs10676 = vlSelf->_cp___05Fs10665;
    vlSelf->_cp___05Fs10842 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_54)));
    vlSelf->_cp___05Fs10639 = vlSelf->_cp___05Fs10622;
    vlSelf->_cp___05Fs10656 = vlSelf->_cp___05Fs10622;
    vlSelf->_cp___05Fs10669 = vlSelf->_cp___05Fs10622;
    vlSelf->_cp___05Fs10680 = vlSelf->_cp___05Fs10622;
    vlSelf->_cp___05Fs10691 = vlSelf->_cp___05Fs10622;
    vlSelf->_cp___05Fs10702 = vlSelf->_cp___05Fs10622;
    vlSelf->_cp___05Fs10713 = vlSelf->_cp___05Fs10622;
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_5) 
                & (IData)(vlSelf->__VdfgTmp_hcb83c8d4__0))) 
            << 7U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_5) 
                        | ((~ (IData)(vlSelf->__VdfgTmp_hcb83c8d4__0)) 
                           & (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_5))) 
                       << 6U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_4) 
                                      & (IData)(vlSelf->__VdfgTmp_hcb83c8d4__0))) 
                                  << 5U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_4) 
                                              | ((~ (IData)(vlSelf->__VdfgTmp_hcb83c8d4__0)) 
                                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_4))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_3) 
                                                    & (IData)(vlSelf->__VdfgTmp_hcb83c8d4__0))) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((~ (IData)(vlSelf->__VdfgTmp_hcb83c8d4__0)) 
                                                       & (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_3))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_2) 
                                                          & (IData)(vlSelf->__VdfgTmp_hcb83c8d4__0))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((~ (IData)(vlSelf->__VdfgTmp_hcb83c8d4__0)) 
                                                           & (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_2))))))))));
    vlSelf->_cp___05Fs10808 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_32)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dFirst_size 
        = (((IData)((0U != (7U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___GEN_0) 
                                  >> 3U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___GEN_1) 
                                     >> 1U)))) << 1U) 
              | (IData)((0U != (5U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___GEN_1))))));
    vlSelf->_cp___05Fs12882 = vlSelf->_cp___05Fs12865;
    vlSelf->_cp___05Fs12899 = vlSelf->_cp___05Fs12865;
    vlSelf->_cp___05Fs12912 = vlSelf->_cp___05Fs12865;
    vlSelf->_cp___05Fs12923 = vlSelf->_cp___05Fs12865;
    vlSelf->_cp___05Fs12934 = vlSelf->_cp___05Fs12865;
    vlSelf->_cp___05Fs12945 = vlSelf->_cp___05Fs12865;
    vlSelf->_cp___05Fs12956 = vlSelf->_cp___05Fs12865;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask 
        = ((((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_5) 
             | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_5) 
                & (IData)(vlSelf->__VdfgTmp_h877be8cd__0))) 
            << 7U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_5) 
                        | ((~ (IData)(vlSelf->__VdfgTmp_h877be8cd__0)) 
                           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_5))) 
                       << 6U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_4) 
                                      & (IData)(vlSelf->__VdfgTmp_h877be8cd__0))) 
                                  << 5U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_4) 
                                              | ((~ (IData)(vlSelf->__VdfgTmp_h877be8cd__0)) 
                                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_4))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_3) 
                                                    & (IData)(vlSelf->__VdfgTmp_h877be8cd__0))) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_3) 
                                                    | ((~ (IData)(vlSelf->__VdfgTmp_h877be8cd__0)) 
                                                       & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_3))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_2) 
                                                          & (IData)(vlSelf->__VdfgTmp_h877be8cd__0))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_2) 
                                                        | ((~ (IData)(vlSelf->__VdfgTmp_h877be8cd__0)) 
                                                           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_2))))))))));
    vlSelf->_cp___05Fs3178 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__stall)) 
                              & (IData)(vlSelf->_cp___05Fs2904));
    vlSelf->_cp___05Fs3255 = vlSelf->_cp___05Fs2981;
    vlSelf->_cp___05Fs4368 = vlSelf->_cp___05Fs2981;
    vlSelf->_cp___05Fs2970 = vlSelf->_cp___05Fs2957;
    vlSelf->_cp___05Fs2992 = vlSelf->_cp___05Fs2957;
    vlSelf->_cp___05Fs3003 = vlSelf->_cp___05Fs2957;
    vlSelf->_cp___05Fs3014 = vlSelf->_cp___05Fs2957;
    vlSelf->_cp___05Fs3231 = vlSelf->_cp___05Fs2957;
    vlSelf->_cp___05Fs3244 = vlSelf->_cp___05Fs2957;
    vlSelf->_cp___05Fs3266 = vlSelf->_cp___05Fs2957;
    vlSelf->_cp___05Fs3277 = vlSelf->_cp___05Fs2957;
    vlSelf->_cp___05Fs3288 = vlSelf->_cp___05Fs2957;
    vlSelf->_cp___05Fs4344 = vlSelf->_cp___05Fs2957;
    vlSelf->_cp___05Fs4357 = vlSelf->_cp___05Fs2957;
    vlSelf->_cp___05Fs4379 = vlSelf->_cp___05Fs2957;
    vlSelf->_cp___05Fs4390 = vlSelf->_cp___05Fs2957;
    vlSelf->_cp___05Fs4401 = vlSelf->_cp___05Fs2957;
    vlSelf->_cp___05Fs4923 = vlSelf->_cp___05Fs4645;
    vlSelf->_cp___05Fs5206 = vlSelf->_cp___05Fs4645;
    vlSelf->_cp___05Fs5484 = vlSelf->_cp___05Fs4645;
    vlSelf->_cp___05Fs4634 = vlSelf->_cp___05Fs4621;
    vlSelf->_cp___05Fs4656 = vlSelf->_cp___05Fs4621;
    vlSelf->_cp___05Fs4667 = vlSelf->_cp___05Fs4621;
    vlSelf->_cp___05Fs4678 = vlSelf->_cp___05Fs4621;
    vlSelf->_cp___05Fs4899 = vlSelf->_cp___05Fs4621;
    vlSelf->_cp___05Fs4912 = vlSelf->_cp___05Fs4621;
    vlSelf->_cp___05Fs4934 = vlSelf->_cp___05Fs4621;
    vlSelf->_cp___05Fs4945 = vlSelf->_cp___05Fs4621;
    vlSelf->_cp___05Fs4956 = vlSelf->_cp___05Fs4621;
    vlSelf->_cp___05Fs5182 = vlSelf->_cp___05Fs4621;
    vlSelf->_cp___05Fs5195 = vlSelf->_cp___05Fs4621;
    vlSelf->_cp___05Fs5217 = vlSelf->_cp___05Fs4621;
    vlSelf->_cp___05Fs5228 = vlSelf->_cp___05Fs4621;
    vlSelf->_cp___05Fs5239 = vlSelf->_cp___05Fs4621;
    vlSelf->_cp___05Fs5460 = vlSelf->_cp___05Fs4621;
    vlSelf->_cp___05Fs5473 = vlSelf->_cp___05Fs4621;
    vlSelf->_cp___05Fs5495 = vlSelf->_cp___05Fs4621;
    vlSelf->_cp___05Fs5506 = vlSelf->_cp___05Fs4621;
    vlSelf->_cp___05Fs5517 = vlSelf->_cp___05Fs4621;
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_13 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask)) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_mask));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_9 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_mask) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__anonIn_d_bits_size 
        = ((IData)(vlSelf->_mc___05Fs671) ? (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dFirst_size)
            : (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dOrig));
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_11 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask)) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_mask));
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_8 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_mask) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__anonIn_d_bits_size 
        = ((IData)(vlSelf->_mc___05Fs572) ? (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dFirst_size)
            : (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dOrig));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_13 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask)) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_mask));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_9 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_mask) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__anonIn_d_bits_size 
        = ((IData)(vlSelf->_mc___05Fs642) ? (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dFirst_size)
            : (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dOrig));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_11 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask)) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_mask));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_8 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_mask) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask));
    vlSelf->_cp___05Fs3369 = ((IData)(vlSelf->_cp___05Fs3178) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter)));
    vlSelf->_cp___05Fs3398 = ((IData)(vlSelf->_cp___05Fs3178) 
                              & (IData)(vlSelf->_mc___05Fs366));
    vlSelf->_cp___05Fs4291 = ((IData)(vlSelf->_cp___05Fs3178) 
                              & (IData)(vlSelf->_mc___05Fs340));
    vlSelf->_cp___05Fs4846 = ((IData)(vlSelf->_cp___05Fs3178) 
                              & (IData)(vlSelf->_mc___05Fs343));
    vlSelf->_cp___05Fs5407 = ((IData)(vlSelf->_cp___05Fs3178) 
                              & (IData)(vlSelf->_mc___05Fs341));
    vlSelf->_cp___05Fs4568 = ((IData)(vlSelf->_cp___05Fs3178) 
                              & (IData)(vlSelf->_mc___05Fs342));
    vlSelf->_cp___05Fs5129 = ((IData)(vlSelf->_cp___05Fs3178) 
                              & (IData)(vlSelf->_mc___05Fs339));
    vlSelf->_cp___05Fs10971 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_13));
    vlSelf->_cp___05Fs10947 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_9)));
    vlSelf->_cp___05Fs5664 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__anonIn_d_bits_size));
    vlSelf->_cp___05Fs5666 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__anonIn_d_bits_size));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_36 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__anonIn_d_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__size_1));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_52 
        = ((7U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 6U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__anonIn_d_bits_size));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_170, vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_54 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__anonIn_d_bits_size) 
           == (7U & (__Vtemp_170[0U] >> 1U)));
    vlSelf->_cp___05Fs5527 = (3U > (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__anonIn_d_bits_size));
    vlSelf->_cp___05Fs13467 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_11));
    vlSelf->_cp___05Fs13443 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_8)));
    vlSelf->_cp___05Fs4825 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__anonIn_d_bits_size));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_46 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__anonIn_d_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__size_1));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_63 
        = ((7U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 6U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__anonIn_d_bits_size));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_173, vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_65 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__anonIn_d_bits_size) 
           == (7U & (__Vtemp_173[0U] >> 1U)));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_176, vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_74 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__anonIn_d_bits_size) 
           == (7U & (__Vtemp_176[0U] >> 1U)));
    vlSelf->_cp___05Fs4688 = (2U >= (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__anonIn_d_bits_size));
    vlSelf->_cp___05Fs10684 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_13));
    vlSelf->_cp___05Fs10660 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_9)));
    vlSelf->_cp___05Fs5386 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__anonIn_d_bits_size));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_45 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__anonIn_d_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__size_1));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_62 
        = ((7U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 6U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__anonIn_d_bits_size));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_179, vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_64 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__anonIn_d_bits_size) 
           == (7U & (__Vtemp_179[0U] >> 1U)));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_182, vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_73 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__anonIn_d_bits_size) 
           == (7U & (__Vtemp_182[0U] >> 1U)));
    vlSelf->_cp___05Fs5249 = (2U >= (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__anonIn_d_bits_size));
    vlSelf->_cp___05Fs12927 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_11));
    vlSelf->_cp___05Fs12903 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_8)));
    vlSelf->_cp___05Fs4482 = ((IData)(vlSelf->_cp___05Fs4291) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter)));
    vlSelf->_cp___05Fs4529 = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_63) 
                              & ((IData)(vlSelf->_mc___05Fs539) 
                                 & ((IData)(vlSelf->_cp___05Fs4291) 
                                    & ((~ (IData)(vlSelf->_cp___05Fs4407)) 
                                       & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_67)))));
    vlSelf->_cp___05Fs4481 = ((~ (IData)(vlSelf->_mc___05Fs546)) 
                              & (IData)(vlSelf->_cp___05Fs4291));
    vlSelf->_cp___05Fs4511 = ((IData)(vlSelf->_cp___05Fs4291) 
                              & (IData)(vlSelf->_mc___05Fs539));
    vlSelf->_cp___05Fs5037 = ((IData)(vlSelf->_cp___05Fs4846) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)));
    vlSelf->_cp___05Fs5117 = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output) 
                              & ((IData)(vlSelf->_cp___05Fs4846) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat)));
    vlSelf->_cp___05Fs5084 = ((IData)(vlSelf->_cp___05Fs5070) 
                              & ((IData)(vlSelf->_mc___05Fs598) 
                                 & ((IData)(vlSelf->_cp___05Fs4846) 
                                    & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_59))));
    vlSelf->_cp___05Fs5036 = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output) 
                              & (IData)(vlSelf->_cp___05Fs4846));
    vlSelf->_cp___05Fs5066 = ((IData)(vlSelf->_cp___05Fs4846) 
                              & (IData)(vlSelf->_mc___05Fs598));
    vlSelf->_cp___05Fs10894 = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full) 
                               | (IData)(vlSelf->_cp___05Fs4846));
    vlSelf->_cp___05Fs5598 = ((IData)(vlSelf->_cp___05Fs5407) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)));
    vlSelf->_cp___05Fs5627 = ((IData)(vlSelf->_cp___05Fs5407) 
                              & (IData)(vlSelf->_mc___05Fs665));
    vlSelf->_cp___05Fs13390 = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full) 
                               | (IData)(vlSelf->_cp___05Fs5407));
    vlSelf->_cp___05Fs4759 = ((IData)(vlSelf->_cp___05Fs4568) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)));
    vlSelf->_cp___05Fs4788 = ((IData)(vlSelf->_cp___05Fs4568) 
                              & (IData)(vlSelf->_mc___05Fs563));
    vlSelf->_cp___05Fs10607 = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full) 
                               | (IData)(vlSelf->_cp___05Fs4568));
    vlSelf->_cp___05Fs5320 = ((IData)(vlSelf->_cp___05Fs5129) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)));
    vlSelf->_cp___05Fs5349 = ((IData)(vlSelf->_cp___05Fs5129) 
                              & (IData)(vlSelf->_mc___05Fs633));
    vlSelf->_cp___05Fs12850 = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full) 
                               | (IData)(vlSelf->_cp___05Fs5129));
    vlSelf->_cp___05Fs10960 = vlSelf->_cp___05Fs10947;
    vlSelf->_cp___05Fs10982 = vlSelf->_cp___05Fs10947;
    vlSelf->_cp___05Fs10993 = vlSelf->_cp___05Fs10947;
    vlSelf->_cp___05Fs11004 = vlSelf->_cp___05Fs10947;
    vlSelf->_cp___05Fs5617 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_36)));
    vlSelf->_cp___05Fs5640 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_52)));
    vlSelf->_cp___05Fs5644 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_54)));
    vlSelf->_cp___05Fs5540 = vlSelf->_cp___05Fs5527;
    vlSelf->_cp___05Fs5555 = vlSelf->_cp___05Fs5527;
    vlSelf->_cp___05Fs13456 = vlSelf->_cp___05Fs13443;
    vlSelf->_cp___05Fs13478 = vlSelf->_cp___05Fs13443;
    vlSelf->_cp___05Fs13489 = vlSelf->_cp___05Fs13443;
    vlSelf->_cp___05Fs13500 = vlSelf->_cp___05Fs13443;
    vlSelf->_cp___05Fs4778 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_46)));
    vlSelf->_cp___05Fs4801 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_63)));
    vlSelf->_cp___05Fs4805 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_65)));
    vlSelf->_cp___05Fs4827 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_74)));
    vlSelf->_cp___05Fs4701 = vlSelf->_cp___05Fs4688;
    vlSelf->_cp___05Fs4716 = vlSelf->_cp___05Fs4688;
    vlSelf->_cp___05Fs10673 = vlSelf->_cp___05Fs10660;
    vlSelf->_cp___05Fs10695 = vlSelf->_cp___05Fs10660;
    vlSelf->_cp___05Fs10706 = vlSelf->_cp___05Fs10660;
    vlSelf->_cp___05Fs10717 = vlSelf->_cp___05Fs10660;
    vlSelf->_cp___05Fs5339 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_45)));
    vlSelf->_cp___05Fs5362 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_62)));
    vlSelf->_cp___05Fs5366 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_64)));
    vlSelf->_cp___05Fs5388 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_73)));
    vlSelf->_cp___05Fs5262 = vlSelf->_cp___05Fs5249;
    vlSelf->_cp___05Fs5277 = vlSelf->_cp___05Fs5249;
    vlSelf->_cp___05Fs12916 = vlSelf->_cp___05Fs12903;
    vlSelf->_cp___05Fs12938 = vlSelf->_cp___05Fs12903;
    vlSelf->_cp___05Fs12949 = vlSelf->_cp___05Fs12903;
    vlSelf->_cp___05Fs12960 = vlSelf->_cp___05Fs12903;
    vlSelf->_cp___05Fs4509 = vlSelf->_cp___05Fs4481;
    vlSelf->_cp___05Fs4562 = vlSelf->_cp___05Fs4481;
    vlSelf->_cp___05Fs4493 = ((IData)(vlSelf->_mc___05Fs535) 
                              & (IData)(vlSelf->_cp___05Fs4481));
    vlSelf->_cp___05Fs4512 = ((IData)(vlSelf->_cp___05Fs4481) 
                              & (IData)(vlSelf->_mc___05Fs539));
    vlSelf->_cp___05Fs4564 = ((IData)(vlSelf->_cp___05Fs4481) 
                              != (IData)(vlSelf->_cp___05Fs4563));
    if (vlSelf->_cp___05Fs4511) {
        vlSelf->_cp___05Fs4520 = vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_67;
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready 
            = (0x7ffffU & ((IData)(1U) << (0x1fU & 
                                           (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))));
    } else {
        vlSelf->_cp___05Fs4520 = 0U;
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready = 0U;
    }
    vlSelf->_cp___05Fs5064 = vlSelf->_cp___05Fs5036;
    vlSelf->_cp___05Fs5048 = ((IData)(vlSelf->_mc___05Fs594) 
                              & (IData)(vlSelf->_cp___05Fs5036));
    vlSelf->_cp___05Fs5067 = ((IData)(vlSelf->_cp___05Fs5036) 
                              & (IData)(vlSelf->_mc___05Fs598));
    if (vlSelf->_cp___05Fs5066) {
        vlSelf->_cp___05Fs5075 = vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_59;
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_set_wo_ready 
            = (0x7ffffU & ((IData)(1U) << (0x1fU & 
                                           (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))));
    } else {
        vlSelf->_cp___05Fs5075 = 0U;
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_set_wo_ready = 0U;
    }
    vlSelf->_cp___05Fs11085 = ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_first_counter) 
                               & (IData)(vlSelf->_cp___05Fs10894));
    vlSelf->_cp___05Fs5118 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__full)) 
                              & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat)) 
                                 & (IData)(vlSelf->_cp___05Fs10894)));
    vlSelf->_cp___05Fs11132 = ((IData)(vlSelf->_cp___05Fs11118) 
                               & ((IData)(vlSelf->_mc___05Fs3446) 
                                  & ((IData)(vlSelf->_cp___05Fs10894) 
                                     & (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_50))));
    vlSelf->_cp___05Fs11114 = ((IData)(vlSelf->_mc___05Fs3446) 
                               & (IData)(vlSelf->_cp___05Fs10894));
    vlSelf->_cp___05Fs11084 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__full)) 
                               & (IData)(vlSelf->_cp___05Fs10894));
    vlSelf->_cp___05Fs5636 = ((IData)(vlSelf->_cp___05Fs5627) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_47));
    vlSelf->_cp___05Fs13503 = vlSelf->_cp___05Fs13390;
    vlSelf->_cp___05Fs5520 = vlSelf->_cp___05Fs13390;
    vlSelf->_cp___05Fs13581 = ((IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__a_first_counter) 
                               & (IData)(vlSelf->_cp___05Fs13390));
    vlSelf->_cp___05Fs13594 = ((IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__d_first_counter) 
                               & (IData)(vlSelf->_cp___05Fs13390));
    vlSelf->_cp___05Fs5611 = ((IData)(vlSelf->_cp___05Fs13390) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter)));
    vlSelf->_cp___05Fs13614 = ((IData)(vlSelf->_mc___05Fs3678) 
                               & (IData)(vlSelf->_cp___05Fs13390));
    vlSelf->_cp___05Fs5631 = ((IData)(vlSelf->_cp___05Fs13390) 
                              & (IData)(vlSelf->_mc___05Fs666));
    vlSelf->_cp___05Fs13610 = ((IData)(vlSelf->_mc___05Fs3677) 
                               & (IData)(vlSelf->_cp___05Fs13390));
    vlSelf->_cp___05Fs4797 = ((IData)(vlSelf->_cp___05Fs4788) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_58));
    vlSelf->_cp___05Fs10720 = vlSelf->_cp___05Fs10607;
    vlSelf->_cp___05Fs10798 = ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__a_first_counter) 
                               & (IData)(vlSelf->_cp___05Fs10607));
    vlSelf->_cp___05Fs10811 = ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__d_first_counter) 
                               & (IData)(vlSelf->_cp___05Fs10607));
    vlSelf->_cp___05Fs10831 = ((IData)(vlSelf->_mc___05Fs3412) 
                               & (IData)(vlSelf->_cp___05Fs10607));
    vlSelf->_cp___05Fs10827 = ((IData)(vlSelf->_mc___05Fs3410) 
                               & (IData)(vlSelf->_cp___05Fs10607));
    vlSelf->_cp___05Fs4681 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__drop)) 
                              & (IData)(vlSelf->_cp___05Fs10607));
    vlSelf->_cp___05Fs5358 = ((IData)(vlSelf->_cp___05Fs5349) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_57));
    vlSelf->_cp___05Fs12963 = vlSelf->_cp___05Fs12850;
    vlSelf->_cp___05Fs5242 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__drop)) 
                              & (IData)(vlSelf->_cp___05Fs12850));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_70 
        = (1U & ((0x7ffffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight 
                              >> (0x1fU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                           >> 9U)))) 
                 | (IData)(vlSelf->_cp___05Fs4520)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_78 
        = ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready 
            != ((IData)(vlSelf->_cp___05Fs4515) ? (0x7ffffU 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (0x1fU 
                                                       & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 9U))))
                 : 0U)) | (0U == vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_62 
        = (1U & ((0x7ffffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight 
                              >> (0x1fU & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                           >> 4U)))) 
                 | (IData)(vlSelf->_cp___05Fs5075)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_69 
        = ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_set_wo_ready 
            != ((IData)(vlSelf->_cp___05Fs5070) ? (0x7ffffU 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (0x1fU 
                                                       & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                                          >> 4U))))
                 : 0U)) | (0U == vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_set_wo_ready));
    vlSelf->_cp___05Fs11123 = ((IData)(vlSelf->_cp___05Fs11114) 
                               & (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_50));
    VL_SHIFTL_WWI(304,304,9, __Vtemp_184, VExampleRocketSystem__ConstPool__CONST_h2dc653e5_0, (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_source));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[0U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[0U] 
           & ((IData)(vlSelf->_cp___05Fs11114) ? __Vtemp_184[0U]
               : VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[0U]));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[1U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[1U] 
           & ((IData)(vlSelf->_cp___05Fs11114) ? __Vtemp_184[1U]
               : VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[1U]));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[2U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[2U] 
           & ((IData)(vlSelf->_cp___05Fs11114) ? __Vtemp_184[2U]
               : VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[2U]));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[3U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[3U] 
           & ((IData)(vlSelf->_cp___05Fs11114) ? __Vtemp_184[3U]
               : VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[3U]));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[4U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[4U] 
           & ((IData)(vlSelf->_cp___05Fs11114) ? __Vtemp_184[4U]
               : VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[4U]));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[5U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[5U] 
           & ((IData)(vlSelf->_cp___05Fs11114) ? __Vtemp_184[5U]
               : VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[5U]));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[6U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[6U] 
           & ((IData)(vlSelf->_cp___05Fs11114) ? __Vtemp_184[6U]
               : VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[6U]));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[7U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[7U] 
           & ((IData)(vlSelf->_cp___05Fs11114) ? __Vtemp_184[7U]
               : VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[7U]));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[8U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[8U] 
           & ((IData)(vlSelf->_cp___05Fs11114) ? __Vtemp_184[8U]
               : VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[8U]));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[9U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[9U] 
           & ((IData)(vlSelf->_cp___05Fs11114) ? __Vtemp_184[9U]
               : VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[9U]));
    vlSelf->_cp___05Fs11112 = vlSelf->_cp___05Fs11084;
    vlSelf->_cp___05Fs11169 = vlSelf->_cp___05Fs11084;
    vlSelf->_cp___05Fs5124 = vlSelf->_cp___05Fs11084;
    vlSelf->_cp___05Fs11096 = ((IData)(vlSelf->_mc___05Fs3442) 
                               & (IData)(vlSelf->_cp___05Fs11084));
    vlSelf->_cp___05Fs11115 = ((IData)(vlSelf->_mc___05Fs3446) 
                               & (IData)(vlSelf->_cp___05Fs11084));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_50 
        = (1U & ((0x7ffffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight 
                              >> (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source))) 
                 | (IData)(vlSelf->_cp___05Fs5636)));
    vlSelf->_cp___05Fs13616 = vlSelf->_cp___05Fs13614;
    vlSelf->_cp___05Fs13628 = ((IData)(vlSelf->_cp___05Fs13614) 
                               & ((IData)(vlSelf->_mc___05Fs3677) 
                                  & (IData)(vlSelf->_cp___05Fs13390)));
    vlSelf->_cp___05Fs5633 = vlSelf->_cp___05Fs5631;
    vlSelf->_cp___05Fs5645 = ((IData)(vlSelf->_cp___05Fs5631) 
                              & ((IData)(vlSelf->_mc___05Fs665) 
                                 & ((IData)(vlSelf->_cp___05Fs5407) 
                                    & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_47))));
    vlSelf->_cp___05Fs13619 = vlSelf->_cp___05Fs13610;
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_61 
        = (1U & ((0x7ffffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight 
                              >> (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source))) 
                 | (IData)(vlSelf->_cp___05Fs4797)));
    vlSelf->_cp___05Fs10833 = vlSelf->_cp___05Fs10831;
    vlSelf->_cp___05Fs10845 = ((IData)(vlSelf->_cp___05Fs10831) 
                               & ((IData)(vlSelf->_mc___05Fs3410) 
                                  & (IData)(vlSelf->_cp___05Fs10607)));
    vlSelf->_cp___05Fs10836 = vlSelf->_cp___05Fs10827;
    vlSelf->_cp___05Fs4772 = ((IData)(vlSelf->_cp___05Fs4681) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter)));
    vlSelf->_cp___05Fs4792 = ((IData)(vlSelf->_cp___05Fs4681) 
                              & (IData)(vlSelf->_mc___05Fs565));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_60 
        = (1U & ((0x7ffffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight 
                              >> (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source))) 
                 | (IData)(vlSelf->_cp___05Fs5358)));
    vlSelf->_cp___05Fs5333 = ((IData)(vlSelf->_cp___05Fs5242) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter)));
    vlSelf->_cp___05Fs5353 = ((IData)(vlSelf->_cp___05Fs5242) 
                              & (IData)(vlSelf->_mc___05Fs635));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT___GEN_4 
        = ((IData)(vlSelf->_cp___05Fs4404) | ((IData)(vlSelf->_cp___05Fs4681) 
                                              | ((IData)(vlSelf->_cp___05Fs4959) 
                                                 | ((IData)(vlSelf->_cp___05Fs5242) 
                                                    | (IData)(vlSelf->_cp___05Fs13390)))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__readys_valid 
        = (((IData)(vlSelf->_cp___05Fs13390) << 4U) 
           | (((IData)(vlSelf->_cp___05Fs5242) << 3U) 
              | (((IData)(vlSelf->_cp___05Fs4959) << 2U) 
                 | (((IData)(vlSelf->_cp___05Fs4681) 
                     << 1U) | (IData)(vlSelf->_cp___05Fs4404)))));
    vlSelf->_cp___05Fs4519 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_70)));
    vlSelf->_cp___05Fs4533 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_78)));
    vlSelf->_cp___05Fs5074 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_62)));
    vlSelf->_cp___05Fs5088 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_69)));
    VL_SHIFTR_WWI(304,304,9, __Vtemp_186, vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__inflight, 
                  (0x1ffU & vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U]));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_53 
        = (1U & ((VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[0U] 
                  & __Vtemp_186[0U]) | (IData)(vlSelf->_cp___05Fs11123)));
    VL_SHIFTL_WWI(304,304,9, __Vtemp_188, VExampleRocketSystem__ConstPool__CONST_h2dc653e5_0, 
                  (0x1ffU & vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U]));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_61 
        = ((0U != ((((((((((vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[0U] 
                            ^ (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[0U] 
                               & ((IData)(vlSelf->_cp___05Fs11118)
                                   ? __Vtemp_188[0U]
                                   : VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[0U]))) 
                           | (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[1U] 
                              ^ (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[1U] 
                                 & ((IData)(vlSelf->_cp___05Fs11118)
                                     ? __Vtemp_188[1U]
                                     : VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[1U])))) 
                          | (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[2U] 
                             ^ (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[2U] 
                                & ((IData)(vlSelf->_cp___05Fs11118)
                                    ? __Vtemp_188[2U]
                                    : VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[2U])))) 
                         | (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[3U] 
                            ^ (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[3U] 
                               & ((IData)(vlSelf->_cp___05Fs11118)
                                   ? __Vtemp_188[3U]
                                   : VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[3U])))) 
                        | (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[4U] 
                           ^ (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[4U] 
                              & ((IData)(vlSelf->_cp___05Fs11118)
                                  ? __Vtemp_188[4U]
                                  : VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[4U])))) 
                       | (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[5U] 
                          ^ (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[5U] 
                             & ((IData)(vlSelf->_cp___05Fs11118)
                                 ? __Vtemp_188[5U] : 
                                VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[5U])))) 
                      | (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[6U] 
                         ^ (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[6U] 
                            & ((IData)(vlSelf->_cp___05Fs11118)
                                ? __Vtemp_188[6U] : 
                               VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[6U])))) 
                     | (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[7U] 
                        ^ (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[7U] 
                           & ((IData)(vlSelf->_cp___05Fs11118)
                               ? __Vtemp_188[7U] : 
                              VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[7U])))) 
                    | (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[8U] 
                       ^ (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[8U] 
                          & ((IData)(vlSelf->_cp___05Fs11118)
                              ? __Vtemp_188[8U] : VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[8U])))) 
                   | (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[9U] 
                      ^ (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[9U] 
                         & ((IData)(vlSelf->_cp___05Fs11118)
                             ? __Vtemp_188[9U] : VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[9U]))))) 
           | (0U == ((((((((((VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[0U] 
                              ^ vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[0U]) 
                             | (VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[1U] 
                                ^ vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[1U])) 
                            | (VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[2U] 
                               ^ vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[2U])) 
                           | (VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[3U] 
                              ^ vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[3U])) 
                          | (VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[4U] 
                             ^ vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[4U])) 
                         | (VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[5U] 
                            ^ vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[5U])) 
                        | (VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[6U] 
                           ^ vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[6U])) 
                       | (VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[7U] 
                          ^ vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[7U])) 
                      | (VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[8U] 
                         ^ vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[8U])) 
                     | (VExampleRocketSystem__ConstPool__CONST_h7c08bc10_0[9U] 
                        ^ vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[9U]))));
    vlSelf->_cp___05Fs5635 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_50)));
    vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_42 
        = ((IData)(vlSelf->_cp___05Fs13613) | (IData)(vlSelf->_cp___05Fs13619));
    vlSelf->_cp___05Fs4796 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_61)));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_51 
        = ((IData)(vlSelf->_cp___05Fs10830) | (IData)(vlSelf->_cp___05Fs10836));
    vlSelf->_cp___05Fs4794 = vlSelf->_cp___05Fs4792;
    vlSelf->_cp___05Fs4806 = ((IData)(vlSelf->_cp___05Fs4792) 
                              & ((IData)(vlSelf->_mc___05Fs563) 
                                 & ((IData)(vlSelf->_cp___05Fs4568) 
                                    & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_58))));
    vlSelf->_cp___05Fs5357 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_60)));
    vlSelf->_cp___05Fs5355 = vlSelf->_cp___05Fs5353;
    vlSelf->_cp___05Fs5367 = ((IData)(vlSelf->_cp___05Fs5353) 
                              & ((IData)(vlSelf->_mc___05Fs633) 
                                 & ((IData)(vlSelf->_cp___05Fs5129) 
                                    & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_57))));
    vlSelf->_cp___05Fs3446 = ((IData)(vlSelf->_mc___05Fs394) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__readys_valid)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT___GEN 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__readys_mask)) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__readys_valid));
    vlSelf->_cp___05Fs11122 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_53)));
    vlSelf->_cp___05Fs11136 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_61)));
    vlSelf->_cp___05Fs13618 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_42)));
    vlSelf->_cp___05Fs10835 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_51)));
    vlSelf->_cp___05Fs3017 = ((IData)(vlSelf->_mc___05Fs395)
                               ? (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT___GEN_4)
                               : (((IData)(vlSelf->_cp___05Fs4404) 
                                   & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__state_0)) 
                                  | (((IData)(vlSelf->_cp___05Fs4681) 
                                      & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__state_1)) 
                                     | (((IData)(vlSelf->_cp___05Fs4959) 
                                         & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__state_2)) 
                                        | (((IData)(vlSelf->_cp___05Fs5242) 
                                            & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__state_3)) 
                                           | ((IData)(vlSelf->_cp___05Fs13390) 
                                              & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__state_4)))))));
    vlSelf->_cp___05Fs3291 = vlSelf->_cp___05Fs3017;
    vlSelf->_cp___05Fs3108 = ((IData)(vlSelf->_cp___05Fs3017) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter)));
    vlSelf->_cp___05Fs3382 = ((IData)(vlSelf->_cp___05Fs3017) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_69 
        = ((IData)(vlSelf->_cp___05Fs3017) & (IData)(vlSelf->_mc___05Fs334));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_69 
        = ((IData)(vlSelf->_cp___05Fs3017) & (IData)(vlSelf->_mc___05Fs368));
    vlSelf->_cp___05Fs3107 = ((IData)(vlSelf->_cp___05Fs3166) 
                              & (IData)(vlSelf->_cp___05Fs3017));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT___GEN_0 
        = (((0xf0U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT___GEN) 
                      << 4U)) | (((IData)(vlSelf->_cp___05Fs13390) 
                                  << 3U) | (((IData)(vlSelf->_cp___05Fs5242) 
                                             << 2U) 
                                            | (((IData)(vlSelf->_cp___05Fs4959) 
                                                << 1U) 
                                               | (IData)(vlSelf->_cp___05Fs4681))))) 
           | (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT___GEN) 
               << 3U) | (((IData)(vlSelf->_cp___05Fs13390) 
                          << 2U) | (((IData)(vlSelf->_cp___05Fs5242) 
                                     << 1U) | (IData)(vlSelf->_cp___05Fs4959)))));
    vlSelf->_cp___05Fs3123 = vlSelf->_cp___05Fs3107;
    vlSelf->_cp___05Fs3149 = vlSelf->_cp___05Fs3107;
    vlSelf->_cp___05Fs3169 = vlSelf->_cp___05Fs3107;
    vlSelf->_cp___05Fs3171 = vlSelf->_cp___05Fs3107;
    vlSelf->_cp___05Fs3381 = vlSelf->_cp___05Fs3107;
    vlSelf->_cp___05Fs3397 = vlSelf->_cp___05Fs3107;
    vlSelf->_cp___05Fs3423 = vlSelf->_cp___05Fs3107;
    vlSelf->_cp___05Fs3443 = vlSelf->_cp___05Fs3107;
    vlSelf->_cp___05Fs3725 = vlSelf->_cp___05Fs3107;
    vlSelf->_cp___05Fs3121 = ((IData)(vlSelf->_mc___05Fs330) 
                              & (IData)(vlSelf->_cp___05Fs3107));
    vlSelf->_cp___05Fs3395 = ((IData)(vlSelf->_mc___05Fs364) 
                              & (IData)(vlSelf->_cp___05Fs3107));
    ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT___GEN_1 
        = (0x7fU & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT___GEN_0) 
                    | ((0x40U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT___GEN) 
                                 << 2U)) | (0x3fU & 
                                            ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT___GEN_0) 
                                             >> 2U)))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__readys_readys 
        = (0x1fU & (~ (((0x10U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__readys_mask)) 
                        | ((8U & ((0x7ffffff8U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT___GEN) 
                                                  >> 1U)) 
                                  | (0xfffffff8U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__readys_mask)))) 
                           | ((4U & ((0x7fffffcU & 
                                      ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT___GEN_0) 
                                       >> 5U)) | (0xfffffffcU 
                                                  & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__readys_mask)))) 
                              | (3U & (((IData)(ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT___GEN_1) 
                                        >> 5U) | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__readys_mask)))))) 
                       & ((IData)(ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT___GEN_1) 
                          | ((0x10U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT___GEN)) 
                             | ((8U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT___GEN_0) 
                                       >> 4U)) | (7U 
                                                  & ((IData)(ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT___GEN_1) 
                                                     >> 4U))))))));
    vlSelf->_cp___05Fs4555 = ((IData)(vlSelf->_cp___05Fs3166) 
                              & ((IData)(vlSelf->_mc___05Fs395)
                                  ? (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__readys_readys)
                                  : (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__state_0)));
    vlSelf->_cp___05Fs13652 = ((IData)(vlSelf->_cp___05Fs3166) 
                               & ((IData)(vlSelf->_mc___05Fs395)
                                   ? ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__readys_readys) 
                                      >> 4U) : (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__state_4)));
    vlSelf->_cp___05Fs5110 = ((IData)(vlSelf->_cp___05Fs3166) 
                              & ((IData)(vlSelf->_mc___05Fs395)
                                  ? ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__readys_readys) 
                                     >> 2U) : (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__state_2)));
    vlSelf->_cp___05Fs4830 = ((IData)(vlSelf->_cp___05Fs3166) 
                              & ((IData)(vlSelf->_mc___05Fs395)
                                  ? ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__state_1)));
    vlSelf->_mc___05Fs392 = (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__readys_readys) 
                              >> 3U) & (IData)(vlSelf->_cp___05Fs5242));
    vlSelf->_mc___05Fs393 = (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__readys_readys) 
                              >> 4U) & (IData)(vlSelf->_cp___05Fs13390));
    vlSelf->_mc___05Fs391 = (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__readys_readys) 
                              >> 2U) & (IData)(vlSelf->_cp___05Fs4959));
    vlSelf->_mc___05Fs390 = (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__readys_readys) 
                              >> 1U) & (IData)(vlSelf->_cp___05Fs4681));
    vlSelf->_cp___05Fs5391 = ((IData)(vlSelf->_cp___05Fs3166) 
                              & ((IData)(vlSelf->_mc___05Fs395)
                                  ? ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__readys_readys) 
                                     >> 3U) : (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__state_3)));
    vlSelf->_mc___05Fs389 = ((IData)(vlSelf->_cp___05Fs4404) 
                             & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__readys_readys));
    if (vlSelf->_mc___05Fs395) {
        vlSelf->_mc___05Fs404 = vlSelf->_mc___05Fs392;
        vlSelf->_mc___05Fs405 = vlSelf->_mc___05Fs393;
        vlSelf->_mc___05Fs403 = vlSelf->_mc___05Fs391;
        vlSelf->_mc___05Fs402 = vlSelf->_mc___05Fs390;
        vlSelf->_mc___05Fs401 = vlSelf->_mc___05Fs389;
    } else {
        vlSelf->_mc___05Fs404 = vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__state_3;
        vlSelf->_mc___05Fs405 = vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__state_4;
        vlSelf->_mc___05Fs403 = vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__state_2;
        vlSelf->_mc___05Fs402 = vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__state_1;
        vlSelf->_mc___05Fs401 = vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__state_0;
    }
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_77 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs4555)) 
                 | (~ (IData)(vlSelf->_mc___05Fs546))));
    vlSelf->_cp___05Fs4494 = ((IData)(vlSelf->_cp___05Fs4404) 
                              & (IData)(vlSelf->_cp___05Fs4555));
    vlSelf->_cp___05Fs5669 = vlSelf->_cp___05Fs13652;
    vlSelf->_cp___05Fs5680 = ((IData)(vlSelf->_cp___05Fs13390) 
                              & (IData)(vlSelf->_cp___05Fs13652));
    vlSelf->_cp___05Fs5674 = ((IData)(vlSelf->_cp___05Fs13652) 
                              & ((~ (IData)((0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0)))) 
                                 & (IData)(vlSelf->_cp___05Fs13390)));
    vlSelf->_cp___05Fs13580 = ((IData)(vlSelf->_cp___05Fs13652) 
                               & (IData)(vlSelf->_cp___05Fs13390));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)) 
           & (IData)(vlSelf->_cp___05Fs13652));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_68 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs5110)) 
                 | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output)));
    vlSelf->_cp___05Fs5049 = ((IData)(vlSelf->_cp___05Fs5110) 
                              & (IData)(vlSelf->_cp___05Fs4959));
    vlSelf->_cp___05Fs11158 = ((IData)(vlSelf->_cp___05Fs5110) 
                               | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__drop));
    vlSelf->_cp___05Fs4771 = ((IData)(vlSelf->_cp___05Fs4830) 
                              & (IData)(vlSelf->_cp___05Fs4681));
    vlSelf->_cp___05Fs10869 = ((IData)(vlSelf->_cp___05Fs4830) 
                               | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__drop));
    vlSelf->_cp___05Fs5332 = ((IData)(vlSelf->_cp___05Fs5391) 
                              & (IData)(vlSelf->_cp___05Fs5242));
    vlSelf->_cp___05Fs13112 = ((IData)(vlSelf->_cp___05Fs5391) 
                               | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__drop));
    vlSelf->_cp___05Fs3450 = (1U & (~ ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT___GEN_4)) 
                                       | ((IData)(vlSelf->_mc___05Fs389) 
                                          | ((IData)(vlSelf->_mc___05Fs390) 
                                             | ((IData)(vlSelf->_mc___05Fs391) 
                                                | ((IData)(vlSelf->_mc___05Fs392) 
                                                   | (IData)(vlSelf->_mc___05Fs393))))))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__prefixOR_2 
        = ((IData)(vlSelf->_mc___05Fs389) | (IData)(vlSelf->_mc___05Fs390));
    vlSelf->_cp___05Fs4531 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_77)));
    vlSelf->_cp___05Fs4510 = vlSelf->_cp___05Fs4494;
    vlSelf->_cp___05Fs4538 = vlSelf->_cp___05Fs4494;
    vlSelf->_cp___05Fs4561 = vlSelf->_cp___05Fs4494;
    vlSelf->_cp___05Fs4566 = vlSelf->_cp___05Fs4494;
    vlSelf->_cp___05Fs4508 = ((IData)(vlSelf->_mc___05Fs537) 
                              & (IData)(vlSelf->_cp___05Fs4494));
    vlSelf->_cp___05Fs4536 = ((IData)(vlSelf->_cp___05Fs4481) 
                              | (IData)(vlSelf->_cp___05Fs4494));
    vlSelf->_cp___05Fs4544 = ((IData)(vlSelf->_cp___05Fs4494) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h788cf908__0));
    vlSelf->_cp___05Fs4567 = ((IData)(vlSelf->_cp___05Fs4216) 
                              != (IData)(vlSelf->_cp___05Fs4494));
    vlSelf->_cp___05Fs4516 = ((IData)(vlSelf->_cp___05Fs4494) 
                              & ((~ (IData)(vlSelf->_cp___05Fs4407)) 
                                 & (IData)(vlSelf->_mc___05Fs541)));
    vlSelf->_cp___05Fs13593 = vlSelf->_cp___05Fs13580;
    vlSelf->_cp___05Fs13608 = vlSelf->_cp___05Fs13580;
    vlSelf->_cp___05Fs13609 = vlSelf->_cp___05Fs13580;
    vlSelf->_cp___05Fs13633 = vlSelf->_cp___05Fs13580;
    vlSelf->_cp___05Fs13635 = vlSelf->_cp___05Fs13580;
    vlSelf->_cp___05Fs13655 = vlSelf->_cp___05Fs13580;
    vlSelf->_cp___05Fs5610 = vlSelf->_cp___05Fs13580;
    vlSelf->_cp___05Fs5626 = vlSelf->_cp___05Fs13580;
    vlSelf->_cp___05Fs5652 = vlSelf->_cp___05Fs13580;
    vlSelf->_cp___05Fs5672 = vlSelf->_cp___05Fs13580;
    vlSelf->_cp___05Fs5677 = vlSelf->_cp___05Fs13580;
    vlSelf->_cp___05Fs13592 = ((IData)(vlSelf->_mc___05Fs3675) 
                               & (IData)(vlSelf->_cp___05Fs13580));
    vlSelf->_cp___05Fs13607 = ((IData)(vlSelf->_mc___05Fs3676) 
                               & (IData)(vlSelf->_cp___05Fs13580));
    vlSelf->_cp___05Fs13611 = ((IData)(vlSelf->_mc___05Fs3677) 
                               & (IData)(vlSelf->_cp___05Fs13580));
    vlSelf->_cp___05Fs13615 = ((IData)(vlSelf->_mc___05Fs3678) 
                               & (IData)(vlSelf->_cp___05Fs13580));
    vlSelf->_cp___05Fs5624 = ((IData)(vlSelf->_mc___05Fs664) 
                              & (IData)(vlSelf->_cp___05Fs13580));
    vlSelf->_cp___05Fs5632 = ((IData)(vlSelf->_cp___05Fs13580) 
                              & (IData)(vlSelf->_mc___05Fs666));
    vlSelf->_cp___05Fs5673 = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output) 
                              & ((IData)(vlSelf->_cp___05Fs5407) 
                                 & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_56 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs13652)) 
                 | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output)));
    vlSelf->_cp___05Fs5597 = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output) 
                              & (IData)(vlSelf->_cp___05Fs5407));
    vlSelf->_cp___05Fs5086 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_68)));
    vlSelf->_cp___05Fs5065 = vlSelf->_cp___05Fs5049;
    vlSelf->_cp___05Fs5093 = vlSelf->_cp___05Fs5049;
    vlSelf->_cp___05Fs5116 = vlSelf->_cp___05Fs5049;
    vlSelf->_cp___05Fs5063 = ((IData)(vlSelf->_mc___05Fs596) 
                              & (IData)(vlSelf->_cp___05Fs5049));
    vlSelf->_cp___05Fs5071 = ((IData)(vlSelf->_cp___05Fs5049) 
                              & (IData)(vlSelf->_mc___05Fs600));
    vlSelf->_cp___05Fs5091 = ((IData)(vlSelf->_cp___05Fs5036) 
                              | (IData)(vlSelf->_cp___05Fs5049));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_60 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs11158)) 
                 | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__full))));
    vlSelf->_cp___05Fs11097 = ((IData)(vlSelf->_cp___05Fs11158) 
                               & (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__full));
    vlSelf->_cp___05Fs11170 = ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__full) 
                               & (IData)(vlSelf->_cp___05Fs11158));
    vlSelf->_cp___05Fs4787 = vlSelf->_cp___05Fs4771;
    vlSelf->_cp___05Fs4813 = vlSelf->_cp___05Fs4771;
    vlSelf->_cp___05Fs4833 = vlSelf->_cp___05Fs4771;
    vlSelf->_cp___05Fs4785 = ((IData)(vlSelf->_mc___05Fs561) 
                              & (IData)(vlSelf->_cp___05Fs4771));
    vlSelf->_cp___05Fs4793 = ((IData)(vlSelf->_cp___05Fs4771) 
                              & (IData)(vlSelf->_mc___05Fs565));
    vlSelf->_cp___05Fs4841 = ((IData)(vlSelf->_cp___05Fs10607) 
                              & (IData)(vlSelf->_cp___05Fs10869));
    vlSelf->_cp___05Fs4835 = ((IData)(vlSelf->_cp___05Fs10869) 
                              & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat)) 
                                 & (IData)(vlSelf->_cp___05Fs10607)));
    vlSelf->_cp___05Fs10797 = ((IData)(vlSelf->_cp___05Fs10869) 
                               & (IData)(vlSelf->_cp___05Fs10607));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full)) 
           & (IData)(vlSelf->_cp___05Fs10869));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT___GEN 
        = ((IData)(vlSelf->_cp___05Fs10607) & ((~ (IData)(vlSelf->_mc___05Fs3407)) 
                                               & (IData)(vlSelf->_cp___05Fs10869)));
    vlSelf->_cp___05Fs5348 = vlSelf->_cp___05Fs5332;
    vlSelf->_cp___05Fs5374 = vlSelf->_cp___05Fs5332;
    vlSelf->_cp___05Fs5394 = vlSelf->_cp___05Fs5332;
    vlSelf->_cp___05Fs5346 = ((IData)(vlSelf->_mc___05Fs631) 
                              & (IData)(vlSelf->_cp___05Fs5332));
    vlSelf->_cp___05Fs5354 = ((IData)(vlSelf->_cp___05Fs5332) 
                              & (IData)(vlSelf->_mc___05Fs635));
    vlSelf->_cp___05Fs5402 = ((IData)(vlSelf->_cp___05Fs12850) 
                              & (IData)(vlSelf->_cp___05Fs13112));
    vlSelf->_cp___05Fs5396 = ((IData)(vlSelf->_cp___05Fs13112) 
                              & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat)) 
                                 & (IData)(vlSelf->_cp___05Fs12850)));
    vlSelf->_cp___05Fs13040 = ((IData)(vlSelf->_cp___05Fs13112) 
                               & (IData)(vlSelf->_cp___05Fs12850));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full)) 
           & (IData)(vlSelf->_cp___05Fs13112));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_87 
        = ((IData)(vlSelf->_cp___05Fs12850) & ((~ (IData)(vlSelf->_mc___05Fs3617)) 
                                               & (IData)(vlSelf->_cp___05Fs13112)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__prefixOR_3 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__prefixOR_2) 
           | (IData)(vlSelf->_mc___05Fs391));
    if (vlSelf->_mc___05Fs401) {
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_sink 
            = (1U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xeU));
        vlSelf->_cp___05Fs3026 = vlSelf->_cp___05Fs4413;
        vlSelf->_cp___05Fs3030 = vlSelf->_cp___05Fs4417;
        vlSelf->_cp___05Fs3028 = vlSelf->_cp___05Fs4415;
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_param 
            = (3U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                     >> 3U));
    } else {
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_sink = 0U;
        vlSelf->_cp___05Fs3026 = 0U;
        vlSelf->_cp___05Fs3030 = 0U;
        vlSelf->_cp___05Fs3028 = 0U;
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_param = 0U;
    }
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_size 
        = (0xfU & (((IData)(vlSelf->_mc___05Fs401) ? 
                    ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                      << 0x1bU) | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                   >> 5U)) : 0U) | 
                   (((IData)(vlSelf->_mc___05Fs402)
                      ? (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__anonIn_d_bits_size)
                      : 0U) | (((IData)(vlSelf->_mc___05Fs403)
                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__anonIn_d_bits_size)
                                 : 0U) | (((IData)(vlSelf->_mc___05Fs404)
                                            ? (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__anonIn_d_bits_size)
                                            : 0U) | 
                                          ((IData)(vlSelf->_mc___05Fs405)
                                            ? (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__anonIn_d_bits_size)
                                            : 0U))))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode 
        = (7U & (((IData)(vlSelf->_mc___05Fs401) ? 
                  vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]
                   : 0U) | (((IData)(vlSelf->_mc___05Fs402)
                              ? (IData)(vlSelf->_mc___05Fs3407)
                              : 0U) | (((IData)(vlSelf->_mc___05Fs403)
                                         ? (IData)(vlSelf->_mc___05Fs3443)
                                         : 0U) | (((IData)(vlSelf->_mc___05Fs404)
                                                    ? (IData)(vlSelf->_mc___05Fs3617)
                                                    : 0U) 
                                                  | (IData)(vlSelf->_mc___05Fs405))))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source 
        = (0x1fU & (((IData)(vlSelf->_mc___05Fs401)
                      ? ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                          << 0x17U) | (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                       >> 9U)) : 0U) 
                    | (((IData)(vlSelf->_mc___05Fs402)
                         ? (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source)
                         : 0U) | (((IData)(vlSelf->_mc___05Fs403)
                                    ? ((vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                        << 0x1cU) | 
                                       (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                        >> 4U)) : 0U) 
                                  | (((IData)(vlSelf->_mc___05Fs404)
                                       ? (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source)
                                       : 0U) | ((IData)(vlSelf->_mc___05Fs405)
                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source)
                                                 : 0U))))));
    vlSelf->_cp___05Fs5647 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_56)));
    vlSelf->_cp___05Fs5625 = vlSelf->_cp___05Fs5597;
    vlSelf->_cp___05Fs5609 = ((IData)(vlSelf->_mc___05Fs663) 
                              & (IData)(vlSelf->_cp___05Fs5597));
    vlSelf->_cp___05Fs5628 = ((IData)(vlSelf->_cp___05Fs5597) 
                              & (IData)(vlSelf->_mc___05Fs665));
    vlSelf->_cp___05Fs5650 = ((IData)(vlSelf->_cp___05Fs5597) 
                              | (IData)(vlSelf->_cp___05Fs13580));
    vlSelf->_cp___05Fs11134 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_60)));
    vlSelf->_cp___05Fs11113 = vlSelf->_cp___05Fs11097;
    vlSelf->_cp___05Fs11141 = vlSelf->_cp___05Fs11097;
    vlSelf->_cp___05Fs11164 = vlSelf->_cp___05Fs11097;
    vlSelf->_cp___05Fs5121 = vlSelf->_cp___05Fs11097;
    vlSelf->_cp___05Fs11111 = ((IData)(vlSelf->_mc___05Fs3444) 
                               & (IData)(vlSelf->_cp___05Fs11097));
    vlSelf->_cp___05Fs11119 = ((IData)(vlSelf->_mc___05Fs3448) 
                               & (IData)(vlSelf->_cp___05Fs11097));
    vlSelf->_cp___05Fs11139 = ((IData)(vlSelf->_cp___05Fs11084) 
                               | (IData)(vlSelf->_cp___05Fs11097));
    vlSelf->_cp___05Fs11171 = ((IData)(vlSelf->_cp___05Fs11084) 
                               != (IData)(vlSelf->_cp___05Fs11170));
    ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN_0 
        = ((IData)(vlSelf->_cp___05Fs11170) & (IData)(vlSelf->_mc___05Fs3443));
    ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN 
        = ((~ (IData)(vlSelf->_mc___05Fs3443)) & (IData)(vlSelf->_cp___05Fs11170));
    vlSelf->_cp___05Fs10810 = vlSelf->_cp___05Fs10797;
    vlSelf->_cp___05Fs10825 = vlSelf->_cp___05Fs10797;
    vlSelf->_cp___05Fs10826 = vlSelf->_cp___05Fs10797;
    vlSelf->_cp___05Fs10850 = vlSelf->_cp___05Fs10797;
    vlSelf->_cp___05Fs10852 = vlSelf->_cp___05Fs10797;
    vlSelf->_cp___05Fs10872 = vlSelf->_cp___05Fs10797;
    vlSelf->_cp___05Fs4838 = vlSelf->_cp___05Fs10797;
    vlSelf->_cp___05Fs10809 = ((IData)(vlSelf->_mc___05Fs3406) 
                               & (IData)(vlSelf->_cp___05Fs10797));
    vlSelf->_cp___05Fs10824 = ((IData)(vlSelf->_mc___05Fs3408) 
                               & (IData)(vlSelf->_cp___05Fs10797));
    vlSelf->_cp___05Fs10828 = ((IData)(vlSelf->_mc___05Fs3410) 
                               & (IData)(vlSelf->_cp___05Fs10797));
    vlSelf->_cp___05Fs10832 = ((IData)(vlSelf->_mc___05Fs3412) 
                               & (IData)(vlSelf->_cp___05Fs10797));
    vlSelf->_cp___05Fs4834 = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output) 
                              & ((IData)(vlSelf->_cp___05Fs4568) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_67 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs4830)) 
                 | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output)));
    vlSelf->_cp___05Fs4758 = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output) 
                              & (IData)(vlSelf->_cp___05Fs4568));
    vlSelf->_cp___05Fs10876 = ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT___GEN) 
                               & (IData)((((0U == (0xc000U 
                                                   & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address)) 
                                           & (0U == 
                                              (0x3ff8U 
                                               & vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_address))) 
                                          & (IData)(vlSelf->_mc___05Fs3416))));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__out_woready_9 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT___GEN) 
           & (IData)(((0x8000U == (0xc000U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address)) 
                      & (0x3ff8U == (0x3ff8U & vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_address)))));
    vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__out_woready_17 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT___GEN) 
           & (IData)(((0x4000U == (0xc000U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address)) 
                      & (0U == (0x3ff8U & vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_address)))));
    vlSelf->_cp___05Fs13053 = vlSelf->_cp___05Fs13040;
    vlSelf->_cp___05Fs13068 = vlSelf->_cp___05Fs13040;
    vlSelf->_cp___05Fs13069 = vlSelf->_cp___05Fs13040;
    vlSelf->_cp___05Fs13093 = vlSelf->_cp___05Fs13040;
    vlSelf->_cp___05Fs13095 = vlSelf->_cp___05Fs13040;
    vlSelf->_cp___05Fs13115 = vlSelf->_cp___05Fs13040;
    vlSelf->_cp___05Fs5399 = vlSelf->_cp___05Fs13040;
    vlSelf->_cp___05Fs5395 = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output) 
                              & ((IData)(vlSelf->_cp___05Fs5129) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_66 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs5391)) 
                 | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output)));
    vlSelf->_cp___05Fs5319 = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output) 
                              & (IData)(vlSelf->_cp___05Fs5129));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_a_ready 
        = (((~ (IData)(vlSelf->_mc___05Fs546)) & (IData)(vlSelf->_mc___05Fs340)) 
           | (((IData)(vlSelf->_mc___05Fs342) & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output)) 
              | (((IData)(vlSelf->_mc___05Fs343) & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output)) 
                 | (((IData)(vlSelf->_mc___05Fs339) 
                     & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output)) 
                    | ((IData)(vlSelf->_mc___05Fs341) 
                       & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output))))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_528 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_87) 
           & (IData)(((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                          >> 0xbU)) & (0x100U == (0x7f8U 
                                                  & (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address))))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_345 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_87) 
           & (IData)(((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                          >> 0xbU)) & (0x108U == (0x7f8U 
                                                  & (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address))))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_111 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_87) 
           & (IData)(((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                          >> 0xbU)) & (0x370U == (0x7f8U 
                                                  & (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address))))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_191 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_87) 
           & (IData)(((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                          >> 0xbU)) & (0x350U == (0x7f8U 
                                                  & (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address))))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_442 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_87) 
           & (IData)(((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                          >> 0xbU)) & (0x368U == (0x7f8U 
                                                  & (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address))))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_510 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_87) 
           & (IData)(((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                          >> 0xbU)) & (0x348U == (0x7f8U 
                                                  & (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address))))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_722 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_87) 
           & (IData)(((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                          >> 0xbU)) & (0x360U == (0x7f8U 
                                                  & (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address))))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_818 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_87) 
           & (IData)(((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                          >> 0xbU)) & (0x380U == (0x7f8U 
                                                  & (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address))))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_922 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_87) 
           & (IData)(((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                          >> 0xbU)) & (0x340U == (0x7f8U 
                                                  & (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address))))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1074 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_87) 
           & (IData)(((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                          >> 0xbU)) & (0x358U == (0x7f8U 
                                                  & (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address))))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1146 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_87) 
           & (IData)(((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                          >> 0xbU)) & (0x378U == (0x7f8U 
                                                  & (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address))))));
    vlSelf->_cp___05Fs3448 = (1U & (~ ((~ ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__prefixOR_3) 
                                             | (IData)(vlSelf->_mc___05Fs392)) 
                                            & (IData)(vlSelf->_mc___05Fs393)) 
                                           | (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__prefixOR_3) 
                                               & (IData)(vlSelf->_mc___05Fs392)) 
                                              | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__prefixOR_2) 
                                                 & (IData)(vlSelf->_mc___05Fs391))))) 
                                       & (~ ((IData)(vlSelf->_mc___05Fs389) 
                                             & (IData)(vlSelf->_mc___05Fs390))))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_60 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_sink) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__sink));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_60 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_sink) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__sink));
    vlSelf->_cp___05Fs3065 = vlSelf->_cp___05Fs3026;
    vlSelf->_cp___05Fs3074 = vlSelf->_cp___05Fs3026;
    vlSelf->_cp___05Fs3083 = vlSelf->_cp___05Fs3026;
    vlSelf->_cp___05Fs3300 = vlSelf->_cp___05Fs3026;
    vlSelf->_cp___05Fs3339 = vlSelf->_cp___05Fs3026;
    vlSelf->_cp___05Fs3348 = vlSelf->_cp___05Fs3026;
    vlSelf->_cp___05Fs3357 = vlSelf->_cp___05Fs3026;
    vlSelf->_cp___05Fs3304 = vlSelf->_cp___05Fs3030;
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_61 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__denied) 
           == (IData)(vlSelf->_cp___05Fs3030));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_61 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__denied) 
           == (IData)(vlSelf->_cp___05Fs3030));
    vlSelf->_cp___05Fs3043 = vlSelf->_cp___05Fs3028;
    vlSelf->_cp___05Fs3067 = vlSelf->_cp___05Fs3028;
    vlSelf->_cp___05Fs3085 = vlSelf->_cp___05Fs3028;
    vlSelf->_cp___05Fs3302 = vlSelf->_cp___05Fs3028;
    vlSelf->_cp___05Fs3317 = vlSelf->_cp___05Fs3028;
    vlSelf->_cp___05Fs3341 = vlSelf->_cp___05Fs3028;
    vlSelf->_cp___05Fs3359 = vlSelf->_cp___05Fs3028;
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_42 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs3030)) 
                 | (IData)(vlSelf->_cp___05Fs3028)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_57 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_param) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__param_1));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_57 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_param) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__param_1));
    vlSelf->_cp___05Fs3039 = (3U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_param));
    vlSelf->_cp___05Fs3041 = (2U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_param));
    vlSelf->_cp___05Fs3161 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_size));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_58 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__size_1));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_58 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__size_1));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_77 
        = ((0xfU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                    >> 6U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_size));
    vlSelf->_cp___05Fs3024 = (2U >= (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_size));
    vlSelf->_cp___05Fs3019 = (7U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode));
    vlSelf->_cp___05Fs3031 = (4U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode));
    vlSelf->_cp___05Fs3046 = (5U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode));
    vlSelf->_cp___05Fs3061 = (0U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode));
    vlSelf->_cp___05Fs3070 = (1U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode));
    vlSelf->_cp___05Fs3079 = (2U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_56 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__opcode_1));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_56 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__opcode_1));
    vlSelf->_cp___05Fs3173 = ((IData)(vlSelf->_mc___05Fs347) 
                              & ((6U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode)) 
                                 & (IData)(vlSelf->_cp___05Fs3107)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_76 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode) 
            == (IData)(vlSelf->__VdfgTmp_h001e9a75__0)) 
           | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode) 
              == (IData)(vlSelf->__VdfgTmp_hff05a675__0)));
    vlSelf->_mc___05Fs329 = (1U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode));
    vlSelf->_cp___05Fs3020 = (6U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_59 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__source_1));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_88 
        = (0x7ffffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1 
                       >> (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_59 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__source_1));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_88 
        = (0x7ffffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1 
                       >> (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source)));
    VL_SHIFTR_WWI(152,152,8, __Vtemp_192, vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source) 
                   << 3U));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_80 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_size) 
           == (0x7fU & (__Vtemp_192[0U] >> 1U)));
    VL_SHIFTR_WWI(152,152,8, __Vtemp_195, vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source) 
                   << 3U));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_89 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_size) 
           == (0x7fU & (__Vtemp_195[0U] >> 1U)));
    VL_SHIFTR_WWI(152,152,8, __Vtemp_198, vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source) 
                   << 3U));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_80 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_size) 
           == (0x7fU & (__Vtemp_198[0U] >> 1U)));
    VL_SHIFTR_WWI(152,152,8, __Vtemp_201, vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source) 
                   << 3U));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_89 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_size) 
           == (0x7fU & (__Vtemp_201[0U] >> 1U)));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_204, vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source) 
                   << 2U));
    ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_63[0U] 
        = __Vtemp_204[0U];
    ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_63[1U] 
        = __Vtemp_204[1U];
    ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_63[2U] 
        = (0xfffU & __Vtemp_204[2U]);
    VL_SHIFTR_WWI(76,76,7, __Vtemp_206, vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source) 
                   << 2U));
    ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_63[0U] 
        = __Vtemp_206[0U];
    ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_63[1U] 
        = __Vtemp_206[1U];
    ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_63[2U] 
        = (0xfffU & __Vtemp_206[2U]);
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__source_ok_1 
        = ((0U == (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source) 
                         >> 3U))) | ((1U == (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source) 
                                                   >> 3U))) 
                                     | ((0x10U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source)) 
                                        | ((0x11U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source)) 
                                           | (0x12U 
                                              == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source))))));
    ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_72 
        = ((0x1fU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xaU)) == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source));
    vlSelf->_mc___05Fs3458 = ((IData)(ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN_0) 
                              & ((IData)(vlSelf->_cp___05Fs11194) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT____VdfgTmp_h64ff008c__0)));
    vlSelf->_mc___05Fs3457 = ((IData)(ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN_0) 
                              & ((IData)(vlSelf->_cp___05Fs11193) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT____VdfgTmp_h64ff008c__0)));
    vlSelf->_cp___05Fs11178 = ((IData)(ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN) 
                               & ((IData)(vlSelf->_cp___05Fs11192) 
                                  & (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT____VdfgTmp_he21ecb82__0)));
    vlSelf->_cp___05Fs11179 = ((IData)(ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN) 
                               & ((IData)(vlSelf->_cp___05Fs11189) 
                                  & (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT____VdfgTmp_he21ecb82__0)));
    vlSelf->_cp___05Fs11186 = ((IData)(ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN) 
                               & ((IData)(vlSelf->_cp___05Fs11191) 
                                  & (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT____VdfgTmp_he21ecb82__0)));
    vlSelf->_cp___05Fs11187 = ((IData)(ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN) 
                               & ((IData)(vlSelf->_cp___05Fs11188) 
                                  & ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN_10) 
                                     & (IData)(vlSelf->_mc___05Fs3472))));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_woready_8 
        = ((IData)(ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN) 
           & ((IData)(vlSelf->_cp___05Fs11194) & (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN_10)));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_woready_11 
        = ((IData)(ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN) 
           & ((IData)(vlSelf->_cp___05Fs11193) & (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN_10)));
    vlSelf->_cp___05Fs4808 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_67)));
    vlSelf->_cp___05Fs4786 = vlSelf->_cp___05Fs4758;
    vlSelf->_cp___05Fs4770 = ((IData)(vlSelf->_mc___05Fs559) 
                              & (IData)(vlSelf->_cp___05Fs4758));
    vlSelf->_cp___05Fs4789 = ((IData)(vlSelf->_cp___05Fs4758) 
                              & (IData)(vlSelf->_mc___05Fs563));
    vlSelf->_cp___05Fs4811 = ((IData)(vlSelf->_cp___05Fs4758) 
                              | (IData)(vlSelf->_cp___05Fs4771));
    vlSelf->_cp___05Fs10877 = ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__out_woready_9) 
                               & (IData)(vlSelf->_mc___05Fs3416));
    vlSelf->_cp___05Fs10878 = ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__out_woready_9) 
                               & (IData)(vlSelf->_mc___05Fs3417));
    vlSelf->_cp___05Fs10879 = ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__out_woready_9) 
                               & (IData)(vlSelf->_mc___05Fs3418));
    vlSelf->_cp___05Fs10880 = ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__out_woready_9) 
                               & (IData)(vlSelf->_mc___05Fs3419));
    vlSelf->_cp___05Fs10881 = ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__out_woready_9) 
                               & (IData)(vlSelf->_mc___05Fs3420));
    vlSelf->_cp___05Fs10882 = ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__out_woready_9) 
                               & (IData)(vlSelf->_mc___05Fs3421));
    vlSelf->_cp___05Fs10883 = ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__out_woready_9) 
                               & (IData)(vlSelf->_mc___05Fs3422));
    vlSelf->_cp___05Fs10884 = ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__out_woready_9) 
                               & (IData)(vlSelf->_mc___05Fs3423));
    vlSelf->_cp___05Fs10885 = ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__out_woready_17) 
                               & (IData)(vlSelf->_mc___05Fs3416));
    vlSelf->_cp___05Fs10886 = ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__out_woready_17) 
                               & (IData)(vlSelf->_mc___05Fs3417));
    vlSelf->_cp___05Fs10887 = ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__out_woready_17) 
                               & (IData)(vlSelf->_mc___05Fs3418));
    vlSelf->_cp___05Fs10888 = ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__out_woready_17) 
                               & (IData)(vlSelf->_mc___05Fs3419));
    vlSelf->_cp___05Fs10889 = ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__out_woready_17) 
                               & (IData)(vlSelf->_mc___05Fs3420));
    vlSelf->_cp___05Fs10890 = ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__out_woready_17) 
                               & (IData)(vlSelf->_mc___05Fs3421));
    vlSelf->_cp___05Fs10891 = ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__out_woready_17) 
                               & (IData)(vlSelf->_mc___05Fs3422));
    vlSelf->_cp___05Fs10892 = ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__out_woready_17) 
                               & (IData)(vlSelf->_mc___05Fs3423));
    vlSelf->_cp___05Fs5369 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_66)));
    vlSelf->_cp___05Fs5347 = vlSelf->_cp___05Fs5319;
    vlSelf->_cp___05Fs5331 = ((IData)(vlSelf->_mc___05Fs629) 
                              & (IData)(vlSelf->_cp___05Fs5319));
    vlSelf->_cp___05Fs5350 = ((IData)(vlSelf->_cp___05Fs5319) 
                              & (IData)(vlSelf->_mc___05Fs633));
    vlSelf->_cp___05Fs5372 = ((IData)(vlSelf->_cp___05Fs5319) 
                              | (IData)(vlSelf->_cp___05Fs5332));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_82 
        = ((IData)(vlSelf->_mc___05Fs429) | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_a_ready));
    vlSelf->_cp___05Fs3368 = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_a_ready) 
                              & (IData)(vlSelf->_cp___05Fs3178));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__anonIn_a_ready 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__stall)) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_a_ready));
    vlSelf->_cp___05Fs13287 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_528) 
                               & (0x3ffU == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_86)));
    vlSelf->_cp___05Fs13137 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_528) 
                               & (0x3ffU == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_85)));
    vlSelf->_cp___05Fs13138 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_345) 
                               & (0x3ffU == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_85)));
    vlSelf->_cp___05Fs13377 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_345) 
                               & (0x3ffU == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_86)));
    vlSelf->_cp___05Fs13292 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_111) 
                               & (IData)(vlSelf->_mc___05Fs3647));
    vlSelf->_cp___05Fs13293 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_111) 
                               & (IData)(vlSelf->_mc___05Fs3648));
    vlSelf->_cp___05Fs13294 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_111) 
                               & (IData)(vlSelf->_mc___05Fs3649));
    vlSelf->_cp___05Fs13295 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_111) 
                               & (IData)(vlSelf->_mc___05Fs3650));
    vlSelf->_cp___05Fs13296 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_111) 
                               & (IData)(vlSelf->_mc___05Fs3651));
    vlSelf->_cp___05Fs13297 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_111) 
                               & (IData)(vlSelf->_mc___05Fs3652));
    vlSelf->_cp___05Fs13298 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_111) 
                               & (IData)(vlSelf->_mc___05Fs3653));
    vlSelf->_cp___05Fs13299 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_111) 
                               & (IData)(vlSelf->_mc___05Fs3654));
    vlSelf->_cp___05Fs13300 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_191) 
                               & (IData)(vlSelf->_mc___05Fs3647));
    vlSelf->_cp___05Fs13301 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_191) 
                               & (IData)(vlSelf->_mc___05Fs3648));
    vlSelf->_cp___05Fs13302 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_191) 
                               & (IData)(vlSelf->_mc___05Fs3649));
    vlSelf->_cp___05Fs13303 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_191) 
                               & (IData)(vlSelf->_mc___05Fs3650));
    vlSelf->_cp___05Fs13304 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_191) 
                               & (IData)(vlSelf->_mc___05Fs3651));
    vlSelf->_cp___05Fs13305 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_191) 
                               & (IData)(vlSelf->_mc___05Fs3652));
    vlSelf->_cp___05Fs13306 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_191) 
                               & (IData)(vlSelf->_mc___05Fs3653));
    vlSelf->_cp___05Fs13307 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_191) 
                               & (IData)(vlSelf->_mc___05Fs3654));
    vlSelf->_cp___05Fs13308 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_442) 
                               & (IData)(vlSelf->_mc___05Fs3647));
    vlSelf->_cp___05Fs13309 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_442) 
                               & (IData)(vlSelf->_mc___05Fs3648));
    vlSelf->_cp___05Fs13310 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_442) 
                               & (IData)(vlSelf->_mc___05Fs3649));
    vlSelf->_cp___05Fs13311 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_442) 
                               & (IData)(vlSelf->_mc___05Fs3650));
    vlSelf->_cp___05Fs13312 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_442) 
                               & (IData)(vlSelf->_mc___05Fs3651));
    vlSelf->_cp___05Fs13313 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_442) 
                               & (IData)(vlSelf->_mc___05Fs3652));
    vlSelf->_cp___05Fs13314 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_442) 
                               & (IData)(vlSelf->_mc___05Fs3653));
    vlSelf->_cp___05Fs13315 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_442) 
                               & (IData)(vlSelf->_mc___05Fs3654));
    vlSelf->_cp___05Fs13316 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_510) 
                               & (IData)(vlSelf->_mc___05Fs3647));
    vlSelf->_cp___05Fs13317 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_510) 
                               & (IData)(vlSelf->_mc___05Fs3648));
    vlSelf->_cp___05Fs13318 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_510) 
                               & (IData)(vlSelf->_mc___05Fs3649));
    vlSelf->_cp___05Fs13319 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_510) 
                               & (IData)(vlSelf->_mc___05Fs3650));
    vlSelf->_cp___05Fs13320 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_510) 
                               & (IData)(vlSelf->_mc___05Fs3651));
    vlSelf->_cp___05Fs13321 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_510) 
                               & (IData)(vlSelf->_mc___05Fs3652));
    vlSelf->_cp___05Fs13322 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_510) 
                               & (IData)(vlSelf->_mc___05Fs3653));
    vlSelf->_cp___05Fs13323 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_510) 
                               & (IData)(vlSelf->_mc___05Fs3654));
    vlSelf->_cp___05Fs13324 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_722) 
                               & (IData)(vlSelf->_mc___05Fs3647));
    vlSelf->_cp___05Fs13325 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_722) 
                               & (IData)(vlSelf->_mc___05Fs3648));
    vlSelf->_cp___05Fs13326 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_722) 
                               & (IData)(vlSelf->_mc___05Fs3649));
    vlSelf->_cp___05Fs13327 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_722) 
                               & (IData)(vlSelf->_mc___05Fs3650));
    vlSelf->_cp___05Fs13328 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_722) 
                               & (IData)(vlSelf->_mc___05Fs3651));
    vlSelf->_cp___05Fs13329 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_722) 
                               & (IData)(vlSelf->_mc___05Fs3652));
    vlSelf->_cp___05Fs13330 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_722) 
                               & (IData)(vlSelf->_mc___05Fs3653));
    vlSelf->_cp___05Fs13331 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_722) 
                               & (IData)(vlSelf->_mc___05Fs3654));
    vlSelf->_cp___05Fs13332 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_818) 
                               & (IData)(vlSelf->_mc___05Fs3647));
    vlSelf->_cp___05Fs13333 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_818) 
                               & (IData)(vlSelf->_mc___05Fs3648));
    vlSelf->_cp___05Fs13334 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_818) 
                               & (IData)(vlSelf->_mc___05Fs3649));
    vlSelf->_cp___05Fs13335 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_818) 
                               & (IData)(vlSelf->_mc___05Fs3650));
    vlSelf->_cp___05Fs13336 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_818) 
                               & (IData)(vlSelf->_mc___05Fs3651));
    vlSelf->_cp___05Fs13337 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_818) 
                               & (IData)(vlSelf->_mc___05Fs3652));
    vlSelf->_cp___05Fs13338 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_818) 
                               & (IData)(vlSelf->_mc___05Fs3653));
    vlSelf->_cp___05Fs13339 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_818) 
                               & (IData)(vlSelf->_mc___05Fs3654));
    vlSelf->_cp___05Fs13340 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_922) 
                               & (IData)(vlSelf->_mc___05Fs3647));
    vlSelf->_cp___05Fs13341 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_922) 
                               & (IData)(vlSelf->_mc___05Fs3648));
    vlSelf->_cp___05Fs13342 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_922) 
                               & (IData)(vlSelf->_mc___05Fs3649));
    vlSelf->_cp___05Fs13343 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_922) 
                               & (IData)(vlSelf->_mc___05Fs3650));
    vlSelf->_cp___05Fs13344 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_922) 
                               & (IData)(vlSelf->_mc___05Fs3651));
    vlSelf->_cp___05Fs13345 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_922) 
                               & (IData)(vlSelf->_mc___05Fs3652));
    vlSelf->_cp___05Fs13346 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_922) 
                               & (IData)(vlSelf->_mc___05Fs3653));
    vlSelf->_cp___05Fs13347 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_922) 
                               & (IData)(vlSelf->_mc___05Fs3654));
    vlSelf->_cp___05Fs13348 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1074) 
                               & (IData)(vlSelf->_mc___05Fs3647));
    vlSelf->_cp___05Fs13349 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1074) 
                               & (IData)(vlSelf->_mc___05Fs3648));
    vlSelf->_cp___05Fs13350 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1074) 
                               & (IData)(vlSelf->_mc___05Fs3649));
    vlSelf->_cp___05Fs13351 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1074) 
                               & (IData)(vlSelf->_mc___05Fs3650));
    vlSelf->_cp___05Fs13352 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1074) 
                               & (IData)(vlSelf->_mc___05Fs3651));
    vlSelf->_cp___05Fs13353 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1074) 
                               & (IData)(vlSelf->_mc___05Fs3652));
    vlSelf->_cp___05Fs13354 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1074) 
                               & (IData)(vlSelf->_mc___05Fs3653));
    vlSelf->_cp___05Fs13355 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1074) 
                               & (IData)(vlSelf->_mc___05Fs3654));
    vlSelf->_cp___05Fs13356 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1146) 
                               & (IData)(vlSelf->_mc___05Fs3647));
    vlSelf->_cp___05Fs13357 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1146) 
                               & (IData)(vlSelf->_mc___05Fs3648));
    vlSelf->_cp___05Fs13358 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1146) 
                               & (IData)(vlSelf->_mc___05Fs3649));
    vlSelf->_cp___05Fs13359 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1146) 
                               & (IData)(vlSelf->_mc___05Fs3650));
    vlSelf->_cp___05Fs13360 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1146) 
                               & (IData)(vlSelf->_mc___05Fs3651));
    vlSelf->_cp___05Fs13361 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1146) 
                               & (IData)(vlSelf->_mc___05Fs3652));
    vlSelf->_cp___05Fs13362 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1146) 
                               & (IData)(vlSelf->_mc___05Fs3653));
    vlSelf->_cp___05Fs13363 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1146) 
                               & (IData)(vlSelf->_mc___05Fs3654));
    vlSelf->_cp___05Fs3118 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_60)));
    vlSelf->_cp___05Fs3392 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_60)));
    vlSelf->_cp___05Fs3120 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_61)));
    vlSelf->_cp___05Fs3394 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_61)));
    vlSelf->_cp___05Fs3058 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_42)));
    vlSelf->_cp___05Fs3112 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_57)));
    vlSelf->_cp___05Fs3386 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_57)));
    vlSelf->_cp___05Fs3054 = vlSelf->_cp___05Fs3039;
    vlSelf->_cp___05Fs3313 = vlSelf->_cp___05Fs3039;
    vlSelf->_cp___05Fs3328 = vlSelf->_cp___05Fs3039;
    vlSelf->_cp___05Fs3056 = vlSelf->_cp___05Fs3041;
    vlSelf->_cp___05Fs3315 = vlSelf->_cp___05Fs3041;
    vlSelf->_cp___05Fs3330 = vlSelf->_cp___05Fs3041;
    vlSelf->_cp___05Fs3435 = vlSelf->_cp___05Fs3161;
    vlSelf->_cp___05Fs3114 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_58)));
    vlSelf->_cp___05Fs3388 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_58)));
    vlSelf->_cp___05Fs3137 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_77)));
    vlSelf->_cp___05Fs3037 = vlSelf->_cp___05Fs3024;
    vlSelf->_cp___05Fs3052 = vlSelf->_cp___05Fs3024;
    vlSelf->_cp___05Fs3298 = vlSelf->_cp___05Fs3024;
    vlSelf->_cp___05Fs3311 = vlSelf->_cp___05Fs3024;
    vlSelf->_cp___05Fs3326 = vlSelf->_cp___05Fs3024;
    vlSelf->_cp___05Fs3293 = vlSelf->_cp___05Fs3019;
    vlSelf->_cp___05Fs3305 = vlSelf->_cp___05Fs3031;
    vlSelf->_cp___05Fs3320 = vlSelf->_cp___05Fs3046;
    vlSelf->_cp___05Fs3335 = vlSelf->_cp___05Fs3061;
    vlSelf->_cp___05Fs3344 = vlSelf->_cp___05Fs3070;
    vlSelf->_cp___05Fs3353 = vlSelf->_cp___05Fs3079;
    vlSelf->_cp___05Fs3110 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_56)));
    vlSelf->_cp___05Fs3384 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_56)));
    vlSelf->_cp___05Fs3177 = vlSelf->_cp___05Fs3173;
    vlSelf->_cp___05Fs3135 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_76)));
    vlSelf->_mc___05Fs333 = vlSelf->_mc___05Fs329;
    vlSelf->_mc___05Fs337 = vlSelf->_mc___05Fs329;
    vlSelf->_mc___05Fs346 = vlSelf->_mc___05Fs329;
    vlSelf->_mc___05Fs363 = vlSelf->_mc___05Fs329;
    vlSelf->_mc___05Fs367 = vlSelf->_mc___05Fs329;
    vlSelf->_mc___05Fs371 = vlSelf->_mc___05Fs329;
    vlSelf->_cp___05Fs3294 = vlSelf->_cp___05Fs3020;
    vlSelf->_cp___05Fs3129 = ((IData)(vlSelf->_cp___05Fs3107) 
                              & ((~ (IData)(vlSelf->_cp___05Fs3020)) 
                                 & (IData)(vlSelf->_mc___05Fs334)));
    vlSelf->_cp___05Fs3403 = ((IData)(vlSelf->_cp___05Fs3107) 
                              & ((~ (IData)(vlSelf->_cp___05Fs3020)) 
                                 & (IData)(vlSelf->_mc___05Fs368)));
    vlSelf->_cp___05Fs3128 = ((~ (IData)(vlSelf->_cp___05Fs3020)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_69));
    vlSelf->_cp___05Fs3402 = ((~ (IData)(vlSelf->_cp___05Fs3020)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_69));
    ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT____VdfgTmp_h788cf908__0 
        = ((IData)(vlSelf->_mc___05Fs338) & (IData)(vlSelf->_cp___05Fs3020));
    ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT____VdfgTmp_h788cf908__0 
        = ((IData)(vlSelf->_mc___05Fs372) & (IData)(vlSelf->_cp___05Fs3020));
    vlSelf->_cp___05Fs3116 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_59)));
    vlSelf->_cp___05Fs3158 = (1U & (~ vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_88));
    vlSelf->_cp___05Fs3390 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_59)));
    vlSelf->_cp___05Fs3432 = (1U & (~ vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_88));
    vlSelf->_cp___05Fs3141 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_80)));
    vlSelf->_cp___05Fs3163 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_89)));
    vlSelf->_cp___05Fs3415 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_80)));
    vlSelf->_cp___05Fs3437 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_89)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_78 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode) 
            == ((0x17U >= (0x1fU & ((IData)(3U) * (7U 
                                                   & (ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_63[0U] 
                                                      >> 1U)))))
                 ? (7U & (0x911240U >> (0x1fU & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_63[0U] 
                                                     >> 1U))))))
                 : 0U)) | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode) 
                           == ((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_63[0U] 
                                                       >> 1U)))))
                                ? (7U & (0x951240U 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & (ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_63[0U] 
                                                      >> 1U))))))
                                : 0U)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_78 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode) 
            == ((0x17U >= (0x1fU & ((IData)(3U) * (7U 
                                                   & (ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_63[0U] 
                                                      >> 1U)))))
                 ? (7U & (0x911240U >> (0x1fU & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_63[0U] 
                                                     >> 1U))))))
                 : 0U)) | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode) 
                           == ((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_63[0U] 
                                                       >> 1U)))))
                                ? (7U & (0x951240U 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & (ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_63[0U] 
                                                      >> 1U))))))
                                : 0U)));
    vlSelf->_cp___05Fs3022 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__source_ok_1)));
    vlSelf->_cp___05Fs3133 = ((IData)(vlSelf->_cp___05Fs3124) 
                              & (IData)(ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_72));
    vlSelf->_cp___05Fs3407 = ((IData)(vlSelf->_cp___05Fs3398) 
                              & (IData)(ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_72));
    __VdfgTmp_hcd8cfd14__0 = ((~ (IData)(vlSelf->_cp___05Fs3020)) 
                              & (IData)(ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_72));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN_1 
        = (((IData)(vlSelf->_mc___05Fs3458) << 1U) 
           | (IData)(vlSelf->_mc___05Fs3457));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__claimed 
        = ((IData)(vlSelf->_mc___05Fs3457) & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__maxDevs_0)));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__claiming 
        = (((IData)(vlSelf->_mc___05Fs3457) ? (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__maxDevs_0)
             : 0U) | ((IData)(vlSelf->_mc___05Fs3458)
                       ? (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__maxDevs_1)
                       : 0U));
    vlSelf->_cp___05Fs11180 = ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_woready_8) 
                               & (IData)(vlSelf->_mc___05Fs3468));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__completer_1 
        = (7U & ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_woready_8) 
                 & ((0xffffffffU == vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN_11) 
                    & (((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__enables_1_0) 
                        << 1U) >> (3U & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[1U] 
                                         >> 0x18U))))));
    vlSelf->_cp___05Fs11183 = ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_woready_11) 
                               & (IData)(vlSelf->_mc___05Fs3468));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__completer_0 
        = (7U & ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_woready_11) 
                 & ((0xffffffffU == vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN_11) 
                    & (((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__enables_0_0) 
                        << 1U) >> (3U & (vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[1U] 
                                         >> 0x18U))))));
    vlSelf->_cp___05Fs10875 = ((IData)(vlSelf->_cp___05Fs10877) 
                               | ((IData)(vlSelf->_cp___05Fs10878) 
                                  | ((IData)(vlSelf->_cp___05Fs10879) 
                                     | ((IData)(vlSelf->_cp___05Fs10880) 
                                        | ((IData)(vlSelf->_cp___05Fs10881) 
                                           | ((IData)(vlSelf->_cp___05Fs10882) 
                                              | ((IData)(vlSelf->_cp___05Fs10883) 
                                                 | (IData)(vlSelf->_cp___05Fs10884))))))));
    vlSelf->_cp___05Fs10874 = ((IData)(vlSelf->_cp___05Fs10885) 
                               | ((IData)(vlSelf->_cp___05Fs10886) 
                                  | ((IData)(vlSelf->_cp___05Fs10887) 
                                     | ((IData)(vlSelf->_cp___05Fs10888) 
                                        | ((IData)(vlSelf->_cp___05Fs10889) 
                                           | ((IData)(vlSelf->_cp___05Fs10890) 
                                              | ((IData)(vlSelf->_cp___05Fs10891) 
                                                 | (IData)(vlSelf->_cp___05Fs10892))))))));
    vlSelf->_cp___05Fs3418 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_82)));
    vlSelf->_cp___05Fs3396 = vlSelf->_cp___05Fs3368;
    vlSelf->_cp___05Fs3380 = ((IData)(vlSelf->_mc___05Fs362) 
                              & (IData)(vlSelf->_cp___05Fs3368));
    vlSelf->_cp___05Fs3399 = ((IData)(vlSelf->_cp___05Fs3368) 
                              & (IData)(vlSelf->_mc___05Fs366));
    vlSelf->_cp___05Fs3421 = ((IData)(vlSelf->_cp___05Fs3368) 
                              | (IData)(vlSelf->_cp___05Fs3107));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_82 
        = ((IData)(vlSelf->_mc___05Fs429) | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__anonIn_a_ready));
    vlSelf->_cp___05Fs3094 = ((IData)(vlSelf->_cp___05Fs2904) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__anonIn_a_ready));
    vlSelf->_cp___05Fs3076 = vlSelf->_cp___05Fs3058;
    vlSelf->_cp___05Fs3332 = vlSelf->_cp___05Fs3058;
    vlSelf->_cp___05Fs3350 = vlSelf->_cp___05Fs3058;
    vlSelf->_cp___05Fs3411 = vlSelf->_cp___05Fs3137;
    vlSelf->_cp___05Fs3409 = vlSelf->_cp___05Fs3135;
    vlSelf->_cp___05Fs3130 = vlSelf->_cp___05Fs3128;
    vlSelf->_cp___05Fs3404 = vlSelf->_cp___05Fs3402;
    vlSelf->_cp___05Fs3155 = ((IData)(vlSelf->_cp___05Fs3107) 
                              & (IData)(ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT____VdfgTmp_h788cf908__0));
    vlSelf->_cp___05Fs3154 = ((IData)(vlSelf->_cp___05Fs3017) 
                              & (IData)(ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT____VdfgTmp_h788cf908__0));
    vlSelf->_cp___05Fs3429 = ((IData)(vlSelf->_cp___05Fs3107) 
                              & (IData)(ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT____VdfgTmp_h788cf908__0));
    vlSelf->_cp___05Fs3428 = ((IData)(vlSelf->_cp___05Fs3017) 
                              & (IData)(ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT____VdfgTmp_h788cf908__0));
    vlSelf->_cp___05Fs3139 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_78)));
    vlSelf->_cp___05Fs3413 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_78)));
    vlSelf->_cp___05Fs3033 = vlSelf->_cp___05Fs3022;
    vlSelf->_cp___05Fs3048 = vlSelf->_cp___05Fs3022;
    vlSelf->_cp___05Fs3063 = vlSelf->_cp___05Fs3022;
    vlSelf->_cp___05Fs3072 = vlSelf->_cp___05Fs3022;
    vlSelf->_cp___05Fs3081 = vlSelf->_cp___05Fs3022;
    vlSelf->_cp___05Fs3296 = vlSelf->_cp___05Fs3022;
    vlSelf->_cp___05Fs3307 = vlSelf->_cp___05Fs3022;
    vlSelf->_cp___05Fs3322 = vlSelf->_cp___05Fs3022;
    vlSelf->_cp___05Fs3337 = vlSelf->_cp___05Fs3022;
    vlSelf->_cp___05Fs3346 = vlSelf->_cp___05Fs3022;
    vlSelf->_cp___05Fs3355 = vlSelf->_cp___05Fs3022;
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_75 
        = (1U & ((0x7ffffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight 
                              >> (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source))) 
                 | (IData)(vlSelf->_cp___05Fs3133)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_75 
        = (1U & ((0x7ffffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight 
                              >> (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source))) 
                 | (IData)(vlSelf->_cp___05Fs3407)));
    vlSelf->_cp___05Fs3142 = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_69) 
                              & ((IData)(vlSelf->_mc___05Fs332) 
                                 & ((IData)(vlSelf->_cp___05Fs2904) 
                                    & (IData)(__VdfgTmp_hcd8cfd14__0))));
    vlSelf->_cp___05Fs3416 = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_69) 
                              & ((IData)(vlSelf->_mc___05Fs366) 
                                 & ((IData)(vlSelf->_cp___05Fs3178) 
                                    & (IData)(__VdfgTmp_hcd8cfd14__0))));
    vlSelf->_cp___05Fs11173 = (0U != ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN_1) 
                                      & ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN_1) 
                                         - (IData)(1U))));
    vlSelf->_cp___05Fs11202 = ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__claimed) 
                               | (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__completer_0));
    vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN_5 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__completer_1) 
            << 1U) | (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__completer_0));
    vlSelf->_mc___05Fs3459 = ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__completer_0) 
                              | (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__completer_1));
    vlSelf->_cp___05Fs3144 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_82)));
    vlSelf->_cp___05Fs3122 = vlSelf->_cp___05Fs3094;
    vlSelf->_cp___05Fs3170 = vlSelf->_cp___05Fs3094;
    vlSelf->_cp___05Fs3723 = vlSelf->_cp___05Fs3094;
    vlSelf->_cp___05Fs3106 = ((IData)(vlSelf->_mc___05Fs328) 
                              & (IData)(vlSelf->_cp___05Fs3094));
    vlSelf->_cp___05Fs3125 = ((IData)(vlSelf->_cp___05Fs3094) 
                              & (IData)(vlSelf->_mc___05Fs332));
    vlSelf->_cp___05Fs3147 = ((IData)(vlSelf->_cp___05Fs3094) 
                              | (IData)(vlSelf->_cp___05Fs3107));
    vlSelf->_cp___05Fs3174 = ((IData)(vlSelf->_cp___05Fs3094) 
                              & (0U == (0x6000U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->_cp___05Fs3175 = ((IData)(vlSelf->_cp___05Fs3094) 
                              & (0x2000U == (0x6000U 
                                             & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->_cp___05Fs3172 = ((IData)(vlSelf->_mc___05Fs345) 
                              & (IData)(vlSelf->_cp___05Fs3094));
    vlSelf->_cp___05Fs3156 = vlSelf->_cp___05Fs3154;
    vlSelf->_cp___05Fs3430 = vlSelf->_cp___05Fs3428;
    vlSelf->_cp___05Fs3132 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_75)));
    vlSelf->_cp___05Fs3406 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_75)));
    vlSelf->_cp___05Fs11203 = vlSelf->_cp___05Fs11202;
    vlSelf->_cp___05Fs11177 = (0U != ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN_5) 
                                      & ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT___GEN_5) 
                                         - (IData)(1U))));
    vlSelf->_cp___05Fs11166 = (7U & ((IData)(vlSelf->_mc___05Fs3459) 
                                     & (((IData)(1U) 
                                         << (3U & (
                                                   vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[1U] 
                                                   >> 0x18U))) 
                                        >> 1U)));
    vlSelf->_cp___05Fs11168 = (3U & ((IData)(vlSelf->_mc___05Fs3459) 
                                     & (((IData)(1U) 
                                         << (3U & (
                                                   vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[1U] 
                                                   >> 0x18U))) 
                                        >> 2U)));
    vlSelf->_cp___05Fs3176 = vlSelf->_cp___05Fs3172;
}
