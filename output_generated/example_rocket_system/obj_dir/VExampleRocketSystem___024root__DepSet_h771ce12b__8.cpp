// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExampleRocketSystem.h for the primary calling header

#include "VExampleRocketSystem__pch.h"
#include "VExampleRocketSystem___024root.h"

VL_INLINE_OPT void VExampleRocketSystem___024root___nba_comb__TOP__2(VExampleRocketSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root___nba_comb__TOP__2\n"); );
    // Init
    CData/*1:0*/ ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT___GEN;
    ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT___GEN = 0;
    CData/*1:0*/ ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT___GEN_4;
    ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT___GEN_4 = 0;
    CData/*1:0*/ ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT___GEN_9;
    ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT___GEN_9 = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_6;
    ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_6 = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_9;
    ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_9 = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_62;
    ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_62 = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT____VdfgTmp_he430778b__0;
    ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT____VdfgTmp_he430778b__0 = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_12;
    ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_12 = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_15;
    ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_15 = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_21;
    ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_21 = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h79ced34c__0;
    ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h79ced34c__0 = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h4ea4ca6f__0;
    ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h4ea4ca6f__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_44 
        = ((7U & vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__opcode));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_45 
        = ((7U & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 3U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__param));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_46 
        = ((0xfU & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                    >> 6U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__size));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_47 
        = ((0xfU & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                    >> 0xaU)) == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__source));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_48 
        = (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__address 
           == ((vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                << 0x12U) | (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xeU)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_66 
        = (0xffffU & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight) 
                      >> (0xfU & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                  >> 0xaU))));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_44 
        = ((7U & vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor__DOT__opcode));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_45 
        = ((7U & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 3U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor__DOT__param));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_46 
        = ((0xfU & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                    >> 6U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor__DOT__size));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_47 
        = ((0xfU & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                    >> 0xaU)) == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor__DOT__source));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_48 
        = (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor__DOT__address 
           == ((vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                << 0x12U) | (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xeU)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_66 
        = (0xffffU & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight) 
                      >> (0xfU & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                  >> 0xaU))));
    vlSelf->_cp___05Fs987 = ((IData)(vlSelf->_cp___05Fs796) 
                             & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor__DOT__a_first_counter)));
    vlSelf->_cp___05Fs1016 = ((IData)(vlSelf->_cp___05Fs796) 
                              & (IData)(vlSelf->_mc___05Fs129));
    vlSelf->_mc___05Fs105 = ((IData)(vlSelf->_cp___05Fs1060) 
                             & (IData)(vlSelf->_mc___05Fs106));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT___GEN_5 
        = (1U & ((~ (((~ (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                          >> 0xdU)) & ((IData)(vlSelf->_mc___05Fs175) 
                                       & (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__flight_0) 
                                           | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__flight_1) 
                                              | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__flight_2) 
                                                 | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__flight_3) 
                                                    | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__flight_4) 
                                                       | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__flight_5) 
                                                          | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__flight_6) 
                                                             | (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__flight_7)))))))) 
                                          & ((0U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__a_id)) 
                                             | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__stalls_id) 
                                                != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__a_id)))))) 
                     | ((vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                         >> 0xdU) & ((IData)(vlSelf->_mc___05Fs175) 
                                     & (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__flight_8) 
                                         | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__flight_9) 
                                            | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__flight_10) 
                                               | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__flight_11) 
                                                  | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__flight_12) 
                                                     | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__flight_13) 
                                                        | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__flight_14) 
                                                           | (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__flight_15)))))))) 
                                        & ((0U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__a_id)) 
                                           | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__stalls_id_1) 
                                              != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__a_id)))))))) 
                 | (IData)(vlSelf->_mc___05Fs171)));
    vlSelf->_cp___05Fs194 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_44)));
    vlSelf->_cp___05Fs196 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_45)));
    vlSelf->_cp___05Fs198 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_46)));
    vlSelf->_cp___05Fs200 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_47)));
    vlSelf->_cp___05Fs202 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_48)));
    vlSelf->_cp___05Fs224 = (1U & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_66));
    vlSelf->_cp___05Fs989 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_44)));
    vlSelf->_cp___05Fs991 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_45)));
    vlSelf->_cp___05Fs993 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_46)));
    vlSelf->_cp___05Fs995 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_47)));
    vlSelf->_cp___05Fs997 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_48)));
    vlSelf->_cp___05Fs1019 = (1U & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_66));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor__DOT__a_set_wo_ready 
        = ((IData)(vlSelf->_cp___05Fs1016) ? (0xffffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (0xfU 
                                                  & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xaU))))
            : 0U);
    vlSelf->_cp___05Fs1 = ((IData)(vlSelf->_cp___05Fs796) 
                           & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT___GEN_5));
    vlSelf->_cp___05Fs192 = ((IData)(vlSelf->_cp___05Fs1) 
                             & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__a_first_counter)));
    vlSelf->_cp___05Fs221 = ((IData)(vlSelf->_cp___05Fs1) 
                             & (IData)(vlSelf->_mc___05Fs5));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_valid 
        = ((IData)(vlSelf->_cp___05Fs1) & (IData)(vlSelf->_mc___05Fs53));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_valid 
        = ((IData)(vlSelf->_cp___05Fs1) & (IData)(vlSelf->_mc___05Fs54));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_0_valid 
        = ((IData)(vlSelf->_cp___05Fs1) & (IData)(vlSelf->_mc___05Fs52));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__a_set_wo_ready 
        = ((IData)(vlSelf->_cp___05Fs221) ? (0xffffU 
                                             & ((IData)(1U) 
                                                << 
                                                (0xfU 
                                                 & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0xaU))))
            : 0U);
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT___GEN_7 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_valid) 
           | (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_1_valid));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_valid_1 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_1_valid) 
            << 1U) | (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_valid));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT___GEN_12 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_valid) 
           | (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_2_valid));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_valid_2 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_2_valid) 
            << 1U) | (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_valid));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT___GEN_2 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_0_valid) 
           | (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_0_valid));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_valid 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_0_valid) 
            << 1U) | (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_0_valid));
    ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT___GEN_4 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_mask_1)) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_valid_1));
    ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT___GEN_9 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_mask_2)) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_valid_2));
    ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT___GEN 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_mask)) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_valid));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_1 
        = (3U & (~ (((2U & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_mask_1)) 
                     | (1U & (((IData)(ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT___GEN_4) 
                               >> 1U) | (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_mask_1)))) 
                    & (((2U & ((IData)(ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT___GEN_4) 
                               << 1U)) | (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_1_valid)) 
                       | (IData)(ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT___GEN_4)))));
    vlSelf->_cp___05Fs1677 = ((IData)(vlSelf->_mc___05Fs97)
                               ? (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT___GEN_12)
                               : (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__state_2_0) 
                                   & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_valid)) 
                                  | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__state_2_1) 
                                     & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_2_valid))));
    vlSelf->_cp___05Fs1868 = ((IData)(vlSelf->_cp___05Fs1677) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter)));
    vlSelf->_cp___05Fs1897 = ((IData)(vlSelf->_cp___05Fs1677) 
                              & (IData)(vlSelf->_mc___05Fs221));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_2 
        = (3U & (~ (((2U & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_mask_2)) 
                     | (1U & (((IData)(ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT___GEN_9) 
                               >> 1U) | (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_mask_2)))) 
                    & (((2U & ((IData)(ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT___GEN_9) 
                               << 1U)) | (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_2_valid)) 
                       | (IData)(ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT___GEN_9)))));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys 
        = (3U & (~ (((2U & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_mask)) 
                     | (1U & (((IData)(ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT___GEN) 
                               >> 1U) | (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_mask)))) 
                    & (((2U & ((IData)(ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT___GEN) 
                               << 1U)) | (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_0_valid)) 
                       | (IData)(ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT___GEN)))));
    vlSelf->_mc___05Fs87 = (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_1) 
                             >> 1U) & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_1_valid));
    vlSelf->_mc___05Fs86 = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_1) 
                            & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_valid));
    if (vlSelf->_mc___05Fs89) {
        vlSelf->_cp___05Fs6991 = vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT___GEN_7;
        vlSelf->_mc___05Fs93 = vlSelf->_mc___05Fs87;
        vlSelf->_mc___05Fs92 = vlSelf->_mc___05Fs86;
    } else {
        vlSelf->_cp___05Fs6991 = (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__state_1_0) 
                                   & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_valid)) 
                                  | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__state_1_1) 
                                     & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_1_valid)));
        vlSelf->_mc___05Fs93 = vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__state_1_1;
        vlSelf->_mc___05Fs92 = vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__state_1_0;
    }
    vlSelf->_mc___05Fs95 = (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_2) 
                             >> 1U) & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_2_valid));
    vlSelf->_mc___05Fs94 = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_2) 
                            & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_valid));
    if (vlSelf->_mc___05Fs97) {
        vlSelf->_mc___05Fs101 = vlSelf->_mc___05Fs95;
        vlSelf->_mc___05Fs100 = vlSelf->_mc___05Fs94;
    } else {
        vlSelf->_mc___05Fs101 = vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__state_2_1;
        vlSelf->_mc___05Fs100 = vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__state_2_0;
    }
    vlSelf->_mc___05Fs78 = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys) 
                            & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_0_valid));
    vlSelf->_mc___05Fs79 = (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys) 
                             >> 1U) & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_0_valid));
    if (vlSelf->_mc___05Fs81) {
        vlSelf->_cp___05Fs3728 = vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT___GEN_2;
        vlSelf->_mc___05Fs84 = vlSelf->_mc___05Fs78;
        vlSelf->_mc___05Fs85 = vlSelf->_mc___05Fs79;
    } else {
        vlSelf->_cp___05Fs3728 = (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__state_0) 
                                   & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_0_valid)) 
                                  | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__state_1) 
                                     & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_0_valid)));
        vlSelf->_mc___05Fs84 = vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__state_0;
        vlSelf->_mc___05Fs85 = vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__state_1;
    }
    vlSelf->_cp___05Fs772 = (1U & (~ ((~ (IData)(vlSelf->_mc___05Fs86)) 
                                      | (~ (IData)(vlSelf->_mc___05Fs87)))));
    vlSelf->_cp___05Fs774 = (1U & (~ ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT___GEN_7)) 
                                      | ((IData)(vlSelf->_mc___05Fs86) 
                                         | (IData)(vlSelf->_mc___05Fs87)))));
    vlSelf->_cp___05Fs779 = (1U & (~ ((~ (IData)(vlSelf->_mc___05Fs94)) 
                                      | (~ (IData)(vlSelf->_mc___05Fs95)))));
    vlSelf->_cp___05Fs781 = (1U & (~ ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT___GEN_12)) 
                                      | ((IData)(vlSelf->_mc___05Fs94) 
                                         | (IData)(vlSelf->_mc___05Fs95)))));
    vlSelf->_cp___05Fs765 = (1U & (~ ((~ (IData)(vlSelf->_mc___05Fs78)) 
                                      | (~ (IData)(vlSelf->_mc___05Fs79)))));
    vlSelf->_cp___05Fs767 = (1U & (~ ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT___GEN_2)) 
                                      | ((IData)(vlSelf->_mc___05Fs78) 
                                         | (IData)(vlSelf->_mc___05Fs79)))));
    vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_user_amba_prot_bufferable 
        = ((IData)(vlSelf->_mc___05Fs92) & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                            >> 0xeU));
    vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_user_amba_prot_modifiable 
        = ((IData)(vlSelf->_mc___05Fs92) & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                            >> 0xfU));
    vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_user_amba_prot_readalloc 
        = ((IData)(vlSelf->_mc___05Fs92) & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                            >> 0x10U));
    vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_user_amba_prot_writealloc 
        = ((IData)(vlSelf->_mc___05Fs92) & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                            >> 0x11U));
    vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_user_amba_prot_privileged 
        = ((IData)(vlSelf->_mc___05Fs92) & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                            >> 0x12U));
    vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_user_amba_prot_secure 
        = ((IData)(vlSelf->_mc___05Fs92) & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                            >> 0x13U));
    vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_user_amba_prot_fetch 
        = ((IData)(vlSelf->_mc___05Fs92) & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                            >> 0x14U));
    vlSelf->_cp___05Fs7012 = (((IData)(vlSelf->_mc___05Fs92) 
                               & (IData)(vlSelf->_cp___05Fs113)) 
                              | ((IData)(vlSelf->_mc___05Fs93) 
                                 & (IData)(vlSelf->_cp___05Fs1088)));
    vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_mask 
        = (0xffU & (((IData)(vlSelf->_mc___05Fs92) ? 
                     ((vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                       << 0xbU) | (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                   >> 0x15U)) : 0U) 
                    | ((IData)(vlSelf->_mc___05Fs93)
                        ? ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                            << 0x14U) | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                         >> 0xcU)) : 0U)));
    vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_param 
        = (7U & (((IData)(vlSelf->_mc___05Fs92) ? (
                                                   (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                    << 0x1dU) 
                                                   | (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 3U))
                   : 0U) | ((IData)(vlSelf->_mc___05Fs93)
                             ? ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                 << 0x1dU) | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 3U))
                             : 0U)));
    vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_opcode 
        = (7U & (((IData)(vlSelf->_mc___05Fs92) ? vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]
                   : 0U) | ((IData)(vlSelf->_mc___05Fs93)
                             ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]
                             : 0U)));
    vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_source 
        = (((IData)(vlSelf->_mc___05Fs92) ? (0xfU & 
                                             (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xaU))
             : 0U) | ((IData)(vlSelf->_mc___05Fs93)
                       ? (0x10U | (3U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xaU)))
                       : 0U));
    vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_size 
        = (7U & (((IData)(vlSelf->_mc___05Fs92) ? (
                                                   (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                    << 0x1aU) 
                                                   | (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U))
                   : 0U) | ((IData)(vlSelf->_mc___05Fs93)
                             ? ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                 << 0x1aU) | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U))
                             : 0U)));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___filter_io_response_bits_address 
        = (((IData)(vlSelf->_mc___05Fs92) ? ((vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                              << 0x12U) 
                                             | (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xeU))
             : 0U) | ((IData)(vlSelf->_mc___05Fs93)
                       ? ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                           << 0x14U) | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                        >> 0xcU)) : 0U));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_data 
        = (((IData)(vlSelf->_mc___05Fs100) ? (((QData)((IData)(
                                                               vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                                               << 0x23U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                                  << 3U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                                    >> 0x1dU)))
             : 0ULL) | ((IData)(vlSelf->_mc___05Fs101)
                         ? (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                             << 0x2cU) | (((QData)((IData)(
                                                           vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                           << 0xcU) 
                                          | ((QData)((IData)(
                                                             vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                             >> 0x14U)))
                         : 0ULL));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_cache 
        = ((0x3fff8U & (((IData)(vlSelf->_mc___05Fs100) 
                         << 3U) & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                   >> 0xeU))) | ((0x3fffcU 
                                                  & (((IData)(vlSelf->_mc___05Fs100) 
                                                      << 2U) 
                                                     & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                        >> 0xeU))) 
                                                 | (3U 
                                                    & ((- (IData)((IData)(vlSelf->_mc___05Fs100))) 
                                                       & ((vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                           << 0x12U) 
                                                          | (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                             >> 0xeU))))));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_prot 
        = ((0x3ffcU & (((IData)(vlSelf->_mc___05Fs100) 
                        << 2U) & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0x12U))) | ((2U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->_mc___05Fs100) 
                                                       & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                          >> 0x13U))) 
                                                     << 1U)) 
                                                 | ((IData)(vlSelf->_mc___05Fs100) 
                                                    & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                       >> 0x12U))));
    vlSelf->_cp___05Fs1698 = (((IData)(vlSelf->_mc___05Fs100) 
                               & (IData)(vlSelf->_cp___05Fs113)) 
                              | ((IData)(vlSelf->_mc___05Fs101) 
                                 & (IData)(vlSelf->_cp___05Fs1088)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_mask 
        = (0xffU & (((IData)(vlSelf->_mc___05Fs100)
                      ? ((vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                          << 0xbU) | (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                      >> 0x15U)) : 0U) 
                    | ((IData)(vlSelf->_mc___05Fs101)
                        ? ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                            << 0x14U) | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                         >> 0xcU)) : 0U)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_param 
        = (7U & (((IData)(vlSelf->_mc___05Fs100) ? 
                  ((vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                    << 0x1dU) | (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                 >> 3U)) : 0U) | ((IData)(vlSelf->_mc___05Fs101)
                                                   ? 
                                                  ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                    << 0x1dU) 
                                                   | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 3U))
                                                   : 0U)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_address 
        = (0x7fffffffU & (((IData)(vlSelf->_mc___05Fs100)
                            ? ((vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                << 0x12U) | (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xeU))
                            : 0U) | ((IData)(vlSelf->_mc___05Fs101)
                                      ? ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                          << 0x14U) 
                                         | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xcU))
                                      : 0U)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_size 
        = (0xfU & (((IData)(vlSelf->_mc___05Fs100) ? 
                    ((vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                      << 0x1aU) | (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                   >> 6U)) : 0U) | 
                   ((IData)(vlSelf->_mc___05Fs101) ? 
                    ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                      << 0x1aU) | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                   >> 6U)) : 0U)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_source 
        = (((IData)(vlSelf->_mc___05Fs100) ? (0xfU 
                                              & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xaU))
             : 0U) | ((IData)(vlSelf->_mc___05Fs101)
                       ? (0x10U | (3U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xaU)))
                       : 0U));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_opcode 
        = (7U & (((IData)(vlSelf->_mc___05Fs100) ? 
                  vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]
                   : 0U) | ((IData)(vlSelf->_mc___05Fs101)
                             ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]
                             : 0U)));
    vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_data 
        = (((IData)(vlSelf->_mc___05Fs84) ? (((QData)((IData)(
                                                              vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                                              << 0x23U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                                 << 3U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                                   >> 0x1dU)))
             : 0ULL) | ((IData)(vlSelf->_mc___05Fs85)
                         ? (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                             << 0x2cU) | (((QData)((IData)(
                                                           vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                           << 0xcU) 
                                          | ((QData)((IData)(
                                                             vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                             >> 0x14U)))
                         : 0ULL));
    vlSelf->_cp___05Fs3749 = (((IData)(vlSelf->_mc___05Fs84) 
                               & (IData)(vlSelf->_cp___05Fs113)) 
                              | ((IData)(vlSelf->_mc___05Fs85) 
                                 & (IData)(vlSelf->_cp___05Fs1088)));
    vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_mask 
        = (0xffU & (((IData)(vlSelf->_mc___05Fs84) ? 
                     ((vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                       << 0xbU) | (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                   >> 0x15U)) : 0U) 
                    | ((IData)(vlSelf->_mc___05Fs85)
                        ? ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                            << 0x14U) | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                         >> 0xcU)) : 0U)));
    vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_param 
        = (7U & (((IData)(vlSelf->_mc___05Fs84) ? (
                                                   (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                    << 0x1dU) 
                                                   | (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 3U))
                   : 0U) | ((IData)(vlSelf->_mc___05Fs85)
                             ? ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                 << 0x1dU) | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 3U))
                             : 0U)));
    vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_source 
        = (((IData)(vlSelf->_mc___05Fs84) ? (0xfU & 
                                             (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xaU))
             : 0U) | ((IData)(vlSelf->_mc___05Fs85)
                       ? (0x10U | (3U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xaU)))
                       : 0U));
    vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size 
        = (0xfU & (((IData)(vlSelf->_mc___05Fs84) ? 
                    ((vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                      << 0x1aU) | (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                   >> 6U)) : 0U) | 
                   ((IData)(vlSelf->_mc___05Fs85) ? 
                    ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                      << 0x1aU) | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                   >> 6U)) : 0U)));
    vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
        = (0xfffffffU & (((IData)(vlSelf->_mc___05Fs84)
                           ? ((vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                               << 0x12U) | (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xeU))
                           : 0U) | ((IData)(vlSelf->_mc___05Fs85)
                                     ? ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                         << 0x14U) 
                                        | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xcU))
                                     : 0U)));
    vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_opcode 
        = (7U & (((IData)(vlSelf->_mc___05Fs84) ? vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]
                   : 0U) | ((IData)(vlSelf->_mc___05Fs85)
                             ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]
                             : 0U)));
    vlSelf->_cp___05Fs7031 = vlSelf->_cp___05Fs7012;
    vlSelf->_cp___05Fs7046 = vlSelf->_cp___05Fs7012;
    vlSelf->_cp___05Fs7103 = vlSelf->_cp___05Fs7012;
    vlSelf->_cp___05Fs7010 = (0xffU != (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_mask));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
        = (((IData)((((IData)(vlSelf->_mc___05Fs92)
                       ? (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                           << 0x23U) | (((QData)((IData)(
                                                         vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                         << 3U) | ((QData)((IData)(
                                                                   vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                                   >> 0x1dU)))
                       : 0ULL) | ((IData)(vlSelf->_mc___05Fs93)
                                   ? (((QData)((IData)(
                                                       vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                                       << 0x2cU) | 
                                      (((QData)((IData)(
                                                        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                        << 0xcU) | 
                                       ((QData)((IData)(
                                                        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                        >> 0x14U)))
                                   : 0ULL))) << 8U) 
           | (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_mask));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT____Vcellinp__ram_ext__W0_data[1U] 
        = (((IData)((((IData)(vlSelf->_mc___05Fs92)
                       ? (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                           << 0x23U) | (((QData)((IData)(
                                                         vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                         << 3U) | ((QData)((IData)(
                                                                   vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                                   >> 0x1dU)))
                       : 0ULL) | ((IData)(vlSelf->_mc___05Fs93)
                                   ? (((QData)((IData)(
                                                       vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                                       << 0x2cU) | 
                                      (((QData)((IData)(
                                                        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                        << 0xcU) | 
                                       ((QData)((IData)(
                                                        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                        >> 0x14U)))
                                   : 0ULL))) >> 0x18U) 
           | ((IData)(((((IData)(vlSelf->_mc___05Fs92)
                          ? (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                              << 0x23U) | (((QData)((IData)(
                                                            vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                            << 3U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                              >> 0x1dU)))
                          : 0ULL) | ((IData)(vlSelf->_mc___05Fs93)
                                      ? (((QData)((IData)(
                                                          vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                                          << 0x2cU) 
                                         | (((QData)((IData)(
                                                             vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                             << 0xcU) 
                                            | ((QData)((IData)(
                                                               vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                               >> 0x14U)))
                                      : 0ULL)) >> 0x20U)) 
              << 8U));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT____Vcellinp__ram_ext__W0_data[2U] 
        = ((IData)(((((IData)(vlSelf->_mc___05Fs92)
                       ? (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                           << 0x23U) | (((QData)((IData)(
                                                         vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                         << 3U) | ((QData)((IData)(
                                                                   vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                                   >> 0x1dU)))
                       : 0ULL) | ((IData)(vlSelf->_mc___05Fs93)
                                   ? (((QData)((IData)(
                                                       vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                                       << 0x2cU) | 
                                      (((QData)((IData)(
                                                        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                        << 0xcU) | 
                                       ((QData)((IData)(
                                                        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                        >> 0x14U)))
                                   : 0ULL)) >> 0x20U)) 
           >> 0x18U);
    vlSelf->_cp___05Fs7077 = (5U <= (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_param));
    vlSelf->_cp___05Fs7088 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_param) 
                                    >> 2U));
    vlSelf->_cp___05Fs7099 = (2U <= (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_param));
    vlSelf->_mc___05Fs872 = (0U == (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_param));
    vlSelf->_cp___05Fs7008 = (3U <= (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_param));
    vlSelf->_mc___05Fs874 = (2U == (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_param));
    vlSelf->_cp___05Fs7042 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_param));
    vlSelf->_mc___05Fs873 = (1U == (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_param));
    vlSelf->_cp___05Fs7047 = (0U == (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_opcode));
    vlSelf->_mc___05Fs877 = (1U == (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_opcode));
    vlSelf->_mc___05Fs878 = (2U == (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_opcode));
    vlSelf->_mc___05Fs879 = (3U == (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_opcode));
    vlSelf->_mc___05Fs782 = (1U & (~ ((IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_opcode) 
                                      >> 2U)));
    vlSelf->_mc___05Fs880 = (4U == (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_opcode));
    vlSelf->_mc___05Fs881 = (5U == (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_opcode));
    vlSelf->_mc___05Fs882 = (6U == (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_opcode));
    vlSelf->_mc___05Fs883 = (7U == (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_opcode));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__source_ok 
        = ((0U == (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_source) 
                         >> 3U))) | ((1U == (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_source) 
                                                   >> 3U))) 
                                     | ((0x10U == (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_source)) 
                                        | ((0x11U == (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_source)) 
                                           | (0x12U 
                                              == (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_source))))));
    vlSelf->_cp___05Fs7004 = (2U >= (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_size));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_14 
        = ((0x10U == (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_source)) 
           & ((6U == (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_size)) 
              & (8U == (vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___filter_io_response_bits_address 
                        >> 0x1cU))));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_12 
        = ((7U != (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_size)) 
           & (8U == (vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___filter_io_response_bits_address 
                     >> 0x1cU)));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_7 
        = (0x3fU & ((~ ((IData)(0x3fU) << (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_size))) 
                    & vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___filter_io_response_bits_address));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___filter_io_response_bits_address)));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___filter_io_response_bits_address)));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___filter_io_response_bits_address)));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___filter_io_response_bits_address)));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_acc 
        = ((2U < (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_size)) 
           | ((~ (vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___filter_io_response_bits_address 
                  >> 2U)) & (2U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_size)))));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_acc_1 
        = ((2U < (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_size)) 
           | ((2U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_size))) 
              & (vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___filter_io_response_bits_address 
                 >> 2U)));
    vlSelf->_cp___05Fs1717 = vlSelf->_cp___05Fs1698;
    vlSelf->_cp___05Fs1732 = vlSelf->_cp___05Fs1698;
    vlSelf->_cp___05Fs1789 = vlSelf->_cp___05Fs1698;
    vlSelf->_cp___05Fs1696 = (0xffU != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_mask));
    vlSelf->_cp___05Fs1763 = (5U <= (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_param));
    vlSelf->_cp___05Fs1774 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_param) 
                                    >> 2U));
    vlSelf->_cp___05Fs1785 = (2U <= (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_param));
    vlSelf->_cp___05Fs1694 = (3U <= (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_param));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_39 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_param) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__param));
    vlSelf->_cp___05Fs1728 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_param));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_42 
        = (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__address 
           == vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_address);
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_address)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_address)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_address)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_address)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_16 
        = (IData)(((0x60000000U == (0x60000000U & vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_address)) 
                   & (7U > (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_size))));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_40 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__size));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_67 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_7 
        = (0xffU & ((~ ((IData)(0xffU) << (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_size))) 
                    & vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_address));
    vlSelf->_mc___05Fs233 = (2U < (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_size));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_41 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_source) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__source));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_57 
        = (0x7ffffU & (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight 
                       >> (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_source)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_11 
        = ((0x10U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_source)) 
           & ((6U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_size)) 
              & (IData)(((0x60000000U == (0x60000000U 
                                          & vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_address)) 
                         & (0xdU > (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_size))))));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready 
        = ((IData)(vlSelf->_cp___05Fs1897) ? (0x7ffffU 
                                              & ((IData)(1U) 
                                                 << (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_source)))
            : 0U);
    ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_62 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_source) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__source_ok 
        = ((0U == (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_source) 
                         >> 3U))) | ((1U == (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_source) 
                                                   >> 3U))) 
                                     | ((0x10U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_source)) 
                                        | ((0x11U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_source)) 
                                           | (0x12U 
                                              == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_source))))));
    __Vtemp_1[0U] = 0x92249249U;
    __Vtemp_1[1U] = 0x921c4924U;
    __Vtemp_1[2U] = 0x24924924U;
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id 
        = ((0x5fU >= (0x7fU & ((IData)(3U) * (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_source))))
            ? (7U & (((0U == (0x1fU & ((IData)(3U) 
                                       * (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_source))))
                       ? 0U : (__Vtemp_1[(((IData)(2U) 
                                           + (0x7fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_source)))) 
                                          >> 5U)] << 
                               ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_source)))))) 
                     | (__Vtemp_1[(3U & (((IData)(3U) 
                                          * (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_source)) 
                                         >> 5U))] >> 
                        (0x1fU & ((IData)(3U) * (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_source))))))
            : 0U);
    vlSelf->_cp___05Fs1682 = (6U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_opcode));
    vlSelf->_cp___05Fs1699 = (7U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_opcode));
    vlSelf->_cp___05Fs1718 = (4U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_opcode));
    vlSelf->_cp___05Fs1733 = (0U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_opcode));
    vlSelf->_cp___05Fs1744 = (1U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_opcode));
    vlSelf->_cp___05Fs1755 = (2U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_opcode));
    vlSelf->_cp___05Fs1766 = (3U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_opcode));
    vlSelf->_cp___05Fs1777 = (5U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_opcode));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__out_w_bits_last 
        = ((1U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__counter)) 
           | (0U == ((4U & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_opcode))
                      ? 0U : (0x1fU & (~ (0xfffffU 
                                          & (((IData)(0xffU) 
                                              << (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_size)) 
                                             >> 3U)))))));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_38 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_opcode) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__opcode));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_66 
        = (((IData)(vlSelf->_mc___05Fs218) == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_opcode))))
                                                ? (7U 
                                                   & (0x911240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_opcode)))))
                                                : 0U)) 
           | ((IData)(vlSelf->_mc___05Fs218) == ((0x17U 
                                                  >= 
                                                  (0x1fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_opcode))))
                                                  ? 
                                                 (7U 
                                                  & (0x951240U 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         * (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_opcode)))))
                                                  : 0U)));
    vlSelf->_mc___05Fs216 = (1U & (~ ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_opcode) 
                                      >> 2U)));
    if (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full) {
        vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size 
            = (0xfU & ((vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                        << 5U) | (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                  >> 0x1bU)));
        vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source 
            = (0x1fU & ((vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[2U] 
                         << 1U) | (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                   >> 0x1fU)));
        vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_id 
            = (7U & vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[0U]);
        vlSelf->_mc___05Fs232 = (1U & (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[2U] 
                                       >> 4U));
    } else {
        vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size 
            = (0xfU & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_size));
        vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source 
            = (0x1fU & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_source));
        vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_id 
            = (7U & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id));
        vlSelf->_mc___05Fs232 = (1U & (IData)(vlSelf->_mc___05Fs216));
    }
    vlSelf->_cp___05Fs3768 = vlSelf->_cp___05Fs3749;
    vlSelf->_cp___05Fs3783 = vlSelf->_cp___05Fs3749;
    vlSelf->_cp___05Fs3840 = vlSelf->_cp___05Fs3749;
    vlSelf->_cp___05Fs3747 = (0xffU != (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_mask));
    vlSelf->_mc___05Fs491 = (1U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_param)));
    vlSelf->_mc___05Fs492 = (0U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_param)));
    vlSelf->_mc___05Fs493 = (3U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_param)));
    vlSelf->_cp___05Fs3814 = (5U <= (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_param));
    vlSelf->_cp___05Fs3836 = (2U <= (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_param));
    vlSelf->_cp___05Fs3745 = (3U <= (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_param));
    vlSelf->_cp___05Fs3825 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_param) 
                                    >> 2U));
    vlSelf->_cp___05Fs3779 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_param));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__source_ok 
        = ((0U == (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_source) 
                         >> 3U))) | ((1U == (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_source) 
                                                   >> 3U))) 
                                     | ((0x10U == (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_source)) 
                                        | ((0x11U == (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_source)) 
                                           | (0x12U 
                                              == (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_source))))));
    vlSelf->_cp___05Fs3741 = (2U >= (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_7 
        = (0xfffU & ((~ ((IData)(0xfffU) << (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))) 
                     & vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address));
    ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h4ea4ca6f__0 
        = ((0U == ((0xc00U & (vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                              >> 0x10U)) | (0x3ffU 
                                            & (0x200U 
                                               ^ (vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                                                  >> 0x10U))))) 
           | (3U == (3U & (vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                           >> 0x1aU))));
    ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_12 
        = (0U == ((0xfffcU & (vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                              >> 0xcU)) | (3U & (~ 
                                                 (vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                                                  >> 0xcU)))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_acc 
        = ((2U < (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size)) 
           | ((~ (vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                  >> 2U)) & (2U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size)))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_1 
        = ((2U < (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size)) 
           | ((2U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))) 
              & (vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                 >> 2U)));
    ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT____VdfgTmp_he430778b__0 
        = ((4U > (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size)) 
           & (0U == ((8U & (vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                            >> 0x18U)) | ((4U & (vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                                                 >> 0x17U)) 
                                          | ((2U & 
                                              (vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                                               >> 0xfU)) 
                                             | (1U 
                                                & (~ 
                                                   (vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                                                    >> 0xdU))))))));
    vlSelf->_cp___05Fs3733 = (6U == (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_opcode));
    vlSelf->_cp___05Fs3769 = (4U == (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_opcode));
    vlSelf->_cp___05Fs3784 = (0U == (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_opcode));
    vlSelf->_cp___05Fs3795 = (1U == (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_opcode));
    vlSelf->_cp___05Fs3828 = (5U == (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_opcode));
    vlSelf->_cp___05Fs3750 = (7U == (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_opcode));
    vlSelf->_mc___05Fs348 = (1U & (~ ((IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_opcode) 
                                      >> 2U)));
    vlSelf->_mc___05Fs452 = (2U == (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_opcode));
    vlSelf->_mc___05Fs453 = (3U == (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_opcode));
    vlSelf->_cp___05Fs7029 = vlSelf->_cp___05Fs7010;
    vlSelf->_mc___05Fs875 = vlSelf->_mc___05Fs872;
    vlSelf->_cp___05Fs7025 = vlSelf->_cp___05Fs7008;
    vlSelf->_cp___05Fs7027 = (1U & (~ (IData)(vlSelf->_cp___05Fs7042)));
    vlSelf->_cp___05Fs7055 = vlSelf->_cp___05Fs7042;
    vlSelf->_cp___05Fs7066 = vlSelf->_cp___05Fs7042;
    vlSelf->_mc___05Fs876 = vlSelf->_mc___05Fs873;
    vlSelf->_cp___05Fs7058 = vlSelf->_mc___05Fs877;
    vlSelf->_cp___05Fs7069 = vlSelf->_mc___05Fs878;
    vlSelf->_cp___05Fs7080 = vlSelf->_mc___05Fs879;
    vlSelf->_mc___05Fs789 = vlSelf->_mc___05Fs782;
    vlSelf->_mc___05Fs869 = vlSelf->_mc___05Fs782;
    vlSelf->_mc___05Fs886 = vlSelf->_mc___05Fs782;
    vlSelf->_cp___05Fs7032 = vlSelf->_mc___05Fs880;
    vlSelf->_cp___05Fs7091 = vlSelf->_mc___05Fs881;
    vlSelf->_cp___05Fs6996 = vlSelf->_mc___05Fs882;
    vlSelf->_cp___05Fs7013 = vlSelf->_mc___05Fs883;
    vlSelf->_mc___05Fs885 = (1U & (((IData)(vlSelf->_mc___05Fs883) 
                                    | (IData)(vlSelf->_mc___05Fs882))
                                    ? ((IData)(vlSelf->_mc___05Fs874) 
                                       | (IData)(vlSelf->_mc___05Fs873))
                                    : ((IData)(vlSelf->_mc___05Fs881)
                                        ? (IData)(vlSelf->_mc___05Fs873)
                                        : (~ (IData)(vlSelf->_mc___05Fs880)))));
    vlSelf->_cp___05Fs7002 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__source_ok)));
    vlSelf->_cp___05Fs7021 = vlSelf->_cp___05Fs7004;
    vlSelf->_cp___05Fs7000 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_14)));
    vlSelf->_cp___05Fs7036 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_12)));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_13 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__source_ok) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_12));
    vlSelf->_cp___05Fs7006 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_7));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_size))) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_eq_2)));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_size))) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_eq_3)));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_size))) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_eq_4)));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_size))) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_eq_5)));
    vlSelf->_cp___05Fs1715 = vlSelf->_cp___05Fs1696;
    vlSelf->_cp___05Fs1711 = vlSelf->_cp___05Fs1694;
    vlSelf->_cp___05Fs1872 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_39)));
    vlSelf->_cp___05Fs1713 = (1U & (~ (IData)(vlSelf->_cp___05Fs1728)));
    vlSelf->_cp___05Fs1741 = vlSelf->_cp___05Fs1728;
    vlSelf->_cp___05Fs1752 = vlSelf->_cp___05Fs1728;
    vlSelf->_cp___05Fs1878 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_42)));
    vlSelf->_cp___05Fs1722 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_16)));
    vlSelf->_cp___05Fs1874 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_40)));
    vlSelf->_cp___05Fs1910 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_67)));
    vlSelf->_cp___05Fs1692 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_7));
    vlSelf->_cp___05Fs1690 = (1U & (~ (IData)(vlSelf->_mc___05Fs233)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_size 
        = ((IData)(vlSelf->_mc___05Fs233) ? 3U : (7U 
                                                  & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_size)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc 
        = ((IData)(vlSelf->_mc___05Fs233) | ((~ (vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_address 
                                                 >> 2U)) 
                                             & (2U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_size)))));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_1 
        = ((IData)(vlSelf->_mc___05Fs233) | ((2U == 
                                              (3U & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_size))) 
                                             & (vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_address 
                                                >> 2U)));
    vlSelf->_cp___05Fs1876 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_41)));
    vlSelf->_cp___05Fs1900 = (1U & vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_57);
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source) 
            << 4U) | (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size));
    vlSelf->_cp___05Fs1686 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_11)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_73 
        = ((vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready 
            != ((IData)(vlSelf->_cp___05Fs1901) ? (0x7ffffU 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source)))
                 : 0U)) | (0U == vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready));
    vlSelf->_cp___05Fs1915 = ((IData)(vlSelf->_cp___05Fs1901) 
                              & ((IData)(vlSelf->_mc___05Fs221) 
                                 & ((IData)(vlSelf->_cp___05Fs1677) 
                                    & (IData)(ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_62))));
    vlSelf->_cp___05Fs1906 = ((IData)(vlSelf->_cp___05Fs1897) 
                              & (IData)(ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_62));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_15 
        = ((0xdU > (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_size)) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__source_ok));
    vlSelf->_cp___05Fs1688 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__source_ok)));
    vlSelf->_cp___05Fs1870 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_38)));
    vlSelf->_cp___05Fs1908 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_66)));
    vlSelf->_mc___05Fs220 = vlSelf->_mc___05Fs216;
    vlSelf->_mc___05Fs230 = vlSelf->_mc___05Fs216;
    vlSelf->_mc___05Fs234 = vlSelf->_mc___05Fs216;
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__idStall_1 
        = (((0U != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__count_2)) 
            & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__write_1) 
               != (IData)(vlSelf->_mc___05Fs216))) 
           | (8U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__count_2)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__idStall_2 
        = (((0U != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__count_3)) 
            & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__write_2) 
               != (IData)(vlSelf->_mc___05Fs216))) 
           | (8U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__count_3)));
    vlSelf->_cp___05Fs3766 = vlSelf->_cp___05Fs3747;
    vlSelf->_cp___05Fs3762 = vlSelf->_cp___05Fs3745;
    vlSelf->_cp___05Fs3764 = (1U & (~ (IData)(vlSelf->_cp___05Fs3779)));
    vlSelf->_cp___05Fs3792 = vlSelf->_cp___05Fs3779;
    vlSelf->_cp___05Fs3803 = vlSelf->_cp___05Fs3779;
    vlSelf->_cp___05Fs3739 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__source_ok)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_20 
        = ((0xdU > (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size)) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__source_ok));
    vlSelf->_cp___05Fs3758 = vlSelf->_cp___05Fs3741;
    vlSelf->_cp___05Fs3743 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_7));
    ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h79ced34c__0 
        = ((0U == ((0xffeU & (vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                              >> 0x10U)) | (1U & (~ 
                                                  (vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                                                   >> 0x10U))))) 
           | (IData)(ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h4ea4ca6f__0));
    ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_15 
        = ((0U == (0xffffU & (vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                              >> 0xcU))) | (IData)(ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_12));
    ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_21 
        = ((0xdU > (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size)) 
           & (IData)(ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_12));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_2)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_3)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_4)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_5)));
    vlSelf->_mc___05Fs440 = vlSelf->_mc___05Fs348;
    vlSelf->_mc___05Fs444 = vlSelf->_mc___05Fs348;
    vlSelf->_mc___05Fs482 = vlSelf->_mc___05Fs348;
    vlSelf->_cp___05Fs3806 = vlSelf->_mc___05Fs452;
    if (vlSelf->_mc___05Fs453) {
        vlSelf->_cp___05Fs3817 = 1U;
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__a_isSupported 
            = (1U & (IData)(ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT____VdfgTmp_he430778b__0));
    } else {
        vlSelf->_cp___05Fs3817 = 0U;
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__a_isSupported 
            = (1U & ((~ (IData)(vlSelf->_mc___05Fs452)) 
                     | (IData)(ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT____VdfgTmp_he430778b__0)));
    }
    vlSelf->_cp___05Fs7019 = vlSelf->_cp___05Fs7002;
    vlSelf->_cp___05Fs7034 = vlSelf->_cp___05Fs7002;
    vlSelf->_cp___05Fs7038 = vlSelf->_cp___05Fs7002;
    vlSelf->_cp___05Fs7051 = vlSelf->_cp___05Fs7002;
    vlSelf->_cp___05Fs7062 = vlSelf->_cp___05Fs7002;
    vlSelf->_cp___05Fs7073 = vlSelf->_cp___05Fs7002;
    vlSelf->_cp___05Fs7084 = vlSelf->_cp___05Fs7002;
    vlSelf->_cp___05Fs7095 = vlSelf->_cp___05Fs7002;
    vlSelf->_cp___05Fs7017 = vlSelf->_cp___05Fs7000;
    vlSelf->_cp___05Fs6998 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_13)));
    vlSelf->_cp___05Fs7023 = vlSelf->_cp___05Fs7006;
    vlSelf->_cp___05Fs7040 = vlSelf->_cp___05Fs7006;
    vlSelf->_cp___05Fs7053 = vlSelf->_cp___05Fs7006;
    vlSelf->_cp___05Fs7064 = vlSelf->_cp___05Fs7006;
    vlSelf->_cp___05Fs7075 = vlSelf->_cp___05Fs7006;
    vlSelf->_cp___05Fs7086 = vlSelf->_cp___05Fs7006;
    vlSelf->_cp___05Fs7097 = vlSelf->_cp___05Fs7006;
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_eq_5) 
                & vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___filter_io_response_bits_address)) 
            << 7U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_acc_5) 
                        | ((~ vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___filter_io_response_bits_address) 
                           & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_eq_5))) 
                       << 6U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_eq_4) 
                                      & vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___filter_io_response_bits_address)) 
                                  << 5U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_acc_4) 
                                              | ((~ vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___filter_io_response_bits_address) 
                                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_eq_4))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___filter_io_response_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((~ vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___filter_io_response_bits_address) 
                                                       & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_eq_3))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___filter_io_response_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((~ vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___filter_io_response_bits_address) 
                                                           & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask_eq_2))))))))));
    vlSelf->_cp___05Fs1709 = vlSelf->_cp___05Fs1692;
    vlSelf->_cp___05Fs1726 = vlSelf->_cp___05Fs1692;
    vlSelf->_cp___05Fs1739 = vlSelf->_cp___05Fs1692;
    vlSelf->_cp___05Fs1750 = vlSelf->_cp___05Fs1692;
    vlSelf->_cp___05Fs1761 = vlSelf->_cp___05Fs1692;
    vlSelf->_cp___05Fs1772 = vlSelf->_cp___05Fs1692;
    vlSelf->_cp___05Fs1783 = vlSelf->_cp___05Fs1692;
    vlSelf->_cp___05Fs1707 = vlSelf->_cp___05Fs1690;
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_size))) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_2)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_size))) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_3)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_size))) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_4)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_size))) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_5)));
    vlSelf->_cp___05Fs1703 = vlSelf->_cp___05Fs1686;
    vlSelf->_cp___05Fs1919 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_73)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_65 
        = (1U & ((0x7ffffU & (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight 
                              >> (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source))) 
                 | (IData)(vlSelf->_cp___05Fs1906)));
    vlSelf->_cp___05Fs1720 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_15)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_19 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_15) 
           & (IData)(((0x60000000U == (0x60000000U 
                                       & vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_address)) 
                      & (9U > (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_size)))));
    vlSelf->_cp___05Fs1705 = vlSelf->_cp___05Fs1688;
    vlSelf->_cp___05Fs1724 = vlSelf->_cp___05Fs1688;
    vlSelf->_cp___05Fs1737 = vlSelf->_cp___05Fs1688;
    vlSelf->_cp___05Fs1748 = vlSelf->_cp___05Fs1688;
    vlSelf->_cp___05Fs1759 = vlSelf->_cp___05Fs1688;
    vlSelf->_cp___05Fs1770 = vlSelf->_cp___05Fs1688;
    vlSelf->_cp___05Fs1781 = vlSelf->_cp___05Fs1688;
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeOut_ar_deq_q__DOT____Vcellinp__ram_ext__W0_data 
        = (((QData)((IData)(((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                              ? (0xfU & (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                         >> 0x17U))
                              : 0U))) << 0x38U) | (
                                                   ((QData)((IData)(
                                                                    (7U 
                                                                     & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                                                         ? 
                                                                        ((vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                                                          << 0xcU) 
                                                                         | (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                                                            >> 0x14U))
                                                                         : (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_prot))))) 
                                                    << 0x35U) 
                                                   | (((QData)((IData)(
                                                                       (0xfU 
                                                                        & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                                                            ? 
                                                                           ((vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                                                             << 0x10U) 
                                                                            | (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                                                               >> 0x10U))
                                                                            : (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_cache))))) 
                                                       << 0x31U) 
                                                      | (((QData)((IData)(
                                                                          ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full) 
                                                                           & (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                                                              >> 0xfU)))) 
                                                          << 0x30U) 
                                                         | (((QData)((IData)(
                                                                             ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                                                               ? 
                                                                              (3U 
                                                                               & (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                                                                >> 0xdU))
                                                                               : 1U))) 
                                                             << 0x2eU) 
                                                            | (((QData)((IData)(
                                                                                (7U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                                                                 ? 
                                                                                ((vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                                                                >> 0xaU))
                                                                                 : (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_size))))) 
                                                                << 0x2bU) 
                                                               | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                                                                 ? 
                                                                                ((vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                                                                << 0x1eU) 
                                                                                | (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                                                                >> 2U))
                                                                                 : 
                                                                                (~ 
                                                                                (0x7fffffU 
                                                                                & (((IData)(0x7ffU) 
                                                                                << (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_size)) 
                                                                                >> 3U))))))) 
                                                                   << 0x23U) 
                                                                  | (((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                                                                 ? 
                                                                                ((vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[0U] 
                                                                                >> 3U))
                                                                                 : vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_address)))) 
                                                                      << 4U) 
                                                                     | (QData)((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_id))))))))));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT____VdfgTmp_h0e512e9a__0 
        = (1U & (((0x10U & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
                            << 4U)) | ((8U & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)) 
                                              << 3U)) 
                                       | ((4U & ((~ (IData)(vlSelf->_mc___05Fs198)) 
                                                 << 2U)) 
                                          | ((2U & 
                                              ((~ (IData)(vlSelf->_mc___05Fs197)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full))))))) 
                 >> (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_id)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT____VdfgTmp_h72de1387__0 
        = (1U & (((0x10U & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)) 
                            << 4U)) | ((8U & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
                                              << 3U)) 
                                       | ((4U & ((~ (IData)(vlSelf->_mc___05Fs193)) 
                                                 << 2U)) 
                                          | ((2U & 
                                              ((~ (IData)(vlSelf->_mc___05Fs192)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full))))))) 
                 >> (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_id)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__stall 
        = (((((- (IData)((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__idStall_1))) 
              << 0x13U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__count_1) 
                            << 0x12U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__count_4) 
                                          << 0x11U) 
                                         | (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__count_5) 
                                             << 0x10U) 
                                            | (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__idStall_2) 
                                                << 0xfU) 
                                               | (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__idStall_2) 
                                                   << 0xeU) 
                                                  | (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__idStall_2) 
                                                      << 0xdU) 
                                                     | (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__idStall_2) 
                                                         << 0xcU) 
                                                        | (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__idStall_2) 
                                                            << 0xbU) 
                                                           | (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__idStall_2) 
                                                               << 0xaU) 
                                                              | (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__idStall_2) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__idStall_2) 
                                                                     << 8U) 
                                                                    | (0xffU 
                                                                       & (- (IData)((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__idStall_1)))))))))))))))) 
            >> (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_source)) 
           & (IData)(vlSelf->_mc___05Fs231));
    vlSelf->_cp___05Fs3756 = vlSelf->_cp___05Fs3739;
    vlSelf->_cp___05Fs3775 = vlSelf->_cp___05Fs3739;
    vlSelf->_cp___05Fs3788 = vlSelf->_cp___05Fs3739;
    vlSelf->_cp___05Fs3799 = vlSelf->_cp___05Fs3739;
    vlSelf->_cp___05Fs3810 = vlSelf->_cp___05Fs3739;
    vlSelf->_cp___05Fs3821 = vlSelf->_cp___05Fs3739;
    vlSelf->_cp___05Fs3832 = vlSelf->_cp___05Fs3739;
    vlSelf->_cp___05Fs3771 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_20)));
    vlSelf->_cp___05Fs3760 = vlSelf->_cp___05Fs3743;
    vlSelf->_cp___05Fs3777 = vlSelf->_cp___05Fs3743;
    vlSelf->_cp___05Fs3790 = vlSelf->_cp___05Fs3743;
    vlSelf->_cp___05Fs3801 = vlSelf->_cp___05Fs3743;
    vlSelf->_cp___05Fs3812 = vlSelf->_cp___05Fs3743;
    vlSelf->_cp___05Fs3823 = vlSelf->_cp___05Fs3743;
    vlSelf->_cp___05Fs3834 = vlSelf->_cp___05Fs3743;
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_16 
        = ((0x10U == (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_source)) 
           & ((6U == (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size)) 
              & ((0xdU > (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size)) 
                 & ((IData)(ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_15) 
                    | (IData)(ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h79ced34c__0)))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_30 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_20) 
           & ((4U > (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size)) 
              & ((IData)(ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_15) 
                 | (IData)(ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h4ea4ca6f__0))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_34 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_20) 
           & (IData)(ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_21));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_23 
        = ((IData)(ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_21) 
           | ((7U > (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size)) 
              & ((0U == (0xffffU & (vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                                    >> 0xcU))) | (IData)(ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h79ced34c__0))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_26 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_20) 
           & ((IData)(ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_21) 
              | ((7U > (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size)) 
                 & ((0U == (0xffffU & (vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                                       >> 0xcU))) | (IData)(ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h4ea4ca6f__0)))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_5) 
                & vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address)) 
            << 7U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_5) 
                        | ((~ vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address) 
                           & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_5))) 
                       << 6U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_4) 
                                      & vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address)) 
                                  << 5U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_4) 
                                              | ((~ vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address) 
                                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_4))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((~ vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address) 
                                                       & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_3))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((~ vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address) 
                                                           & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_2))))))))));
    vlSelf->_cp___05Fs3999 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__a_isSupported)));
    vlSelf->_cp___05Fs7015 = vlSelf->_cp___05Fs6998;
    vlSelf->_cp___05Fs7049 = vlSelf->_cp___05Fs6998;
    vlSelf->_cp___05Fs7060 = vlSelf->_cp___05Fs6998;
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_21 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask)) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_mask));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_18 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_mask) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__mask));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_5) 
                & vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_address)) 
            << 7U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_5) 
                        | ((~ vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_address) 
                           & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_5))) 
                       << 6U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_4) 
                                      & vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_address)) 
                                  << 5U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_4) 
                                              | ((~ vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_address) 
                                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_4))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((~ vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_address) 
                                                       & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_3))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((~ vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_address) 
                                                           & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_2))))))))));
    vlSelf->_cp___05Fs1905 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_65)));
    vlSelf->_cp___05Fs1735 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_19)));
    vlSelf->_cp___05Fs1959 = ((IData)(vlSelf->_mc___05Fs232)
                               ? ((~ (IData)(vlSelf->_mc___05Fs186)) 
                                  & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT____VdfgTmp_h0e512e9a__0))
                               : ((~ (IData)(vlSelf->_mc___05Fs189)) 
                                  & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT____VdfgTmp_h72de1387__0)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_a_ready 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__stall)) 
           & ((4U & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_opcode))
               ? (IData)(vlSelf->_cp___05Fs1958) : 
              ((IData)(vlSelf->_cp___05Fs1952) & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_5))));
    ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_6 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__stall)) 
           & (IData)(vlSelf->_cp___05Fs1677));
    vlSelf->_cp___05Fs3737 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_16)));
    vlSelf->_cp___05Fs3808 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_30)));
    vlSelf->_cp___05Fs3830 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_34)));
    vlSelf->_cp___05Fs3773 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_23)));
    vlSelf->_cp___05Fs3786 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_26)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_28 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask)) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_mask));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_24 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_mask) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__mask));
    vlSelf->_cp___05Fs7068 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_21));
    vlSelf->_cp___05Fs7044 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_18)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_21 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_mask));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_17 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_mask) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__mask));
    vlSelf->_cp___05Fs1746 = vlSelf->_cp___05Fs1735;
    vlSelf->_mc___05Fs96 = ((IData)(vlSelf->_mc___05Fs97) 
                            & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_a_ready));
    vlSelf->_cp___05Fs1867 = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_a_ready) 
                              & (IData)(vlSelf->_cp___05Fs1677));
    vlSelf->_cp___05Fs1951 = ((IData)(ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_6) 
                              & ((IData)(vlSelf->_mc___05Fs216) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_5)));
    vlSelf->_cp___05Fs1957 = ((IData)(ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_6) 
                              & (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT___system_bus_xbar_auto_anon_out_2_a_bits_opcode) 
                                  >> 2U) | ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__doneAW)) 
                                            & (IData)(vlSelf->_cp___05Fs1952))));
    vlSelf->_cp___05Fs3754 = vlSelf->_cp___05Fs3737;
    vlSelf->_cp___05Fs3819 = vlSelf->_cp___05Fs3808;
    vlSelf->_cp___05Fs3797 = vlSelf->_cp___05Fs3786;
    vlSelf->_cp___05Fs3805 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_28));
    vlSelf->_cp___05Fs3781 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_24)));
    vlSelf->_cp___05Fs7057 = vlSelf->_cp___05Fs7044;
    vlSelf->_cp___05Fs7079 = vlSelf->_cp___05Fs7044;
    vlSelf->_cp___05Fs7090 = vlSelf->_cp___05Fs7044;
    vlSelf->_cp___05Fs7101 = vlSelf->_cp___05Fs7044;
    vlSelf->_cp___05Fs1754 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_21));
    vlSelf->_cp___05Fs1730 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_17)));
    vlSelf->_cp___05Fs777 = ((IData)(vlSelf->_mc___05Fs96) 
                             & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_valid_2)));
    vlSelf->_cp___05Fs1895 = vlSelf->_cp___05Fs1867;
    vlSelf->_cp___05Fs1960 = vlSelf->_cp___05Fs1867;
    vlSelf->_cp___05Fs1961 = vlSelf->_cp___05Fs1867;
    vlSelf->_cp___05Fs1879 = ((IData)(vlSelf->_mc___05Fs217) 
                              & (IData)(vlSelf->_cp___05Fs1867));
    vlSelf->_cp___05Fs1898 = ((IData)(vlSelf->_cp___05Fs1867) 
                              & (IData)(vlSelf->_mc___05Fs221));
    vlSelf->_cp___05Fs1948 = ((~ ((IData)(vlSelf->_cp___05Fs1952) 
                                  & (IData)(vlSelf->_cp___05Fs1953))) 
                              & ((IData)(vlSelf->_cp___05Fs1952) 
                                 & (IData)(vlSelf->_cp___05Fs1951)));
    vlSelf->_cp___05Fs1573 = ((IData)(vlSelf->_cp___05Fs1953) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__full) 
                                 | (IData)(vlSelf->_cp___05Fs1951)));
    ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_9 
        = ((IData)(vlSelf->_cp___05Fs1958) & (IData)(vlSelf->_cp___05Fs1957));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT___io_deq_valid_output 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full) 
           | (IData)(vlSelf->_cp___05Fs1957));
    vlSelf->_cp___05Fs3794 = vlSelf->_cp___05Fs3781;
    vlSelf->_cp___05Fs3816 = vlSelf->_cp___05Fs3781;
    vlSelf->_cp___05Fs3827 = vlSelf->_cp___05Fs3781;
    vlSelf->_cp___05Fs3838 = vlSelf->_cp___05Fs3781;
    vlSelf->_cp___05Fs1743 = vlSelf->_cp___05Fs1730;
    vlSelf->_cp___05Fs1765 = vlSelf->_cp___05Fs1730;
    vlSelf->_cp___05Fs1776 = vlSelf->_cp___05Fs1730;
    vlSelf->_cp___05Fs1787 = vlSelf->_cp___05Fs1730;
    vlSelf->_cp___05Fs1575 = ((IData)(vlSelf->_cp___05Fs1573) 
                              != (IData)(vlSelf->_cp___05Fs1574));
    vlSelf->_cp___05Fs1949 = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__full) 
                              & (IData)(vlSelf->_cp___05Fs1573));
    vlSelf->_cp___05Fs1970 = ((0U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs1975 = ((1U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs1980 = ((2U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs1985 = ((3U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs1990 = ((4U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs1954 = ((~ ((IData)(vlSelf->_cp___05Fs1958) 
                                  & (IData)(vlSelf->_cp___05Fs1959))) 
                              & (IData)(ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs1955 = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full) 
                              & ((IData)(vlSelf->_cp___05Fs1959) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT___io_deq_valid_output)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___tl2axi4_auto_out_aw_valid 
        = ((IData)(vlSelf->_mc___05Fs232) & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT___io_deq_valid_output));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___tl2axi4_auto_out_ar_valid 
        = ((~ (IData)(vlSelf->_mc___05Fs232)) & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT___io_deq_valid_output));
    vlSelf->_cp___05Fs1950 = ((IData)(vlSelf->_cp___05Fs1948) 
                              != (IData)(vlSelf->_cp___05Fs1949));
    vlSelf->_cp___05Fs1969 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs1970)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__count_1)))));
    vlSelf->_cp___05Fs1974 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs1975)) 
                                       | (8U != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__count_2)))));
    vlSelf->_cp___05Fs1979 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs1980)) 
                                       | (8U != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__count_3)))));
    vlSelf->_cp___05Fs1984 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs1985)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__count_4)))));
    vlSelf->_cp___05Fs1989 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs1990)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__count_5)))));
    vlSelf->_cp___05Fs1956 = ((IData)(vlSelf->_cp___05Fs1954) 
                              != (IData)(vlSelf->_cp___05Fs1955));
    vlSelf->_cp___05Fs1570 = ((~ (IData)(vlSelf->_mc___05Fs186)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___tl2axi4_auto_out_aw_valid) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT____VdfgTmp_h0e512e9a__0)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___GEN_12 
        = ((~ (IData)(vlSelf->_mc___05Fs186)) & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___tl2axi4_auto_out_aw_valid));
    vlSelf->_cp___05Fs1579 = ((~ (IData)(vlSelf->_mc___05Fs189)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___tl2axi4_auto_out_ar_valid) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT____VdfgTmp_h72de1387__0)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___GEN_5 
        = ((~ (IData)(vlSelf->_mc___05Fs189)) & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___tl2axi4_auto_out_ar_valid));
    vlSelf->_cp___05Fs1572 = ((IData)(vlSelf->_cp___05Fs1570) 
                              != (IData)(vlSelf->_cp___05Fs1571));
    vlSelf->_cp___05Fs1600 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___GEN_12) 
                                 & (0U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_id))));
    vlSelf->_cp___05Fs1603 = ((~ (IData)(vlSelf->_mc___05Fs197)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___GEN_12) 
                                 & (1U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_id))));
    vlSelf->_cp___05Fs1606 = ((~ (IData)(vlSelf->_mc___05Fs198)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___GEN_12) 
                                 & (2U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_id))));
    vlSelf->_cp___05Fs1609 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___GEN_12) 
                                 & (3U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_id))));
    vlSelf->_cp___05Fs1612 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___GEN_12) 
                                 & (4U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_id))));
    vlSelf->_cp___05Fs1581 = ((IData)(vlSelf->_cp___05Fs1579) 
                              != (IData)(vlSelf->_cp___05Fs1580));
    vlSelf->_cp___05Fs1585 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___GEN_5) 
                                 & (0U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_id))));
    vlSelf->_cp___05Fs1588 = ((~ (IData)(vlSelf->_mc___05Fs192)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___GEN_5) 
                                 & (1U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_id))));
    vlSelf->_cp___05Fs1591 = ((~ (IData)(vlSelf->_mc___05Fs193)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___GEN_5) 
                                 & (2U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_id))));
    vlSelf->_cp___05Fs1594 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___GEN_5) 
                                 & (3U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_id))));
    vlSelf->_cp___05Fs1597 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___GEN_5) 
                                 & (4U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_id))));
    vlSelf->_cp___05Fs1587 = ((IData)(vlSelf->_cp___05Fs1585) 
                              != (IData)(vlSelf->_cp___05Fs1586));
    vlSelf->_cp___05Fs1590 = ((IData)(vlSelf->_cp___05Fs1588) 
                              != (IData)(vlSelf->_cp___05Fs1589));
    vlSelf->_cp___05Fs1593 = ((IData)(vlSelf->_cp___05Fs1591) 
                              != (IData)(vlSelf->_cp___05Fs1592));
    vlSelf->_cp___05Fs1596 = ((IData)(vlSelf->_cp___05Fs1594) 
                              != (IData)(vlSelf->_cp___05Fs1595));
    vlSelf->_cp___05Fs1599 = ((IData)(vlSelf->_cp___05Fs1597) 
                              != (IData)(vlSelf->_cp___05Fs1598));
}

VL_INLINE_OPT void VExampleRocketSystem___024root___nba_comb__TOP__3(VExampleRocketSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root___nba_comb__TOP__3\n"); );
    // Init
    CData/*1:0*/ ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT___GEN_0;
    ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT___GEN_0 = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT___GEN_0;
    ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT___GEN_0 = 0;
    // Body
    vlSelf->_cp___05Fs12514 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter) 
                               & (IData)(vlSelf->_cp___05Fs12423));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_36 
        = ((IData)(vlSelf->_mc___05Fs3597) & (IData)(vlSelf->_cp___05Fs12423));
    vlSelf->_cp___05Fs12562 = ((IData)(vlSelf->_cp___05Fs12423) 
                               & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT____VdfgTmp_h600785fd__0));
    vlSelf->_mc___05Fs3561 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_reset)
                                     ? (~ (IData)(vlSelf->__VdfgTmp_h68d180b8__0))
                                     : (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass_reg)));
    vlSelf->_cp___05Fs12534 = ((~ (IData)(vlSelf->_cp___05Fs12426)) 
                               & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_36));
    vlSelf->_cp___05Fs12564 = vlSelf->_cp___05Fs12562;
    vlSelf->_cp___05Fs12577 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs12428)) 
                                        & (IData)(vlSelf->_cp___05Fs12562))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_sink 
        = (1U & ((~ (IData)(vlSelf->_mc___05Fs3561)) 
                 & (IData)((vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                            >> 0x22U))));
    vlSelf->_cp___05Fs11881 = ((~ (IData)(vlSelf->_mc___05Fs3561)) 
                               & (IData)(vlSelf->_cp___05Fs12432));
    vlSelf->_cp___05Fs11877 = ((~ (IData)(vlSelf->_mc___05Fs3561)) 
                               & (IData)(vlSelf->_cp___05Fs12428));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall 
        = ((IData)(vlSelf->_mc___05Fs3560) & ((IData)(vlSelf->_mc___05Fs3561) 
                                              != (1U 
                                                  & (~ (IData)(vlSelf->__VdfgTmp_h68d180b8__0)))));
    vlSelf->_cp___05Fs12536 = vlSelf->_cp___05Fs12534;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_30 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_sink) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__sink));
    vlSelf->_cp___05Fs11920 = vlSelf->_cp___05Fs11881;
    vlSelf->_cp___05Fs11929 = vlSelf->_cp___05Fs11881;
    vlSelf->_cp___05Fs11938 = vlSelf->_cp___05Fs11881;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_param 
        = ((IData)(vlSelf->_mc___05Fs3561) ? 0U : (3U 
                                                   & (IData)(
                                                             (vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                              >> 0x26U))));
    vlSelf->_cp___05Fs11894 = (3U == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_param));
    vlSelf->_cp___05Fs11896 = (2U == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_param));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_27 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_param) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__param_1));
    vlSelf->_cp___05Fs11888 = vlSelf->_cp___05Fs11877;
    vlSelf->_cp___05Fs11903 = vlSelf->_cp___05Fs11877;
    vlSelf->_cp___05Fs11918 = vlSelf->_cp___05Fs11877;
    vlSelf->_cp___05Fs11927 = vlSelf->_cp___05Fs11877;
    vlSelf->_cp___05Fs11936 = vlSelf->_cp___05Fs11877;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_29 
        = ((IData)(vlSelf->_cp___05Fs11877) == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__source_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_55 
        = (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_1) 
                 >> (IData)(vlSelf->_cp___05Fs11877)));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_34 
        = (0xfU & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_opcodes) 
                   >> ((IData)(vlSelf->_cp___05Fs11877) 
                       << 2U)));
    vlSelf->_cp___05Fs11988 = ((~ (IData)(vlSelf->_cp___05Fs11877)) 
                               & (IData)(vlSelf->_cp___05Fs11979));
    ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT___GEN_0 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall)) 
           & (IData)(vlSelf->_cp___05Fs11759));
    vlSelf->_cp___05Fs11973 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_30)));
    vlSelf->_cp___05Fs11909 = vlSelf->_cp___05Fs11894;
    vlSelf->_cp___05Fs11911 = vlSelf->_cp___05Fs11896;
    vlSelf->_cp___05Fs11967 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_27)));
    vlSelf->_cp___05Fs11971 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_29)));
    vlSelf->_cp___05Fs12013 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_55)));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_42 
        = (1U & ((3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight) 
                        >> (IData)(vlSelf->_cp___05Fs11877))) 
                 | (IData)(vlSelf->_cp___05Fs11988)));
    vlSelf->_cp___05Fs12310 = ((~ (IData)(vlSelf->_mc___05Fs3561)) 
                               & (IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT___GEN_0));
    vlSelf->_cp___05Fs12032 = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT___GEN_0) 
                               & (IData)(vlSelf->_mc___05Fs3561));
    vlSelf->_cp___05Fs11987 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_42)));
    vlSelf->_cp___05Fs12501 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter) 
                               & (IData)(vlSelf->_cp___05Fs12310));
    vlSelf->_cp___05Fs12548 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_36) 
                               & ((IData)(vlSelf->_mc___05Fs3595) 
                                  & ((IData)(vlSelf->_cp___05Fs12310) 
                                     & ((~ (IData)(vlSelf->_cp___05Fs12428)) 
                                        & (~ (IData)(vlSelf->_cp___05Fs12426))))));
    vlSelf->_cp___05Fs12500 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___io_enq_ready_output) 
                               & (IData)(vlSelf->_cp___05Fs12310));
    vlSelf->_cp___05Fs12530 = ((IData)(vlSelf->_mc___05Fs3595) 
                               & (IData)(vlSelf->_cp___05Fs12310));
    vlSelf->_cp___05Fs12223 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter) 
                               & (IData)(vlSelf->_cp___05Fs12032));
    vlSelf->_cp___05Fs12252 = ((IData)(vlSelf->_mc___05Fs3567) 
                               & (IData)(vlSelf->_cp___05Fs12032));
    vlSelf->_mc___05Fs3583 = ((IData)(vlSelf->_cp___05Fs12032) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__idle));
    vlSelf->_cp___05Fs12528 = vlSelf->_cp___05Fs12500;
    vlSelf->_cp___05Fs12581 = vlSelf->_cp___05Fs12500;
    vlSelf->_cp___05Fs12512 = ((IData)(vlSelf->_mc___05Fs3591) 
                               & (IData)(vlSelf->_cp___05Fs12500));
    vlSelf->_cp___05Fs12531 = ((IData)(vlSelf->_mc___05Fs3595) 
                               & (IData)(vlSelf->_cp___05Fs12500));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_49 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs12530)) 
                 | ((IData)(vlSelf->_cp___05Fs12530) 
                    != ((~ (IData)(vlSelf->_cp___05Fs12428)) 
                        & (IData)(vlSelf->_cp___05Fs12534)))));
    vlSelf->_cp___05Fs12539 = ((~ (IData)(vlSelf->_cp___05Fs12428)) 
                               & (IData)(vlSelf->_cp___05Fs12530));
    vlSelf->_cp___05Fs12261 = vlSelf->_cp___05Fs12252;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_29 
        = ((IData)(vlSelf->_cp___05Fs12255) | (IData)(vlSelf->_cp___05Fs12252));
    vlSelf->_mc___05Fs3589 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft)
                               ? (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__state_1)
                               : (IData)(vlSelf->_mc___05Fs3583));
    vlSelf->_cp___05Fs12145 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT____VdfgTmp_h707cc4b3__0) 
                               & (IData)(vlSelf->_mc___05Fs3583));
    if (vlSelf->_mc___05Fs3561) {
        vlSelf->_cp___05Fs11885 = vlSelf->_mc___05Fs3589;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_size 
            = (3U & ((IData)(vlSelf->_mc___05Fs3589) 
                     << 1U));
        vlSelf->_cp___05Fs11872 = vlSelf->_cp___05Fs12145;
    } else {
        vlSelf->_cp___05Fs11885 = vlSelf->_cp___05Fs12436;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_size 
            = (3U & (IData)((vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                             >> 0x24U)));
        vlSelf->_cp___05Fs11872 = vlSelf->_cp___05Fs12423;
    }
    vlSelf->_cp___05Fs12552 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_49)));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_41 
        = (1U & ((3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight) 
                        >> (IData)(vlSelf->_cp___05Fs12428))) 
                 | (IData)(vlSelf->_cp___05Fs12539)));
    vlSelf->_cp___05Fs12260 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_29)));
    vlSelf->_cp___05Fs12158 = vlSelf->_mc___05Fs3589;
    vlSelf->_cp___05Fs12265 = (1U & (~ (IData)(vlSelf->_mc___05Fs3589)));
    vlSelf->_cp___05Fs12289 = vlSelf->_mc___05Fs3589;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_23 
        = (((IData)(vlSelf->_mc___05Fs3589) << 1U) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__size_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_24 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__denied) 
           == (IData)(vlSelf->_mc___05Fs3589));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_34 
        = (((IData)(vlSelf->_mc___05Fs3589) << 1U) 
           == (0xfU & VL_SHIFTR_III(4,4,32, (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_sizes), 1U)));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_40 
        = (((IData)(vlSelf->_mc___05Fs3589) << 1U) 
           == (0xfU & VL_SHIFTR_III(4,4,32, (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_sizes_1), 1U)));
    vlSelf->_cp___05Fs12152 = (1U & (~ (IData)(vlSelf->_mc___05Fs3589)));
    vlSelf->_cp___05Fs12236 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter) 
                               & (IData)(vlSelf->_cp___05Fs12145));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_27 
        = ((IData)(vlSelf->_mc___05Fs3569) & (IData)(vlSelf->_cp___05Fs12145));
    vlSelf->_cp___05Fs12538 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_41)));
    vlSelf->_cp___05Fs12242 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_23)));
    vlSelf->_cp___05Fs12248 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_24)));
    vlSelf->_cp___05Fs12269 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_34)));
    vlSelf->_cp___05Fs12291 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_40)));
    vlSelf->_cp___05Fs12165 = vlSelf->_cp___05Fs12152;
    vlSelf->_cp___05Fs12180 = vlSelf->_cp___05Fs12152;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_31 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__denied) 
           == (IData)(vlSelf->_cp___05Fs11885));
    vlSelf->_cp___05Fs11992 = (2U != (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_size));
    vlSelf->_cp___05Fs12016 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_size));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_28 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__size_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_47 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_size) 
           == (0xfU & VL_SHIFTR_III(4,4,32, (0xfU & 
                                             ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_sizes) 
                                              >> ((IData)(vlSelf->_cp___05Fs11877) 
                                                  << 2U))), 1U)));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_56 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_size) 
           == (0xfU & VL_SHIFTR_III(4,4,32, (0xfU & 
                                             ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_sizes_1) 
                                              >> ((IData)(vlSelf->_cp___05Fs11877) 
                                                  << 2U))), 1U)));
    vlSelf->_cp___05Fs11879 = (1U & (~ ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_size) 
                                        >> 1U)));
    vlSelf->_cp___05Fs11963 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter) 
                               & (IData)(vlSelf->_cp___05Fs11872));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_37 
        = ((IData)(vlSelf->_mc___05Fs3547) & (IData)(vlSelf->_cp___05Fs11872));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT___GEN_3 
        = ((IData)(vlSelf->_cp___05Fs11872) | (IData)(vlSelf->_cp___05Fs11481));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__readys_valid 
        = (((IData)(vlSelf->_cp___05Fs11481) << 1U) 
           | (IData)(vlSelf->_cp___05Fs11872));
    vlSelf->_cp___05Fs11975 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_31)));
    vlSelf->_cp___05Fs11969 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_28)));
    vlSelf->_cp___05Fs11996 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_47)));
    vlSelf->_cp___05Fs12018 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_56)));
    vlSelf->_cp___05Fs11892 = vlSelf->_cp___05Fs11879;
    vlSelf->_cp___05Fs11907 = vlSelf->_cp___05Fs11879;
    vlSelf->_cp___05Fs11474 = ((IData)(vlSelf->_mc___05Fs3504) 
                               & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__readys_valid)));
    ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT___GEN_0 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__readys_mask)) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__readys_valid));
    vlSelf->debug_clockeddmi_dmi_resp_valid = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__beatsLeft)
                                                ? (
                                                   ((IData)(vlSelf->_cp___05Fs11872) 
                                                    & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__state_0)) 
                                                   | ((IData)(vlSelf->_cp___05Fs11481) 
                                                      & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__state_1)))
                                                : (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT___GEN_3));
    vlSelf->_cp___05Fs11319 = vlSelf->debug_clockeddmi_dmi_resp_valid;
    vlSelf->_cp___05Fs11410 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter) 
                               & (IData)(vlSelf->debug_clockeddmi_dmi_resp_valid));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_31 
        = ((IData)(vlSelf->_mc___05Fs3491) & (IData)(vlSelf->debug_clockeddmi_dmi_resp_valid));
    vlSelf->_cp___05Fs11409 = ((IData)(vlSelf->debug_clockeddmi_dmi_resp_ready) 
                               & (IData)(vlSelf->debug_clockeddmi_dmi_resp_valid));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__readys_readys 
        = (3U & (~ (((2U & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__readys_mask)) 
                     | (1U & (((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT___GEN_0) 
                               >> 1U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__readys_mask)))) 
                    & (((2U & ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT___GEN_0) 
                               << 1U)) | (IData)(vlSelf->_cp___05Fs11481)) 
                       | (IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT___GEN_0)))));
    vlSelf->_cp___05Fs11425 = vlSelf->_cp___05Fs11409;
    vlSelf->_cp___05Fs11451 = vlSelf->_cp___05Fs11409;
    vlSelf->_cp___05Fs11471 = vlSelf->_cp___05Fs11409;
    vlSelf->_cp___05Fs11423 = ((IData)(vlSelf->_mc___05Fs3487) 
                               & (IData)(vlSelf->_cp___05Fs11409));
    vlSelf->_cp___05Fs11743 = ((IData)(vlSelf->debug_clockeddmi_dmi_resp_ready) 
                               & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__beatsLeft)
                                   ? (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__state_1)
                                   : ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__readys_readys) 
                                      >> 1U)));
    vlSelf->_mc___05Fs3503 = (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__readys_readys) 
                               >> 1U) & (IData)(vlSelf->_cp___05Fs11481));
    vlSelf->_mc___05Fs3502 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__readys_readys) 
                              & (IData)(vlSelf->_cp___05Fs11872));
    if (vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__beatsLeft) {
        vlSelf->_mc___05Fs3509 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__state_1;
        vlSelf->_mc___05Fs3508 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__state_0;
    } else {
        vlSelf->_mc___05Fs3509 = vlSelf->_mc___05Fs3503;
        vlSelf->_mc___05Fs3508 = vlSelf->_mc___05Fs3502;
    }
    vlSelf->_cp___05Fs12021 = ((IData)(vlSelf->debug_clockeddmi_dmi_resp_ready) 
                               & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__beatsLeft)
                                   ? (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__state_0)
                                   : (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__readys_readys)));
    vlSelf->_cp___05Fs11671 = ((IData)(vlSelf->_cp___05Fs11743) 
                               & (IData)(vlSelf->_cp___05Fs11481));
    vlSelf->_cp___05Fs11476 = (1U & (~ ((~ (IData)(vlSelf->_mc___05Fs3502)) 
                                        | (~ (IData)(vlSelf->_mc___05Fs3503)))));
    vlSelf->_cp___05Fs11478 = (1U & (~ ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT___GEN_3)) 
                                        | ((IData)(vlSelf->_mc___05Fs3502) 
                                           | (IData)(vlSelf->_mc___05Fs3503)))));
    vlSelf->_cp___05Fs11962 = ((IData)(vlSelf->_cp___05Fs12021) 
                               & (IData)(vlSelf->_cp___05Fs11872));
    vlSelf->_cp___05Fs12574 = ((~ (IData)(vlSelf->_mc___05Fs3561)) 
                               & (IData)(vlSelf->_cp___05Fs12021));
    vlSelf->_cp___05Fs12294 = ((IData)(vlSelf->_cp___05Fs12021) 
                               & (IData)(vlSelf->_mc___05Fs3561));
    vlSelf->_cp___05Fs11684 = vlSelf->_cp___05Fs11671;
    vlSelf->_cp___05Fs11699 = vlSelf->_cp___05Fs11671;
    vlSelf->_cp___05Fs11700 = vlSelf->_cp___05Fs11671;
    vlSelf->_cp___05Fs11724 = vlSelf->_cp___05Fs11671;
    vlSelf->_cp___05Fs11726 = vlSelf->_cp___05Fs11671;
    vlSelf->_cp___05Fs11746 = vlSelf->_cp___05Fs11671;
    vlSelf->_cp___05Fs11683 = ((IData)(vlSelf->_mc___05Fs3512) 
                               & (IData)(vlSelf->_cp___05Fs11671));
    vlSelf->_cp___05Fs11698 = ((IData)(vlSelf->_mc___05Fs3514) 
                               & (IData)(vlSelf->_cp___05Fs11671));
    vlSelf->_cp___05Fs11702 = ((IData)(vlSelf->_mc___05Fs3516) 
                               & (IData)(vlSelf->_cp___05Fs11671));
    vlSelf->_cp___05Fs11706 = ((IData)(vlSelf->_mc___05Fs3518) 
                               & (IData)(vlSelf->_cp___05Fs11671));
    vlSelf->debug_clockeddmi_dmi_resp_bits_data = (
                                                   ((IData)(vlSelf->_mc___05Fs3508)
                                                     ? 
                                                    ((IData)(vlSelf->_mc___05Fs3561)
                                                      ? 0U
                                                      : (IData)(
                                                                (vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                 >> 1U)))
                                                     : 0U) 
                                                   | ((IData)(vlSelf->_mc___05Fs3509)
                                                       ? 
                                                      ((IData)(vlSelf->_mc___05Fs3537)
                                                        ? 
                                                       ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT____VdfgTmp_hcef7e3f7__0)
                                                         ? 0x112380U
                                                         : 
                                                        (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->__VdfgTmp_h68d180b8__0))))
                                                        : 0U)
                                                       : 0U));
    if (vlSelf->_mc___05Fs3508) {
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____Vcellinp__monitor__io_in_d_bits_sink 
            = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_sink;
        vlSelf->_cp___05Fs11328 = vlSelf->_cp___05Fs11881;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____Vcellinp__monitor__io_in_d_bits_param 
            = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_param;
        vlSelf->_cp___05Fs11332 = vlSelf->_cp___05Fs11885;
    } else {
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____Vcellinp__monitor__io_in_d_bits_sink = 0U;
        vlSelf->_cp___05Fs11328 = 0U;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____Vcellinp__monitor__io_in_d_bits_param = 0U;
        vlSelf->_cp___05Fs11332 = 0U;
    }
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____Vcellinp__monitor__io_in_d_bits_size 
        = (((IData)(vlSelf->_mc___05Fs3508) ? (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_size)
             : 0U) | ((IData)(vlSelf->_mc___05Fs3509) 
                      << 1U));
    vlSelf->_cp___05Fs11978 = vlSelf->_cp___05Fs11962;
    vlSelf->_cp___05Fs12004 = vlSelf->_cp___05Fs11962;
    vlSelf->_cp___05Fs12024 = vlSelf->_cp___05Fs11962;
    vlSelf->_cp___05Fs12028 = vlSelf->_cp___05Fs11962;
    vlSelf->_cp___05Fs11976 = ((IData)(vlSelf->_mc___05Fs3543) 
                               & (IData)(vlSelf->_cp___05Fs11962));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_48 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs12574)) 
                 | (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___io_enq_ready_output)));
    vlSelf->_cp___05Fs12513 = ((IData)(vlSelf->_cp___05Fs12574) 
                               & (IData)(vlSelf->_cp___05Fs12423));
    vlSelf->_mc___05Fs3584 = ((IData)(vlSelf->_mc___05Fs3585) 
                              & (IData)(vlSelf->_cp___05Fs12294));
    vlSelf->_cp___05Fs12235 = ((IData)(vlSelf->_cp___05Fs12294) 
                               & (IData)(vlSelf->_cp___05Fs12145));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_ready 
        = ((IData)(vlSelf->_cp___05Fs12294) & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT____VdfgTmp_h707cc4b3__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_27 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____Vcellinp__monitor__io_in_d_bits_sink) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__sink));
    vlSelf->_cp___05Fs11367 = vlSelf->_cp___05Fs11328;
    vlSelf->_cp___05Fs11376 = vlSelf->_cp___05Fs11328;
    vlSelf->_cp___05Fs11385 = vlSelf->_cp___05Fs11328;
    vlSelf->_cp___05Fs11341 = (3U == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____Vcellinp__monitor__io_in_d_bits_param));
    vlSelf->_cp___05Fs11343 = (2U == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____Vcellinp__monitor__io_in_d_bits_param));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_25 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____Vcellinp__monitor__io_in_d_bits_param) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__param_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_28 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__denied) 
           == (IData)(vlSelf->_cp___05Fs11332));
    vlSelf->_cp___05Fs11439 = (2U != (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____Vcellinp__monitor__io_in_d_bits_size));
    vlSelf->_cp___05Fs11463 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____Vcellinp__monitor__io_in_d_bits_size));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_26 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____Vcellinp__monitor__io_in_d_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__size_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_38 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____Vcellinp__monitor__io_in_d_bits_size) 
           == (0xfU & VL_SHIFTR_III(4,4,32, (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_sizes), 1U)));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_44 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____Vcellinp__monitor__io_in_d_bits_size) 
           == (0xfU & VL_SHIFTR_III(4,4,32, (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_sizes_1), 1U)));
    vlSelf->_cp___05Fs11326 = (1U & (~ ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____Vcellinp__monitor__io_in_d_bits_size) 
                                        >> 1U)));
    vlSelf->_cp___05Fs12550 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_48)));
    vlSelf->_cp___05Fs12529 = vlSelf->_cp___05Fs12513;
    vlSelf->_cp___05Fs12557 = vlSelf->_cp___05Fs12513;
    vlSelf->_cp___05Fs12580 = vlSelf->_cp___05Fs12513;
    vlSelf->_cp___05Fs12527 = ((IData)(vlSelf->_mc___05Fs3593) 
                               & (IData)(vlSelf->_cp___05Fs12513));
    vlSelf->_cp___05Fs12555 = ((IData)(vlSelf->_cp___05Fs12500) 
                               | (IData)(vlSelf->_cp___05Fs12513));
    vlSelf->_cp___05Fs12563 = ((IData)(vlSelf->_cp___05Fs12513) 
                               & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT____VdfgTmp_h600785fd__0));
    vlSelf->_cp___05Fs12535 = ((IData)(vlSelf->_cp___05Fs12513) 
                               & ((IData)(vlSelf->_mc___05Fs3597) 
                                  & (~ (IData)(vlSelf->_cp___05Fs12426))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_ridx_bin) 
              + (IData)(vlSelf->_cp___05Fs12513)));
    vlSelf->_cp___05Fs12251 = vlSelf->_cp___05Fs12235;
    vlSelf->_cp___05Fs12277 = vlSelf->_cp___05Fs12235;
    vlSelf->_cp___05Fs12297 = vlSelf->_cp___05Fs12235;
    vlSelf->_cp___05Fs12249 = ((IData)(vlSelf->_mc___05Fs3565) 
                               & (IData)(vlSelf->_cp___05Fs12235));
    vlSelf->_cp___05Fs12299 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_ready) 
                               & (IData)(vlSelf->_mc___05Fs3583));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__nodeIn_a_ready 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_ready) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__idle));
    vlSelf->_cp___05Fs11420 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_27)));
    vlSelf->_cp___05Fs11356 = vlSelf->_cp___05Fs11341;
    vlSelf->_cp___05Fs11358 = vlSelf->_cp___05Fs11343;
    vlSelf->_cp___05Fs11414 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_25)));
    vlSelf->_cp___05Fs11422 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_28)));
    vlSelf->_cp___05Fs11416 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_26)));
    vlSelf->_cp___05Fs11443 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_38)));
    vlSelf->_cp___05Fs11465 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_44)));
    vlSelf->_cp___05Fs11339 = vlSelf->_cp___05Fs11326;
    vlSelf->_cp___05Fs11354 = vlSelf->_cp___05Fs11326;
    vlSelf->_cp___05Fs12582 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                               & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx) 
                                  != (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_36 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs12294)) 
                 | (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__nodeIn_a_ready)));
    vlSelf->_cp___05Fs12222 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__nodeIn_a_ready) 
                               & (IData)(vlSelf->_cp___05Fs12032));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_a_ready 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall)) 
           & ((IData)(vlSelf->_mc___05Fs3561) ? (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__nodeIn_a_ready)
               : (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___io_enq_ready_output)));
    vlSelf->_cp___05Fs12272 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_36)));
    vlSelf->_cp___05Fs12250 = vlSelf->_cp___05Fs12222;
    vlSelf->_cp___05Fs12298 = vlSelf->_cp___05Fs12222;
    vlSelf->_cp___05Fs12234 = ((IData)(vlSelf->_mc___05Fs3563) 
                               & (IData)(vlSelf->_cp___05Fs12222));
    vlSelf->_cp___05Fs12253 = ((IData)(vlSelf->_mc___05Fs3567) 
                               & (IData)(vlSelf->_cp___05Fs12222));
    vlSelf->_cp___05Fs12275 = ((IData)(vlSelf->_cp___05Fs12222) 
                               | (IData)(vlSelf->_cp___05Fs12235));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_49 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs12021)) 
                 | (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_a_ready)));
    vlSelf->debug_clockeddmi_dmi_req_ready = (((IData)(vlSelf->_mc___05Fs3498) 
                                               & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_a_ready)) 
                                              | ((IData)(vlSelf->_mc___05Fs3499) 
                                                 & (IData)(vlSelf->_cp___05Fs11743)));
    vlSelf->_cp___05Fs11949 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_a_ready) 
                               & (IData)(vlSelf->_cp___05Fs11759));
    vlSelf->_cp___05Fs11999 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_49)));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_40 
        = (1U & ((~ (IData)(vlSelf->debug_clockeddmi_dmi_resp_ready)) 
                 | (IData)(vlSelf->debug_clockeddmi_dmi_req_ready)));
    vlSelf->_cp___05Fs11396 = ((IData)(vlSelf->debug_clockeddmi_dmi_req_ready) 
                               & (IData)(vlSelf->debug_clockeddmi_dmi_req_valid));
    vlSelf->_cp___05Fs11977 = vlSelf->_cp___05Fs11949;
    vlSelf->_cp___05Fs12025 = vlSelf->_cp___05Fs11949;
    vlSelf->_cp___05Fs12031 = vlSelf->_cp___05Fs11949;
    vlSelf->_cp___05Fs11961 = ((IData)(vlSelf->_mc___05Fs3541) 
                               & (IData)(vlSelf->_cp___05Fs11949));
    vlSelf->_cp___05Fs11980 = ((IData)(vlSelf->_mc___05Fs3545) 
                               & (IData)(vlSelf->_cp___05Fs11949));
    vlSelf->_cp___05Fs12002 = ((IData)(vlSelf->_cp___05Fs11949) 
                               | (IData)(vlSelf->_cp___05Fs11962));
    vlSelf->_cp___05Fs11446 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_40)));
    vlSelf->_cp___05Fs11424 = vlSelf->_cp___05Fs11396;
    vlSelf->_cp___05Fs11408 = ((IData)(vlSelf->_mc___05Fs3485) 
                               & (IData)(vlSelf->_cp___05Fs11396));
    vlSelf->_cp___05Fs11427 = ((IData)(vlSelf->_mc___05Fs3489) 
                               & (IData)(vlSelf->_cp___05Fs11396));
    vlSelf->_cp___05Fs11449 = ((IData)(vlSelf->_cp___05Fs11396) 
                               | (IData)(vlSelf->_cp___05Fs11409));
}

VL_INLINE_OPT void VExampleRocketSystem___024root___nba_sequent__TOP__29(VExampleRocketSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root___nba_sequent__TOP__29\n"); );
    // Body
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hrmaskReg_0 
        = vlSelf->__Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hrmaskReg_0;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartHalted 
        = vlSelf->__Vdly__ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartHalted;
    vlSelf->_rs___05Fs3928 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hrmaskReg_0;
    vlSelf->_rs___05Fs3924 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartHalted;
    vlSelf->_cp___05Fs13374 = ((IData)(vlSelf->_cp___05Fs13365) 
                               & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartHalted)) 
                                  & (IData)(vlSelf->_cp___05Fs13367)));
    vlSelf->_cp___05Fs13128 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hb4b0d5dc__0) 
                               & ((~ (IData)(vlSelf->_cp___05Fs13373)) 
                                  & (IData)(vlSelf->_cp___05Fs13374)));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_96 
        = ((IData)(vlSelf->_cp___05Fs13373) | (IData)(vlSelf->_cp___05Fs13374));
    vlSelf->_cp___05Fs13286 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_96)) 
                               & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hb4b0d5dc__0));
}

VL_INLINE_OPT void VExampleRocketSystem___024root___nba_comb__TOP__4(VExampleRocketSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root___nba_comb__TOP__4\n"); );
    // Init
    CData/*0:0*/ ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN;
    ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_10;
    ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_10 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelf->_cp___05Fs13123 = (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg) 
                                >> 3U) & (IData)(vlSelf->_cp___05Fs13118));
    vlSelf->_cp___05Fs13139 = (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg) 
                                >> 0xeU) & (IData)(vlSelf->_cp___05Fs13118));
    vlSelf->_cp___05Fs12775 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__a_first_counter) 
                               & (IData)(vlSelf->_cp___05Fs12584));
    vlSelf->_cp___05Fs12788 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__d_first_counter) 
                               & (IData)(vlSelf->_cp___05Fs12584));
    vlSelf->_cp___05Fs12808 = ((IData)(vlSelf->_mc___05Fs3611) 
                               & (IData)(vlSelf->_cp___05Fs12584));
    vlSelf->_cp___05Fs12804 = ((IData)(vlSelf->_mc___05Fs3609) 
                               & (IData)(vlSelf->_cp___05Fs12584));
    ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_10 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_9) 
           & (IData)(vlSelf->_mc___05Fs3606));
    ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN 
        = ((~ (IData)(vlSelf->_mc___05Fs3606)) & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_9));
    vlSelf->_cp___05Fs12786 = ((IData)(vlSelf->_mc___05Fs3605) 
                               & (IData)(vlSelf->_cp___05Fs12774));
    vlSelf->_cp___05Fs12801 = ((IData)(vlSelf->_mc___05Fs3607) 
                               & (IData)(vlSelf->_cp___05Fs12774));
    vlSelf->_cp___05Fs12805 = ((IData)(vlSelf->_mc___05Fs3609) 
                               & (IData)(vlSelf->_cp___05Fs12774));
    vlSelf->_cp___05Fs12809 = ((IData)(vlSelf->_mc___05Fs3611) 
                               & (IData)(vlSelf->_cp___05Fs12774));
    __Vtemp_1[0U] = (IData)((0xa200000000ULL | (((QData)((IData)(
                                                                 (3U 
                                                                  & (- (IData)((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__haveResetBitRegs)))))) 
                                                 << 0x32U) 
                                                | (((QData)((IData)(
                                                                    (3U 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__resumeReqRegs) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13139) 
                                                                                & (0U 
                                                                                == 
                                                                                (0x3ff0U 
                                                                                & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)))))))))))) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       (3U 
                                                                        & (- (IData)(
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartHalted)))))))) 
                                                       << 0x2aU) 
                                                      | (((QData)((IData)(
                                                                          (3U 
                                                                           & (- (IData)((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartHalted)))))) 
                                                          << 0x28U) 
                                                         | (QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartHalted))))))));
    __Vtemp_1[1U] = (IData)(((0xa200000000ULL | (((QData)((IData)(
                                                                  (3U 
                                                                   & (- (IData)((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__haveResetBitRegs)))))) 
                                                  << 0x32U) 
                                                 | (((QData)((IData)(
                                                                     (3U 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__resumeReqRegs) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13139) 
                                                                                & (0U 
                                                                                == 
                                                                                (0x3ff0U 
                                                                                & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)))))))))))) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(
                                                                        (3U 
                                                                         & (- (IData)(
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartHalted)))))))) 
                                                        << 0x2aU) 
                                                       | (((QData)((IData)(
                                                                           (3U 
                                                                            & (- (IData)((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartHalted)))))) 
                                                           << 0x28U) 
                                                          | (QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartHalted))))))) 
                             >> 0x20U));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[0U] 
        = __Vtemp_1[0U];
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[1U] 
        = __Vtemp_1[1U];
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[2U] = 0U;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[3U] 
        = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartHalted;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[4U] 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_3) 
            << 0x18U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_2) 
                          << 0x10U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_1) 
                                        << 8U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_0))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[5U] 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_7) 
            << 0x18U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_6) 
                          << 0x10U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_5) 
                                        << 8U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_4))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[6U] 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSReg_progbufsize) 
            << 0x18U) | (((IData)((0U != (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))) 
                          << 0xcU) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSReg_cmderr) 
                                       << 8U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSReg_datacount))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[7U] 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__COMMANDReg_cmdtype) 
            << 0x18U) | vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__COMMANDReg_control);
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[8U] 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
            << 0x10U) | (3U & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecdata)));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[9U] = 0U;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[0xaU] = 0U;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[0xbU] = 0U;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[0xcU] = 0U;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[0xdU] = 0U;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[0xeU] = 0U;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[0xfU] = 0U;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[0x10U] 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_3) 
            << 0x18U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_2) 
                          << 0x10U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_1) 
                                        << 8U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_0))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[0x11U] 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_7) 
            << 0x18U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_6) 
                          << 0x10U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_5) 
                                        << 8U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_4))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[0x12U] 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_11) 
            << 0x18U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_10) 
                          << 0x10U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_9) 
                                        << 8U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_8))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[0x13U] 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_15) 
            << 0x18U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_14) 
                          << 0x10U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_13) 
                                        << 8U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_12))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[0x14U] 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_19) 
            << 0x18U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_18) 
                          << 0x10U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_17) 
                                        << 8U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_16))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[0x15U] 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_23) 
            << 0x18U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_22) 
                          << 0x10U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_21) 
                                        << 8U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_20))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[0x16U] 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_27) 
            << 0x18U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_26) 
                          << 0x10U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_25) 
                                        << 8U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_24))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[0x17U] 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_31) 
            << 0x18U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_30) 
                          << 0x10U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_29) 
                                        << 8U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_28))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[0x18U] 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_35) 
            << 0x18U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_34) 
                          << 0x10U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_33) 
                                        << 8U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_32))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[0x19U] 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_39) 
            << 0x18U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_38) 
                          << 0x10U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_37) 
                                        << 8U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_36))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[0x1aU] 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_43) 
            << 0x18U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_42) 
                          << 0x10U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_41) 
                                        << 8U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_40))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[0x1bU] 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_47) 
            << 0x18U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_46) 
                          << 0x10U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_45) 
                                        << 8U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_44))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[0x1cU] 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_51) 
            << 0x18U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_50) 
                          << 0x10U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_49) 
                                        << 8U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_48))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[0x1dU] 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_55) 
            << 0x18U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_54) 
                          << 0x10U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_53) 
                                        << 8U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_52))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[0x1eU] 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_59) 
            << 0x18U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_58) 
                          << 0x10U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_57) 
                                        << 8U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_56))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[0x1fU] 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_63) 
            << 0x18U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_62) 
                          << 0x10U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_61) 
                                        << 8U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_60))));
    vlSelf->_cp___05Fs12810 = vlSelf->_cp___05Fs12808;
    vlSelf->_cp___05Fs12822 = ((IData)(vlSelf->_cp___05Fs12808) 
                               & ((IData)(vlSelf->_mc___05Fs3609) 
                                  & (IData)(vlSelf->_cp___05Fs12584)));
    vlSelf->_cp___05Fs12813 = vlSelf->_cp___05Fs12804;
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_27 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_10) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h1123e6bf__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_3 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_10) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h4e932f60__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_78 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_10) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h81867eb4__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_50 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_10) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hc0df962b__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_82 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_10) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h8adabaca__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_19 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_10) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hb7f89057__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_102 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_10) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_ha8a00b6d__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_42 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_10) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hc4e07749__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_46 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_10) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h121959e2__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_15 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_10) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h1f7702ff__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_97 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_10) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hb6fa48b9__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_11 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_10) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h87d306d2__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_35 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_10) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h84a3c6ef__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_23 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_10) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h9e134fdc__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_93 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_10) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_ha7061da4__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_54 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_10) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h8b88d5cd__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_7 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_10) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hb1d8a755__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_31 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_10) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hea8aef58__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSWrEnMaybe 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN) 
           & ((6U == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex)) 
              & ((1U == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_3)) 
                 & (IData)(vlSelf->_mc___05Fs3628))));
    vlSelf->_cp___05Fs13208 = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN) 
                               & ((7U == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex)) 
                                  & ((1U == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_3)) 
                                     & ((0xffU == (0xffU 
                                                   & (- (IData)((IData)(vlSelf->_mc___05Fs3630))))) 
                                        & ((0xffU == 
                                            (0xffU 
                                             & (- (IData)((IData)(vlSelf->_mc___05Fs3629))))) 
                                           & (0xffU 
                                              == (0xffU 
                                                  & ((- (IData)((IData)(vlSelf->_mc___05Fs3628))) 
                                                     & (- (IData)((IData)(vlSelf->_mc___05Fs3627)))))))))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_38 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN) 
           & ((8U == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex)) 
              & (1U == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_3))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_3 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h4e932f60__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_7 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hb1d8a755__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_11 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h87d306d2__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_15 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h1f7702ff__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_19 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hb7f89057__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_23 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h9e134fdc__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_27 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h1123e6bf__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_31 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hea8aef58__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_35 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h84a3c6ef__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_42 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hc4e07749__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_46 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h121959e2__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_50 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hc0df962b__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_54 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h8b88d5cd__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_78 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h81867eb4__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_82 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h8adabaca__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_93 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_ha7061da4__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_97 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hb6fa48b9__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_102 
        = ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_ha8a00b6d__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT___GEN_51 
        = ((IData)(vlSelf->_cp___05Fs12807) | (IData)(vlSelf->_cp___05Fs12813));
    vlSelf->_cp___05Fs13129 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSWrEnMaybe));
    if (vlSelf->_cp___05Fs13208) {
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrDataVal 
            = (IData)((vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                       >> 1U));
        vlSelf->_cp___05Fs13135 = vlSelf->_cp___05Fs13368;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hea6ecce6__0 
            = (0U != (0xffU & (IData)((vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                       >> 0x19U))));
    } else {
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrDataVal = 0U;
        vlSelf->_cp___05Fs13135 = 0U;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hea6ecce6__0 = 0U;
    }
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__autoexecdataWrEnMaybe 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_38) 
           & (IData)(vlSelf->_mc___05Fs3627));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__autoexecprogbufWrEnMaybe 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_38) 
           & ((0xffU == (0xffU & (- (IData)((IData)(vlSelf->_mc___05Fs3630))))) 
              & (0xffU == (0xffU & (- (IData)((IData)(vlSelf->_mc___05Fs3629)))))));
    vlSelf->_cp___05Fs13141 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_3) 
                               & (IData)(vlSelf->_mc___05Fs3628));
    vlSelf->_cp___05Fs13142 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_3) 
                               & (IData)(vlSelf->_mc___05Fs3629));
    vlSelf->_cp___05Fs13143 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_3) 
                               & (IData)(vlSelf->_mc___05Fs3630));
    vlSelf->_cp___05Fs13140 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_3) 
                               & (IData)(vlSelf->_mc___05Fs3627));
    vlSelf->_cp___05Fs13145 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_7) 
                               & (IData)(vlSelf->_mc___05Fs3628));
    vlSelf->_cp___05Fs13146 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_7) 
                               & (IData)(vlSelf->_mc___05Fs3629));
    vlSelf->_cp___05Fs13147 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_7) 
                               & (IData)(vlSelf->_mc___05Fs3630));
    vlSelf->_cp___05Fs13144 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_7) 
                               & (IData)(vlSelf->_mc___05Fs3627));
    vlSelf->_cp___05Fs13149 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_11) 
                               & (IData)(vlSelf->_mc___05Fs3628));
    vlSelf->_cp___05Fs13150 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_11) 
                               & (IData)(vlSelf->_mc___05Fs3629));
    vlSelf->_cp___05Fs13151 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_11) 
                               & (IData)(vlSelf->_mc___05Fs3630));
    vlSelf->_cp___05Fs13148 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_11) 
                               & (IData)(vlSelf->_mc___05Fs3627));
    vlSelf->_cp___05Fs13153 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_15) 
                               & (IData)(vlSelf->_mc___05Fs3628));
    vlSelf->_cp___05Fs13154 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_15) 
                               & (IData)(vlSelf->_mc___05Fs3629));
    vlSelf->_cp___05Fs13155 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_15) 
                               & (IData)(vlSelf->_mc___05Fs3630));
    vlSelf->_cp___05Fs13152 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_15) 
                               & (IData)(vlSelf->_mc___05Fs3627));
    vlSelf->_cp___05Fs13157 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_19) 
                               & (IData)(vlSelf->_mc___05Fs3628));
    vlSelf->_cp___05Fs13158 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_19) 
                               & (IData)(vlSelf->_mc___05Fs3629));
    vlSelf->_cp___05Fs13159 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_19) 
                               & (IData)(vlSelf->_mc___05Fs3630));
    vlSelf->_cp___05Fs13156 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_19) 
                               & (IData)(vlSelf->_mc___05Fs3627));
    vlSelf->_cp___05Fs13161 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_23) 
                               & (IData)(vlSelf->_mc___05Fs3628));
    vlSelf->_cp___05Fs13162 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_23) 
                               & (IData)(vlSelf->_mc___05Fs3629));
    vlSelf->_cp___05Fs13163 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_23) 
                               & (IData)(vlSelf->_mc___05Fs3630));
    vlSelf->_cp___05Fs13160 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_23) 
                               & (IData)(vlSelf->_mc___05Fs3627));
    vlSelf->_cp___05Fs13165 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_27) 
                               & (IData)(vlSelf->_mc___05Fs3628));
    vlSelf->_cp___05Fs13166 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_27) 
                               & (IData)(vlSelf->_mc___05Fs3629));
    vlSelf->_cp___05Fs13167 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_27) 
                               & (IData)(vlSelf->_mc___05Fs3630));
    vlSelf->_cp___05Fs13164 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_27) 
                               & (IData)(vlSelf->_mc___05Fs3627));
    vlSelf->_cp___05Fs13169 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_31) 
                               & (IData)(vlSelf->_mc___05Fs3628));
    vlSelf->_cp___05Fs13170 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_31) 
                               & (IData)(vlSelf->_mc___05Fs3629));
    vlSelf->_cp___05Fs13171 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_31) 
                               & (IData)(vlSelf->_mc___05Fs3630));
    vlSelf->_cp___05Fs13168 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_31) 
                               & (IData)(vlSelf->_mc___05Fs3627));
    vlSelf->_cp___05Fs13173 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_35) 
                               & (IData)(vlSelf->_mc___05Fs3628));
    vlSelf->_cp___05Fs13174 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_35) 
                               & (IData)(vlSelf->_mc___05Fs3629));
    vlSelf->_cp___05Fs13175 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_35) 
                               & (IData)(vlSelf->_mc___05Fs3630));
    vlSelf->_cp___05Fs13172 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_35) 
                               & (IData)(vlSelf->_mc___05Fs3627));
    vlSelf->_cp___05Fs13177 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_42) 
                               & (IData)(vlSelf->_mc___05Fs3628));
    vlSelf->_cp___05Fs13178 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_42) 
                               & (IData)(vlSelf->_mc___05Fs3629));
    vlSelf->_cp___05Fs13179 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_42) 
                               & (IData)(vlSelf->_mc___05Fs3630));
    vlSelf->_cp___05Fs13176 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_42) 
                               & (IData)(vlSelf->_mc___05Fs3627));
    vlSelf->_cp___05Fs13181 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_46) 
                               & (IData)(vlSelf->_mc___05Fs3628));
    vlSelf->_cp___05Fs13182 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_46) 
                               & (IData)(vlSelf->_mc___05Fs3629));
    vlSelf->_cp___05Fs13183 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_46) 
                               & (IData)(vlSelf->_mc___05Fs3630));
    vlSelf->_cp___05Fs13180 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_46) 
                               & (IData)(vlSelf->_mc___05Fs3627));
    vlSelf->_cp___05Fs13185 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_50) 
                               & (IData)(vlSelf->_mc___05Fs3628));
    vlSelf->_cp___05Fs13186 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_50) 
                               & (IData)(vlSelf->_mc___05Fs3629));
    vlSelf->_cp___05Fs13187 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_50) 
                               & (IData)(vlSelf->_mc___05Fs3630));
    vlSelf->_cp___05Fs13184 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_50) 
                               & (IData)(vlSelf->_mc___05Fs3627));
    vlSelf->_cp___05Fs13189 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_54) 
                               & (IData)(vlSelf->_mc___05Fs3628));
    vlSelf->_cp___05Fs13190 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_54) 
                               & (IData)(vlSelf->_mc___05Fs3629));
    vlSelf->_cp___05Fs13191 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_54) 
                               & (IData)(vlSelf->_mc___05Fs3630));
    vlSelf->_cp___05Fs13188 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_54) 
                               & (IData)(vlSelf->_mc___05Fs3627));
    vlSelf->_cp___05Fs13193 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_78) 
                               & (IData)(vlSelf->_mc___05Fs3628));
    vlSelf->_cp___05Fs13194 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_78) 
                               & (IData)(vlSelf->_mc___05Fs3629));
    vlSelf->_cp___05Fs13195 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_78) 
                               & (IData)(vlSelf->_mc___05Fs3630));
    vlSelf->_cp___05Fs13192 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_78) 
                               & (IData)(vlSelf->_mc___05Fs3627));
    vlSelf->_cp___05Fs13197 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_82) 
                               & (IData)(vlSelf->_mc___05Fs3628));
    vlSelf->_cp___05Fs13198 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_82) 
                               & (IData)(vlSelf->_mc___05Fs3629));
    vlSelf->_cp___05Fs13199 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_82) 
                               & (IData)(vlSelf->_mc___05Fs3630));
    vlSelf->_cp___05Fs13196 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_82) 
                               & (IData)(vlSelf->_mc___05Fs3627));
    vlSelf->_cp___05Fs13201 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_93) 
                               & (IData)(vlSelf->_mc___05Fs3628));
    vlSelf->_cp___05Fs13202 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_93) 
                               & (IData)(vlSelf->_mc___05Fs3629));
    vlSelf->_cp___05Fs13203 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_93) 
                               & (IData)(vlSelf->_mc___05Fs3630));
    vlSelf->_cp___05Fs13200 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_93) 
                               & (IData)(vlSelf->_mc___05Fs3627));
    vlSelf->_cp___05Fs13205 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_97) 
                               & (IData)(vlSelf->_mc___05Fs3628));
    vlSelf->_cp___05Fs13206 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_97) 
                               & (IData)(vlSelf->_mc___05Fs3629));
    vlSelf->_cp___05Fs13207 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_97) 
                               & (IData)(vlSelf->_mc___05Fs3630));
    vlSelf->_cp___05Fs13204 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_97) 
                               & (IData)(vlSelf->_mc___05Fs3627));
    vlSelf->_cp___05Fs13210 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_102) 
                               & (IData)(vlSelf->_mc___05Fs3628));
    vlSelf->_cp___05Fs13211 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_102) 
                               & (IData)(vlSelf->_mc___05Fs3629));
    vlSelf->_cp___05Fs13212 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_102) 
                               & (IData)(vlSelf->_mc___05Fs3630));
    vlSelf->_cp___05Fs13209 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_102) 
                               & (IData)(vlSelf->_mc___05Fs3627));
    vlSelf->_cp___05Fs12812 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT___GEN_51)));
    vlSelf->_cp___05Fs13370 = ((IData)(vlSelf->_cp___05Fs13135) 
                               & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hea6ecce6__0));
    vlSelf->_cp___05Fs13133 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__autoexecdataWrEnMaybe));
    vlSelf->_cp___05Fs13132 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__autoexecprogbufWrEnMaybe));
    vlSelf->_cp___05Fs13218 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13141));
    vlSelf->_cp___05Fs13219 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13142));
    vlSelf->_cp___05Fs13220 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13143));
    vlSelf->_cp___05Fs13217 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13140));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_4 
        = ((IData)(vlSelf->_cp___05Fs13140) | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_3) 
                                               & (IData)(vlSelf->_mc___05Fs3627)));
    vlSelf->_cp___05Fs13278 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13145));
    vlSelf->_cp___05Fs13279 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13146));
    vlSelf->_cp___05Fs13280 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13147));
    vlSelf->_cp___05Fs13277 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13144));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_56 
        = ((IData)(vlSelf->_cp___05Fs13144) | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_7) 
                                               & (IData)(vlSelf->_mc___05Fs3627)));
    vlSelf->_cp___05Fs13258 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13149));
    vlSelf->_cp___05Fs13259 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13150));
    vlSelf->_cp___05Fs13260 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13151));
    vlSelf->_cp___05Fs13257 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13148));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_36 
        = ((IData)(vlSelf->_cp___05Fs13148) | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_11) 
                                               & (IData)(vlSelf->_mc___05Fs3627)));
    vlSelf->_cp___05Fs13250 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13153));
    vlSelf->_cp___05Fs13251 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13154));
    vlSelf->_cp___05Fs13252 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13155));
    vlSelf->_cp___05Fs13249 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13152));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_28 
        = ((IData)(vlSelf->_cp___05Fs13152) | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_15) 
                                               & (IData)(vlSelf->_mc___05Fs3627)));
    vlSelf->_cp___05Fs13234 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13157));
    vlSelf->_cp___05Fs13235 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13158));
    vlSelf->_cp___05Fs13236 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13159));
    vlSelf->_cp___05Fs13233 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13156));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_12 
        = ((IData)(vlSelf->_cp___05Fs13156) | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_19) 
                                               & (IData)(vlSelf->_mc___05Fs3627)));
    vlSelf->_cp___05Fs13266 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13161));
    vlSelf->_cp___05Fs13267 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13162));
    vlSelf->_cp___05Fs13268 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13163));
    vlSelf->_cp___05Fs13265 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13160));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_44 
        = ((IData)(vlSelf->_cp___05Fs13160) | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_23) 
                                               & (IData)(vlSelf->_mc___05Fs3627)));
    vlSelf->_cp___05Fs13214 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13165));
    vlSelf->_cp___05Fs13215 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13166));
    vlSelf->_cp___05Fs13216 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13167));
    vlSelf->_cp___05Fs13213 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13164));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_0 
        = ((IData)(vlSelf->_cp___05Fs13164) | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_27) 
                                               & (IData)(vlSelf->_mc___05Fs3627)));
    vlSelf->_cp___05Fs13282 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13169));
    vlSelf->_cp___05Fs13283 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13170));
    vlSelf->_cp___05Fs13284 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13171));
    vlSelf->_cp___05Fs13281 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13168));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_60 
        = ((IData)(vlSelf->_cp___05Fs13168) | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_31) 
                                               & (IData)(vlSelf->_mc___05Fs3627)));
    vlSelf->_cp___05Fs13262 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13173));
    vlSelf->_cp___05Fs13263 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13174));
    vlSelf->_cp___05Fs13264 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13175));
    vlSelf->_cp___05Fs13261 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13172));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_40 
        = ((IData)(vlSelf->_cp___05Fs13172) | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_35) 
                                               & (IData)(vlSelf->_mc___05Fs3627)));
    vlSelf->_cp___05Fs13242 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13177));
    vlSelf->_cp___05Fs13243 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13178));
    vlSelf->_cp___05Fs13244 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13179));
    vlSelf->_cp___05Fs13241 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13176));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_20 
        = ((IData)(vlSelf->_cp___05Fs13176) | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_42) 
                                               & (IData)(vlSelf->_mc___05Fs3627)));
    vlSelf->_cp___05Fs13246 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13181));
    vlSelf->_cp___05Fs13247 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13182));
    vlSelf->_cp___05Fs13248 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13183));
    vlSelf->_cp___05Fs13245 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13180));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_24 
        = ((IData)(vlSelf->_cp___05Fs13180) | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_46) 
                                               & (IData)(vlSelf->_mc___05Fs3627)));
    vlSelf->_cp___05Fs13226 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13185));
    vlSelf->_cp___05Fs13227 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13186));
    vlSelf->_cp___05Fs13228 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13187));
    vlSelf->_cp___05Fs13225 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13184));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_4 
        = ((IData)(vlSelf->_cp___05Fs13184) | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_50) 
                                               & (IData)(vlSelf->_mc___05Fs3627)));
    vlSelf->_cp___05Fs13274 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13189));
    vlSelf->_cp___05Fs13275 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13190));
    vlSelf->_cp___05Fs13276 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13191));
    vlSelf->_cp___05Fs13273 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13188));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_52 
        = ((IData)(vlSelf->_cp___05Fs13188) | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_54) 
                                               & (IData)(vlSelf->_mc___05Fs3627)));
    vlSelf->_cp___05Fs13222 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13193));
    vlSelf->_cp___05Fs13223 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13194));
    vlSelf->_cp___05Fs13224 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13195));
    vlSelf->_cp___05Fs13221 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13192));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_0 
        = ((IData)(vlSelf->_cp___05Fs13192) | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_78) 
                                               & (IData)(vlSelf->_mc___05Fs3627)));
    vlSelf->_cp___05Fs13230 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13197));
    vlSelf->_cp___05Fs13231 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13198));
    vlSelf->_cp___05Fs13232 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13199));
    vlSelf->_cp___05Fs13229 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13196));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_8 
        = ((IData)(vlSelf->_cp___05Fs13196) | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_82) 
                                               & (IData)(vlSelf->_mc___05Fs3627)));
    vlSelf->_cp___05Fs13270 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13201));
    vlSelf->_cp___05Fs13271 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13202));
    vlSelf->_cp___05Fs13272 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13203));
    vlSelf->_cp___05Fs13269 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13200));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_48 
        = ((IData)(vlSelf->_cp___05Fs13200) | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_93) 
                                               & (IData)(vlSelf->_mc___05Fs3627)));
    vlSelf->_cp___05Fs13254 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13205));
    vlSelf->_cp___05Fs13255 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13206));
    vlSelf->_cp___05Fs13256 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13207));
    vlSelf->_cp___05Fs13253 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13204));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_32 
        = ((IData)(vlSelf->_cp___05Fs13204) | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_97) 
                                               & (IData)(vlSelf->_mc___05Fs3627)));
    vlSelf->_cp___05Fs13238 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13210));
    vlSelf->_cp___05Fs13239 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13211));
    vlSelf->_cp___05Fs13240 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13212));
    vlSelf->_cp___05Fs13237 = ((IData)(vlSelf->_cp___05Fs13368) 
                               & (IData)(vlSelf->_cp___05Fs13209));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_16 
        = ((IData)(vlSelf->_cp___05Fs13209) | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_102) 
                                               & (IData)(vlSelf->_mc___05Fs3627)));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__autoexec 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_0) 
            & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecdata)) 
           | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_4) 
               & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecdata) 
                  >> 1U)) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_0) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf)) 
                             | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_4) 
                                 & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                    >> 1U)) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_8) 
                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                                   >> 2U)) 
                                               | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_12) 
                                                   & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                                      >> 3U)) 
                                                  | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_16) 
                                                      & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                                         >> 4U)) 
                                                     | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_20) 
                                                         & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                                            >> 5U)) 
                                                        | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_24) 
                                                            & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                                               >> 6U)) 
                                                           | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_28) 
                                                               & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                                                  >> 7U)) 
                                                              | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_32) 
                                                                  & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                                                     >> 8U)) 
                                                                 | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_36) 
                                                                     & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                                                        >> 9U)) 
                                                                    | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_40) 
                                                                        & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                                                           >> 0xaU)) 
                                                                       | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_44) 
                                                                           & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                                                              >> 0xbU)) 
                                                                          | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_48) 
                                                                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                                                                >> 0xcU)) 
                                                                             | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_52) 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                                                                >> 0xdU)) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_56) 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                                                                >> 0xeU)) 
                                                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_60) 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf) 
                                                                                >> 0xfU)))))))))))))))))));
    vlSelf->_cp___05Fs13125 = (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSWrEnMaybe) 
                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__autoexecdataWrEnMaybe) 
                                   | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__autoexecprogbufWrEnMaybe) 
                                      | ((IData)(vlSelf->_cp___05Fs13208) 
                                         | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_0) 
                                             | ((IData)(vlSelf->_cp___05Fs13165) 
                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_27) 
                                                    & (IData)(vlSelf->_mc___05Fs3628)) 
                                                   | ((IData)(vlSelf->_cp___05Fs13166) 
                                                      | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_27) 
                                                          & (IData)(vlSelf->_mc___05Fs3629)) 
                                                         | ((IData)(vlSelf->_cp___05Fs13167) 
                                                            | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_27) 
                                                                & (IData)(vlSelf->_mc___05Fs3630)) 
                                                               | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_4) 
                                                                  | ((IData)(vlSelf->_cp___05Fs13141) 
                                                                     | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_3) 
                                                                         & (IData)(vlSelf->_mc___05Fs3628)) 
                                                                        | ((IData)(vlSelf->_cp___05Fs13142) 
                                                                           | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_3) 
                                                                               & (IData)(vlSelf->_mc___05Fs3629)) 
                                                                              | ((IData)(vlSelf->_cp___05Fs13143) 
                                                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_3) 
                                                                                & (IData)(vlSelf->_mc___05Fs3630))))))))))))))) 
                                            | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_0) 
                                               | ((IData)(vlSelf->_cp___05Fs13193) 
                                                  | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_78) 
                                                      & (IData)(vlSelf->_mc___05Fs3628)) 
                                                     | ((IData)(vlSelf->_cp___05Fs13194) 
                                                        | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_78) 
                                                            & (IData)(vlSelf->_mc___05Fs3629)) 
                                                           | ((IData)(vlSelf->_cp___05Fs13195) 
                                                              | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_78) 
                                                                  & (IData)(vlSelf->_mc___05Fs3630)) 
                                                                 | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_4) 
                                                                    | ((IData)(vlSelf->_cp___05Fs13185) 
                                                                       | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_50) 
                                                                           & (IData)(vlSelf->_mc___05Fs3628)) 
                                                                          | ((IData)(vlSelf->_cp___05Fs13186) 
                                                                             | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_50) 
                                                                                & (IData)(vlSelf->_mc___05Fs3629)) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13187) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_50) 
                                                                                & (IData)(vlSelf->_mc___05Fs3630)) 
                                                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_8) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13197) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_82) 
                                                                                & (IData)(vlSelf->_mc___05Fs3628)) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13198) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_82) 
                                                                                & (IData)(vlSelf->_mc___05Fs3629)) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13199) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_82) 
                                                                                & (IData)(vlSelf->_mc___05Fs3630)) 
                                                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_12) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13157) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_19) 
                                                                                & (IData)(vlSelf->_mc___05Fs3628)) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13158) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_19) 
                                                                                & (IData)(vlSelf->_mc___05Fs3629)) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13159) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_19) 
                                                                                & (IData)(vlSelf->_mc___05Fs3630)) 
                                                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_16) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13210) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_102) 
                                                                                & (IData)(vlSelf->_mc___05Fs3628)) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13211) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_102) 
                                                                                & (IData)(vlSelf->_mc___05Fs3629)) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13212) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_102) 
                                                                                & (IData)(vlSelf->_mc___05Fs3630)) 
                                                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_20) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13177) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_42) 
                                                                                & (IData)(vlSelf->_mc___05Fs3628)) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13178) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_42) 
                                                                                & (IData)(vlSelf->_mc___05Fs3629)) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13179) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_42) 
                                                                                & (IData)(vlSelf->_mc___05Fs3630)) 
                                                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_24) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13181) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_46) 
                                                                                & (IData)(vlSelf->_mc___05Fs3628)) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13182) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_46) 
                                                                                & (IData)(vlSelf->_mc___05Fs3629)) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13183) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_46) 
                                                                                & (IData)(vlSelf->_mc___05Fs3630)) 
                                                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_28) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13153) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_15) 
                                                                                & (IData)(vlSelf->_mc___05Fs3628)) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13154) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_15) 
                                                                                & (IData)(vlSelf->_mc___05Fs3629)) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13155) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_15) 
                                                                                & (IData)(vlSelf->_mc___05Fs3630)) 
                                                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_32) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13205) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_97) 
                                                                                & (IData)(vlSelf->_mc___05Fs3628)) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13206) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_97) 
                                                                                & (IData)(vlSelf->_mc___05Fs3629)) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13207) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_97) 
                                                                                & (IData)(vlSelf->_mc___05Fs3630)) 
                                                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_36) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13149) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_11) 
                                                                                & (IData)(vlSelf->_mc___05Fs3628)) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13150) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_11) 
                                                                                & (IData)(vlSelf->_mc___05Fs3629)) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13151) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_11) 
                                                                                & (IData)(vlSelf->_mc___05Fs3630)) 
                                                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_40) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13173) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_35) 
                                                                                & (IData)(vlSelf->_mc___05Fs3628)) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13174) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_35) 
                                                                                & (IData)(vlSelf->_mc___05Fs3629)) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13175) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_35) 
                                                                                & (IData)(vlSelf->_mc___05Fs3630)) 
                                                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_44) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13161) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_23) 
                                                                                & (IData)(vlSelf->_mc___05Fs3628)) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13162) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_23) 
                                                                                & (IData)(vlSelf->_mc___05Fs3629)) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13163) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_23) 
                                                                                & (IData)(vlSelf->_mc___05Fs3630)) 
                                                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_48) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13201) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_93) 
                                                                                & (IData)(vlSelf->_mc___05Fs3628)) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13202) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_93) 
                                                                                & (IData)(vlSelf->_mc___05Fs3629)) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13203) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_93) 
                                                                                & (IData)(vlSelf->_mc___05Fs3630)) 
                                                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_52) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13189) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_54) 
                                                                                & (IData)(vlSelf->_mc___05Fs3628)) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13190) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_54) 
                                                                                & (IData)(vlSelf->_mc___05Fs3629)) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13191) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_54) 
                                                                                & (IData)(vlSelf->_mc___05Fs3630)) 
                                                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_56) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13145) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_7) 
                                                                                & (IData)(vlSelf->_mc___05Fs3628)) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13146) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_7) 
                                                                                & (IData)(vlSelf->_mc___05Fs3629)) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13147) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_7) 
                                                                                & (IData)(vlSelf->_mc___05Fs3630)) 
                                                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_60) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13169) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_31) 
                                                                                & (IData)(vlSelf->_mc___05Fs3628)) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13170) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_31) 
                                                                                & (IData)(vlSelf->_mc___05Fs3629)) 
                                                                                | ((IData)(vlSelf->_cp___05Fs13171) 
                                                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_31) 
                                                                                & (IData)(vlSelf->_mc___05Fs3630)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                               & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)));
    vlSelf->_cp___05Fs13371 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__autoexec) 
                               & (IData)(vlSelf->_cp___05Fs13373));
    vlSelf->_cp___05Fs13369 = ((((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hea6ecce6__0)) 
                                 & (IData)(vlSelf->_cp___05Fs13135)) 
                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__autoexec) 
                                   & (IData)(vlSelf->_cp___05Fs13365))) 
                               & (0U == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSReg_cmderr)));
    vlSelf->_cp___05Fs13127 = ((0U != (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))
                                ? ((IData)(vlSelf->_cp___05Fs13372) 
                                   & (IData)(vlSelf->_cp___05Fs13373))
                                : ((~ (IData)(vlSelf->_cp___05Fs13369)) 
                                   & ((IData)(vlSelf->_cp___05Fs13370) 
                                      | (IData)(vlSelf->_cp___05Fs13371))));
}

VL_INLINE_OPT void VExampleRocketSystem___024root___nba_sequent__TOP__30(VExampleRocketSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root___nba_sequent__TOP__30\n"); );
    // Body
    vlSelf->_rs___05Fs3843 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_gray;
    vlSelf->_rs___05Fs3870 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_gray;
    vlSelf->_rs___05Fs3824 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx_gray;
    vlSelf->debug_dmactive = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive;
    vlSelf->_rs___05Fs3693 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartsello;
    vlSelf->_rs___05Fs3699 = vlSelf->debug_dmactive;
}

VL_INLINE_OPT void VExampleRocketSystem___024root___nba_sequent__TOP__31(VExampleRocketSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root___nba_sequent__TOP__31\n"); );
    // Body
    vlSelf->_rs___05Fs3853 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->_rs___05Fs3832 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->_rs___05Fs3805 = vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
}

VL_INLINE_OPT void VExampleRocketSystem___024root___nba_comb__TOP__5(VExampleRocketSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root___nba_comb__TOP__5\n"); );
    // Init
    QData/*63:0*/ ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_126;
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_126 = 0;
    CData/*4:0*/ ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_128;
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_128 = 0;
    CData/*7:0*/ ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_129;
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_129 = 0;
    QData/*63:0*/ ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_130;
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_130 = 0;
    QData/*63:0*/ ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_131;
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_131 = 0;
    SData/*15:0*/ ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h3ec344f6__0;
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h3ec344f6__0 = 0;
    SData/*15:0*/ ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha17969ea__0;
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha17969ea__0 = 0;
    // Body
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__read_mip 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__intsource__DOT__reg_0__DOT__reg_0) 
            << 0xbU) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__intsource_1__DOT__reg_0__DOT__reg_0) 
                          | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mip_seip)) 
                         << 9U) | ((0x80U & ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__intsource__DOT__reg_0__DOT__reg_0) 
                                             << 6U)) 
                                   | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mip_stip) 
                                       << 5U) | ((8U 
                                                  & ((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__intsource__DOT__reg_0__DOT__reg_0) 
                                                     << 3U)) 
                                                 | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mip_ssip) 
                                                    << 1U))))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_8 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mie) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__read_mip));
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_126 
        = (((0xffffffffffff0000ULL & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_125) 
            | (QData)((IData)((0xffffU & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_125) 
                                          | ((IData)(vlSelf->_mc___05Fs2848)
                                              ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__read_mip)
                                              : 0U)))))) 
           | (((IData)(vlSelf->_mc___05Fs2849) ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mie
                : 0ULL) | (((IData)(vlSelf->_mc___05Fs2850)
                             ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mscratch
                             : 0ULL) | (((IData)(vlSelf->_mc___05Fs2851)
                                          ? (((QData)((IData)(
                                                              (0xffffffU 
                                                               & (- (IData)((IData)(vlSelf->_mc___05Fs2806)))))) 
                                              << 0x28U) 
                                             | vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_27)
                                          : 0ULL) | 
                                        (((IData)(vlSelf->_mc___05Fs2852)
                                           ? (((QData)((IData)(
                                                               (0xffffffU 
                                                                & (- (IData)((IData)(vlSelf->_mc___05Fs2807)))))) 
                                               << 0x28U) 
                                              | vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mtval)
                                           : 0ULL) 
                                         | ((IData)(vlSelf->_mc___05Fs2853)
                                             ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mcause
                                             : 0ULL))))));
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h3ec344f6__0 
        = (0x222U & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_8) 
                     & ((IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mideleg 
                                 >> 1U)) << 1U)));
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha17969ea__0 
        = (0xffffU & (~ ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_8)) 
                         | (0x222U & ((IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mideleg 
                                               >> 1U)) 
                                      << 1U)))));
    vlSelf->_cp___05Fs9823 = (1U & (IData)((((0U != 
                                              (0xaaaU 
                                               & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_8))) 
                                             | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__intsink__DOT__chain__DOT__output_chain__DOT__sync_0)) 
                                            | (IData)(vlSelf->_cp___05Fs9830))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_127 
        = ((((QData)((IData)((ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_126 
                              >> 0x20U))) << 0x20U) 
            | (QData)((IData)(((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_126) 
                               | ((IData)(vlSelf->_mc___05Fs2855)
                                   ? (0x40000000U | 
                                      (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreakm) 
                                        << 0xfU) | 
                                       (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreaks) 
                                         << 0xdU) | 
                                        (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreaku) 
                                          << 0xcU) 
                                         | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_dcsr_cause) 
                                             << 6U) 
                                            | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_dcsr_v) 
                                                << 5U) 
                                               | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_dcsr_step) 
                                                   << 2U) 
                                                  | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_dcsr_prv))))))))
                                   : 0U))))) | (((IData)(vlSelf->_mc___05Fs2856)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (0xffffffU 
                                                                    & (- (IData)((IData)(vlSelf->_mc___05Fs2809)))))) 
                                                   << 0x28U) 
                                                  | vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_29)
                                                  : 0ULL) 
                                                | ((IData)(vlSelf->_mc___05Fs2857)
                                                    ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_dscratch0
                                                    : 0ULL)));
    vlSelf->_mc___05Fs2754 = ((IData)(vlSelf->_mc___05Fs2737) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h3ec344f6__0) 
                                 >> 4U));
    vlSelf->_mc___05Fs2755 = ((IData)(vlSelf->_mc___05Fs2737) 
                              & (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h3ec344f6__0));
    vlSelf->_mc___05Fs2756 = ((IData)(vlSelf->_mc___05Fs2737) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h3ec344f6__0) 
                                 >> 8U));
    vlSelf->_mc___05Fs2757 = ((IData)(vlSelf->_mc___05Fs2737) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h3ec344f6__0) 
                                 >> 6U));
    vlSelf->_mc___05Fs2758 = ((IData)(vlSelf->_mc___05Fs2737) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h3ec344f6__0) 
                                 >> 2U));
    vlSelf->_mc___05Fs2759 = ((IData)(vlSelf->_mc___05Fs2737) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h3ec344f6__0) 
                                 >> 0xaU));
    vlSelf->_mc___05Fs2760 = ((IData)(vlSelf->_mc___05Fs2737) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h3ec344f6__0) 
                                 >> 5U));
    vlSelf->_mc___05Fs2761 = ((IData)(vlSelf->_mc___05Fs2737) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h3ec344f6__0) 
                                 >> 1U));
    vlSelf->_mc___05Fs2762 = ((IData)(vlSelf->_mc___05Fs2737) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h3ec344f6__0) 
                                 >> 9U));
    vlSelf->_mc___05Fs2763 = ((IData)(vlSelf->_mc___05Fs2737) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h3ec344f6__0) 
                                 >> 7U));
    vlSelf->_mc___05Fs2764 = ((IData)(vlSelf->_mc___05Fs2737) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h3ec344f6__0) 
                                 >> 3U));
    vlSelf->_mc___05Fs2765 = ((IData)(vlSelf->_mc___05Fs2737) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h3ec344f6__0) 
                                 >> 0xbU));
    vlSelf->_mc___05Fs2766 = ((IData)(vlSelf->_mc___05Fs2737) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h3ec344f6__0) 
                                 >> 0xcU));
    vlSelf->_mc___05Fs2767 = ((IData)(vlSelf->_mc___05Fs2737) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h3ec344f6__0) 
                                 >> 0xdU));
    vlSelf->_mc___05Fs2768 = ((IData)(vlSelf->_mc___05Fs2737) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h3ec344f6__0) 
                                 >> 0xeU));
    vlSelf->_mc___05Fs2769 = ((IData)(vlSelf->_mc___05Fs2737) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h3ec344f6__0) 
                                 >> 0xfU));
    vlSelf->_mc___05Fs2770 = ((IData)(vlSelf->_mc___05Fs2736) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha17969ea__0) 
                                 >> 4U));
    vlSelf->_mc___05Fs2771 = ((IData)(vlSelf->_mc___05Fs2736) 
                              & (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha17969ea__0));
    vlSelf->_mc___05Fs2772 = ((IData)(vlSelf->_mc___05Fs2736) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha17969ea__0) 
                                 >> 8U));
    vlSelf->_mc___05Fs2773 = ((IData)(vlSelf->_mc___05Fs2736) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha17969ea__0) 
                                 >> 6U));
    vlSelf->_mc___05Fs2774 = ((IData)(vlSelf->_mc___05Fs2736) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha17969ea__0) 
                                 >> 2U));
    vlSelf->_mc___05Fs2775 = ((IData)(vlSelf->_mc___05Fs2736) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha17969ea__0) 
                                 >> 0xaU));
    vlSelf->_mc___05Fs2776 = ((IData)(vlSelf->_mc___05Fs2736) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha17969ea__0) 
                                 >> 5U));
    vlSelf->_mc___05Fs2777 = ((IData)(vlSelf->_mc___05Fs2736) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha17969ea__0) 
                                 >> 1U));
    vlSelf->_mc___05Fs2778 = ((IData)(vlSelf->_mc___05Fs2736) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha17969ea__0) 
                                 >> 9U));
    vlSelf->_mc___05Fs2779 = ((IData)(vlSelf->_mc___05Fs2736) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha17969ea__0) 
                                 >> 7U));
    vlSelf->_mc___05Fs2780 = ((IData)(vlSelf->_mc___05Fs2736) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha17969ea__0) 
                                 >> 3U));
    vlSelf->_mc___05Fs2781 = ((IData)(vlSelf->_mc___05Fs2736) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha17969ea__0) 
                                 >> 0xbU));
    vlSelf->_mc___05Fs2782 = ((IData)(vlSelf->_mc___05Fs2736) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha17969ea__0) 
                                 >> 0xcU));
    vlSelf->_mc___05Fs2783 = ((IData)(vlSelf->_mc___05Fs2736) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha17969ea__0) 
                                 >> 0xdU));
    vlSelf->_mc___05Fs2784 = ((IData)(vlSelf->_mc___05Fs2736) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha17969ea__0) 
                                 >> 0xeU));
    vlSelf->_mc___05Fs2785 = ((IData)(vlSelf->_mc___05Fs2736) 
                              & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha17969ea__0) 
                                 >> 0xfU));
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_128 
        = (0x1fU & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_127) 
                    | ((IData)(vlSelf->_mc___05Fs2858)
                        ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_fflags)
                        : 0U)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___csr_io_interrupt_cause 
        = ((QData)((IData)(((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__intsink__DOT__chain__DOT__output_chain__DOT__sync_0)
                             ? 0xeU : ((IData)(vlSelf->_mc___05Fs2785)
                                        ? 0xfU : ((IData)(vlSelf->_mc___05Fs2784)
                                                   ? 0xeU
                                                   : 
                                                  ((IData)(vlSelf->_mc___05Fs2783)
                                                    ? 0xdU
                                                    : 
                                                   ((IData)(vlSelf->_mc___05Fs2782)
                                                     ? 0xcU
                                                     : 
                                                    ((IData)(vlSelf->_mc___05Fs2781)
                                                      ? 0xbU
                                                      : 
                                                     ((IData)(vlSelf->_mc___05Fs2780)
                                                       ? 3U
                                                       : 
                                                      ((IData)(vlSelf->_mc___05Fs2779)
                                                        ? 7U
                                                        : 
                                                       ((IData)(vlSelf->_mc___05Fs2778)
                                                         ? 9U
                                                         : 
                                                        ((IData)(vlSelf->_mc___05Fs2777)
                                                          ? 1U
                                                          : 
                                                         ((IData)(vlSelf->_mc___05Fs2776)
                                                           ? 5U
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs2775)
                                                            ? 0xaU
                                                            : 
                                                           ((IData)(vlSelf->_mc___05Fs2774)
                                                             ? 2U
                                                             : 
                                                            ((IData)(vlSelf->_mc___05Fs2773)
                                                              ? 6U
                                                              : 
                                                             ((IData)(vlSelf->_mc___05Fs2772)
                                                               ? 8U
                                                               : 
                                                              ((IData)(vlSelf->_mc___05Fs2771)
                                                                ? 0U
                                                                : 
                                                               ((IData)(vlSelf->_mc___05Fs2770)
                                                                 ? 4U
                                                                 : 
                                                                ((IData)(vlSelf->_mc___05Fs2769)
                                                                  ? 0xfU
                                                                  : 
                                                                 ((IData)(vlSelf->_mc___05Fs2768)
                                                                   ? 0xeU
                                                                   : 
                                                                  ((IData)(vlSelf->_mc___05Fs2767)
                                                                    ? 0xdU
                                                                    : 
                                                                   ((IData)(vlSelf->_mc___05Fs2766)
                                                                     ? 0xcU
                                                                     : 
                                                                    ((IData)(vlSelf->_mc___05Fs2765)
                                                                      ? 0xbU
                                                                      : 
                                                                     ((IData)(vlSelf->_mc___05Fs2764)
                                                                       ? 3U
                                                                       : 
                                                                      ((IData)(vlSelf->_mc___05Fs2763)
                                                                        ? 7U
                                                                        : 
                                                                       ((IData)(vlSelf->_mc___05Fs2762)
                                                                         ? 9U
                                                                         : 
                                                                        ((IData)(vlSelf->_mc___05Fs2761)
                                                                          ? 1U
                                                                          : 
                                                                         ((IData)(vlSelf->_mc___05Fs2760)
                                                                           ? 5U
                                                                           : 
                                                                          ((IData)(vlSelf->_mc___05Fs2759)
                                                                            ? 0xaU
                                                                            : 
                                                                           ((IData)(vlSelf->_mc___05Fs2758)
                                                                             ? 2U
                                                                             : 
                                                                            ((IData)(vlSelf->_mc___05Fs2757)
                                                                              ? 6U
                                                                              : 
                                                                             ((IData)(vlSelf->_mc___05Fs2756)
                                                                               ? 8U
                                                                               : 
                                                                              (4U 
                                                                               & ((~ (IData)(vlSelf->_mc___05Fs2755)) 
                                                                                << 2U))))))))))))))))))))))))))))))))))) 
           - 0x8000000000000000ULL);
    vlSelf->_mc___05Fs3245 = ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__io_status_cease_r) 
                                  | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_debug))) 
                              & (((IData)(vlSelf->_cp___05Fs9825) 
                                  & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__intsink__DOT__chain__DOT__output_chain__DOT__sync_0) 
                                     | ((IData)(vlSelf->_mc___05Fs2785) 
                                        | ((IData)(vlSelf->_mc___05Fs2784) 
                                           | ((IData)(vlSelf->_mc___05Fs2783) 
                                              | ((IData)(vlSelf->_mc___05Fs2782) 
                                                 | ((IData)(vlSelf->_mc___05Fs2781) 
                                                    | ((IData)(vlSelf->_mc___05Fs2780) 
                                                       | ((IData)(vlSelf->_mc___05Fs2779) 
                                                          | ((IData)(vlSelf->_mc___05Fs2778) 
                                                             | ((IData)(vlSelf->_mc___05Fs2777) 
                                                                | ((IData)(vlSelf->_mc___05Fs2776) 
                                                                   | ((IData)(vlSelf->_mc___05Fs2775) 
                                                                      | ((IData)(vlSelf->_mc___05Fs2774) 
                                                                         | ((IData)(vlSelf->_mc___05Fs2773) 
                                                                            | ((IData)(vlSelf->_mc___05Fs2772) 
                                                                               | ((IData)(vlSelf->_mc___05Fs2771) 
                                                                                | ((IData)(vlSelf->_mc___05Fs2770) 
                                                                                | ((IData)(vlSelf->_mc___05Fs2769) 
                                                                                | ((IData)(vlSelf->_mc___05Fs2768) 
                                                                                | ((IData)(vlSelf->_mc___05Fs2767) 
                                                                                | ((IData)(vlSelf->_mc___05Fs2766) 
                                                                                | ((IData)(vlSelf->_mc___05Fs2765) 
                                                                                | ((IData)(vlSelf->_mc___05Fs2764) 
                                                                                | ((IData)(vlSelf->_mc___05Fs2763) 
                                                                                | ((IData)(vlSelf->_mc___05Fs2762) 
                                                                                | ((IData)(vlSelf->_mc___05Fs2761) 
                                                                                | ((IData)(vlSelf->_mc___05Fs2760) 
                                                                                | ((IData)(vlSelf->_mc___05Fs2759) 
                                                                                | ((IData)(vlSelf->_mc___05Fs2758) 
                                                                                | ((IData)(vlSelf->_mc___05Fs2757) 
                                                                                | ((IData)(vlSelf->_mc___05Fs2756) 
                                                                                | ((IData)(vlSelf->_mc___05Fs2755) 
                                                                                | (IData)(vlSelf->_mc___05Fs2754)))))))))))))))))))))))))))))))))) 
                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_singleStepped)));
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_129 
        = (((0xe0U & ((IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_127 
                               >> 5U)) << 5U)) | ((0x18U 
                                                   & (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_128)) 
                                                  | (7U 
                                                     & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_128) 
                                                        | ((IData)(vlSelf->_mc___05Fs2859)
                                                            ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_frm)
                                                            : 0U))))) 
           | ((IData)(vlSelf->_mc___05Fs2860) ? (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_frm) 
                                                  << 5U) 
                                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_fflags))
               : 0U));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_killd 
        = (1U & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_valid)) 
                 | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_replay) 
                    | ((IData)(vlSelf->_mc___05Fs1675) 
                       | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_160) 
                          | (IData)(vlSelf->_mc___05Fs3245))))));
    vlSelf->_cp___05Fs10070 = ((IData)(vlSelf->_mc___05Fs3245) 
                               | ((IData)(vlSelf->_mc___05Fs3244) 
                                  | ((IData)(vlSelf->_mc___05Fs3243) 
                                     | ((IData)(vlSelf->_mc___05Fs3242) 
                                        | ((IData)(vlSelf->_mc___05Fs3241) 
                                           | ((IData)(vlSelf->_mc___05Fs3240) 
                                              | ((IData)(vlSelf->_mc___05Fs3239) 
                                                 | ((IData)(vlSelf->_mc___05Fs3238) 
                                                    | ((IData)(vlSelf->_mc___05Fs3237) 
                                                       | ((IData)(vlSelf->_mc___05Fs3236) 
                                                          | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_illegal_insn)))))))))));
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_130 
        = (((0xffffffffffffff00ULL & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_127) 
            | (QData)((IData)(((0xf8U & (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_129)) 
                               | (7U & ((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_129) 
                                        | ((IData)(vlSelf->_mc___05Fs2861)
                                            ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mcountinhibit)
                                            : 0U))))))) 
           | (((IData)(vlSelf->_mc___05Fs2862) ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__value_1
                : 0ULL) | ((IData)(vlSelf->_mc___05Fs2863)
                            ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__value
                            : 0ULL)));
    vlSelf->_cp___05Fs10067 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_killd)));
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_131 
        = ((((QData)((IData)((ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_130 
                              >> 0x20U))) << 0x20U) 
            | (QData)((IData)(((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_130) 
                               | ((IData)(vlSelf->_mc___05Fs2951)
                                   ? (7U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mcounteren)
                                   : 0U))))) | (((IData)(vlSelf->_mc___05Fs2952)
                                                  ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__value_1
                                                  : 0ULL) 
                                                | (((IData)(vlSelf->_mc___05Fs2953)
                                                     ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__value
                                                     : 0ULL) 
                                                   | (((IData)(vlSelf->_mc___05Fs2954)
                                                        ? (QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_menvcfg_fiom))
                                                        : 0ULL) 
                                                      | (((IData)(vlSelf->_mc___05Fs2955)
                                                           ? 
                                                          (0x200000000ULL 
                                                           | (((QData)((IData)(
                                                                               (3U 
                                                                                == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_fs)))) 
                                                               << 0x3fU) 
                                                              | (QData)((IData)(
                                                                                (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_mxr) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_sum) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_fs) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_spp) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_spie) 
                                                                                << 5U) 
                                                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_sie) 
                                                                                << 1U))))))))))
                                                           : 0ULL) 
                                                         | (((IData)(vlSelf->_mc___05Fs2956)
                                                              ? (QData)((IData)(
                                                                                (0x222U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__read_mip) 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mideleg 
                                                                                >> 1U)) 
                                                                                << 1U)))))
                                                              : 0ULL) 
                                                            | (((IData)(vlSelf->_mc___05Fs2957)
                                                                 ? (QData)((IData)(
                                                                                (0x222U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mie) 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mideleg 
                                                                                >> 1U)) 
                                                                                << 1U)))))
                                                                 : 0ULL) 
                                                               | (((IData)(vlSelf->_mc___05Fs2958)
                                                                    ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_sscratch
                                                                    : 0ULL) 
                                                                  | (((IData)(vlSelf->_mc___05Fs2959)
                                                                       ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_scause
                                                                       : 0ULL) 
                                                                     | (((IData)(vlSelf->_mc___05Fs2960)
                                                                          ? 
                                                                         (((QData)((IData)(
                                                                                (0xffffffU 
                                                                                & (- (IData)((IData)(vlSelf->_mc___05Fs2810)))))) 
                                                                           << 0x28U) 
                                                                          | vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_stval)
                                                                          : 0ULL) 
                                                                        | (((IData)(vlSelf->_mc___05Fs2961)
                                                                             ? 
                                                                            (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_satp_mode)) 
                                                                              << 0x3cU) 
                                                                             | vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_satp_ppn)
                                                                             : 0ULL) 
                                                                           | (((IData)(vlSelf->_mc___05Fs2962)
                                                                                ? 
                                                                               (((QData)((IData)(
                                                                                (0xffffffU 
                                                                                & (- (IData)((IData)(vlSelf->_mc___05Fs2812)))))) 
                                                                                << 0x28U) 
                                                                                | vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_31)
                                                                                : 0ULL) 
                                                                              | ((IData)(vlSelf->_mc___05Fs2963)
                                                                                 ? 
                                                                                (((QData)((IData)(
                                                                                (0x1ffffffU 
                                                                                & (- (IData)((IData)(vlSelf->_mc___05Fs2803)))))) 
                                                                                << 0x27U) 
                                                                                | vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_24)
                                                                                 : 0ULL)))))))))))));
    vlSelf->_cp___05Fs9721 = ((IData)(vlSelf->_cp___05Fs10067) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_55)));
    vlSelf->_cp___05Fs10078 = ((IData)(vlSelf->_cp___05Fs10067) 
                               | ((IData)(vlSelf->_mc___05Fs3245) 
                                  | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_replay)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_132 
        = ((((QData)((IData)((ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_131 
                              >> 0x20U))) << 0x20U) 
            | (QData)((IData)(((IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_131) 
                               | ((IData)(vlSelf->_mc___05Fs2964)
                                   ? (7U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_scounteren)
                                   : 0U))))) | (((IData)(vlSelf->_mc___05Fs2965)
                                                  ? (QData)((IData)(
                                                                    (0x222U 
                                                                     & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mideleg 
                                                                                >> 1U)) 
                                                                        << 1U))))
                                                  : 0ULL) 
                                                | (((IData)(vlSelf->_mc___05Fs2966)
                                                     ? (QData)((IData)(
                                                                       (0xb15dU 
                                                                        & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_medeleg))))
                                                     : 0ULL) 
                                                   | (((IData)(vlSelf->_mc___05Fs2967)
                                                        ? (QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_senvcfg_fiom))
                                                        : 0ULL) 
                                                      | ((IData)(vlSelf->_mc___05Fs2968)
                                                          ? 
                                                         (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l)) 
                                                           << 0x3fU) 
                                                          | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a)) 
                                                              << 0x3bU) 
                                                             | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_x)) 
                                                                 << 0x3aU) 
                                                                | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_w)) 
                                                                    << 0x39U) 
                                                                   | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_r)) 
                                                                       << 0x38U) 
                                                                      | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l)) 
                                                                          << 0x37U) 
                                                                         | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a)) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_x)) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_w)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_r)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_x)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_w)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_r)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_x)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_w)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_r)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_x) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_w) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_r) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_x) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_w) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_r) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_x) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_w) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_r) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_x) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_w) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_r))))))))))))))))))))))))))))))))))))))))))
                                                          : 0ULL)))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_133 
        = (0x3fffffffU & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_132) 
                          | (((IData)(vlSelf->_mc___05Fs2970)
                               ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr
                               : 0U) | (((IData)(vlSelf->_mc___05Fs2971)
                                          ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr
                                          : 0U) | (
                                                   ((IData)(vlSelf->_mc___05Fs2972)
                                                     ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr
                                                     : 0U) 
                                                   | (((IData)(vlSelf->_mc___05Fs2973)
                                                        ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr
                                                        : 0U) 
                                                      | (((IData)(vlSelf->_mc___05Fs2974)
                                                           ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr
                                                           : 0U) 
                                                         | (((IData)(vlSelf->_mc___05Fs2975)
                                                              ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr
                                                              : 0U) 
                                                            | (((IData)(vlSelf->_mc___05Fs2976)
                                                                 ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr
                                                                 : 0U) 
                                                               | ((IData)(vlSelf->_mc___05Fs2977)
                                                                   ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr
                                                                   : 0U))))))))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___io_rw_rdata_output 
        = (((IData)(vlSelf->_mc___05Fs2986) ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_custom_0
             : 0ULL) | (((0xffffffffc0000000ULL & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_132) 
                         | (QData)((IData)(((0x3ffffffeU 
                                             & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_133) 
                                            | (1U & 
                                               (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_133 
                                                | (IData)(vlSelf->_mc___05Fs2987))))))) 
                        | ((IData)(vlSelf->_mc___05Fs2989)
                            ? 0x20181004ULL : 0ULL)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__wdata 
        = (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_85 
           & (((IData)(vlSelf->_mc___05Fs2813) ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___io_rw_rdata_output
                : 0ULL) | vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_wdata));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__coreMonitorBundle_wrdata 
        = ((IData)(vlSelf->_mc___05Fs3338) ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_0_resp_bits_data
            : ((IData)(vlSelf->_mc___05Fs3335) ? ((IData)(vlSelf->_cp___05Fs10062)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__req_dw)
                                                                      ? (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__result 
                                                                                >> 0x20U))
                                                                      : 
                                                                     (- (IData)((IData)(vlSelf->_mc___05Fs3217)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__loOut)))
                                                   : 0ULL)
                : ((IData)(vlSelf->_mc___05Fs3337) ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___io_rw_rdata_output
                    : vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_wdata)));
    vlSelf->_mc___05Fs2992 = (2U == (3U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__wdata 
                                                   >> 0xbU))));
    vlSelf->_mc___05Fs2996 = (2U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__wdata)));
    vlSelf->_cp___05Fs9989 = ((0U == (0xfU & (IData)(
                                                     (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__wdata 
                                                      >> 0x3cU)))) 
                              | (8U == (0xfU & (IData)(
                                                       (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__wdata 
                                                        >> 0x3cU)))));
    vlSelf->_cp___05Fs9969 = (1U & ((~ (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_pc 
                                                >> 1U))) 
                                    | (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__wdata 
                                               >> 2U))));
    vlSelf->_mc___05Fs2993 = (0U != (3U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__wdata 
                                                   >> 0xdU))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_rs_0 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____Vcellinp__rf_ext__W0_en) 
            & (IData)(vlSelf->_cp___05Fs10088)) ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__coreMonitorBundle_wrdata
            : ((0x1eU >= (0x1fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs1))))
                ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__rf_ext__DOT__Memory
               [(0x1fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs1)))]
                : 0ULL));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_rs_1 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____Vcellinp__rf_ext__W0_en) 
            & (IData)(vlSelf->_cp___05Fs10089)) ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__coreMonitorBundle_wrdata
            : ((0x1eU >= (0x1fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs2))))
                ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__rf_ext__DOT__Memory
               [(0x1fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs2)))]
                : 0ULL));
    vlSelf->_mc___05Fs2997 = vlSelf->_mc___05Fs2993;
}

VL_INLINE_OPT void VExampleRocketSystem___024root___nba_comb__TOP__6(VExampleRocketSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root___nba_comb__TOP__6\n"); );
    // Init
    VlWide<16>/*511:0*/ ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_43;
    VL_ZERO_W(512, ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_43);
    VlWide<16>/*511:0*/ __Vtemp_1;
    VlWide<16>/*511:0*/ __Vtemp_2;
    // Body
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_37 
        = ((IData)(vlSelf->_mc___05Fs682) == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__opcode_1));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_38 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__size_1));
    vlSelf->_cp___05Fs7775 = ((IData)(vlSelf->_cp___05Fs5804) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter)));
    vlSelf->_cp___05Fs7795 = ((IData)(vlSelf->_cp___05Fs5804) 
                              & (IData)(vlSelf->_mc___05Fs896));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_39 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__source_1));
    VL_SHIFTR_WWI(128,128,7, vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_70, vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_1, (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_1, vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_61 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size) 
           == (7U & (__Vtemp_1[0U] >> 1U)));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_2, vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_71 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size) 
           == (7U & (__Vtemp_2[0U] >> 1U)));
    VL_SHIFTR_WWI(512,512,9, ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_43, vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_1 
        = ((((~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__sent_d)) 
             & ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__source) 
                == (0x1fU & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source)))) 
            << 3U) | ((((~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__sent_d)) 
                        & ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__source) 
                           == (0x1fU & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source)))) 
                       << 2U) | ((((~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__sent_d)) 
                                   & ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__source) 
                                      == (0x1fU & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source)))) 
                                  << 1U) | ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__sent_d)) 
                                            & ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__source) 
                                               == (0x1fU 
                                                   & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source)))))));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_40 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__denied) 
           == (IData)(vlSelf->_cp___05Fs5817));
    vlSelf->_cp___05Fs7777 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_37)));
    vlSelf->_cp___05Fs7781 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_38)));
    vlSelf->_cp___05Fs7797 = vlSelf->_cp___05Fs7795;
    vlSelf->_cp___05Fs7783 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_39)));
    vlSelf->_cp___05Fs7827 = (1U & (~ vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_70[0U]));
    vlSelf->_cp___05Fs7808 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_61)));
    vlSelf->_cp___05Fs7832 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_71)));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_60 
        = (((IData)(vlSelf->_mc___05Fs682) == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_43[0U] 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x911240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_43[0U] 
                                                              >> 1U))))))
                                                : 0U)) 
           | ((IData)(vlSelf->_mc___05Fs682) == ((0x17U 
                                                  >= 
                                                  (0x1fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (7U 
                                                       & (ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_43[0U] 
                                                          >> 1U)))))
                                                  ? 
                                                 (7U 
                                                  & (0x951240U 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         * 
                                                         (7U 
                                                          & (ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_43[0U] 
                                                             >> 1U))))))
                                                  : 0U)));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__d_trackerOH 
        = ((IData)(vlSelf->_mc___05Fs816) ? (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_1)
            : (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__d_trackerOH_r));
    vlSelf->_cp___05Fs7787 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_40)));
    vlSelf->_cp___05Fs7806 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_60)));
    vlSelf->_cp___05Fs7554 = (1U & (~ ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__d_normal_valid)) 
                                       | ((0U != (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__d_trackerOH)) 
                                          | (6U == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__d_normal_bits_opcode))))));
    vlSelf->_mc___05Fs819 = (1U & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__d_trackerOH));
    vlSelf->_mc___05Fs821 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__d_trackerOH) 
                                   >> 2U));
    vlSelf->_mc___05Fs820 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__d_trackerOH) 
                                   >> 1U));
    vlSelf->_mc___05Fs822 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__d_trackerOH) 
                                   >> 3U));
}

VL_INLINE_OPT void VExampleRocketSystem___024root___nba_comb__TOP__7(VExampleRocketSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root___nba_comb__TOP__7\n"); );
    // Body
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_12 
        = ((IData)(vlSelf->_mc___05Fs834) | (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__d_normal_valid));
    vlSelf->_mc___05Fs835 = ((~ (IData)(vlSelf->_mc___05Fs834)) 
                             & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__d_normal_valid));
    vlSelf->_cp___05Fs7557 = (1U & (~ ((~ (IData)(vlSelf->_mc___05Fs834)) 
                                       | (~ (IData)(vlSelf->_mc___05Fs835)))));
    vlSelf->_cp___05Fs7559 = (1U & (~ ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_12)) 
                                       | ((IData)(vlSelf->_mc___05Fs834) 
                                          | (IData)(vlSelf->_mc___05Fs835)))));
}

VL_INLINE_OPT void VExampleRocketSystem___024root___nba_comb__TOP__8(VExampleRocketSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root___nba_comb__TOP__8\n"); );
    // Init
    CData/*0:0*/ ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_55;
    ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_55 = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_6;
    ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_6 = 0;
    CData/*0:0*/ __VdfgTmp_h14c1b368__0;
    __VdfgTmp_h14c1b368__0 = 0;
    CData/*0:0*/ __VdfgTmp_h352b306d__0;
    __VdfgTmp_h352b306d__0 = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_17;
    VlWide<4>/*127:0*/ __Vtemp_18;
    VlWide<4>/*127:0*/ __Vtemp_22;
    VlWide<4>/*127:0*/ __Vtemp_23;
    VlWide<4>/*127:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_32;
    // Body
    vlSelf->_cp___05Fs5882 = ((IData)(vlSelf->_cp___05Fs5691) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__a_first_counter)));
    vlSelf->_cp___05Fs6253 = ((IData)(vlSelf->_cp___05Fs5691) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter)));
    vlSelf->_cp___05Fs5911 = ((IData)(vlSelf->_cp___05Fs5691) 
                              & (IData)(vlSelf->_mc___05Fs692));
    vlSelf->_cp___05Fs6282 = ((IData)(vlSelf->_cp___05Fs5691) 
                              & (IData)(vlSelf->_mc___05Fs737));
    if (vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full) {
        vlSelf->mem_axi4_0_aw_bits_prot = (7U & ((vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                                  << 7U) 
                                                 | (vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                                    >> 0x19U)));
        vlSelf->mem_axi4_0_aw_bits_cache = (0xfU & 
                                            ((vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                              << 0xbU) 
                                             | (vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                                >> 0x15U)));
        vlSelf->mem_axi4_0_aw_bits_addr = ((vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                            << 0x19U) 
                                           | (vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[0U] 
                                              >> 7U));
        vlSelf->mem_axi4_0_aw_bits_len = (0xffU & (
                                                   (vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                                    << 0x19U) 
                                                   | (vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                                      >> 7U)));
        vlSelf->_mc___05Fs747 = (1U & (vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[2U] 
                                       >> 0xbU));
        vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_id 
            = (0x7fU & vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[0U]);
        vlSelf->mem_axi4_0_aw_bits_size = (7U & ((vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                                  << 0x11U) 
                                                 | (vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                                    >> 0xfU)));
    } else {
        vlSelf->mem_axi4_0_aw_bits_prot = (7U & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_prot));
        vlSelf->mem_axi4_0_aw_bits_cache = (0xfU & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_cache));
        vlSelf->mem_axi4_0_aw_bits_addr = vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_address;
        vlSelf->mem_axi4_0_aw_bits_len = (0xffU & (~ 
                                                   (0x7fffU 
                                                    & (((IData)(0x7ffU) 
                                                        << (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_size)) 
                                                       >> 3U))));
        vlSelf->_mc___05Fs747 = (1U & (IData)(vlSelf->_mc___05Fs681));
        vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_id 
            = (0x7fU & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id));
        vlSelf->mem_axi4_0_aw_bits_size = (7U & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_size));
    }
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_30 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_param) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__param));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_30 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_param) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__param));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_33 
        = (vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__address 
           == vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_address);
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_33 
        = (vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__address 
           == vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_address);
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_31 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__size));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_31 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__size));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_59 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_29 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_opcode) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__opcode));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_29 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_opcode) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__opcode));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_w_bits_last 
        = ((1U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__counter)) 
           | (0U == ((4U & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_opcode))
                      ? 0U : (7U & (~ (0x3ffU & (((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_size)) 
                                                 >> 3U)))))));
    if (vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__full) {
        vlSelf->mem_axi4_0_w_bits_data = (((QData)((IData)(
                                                           vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__ram[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__ram[0U])));
        vlSelf->mem_axi4_0_w_bits_strb = (0xffU & vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__ram[2U]);
        vlSelf->mem_axi4_0_w_bits_last = (1U & (vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__ram[2U] 
                                                >> 8U));
    } else {
        vlSelf->mem_axi4_0_w_bits_data = vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_data;
        vlSelf->mem_axi4_0_w_bits_strb = (0xffU & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_mask));
        vlSelf->mem_axi4_0_w_bits_last = (1U & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_w_bits_last));
    }
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_58 
        = (((IData)(vlSelf->_mc___05Fs682) == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_opcode))))
                                                ? (7U 
                                                   & (0x911240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_opcode)))))
                                                : 0U)) 
           | ((IData)(vlSelf->_mc___05Fs682) == ((0x17U 
                                                  >= 
                                                  (0x1fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_opcode))))
                                                  ? 
                                                 (7U 
                                                  & (0x951240U 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         * (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_opcode)))))
                                                  : 0U)));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_32 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_source) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__source));
    VL_SHIFTR_WWI(128,128,7, vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_49, vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight, (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_source));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_32 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_source) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__source));
    VL_SHIFTR_WWI(128,128,7, vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_49, vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight, (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_source));
    ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_55 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_source) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__stall 
        = ((vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_4[
            ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_source) 
             >> 5U)] >> (0x1fU & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_source))) 
           & (IData)(vlSelf->_mc___05Fs746));
    __Vtemp_1[0U] = 1U;
    __Vtemp_1[1U] = 0U;
    __Vtemp_1[2U] = 0U;
    __Vtemp_1[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_2, __Vtemp_1, (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_64 
        = ((0U != ((((vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[0U] 
                      ^ ((IData)(vlSelf->_cp___05Fs7795)
                          ? __Vtemp_2[0U] : 0U)) | 
                     (vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[1U] 
                      ^ ((IData)(vlSelf->_cp___05Fs7795)
                          ? __Vtemp_2[1U] : 0U))) | 
                    (vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[2U] 
                     ^ ((IData)(vlSelf->_cp___05Fs7795)
                         ? __Vtemp_2[2U] : 0U))) | 
                   (vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[3U] 
                    ^ ((IData)(vlSelf->_cp___05Fs7795)
                        ? __Vtemp_2[3U] : 0U)))) | 
           (0U == (((vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[0U] 
                     | vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                    | vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                   | vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__a_set_wo_ready[3U])));
    if (vlSelf->_mc___05Fs837) {
        vlSelf->_cp___05Fs7104 = vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_12;
        vlSelf->_mc___05Fs841 = vlSelf->_mc___05Fs835;
    } else {
        vlSelf->_cp___05Fs7104 = (((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_0) 
                                   & (IData)(vlSelf->_mc___05Fs834)) 
                                  | ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1) 
                                     & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__d_normal_valid)));
        vlSelf->_mc___05Fs841 = vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1;
    }
    __Vtemp_6[0U] = 1U;
    __Vtemp_6[1U] = 0U;
    __Vtemp_6[2U] = 0U;
    __Vtemp_6[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_7, __Vtemp_6, (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_source));
    if (vlSelf->_cp___05Fs5911) {
        vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__a_set_wo_ready[0U] 
            = __Vtemp_7[0U];
        vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__a_set_wo_ready[1U] 
            = __Vtemp_7[1U];
        vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__a_set_wo_ready[2U] 
            = __Vtemp_7[2U];
        vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__a_set_wo_ready[3U] 
            = __Vtemp_7[3U];
    } else {
        vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__a_set_wo_ready[0U] = 0U;
        vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__a_set_wo_ready[1U] = 0U;
        vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__a_set_wo_ready[2U] = 0U;
        vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__a_set_wo_ready[3U] = 0U;
    }
    __Vtemp_9[0U] = 1U;
    __Vtemp_9[1U] = 0U;
    __Vtemp_9[2U] = 0U;
    __Vtemp_9[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_10, __Vtemp_9, (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_source));
    if (vlSelf->_cp___05Fs6282) {
        vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[0U] 
            = __Vtemp_10[0U];
        vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[1U] 
            = __Vtemp_10[1U];
        vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[2U] 
            = __Vtemp_10[2U];
        vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[3U] 
            = __Vtemp_10[3U];
    } else {
        vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[0U] = 0U;
        vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[1U] = 0U;
        vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[2U] = 0U;
        vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[3U] = 0U;
    }
    vlSelf->mem_axi4_0_ar_bits_prot = vlSelf->mem_axi4_0_aw_bits_prot;
    vlSelf->mem_axi4_0_ar_bits_cache = vlSelf->mem_axi4_0_aw_bits_cache;
    vlSelf->_cp___05Fs5886 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_30)));
    vlSelf->_cp___05Fs6257 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_30)));
    vlSelf->_cp___05Fs5892 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_33)));
    vlSelf->_cp___05Fs6263 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_33)));
    vlSelf->mem_axi4_0_ar_bits_addr = vlSelf->mem_axi4_0_aw_bits_addr;
    vlSelf->_cp___05Fs5888 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_31)));
    vlSelf->_cp___05Fs6259 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_31)));
    vlSelf->mem_axi4_0_ar_bits_len = vlSelf->mem_axi4_0_aw_bits_len;
    vlSelf->_cp___05Fs5924 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_59)));
    vlSelf->_cp___05Fs5884 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_29)));
    vlSelf->_cp___05Fs6255 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_29)));
    vlSelf->_cp___05Fs5922 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_58)));
    vlSelf->_cp___05Fs5890 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_32)));
    vlSelf->_cp___05Fs5914 = (1U & vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_49[0U]);
    vlSelf->_cp___05Fs6261 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_32)));
    vlSelf->_cp___05Fs6285 = (1U & vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_49[0U]);
    vlSelf->_cp___05Fs5920 = ((IData)(vlSelf->_cp___05Fs5911) 
                              & (IData)(ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_55));
    vlSelf->_cp___05Fs6291 = ((IData)(vlSelf->_cp___05Fs6282) 
                              & (IData)(ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_55));
    vlSelf->_cp___05Fs7800 = ((IData)(vlSelf->_cp___05Fs7791) 
                              & (IData)(ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_55));
    __VdfgTmp_h14c1b368__0 = ((IData)(vlSelf->_cp___05Fs5691) 
                              & (IData)(ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_55));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_a_ready 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__stall)) 
           & ((4U & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_opcode))
               ? (IData)(vlSelf->_cp___05Fs6343) : 
              ((IData)(vlSelf->_cp___05Fs6337) & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_5))));
    ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_6 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__stall)) 
           & (IData)(vlSelf->_cp___05Fs5691));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data 
        = ((0x3800U & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_id) 
                       << 7U)) | ((0x7f0U & (((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                               ? ((
                                                   vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[2U] 
                                                     >> 4U))
                                               : (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_source)) 
                                             << 4U)) 
                                  | (0xfU & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                              ? vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[2U]
                                              : (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_size)))));
    vlSelf->mem_axi4_0_aw_bits_id = (0xfU & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_id));
    vlSelf->mem_axi4_0_ar_bits_size = vlSelf->mem_axi4_0_aw_bits_size;
    vlSelf->_cp___05Fs7813 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_64)));
    vlSelf->_cp___05Fs7380 = ((IData)(vlSelf->_cp___05Fs7104) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__d_first_counter)));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_97 
        = ((IData)(vlSelf->_cp___05Fs7104) & (IData)(vlSelf->_mc___05Fs792));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_120 
        = ((IData)(vlSelf->_cp___05Fs7104) & (IData)(vlSelf->_mc___05Fs796));
    if (vlSelf->_mc___05Fs841) {
        vlSelf->ExampleRocketSystem__DOT___coh_wrapper_auto_coherent_jbar_anon_in_d_bits_data 
            = vlSelf->mem_axi4_0_r_bits_data;
        vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_sink 
            = (((IData)((0U != (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__d_trackerOH) 
                                      >> 2U)))) << 1U) 
               | ((IData)(vlSelf->_mc___05Fs822) | (IData)(vlSelf->_mc___05Fs820)));
        vlSelf->_cp___05Fs7117 = vlSelf->_cp___05Fs5817;
        vlSelf->_cp___05Fs7115 = vlSelf->_cp___05Fs5815;
        __VdfgTmp_h352b306d__0 = ((IData)(vlSelf->_cp___05Fs7552) 
                                  & (IData)(vlSelf->_mc___05Fs682));
    } else {
        vlSelf->ExampleRocketSystem__DOT___coh_wrapper_auto_coherent_jbar_anon_in_d_bits_data = 0ULL;
        vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_sink = 0U;
        vlSelf->_cp___05Fs7117 = 0U;
        vlSelf->_cp___05Fs7115 = 0U;
        __VdfgTmp_h352b306d__0 = 0U;
    }
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_size 
        = (7U & (((IData)(vlSelf->_mc___05Fs840) ? 
                  ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                    << 0x1aU) | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                 >> 6U)) : 0U) | ((IData)(vlSelf->_mc___05Fs841)
                                                   ? (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size)
                                                   : 0U)));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_opcode 
        = (((IData)(vlSelf->_mc___05Fs840) ? 6U : 0U) 
           | ((IData)(vlSelf->_mc___05Fs841) ? (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__d_normal_bits_opcode)
               : 0U));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_source 
        = (0x1fU & (((IData)(vlSelf->_mc___05Fs840)
                      ? (0x10U | (3U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                        >> 0xaU))) : 0U) 
                    | ((IData)(vlSelf->_mc___05Fs841)
                        ? (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source)
                        : 0U)));
    __Vtemp_12[0U] = 1U;
    __Vtemp_12[1U] = 0U;
    __Vtemp_12[2U] = 0U;
    __Vtemp_12[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_13, __Vtemp_12, (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_64 
        = ((0U != ((((vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__a_set_wo_ready[0U] 
                      ^ ((IData)(vlSelf->_cp___05Fs5915)
                          ? __Vtemp_13[0U] : 0U)) | 
                     (vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__a_set_wo_ready[1U] 
                      ^ ((IData)(vlSelf->_cp___05Fs5915)
                          ? __Vtemp_13[1U] : 0U))) 
                    | (vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__a_set_wo_ready[2U] 
                       ^ ((IData)(vlSelf->_cp___05Fs5915)
                           ? __Vtemp_13[2U] : 0U))) 
                   | (vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__a_set_wo_ready[3U] 
                      ^ ((IData)(vlSelf->_cp___05Fs5915)
                          ? __Vtemp_13[3U] : 0U)))) 
           | (0U == (((vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__a_set_wo_ready[0U] 
                       | vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                      | vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                     | vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__a_set_wo_ready[3U])));
    __Vtemp_17[0U] = 1U;
    __Vtemp_17[1U] = 0U;
    __Vtemp_17[2U] = 0U;
    __Vtemp_17[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_18, __Vtemp_17, (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_64 
        = ((0U != ((((vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[0U] 
                      ^ ((IData)(vlSelf->_cp___05Fs6286)
                          ? __Vtemp_18[0U] : 0U)) | 
                     (vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[1U] 
                      ^ ((IData)(vlSelf->_cp___05Fs6286)
                          ? __Vtemp_18[1U] : 0U))) 
                    | (vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[2U] 
                       ^ ((IData)(vlSelf->_cp___05Fs6286)
                           ? __Vtemp_18[2U] : 0U))) 
                   | (vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[3U] 
                      ^ ((IData)(vlSelf->_cp___05Fs6286)
                          ? __Vtemp_18[3U] : 0U)))) 
           | (0U == (((vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[0U] 
                       | vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                      | vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                     | vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[3U])));
    vlSelf->_cp___05Fs6295 = vlSelf->_cp___05Fs5924;
    vlSelf->_cp___05Fs7804 = vlSelf->_cp___05Fs5924;
    vlSelf->_cp___05Fs6293 = vlSelf->_cp___05Fs5922;
    vlSelf->_cp___05Fs7802 = vlSelf->_cp___05Fs5922;
    VL_SHIFTR_WWI(128,128,7, __Vtemp_22, vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight, (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_57 
        = (1U & (__Vtemp_22[0U] | (IData)(vlSelf->_cp___05Fs5920)));
    VL_SHIFTR_WWI(128,128,7, __Vtemp_23, vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight, (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_57 
        = (1U & (__Vtemp_23[0U] | (IData)(vlSelf->_cp___05Fs6291)));
    VL_SHIFTR_WWI(128,128,7, __Vtemp_24, vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight, (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_57 
        = (1U & (__Vtemp_24[0U] | (IData)(vlSelf->_cp___05Fs7800)));
    vlSelf->_cp___05Fs5929 = ((IData)(vlSelf->_cp___05Fs5915) 
                              & ((IData)(vlSelf->_mc___05Fs692) 
                                 & (IData)(__VdfgTmp_h14c1b368__0)));
    vlSelf->_cp___05Fs6300 = ((IData)(vlSelf->_cp___05Fs6286) 
                              & ((IData)(vlSelf->_mc___05Fs737) 
                                 & (IData)(__VdfgTmp_h14c1b368__0)));
    vlSelf->_cp___05Fs7809 = ((IData)(vlSelf->_cp___05Fs7795) 
                              & ((IData)(vlSelf->_mc___05Fs894) 
                                 & (IData)(__VdfgTmp_h14c1b368__0)));
    vlSelf->_mc___05Fs852 = ((IData)(vlSelf->_mc___05Fs853) 
                             & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_a_ready));
    vlSelf->_cp___05Fs7481 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__empty)) 
                              & ((IData)(vlSelf->_cp___05Fs7495) 
                                 & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_a_ready) 
                                    & ((IData)(vlSelf->_mc___05Fs853)
                                        ? (~ (IData)(vlSelf->_mc___05Fs847))
                                        : (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1_1)))));
    vlSelf->_cp___05Fs7498 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__empty)) 
                              & ((IData)(vlSelf->_cp___05Fs7512) 
                                 & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_a_ready) 
                                    & ((IData)(vlSelf->_mc___05Fs853)
                                        ? (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_14))
                                        : (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1_2)))));
    vlSelf->_cp___05Fs7515 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__empty)) 
                              & ((IData)(vlSelf->_cp___05Fs7529) 
                                 & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_a_ready) 
                                    & ((IData)(vlSelf->_mc___05Fs853)
                                        ? (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_16))
                                        : (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1_3)))));
    vlSelf->_cp___05Fs7532 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__empty)) 
                              & ((IData)(vlSelf->_cp___05Fs7546) 
                                 & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_a_ready) 
                                    & ((IData)(vlSelf->_mc___05Fs853)
                                        ? (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_15))
                                        : (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1_4)))));
    vlSelf->_cp___05Fs5685 = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_a_ready) 
                              & (IData)(vlSelf->_cp___05Fs5691));
    vlSelf->_cp___05Fs6336 = ((IData)(ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_6) 
                              & ((IData)(vlSelf->_mc___05Fs681) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_5)));
    vlSelf->_cp___05Fs6342 = ((IData)(ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_6) 
                              & (((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_opcode) 
                                  >> 2U) | ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__doneAW)) 
                                            & (IData)(vlSelf->_cp___05Fs6337))));
    vlSelf->mem_axi4_0_ar_bits_id = vlSelf->mem_axi4_0_aw_bits_id;
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT____VdfgTmp_h34077eac__0 
        = (1U & (((0x8000U & ((~ (IData)(vlSelf->_mc___05Fs731)) 
                              << 0xfU)) | ((0x4000U 
                                            & ((~ (IData)(vlSelf->_mc___05Fs730)) 
                                               << 0xeU)) 
                                           | ((0x2000U 
                                               & ((~ (IData)(vlSelf->_mc___05Fs729)) 
                                                  << 0xdU)) 
                                              | ((0x1000U 
                                                  & ((~ (IData)(vlSelf->_mc___05Fs728)) 
                                                     << 0xcU)) 
                                                 | ((0x800U 
                                                     & ((~ (IData)(vlSelf->_mc___05Fs727)) 
                                                        << 0xbU)) 
                                                    | ((0x400U 
                                                        & ((~ (IData)(vlSelf->_mc___05Fs726)) 
                                                           << 0xaU)) 
                                                       | ((0x200U 
                                                           & ((~ (IData)(vlSelf->_mc___05Fs725)) 
                                                              << 9U)) 
                                                          | ((0x100U 
                                                              & ((~ (IData)(vlSelf->_mc___05Fs724)) 
                                                                 << 8U)) 
                                                             | ((0x80U 
                                                                 & ((~ (IData)(vlSelf->_mc___05Fs723)) 
                                                                    << 7U)) 
                                                                | ((0x40U 
                                                                    & ((~ (IData)(vlSelf->_mc___05Fs722)) 
                                                                       << 6U)) 
                                                                   | ((0x20U 
                                                                       & ((~ (IData)(vlSelf->_mc___05Fs721)) 
                                                                          << 5U)) 
                                                                      | ((0x10U 
                                                                          & ((~ (IData)(vlSelf->_mc___05Fs720)) 
                                                                             << 4U)) 
                                                                         | ((8U 
                                                                             & ((~ (IData)(vlSelf->_mc___05Fs719)) 
                                                                                << 3U)) 
                                                                            | ((4U 
                                                                                & ((~ (IData)(vlSelf->_mc___05Fs718)) 
                                                                                << 2U)) 
                                                                               | ((2U 
                                                                                & ((~ (IData)(vlSelf->_mc___05Fs717)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->_mc___05Fs716)))))))))))))))))) 
                 >> (IData)(vlSelf->mem_axi4_0_aw_bits_id)));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT____VdfgTmp_hbbc06fed__0 
        = (1U & (((0x8000U & ((~ (IData)(vlSelf->_mc___05Fs715)) 
                              << 0xfU)) | ((0x4000U 
                                            & ((~ (IData)(vlSelf->_mc___05Fs714)) 
                                               << 0xeU)) 
                                           | ((0x2000U 
                                               & ((~ (IData)(vlSelf->_mc___05Fs713)) 
                                                  << 0xdU)) 
                                              | ((0x1000U 
                                                  & ((~ (IData)(vlSelf->_mc___05Fs712)) 
                                                     << 0xcU)) 
                                                 | ((0x800U 
                                                     & ((~ (IData)(vlSelf->_mc___05Fs711)) 
                                                        << 0xbU)) 
                                                    | ((0x400U 
                                                        & ((~ (IData)(vlSelf->_mc___05Fs710)) 
                                                           << 0xaU)) 
                                                       | ((0x200U 
                                                           & ((~ (IData)(vlSelf->_mc___05Fs709)) 
                                                              << 9U)) 
                                                          | ((0x100U 
                                                              & ((~ (IData)(vlSelf->_mc___05Fs708)) 
                                                                 << 8U)) 
                                                             | ((0x80U 
                                                                 & ((~ (IData)(vlSelf->_mc___05Fs707)) 
                                                                    << 7U)) 
                                                                | ((0x40U 
                                                                    & ((~ (IData)(vlSelf->_mc___05Fs706)) 
                                                                       << 6U)) 
                                                                   | ((0x20U 
                                                                       & ((~ (IData)(vlSelf->_mc___05Fs705)) 
                                                                          << 5U)) 
                                                                      | ((0x10U 
                                                                          & ((~ (IData)(vlSelf->_mc___05Fs704)) 
                                                                             << 4U)) 
                                                                         | ((8U 
                                                                             & ((~ (IData)(vlSelf->_mc___05Fs703)) 
                                                                                << 3U)) 
                                                                            | ((4U 
                                                                                & ((~ (IData)(vlSelf->_mc___05Fs702)) 
                                                                                << 2U)) 
                                                                               | ((2U 
                                                                                & ((~ (IData)(vlSelf->_mc___05Fs701)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->_mc___05Fs700)))))))))))))))))) 
                 >> (IData)(vlSelf->mem_axi4_0_aw_bits_id)));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_73 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__denied) 
           == (IData)(vlSelf->_cp___05Fs7117));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_72 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_sink) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__sink));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_135 
        = (0xfU & ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__inflight_2) 
                   >> (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_sink)));
    vlSelf->_cp___05Fs7130 = vlSelf->_cp___05Fs7115;
    vlSelf->_cp___05Fs7154 = vlSelf->_cp___05Fs7115;
    vlSelf->_cp___05Fs7172 = vlSelf->_cp___05Fs7115;
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_34 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs7117)) 
                 | (IData)(vlSelf->_cp___05Fs7115)));
    if (__VdfgTmp_h352b306d__0) {
        vlSelf->_cp___05Fs7113 = (1U & (~ (IData)(vlSelf->_mc___05Fs818)));
        vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_param 
            = (1U & (~ (IData)(vlSelf->_mc___05Fs818)));
    } else {
        vlSelf->_cp___05Fs7113 = 0U;
        vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_param = 0U;
    }
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_70 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__size_1));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_126 
        = ((7U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                  >> 6U)) == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_size));
    vlSelf->_cp___05Fs7111 = (2U >= (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_size));
    vlSelf->_cp___05Fs7106 = (7U == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_opcode));
    vlSelf->_cp___05Fs7118 = (4U == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_opcode));
    vlSelf->_cp___05Fs7133 = (5U == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_opcode));
    vlSelf->_cp___05Fs7148 = (0U == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_opcode));
    vlSelf->_cp___05Fs7157 = (1U == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_opcode));
    vlSelf->_cp___05Fs7166 = (2U == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_opcode));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_68 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_opcode) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__opcode_1));
    vlSelf->_mc___05Fs50 = (1U & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_opcode));
    vlSelf->_cp___05Fs7107 = (6U == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_opcode));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_71 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_source) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__source_1));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_26, vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_108 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_size) 
           == (7U & (__Vtemp_26[0U] >> 1U)));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_29, vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_127 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_size) 
           == (7U & (__Vtemp_29[0U] >> 1U)));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_32, vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_91[0U] 
        = __Vtemp_32[0U];
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_91[1U] 
        = __Vtemp_32[1U];
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_91[2U] 
        = (0xfffU & __Vtemp_32[2U]);
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__source_ok_1 
        = ((0U == (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_source) 
                         >> 3U))) | ((1U == (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_source) 
                                                   >> 3U))) 
                                     | ((0x10U == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_source)) 
                                        | ((0x11U == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_source)) 
                                           | (0x12U 
                                              == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_source))))));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_123 
        = ((0x10U | (3U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                           >> 0xaU))) == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_source));
    vlSelf->_mc___05Fs72 = (1U & (~ ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_source) 
                                     >> 4U)));
    vlSelf->_mc___05Fs73 = (4U == (7U & ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_source) 
                                         >> 2U)));
    vlSelf->_cp___05Fs5933 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_64)));
    vlSelf->_cp___05Fs6304 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_64)));
    vlSelf->_cp___05Fs5919 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_57)));
    vlSelf->_cp___05Fs6290 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_57)));
    vlSelf->_cp___05Fs7799 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_57)));
    vlSelf->_cp___05Fs5881 = vlSelf->_cp___05Fs5685;
    vlSelf->_cp___05Fs5909 = vlSelf->_cp___05Fs5685;
    vlSelf->_cp___05Fs6252 = vlSelf->_cp___05Fs5685;
    vlSelf->_cp___05Fs6280 = vlSelf->_cp___05Fs5685;
    vlSelf->_cp___05Fs6345 = vlSelf->_cp___05Fs5685;
    vlSelf->_cp___05Fs6346 = vlSelf->_cp___05Fs5685;
    vlSelf->_cp___05Fs7761 = vlSelf->_cp___05Fs5685;
    vlSelf->_cp___05Fs7789 = vlSelf->_cp___05Fs5685;
    vlSelf->_cp___05Fs5893 = ((IData)(vlSelf->_mc___05Fs688) 
                              & (IData)(vlSelf->_cp___05Fs5685));
    vlSelf->_cp___05Fs5912 = ((IData)(vlSelf->_cp___05Fs5685) 
                              & (IData)(vlSelf->_mc___05Fs692));
    vlSelf->_cp___05Fs6264 = ((IData)(vlSelf->_mc___05Fs733) 
                              & (IData)(vlSelf->_cp___05Fs5685));
    vlSelf->_cp___05Fs6283 = ((IData)(vlSelf->_cp___05Fs5685) 
                              & (IData)(vlSelf->_mc___05Fs737));
    vlSelf->_cp___05Fs7773 = ((IData)(vlSelf->_mc___05Fs890) 
                              & (IData)(vlSelf->_cp___05Fs5685));
    vlSelf->_cp___05Fs7792 = ((IData)(vlSelf->_cp___05Fs5685) 
                              & (IData)(vlSelf->_mc___05Fs894));
    vlSelf->_cp___05Fs5687 = ((IData)(vlSelf->_mc___05Fs684) 
                              & (IData)(vlSelf->_cp___05Fs5685));
    vlSelf->_cp___05Fs6333 = ((~ ((IData)(vlSelf->_cp___05Fs6337) 
                                  & (IData)(vlSelf->mem_axi4_0_w_ready))) 
                              & ((IData)(vlSelf->_cp___05Fs6337) 
                                 & (IData)(vlSelf->_cp___05Fs6336)));
    vlSelf->mem_axi4_0_w_valid = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__full) 
                                  | (IData)(vlSelf->_cp___05Fs6336));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT___io_deq_valid_output 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full) 
           | (IData)(vlSelf->_cp___05Fs6342));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9 
        = ((IData)(vlSelf->_cp___05Fs6343) & (IData)(vlSelf->_cp___05Fs6342));
    vlSelf->_cp___05Fs6344 = ((IData)(vlSelf->_mc___05Fs747)
                               ? ((IData)(vlSelf->mem_axi4_0_aw_ready) 
                                  & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT____VdfgTmp_h34077eac__0))
                               : ((IData)(vlSelf->mem_axi4_0_ar_ready) 
                                  & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT____VdfgTmp_hbbc06fed__0)));
    vlSelf->_cp___05Fs7392 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_73)));
    vlSelf->_cp___05Fs7390 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_72)));
    vlSelf->_cp___05Fs7476 = (1U & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_135));
    vlSelf->_cp___05Fs7145 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_34)));
    vlSelf->_cp___05Fs7152 = vlSelf->_cp___05Fs7113;
    vlSelf->_cp___05Fs7161 = vlSelf->_cp___05Fs7113;
    vlSelf->_cp___05Fs7170 = vlSelf->_cp___05Fs7113;
    vlSelf->_cp___05Fs7126 = (3U == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_param));
    vlSelf->_cp___05Fs7128 = (2U == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_param));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_69 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_param) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__param_1));
    vlSelf->_cp___05Fs7386 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_70)));
    vlSelf->_cp___05Fs7461 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_126)));
    vlSelf->_cp___05Fs7124 = vlSelf->_cp___05Fs7111;
    vlSelf->_cp___05Fs7139 = vlSelf->_cp___05Fs7111;
    vlSelf->_cp___05Fs7382 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_68)));
    vlSelf->_mc___05Fs784 = vlSelf->_mc___05Fs50;
    vlSelf->_mc___05Fs791 = vlSelf->_mc___05Fs50;
    vlSelf->_mc___05Fs795 = vlSelf->_mc___05Fs50;
    vlSelf->_mc___05Fs797 = vlSelf->_mc___05Fs50;
    vlSelf->_mc___05Fs888 = vlSelf->_mc___05Fs50;
    vlSelf->_cp___05Fs7426 = ((~ (IData)(vlSelf->_cp___05Fs7107)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_97));
    vlSelf->_cp___05Fs7454 = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_120) 
                              & (IData)(vlSelf->_cp___05Fs7107));
    vlSelf->_cp___05Fs7388 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_71)));
    vlSelf->_cp___05Fs7439 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_108)));
    vlSelf->_cp___05Fs7463 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_127)));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_107 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_opcode) 
            == ((0x17U >= (0x1fU & ((IData)(3U) * (7U 
                                                   & (vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_91[0U] 
                                                      >> 1U)))))
                 ? (7U & (0x911240U >> (0x1fU & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_91[0U] 
                                                     >> 1U))))))
                 : 0U)) | ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_opcode) 
                           == ((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_91[0U] 
                                                       >> 1U)))))
                                ? (7U & (0x951240U 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & (vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_91[0U] 
                                                      >> 1U))))))
                                : 0U)));
    vlSelf->_cp___05Fs7109 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__source_ok_1)));
    vlSelf->_cp___05Fs7464 = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_120) 
                              & ((IData)(vlSelf->_mc___05Fs794) 
                                 & ((IData)(vlSelf->_cp___05Fs1351) 
                                    & ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_123) 
                                       & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_6)) 
                                          & (IData)(vlSelf->_cp___05Fs7107))))));
    vlSelf->_cp___05Fs7459 = ((IData)(vlSelf->_cp___05Fs7450) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_123));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsDIO_filtered_1_0_valid 
        = ((IData)(vlSelf->_mc___05Fs72) & (IData)(vlSelf->_cp___05Fs7104));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsDIO_filtered_1_1_valid 
        = ((IData)(vlSelf->_cp___05Fs7104) & (IData)(vlSelf->_mc___05Fs73));
    vlSelf->_cp___05Fs5689 = vlSelf->_cp___05Fs5687;
    vlSelf->_cp___05Fs6334 = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__full) 
                              & ((IData)(vlSelf->mem_axi4_0_w_ready) 
                                 & (IData)(vlSelf->mem_axi4_0_w_valid)));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_valid 
        = ((IData)(vlSelf->_mc___05Fs747) & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT___io_deq_valid_output));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_ar_valid 
        = ((~ (IData)(vlSelf->_mc___05Fs747)) & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT___io_deq_valid_output));
    vlSelf->_cp___05Fs6355 = ((0U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6360 = ((1U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6365 = ((2U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6370 = ((3U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6375 = ((4U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6380 = ((5U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6385 = ((6U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6390 = ((7U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6395 = ((8U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6400 = ((9U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6405 = ((0xaU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6410 = ((0xbU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6415 = ((0xcU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6420 = ((0xdU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6425 = ((0xeU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6430 = ((0xfU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6435 = ((0x10U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6440 = ((0x11U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6445 = ((0x12U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6450 = ((0x13U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6455 = ((0x14U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6460 = ((0x15U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6465 = ((0x16U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6470 = ((0x17U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6475 = ((0x18U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6480 = ((0x19U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6485 = ((0x1aU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6490 = ((0x1bU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6495 = ((0x1cU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6500 = ((0x1dU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6505 = ((0x1eU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6510 = ((0x1fU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6515 = ((0x20U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6520 = ((0x21U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6525 = ((0x22U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6530 = ((0x23U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6535 = ((0x24U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6540 = ((0x25U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6545 = ((0x26U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6550 = ((0x27U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6555 = ((0x28U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6560 = ((0x29U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6565 = ((0x2aU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6570 = ((0x2bU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6575 = ((0x2cU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6580 = ((0x2dU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6585 = ((0x2eU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6590 = ((0x2fU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6595 = ((0x30U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6600 = ((0x31U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6605 = ((0x32U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6610 = ((0x33U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6615 = ((0x34U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6620 = ((0x35U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6625 = ((0x36U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6630 = ((0x37U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6635 = ((0x38U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6640 = ((0x39U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6645 = ((0x3aU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6650 = ((0x3bU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6655 = ((0x3cU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6660 = ((0x3dU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6665 = ((0x3eU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6670 = ((0x3fU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6675 = ((0x40U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6680 = ((0x41U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6685 = ((0x42U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6690 = ((0x43U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6695 = ((0x44U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6700 = ((0x45U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6705 = ((0x46U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6710 = ((0x47U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6715 = ((0x48U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6720 = ((0x49U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6725 = ((0x4aU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6730 = ((0x4bU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6735 = ((0x4cU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6740 = ((0x4dU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6745 = ((0x4eU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6750 = ((0x4fU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6755 = ((0x50U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6760 = ((0x51U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6765 = ((0x52U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6770 = ((0x53U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6775 = ((0x54U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6780 = ((0x55U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6785 = ((0x56U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6790 = ((0x57U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6795 = ((0x58U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6800 = ((0x59U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6805 = ((0x5aU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6810 = ((0x5bU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6815 = ((0x5cU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6820 = ((0x5dU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6825 = ((0x5eU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6830 = ((0x5fU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6835 = ((0x60U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6840 = ((0x61U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6845 = ((0x62U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6850 = ((0x63U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6855 = ((0x64U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6860 = ((0x65U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6865 = ((0x66U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6870 = ((0x67U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6875 = ((0x68U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6880 = ((0x69U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6885 = ((0x6aU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6890 = ((0x6bU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6895 = ((0x6cU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6900 = ((0x6dU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6905 = ((0x6eU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6910 = ((0x6fU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6915 = ((0x70U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6920 = ((0x71U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6925 = ((0x72U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6930 = ((0x73U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6935 = ((0x74U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6940 = ((0x75U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6945 = ((0x76U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6950 = ((0x77U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6955 = ((0x78U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6960 = ((0x79U == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6965 = ((0x7aU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6970 = ((0x7bU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6975 = ((0x7cU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6980 = ((0x7dU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6985 = ((0x7eU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6990 = ((0x7fU == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6339 = ((~ ((IData)(vlSelf->_cp___05Fs6343) 
                                  & (IData)(vlSelf->_cp___05Fs6344))) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_9));
    vlSelf->_cp___05Fs6340 = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full) 
                              & ((IData)(vlSelf->_cp___05Fs6344) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT___io_deq_valid_output)));
    vlSelf->_cp___05Fs7163 = vlSelf->_cp___05Fs7145;
    vlSelf->_cp___05Fs7141 = vlSelf->_cp___05Fs7126;
    vlSelf->_cp___05Fs7143 = vlSelf->_cp___05Fs7128;
    vlSelf->_cp___05Fs7384 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_69)));
    vlSelf->_cp___05Fs7428 = vlSelf->_cp___05Fs7426;
    vlSelf->_cp___05Fs7456 = vlSelf->_cp___05Fs7454;
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_130 
        = (vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__c_set_wo_ready 
           != ((IData)(vlSelf->_cp___05Fs7454) ? (0x7ffffU 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_source)))
                : 0U));
    vlSelf->_cp___05Fs7437 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_107)));
    vlSelf->_cp___05Fs7120 = vlSelf->_cp___05Fs7109;
    vlSelf->_cp___05Fs7135 = vlSelf->_cp___05Fs7109;
    vlSelf->_cp___05Fs7150 = vlSelf->_cp___05Fs7109;
    vlSelf->_cp___05Fs7159 = vlSelf->_cp___05Fs7109;
    vlSelf->_cp___05Fs7168 = vlSelf->_cp___05Fs7109;
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_125 
        = (1U & ((0x7ffffU & (vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__inflight_1 
                              >> (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_d_bits_source))) 
                 | (IData)(vlSelf->_cp___05Fs7459)));
    vlSelf->_cp___05Fs6335 = ((IData)(vlSelf->_cp___05Fs6333) 
                              != (IData)(vlSelf->_cp___05Fs6334));
    vlSelf->mem_axi4_0_aw_valid = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_valid) 
                                   & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT____VdfgTmp_h34077eac__0));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_valid) 
           & (IData)(vlSelf->mem_axi4_0_aw_ready));
    vlSelf->mem_axi4_0_ar_valid = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_ar_valid) 
                                   & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT____VdfgTmp_hbbc06fed__0));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_ar_valid) 
           & (IData)(vlSelf->mem_axi4_0_ar_ready));
    vlSelf->_cp___05Fs6354 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6355)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_1)))));
    vlSelf->_cp___05Fs6359 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6360)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_2)))));
    vlSelf->_cp___05Fs6364 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6365)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_3)))));
    vlSelf->_cp___05Fs6369 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6370)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_4)))));
    vlSelf->_cp___05Fs6374 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6375)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_5)))));
    vlSelf->_cp___05Fs6379 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6380)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_6)))));
    vlSelf->_cp___05Fs6384 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6385)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_7)))));
    vlSelf->_cp___05Fs6389 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6390)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_8)))));
    vlSelf->_cp___05Fs6394 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6395)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_9)))));
    vlSelf->_cp___05Fs6399 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6400)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_10)))));
    vlSelf->_cp___05Fs6404 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6405)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_11)))));
    vlSelf->_cp___05Fs6409 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6410)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_12)))));
    vlSelf->_cp___05Fs6414 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6415)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_13)))));
    vlSelf->_cp___05Fs6419 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6420)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_14)))));
    vlSelf->_cp___05Fs6424 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6425)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_15)))));
    vlSelf->_cp___05Fs6429 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6430)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_16)))));
    vlSelf->_cp___05Fs6434 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6435)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_17)))));
    vlSelf->_cp___05Fs6439 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6440)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_18)))));
    vlSelf->_cp___05Fs6444 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6445)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_19)))));
    vlSelf->_cp___05Fs6449 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6450)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_20)))));
    vlSelf->_cp___05Fs6454 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6455)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_21)))));
    vlSelf->_cp___05Fs6459 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6460)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_22)))));
    vlSelf->_cp___05Fs6464 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6465)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_23)))));
    vlSelf->_cp___05Fs6469 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6470)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_24)))));
    vlSelf->_cp___05Fs6474 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6475)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_25)))));
    vlSelf->_cp___05Fs6479 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6480)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_26)))));
    vlSelf->_cp___05Fs6484 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6485)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_27)))));
    vlSelf->_cp___05Fs6489 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6490)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_28)))));
    vlSelf->_cp___05Fs6494 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6495)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_29)))));
    vlSelf->_cp___05Fs6499 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6500)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_30)))));
    vlSelf->_cp___05Fs6504 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6505)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_31)))));
    vlSelf->_cp___05Fs6509 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6510)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_32)))));
    vlSelf->_cp___05Fs6514 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6515)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_33)))));
    vlSelf->_cp___05Fs6519 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6520)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_34)))));
    vlSelf->_cp___05Fs6524 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6525)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_35)))));
    vlSelf->_cp___05Fs6529 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6530)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_36)))));
    vlSelf->_cp___05Fs6534 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6535)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_37)))));
    vlSelf->_cp___05Fs6539 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6540)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_38)))));
    vlSelf->_cp___05Fs6544 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6545)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_39)))));
    vlSelf->_cp___05Fs6549 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6550)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_40)))));
    vlSelf->_cp___05Fs6554 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6555)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_41)))));
    vlSelf->_cp___05Fs6559 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6560)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_42)))));
    vlSelf->_cp___05Fs6564 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6565)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_43)))));
    vlSelf->_cp___05Fs6569 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6570)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_44)))));
    vlSelf->_cp___05Fs6574 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6575)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_45)))));
    vlSelf->_cp___05Fs6579 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6580)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_46)))));
    vlSelf->_cp___05Fs6584 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6585)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_47)))));
    vlSelf->_cp___05Fs6589 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6590)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_48)))));
    vlSelf->_cp___05Fs6594 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6595)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_49)))));
    vlSelf->_cp___05Fs6599 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6600)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_50)))));
    vlSelf->_cp___05Fs6604 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6605)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_51)))));
    vlSelf->_cp___05Fs6609 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6610)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_52)))));
    vlSelf->_cp___05Fs6614 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6615)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_53)))));
    vlSelf->_cp___05Fs6619 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6620)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_54)))));
    vlSelf->_cp___05Fs6624 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6625)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_55)))));
    vlSelf->_cp___05Fs6629 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6630)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_56)))));
    vlSelf->_cp___05Fs6634 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6635)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_57)))));
    vlSelf->_cp___05Fs6639 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6640)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_58)))));
    vlSelf->_cp___05Fs6644 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6645)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_59)))));
    vlSelf->_cp___05Fs6649 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6650)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_60)))));
    vlSelf->_cp___05Fs6654 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6655)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_61)))));
    vlSelf->_cp___05Fs6659 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6660)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_62)))));
    vlSelf->_cp___05Fs6664 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6665)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_63)))));
    vlSelf->_cp___05Fs6669 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6670)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_64)))));
    vlSelf->_cp___05Fs6674 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6675)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_65)))));
    vlSelf->_cp___05Fs6679 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6680)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_66)))));
    vlSelf->_cp___05Fs6684 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6685)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_67)))));
    vlSelf->_cp___05Fs6689 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6690)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_68)))));
    vlSelf->_cp___05Fs6694 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6695)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_69)))));
    vlSelf->_cp___05Fs6699 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6700)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_70)))));
    vlSelf->_cp___05Fs6704 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6705)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_71)))));
    vlSelf->_cp___05Fs6709 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6710)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_72)))));
    vlSelf->_cp___05Fs6714 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6715)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_73)))));
    vlSelf->_cp___05Fs6719 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6720)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_74)))));
    vlSelf->_cp___05Fs6724 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6725)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_75)))));
    vlSelf->_cp___05Fs6729 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6730)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_76)))));
    vlSelf->_cp___05Fs6734 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6735)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_77)))));
    vlSelf->_cp___05Fs6739 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6740)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_78)))));
    vlSelf->_cp___05Fs6744 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6745)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_79)))));
    vlSelf->_cp___05Fs6749 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6750)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_80)))));
    vlSelf->_cp___05Fs6754 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6755)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_81)))));
    vlSelf->_cp___05Fs6759 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6760)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_82)))));
    vlSelf->_cp___05Fs6764 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6765)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_83)))));
    vlSelf->_cp___05Fs6769 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6770)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_84)))));
    vlSelf->_cp___05Fs6774 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6775)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_85)))));
    vlSelf->_cp___05Fs6779 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6780)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_86)))));
    vlSelf->_cp___05Fs6784 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6785)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_87)))));
    vlSelf->_cp___05Fs6789 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6790)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_88)))));
    vlSelf->_cp___05Fs6794 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6795)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_89)))));
    vlSelf->_cp___05Fs6799 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6800)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_90)))));
    vlSelf->_cp___05Fs6804 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6805)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_91)))));
    vlSelf->_cp___05Fs6809 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6810)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_92)))));
    vlSelf->_cp___05Fs6814 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6815)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_93)))));
    vlSelf->_cp___05Fs6819 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6820)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_94)))));
    vlSelf->_cp___05Fs6824 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6825)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_95)))));
    vlSelf->_cp___05Fs6829 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6830)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_96)))));
    vlSelf->_cp___05Fs6834 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6835)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_97)))));
    vlSelf->_cp___05Fs6839 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6840)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_98)))));
    vlSelf->_cp___05Fs6844 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6845)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_99)))));
    vlSelf->_cp___05Fs6849 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6850)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_100)))));
    vlSelf->_cp___05Fs6854 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6855)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_101)))));
    vlSelf->_cp___05Fs6859 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6860)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_102)))));
    vlSelf->_cp___05Fs6864 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6865)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_103)))));
    vlSelf->_cp___05Fs6869 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6870)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_104)))));
    vlSelf->_cp___05Fs6874 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6875)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_105)))));
    vlSelf->_cp___05Fs6879 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6880)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_106)))));
    vlSelf->_cp___05Fs6884 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6885)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_107)))));
    vlSelf->_cp___05Fs6889 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6890)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_108)))));
    vlSelf->_cp___05Fs6894 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6895)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_109)))));
    vlSelf->_cp___05Fs6899 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6900)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_110)))));
    vlSelf->_cp___05Fs6904 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6905)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_111)))));
    vlSelf->_cp___05Fs6909 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6910)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_112)))));
    vlSelf->_cp___05Fs6914 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6915)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_113)))));
    vlSelf->_cp___05Fs6919 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6920)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_114)))));
    vlSelf->_cp___05Fs6924 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6925)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_115)))));
    vlSelf->_cp___05Fs6929 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6930)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_116)))));
    vlSelf->_cp___05Fs6934 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6935)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_117)))));
    vlSelf->_cp___05Fs6939 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6940)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_118)))));
    vlSelf->_cp___05Fs6944 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6945)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_119)))));
    vlSelf->_cp___05Fs6949 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6950)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_120)))));
    vlSelf->_cp___05Fs6954 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6955)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_121)))));
    vlSelf->_cp___05Fs6959 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6960)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_122)))));
    vlSelf->_cp___05Fs6964 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6965)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_123)))));
    vlSelf->_cp___05Fs6969 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6970)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_124)))));
    vlSelf->_cp___05Fs6974 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6975)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_125)))));
    vlSelf->_cp___05Fs6979 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6980)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_126)))));
    vlSelf->_cp___05Fs6984 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6985)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_127)))));
    vlSelf->_cp___05Fs6989 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs6990)) 
                                       | (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_128)))));
    vlSelf->_cp___05Fs6341 = ((IData)(vlSelf->_cp___05Fs6339) 
                              != (IData)(vlSelf->_cp___05Fs6340));
    vlSelf->_cp___05Fs7469 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_130)));
    vlSelf->_cp___05Fs7458 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_125)));
    vlSelf->_cp___05Fs6010 = ((~ (IData)(vlSelf->_mc___05Fs716)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                                 & (0U == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs6013 = ((~ (IData)(vlSelf->_mc___05Fs717)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                                 & (1U == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs6016 = ((~ (IData)(vlSelf->_mc___05Fs718)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                                 & (2U == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs6019 = ((~ (IData)(vlSelf->_mc___05Fs719)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                                 & (3U == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs6022 = ((~ (IData)(vlSelf->_mc___05Fs720)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                                 & (4U == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs6025 = ((~ (IData)(vlSelf->_mc___05Fs721)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                                 & (5U == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs6028 = ((~ (IData)(vlSelf->_mc___05Fs722)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                                 & (6U == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs6031 = ((~ (IData)(vlSelf->_mc___05Fs723)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                                 & (7U == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs6034 = ((~ (IData)(vlSelf->_mc___05Fs724)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                                 & (8U == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs6037 = ((~ (IData)(vlSelf->_mc___05Fs725)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                                 & (9U == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs6040 = ((~ (IData)(vlSelf->_mc___05Fs726)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                                 & (0xaU == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs6043 = ((~ (IData)(vlSelf->_mc___05Fs727)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                                 & (0xbU == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs6046 = ((~ (IData)(vlSelf->_mc___05Fs728)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                                 & (0xcU == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs6049 = ((~ (IData)(vlSelf->_mc___05Fs729)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                                 & (0xdU == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs6052 = ((~ (IData)(vlSelf->_mc___05Fs730)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                                 & (0xeU == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs6055 = ((~ (IData)(vlSelf->_mc___05Fs731)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                                 & (0xfU == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs5962 = ((~ (IData)(vlSelf->_mc___05Fs700)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                                 & (0U == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs5965 = ((~ (IData)(vlSelf->_mc___05Fs701)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                                 & (1U == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs5968 = ((~ (IData)(vlSelf->_mc___05Fs702)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                                 & (2U == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs5971 = ((~ (IData)(vlSelf->_mc___05Fs703)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                                 & (3U == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs5974 = ((~ (IData)(vlSelf->_mc___05Fs704)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                                 & (4U == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs5977 = ((~ (IData)(vlSelf->_mc___05Fs705)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                                 & (5U == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs5980 = ((~ (IData)(vlSelf->_mc___05Fs706)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                                 & (6U == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs5983 = ((~ (IData)(vlSelf->_mc___05Fs707)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                                 & (7U == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs5986 = ((~ (IData)(vlSelf->_mc___05Fs708)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                                 & (8U == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs5989 = ((~ (IData)(vlSelf->_mc___05Fs709)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                                 & (9U == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs5992 = ((~ (IData)(vlSelf->_mc___05Fs710)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                                 & (0xaU == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs5995 = ((~ (IData)(vlSelf->_mc___05Fs711)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                                 & (0xbU == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs5998 = ((~ (IData)(vlSelf->_mc___05Fs712)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                                 & (0xcU == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs6001 = ((~ (IData)(vlSelf->_mc___05Fs713)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                                 & (0xdU == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs6004 = ((~ (IData)(vlSelf->_mc___05Fs714)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                                 & (0xeU == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
    vlSelf->_cp___05Fs6007 = ((~ (IData)(vlSelf->_mc___05Fs715)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                                 & (0xfU == (IData)(vlSelf->mem_axi4_0_aw_bits_id))));
}

extern const VlWide<10>/*319:0*/ VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0;
extern const VlWide<1024>/*32767:0*/ VExampleRocketSystem__ConstPool__CONST_h30fff677_0;

VL_INLINE_OPT void VExampleRocketSystem___024root___nba_comb__TOP__9(VExampleRocketSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root___nba_comb__TOP__9\n"); );
    // Init
    VlWide<38>/*1215:0*/ ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_38;
    VL_ZERO_W(1216, ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_38);
    VlWide<10>/*319:0*/ __Vtemp_1;
    VlWide<38>/*1215:0*/ __Vtemp_2;
    VlWide<38>/*1215:0*/ __Vtemp_3;
    VlWide<10>/*319:0*/ __Vtemp_4;
    VlWide<8>/*255:0*/ __Vtemp_7;
    // Body
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_27 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_param) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__param));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_26 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__opcode));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_33 
        = ((IData)(vlSelf->_mc___05Fs3617) == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__opcode_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_28 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__size));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_34 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__size_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_29 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_source) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__source));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_35 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_source) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__source_1));
    VL_SHIFTR_WWI(304,304,9, __Vtemp_1, vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_1, (IData)(vlSelf->ExampleRocketSystem__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_source));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_62[0U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[0U] 
           & __Vtemp_1[0U]);
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_62[1U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[1U] 
           & __Vtemp_1[1U]);
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_62[2U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[2U] 
           & __Vtemp_1[2U]);
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_62[3U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[3U] 
           & __Vtemp_1[3U]);
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_62[4U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[4U] 
           & __Vtemp_1[4U]);
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_62[5U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[5U] 
           & __Vtemp_1[5U]);
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_62[6U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[6U] 
           & __Vtemp_1[6U]);
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_62[7U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[7U] 
           & __Vtemp_1[7U]);
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_62[8U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[8U] 
           & __Vtemp_1[8U]);
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_62[9U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[9U] 
           & __Vtemp_1[9U]);
    VL_SHIFTR_WWI(1216,1216,11, __Vtemp_2, vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_54 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size) 
           == (7U & (__Vtemp_2[0U] >> 1U)));
    VL_SHIFTR_WWI(1216,1216,11, __Vtemp_3, vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_63 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size) 
           == (7U & (__Vtemp_3[0U] >> 1U)));
    VL_SHIFTR_WWI(1216,1216,11, ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_38, vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_source) 
                   << 2U));
    VL_SHIFTR_WWI(304,304,9, __Vtemp_4, vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight, (IData)(vlSelf->ExampleRocketSystem__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_source));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_42[0U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[0U] 
           & __Vtemp_4[0U]);
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_42[1U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[1U] 
           & __Vtemp_4[1U]);
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_42[2U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[2U] 
           & __Vtemp_4[2U]);
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_42[3U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[3U] 
           & __Vtemp_4[3U]);
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_42[4U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[4U] 
           & __Vtemp_4[4U]);
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_42[5U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[5U] 
           & __Vtemp_4[5U]);
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_42[6U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[6U] 
           & __Vtemp_4[6U]);
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_42[7U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[7U] 
           & __Vtemp_4[7U]);
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_42[8U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[8U] 
           & __Vtemp_4[8U]);
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_42[9U] 
        = (VExampleRocketSystem__ConstPool__CONST_h3c9e891d_0[9U] 
           & __Vtemp_4[9U]);
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_30 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__address) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address));
    vlSelf->_cp___05Fs13041 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter) 
                               & (IData)(vlSelf->_cp___05Fs12850));
    vlSelf->_cp___05Fs13054 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter) 
                               & (IData)(vlSelf->_cp___05Fs12850));
    vlSelf->_cp___05Fs13074 = ((IData)(vlSelf->_mc___05Fs3622) 
                               & (IData)(vlSelf->_cp___05Fs12850));
    vlSelf->_cp___05Fs13070 = ((IData)(vlSelf->_mc___05Fs3620) 
                               & (IData)(vlSelf->_cp___05Fs12850));
    __Vtemp_7[0U] = (IData)((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__ipi_0)));
    __Vtemp_7[1U] = (IData)(((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__ipi_0)) 
                             >> 0x20U));
    __Vtemp_7[2U] = (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__pad);
    __Vtemp_7[3U] = (IData)((vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__pad 
                             >> 0x20U));
    __Vtemp_7[4U] = (IData)(vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__time_0);
    __Vtemp_7[5U] = (IData)((vlSelf->ExampleRocketSystem__DOT__clint_domain__DOT__clint__DOT__time_0 
                             >> 0x20U));
    __Vtemp_7[6U] = 0U;
    __Vtemp_7[7U] = 0U;
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT___out_xbar_auto_anon_in_d_bits_data 
        = (((IData)(vlSelf->_mc___05Fs401) ? (((QData)((IData)(
                                                               vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                  << 0x10U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                    >> 0x10U)))
             : 0ULL) | (((IData)(vlSelf->_mc___05Fs402)
                          ? ((IData)(vlSelf->_mc___05Fs3439)
                              ? (((QData)((IData)(__Vtemp_7[
                                                  (((IData)(0x3fU) 
                                                    + 
                                                    (0xffU 
                                                     & VL_SHIFTL_III(8,8,32, 
                                                                     (3U 
                                                                      & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                                                         >> 0xeU)), 6U))) 
                                                   >> 5U)])) 
                                  << ((0U == (0x1fU 
                                              & VL_SHIFTL_III(8,8,32, 
                                                              (3U 
                                                               & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                                                  >> 0xeU)), 6U)))
                                       ? 0x20U : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   (3U 
                                                                    & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                                                       >> 0xeU)), 6U))))) 
                                 | (((0U == (0x1fU 
                                             & VL_SHIFTL_III(8,8,32, 
                                                             (3U 
                                                              & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                                                 >> 0xeU)), 6U)))
                                      ? 0ULL : ((QData)((IData)(
                                                                __Vtemp_7[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0xffU 
                                                                   & VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                                                                >> 0xeU)), 6U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  (3U 
                                                                   & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                                                      >> 0xeU)), 6U))))) 
                                    | ((QData)((IData)(
                                                       __Vtemp_7[
                                                       (7U 
                                                        & (VL_SHIFTL_III(8,8,32, 
                                                                         (3U 
                                                                          & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                                                             >> 0xeU)), 6U) 
                                                           >> 5U))])) 
                                       >> (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         (3U 
                                                          & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                                             >> 0xeU)), 6U)))))
                              : 0ULL) : 0ULL) | (((IData)(vlSelf->_mc___05Fs403)
                                                   ? 
                                                  ((IData)(vlSelf->_mc___05Fs3482)
                                                    ? 
                                                   ((IData)(vlSelf->_cp___05Fs11188)
                                                     ? 
                                                    ((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__priority_0)) 
                                                     << 0x20U)
                                                     : 
                                                    ((IData)(vlSelf->_cp___05Fs11189)
                                                      ? (QData)((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__priority_1))
                                                      : 
                                                     ((IData)(vlSelf->_cp___05Fs11190)
                                                       ? (QData)((IData)(
                                                                         (((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__pending_1) 
                                                                           << 2U) 
                                                                          | ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__pending_0) 
                                                                             << 1U))))
                                                       : 
                                                      ((IData)(vlSelf->_cp___05Fs11191)
                                                        ? (QData)((IData)(
                                                                          ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__enables_0_0) 
                                                                           << 1U)))
                                                        : 
                                                       ((IData)(vlSelf->_cp___05Fs11192)
                                                         ? (QData)((IData)(
                                                                           ((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__enables_1_0) 
                                                                            << 1U)))
                                                         : 
                                                        ((IData)(vlSelf->_cp___05Fs11193)
                                                          ? 
                                                         (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__maxDevs_0)) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__threshold_0)))
                                                          : 
                                                         ((IData)(vlSelf->_cp___05Fs11194)
                                                           ? 
                                                          (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__maxDevs_1)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__threshold_1)))
                                                           : 0ULL)))))))
                                                    : 0ULL)
                                                   : 0ULL) 
                                                 | (((IData)(vlSelf->_mc___05Fs404)
                                                      ? 
                                                     ((IData)(vlSelf->_mc___05Fs3670)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_90[
                                                                        (((IData)(0x3fU) 
                                                                          + 
                                                                          (0x3fffU 
                                                                           & VL_SHIFTL_III(14,14,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address) 
                                                                                >> 3U)), 6U))) 
                                                                         >> 5U)])) 
                                                        << 
                                                        ((0U 
                                                          == 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(14,14,32, 
                                                                           (0xffU 
                                                                            & ((IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address) 
                                                                               >> 3U)), 6U)))
                                                          ? 0x20U
                                                          : 
                                                         ((IData)(0x40U) 
                                                          - 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(14,14,32, 
                                                                           (0xffU 
                                                                            & ((IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address) 
                                                                               >> 3U)), 6U))))) 
                                                       | (((0U 
                                                            == 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(14,14,32, 
                                                                             (0xffU 
                                                                              & ((IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address) 
                                                                                >> 3U)), 6U)))
                                                            ? 0ULL
                                                            : 
                                                           ((QData)((IData)(
                                                                            vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_90[
                                                                            (((IData)(0x1fU) 
                                                                              + 
                                                                              (0x3fffU 
                                                                               & VL_SHIFTL_III(14,14,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address) 
                                                                                >> 3U)), 6U))) 
                                                                             >> 5U)])) 
                                                            << 
                                                            ((IData)(0x20U) 
                                                             - 
                                                             (0x1fU 
                                                              & VL_SHIFTL_III(14,14,32, 
                                                                              (0xffU 
                                                                               & ((IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address) 
                                                                                >> 3U)), 6U))))) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_90[
                                                                             (0x1ffU 
                                                                              & (VL_SHIFTL_III(14,14,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address) 
                                                                                >> 3U)), 6U) 
                                                                                >> 5U))])) 
                                                             >> 
                                                             (0x1fU 
                                                              & VL_SHIFTL_III(14,14,32, 
                                                                              (0xffU 
                                                                               & ((IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address) 
                                                                                >> 3U)), 6U)))))
                                                       : 0ULL)
                                                      : 0ULL) 
                                                    | ((IData)(vlSelf->_mc___05Fs405)
                                                        ? 
                                                       ((IData)(vlSelf->_mc___05Fs3681)
                                                         ? 0ULL
                                                         : 
                                                        (((QData)((IData)(
                                                                          VExampleRocketSystem__ConstPool__CONST_h30fff677_0[
                                                                          (((IData)(0x3fU) 
                                                                            + 
                                                                            (0x7fffU 
                                                                             & VL_SHIFTL_III(15,15,32, 
                                                                                (0x1ffU 
                                                                                & (vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_address 
                                                                                >> 3U)), 6U))) 
                                                                           >> 5U)])) 
                                                          << 
                                                          ((0U 
                                                            == 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(15,15,32, 
                                                                             (0x1ffU 
                                                                              & (vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_address 
                                                                                >> 3U)), 6U)))
                                                            ? 0x20U
                                                            : 
                                                           ((IData)(0x40U) 
                                                            - 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(15,15,32, 
                                                                             (0x1ffU 
                                                                              & (vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_address 
                                                                                >> 3U)), 6U))))) 
                                                         | (((0U 
                                                              == 
                                                              (0x1fU 
                                                               & VL_SHIFTL_III(15,15,32, 
                                                                               (0x1ffU 
                                                                                & (vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_address 
                                                                                >> 3U)), 6U)))
                                                              ? 0ULL
                                                              : 
                                                             ((QData)((IData)(
                                                                              VExampleRocketSystem__ConstPool__CONST_h30fff677_0[
                                                                              (((IData)(0x1fU) 
                                                                                + 
                                                                                (0x7fffU 
                                                                                & VL_SHIFTL_III(15,15,32, 
                                                                                (0x1ffU 
                                                                                & (vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_address 
                                                                                >> 3U)), 6U))) 
                                                                               >> 5U)])) 
                                                              << 
                                                              ((IData)(0x20U) 
                                                               - 
                                                               (0x1fU 
                                                                & VL_SHIFTL_III(15,15,32, 
                                                                                (0x1ffU 
                                                                                & (vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_address 
                                                                                >> 3U)), 6U))))) 
                                                            | ((QData)((IData)(
                                                                               VExampleRocketSystem__ConstPool__CONST_h30fff677_0[
                                                                               (0x3ffU 
                                                                                & (VL_SHIFTL_III(15,15,32, 
                                                                                (0x1ffU 
                                                                                & (vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_address 
                                                                                >> 3U)), 6U) 
                                                                                >> 5U))])) 
                                                               >> 
                                                               (0x1fU 
                                                                & VL_SHIFTL_III(15,15,32, 
                                                                                (0x1ffU 
                                                                                & (vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_address 
                                                                                >> 3U)), 6U))))))
                                                        : 0ULL)))));
    vlSelf->_cp___05Fs13052 = ((IData)(vlSelf->_mc___05Fs3616) 
                               & (IData)(vlSelf->_cp___05Fs13040));
    vlSelf->_cp___05Fs13067 = ((IData)(vlSelf->_mc___05Fs3618) 
                               & (IData)(vlSelf->_cp___05Fs13040));
    vlSelf->_cp___05Fs13071 = ((IData)(vlSelf->_mc___05Fs3620) 
                               & (IData)(vlSelf->_cp___05Fs13040));
    vlSelf->_cp___05Fs13075 = ((IData)(vlSelf->_mc___05Fs3622) 
                               & (IData)(vlSelf->_cp___05Fs13040));
    vlSelf->_cp___05Fs13376 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__goReg)) 
                               & (IData)(vlSelf->_cp___05Fs13137));
    vlSelf->_cp___05Fs13126 = ((~ ((IData)(vlSelf->_cp___05Fs13368) 
                                   | (IData)(vlSelf->_cp___05Fs13372))) 
                               & ((IData)(vlSelf->_cp___05Fs13375) 
                                  & (IData)(vlSelf->_cp___05Fs13377)));
    vlSelf->_cp___05Fs13045 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_27)));
    vlSelf->_cp___05Fs13043 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_26)));
    vlSelf->_cp___05Fs13056 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_33)));
    vlSelf->_cp___05Fs13047 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_28)));
    vlSelf->_cp___05Fs13060 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_34)));
    vlSelf->_cp___05Fs13049 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_29)));
    vlSelf->_cp___05Fs13062 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_35)));
    vlSelf->_cp___05Fs13104 = (1U & (~ vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_62[0U]));
    vlSelf->_cp___05Fs13087 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_54)));
    vlSelf->_cp___05Fs13109 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_63)));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_52 
        = (((IData)(vlSelf->_mc___05Fs3617) == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_38[0U] 
                                                         >> 1U)))))
                                                 ? 
                                                (7U 
                                                 & (0x911240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * 
                                                        (7U 
                                                         & (ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_38[0U] 
                                                            >> 1U))))))
                                                 : 0U)) 
           | ((IData)(vlSelf->_mc___05Fs3617) == ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * 
                                                       (7U 
                                                        & (ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_38[0U] 
                                                           >> 1U)))))
                                                   ? 
                                                  (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_38[0U] 
                                                              >> 1U))))))
                                                   : 0U)));
    vlSelf->_cp___05Fs13073 = (1U & vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_42[0U]);
    vlSelf->_cp___05Fs13051 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_30)));
    vlSelf->_cp___05Fs13076 = vlSelf->_cp___05Fs13074;
    vlSelf->_cp___05Fs13088 = ((IData)(vlSelf->_cp___05Fs13074) 
                               & ((IData)(vlSelf->_mc___05Fs3620) 
                                  & (IData)(vlSelf->_cp___05Fs12850)));
    vlSelf->_cp___05Fs13079 = vlSelf->_cp___05Fs13070;
    vlSelf->_cp___05Fs13085 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_52)));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_49 
        = ((IData)(vlSelf->_cp___05Fs13073) | (IData)(vlSelf->_cp___05Fs13079));
    vlSelf->_cp___05Fs13078 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_49)));
}

VL_INLINE_OPT void VExampleRocketSystem___024root___nba_comb__TOP__10(VExampleRocketSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root___nba_comb__TOP__10\n"); );
    // Body
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_99 
        = (1U & ((IData)(vlSelf->_cp___05Fs13117) | 
                 ((~ (IData)(vlSelf->_cp___05Fs13377)) 
                  | (IData)(vlSelf->_cp___05Fs13375))));
    vlSelf->_cp___05Fs13386 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_99)));
}

VL_INLINE_OPT void VExampleRocketSystem___024root___nba_comb__TOP__11(VExampleRocketSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root___nba_comb__TOP__11\n"); );
    // Body
    vlSelf->_cp___05Fs11174 = ((1U == (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__claiming)) 
                               | ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__gateways_gateway__DOT__inFlight)) 
                                  & (IData)(vlSelf->ExampleRocketSystem__DOT__ibus_intsink__DOT__chain__DOT__output_chain__DOT__sync_0)));
    vlSelf->_cp___05Fs11175 = ((2U == (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__claiming)) 
                               | ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__gateways_gateway_1__DOT__inFlight)) 
                                  & (IData)(vlSelf->ExampleRocketSystem__DOT__ibus_intsink__DOT__chain__DOT__output_chain_1__DOT__sync_0)));
}

VL_INLINE_OPT void VExampleRocketSystem___024root___nba_comb__TOP__12(VExampleRocketSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root___nba_comb__TOP__12\n"); );
    // Body
    vlSelf->_cp___05Fs7367 = ((IData)(vlSelf->_cp___05Fs6991) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__a_first_counter)));
    vlSelf->_cp___05Fs7422 = ((IData)(vlSelf->_cp___05Fs6991) 
                              & (IData)(vlSelf->_mc___05Fs790));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_61 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_param) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__param));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_60 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_opcode) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__opcode));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_63 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_source) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__source));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_96 
        = (0x7ffffU & (vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__inflight 
                       >> (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_source)));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_62 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__size));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_64 
        = (vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__address 
           == vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___filter_io_response_bits_address);
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__matchTrackers 
        = ((((vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__address 
              >> 6U) == (vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___filter_io_response_bits_address 
                         >> 6U)) << 3U) | ((((vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__address 
                                              >> 6U) 
                                             == (vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___filter_io_response_bits_address 
                                                 >> 6U)) 
                                            << 2U) 
                                           | ((((vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__address 
                                                 >> 6U) 
                                                == 
                                                (vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___filter_io_response_bits_address 
                                                 >> 6U)) 
                                               << 1U) 
                                              | ((vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__address 
                                                  >> 6U) 
                                                 == 
                                                 (vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___filter_io_response_bits_address 
                                                  >> 6U)))));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__a_set_wo_ready 
        = ((IData)(vlSelf->_cp___05Fs7422) ? (0x7ffffU 
                                              & ((IData)(1U) 
                                                 << (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_a_bits_source)))
            : 0U);
    vlSelf->_cp___05Fs7371 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_61)));
    vlSelf->_cp___05Fs7369 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_60)));
    vlSelf->_cp___05Fs7375 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_63)));
    vlSelf->_cp___05Fs7425 = (1U & vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_96);
    vlSelf->_cp___05Fs7373 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_62)));
    vlSelf->_cp___05Fs7377 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_64)));
    vlSelf->_mc___05Fs871 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__matchTrackers));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__filter_io_request_bits_mshr_lo 
        = ((IData)(vlSelf->_mc___05Fs871) ? (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__matchTrackers)
            : ((1U | ((8U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__idle) 
                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT____VdfgTmp_hc62d752b__0))) 
                             << 3U)) | ((4U & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT____VdfgTmp_hc62d752b__0)) 
                                               << 2U)) 
                                        | ((IData)(vlSelf->_cp___05Fs7485) 
                                           << 1U)))) 
               & (((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__idle) 
                   << 3U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__idle) 
                              << 2U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__idle) 
                                         << 1U) | (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__idle))))));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT____Vcellinp__filter__io_request_bits_mshr 
        = (((IData)((0U != (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__filter_io_request_bits_mshr_lo) 
                                  >> 2U)))) << 1U) 
           | (IData)((0U != (0xaU & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__filter_io_request_bits_mshr_lo)))));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT____Vcellinp__TLBroadcastTracker__io_in_a_valid 
        = ((IData)(vlSelf->_cp___05Fs6991) & ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__filter_io_request_bits_mshr_lo) 
                                              & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_27)));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT____Vcellinp__TLBroadcastTracker_1__io_in_a_valid 
        = ((IData)(vlSelf->_cp___05Fs6991) & (((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__filter_io_request_bits_mshr_lo) 
                                               >> 1U) 
                                              & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_27)));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT____Vcellinp__TLBroadcastTracker_2__io_in_a_valid 
        = ((IData)(vlSelf->_cp___05Fs6991) & (((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__filter_io_request_bits_mshr_lo) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_27)));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT____Vcellinp__TLBroadcastTracker_3__io_in_a_valid 
        = ((IData)(vlSelf->_cp___05Fs6991) & (((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__filter_io_request_bits_mshr_lo) 
                                               >> 3U) 
                                              & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_27)));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_26 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__filter_io_request_bits_mshr_lo) 
           & (((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT___io_in_a_ready_output) 
               << 3U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT___io_in_a_ready_output) 
                          << 2U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT___io_in_a_ready_output) 
                                     << 1U) | (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT___io_in_a_ready_output)))));
    vlSelf->_cp___05Fs7483 = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT___io_in_a_ready_output) 
                              & ((IData)(vlSelf->_mc___05Fs870) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT____Vcellinp__TLBroadcastTracker__io_in_a_valid)));
    vlSelf->_cp___05Fs7480 = ((~ (IData)(vlSelf->_mc___05Fs799)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT___GEN_2) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT____Vcellinp__TLBroadcastTracker__io_in_a_valid)));
    vlSelf->_cp___05Fs7500 = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT___io_in_a_ready_output) 
                              & ((IData)(vlSelf->_mc___05Fs870) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT____Vcellinp__TLBroadcastTracker_1__io_in_a_valid)));
    vlSelf->_cp___05Fs7497 = ((~ (IData)(vlSelf->_mc___05Fs803)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT___GEN_2) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT____Vcellinp__TLBroadcastTracker_1__io_in_a_valid)));
    vlSelf->_cp___05Fs7517 = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT___io_in_a_ready_output) 
                              & ((IData)(vlSelf->_mc___05Fs870) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT____Vcellinp__TLBroadcastTracker_2__io_in_a_valid)));
    vlSelf->_cp___05Fs7514 = ((~ (IData)(vlSelf->_mc___05Fs807)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT___GEN_2) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT____Vcellinp__TLBroadcastTracker_2__io_in_a_valid)));
    vlSelf->_cp___05Fs7534 = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT___io_in_a_ready_output) 
                              & ((IData)(vlSelf->_mc___05Fs870) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT____Vcellinp__TLBroadcastTracker_3__io_in_a_valid)));
    vlSelf->_cp___05Fs7531 = ((~ (IData)(vlSelf->_mc___05Fs811)) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT___GEN_2) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT____Vcellinp__TLBroadcastTracker_3__io_in_a_valid)));
    vlSelf->_cp___05Fs7566 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_todo)) 
                              & ((IData)(vlSelf->_cp___05Fs6991) 
                                 & ((IData)(vlSelf->_mc___05Fs870) 
                                    & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_26)))));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_a_ready 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_27) 
           & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_26)));
    vlSelf->_cp___05Fs7486 = ((IData)(vlSelf->_cp___05Fs7566) 
                              & (0U == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT____Vcellinp__filter__io_request_bits_mshr)));
    vlSelf->_cp___05Fs7503 = ((IData)(vlSelf->_cp___05Fs7566) 
                              & (1U == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT____Vcellinp__filter__io_request_bits_mshr)));
    vlSelf->_cp___05Fs7520 = ((IData)(vlSelf->_cp___05Fs7566) 
                              & (2U == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT____Vcellinp__filter__io_request_bits_mshr)));
    vlSelf->_cp___05Fs7537 = ((IData)(vlSelf->_cp___05Fs7566) 
                              & (3U == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT____Vcellinp__filter__io_request_bits_mshr)));
    vlSelf->_mc___05Fs88 = ((IData)(vlSelf->_mc___05Fs89) 
                            & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_a_ready));
    vlSelf->_cp___05Fs7366 = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__nodeIn_a_ready) 
                              & (IData)(vlSelf->_cp___05Fs6991));
    vlSelf->_cp___05Fs770 = ((IData)(vlSelf->_mc___05Fs88) 
                             & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_valid_1)));
    vlSelf->_cp___05Fs7420 = vlSelf->_cp___05Fs7366;
    vlSelf->_cp___05Fs7565 = vlSelf->_cp___05Fs7366;
    vlSelf->_cp___05Fs7378 = ((IData)(vlSelf->_mc___05Fs783) 
                              & (IData)(vlSelf->_cp___05Fs7366));
    vlSelf->_cp___05Fs7423 = ((IData)(vlSelf->_cp___05Fs7366) 
                              & (IData)(vlSelf->_mc___05Fs790));
}

VL_INLINE_OPT void VExampleRocketSystem___024root___nba_comb__TOP__13(VExampleRocketSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root___nba_comb__TOP__13\n"); );
    // Init
    CData/*0:0*/ ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_12;
    ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_12 = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_20;
    ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_20 = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_74;
    ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_74 = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h79ced34c__0;
    ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h79ced34c__0 = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h4ea4ca6f__0;
    ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h4ea4ca6f__0 = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_75;
    ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_75 = 0;
    CData/*0:0*/ __VdfgTmp_h7dc92f35__0;
    __VdfgTmp_h7dc92f35__0 = 0;
    // Body
    vlSelf->_cp___05Fs3919 = ((IData)(vlSelf->_cp___05Fs3728) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter)));
    vlSelf->_cp___05Fs3948 = ((IData)(vlSelf->_cp___05Fs3728) 
                              & (IData)(vlSelf->_mc___05Fs445));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_50 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_param) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__param));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_52 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_source) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__source));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_70 
        = (0x7ffffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight 
                       >> (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_source)));
    ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_75 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_source) 
           == (0x1fU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                        >> 9U)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_51 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__size));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_80 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size) 
           == (0xfU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                       >> 5U)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_53 
        = (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__address 
           == vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address);
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_49 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_opcode) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__opcode));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_79 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__nodeIn_d_bits_opcode) 
            == ((0x17U >= (0x1fU & ((IData)(3U) * (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_opcode))))
                 ? (7U & (0x911240U >> (0x1fU & ((IData)(3U) 
                                                 * (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_opcode)))))
                 : 0U)) | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__nodeIn_d_bits_opcode) 
                           == ((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_opcode))))
                                ? (7U & (0x951240U 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_opcode)))))
                                : 0U)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__a_allow 
        = ((~ ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_fifoId)) 
               & ((3U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_s_0_state)) 
                  | (IData)(vlSelf->_mc___05Fs483)))) 
           & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__a_isSupported) 
              | (IData)(vlSelf->_cp___05Fs4005)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready 
        = ((IData)(vlSelf->_cp___05Fs3948) ? (0x7ffffU 
                                              & ((IData)(1U) 
                                                 << (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_source)))
            : 0U);
    vlSelf->_cp___05Fs3923 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_50)));
    vlSelf->_cp___05Fs3927 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_52)));
    vlSelf->_cp___05Fs3951 = (1U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_70);
    vlSelf->_cp___05Fs3966 = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_71) 
                              & ((IData)(vlSelf->_mc___05Fs445) 
                                 & ((IData)(vlSelf->_cp___05Fs3728) 
                                    & ((~ (IData)(vlSelf->_cp___05Fs3844)) 
                                       & (IData)(ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_75)))));
    vlSelf->_cp___05Fs3957 = ((IData)(vlSelf->_cp___05Fs3948) 
                              & (IData)(ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_75));
    vlSelf->_cp___05Fs3925 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_51)));
    vlSelf->_cp___05Fs3961 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_80)));
    vlSelf->_cp___05Fs3929 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_53)));
    vlSelf->_cp___05Fs3921 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_49)));
    vlSelf->_cp___05Fs3959 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_79)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__nodeIn_a_ready 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__source_i_ready) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__a_allow));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__source_i_valid 
        = ((IData)(vlSelf->_cp___05Fs3728) & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__a_allow));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_86 
        = ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready 
            != ((IData)(vlSelf->_cp___05Fs3952) ? (0x7ffffU 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (0x1fU 
                                                       & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 9U))))
                 : 0U)) | (0U == vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_78 
        = (1U & ((0x7ffffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight 
                              >> (0x1fU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                           >> 9U)))) 
                 | (IData)(vlSelf->_cp___05Fs3957)));
    vlSelf->_mc___05Fs80 = ((IData)(vlSelf->_mc___05Fs81) 
                            & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__nodeIn_a_ready));
    vlSelf->_cp___05Fs3918 = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__nodeIn_a_ready) 
                              & (IData)(vlSelf->_cp___05Fs3728));
    vlSelf->_cp___05Fs4004 = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__source_i_ready) 
                              & ((IData)(vlSelf->_cp___05Fs3999) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__source_i_valid)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT___GEN_83 
        = ((IData)(vlSelf->_mc___05Fs483) | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__source_i_valid));
    vlSelf->_mc___05Fs484 = ((~ (IData)(vlSelf->_mc___05Fs483)) 
                             & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__source_i_valid));
    vlSelf->_cp___05Fs3970 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_86)));
    vlSelf->_cp___05Fs3956 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_78)));
    vlSelf->_cp___05Fs763 = ((IData)(vlSelf->_mc___05Fs80) 
                             & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_valid)));
    vlSelf->_cp___05Fs3946 = vlSelf->_cp___05Fs3918;
    vlSelf->_cp___05Fs3930 = ((IData)(vlSelf->_mc___05Fs441) 
                              & (IData)(vlSelf->_cp___05Fs3918));
    vlSelf->_cp___05Fs3949 = ((IData)(vlSelf->_cp___05Fs3918) 
                              & (IData)(vlSelf->_mc___05Fs445));
    if (vlSelf->_mc___05Fs486) {
        vlSelf->_cp___05Fs3451 = vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT___GEN_83;
        vlSelf->_mc___05Fs490 = vlSelf->_mc___05Fs484;
    } else {
        vlSelf->_cp___05Fs3451 = (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__state_0) 
                                   & (IData)(vlSelf->_mc___05Fs483)) 
                                  | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__state_1) 
                                     & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__source_i_valid)));
        vlSelf->_mc___05Fs490 = vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__state_1;
    }
    vlSelf->_cp___05Fs4001 = (1U & (~ ((~ (IData)(vlSelf->_mc___05Fs483)) 
                                       | (~ (IData)(vlSelf->_mc___05Fs484)))));
    vlSelf->_cp___05Fs4003 = (1U & (~ ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT___GEN_83)) 
                                       | ((IData)(vlSelf->_mc___05Fs483) 
                                          | (IData)(vlSelf->_mc___05Fs484)))));
    vlSelf->_cp___05Fs3642 = ((IData)(vlSelf->_cp___05Fs3451) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter)));
    vlSelf->_cp___05Fs3641 = ((~ (IData)(vlSelf->_mc___05Fs428)) 
                              & (IData)(vlSelf->_cp___05Fs3451));
    vlSelf->_cp___05Fs3671 = ((IData)(vlSelf->_cp___05Fs3451) 
                              & (IData)(vlSelf->_mc___05Fs421));
    vlSelf->_cp___05Fs3473 = ((IData)(vlSelf->_mc___05Fs490) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__a_isSupported) 
                                 & (IData)(vlSelf->_cp___05Fs3750)));
    vlSelf->_mc___05Fs416 = (1U & (~ ((IData)(vlSelf->_mc___05Fs490) 
                                      & ((IData)(vlSelf->_cp___05Fs3999) 
                                         | ((IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_opcode) 
                                            >> 2U)))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_data 
        = (((IData)(vlSelf->_mc___05Fs489) ? ((IData)(vlSelf->_mc___05Fs481)
                                               ? (((QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                       >> 
                                                                       ((2U 
                                                                         & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x3fU)) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x3fU)))))))) 
                                                   << 0x3fU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                          >> 
                                                                          ((2U 
                                                                            & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x3eU)) 
                                                                               << 1U)) 
                                                                           | (1U 
                                                                              & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x3eU)))))))) 
                                                      << 0x3eU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                             >> 
                                                                             ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x3dU)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x3dU)))))))) 
                                                         << 0x3dU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x3cU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x3cU)))))))) 
                                                            << 0x3cU) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x3bU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x3bU)))))))) 
                                                               << 0x3bU) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x3aU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x3aU)))))))) 
                                                                  << 0x3aU) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x39U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x39U)))))))) 
                                                                     << 0x39U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x38U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x38U)))))))) 
                                                                        << 0x38U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x37U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x37U)))))))) 
                                                                           << 0x37U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x36U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x36U)))))))) 
                                                                              << 0x36U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x35U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x35U)))))))) 
                                                                                << 0x35U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x34U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x34U)))))))) 
                                                                                << 0x34U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x33U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x33U)))))))) 
                                                                                << 0x33U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x32U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x32U)))))))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x31U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x31U)))))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x30U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x30U)))))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x2fU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x2fU)))))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x2eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x2eU)))))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x2dU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x2dU)))))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x2cU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x2cU)))))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x2bU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x2bU)))))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x2aU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x2aU)))))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x29U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x29U)))))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x28U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x28U)))))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x27U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x27U)))))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x26U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x26U)))))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x25U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x25U)))))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x24U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x24U)))))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x23U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x23U)))))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x22U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x22U)))))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x21U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x21U)))))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x20U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x20U)))))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x1fU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x1fU))))) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x1eU))))) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x1dU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x1dU))))) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x1cU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x1cU))))) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x1bU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x1bU))))) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x1aU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x1aU))))) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x19U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x19U))))) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x18U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x18U))))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x17U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x17U))))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x16U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x16U))))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x15U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x15U))))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x14U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x14U))))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x13U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x13U))))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x12U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x12U))))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x11U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x11U))))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x10U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x10U))))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0xfU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0xfU))))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0xeU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0xeU))))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0xdU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0xdU))))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0xcU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0xcU))))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0xbU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0xbU))))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0xaU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0xaU))))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 9U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 9U))))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 8U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 8U))))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 7U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 7U))))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 6U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 6U))))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 5U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 5U))))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 4U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 4U))))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 3U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 3U))))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 2U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 2U))))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 1U))))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
                                               : ((IData)(vlSelf->_mc___05Fs478)
                                                   ? vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__adder_out
                                                   : 
                                                  ((IData)(vlSelf->_mc___05Fs480)
                                                    ? vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data
                                                    : vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data)))
             : 0ULL) | ((IData)(vlSelf->_mc___05Fs490)
                         ? vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_data
                         : 0ULL));
    vlSelf->_cp___05Fs3472 = (((IData)(vlSelf->_mc___05Fs489) 
                               & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_corrupt) 
                                  | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_corrupt))) 
                              | ((IData)(vlSelf->_mc___05Fs490) 
                                 & (IData)(vlSelf->_cp___05Fs3749)));
    if (vlSelf->_mc___05Fs490) {
        if (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__a_isSupported) {
            vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_opcode 
                = vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_opcode;
            __VdfgTmp_h7dc92f35__0 = 1U;
        } else {
            vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_opcode = 4U;
            __VdfgTmp_h7dc92f35__0 = 0U;
        }
    } else {
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_opcode = 0U;
        __VdfgTmp_h7dc92f35__0 = 0U;
    }
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_mask 
        = (((IData)(vlSelf->_mc___05Fs489) ? ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_5) 
                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_5) 
                                                   & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_address)) 
                                               << 7U) 
                                              | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_5) 
                                                   | ((~ vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_address) 
                                                      & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_5))) 
                                                  << 6U) 
                                                 | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_4) 
                                                      | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_4) 
                                                         & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_address)) 
                                                     << 5U) 
                                                    | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_4) 
                                                         | ((~ vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_address) 
                                                            & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_4))) 
                                                        << 4U) 
                                                       | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_3) 
                                                            | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_3) 
                                                               & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_address)) 
                                                           << 3U) 
                                                          | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_3) 
                                                               | ((~ vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_address) 
                                                                  & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_3))) 
                                                              << 2U) 
                                                             | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_2) 
                                                                  | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_2) 
                                                                     & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_address)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_2) 
                                                                   | ((~ vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_address) 
                                                                      & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_2))))))))))
             : 0U) | ((IData)(vlSelf->_mc___05Fs490)
                       ? (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_mask)
                       : 0U));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_source 
        = (((IData)(vlSelf->_mc___05Fs489) ? (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_source)
             : 0U) | ((IData)(vlSelf->_mc___05Fs490)
                       ? (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_source)
                       : 0U));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_size 
        = (((IData)(vlSelf->_mc___05Fs489) ? (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_size)
             : 0U) | ((IData)(vlSelf->_mc___05Fs490)
                       ? (IData)(vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size)
                       : 0U));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_address 
        = (((IData)(vlSelf->_mc___05Fs489) ? vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_address
             : 0U) | ((IData)(vlSelf->_mc___05Fs490)
                       ? vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address
                       : 0U));
    vlSelf->_cp___05Fs3669 = vlSelf->_cp___05Fs3641;
    vlSelf->_cp___05Fs3722 = vlSelf->_cp___05Fs3641;
    vlSelf->_cp___05Fs3653 = ((IData)(vlSelf->_mc___05Fs417) 
                              & (IData)(vlSelf->_cp___05Fs3641));
    vlSelf->_cp___05Fs3672 = ((IData)(vlSelf->_cp___05Fs3641) 
                              & (IData)(vlSelf->_mc___05Fs421));
    vlSelf->_cp___05Fs3724 = ((IData)(vlSelf->_cp___05Fs3641) 
                              != (IData)(vlSelf->_cp___05Fs3094));
    vlSelf->_mc___05Fs420 = vlSelf->_mc___05Fs416;
    vlSelf->_cp___05Fs3491 = vlSelf->_cp___05Fs3472;
    vlSelf->_cp___05Fs3506 = vlSelf->_cp___05Fs3472;
    vlSelf->_cp___05Fs3563 = vlSelf->_cp___05Fs3472;
    vlSelf->_cp___05Fs3456 = (6U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_opcode));
    vlSelf->_cp___05Fs3492 = (4U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_opcode));
    vlSelf->_cp___05Fs3507 = (0U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_opcode));
    vlSelf->_cp___05Fs3518 = (1U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_opcode));
    vlSelf->_cp___05Fs3529 = (2U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_opcode));
    vlSelf->_cp___05Fs3540 = (3U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_opcode));
    vlSelf->_cp___05Fs3551 = (5U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_opcode));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_48 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_opcode) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__opcode));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_78 
        = (((7U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
            == ((0x17U >= (0x1fU & ((IData)(3U) * (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_opcode))))
                 ? (7U & (0x911240U >> (0x1fU & ((IData)(3U) 
                                                 * (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_opcode)))))
                 : 0U)) | ((7U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
                           == ((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_opcode))))
                                ? (7U & (0x951240U 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_opcode)))))
                                : 0U)));
    if (__VdfgTmp_h7dc92f35__0) {
        vlSelf->_cp___05Fs3548 = vlSelf->_cp___05Fs3825;
        vlSelf->_cp___05Fs3502 = vlSelf->_cp___05Fs3779;
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_param 
            = vlSelf->ExampleRocketSystem__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_param;
    } else {
        vlSelf->_cp___05Fs3548 = 0U;
        vlSelf->_cp___05Fs3502 = 0U;
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_param = 0U;
    }
    vlSelf->_cp___05Fs3470 = (0xffU != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_mask));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_51 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_source) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__source));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_69 
        = (0x7ffffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__inflight 
                       >> (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_source)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready 
        = ((IData)(vlSelf->_cp___05Fs3671) ? (0x7ffffU 
                                              & ((IData)(1U) 
                                                 << (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_source)))
            : 0U);
    ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_74 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_source) 
           == (0x1fU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                        >> 9U)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__source_ok 
        = ((0U == (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_source) 
                         >> 3U))) | ((1U == (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_source) 
                                                   >> 3U))) 
                                     | ((0x10U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_source)) 
                                        | ((0x11U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_source)) 
                                           | (0x12U 
                                              == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_source))))));
    vlSelf->_cp___05Fs3464 = (2U >= (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_size));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_50 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__size));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_79 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_size) 
           == (0xfU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                       >> 5U)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_52 
        = (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__address 
           == vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_address);
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_7 
        = (0xfffU & ((~ ((IData)(0xfffU) << (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_size))) 
                     & vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_address));
    ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h4ea4ca6f__0 
        = ((0U == ((0xc00U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_address 
                              >> 0x10U)) | (0x3ffU 
                                            & (0x200U 
                                               ^ (vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_address 
                                                  >> 0x10U))))) 
           | (3U == (3U & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_address 
                           >> 0x1aU))));
    ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_12 
        = (0U == ((0xfffcU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_address 
                              >> 0xcU)) | (3U & (~ 
                                                 (vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_address 
                                                  >> 0xcU)))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_address)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_address)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_address)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_address)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_acc 
        = ((2U < (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_size)) 
           | ((~ (vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_address 
                  >> 2U)) & (2U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_size)))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_1 
        = ((2U < (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_size)) 
           | ((2U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_size))) 
              & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_address 
                 >> 2U)));
    vlSelf->_cp___05Fs3644 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_48)));
    vlSelf->_cp___05Fs3682 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_78)));
    vlSelf->_cp___05Fs3487 = (1U & (~ (IData)(vlSelf->_cp___05Fs3502)));
    vlSelf->_cp___05Fs3515 = vlSelf->_cp___05Fs3502;
    vlSelf->_cp___05Fs3526 = vlSelf->_cp___05Fs3502;
    vlSelf->_cp___05Fs3537 = (5U <= (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_param));
    vlSelf->_cp___05Fs3559 = (2U <= (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_param));
    vlSelf->_cp___05Fs3468 = (3U <= (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_param));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_49 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_param) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__param));
    vlSelf->_cp___05Fs3489 = vlSelf->_cp___05Fs3470;
    vlSelf->_cp___05Fs3650 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_51)));
    vlSelf->_cp___05Fs3674 = (1U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_69);
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_85 
        = ((vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready 
            != ((IData)(vlSelf->_cp___05Fs3675) ? (0x7ffffU 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (0x1fU 
                                                       & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 9U))))
                 : 0U)) | (0U == vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready));
    vlSelf->_cp___05Fs3689 = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_70) 
                              & ((IData)(vlSelf->_mc___05Fs421) 
                                 & ((IData)(vlSelf->_cp___05Fs3451) 
                                    & ((~ (IData)(vlSelf->_cp___05Fs3567)) 
                                       & (IData)(ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_74)))));
    vlSelf->_cp___05Fs3680 = ((IData)(vlSelf->_cp___05Fs3671) 
                              & (IData)(ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_74));
    vlSelf->_cp___05Fs3462 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__source_ok)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_19 
        = ((0xdU > (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_size)) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__source_ok));
    vlSelf->_cp___05Fs3481 = vlSelf->_cp___05Fs3464;
    vlSelf->_cp___05Fs3648 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_50)));
    vlSelf->_cp___05Fs3684 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_79)));
    vlSelf->_cp___05Fs3652 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_52)));
    vlSelf->_cp___05Fs3466 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_7));
    ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h79ced34c__0 
        = ((0U == ((0xffeU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_address 
                              >> 0x10U)) | (1U & (~ 
                                                  (vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_address 
                                                   >> 0x10U))))) 
           | (IData)(ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h4ea4ca6f__0));
    ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_20 
        = ((0xdU > (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_size)) 
           & (IData)(ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_12));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_size))) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_eq_2)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_size))) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_eq_3)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_size))) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_eq_4)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_size))) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_eq_5)));
    vlSelf->_cp___05Fs3485 = vlSelf->_cp___05Fs3468;
    vlSelf->_cp___05Fs3646 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_49)));
    vlSelf->_cp___05Fs3693 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_85)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_77 
        = (1U & ((0x7ffffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__inflight 
                              >> (0x1fU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                           >> 9U)))) 
                 | (IData)(vlSelf->_cp___05Fs3680)));
    vlSelf->_cp___05Fs3479 = vlSelf->_cp___05Fs3462;
    vlSelf->_cp___05Fs3498 = vlSelf->_cp___05Fs3462;
    vlSelf->_cp___05Fs3511 = vlSelf->_cp___05Fs3462;
    vlSelf->_cp___05Fs3522 = vlSelf->_cp___05Fs3462;
    vlSelf->_cp___05Fs3533 = vlSelf->_cp___05Fs3462;
    vlSelf->_cp___05Fs3544 = vlSelf->_cp___05Fs3462;
    vlSelf->_cp___05Fs3555 = vlSelf->_cp___05Fs3462;
    vlSelf->_cp___05Fs3494 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_19)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_29 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_19) 
           & ((4U > (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_size)) 
              & (IData)(ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_12)));
    vlSelf->_cp___05Fs3483 = vlSelf->_cp___05Fs3466;
    vlSelf->_cp___05Fs3500 = vlSelf->_cp___05Fs3466;
    vlSelf->_cp___05Fs3513 = vlSelf->_cp___05Fs3466;
    vlSelf->_cp___05Fs3524 = vlSelf->_cp___05Fs3466;
    vlSelf->_cp___05Fs3535 = vlSelf->_cp___05Fs3466;
    vlSelf->_cp___05Fs3546 = vlSelf->_cp___05Fs3466;
    vlSelf->_cp___05Fs3557 = vlSelf->_cp___05Fs3466;
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_15 
        = ((0x10U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_source)) 
           & ((6U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_size)) 
              & ((0xdU > (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_size)) 
                 & ((0U == (0xffffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_address 
                                       >> 0xcU))) | 
                    ((IData)(ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_12) 
                     | (IData)(ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h79ced34c__0))))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_33 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_19) 
           & (IData)(ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_20));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_22 
        = ((IData)(ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_20) 
           | ((7U > (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_size)) 
              & ((0U == (0xffffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_address 
                                    >> 0xcU))) | (IData)(ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h79ced34c__0))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_25 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_19) 
           & ((IData)(ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_20) 
              | ((7U > (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_size)) 
                 & ((0U == (0xffffU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_address 
                                       >> 0xcU))) | (IData)(ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h4ea4ca6f__0)))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                & vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_address)) 
            << 7U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                        | ((~ vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_address) 
                           & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_eq_5))) 
                       << 6U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                      & vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_address)) 
                                  << 5U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                              | ((~ vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_address) 
                                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_eq_4))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((~ vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_address) 
                                                       & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_eq_3))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((~ vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_address) 
                                                           & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask_eq_2))))))))));
    vlSelf->_cp___05Fs3679 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_77)));
    vlSelf->_cp___05Fs3531 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_29)));
    vlSelf->_cp___05Fs3460 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_15)));
    vlSelf->_cp___05Fs3553 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_33)));
    vlSelf->_cp___05Fs3496 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_22)));
    vlSelf->_cp___05Fs3509 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_25)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_27 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask)) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_mask));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_23 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT___atomics_auto_out_a_bits_mask) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__mask));
    vlSelf->_cp___05Fs3542 = vlSelf->_cp___05Fs3531;
    vlSelf->_cp___05Fs3477 = vlSelf->_cp___05Fs3460;
    vlSelf->_cp___05Fs3520 = vlSelf->_cp___05Fs3509;
    vlSelf->_cp___05Fs3528 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_27));
    vlSelf->_cp___05Fs3504 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_23)));
    vlSelf->_cp___05Fs3517 = vlSelf->_cp___05Fs3504;
    vlSelf->_cp___05Fs3539 = vlSelf->_cp___05Fs3504;
    vlSelf->_cp___05Fs3550 = vlSelf->_cp___05Fs3504;
    vlSelf->_cp___05Fs3561 = vlSelf->_cp___05Fs3504;
}
