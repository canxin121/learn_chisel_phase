// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VExampleRocketSystem__Syms.h"


void VExampleRocketSystem___024root__trace_chg_0_sub_1(VExampleRocketSystem___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root__trace_chg_0_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 9982);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<4>/*127:0*/ __Vtemp_21;
    VlWide<8>/*255:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_25;
    // Body
    bufp->chgBit(oldp+0,(vlSelf->_cp___05Fs2891));
    bufp->chgBit(oldp+1,(vlSelf->_mc___05Fs308));
    bufp->chgBit(oldp+2,(vlSelf->_cp___05Fs2894));
    bufp->chgBit(oldp+3,(vlSelf->_mc___05Fs313));
    bufp->chgBit(oldp+4,(vlSelf->_cp___05Fs2877));
    bufp->chgBit(oldp+5,(vlSelf->_cp___05Fs2872));
    bufp->chgBit(oldp+6,(vlSelf->_cp___05Fs2873));
    bufp->chgBit(oldp+7,(vlSelf->_cp___05Fs2883));
    bufp->chgBit(oldp+8,(vlSelf->_cp___05Fs2878));
    bufp->chgBit(oldp+9,(vlSelf->_cp___05Fs2879));
    bufp->chgBit(oldp+10,(vlSelf->_cp___05Fs2889));
    bufp->chgBit(oldp+11,((1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__in_w_deq_q__DOT__full)
                                  ? (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__in_w_deq_q__DOT__ram[2U] 
                                     >> 8U) : (IData)(vlSelf->l2_frontend_bus_axi4_0_w_bits_last)))));
    bufp->chgBit(oldp+12,(vlSelf->_cp___05Fs2884));
    bufp->chgBit(oldp+13,(vlSelf->_cp___05Fs2885));
    bufp->chgBit(oldp+14,((1U & (~ (IData)(vlSelf->_mc___05Fs298)))));
    bufp->chgBit(oldp+15,(vlSelf->_mc___05Fs298));
    bufp->chgBit(oldp+16,(vlSelf->_cp___05Fs2856));
    bufp->chgBit(oldp+17,(vlSelf->_cp___05Fs2857));
    bufp->chgBit(oldp+18,((1U & (~ (IData)(vlSelf->_mc___05Fs299)))));
    bufp->chgBit(oldp+19,(vlSelf->_mc___05Fs299));
    bufp->chgBit(oldp+20,(vlSelf->_cp___05Fs2859));
    bufp->chgBit(oldp+21,(vlSelf->_cp___05Fs2860));
    bufp->chgBit(oldp+22,(vlSelf->_cp___05Fs2854));
    bufp->chgBit(oldp+23,((1U & (~ (IData)(vlSelf->_mc___05Fs300)))));
    bufp->chgBit(oldp+24,(vlSelf->_mc___05Fs300));
    bufp->chgBit(oldp+25,(vlSelf->_cp___05Fs2862));
    bufp->chgBit(oldp+26,(vlSelf->_cp___05Fs2863));
    bufp->chgBit(oldp+27,(vlSelf->_cp___05Fs2855));
    bufp->chgBit(oldp+28,((1U & (~ (IData)(vlSelf->_mc___05Fs301)))));
    bufp->chgBit(oldp+29,(vlSelf->_mc___05Fs301));
    bufp->chgBit(oldp+30,(vlSelf->_cp___05Fs2865));
    bufp->chgBit(oldp+31,(vlSelf->_cp___05Fs2866));
    bufp->chgBit(oldp+32,(vlSelf->_cp___05Fs2268));
    bufp->chgBit(oldp+33,((1U & (~ (IData)(vlSelf->_mc___05Fs263)))));
    bufp->chgBit(oldp+34,(vlSelf->_mc___05Fs257));
    bufp->chgBit(oldp+35,(vlSelf->_mc___05Fs259));
    bufp->chgBit(oldp+36,(vlSelf->_cp___05Fs2384));
    bufp->chgBit(oldp+37,(vlSelf->_cp___05Fs2497));
    bufp->chgBit(oldp+38,(vlSelf->_mc___05Fs262));
    bufp->chgBit(oldp+39,(vlSelf->_mc___05Fs264));
    bufp->chgBit(oldp+40,(vlSelf->_cp___05Fs2194));
    bufp->chgBit(oldp+41,(vlSelf->_cp___05Fs2471));
    bufp->chgBit(oldp+42,(vlSelf->_mc___05Fs263));
    bufp->chgBit(oldp+43,(vlSelf->_cp___05Fs2458));
    bufp->chgBit(oldp+44,(vlSelf->_cp___05Fs2540));
    bufp->chgBit(oldp+45,(vlSelf->_mc___05Fs279));
    bufp->chgBit(oldp+46,(vlSelf->_mc___05Fs281));
    bufp->chgBit(oldp+47,(vlSelf->_mc___05Fs270));
    bufp->chgBit(oldp+48,(vlSelf->_mc___05Fs272));
    bufp->chgBit(oldp+49,(vlSelf->_cp___05Fs2774));
    bufp->chgBit(oldp+50,(vlSelf->_mc___05Fs275));
    bufp->chgBit(oldp+51,(vlSelf->_rs___05Fs0));
    bufp->chgBit(oldp+52,(vlSelf->_rs___05Fs3));
    bufp->chgCData(oldp+53,(vlSelf->_rs___05Fs6),2);
    bufp->chgBit(oldp+54,(vlSelf->_cp___05Fs10034));
    bufp->chgBit(oldp+55,((1U & (IData)(vlSelf->interrupts))));
    bufp->chgBit(oldp+56,((1U & ((IData)(vlSelf->interrupts) 
                                 >> 1U))));
    bufp->chgBit(oldp+57,(vlSelf->_cp___05Fs5685));
    bufp->chgBit(oldp+58,(vlSelf->_mc___05Fs684));
    bufp->chgBit(oldp+59,(vlSelf->_cp___05Fs5686));
    bufp->chgBit(oldp+60,(vlSelf->_mc___05Fs686));
    bufp->chgBit(oldp+61,(vlSelf->_cp___05Fs5687));
    bufp->chgBit(oldp+62,(vlSelf->_cp___05Fs5688));
    bufp->chgCData(oldp+63,((0xfU & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                      ? vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[2U]
                                      : (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_size)))),4);
    bufp->chgCData(oldp+64,((0x7fU & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                       ? ((vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[2U] 
                                           << 0x1cU) 
                                          | (vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[2U] 
                                             >> 4U))
                                       : (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_bits_source)))),7);
    bufp->chgBit(oldp+65,(((IData)(vlSelf->mem_axi4_0_aw_ready) 
                           & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT____VdfgTmp_h34077eac__0))));
    bufp->chgBit(oldp+66,(vlSelf->_cp___05Fs6338));
    bufp->chgCData(oldp+67,((0xfU & (IData)(((((QData)((IData)(
                                                               (0xfU 
                                                                & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_31__DOT___ram_ext_R0_data)))) 
                                               << 0x3cU) 
                                              | (((QData)((IData)(
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
                                             >> (0x3fU 
                                                 & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->mem_axi4_0_b_bits_id), 2U)))))),4);
    __Vtemp_1[0U] = (IData)((((QData)((IData)((0x7fU 
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
    __Vtemp_1[1U] = ((0x80000000U & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_25__DOT___ram_ext_R0_data) 
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
    __Vtemp_7[0U] = __Vtemp_1[0U];
    __Vtemp_7[1U] = __Vtemp_1[1U];
    __Vtemp_7[2U] = ((0xf8000000U & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_29__DOT___ram_ext_R0_data) 
                                     << 0x17U)) | (
                                                   (0x7f00000U 
                                                    & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_28__DOT___ram_ext_R0_data) 
                                                       << 0x10U)) 
                                                   | ((0xfe000U 
                                                       & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_27__DOT___ram_ext_R0_data) 
                                                          << 9U)) 
                                                      | ((0x1fc0U 
                                                          & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_26__DOT___ram_ext_R0_data) 
                                                             << 2U)) 
                                                         | (0x3fU 
                                                            & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_25__DOT___ram_ext_R0_data) 
                                                               >> 5U))))));
    __Vtemp_7[3U] = ((0xfe00U & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_31__DOT___ram_ext_R0_data) 
                                 << 5U)) | ((0x1fcU 
                                             & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_30__DOT___ram_ext_R0_data) 
                                                >> 2U)) 
                                            | (3U & 
                                               ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_29__DOT___ram_ext_R0_data) 
                                                >> 9U))));
    bufp->chgCData(oldp+68,(((0x6fU >= (0x7fU & ((IData)(7U) 
                                                 * (IData)(vlSelf->mem_axi4_0_b_bits_id))))
                              ? (0x7fU & (((0U == (0x1fU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->mem_axi4_0_b_bits_id))))
                                            ? 0U : 
                                           (__Vtemp_7[
                                            (((IData)(6U) 
                                              + (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSelf->mem_axi4_0_b_bits_id)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->mem_axi4_0_b_bits_id)))))) 
                                          | (__Vtemp_7[
                                             (3U & 
                                              (((IData)(7U) 
                                                * (IData)(vlSelf->mem_axi4_0_b_bits_id)) 
                                               >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSelf->mem_axi4_0_b_bits_id))))))
                              : 0U)),7);
    bufp->chgCData(oldp+69,(((0x2fU >= (0x3fU & ((IData)(3U) 
                                                 * (IData)(vlSelf->mem_axi4_0_b_bits_id))))
                              ? (7U & (IData)(((((QData)((IData)(
                                                                 (7U 
                                                                  & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_31__DOT___ram_ext_R0_data) 
                                                                     >> 0xbU)))) 
                                                 << 0x2dU) 
                                                | (((QData)((IData)(
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
                                               >> (0x3fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->mem_axi4_0_b_bits_id))))))
                              : 0U)),3);
    bufp->chgBit(oldp+70,(((IData)(vlSelf->mem_axi4_0_ar_ready) 
                           & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT____VdfgTmp_hbbc06fed__0))));
    bufp->chgCData(oldp+71,((0xfU & (IData)(((((QData)((IData)(
                                                               (0xfU 
                                                                & (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_15__DOT___ram_ext_R0_data)))) 
                                               << 0x3cU) 
                                              | (((QData)((IData)(
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
                                             >> (0x3fU 
                                                 & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->mem_axi4_0_r_bits_id), 2U)))))),4);
    __Vtemp_8[0U] = (IData)((((QData)((IData)((0x7fU 
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
    __Vtemp_8[1U] = ((0x80000000U & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_9__DOT___ram_ext_R0_data) 
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
    __Vtemp_14[0U] = __Vtemp_8[0U];
    __Vtemp_14[1U] = __Vtemp_8[1U];
    __Vtemp_14[2U] = ((0xf8000000U & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_13__DOT___ram_ext_R0_data) 
                                      << 0x17U)) | 
                      ((0x7f00000U & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_12__DOT___ram_ext_R0_data) 
                                      << 0x10U)) | 
                       ((0xfe000U & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_11__DOT___ram_ext_R0_data) 
                                     << 9U)) | ((0x1fc0U 
                                                 & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_10__DOT___ram_ext_R0_data) 
                                                    << 2U)) 
                                                | (0x3fU 
                                                   & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_9__DOT___ram_ext_R0_data) 
                                                      >> 5U))))));
    __Vtemp_14[3U] = ((0xfe00U & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_15__DOT___ram_ext_R0_data) 
                                  << 5U)) | ((0x1fcU 
                                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_14__DOT___ram_ext_R0_data) 
                                                 >> 2U)) 
                                             | (3U 
                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_13__DOT___ram_ext_R0_data) 
                                                   >> 9U))));
    bufp->chgCData(oldp+72,(((0x6fU >= (0x7fU & ((IData)(7U) 
                                                 * (IData)(vlSelf->mem_axi4_0_r_bits_id))))
                              ? (0x7fU & (((0U == (0x1fU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->mem_axi4_0_r_bits_id))))
                                            ? 0U : 
                                           (__Vtemp_14[
                                            (((IData)(6U) 
                                              + (0x7fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSelf->mem_axi4_0_r_bits_id)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->mem_axi4_0_r_bits_id)))))) 
                                          | (__Vtemp_14[
                                             (3U & 
                                              (((IData)(7U) 
                                                * (IData)(vlSelf->mem_axi4_0_r_bits_id)) 
                                               >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSelf->mem_axi4_0_r_bits_id))))))
                              : 0U)),7);
    bufp->chgCData(oldp+73,(((0x2fU >= (0x3fU & ((IData)(3U) 
                                                 * (IData)(vlSelf->mem_axi4_0_r_bits_id))))
                              ? (7U & (IData)(((((QData)((IData)(
                                                                 (7U 
                                                                  & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_15__DOT___ram_ext_R0_data) 
                                                                     >> 0xbU)))) 
                                                 << 0x2dU) 
                                                | (((QData)((IData)(
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
                                               >> (0x3fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->mem_axi4_0_r_bits_id))))))
                              : 0U)),3);
    bufp->chgCData(oldp+74,(((((0x2fU >= (0x3fU & ((IData)(3U) 
                                                   * (IData)(vlSelf->mem_axi4_0_b_bits_id))))
                                ? (7U & (IData)(((((QData)((IData)(
                                                                   (7U 
                                                                    & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_31__DOT___ram_ext_R0_data) 
                                                                       >> 0xbU)))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
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
                                                 >> 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->mem_axi4_0_b_bits_id))))))
                                : 0U) << 4U) | (IData)(vlSelf->mem_axi4_0_b_bits_id))),7);
    bufp->chgCData(oldp+75,(((((0x2fU >= (0x3fU & ((IData)(3U) 
                                                   * (IData)(vlSelf->mem_axi4_0_r_bits_id))))
                                ? (7U & (IData)(((((QData)((IData)(
                                                                   (7U 
                                                                    & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_15__DOT___ram_ext_R0_data) 
                                                                       >> 0xbU)))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
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
                                                 >> 
                                                 (0x3fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->mem_axi4_0_r_bits_id))))))
                                : 0U) << 4U) | (IData)(vlSelf->mem_axi4_0_r_bits_id))),7);
    bufp->chgBit(oldp+76,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                           & (0U == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+77,(((IData)(vlSelf->_cp___05Fs6347) 
                           & ((0U == (IData)(vlSelf->mem_axi4_0_r_bits_id)) 
                              & (IData)(vlSelf->mem_axi4_0_r_bits_last)))));
    bufp->chgBit(oldp+78,((1U & (~ (IData)(vlSelf->_mc___05Fs700)))));
    bufp->chgBit(oldp+79,(vlSelf->_mc___05Fs700));
    bufp->chgBit(oldp+80,(vlSelf->_cp___05Fs5962));
    bufp->chgBit(oldp+81,(vlSelf->_cp___05Fs5963));
    bufp->chgBit(oldp+82,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                           & (1U == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+83,(((IData)(vlSelf->_cp___05Fs6347) 
                           & ((1U == (IData)(vlSelf->mem_axi4_0_r_bits_id)) 
                              & (IData)(vlSelf->mem_axi4_0_r_bits_last)))));
    bufp->chgBit(oldp+84,((1U & (~ (IData)(vlSelf->_mc___05Fs701)))));
    bufp->chgBit(oldp+85,(vlSelf->_mc___05Fs701));
    bufp->chgBit(oldp+86,(vlSelf->_cp___05Fs5965));
    bufp->chgBit(oldp+87,(vlSelf->_cp___05Fs5966));
    bufp->chgBit(oldp+88,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                           & (0xaU == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+89,(((IData)(vlSelf->_cp___05Fs6347) 
                           & ((0xaU == (IData)(vlSelf->mem_axi4_0_r_bits_id)) 
                              & (IData)(vlSelf->mem_axi4_0_r_bits_last)))));
    bufp->chgBit(oldp+90,((1U & (~ (IData)(vlSelf->_mc___05Fs710)))));
    bufp->chgBit(oldp+91,(vlSelf->_mc___05Fs710));
    bufp->chgBit(oldp+92,(vlSelf->_cp___05Fs5992));
    bufp->chgBit(oldp+93,(vlSelf->_cp___05Fs5993));
    bufp->chgBit(oldp+94,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                           & (0xbU == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+95,(((IData)(vlSelf->_cp___05Fs6347) 
                           & ((0xbU == (IData)(vlSelf->mem_axi4_0_r_bits_id)) 
                              & (IData)(vlSelf->mem_axi4_0_r_bits_last)))));
    bufp->chgBit(oldp+96,((1U & (~ (IData)(vlSelf->_mc___05Fs711)))));
    bufp->chgBit(oldp+97,(vlSelf->_mc___05Fs711));
    bufp->chgBit(oldp+98,(vlSelf->_cp___05Fs5995));
    bufp->chgBit(oldp+99,(vlSelf->_cp___05Fs5996));
    bufp->chgBit(oldp+100,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                            & (0xcU == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+101,(((IData)(vlSelf->_cp___05Fs6347) 
                            & ((0xcU == (IData)(vlSelf->mem_axi4_0_r_bits_id)) 
                               & (IData)(vlSelf->mem_axi4_0_r_bits_last)))));
    bufp->chgBit(oldp+102,((1U & (~ (IData)(vlSelf->_mc___05Fs712)))));
    bufp->chgBit(oldp+103,(vlSelf->_mc___05Fs712));
    bufp->chgBit(oldp+104,(vlSelf->_cp___05Fs5998));
    bufp->chgBit(oldp+105,(vlSelf->_cp___05Fs5999));
    bufp->chgBit(oldp+106,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                            & (0xdU == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+107,(((IData)(vlSelf->_cp___05Fs6347) 
                            & ((0xdU == (IData)(vlSelf->mem_axi4_0_r_bits_id)) 
                               & (IData)(vlSelf->mem_axi4_0_r_bits_last)))));
    bufp->chgBit(oldp+108,((1U & (~ (IData)(vlSelf->_mc___05Fs713)))));
    bufp->chgBit(oldp+109,(vlSelf->_mc___05Fs713));
    bufp->chgBit(oldp+110,(vlSelf->_cp___05Fs6001));
    bufp->chgBit(oldp+111,(vlSelf->_cp___05Fs6002));
    bufp->chgBit(oldp+112,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                            & (0xeU == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+113,(((IData)(vlSelf->_cp___05Fs6347) 
                            & ((0xeU == (IData)(vlSelf->mem_axi4_0_r_bits_id)) 
                               & (IData)(vlSelf->mem_axi4_0_r_bits_last)))));
    bufp->chgBit(oldp+114,((1U & (~ (IData)(vlSelf->_mc___05Fs714)))));
    bufp->chgBit(oldp+115,(vlSelf->_mc___05Fs714));
    bufp->chgBit(oldp+116,(vlSelf->_cp___05Fs6004));
    bufp->chgBit(oldp+117,(vlSelf->_cp___05Fs6005));
    bufp->chgBit(oldp+118,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                            & (0xfU == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+119,(((IData)(vlSelf->_cp___05Fs6347) 
                            & ((0xfU == (IData)(vlSelf->mem_axi4_0_r_bits_id)) 
                               & (IData)(vlSelf->mem_axi4_0_r_bits_last)))));
    bufp->chgBit(oldp+120,((1U & (~ (IData)(vlSelf->_mc___05Fs715)))));
    bufp->chgBit(oldp+121,(vlSelf->_mc___05Fs715));
    bufp->chgBit(oldp+122,(vlSelf->_cp___05Fs6007));
    bufp->chgBit(oldp+123,(vlSelf->_cp___05Fs6008));
    bufp->chgBit(oldp+124,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                            & (0U == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+125,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_13) 
                            & (0U == (IData)(vlSelf->mem_axi4_0_b_bits_id)))));
    bufp->chgBit(oldp+126,((1U & (~ (IData)(vlSelf->_mc___05Fs716)))));
    bufp->chgBit(oldp+127,(vlSelf->_mc___05Fs716));
    bufp->chgBit(oldp+128,(vlSelf->_cp___05Fs6010));
    bufp->chgBit(oldp+129,(vlSelf->_cp___05Fs6011));
    bufp->chgBit(oldp+130,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                            & (1U == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+131,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_13) 
                            & (1U == (IData)(vlSelf->mem_axi4_0_b_bits_id)))));
    bufp->chgBit(oldp+132,((1U & (~ (IData)(vlSelf->_mc___05Fs717)))));
    bufp->chgBit(oldp+133,(vlSelf->_mc___05Fs717));
    bufp->chgBit(oldp+134,(vlSelf->_cp___05Fs6013));
    bufp->chgBit(oldp+135,(vlSelf->_cp___05Fs6014));
    bufp->chgBit(oldp+136,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                            & (2U == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+137,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_13) 
                            & (2U == (IData)(vlSelf->mem_axi4_0_b_bits_id)))));
    bufp->chgBit(oldp+138,((1U & (~ (IData)(vlSelf->_mc___05Fs718)))));
    bufp->chgBit(oldp+139,(vlSelf->_mc___05Fs718));
    bufp->chgBit(oldp+140,(vlSelf->_cp___05Fs6016));
    bufp->chgBit(oldp+141,(vlSelf->_cp___05Fs6017));
    bufp->chgBit(oldp+142,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                            & (3U == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+143,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_13) 
                            & (3U == (IData)(vlSelf->mem_axi4_0_b_bits_id)))));
    bufp->chgBit(oldp+144,((1U & (~ (IData)(vlSelf->_mc___05Fs719)))));
    bufp->chgBit(oldp+145,(vlSelf->_mc___05Fs719));
    bufp->chgBit(oldp+146,(vlSelf->_cp___05Fs6019));
    bufp->chgBit(oldp+147,(vlSelf->_cp___05Fs6020));
    bufp->chgBit(oldp+148,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                            & (2U == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+149,(((IData)(vlSelf->_cp___05Fs6347) 
                            & ((2U == (IData)(vlSelf->mem_axi4_0_r_bits_id)) 
                               & (IData)(vlSelf->mem_axi4_0_r_bits_last)))));
    bufp->chgBit(oldp+150,((1U & (~ (IData)(vlSelf->_mc___05Fs702)))));
    bufp->chgBit(oldp+151,(vlSelf->_mc___05Fs702));
    bufp->chgBit(oldp+152,(vlSelf->_cp___05Fs5968));
    bufp->chgBit(oldp+153,(vlSelf->_cp___05Fs5969));
    bufp->chgBit(oldp+154,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                            & (4U == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+155,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_13) 
                            & (4U == (IData)(vlSelf->mem_axi4_0_b_bits_id)))));
    bufp->chgBit(oldp+156,((1U & (~ (IData)(vlSelf->_mc___05Fs720)))));
    bufp->chgBit(oldp+157,(vlSelf->_mc___05Fs720));
    bufp->chgBit(oldp+158,(vlSelf->_cp___05Fs6022));
    bufp->chgBit(oldp+159,(vlSelf->_cp___05Fs6023));
    bufp->chgBit(oldp+160,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                            & (5U == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+161,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_13) 
                            & (5U == (IData)(vlSelf->mem_axi4_0_b_bits_id)))));
    bufp->chgBit(oldp+162,((1U & (~ (IData)(vlSelf->_mc___05Fs721)))));
    bufp->chgBit(oldp+163,(vlSelf->_mc___05Fs721));
    bufp->chgBit(oldp+164,(vlSelf->_cp___05Fs6025));
    bufp->chgBit(oldp+165,(vlSelf->_cp___05Fs6026));
    bufp->chgBit(oldp+166,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                            & (6U == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+167,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_13) 
                            & (6U == (IData)(vlSelf->mem_axi4_0_b_bits_id)))));
    bufp->chgBit(oldp+168,((1U & (~ (IData)(vlSelf->_mc___05Fs722)))));
    bufp->chgBit(oldp+169,(vlSelf->_mc___05Fs722));
    bufp->chgBit(oldp+170,(vlSelf->_cp___05Fs6028));
    bufp->chgBit(oldp+171,(vlSelf->_cp___05Fs6029));
    bufp->chgBit(oldp+172,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                            & (7U == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+173,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_13) 
                            & (7U == (IData)(vlSelf->mem_axi4_0_b_bits_id)))));
    bufp->chgBit(oldp+174,((1U & (~ (IData)(vlSelf->_mc___05Fs723)))));
    bufp->chgBit(oldp+175,(vlSelf->_mc___05Fs723));
    bufp->chgBit(oldp+176,(vlSelf->_cp___05Fs6031));
    bufp->chgBit(oldp+177,(vlSelf->_cp___05Fs6032));
    bufp->chgBit(oldp+178,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                            & (8U == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+179,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_13) 
                            & (8U == (IData)(vlSelf->mem_axi4_0_b_bits_id)))));
    bufp->chgBit(oldp+180,((1U & (~ (IData)(vlSelf->_mc___05Fs724)))));
    bufp->chgBit(oldp+181,(vlSelf->_mc___05Fs724));
    bufp->chgBit(oldp+182,(vlSelf->_cp___05Fs6034));
    bufp->chgBit(oldp+183,(vlSelf->_cp___05Fs6035));
    bufp->chgBit(oldp+184,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                            & (9U == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+185,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_13) 
                            & (9U == (IData)(vlSelf->mem_axi4_0_b_bits_id)))));
    bufp->chgBit(oldp+186,((1U & (~ (IData)(vlSelf->_mc___05Fs725)))));
    bufp->chgBit(oldp+187,(vlSelf->_mc___05Fs725));
    bufp->chgBit(oldp+188,(vlSelf->_cp___05Fs6037));
    bufp->chgBit(oldp+189,(vlSelf->_cp___05Fs6038));
    bufp->chgBit(oldp+190,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                            & (0xaU == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+191,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_13) 
                            & (0xaU == (IData)(vlSelf->mem_axi4_0_b_bits_id)))));
    bufp->chgBit(oldp+192,((1U & (~ (IData)(vlSelf->_mc___05Fs726)))));
    bufp->chgBit(oldp+193,(vlSelf->_mc___05Fs726));
    bufp->chgBit(oldp+194,(vlSelf->_cp___05Fs6040));
    bufp->chgBit(oldp+195,(vlSelf->_cp___05Fs6041));
    bufp->chgBit(oldp+196,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                            & (0xbU == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+197,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_13) 
                            & (0xbU == (IData)(vlSelf->mem_axi4_0_b_bits_id)))));
    bufp->chgBit(oldp+198,((1U & (~ (IData)(vlSelf->_mc___05Fs727)))));
    bufp->chgBit(oldp+199,(vlSelf->_mc___05Fs727));
    bufp->chgBit(oldp+200,(vlSelf->_cp___05Fs6043));
    bufp->chgBit(oldp+201,(vlSelf->_cp___05Fs6044));
    bufp->chgBit(oldp+202,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                            & (0xcU == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+203,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_13) 
                            & (0xcU == (IData)(vlSelf->mem_axi4_0_b_bits_id)))));
    bufp->chgBit(oldp+204,((1U & (~ (IData)(vlSelf->_mc___05Fs728)))));
    bufp->chgBit(oldp+205,(vlSelf->_mc___05Fs728));
    bufp->chgBit(oldp+206,(vlSelf->_cp___05Fs6046));
    bufp->chgBit(oldp+207,(vlSelf->_cp___05Fs6047));
    bufp->chgBit(oldp+208,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                            & (0xdU == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+209,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_13) 
                            & (0xdU == (IData)(vlSelf->mem_axi4_0_b_bits_id)))));
    bufp->chgBit(oldp+210,((1U & (~ (IData)(vlSelf->_mc___05Fs729)))));
    bufp->chgBit(oldp+211,(vlSelf->_mc___05Fs729));
    bufp->chgBit(oldp+212,(vlSelf->_cp___05Fs6049));
    bufp->chgBit(oldp+213,(vlSelf->_cp___05Fs6050));
    bufp->chgBit(oldp+214,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                            & (3U == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+215,(((IData)(vlSelf->_cp___05Fs6347) 
                            & ((3U == (IData)(vlSelf->mem_axi4_0_r_bits_id)) 
                               & (IData)(vlSelf->mem_axi4_0_r_bits_last)))));
    bufp->chgBit(oldp+216,((1U & (~ (IData)(vlSelf->_mc___05Fs703)))));
    bufp->chgBit(oldp+217,(vlSelf->_mc___05Fs703));
    bufp->chgBit(oldp+218,(vlSelf->_cp___05Fs5971));
    bufp->chgBit(oldp+219,(vlSelf->_cp___05Fs5972));
    bufp->chgBit(oldp+220,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                            & (0xeU == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+221,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_13) 
                            & (0xeU == (IData)(vlSelf->mem_axi4_0_b_bits_id)))));
    bufp->chgBit(oldp+222,((1U & (~ (IData)(vlSelf->_mc___05Fs730)))));
    bufp->chgBit(oldp+223,(vlSelf->_mc___05Fs730));
    bufp->chgBit(oldp+224,(vlSelf->_cp___05Fs6052));
    bufp->chgBit(oldp+225,(vlSelf->_cp___05Fs6053));
    bufp->chgBit(oldp+226,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_14) 
                            & (0xfU == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+227,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_13) 
                            & (0xfU == (IData)(vlSelf->mem_axi4_0_b_bits_id)))));
    bufp->chgBit(oldp+228,((1U & (~ (IData)(vlSelf->_mc___05Fs731)))));
    bufp->chgBit(oldp+229,(vlSelf->_mc___05Fs731));
    bufp->chgBit(oldp+230,(vlSelf->_cp___05Fs6055));
    bufp->chgBit(oldp+231,(vlSelf->_cp___05Fs6056));
    bufp->chgBit(oldp+232,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                            & (4U == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+233,(((IData)(vlSelf->_cp___05Fs6347) 
                            & ((4U == (IData)(vlSelf->mem_axi4_0_r_bits_id)) 
                               & (IData)(vlSelf->mem_axi4_0_r_bits_last)))));
    bufp->chgBit(oldp+234,((1U & (~ (IData)(vlSelf->_mc___05Fs704)))));
    bufp->chgBit(oldp+235,(vlSelf->_mc___05Fs704));
    bufp->chgBit(oldp+236,(vlSelf->_cp___05Fs5974));
    bufp->chgBit(oldp+237,(vlSelf->_cp___05Fs5975));
    bufp->chgBit(oldp+238,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                            & (5U == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+239,(((IData)(vlSelf->_cp___05Fs6347) 
                            & ((5U == (IData)(vlSelf->mem_axi4_0_r_bits_id)) 
                               & (IData)(vlSelf->mem_axi4_0_r_bits_last)))));
    bufp->chgBit(oldp+240,((1U & (~ (IData)(vlSelf->_mc___05Fs705)))));
    bufp->chgBit(oldp+241,(vlSelf->_mc___05Fs705));
    bufp->chgBit(oldp+242,(vlSelf->_cp___05Fs5977));
    bufp->chgBit(oldp+243,(vlSelf->_cp___05Fs5978));
    bufp->chgBit(oldp+244,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                            & (6U == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+245,(((IData)(vlSelf->_cp___05Fs6347) 
                            & ((6U == (IData)(vlSelf->mem_axi4_0_r_bits_id)) 
                               & (IData)(vlSelf->mem_axi4_0_r_bits_last)))));
    bufp->chgBit(oldp+246,((1U & (~ (IData)(vlSelf->_mc___05Fs706)))));
    bufp->chgBit(oldp+247,(vlSelf->_mc___05Fs706));
    bufp->chgBit(oldp+248,(vlSelf->_cp___05Fs5980));
    bufp->chgBit(oldp+249,(vlSelf->_cp___05Fs5981));
    bufp->chgBit(oldp+250,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                            & (7U == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+251,(((IData)(vlSelf->_cp___05Fs6347) 
                            & ((7U == (IData)(vlSelf->mem_axi4_0_r_bits_id)) 
                               & (IData)(vlSelf->mem_axi4_0_r_bits_last)))));
    bufp->chgBit(oldp+252,((1U & (~ (IData)(vlSelf->_mc___05Fs707)))));
    bufp->chgBit(oldp+253,(vlSelf->_mc___05Fs707));
    bufp->chgBit(oldp+254,(vlSelf->_cp___05Fs5983));
    bufp->chgBit(oldp+255,(vlSelf->_cp___05Fs5984));
    bufp->chgBit(oldp+256,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                            & (8U == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+257,(((IData)(vlSelf->_cp___05Fs6347) 
                            & ((8U == (IData)(vlSelf->mem_axi4_0_r_bits_id)) 
                               & (IData)(vlSelf->mem_axi4_0_r_bits_last)))));
    bufp->chgBit(oldp+258,((1U & (~ (IData)(vlSelf->_mc___05Fs708)))));
    bufp->chgBit(oldp+259,(vlSelf->_mc___05Fs708));
    bufp->chgBit(oldp+260,(vlSelf->_cp___05Fs5986));
    bufp->chgBit(oldp+261,(vlSelf->_cp___05Fs5987));
    bufp->chgBit(oldp+262,(((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___GEN_6) 
                            & (9U == (IData)(vlSelf->mem_axi4_0_aw_bits_id)))));
    bufp->chgBit(oldp+263,(((IData)(vlSelf->_cp___05Fs6347) 
                            & ((9U == (IData)(vlSelf->mem_axi4_0_r_bits_id)) 
                               & (IData)(vlSelf->mem_axi4_0_r_bits_last)))));
    bufp->chgBit(oldp+264,((1U & (~ (IData)(vlSelf->_mc___05Fs709)))));
    bufp->chgBit(oldp+265,(vlSelf->_mc___05Fs709));
    bufp->chgBit(oldp+266,(vlSelf->_cp___05Fs5989));
    bufp->chgBit(oldp+267,(vlSelf->_cp___05Fs5990));
    bufp->chgBit(oldp+268,(vlSelf->_mc___05Fs746));
    bufp->chgBit(oldp+269,(vlSelf->_cp___05Fs6342));
    bufp->chgBit(oldp+270,(vlSelf->_mc___05Fs682));
    bufp->chgBit(oldp+271,(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_denied));
    bufp->chgBit(oldp+272,((1U & ((~ (IData)(vlSelf->_mc___05Fs682)) 
                                  | (IData)(vlSelf->mem_axi4_0_r_bits_last)))));
    bufp->chgBit(oldp+273,(vlSelf->_cp___05Fs6355));
    bufp->chgBit(oldp+274,(vlSelf->_cp___05Fs6360));
    bufp->chgBit(oldp+275,(vlSelf->_cp___05Fs6365));
    bufp->chgBit(oldp+276,(vlSelf->_cp___05Fs6370));
    bufp->chgBit(oldp+277,(vlSelf->_cp___05Fs6375));
    bufp->chgBit(oldp+278,(vlSelf->_cp___05Fs6380));
    bufp->chgBit(oldp+279,(vlSelf->_cp___05Fs6385));
    bufp->chgBit(oldp+280,(vlSelf->_cp___05Fs6390));
    bufp->chgBit(oldp+281,(vlSelf->_cp___05Fs6395));
    bufp->chgBit(oldp+282,(vlSelf->_cp___05Fs6400));
    bufp->chgBit(oldp+283,(vlSelf->_cp___05Fs6405));
    bufp->chgBit(oldp+284,(vlSelf->_cp___05Fs6410));
    bufp->chgBit(oldp+285,(vlSelf->_cp___05Fs6415));
    bufp->chgBit(oldp+286,(vlSelf->_cp___05Fs6420));
    bufp->chgBit(oldp+287,(vlSelf->_cp___05Fs6425));
    bufp->chgBit(oldp+288,(vlSelf->_cp___05Fs6430));
    bufp->chgBit(oldp+289,(vlSelf->_cp___05Fs6435));
    bufp->chgBit(oldp+290,(vlSelf->_cp___05Fs6440));
    bufp->chgBit(oldp+291,(vlSelf->_cp___05Fs6445));
    bufp->chgBit(oldp+292,(vlSelf->_cp___05Fs6450));
    bufp->chgBit(oldp+293,(vlSelf->_cp___05Fs6455));
    bufp->chgBit(oldp+294,(vlSelf->_cp___05Fs6460));
    bufp->chgBit(oldp+295,(vlSelf->_cp___05Fs6465));
    bufp->chgBit(oldp+296,(vlSelf->_cp___05Fs6470));
    bufp->chgBit(oldp+297,(vlSelf->_cp___05Fs6475));
    bufp->chgBit(oldp+298,(vlSelf->_cp___05Fs6480));
    bufp->chgBit(oldp+299,(vlSelf->_cp___05Fs6485));
    bufp->chgBit(oldp+300,(vlSelf->_cp___05Fs6490));
    bufp->chgBit(oldp+301,(vlSelf->_cp___05Fs6495));
    bufp->chgBit(oldp+302,(vlSelf->_cp___05Fs6500));
    bufp->chgBit(oldp+303,(vlSelf->_cp___05Fs6505));
    bufp->chgBit(oldp+304,(vlSelf->_cp___05Fs6510));
    bufp->chgBit(oldp+305,(vlSelf->_cp___05Fs6515));
    bufp->chgBit(oldp+306,(vlSelf->_cp___05Fs6520));
    bufp->chgBit(oldp+307,(vlSelf->_cp___05Fs6525));
    bufp->chgBit(oldp+308,(vlSelf->_cp___05Fs6530));
    bufp->chgBit(oldp+309,(vlSelf->_cp___05Fs6535));
    bufp->chgBit(oldp+310,(vlSelf->_cp___05Fs6540));
    bufp->chgBit(oldp+311,(vlSelf->_cp___05Fs6545));
    bufp->chgBit(oldp+312,(vlSelf->_cp___05Fs6550));
    bufp->chgBit(oldp+313,(vlSelf->_cp___05Fs6555));
    bufp->chgBit(oldp+314,(vlSelf->_cp___05Fs6560));
    bufp->chgBit(oldp+315,(vlSelf->_cp___05Fs6565));
    bufp->chgBit(oldp+316,(vlSelf->_cp___05Fs6570));
    bufp->chgBit(oldp+317,(vlSelf->_cp___05Fs6575));
    bufp->chgBit(oldp+318,(vlSelf->_cp___05Fs6580));
    bufp->chgBit(oldp+319,(vlSelf->_cp___05Fs6585));
    bufp->chgBit(oldp+320,(vlSelf->_cp___05Fs6590));
    bufp->chgBit(oldp+321,(vlSelf->_cp___05Fs6595));
    bufp->chgBit(oldp+322,(vlSelf->_cp___05Fs6600));
    bufp->chgBit(oldp+323,(vlSelf->_cp___05Fs6605));
    bufp->chgBit(oldp+324,(vlSelf->_cp___05Fs6610));
    bufp->chgBit(oldp+325,(vlSelf->_cp___05Fs6615));
    bufp->chgBit(oldp+326,(vlSelf->_cp___05Fs6620));
    bufp->chgBit(oldp+327,(vlSelf->_cp___05Fs6625));
    bufp->chgBit(oldp+328,(vlSelf->_cp___05Fs6630));
    bufp->chgBit(oldp+329,(vlSelf->_cp___05Fs6635));
    bufp->chgBit(oldp+330,(vlSelf->_cp___05Fs6640));
    bufp->chgBit(oldp+331,(vlSelf->_cp___05Fs6645));
    bufp->chgBit(oldp+332,(vlSelf->_cp___05Fs6650));
    bufp->chgBit(oldp+333,(vlSelf->_cp___05Fs6655));
    bufp->chgBit(oldp+334,(vlSelf->_cp___05Fs6660));
    bufp->chgBit(oldp+335,(vlSelf->_cp___05Fs6665));
    bufp->chgBit(oldp+336,(vlSelf->_cp___05Fs6670));
    bufp->chgBit(oldp+337,(vlSelf->_cp___05Fs6675));
    bufp->chgBit(oldp+338,(vlSelf->_cp___05Fs6680));
    bufp->chgBit(oldp+339,(vlSelf->_cp___05Fs6685));
    bufp->chgBit(oldp+340,(vlSelf->_cp___05Fs6690));
    bufp->chgBit(oldp+341,(vlSelf->_cp___05Fs6695));
    bufp->chgBit(oldp+342,(vlSelf->_cp___05Fs6700));
    bufp->chgBit(oldp+343,(vlSelf->_cp___05Fs6705));
    bufp->chgBit(oldp+344,(vlSelf->_cp___05Fs6710));
    bufp->chgBit(oldp+345,(vlSelf->_cp___05Fs6715));
    bufp->chgBit(oldp+346,(vlSelf->_cp___05Fs6720));
    bufp->chgBit(oldp+347,(vlSelf->_cp___05Fs6725));
    bufp->chgBit(oldp+348,(vlSelf->_cp___05Fs6730));
    bufp->chgBit(oldp+349,(vlSelf->_cp___05Fs6735));
    bufp->chgBit(oldp+350,(vlSelf->_cp___05Fs6740));
    bufp->chgBit(oldp+351,(vlSelf->_cp___05Fs6745));
    bufp->chgBit(oldp+352,(vlSelf->_cp___05Fs6750));
    bufp->chgBit(oldp+353,(vlSelf->_cp___05Fs6755));
    bufp->chgBit(oldp+354,(vlSelf->_cp___05Fs6760));
    bufp->chgBit(oldp+355,(vlSelf->_cp___05Fs6765));
    bufp->chgBit(oldp+356,(vlSelf->_cp___05Fs6770));
    bufp->chgBit(oldp+357,(vlSelf->_cp___05Fs6775));
    bufp->chgBit(oldp+358,(vlSelf->_cp___05Fs6780));
    bufp->chgBit(oldp+359,(vlSelf->_cp___05Fs6785));
    bufp->chgBit(oldp+360,(vlSelf->_cp___05Fs6790));
    bufp->chgBit(oldp+361,(vlSelf->_cp___05Fs6795));
    bufp->chgBit(oldp+362,(vlSelf->_cp___05Fs6800));
    bufp->chgBit(oldp+363,(vlSelf->_cp___05Fs6805));
    bufp->chgBit(oldp+364,(vlSelf->_cp___05Fs6810));
    bufp->chgBit(oldp+365,(vlSelf->_cp___05Fs6815));
    bufp->chgBit(oldp+366,(vlSelf->_cp___05Fs6820));
    bufp->chgBit(oldp+367,(vlSelf->_cp___05Fs6825));
    bufp->chgBit(oldp+368,(vlSelf->_cp___05Fs6830));
    bufp->chgBit(oldp+369,(vlSelf->_cp___05Fs6835));
    bufp->chgBit(oldp+370,(vlSelf->_cp___05Fs6840));
    bufp->chgBit(oldp+371,(vlSelf->_cp___05Fs6845));
    bufp->chgBit(oldp+372,(vlSelf->_cp___05Fs6850));
    bufp->chgBit(oldp+373,(vlSelf->_cp___05Fs6855));
    bufp->chgBit(oldp+374,(vlSelf->_cp___05Fs6860));
    bufp->chgBit(oldp+375,(vlSelf->_cp___05Fs6865));
    bufp->chgBit(oldp+376,(vlSelf->_cp___05Fs6870));
    bufp->chgBit(oldp+377,(vlSelf->_cp___05Fs6875));
    bufp->chgBit(oldp+378,(vlSelf->_cp___05Fs6880));
    bufp->chgBit(oldp+379,(vlSelf->_cp___05Fs6885));
    bufp->chgBit(oldp+380,(vlSelf->_cp___05Fs6890));
    bufp->chgBit(oldp+381,(vlSelf->_cp___05Fs6895));
    bufp->chgBit(oldp+382,(vlSelf->_cp___05Fs6900));
    bufp->chgBit(oldp+383,(vlSelf->_cp___05Fs6905));
    bufp->chgBit(oldp+384,(vlSelf->_cp___05Fs6910));
    bufp->chgBit(oldp+385,(vlSelf->_cp___05Fs6915));
    bufp->chgBit(oldp+386,(vlSelf->_cp___05Fs6920));
    bufp->chgBit(oldp+387,(vlSelf->_cp___05Fs6925));
    bufp->chgBit(oldp+388,(vlSelf->_cp___05Fs6930));
    bufp->chgBit(oldp+389,(vlSelf->_cp___05Fs6935));
    bufp->chgBit(oldp+390,(vlSelf->_cp___05Fs6940));
    bufp->chgBit(oldp+391,(vlSelf->_cp___05Fs6945));
    bufp->chgBit(oldp+392,(vlSelf->_cp___05Fs6950));
    bufp->chgBit(oldp+393,(vlSelf->_cp___05Fs6955));
    bufp->chgBit(oldp+394,(vlSelf->_cp___05Fs6960));
    bufp->chgBit(oldp+395,(vlSelf->_cp___05Fs6965));
    bufp->chgBit(oldp+396,(vlSelf->_cp___05Fs6970));
    bufp->chgBit(oldp+397,(vlSelf->_cp___05Fs6975));
    bufp->chgBit(oldp+398,(vlSelf->_cp___05Fs6980));
    bufp->chgBit(oldp+399,(vlSelf->_cp___05Fs6985));
    bufp->chgBit(oldp+400,(vlSelf->_cp___05Fs6990));
    bufp->chgBit(oldp+401,(vlSelf->_mc___05Fs737));
    bufp->chgBit(oldp+402,(vlSelf->_mc___05Fs739));
    bufp->chgBit(oldp+403,(vlSelf->_cp___05Fs6291));
    bufp->chgBit(oldp+404,(vlSelf->_mc___05Fs742));
    bufp->chgBit(oldp+405,(vlSelf->_cp___05Fs6336));
    bufp->chgBit(oldp+406,(vlSelf->_cp___05Fs6337));
    bufp->chgBit(oldp+407,(vlSelf->_cp___05Fs6333));
    bufp->chgBit(oldp+408,(vlSelf->_cp___05Fs6334));
    bufp->chgBit(oldp+409,(vlSelf->_mc___05Fs681));
    bufp->chgBit(oldp+410,(vlSelf->_cp___05Fs6344));
    bufp->chgBit(oldp+411,(vlSelf->_cp___05Fs6343));
    bufp->chgBit(oldp+412,(vlSelf->_mc___05Fs747));
    bufp->chgBit(oldp+413,(vlSelf->_cp___05Fs6339));
    bufp->chgBit(oldp+414,(vlSelf->_cp___05Fs6340));
    bufp->chgBit(oldp+415,(vlSelf->_mc___05Fs692));
    bufp->chgBit(oldp+416,(vlSelf->_mc___05Fs694));
    bufp->chgBit(oldp+417,(vlSelf->_cp___05Fs5920));
    bufp->chgBit(oldp+418,(vlSelf->_mc___05Fs697));
    bufp->chgBit(oldp+419,(vlSelf->_rs___05Fs3632));
    bufp->chgBit(oldp+420,(vlSelf->_rs___05Fs3631));
    bufp->chgBit(oldp+421,(vlSelf->_cp___05Fs11194));
    bufp->chgBit(oldp+422,(vlSelf->_cp___05Fs11193));
    bufp->chgBit(oldp+423,(vlSelf->_cp___05Fs11192));
    bufp->chgBit(oldp+424,(vlSelf->_cp___05Fs11191));
    bufp->chgBit(oldp+425,(vlSelf->_cp___05Fs11189));
    bufp->chgBit(oldp+426,(vlSelf->_cp___05Fs11188));
    bufp->chgBit(oldp+427,(vlSelf->_mc___05Fs3457));
    bufp->chgBit(oldp+428,(vlSelf->_mc___05Fs3458));
    bufp->chgBit(oldp+429,(vlSelf->_mc___05Fs3480));
    bufp->chgBit(oldp+430,(vlSelf->_cp___05Fs11178));
    bufp->chgBit(oldp+431,(vlSelf->_cp___05Fs11179));
    bufp->chgBit(oldp+432,(vlSelf->_cp___05Fs11180));
    bufp->chgBit(oldp+433,(vlSelf->_cp___05Fs11183));
    bufp->chgBit(oldp+434,(vlSelf->_cp___05Fs11186));
    bufp->chgBit(oldp+435,(vlSelf->_cp___05Fs11187));
    bufp->chgBit(oldp+436,(vlSelf->_mc___05Fs3482));
    bufp->chgCData(oldp+437,(((IData)(vlSelf->_mc___05Fs3453)
                               ? (1U & (~ (IData)(vlSelf->_mc___05Fs3452)))
                               : 2U)),2);
    bufp->chgCData(oldp+438,(((IData)(vlSelf->_mc___05Fs3453)
                               ? ((IData)(vlSelf->_mc___05Fs3452)
                                   ? 0U : (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__priority_0))
                               : (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__priority_1))),2);
    bufp->chgCData(oldp+439,(((IData)(vlSelf->_mc___05Fs3455)
                               ? (1U & (~ (IData)(vlSelf->_mc___05Fs3454)))
                               : 2U)),2);
    bufp->chgCData(oldp+440,(((IData)(vlSelf->_mc___05Fs3455)
                               ? ((IData)(vlSelf->_mc___05Fs3454)
                                   ? 0U : (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__priority_0))
                               : (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__priority_1))),2);
    bufp->chgBit(oldp+441,(vlSelf->_cp___05Fs11166));
    bufp->chgBit(oldp+442,(((~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__gateways_gateway__DOT__inFlight)) 
                            & (IData)(vlSelf->ExampleRocketSystem__DOT__ibus_intsink__DOT__chain__DOT__output_chain__DOT__sync_0))));
    bufp->chgBit(oldp+443,(vlSelf->_cp___05Fs11168));
    bufp->chgBit(oldp+444,(((~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__gateways_gateway_1__DOT__inFlight)) 
                            & (IData)(vlSelf->ExampleRocketSystem__DOT__ibus_intsink__DOT__chain__DOT__output_chain_1__DOT__sync_0))));
    bufp->chgBit(oldp+445,(vlSelf->_cp___05Fs11084));
    bufp->chgBit(oldp+446,(vlSelf->_cp___05Fs11097));
    bufp->chgBit(oldp+447,(vlSelf->_cp___05Fs11123));
    bufp->chgBit(oldp+448,(vlSelf->_mc___05Fs3443));
    bufp->chgBit(oldp+449,(vlSelf->_cp___05Fs11170));
    bufp->chgBit(oldp+450,(vlSelf->_cp___05Fs1067));
    bufp->chgBit(oldp+451,(vlSelf->_cp___05Fs1088));
    bufp->chgBit(oldp+452,((1U & (~ (IData)(vlSelf->_mc___05Fs3401)))));
    bufp->chgBit(oldp+453,(vlSelf->_cp___05Fs1180));
    bufp->chgBit(oldp+454,(vlSelf->_cp___05Fs1193));
    bufp->chgQData(oldp+455,((((IData)(vlSelf->_mc___05Fs121)
                                ? vlSelf->ExampleRocketSystem__DOT___cbus_auto_bus_xing_in_d_bits_data
                                : 0ULL) | (((IData)(vlSelf->_mc___05Fs122)
                                             ? vlSelf->ExampleRocketSystem__DOT___coh_wrapper_auto_coherent_jbar_anon_in_d_bits_data
                                             : 0ULL) 
                                           | ((IData)(vlSelf->_mc___05Fs123)
                                               ? vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4index_auto_in_r_bits_data
                                               : 0ULL)))),64);
    bufp->chgBit(oldp+457,(vlSelf->_cp___05Fs1191));
    bufp->chgBit(oldp+458,(vlSelf->_cp___05Fs1677));
    bufp->chgBit(oldp+459,(((IData)(vlSelf->_mc___05Fs100) 
                            & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                               >> 0xeU))));
    bufp->chgBit(oldp+460,(((IData)(vlSelf->_mc___05Fs100) 
                            & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                               >> 0xfU))));
    bufp->chgBit(oldp+461,(((IData)(vlSelf->_mc___05Fs100) 
                            & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                               >> 0x10U))));
    bufp->chgBit(oldp+462,(((IData)(vlSelf->_mc___05Fs100) 
                            & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                               >> 0x11U))));
    bufp->chgBit(oldp+463,(((IData)(vlSelf->_mc___05Fs100) 
                            & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                               >> 0x12U))));
    bufp->chgBit(oldp+464,(((IData)(vlSelf->_mc___05Fs100) 
                            & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                               >> 0x13U))));
    bufp->chgBit(oldp+465,(((IData)(vlSelf->_mc___05Fs100) 
                            & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                               >> 0x14U))));
    bufp->chgBit(oldp+466,(vlSelf->_cp___05Fs1698));
    bufp->chgBit(oldp+467,(vlSelf->_cp___05Fs1941));
    bufp->chgBit(oldp+468,(vlSelf->_cp___05Fs1790));
    bufp->chgCData(oldp+469,(vlSelf->_mc___05Fs218),3);
    bufp->chgBit(oldp+470,(vlSelf->_cp___05Fs1803));
    bufp->chgBit(oldp+471,(vlSelf->_cp___05Fs1801));
    bufp->chgBit(oldp+472,(((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__full) 
                            | (IData)(vlSelf->_cp___05Fs1951))));
    bufp->chgBit(oldp+473,((1U & (((0x10U & ((~ (IData)(vlSelf->_mc___05Fs205)) 
                                             << 4U)) 
                                   | ((8U & ((~ (IData)(vlSelf->_mc___05Fs204)) 
                                             << 3U)) 
                                      | ((4U & ((~ (IData)(vlSelf->_mc___05Fs203)) 
                                                << 2U)) 
                                         | ((2U & (
                                                   (~ (IData)(vlSelf->_mc___05Fs202)) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->_mc___05Fs201))))))) 
                                  >> (0xfU & vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])))));
    bufp->chgBit(oldp+474,((1U & (~ (IData)(vlSelf->_mc___05Fs186)))));
    bufp->chgBit(oldp+475,(vlSelf->_cp___05Fs1953));
    bufp->chgBit(oldp+476,((1U & (~ (IData)(vlSelf->_mc___05Fs189)))));
    bufp->chgBit(oldp+477,(vlSelf->_mc___05Fs188));
    bufp->chgBit(oldp+478,(vlSelf->_cp___05Fs1576));
    bufp->chgBit(oldp+479,(vlSelf->_cp___05Fs1577));
    bufp->chgCData(oldp+480,((((IData)(vlSelf->mmio_axi4_0_b_bits_resp) 
                               << 4U) | (IData)(vlSelf->mmio_axi4_0_b_bits_id))),6);
    bufp->chgBit(oldp+481,(vlSelf->_mc___05Fs190));
    bufp->chgBit(oldp+482,(vlSelf->_cp___05Fs1582));
    bufp->chgBit(oldp+483,(vlSelf->_cp___05Fs1583));
    __Vtemp_17[0U] = (((IData)(vlSelf->mmio_axi4_0_r_bits_data) 
                       << 4U) | (IData)(vlSelf->mmio_axi4_0_r_bits_id));
    __Vtemp_17[1U] = (((IData)(vlSelf->mmio_axi4_0_r_bits_data) 
                       >> 0x1cU) | ((IData)((vlSelf->mmio_axi4_0_r_bits_data 
                                             >> 0x20U)) 
                                    << 4U));
    __Vtemp_17[2U] = (((IData)(vlSelf->mmio_axi4_0_r_bits_last) 
                       << 6U) | (((IData)(vlSelf->mmio_axi4_0_r_bits_resp) 
                                  << 4U) | ((IData)(
                                                    (vlSelf->mmio_axi4_0_r_bits_data 
                                                     >> 0x20U)) 
                                            >> 0x1cU)));
    bufp->chgWData(oldp+484,(__Vtemp_17),71);
    bufp->chgBit(oldp+487,(vlSelf->_mc___05Fs189));
    bufp->chgBit(oldp+488,(vlSelf->_cp___05Fs1579));
    bufp->chgBit(oldp+489,(vlSelf->_cp___05Fs1580));
    bufp->chgBit(oldp+490,(vlSelf->_mc___05Fs186));
    bufp->chgBit(oldp+491,(vlSelf->_cp___05Fs1570));
    bufp->chgBit(oldp+492,(vlSelf->_cp___05Fs1571));
    bufp->chgBit(oldp+493,(vlSelf->_mc___05Fs187));
    bufp->chgBit(oldp+494,(vlSelf->_cp___05Fs1573));
    bufp->chgBit(oldp+495,(vlSelf->_cp___05Fs1574));
    bufp->chgBit(oldp+496,(((IData)(vlSelf->_cp___05Fs1941) 
                            & (IData)(vlSelf->_mc___05Fs218))));
    bufp->chgBit(oldp+497,(((~ (IData)(vlSelf->_mc___05Fs186)) 
                            & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT____VdfgTmp_h0e512e9a__0))));
    bufp->chgBit(oldp+498,(((~ (IData)(vlSelf->_mc___05Fs189)) 
                            & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT____VdfgTmp_h72de1387__0))));
    bufp->chgBit(oldp+499,(vlSelf->_rs___05Fs232));
    bufp->chgBit(oldp+500,(vlSelf->_cp___05Fs1655));
    bufp->chgBit(oldp+501,(vlSelf->_cp___05Fs1653));
    bufp->chgBit(oldp+502,(vlSelf->_cp___05Fs1651));
    bufp->chgBit(oldp+503,(vlSelf->_cp___05Fs1649));
    bufp->chgBit(oldp+504,(vlSelf->_cp___05Fs1647));
    bufp->chgBit(oldp+505,(vlSelf->_cp___05Fs1645));
    bufp->chgBit(oldp+506,(vlSelf->_cp___05Fs1643));
    bufp->chgBit(oldp+507,(vlSelf->_cp___05Fs1641));
    bufp->chgBit(oldp+508,(vlSelf->_cp___05Fs1639));
    bufp->chgBit(oldp+509,(vlSelf->_cp___05Fs1637));
    bufp->chgBit(oldp+510,(vlSelf->_cp___05Fs1635));
    bufp->chgBit(oldp+511,((1U & (~ (IData)(vlSelf->_mc___05Fs201)))));
    bufp->chgBit(oldp+512,(vlSelf->_mc___05Fs201));
    bufp->chgBit(oldp+513,(vlSelf->_cp___05Fs1619));
    bufp->chgBit(oldp+514,(vlSelf->_cp___05Fs1620));
    bufp->chgBit(oldp+515,((1U & (~ (IData)(vlSelf->_mc___05Fs202)))));
    bufp->chgBit(oldp+516,(vlSelf->_mc___05Fs202));
    bufp->chgBit(oldp+517,(vlSelf->_cp___05Fs1622));
    bufp->chgBit(oldp+518,(vlSelf->_cp___05Fs1623));
    bufp->chgBit(oldp+519,((1U & (~ (IData)(vlSelf->_mc___05Fs203)))));
    bufp->chgBit(oldp+520,(vlSelf->_mc___05Fs203));
    bufp->chgBit(oldp+521,(vlSelf->_cp___05Fs1625));
    bufp->chgBit(oldp+522,(vlSelf->_cp___05Fs1626));
    bufp->chgBit(oldp+523,((1U & (~ (IData)(vlSelf->_mc___05Fs204)))));
    bufp->chgBit(oldp+524,(vlSelf->_mc___05Fs204));
    bufp->chgBit(oldp+525,(vlSelf->_cp___05Fs1628));
    bufp->chgBit(oldp+526,(vlSelf->_cp___05Fs1629));
    bufp->chgBit(oldp+527,((1U & (~ (IData)(vlSelf->_mc___05Fs205)))));
    bufp->chgBit(oldp+528,(vlSelf->_mc___05Fs205));
    bufp->chgBit(oldp+529,(vlSelf->_cp___05Fs1631));
    bufp->chgBit(oldp+530,(vlSelf->_cp___05Fs1632));
    bufp->chgBit(oldp+531,(((IData)(vlSelf->_cp___05Fs1583) 
                            & ((0U == (0xfU & vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                               & (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[2U] 
                                  >> 6U)))));
    bufp->chgBit(oldp+532,(vlSelf->_mc___05Fs191));
    bufp->chgBit(oldp+533,(vlSelf->_cp___05Fs1585));
    bufp->chgBit(oldp+534,(vlSelf->_cp___05Fs1586));
    bufp->chgBit(oldp+535,(((IData)(vlSelf->_cp___05Fs1583) 
                            & ((3U == (0xfU & vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                               & (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[2U] 
                                  >> 6U)))));
    bufp->chgBit(oldp+536,(vlSelf->_mc___05Fs194));
    bufp->chgBit(oldp+537,(vlSelf->_cp___05Fs1594));
    bufp->chgBit(oldp+538,(vlSelf->_cp___05Fs1595));
    bufp->chgBit(oldp+539,(((IData)(vlSelf->_cp___05Fs1583) 
                            & ((4U == (0xfU & vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                               & (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[2U] 
                                  >> 6U)))));
    bufp->chgBit(oldp+540,(vlSelf->_mc___05Fs195));
    bufp->chgBit(oldp+541,(vlSelf->_cp___05Fs1597));
    bufp->chgBit(oldp+542,(vlSelf->_cp___05Fs1598));
    bufp->chgBit(oldp+543,(((IData)(vlSelf->_cp___05Fs1577) 
                            & (0U == (0xfU & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))));
    bufp->chgBit(oldp+544,(vlSelf->_mc___05Fs196));
    bufp->chgBit(oldp+545,(vlSelf->_cp___05Fs1600));
    bufp->chgBit(oldp+546,(vlSelf->_cp___05Fs1601));
    bufp->chgBit(oldp+547,(((IData)(vlSelf->_cp___05Fs1577) 
                            & (3U == (0xfU & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))));
    bufp->chgBit(oldp+548,(vlSelf->_mc___05Fs199));
    bufp->chgBit(oldp+549,(vlSelf->_cp___05Fs1609));
    bufp->chgBit(oldp+550,(vlSelf->_cp___05Fs1610));
    bufp->chgBit(oldp+551,(((IData)(vlSelf->_cp___05Fs1577) 
                            & (4U == (0xfU & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))));
    bufp->chgBit(oldp+552,(vlSelf->_mc___05Fs200));
    bufp->chgBit(oldp+553,(vlSelf->_cp___05Fs1612));
    bufp->chgBit(oldp+554,(vlSelf->_cp___05Fs1613));
    bufp->chgBit(oldp+555,(((IData)(vlSelf->_cp___05Fs1583) 
                            & ((1U == (0xfU & vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                               & (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[2U] 
                                  >> 6U)))));
    bufp->chgBit(oldp+556,((1U & (~ (IData)(vlSelf->_mc___05Fs192)))));
    bufp->chgBit(oldp+557,(vlSelf->_mc___05Fs192));
    bufp->chgBit(oldp+558,(vlSelf->_cp___05Fs1588));
    bufp->chgBit(oldp+559,(vlSelf->_cp___05Fs1589));
    bufp->chgBit(oldp+560,(((IData)(vlSelf->_cp___05Fs1583) 
                            & ((2U == (0xfU & vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                               & (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[2U] 
                                  >> 6U)))));
    bufp->chgBit(oldp+561,((1U & (~ (IData)(vlSelf->_mc___05Fs193)))));
    bufp->chgBit(oldp+562,(vlSelf->_mc___05Fs193));
    bufp->chgBit(oldp+563,(vlSelf->_cp___05Fs1591));
    bufp->chgBit(oldp+564,(vlSelf->_cp___05Fs1592));
    bufp->chgBit(oldp+565,(((IData)(vlSelf->_cp___05Fs1577) 
                            & (1U == (0xfU & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))));
    bufp->chgBit(oldp+566,((1U & (~ (IData)(vlSelf->_mc___05Fs197)))));
    bufp->chgBit(oldp+567,(vlSelf->_mc___05Fs197));
    bufp->chgBit(oldp+568,(vlSelf->_cp___05Fs1603));
    bufp->chgBit(oldp+569,(vlSelf->_cp___05Fs1604));
    bufp->chgBit(oldp+570,(((IData)(vlSelf->_cp___05Fs1577) 
                            & (2U == (0xfU & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))));
    bufp->chgBit(oldp+571,((1U & (~ (IData)(vlSelf->_mc___05Fs198)))));
    bufp->chgBit(oldp+572,(vlSelf->_mc___05Fs198));
    bufp->chgBit(oldp+573,(vlSelf->_cp___05Fs1606));
    bufp->chgBit(oldp+574,(vlSelf->_cp___05Fs1607));
    bufp->chgBit(oldp+575,(vlSelf->_mc___05Fs231));
    bufp->chgBit(oldp+576,(vlSelf->_cp___05Fs1957));
    bufp->chgBit(oldp+577,(vlSelf->_mc___05Fs218));
    bufp->chgBit(oldp+578,((1U & ((~ (IData)(vlSelf->_mc___05Fs218)) 
                                  | (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__anonIn_r_bits_last)))));
    bufp->chgBit(oldp+579,(vlSelf->_cp___05Fs1970));
    bufp->chgBit(oldp+580,(vlSelf->_cp___05Fs1975));
    bufp->chgBit(oldp+581,(vlSelf->_cp___05Fs1980));
    bufp->chgBit(oldp+582,(vlSelf->_cp___05Fs1985));
    bufp->chgBit(oldp+583,(vlSelf->_cp___05Fs1990));
    bufp->chgBit(oldp+584,(vlSelf->_mc___05Fs221));
    bufp->chgBit(oldp+585,(vlSelf->_mc___05Fs223));
    bufp->chgBit(oldp+586,(vlSelf->_cp___05Fs1793));
    bufp->chgBit(oldp+587,(vlSelf->_cp___05Fs1906));
    bufp->chgBit(oldp+588,(vlSelf->_mc___05Fs227));
    bufp->chgBit(oldp+589,(vlSelf->_cp___05Fs1951));
    bufp->chgBit(oldp+590,(vlSelf->_cp___05Fs1952));
    bufp->chgBit(oldp+591,(vlSelf->_cp___05Fs1948));
    bufp->chgBit(oldp+592,(vlSelf->_cp___05Fs1949));
    bufp->chgBit(oldp+593,(vlSelf->_mc___05Fs216));
    bufp->chgBit(oldp+594,(vlSelf->_cp___05Fs1959));
    bufp->chgBit(oldp+595,(vlSelf->_cp___05Fs1958));
    bufp->chgBit(oldp+596,(vlSelf->_mc___05Fs232));
    bufp->chgBit(oldp+597,(vlSelf->_cp___05Fs1954));
    bufp->chgBit(oldp+598,(vlSelf->_cp___05Fs1955));
    bufp->chgBit(oldp+599,(vlSelf->_cp___05Fs1));
    bufp->chgBit(oldp+600,(vlSelf->_mc___05Fs175));
    bufp->chgBit(oldp+601,(vlSelf->_mc___05Fs177));
    bufp->chgBit(oldp+602,(vlSelf->_mc___05Fs183));
    bufp->chgBit(oldp+603,(vlSelf->_mc___05Fs185));
    bufp->chgBit(oldp+604,(vlSelf->_mc___05Fs129));
    bufp->chgBit(oldp+605,(vlSelf->_mc___05Fs131));
    bufp->chgBit(oldp+606,(vlSelf->_cp___05Fs117));
    bufp->chgBit(oldp+607,(vlSelf->_cp___05Fs1025));
    bufp->chgBit(oldp+608,(vlSelf->_mc___05Fs134));
    bufp->chgBit(oldp+609,(vlSelf->_mc___05Fs161));
    bufp->chgBit(oldp+610,(vlSelf->_mc___05Fs163));
    bufp->chgBit(oldp+611,(vlSelf->_cp___05Fs1183));
    bufp->chgBit(oldp+612,(vlSelf->_cp___05Fs1507));
    bufp->chgBit(oldp+613,(vlSelf->_mc___05Fs165));
    bufp->chgBit(oldp+614,(vlSelf->_mc___05Fs167));
    bufp->chgBit(oldp+615,(vlSelf->_cp___05Fs1535));
    bufp->chgBit(oldp+616,(vlSelf->_mc___05Fs169));
    bufp->chgBit(oldp+617,((1U & ((IData)(vlSelf->_mc___05Fs117)
                                   ? ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_4) 
                                      >> 2U) : (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__state_4_2)))));
    bufp->chgBit(oldp+618,((1U & ((IData)(vlSelf->_mc___05Fs117)
                                   ? ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_4) 
                                      >> 1U) : (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__state_4_1)))));
    bufp->chgBit(oldp+619,((1U & ((IData)(vlSelf->_mc___05Fs117)
                                   ? (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_4)
                                   : (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__state_4_0)))));
    bufp->chgBit(oldp+620,((1U & ((IData)(vlSelf->_mc___05Fs106)
                                   ? ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_3) 
                                      >> 2U) : (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__state_3_2)))));
    bufp->chgBit(oldp+621,((1U & ((IData)(vlSelf->_mc___05Fs106)
                                   ? ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_3) 
                                      >> 1U) : (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__state_3_1)))));
    bufp->chgBit(oldp+622,((1U & ((IData)(vlSelf->_mc___05Fs106)
                                   ? (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_3)
                                   : (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__state_3_0)))));
    bufp->chgBit(oldp+623,((1U & ((IData)(vlSelf->_mc___05Fs97)
                                   ? ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_2) 
                                      >> 1U) : (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__state_2_1)))));
    bufp->chgBit(oldp+624,((1U & ((IData)(vlSelf->_mc___05Fs97)
                                   ? (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_2)
                                   : (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__state_2_0)))));
    bufp->chgBit(oldp+625,((1U & ((IData)(vlSelf->_mc___05Fs89)
                                   ? ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_1) 
                                      >> 1U) : (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__state_1_1)))));
    bufp->chgBit(oldp+626,((1U & ((IData)(vlSelf->_mc___05Fs89)
                                   ? (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_1)
                                   : (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__state_1_0)))));
    bufp->chgBit(oldp+627,((1U & ((IData)(vlSelf->_mc___05Fs81)
                                   ? ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys) 
                                      >> 1U) : (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__state_1)))));
    bufp->chgBit(oldp+628,((1U & ((IData)(vlSelf->_mc___05Fs81)
                                   ? (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys)
                                   : (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__state_0)))));
    bufp->chgBit(oldp+629,(vlSelf->_mc___05Fs52));
    bufp->chgBit(oldp+630,(vlSelf->_mc___05Fs53));
    bufp->chgBit(oldp+631,(vlSelf->_mc___05Fs54));
    bufp->chgBit(oldp+632,(vlSelf->_mc___05Fs55));
    bufp->chgBit(oldp+633,(vlSelf->_mc___05Fs56));
    bufp->chgBit(oldp+634,(vlSelf->_mc___05Fs57));
    bufp->chgBit(oldp+635,(vlSelf->_mc___05Fs71));
    bufp->chgBit(oldp+636,(vlSelf->_mc___05Fs73));
    bufp->chgBit(oldp+637,(vlSelf->_mc___05Fs75));
    bufp->chgBit(oldp+638,(vlSelf->_mc___05Fs81));
    bufp->chgBit(oldp+639,(vlSelf->_mc___05Fs80));
    bufp->chgBit(oldp+640,(vlSelf->_mc___05Fs78));
    bufp->chgBit(oldp+641,(vlSelf->_mc___05Fs79));
    bufp->chgBit(oldp+642,(vlSelf->_mc___05Fs84));
    bufp->chgBit(oldp+643,(vlSelf->_mc___05Fs85));
    bufp->chgBit(oldp+644,(vlSelf->_mc___05Fs89));
    bufp->chgBit(oldp+645,(vlSelf->_mc___05Fs88));
    bufp->chgBit(oldp+646,(vlSelf->_mc___05Fs86));
    bufp->chgBit(oldp+647,(vlSelf->_mc___05Fs87));
    bufp->chgBit(oldp+648,(vlSelf->_mc___05Fs92));
    bufp->chgBit(oldp+649,(vlSelf->_mc___05Fs93));
    bufp->chgBit(oldp+650,(vlSelf->_mc___05Fs97));
    bufp->chgBit(oldp+651,(vlSelf->_mc___05Fs96));
    bufp->chgBit(oldp+652,(vlSelf->_mc___05Fs94));
    bufp->chgBit(oldp+653,(vlSelf->_mc___05Fs95));
    bufp->chgBit(oldp+654,(vlSelf->_mc___05Fs100));
    bufp->chgBit(oldp+655,(vlSelf->_mc___05Fs101));
    bufp->chgBit(oldp+656,(vlSelf->_mc___05Fs106));
    bufp->chgBit(oldp+657,(vlSelf->_mc___05Fs105));
    bufp->chgBit(oldp+658,(vlSelf->_mc___05Fs102));
    bufp->chgBit(oldp+659,(vlSelf->_mc___05Fs103));
    bufp->chgBit(oldp+660,(vlSelf->_mc___05Fs104));
    bufp->chgBit(oldp+661,(vlSelf->_mc___05Fs110));
    bufp->chgBit(oldp+662,(vlSelf->_mc___05Fs111));
    bufp->chgBit(oldp+663,(vlSelf->_mc___05Fs112));
    bufp->chgBit(oldp+664,(vlSelf->_mc___05Fs117));
    bufp->chgBit(oldp+665,(vlSelf->_mc___05Fs116));
    bufp->chgBit(oldp+666,(vlSelf->_mc___05Fs113));
    bufp->chgBit(oldp+667,(vlSelf->_mc___05Fs114));
    bufp->chgBit(oldp+668,(vlSelf->_mc___05Fs115));
    bufp->chgBit(oldp+669,(vlSelf->_mc___05Fs121));
    bufp->chgBit(oldp+670,(vlSelf->_mc___05Fs122));
    bufp->chgBit(oldp+671,(vlSelf->_mc___05Fs123));
    bufp->chgBit(oldp+672,(vlSelf->_mc___05Fs5));
    bufp->chgBit(oldp+673,(vlSelf->_mc___05Fs7));
    bufp->chgBit(oldp+674,(vlSelf->_cp___05Fs230));
    bufp->chgBit(oldp+675,(vlSelf->_mc___05Fs10));
    bufp->chgBit(oldp+676,(vlSelf->_mc___05Fs37));
    bufp->chgBit(oldp+677,(vlSelf->_mc___05Fs39));
    bufp->chgBit(oldp+678,(vlSelf->_cp___05Fs712));
    bufp->chgBit(oldp+679,(vlSelf->_mc___05Fs41));
    bufp->chgBit(oldp+680,(vlSelf->_mc___05Fs43));
    bufp->chgBit(oldp+681,(vlSelf->_cp___05Fs740));
    bufp->chgBit(oldp+682,(vlSelf->_mc___05Fs45));
    bufp->chgBit(oldp+683,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hrDebugIntReg_0) 
                            | (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0))));
    bufp->chgBit(oldp+684,(vlSelf->_cp___05Fs10100));
    bufp->chgQData(oldp+685,(((IData)(vlSelf->_mc___05Fs954)
                               ? (((IData)(vlSelf->_cp___05Fs9252) 
                                   & ((IData)(vlSelf->_mc___05Fs1315) 
                                      & ((IData)(vlSelf->_mc___05Fs1311) 
                                         | ((IData)(vlSelf->_mc___05Fs1310) 
                                            | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h1fd10179__0)))))
                                   ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data
                                   : 0ULL) : 0ULL)),64);
    bufp->chgBit(oldp+687,(((IData)(vlSelf->_mc___05Fs944) 
                            & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_b_ready))));
    bufp->chgBit(oldp+688,(vlSelf->_cp___05Fs10384));
    bufp->chgIData(oldp+689,(vlSelf->_rs___05Fs1855),32);
    bufp->chgQData(oldp+690,(vlSelf->_rs___05Fs1992),64);
    bufp->chgBit(oldp+692,(vlSelf->_cp___05Fs10472));
    bufp->chgBit(oldp+693,((1U & (~ (IData)(vlSelf->_mc___05Fs3400)))));
    bufp->chgBit(oldp+694,(vlSelf->_cp___05Fs10284));
    bufp->chgBit(oldp+695,(vlSelf->_cp___05Fs10303));
    bufp->chgBit(oldp+696,((1U & (~ (IData)(vlSelf->_mc___05Fs3403)))));
    bufp->chgBit(oldp+697,(vlSelf->_cp___05Fs10213));
    bufp->chgBit(oldp+698,(vlSelf->_cp___05Fs10226));
    bufp->chgBit(oldp+699,(vlSelf->_cp___05Fs10224));
    bufp->chgBit(oldp+700,((1U & (~ (IData)(vlSelf->_mc___05Fs3404)))));
    bufp->chgBit(oldp+701,(vlSelf->_cp___05Fs10503));
    bufp->chgBit(oldp+702,(vlSelf->_mc___05Fs3391));
    bufp->chgBit(oldp+703,(vlSelf->_mc___05Fs3393));
    bufp->chgBit(oldp+704,(vlSelf->_cp___05Fs10216));
    bufp->chgBit(oldp+705,(vlSelf->_cp___05Fs10540));
    bufp->chgBit(oldp+706,(vlSelf->_mc___05Fs3395));
    bufp->chgBit(oldp+707,(vlSelf->_mc___05Fs3397));
    bufp->chgBit(oldp+708,(vlSelf->_cp___05Fs10568));
    bufp->chgBit(oldp+709,(vlSelf->_mc___05Fs3399));
    bufp->chgBit(oldp+710,(vlSelf->_mc___05Fs3402));
    bufp->chgBit(oldp+711,(vlSelf->_mc___05Fs3401));
    bufp->chgBit(oldp+712,(vlSelf->_cp___05Fs10592));
    bufp->chgBit(oldp+713,(vlSelf->_cp___05Fs10488));
    __Vtemp_19[0U] = (((IData)((((IData)(vlSelf->_mc___05Fs121)
                                  ? vlSelf->ExampleRocketSystem__DOT___cbus_auto_bus_xing_in_d_bits_data
                                  : 0ULL) | (((IData)(vlSelf->_mc___05Fs122)
                                               ? vlSelf->ExampleRocketSystem__DOT___coh_wrapper_auto_coherent_jbar_anon_in_d_bits_data
                                               : 0ULL) 
                                             | ((IData)(vlSelf->_mc___05Fs123)
                                                 ? vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4index_auto_in_r_bits_data
                                                 : 0ULL)))) 
                       << 0xeU) | (((IData)(vlSelf->_cp___05Fs1193) 
                                    << 0xdU) | (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_bits_sink) 
                                                 << 0xbU) 
                                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__anonIn_1_d_bits_source) 
                                                    << 9U) 
                                                   | (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_bits_size) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_bits_param) 
                                                          << 3U) 
                                                         | (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_bits_opcode)))))));
    __Vtemp_19[1U] = (((IData)((((IData)(vlSelf->_mc___05Fs121)
                                  ? vlSelf->ExampleRocketSystem__DOT___cbus_auto_bus_xing_in_d_bits_data
                                  : 0ULL) | (((IData)(vlSelf->_mc___05Fs122)
                                               ? vlSelf->ExampleRocketSystem__DOT___coh_wrapper_auto_coherent_jbar_anon_in_d_bits_data
                                               : 0ULL) 
                                             | ((IData)(vlSelf->_mc___05Fs123)
                                                 ? vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4index_auto_in_r_bits_data
                                                 : 0ULL)))) 
                       >> 0x12U) | ((IData)(((((IData)(vlSelf->_mc___05Fs121)
                                                ? vlSelf->ExampleRocketSystem__DOT___cbus_auto_bus_xing_in_d_bits_data
                                                : 0ULL) 
                                              | (((IData)(vlSelf->_mc___05Fs122)
                                                   ? vlSelf->ExampleRocketSystem__DOT___coh_wrapper_auto_coherent_jbar_anon_in_d_bits_data
                                                   : 0ULL) 
                                                 | ((IData)(vlSelf->_mc___05Fs123)
                                                     ? vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4index_auto_in_r_bits_data
                                                     : 0ULL))) 
                                             >> 0x20U)) 
                                    << 0xeU));
    __Vtemp_19[2U] = (((IData)(vlSelf->_cp___05Fs1191) 
                       << 0xeU) | ((IData)(((((IData)(vlSelf->_mc___05Fs121)
                                               ? vlSelf->ExampleRocketSystem__DOT___cbus_auto_bus_xing_in_d_bits_data
                                               : 0ULL) 
                                             | (((IData)(vlSelf->_mc___05Fs122)
                                                  ? vlSelf->ExampleRocketSystem__DOT___coh_wrapper_auto_coherent_jbar_anon_in_d_bits_data
                                                  : 0ULL) 
                                                | ((IData)(vlSelf->_mc___05Fs123)
                                                    ? vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4index_auto_in_r_bits_data
                                                    : 0ULL))) 
                                            >> 0x20U)) 
                                   >> 0x12U));
    bufp->chgWData(oldp+714,(__Vtemp_19),79);
    bufp->chgBit(oldp+717,(vlSelf->_mc___05Fs3400));
    bufp->chgBit(oldp+718,(vlSelf->_cp___05Fs10475));
    bufp->chgBit(oldp+719,(vlSelf->_cp___05Fs10590));
    __Vtemp_21[0U] = (IData)((((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_mask)) 
                               << 0x2cU) | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)) 
                                             << 0xcU) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_source) 
                                                                << 0xaU) 
                                                               | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size) 
                                                                   << 6U) 
                                                                  | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_param) 
                                                                      << 3U) 
                                                                     | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_opcode)))))))));
    __Vtemp_21[1U] = (((IData)(((IData)(vlSelf->_mc___05Fs954)
                                 ? (((IData)(vlSelf->_cp___05Fs9252) 
                                     & ((IData)(vlSelf->_mc___05Fs1315) 
                                        & ((IData)(vlSelf->_mc___05Fs1311) 
                                           | ((IData)(vlSelf->_mc___05Fs1310) 
                                              | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h1fd10179__0)))))
                                     ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data
                                     : 0ULL) : 0ULL)) 
                       << 0x14U) | (IData)(((((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_mask)) 
                                              << 0x2cU) 
                                             | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_source) 
                                                                    << 0xaU) 
                                                                   | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_param) 
                                                                          << 3U) 
                                                                         | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_opcode)))))))) 
                                            >> 0x20U)));
    __Vtemp_21[2U] = (((IData)(((IData)(vlSelf->_mc___05Fs954)
                                 ? (((IData)(vlSelf->_cp___05Fs9252) 
                                     & ((IData)(vlSelf->_mc___05Fs1315) 
                                        & ((IData)(vlSelf->_mc___05Fs1311) 
                                           | ((IData)(vlSelf->_mc___05Fs1310) 
                                              | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h1fd10179__0)))))
                                     ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data
                                     : 0ULL) : 0ULL)) 
                       >> 0xcU) | ((IData)((((IData)(vlSelf->_mc___05Fs954)
                                              ? (((IData)(vlSelf->_cp___05Fs9252) 
                                                  & ((IData)(vlSelf->_mc___05Fs1315) 
                                                     & ((IData)(vlSelf->_mc___05Fs1311) 
                                                        | ((IData)(vlSelf->_mc___05Fs1310) 
                                                           | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h1fd10179__0)))))
                                                  ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data
                                                  : 0ULL)
                                              : 0ULL) 
                                            >> 0x20U)) 
                                   << 0x14U));
    __Vtemp_21[3U] = ((IData)((((IData)(vlSelf->_mc___05Fs954)
                                 ? (((IData)(vlSelf->_cp___05Fs9252) 
                                     & ((IData)(vlSelf->_mc___05Fs1315) 
                                        & ((IData)(vlSelf->_mc___05Fs1311) 
                                           | ((IData)(vlSelf->_mc___05Fs1310) 
                                              | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h1fd10179__0)))))
                                     ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data
                                     : 0ULL) : 0ULL) 
                               >> 0x20U)) >> 0xcU);
    bufp->chgWData(oldp+720,(__Vtemp_21),117);
    bufp->chgBit(oldp+724,(vlSelf->_mc___05Fs3403));
    bufp->chgBit(oldp+725,(vlSelf->_cp___05Fs10516));
    bufp->chgBit(oldp+726,(vlSelf->_cp___05Fs10599));
    bufp->chgBit(oldp+727,(vlSelf->_mc___05Fs3404));
    bufp->chgBit(oldp+728,(vlSelf->_cp___05Fs10586));
    bufp->chgBit(oldp+729,(vlSelf->_mc___05Fs2800));
    bufp->chgBit(oldp+730,(vlSelf->_rs___05Fs3498));
    bufp->chgBit(oldp+731,(vlSelf->_mc___05Fs2723));
    bufp->chgBit(oldp+732,(vlSelf->_mc___05Fs2722));
    bufp->chgBit(oldp+733,(vlSelf->_mc___05Fs2728));
    bufp->chgBit(oldp+734,(vlSelf->_rs___05Fs2556));
    bufp->chgQData(oldp+735,(vlSelf->_rs___05Fs2557),40);
    bufp->chgBit(oldp+737,(vlSelf->_rs___05Fs2558));
    bufp->chgCData(oldp+738,(vlSelf->_rs___05Fs1925),2);
    bufp->chgBit(oldp+739,(vlSelf->_cp___05Fs9294));
    bufp->chgBit(oldp+740,(vlSelf->_cp___05Fs9293));
    bufp->chgBit(oldp+741,(vlSelf->_cp___05Fs9786));
    bufp->chgQData(oldp+742,(vlSelf->_rs___05Fs1937),40);
    bufp->chgBit(oldp+744,(vlSelf->_rs___05Fs1938));
    bufp->chgBit(oldp+745,((((1U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__io_cpu_perf_release_counter)) 
                             | (0U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__beats1_1))) 
                            & (IData)(vlSelf->_cp___05Fs10516))));
    bufp->chgBit(oldp+746,(vlSelf->_mc___05Fs3340));
    bufp->chgCData(oldp+747,((0x1fU & (((IData)(vlSelf->_mc___05Fs2441)
                                         ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wb_toint_exc)
                                         : 0U) | (((IData)(vlSelf->_mc___05Fs2425)
                                                    ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_flags)
                                                    : 0U) 
                                                  | ((IData)(vlSelf->_mc___05Fs2442)
                                                      ? 
                                                     ((0x13U 
                                                       >= 
                                                       (0x1fU 
                                                        & ((IData)(5U) 
                                                           * (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_0_pipeid))))
                                                       ? 
                                                      ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__io_out_pipe_b_exc) 
                                                         << 0xfU) 
                                                        | ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_invalidExc_pipe_b) 
                                                             << 0xeU) 
                                                            | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                                << 0xcU) 
                                                               | ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                                    & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                                       | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                                                          & ((1U 
                                                                              != 
                                                                              (3U 
                                                                               & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp) 
                                                                                >> 8U))) 
                                                                             & ((~ 
                                                                                ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_detectTininess_pipe_b) 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->_mc___05Fs1786)
                                                                                 ? 
                                                                                ((IData)(vlSelf->_mc___05Fs1782) 
                                                                                & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_haf133fcb__0 
                                                                                >> 2U))
                                                                                 : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb129c4ea__0))) 
                                                                                & (((IData)(vlSelf->_mc___05Fs1786)
                                                                                 ? 
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                                >> 0x18U)) 
                                                                                & ((0U 
                                                                                != vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_5) 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_7) 
                                                                                & ((IData)(vlSelf->_mc___05Fs1786)
                                                                                 ? 
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                                                                >> 2U)
                                                                                 : 
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                                                                >> 1U))) 
                                                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                                                & (((IData)(vlSelf->_mc___05Fs1786) 
                                                                                & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                                                                >> 2U)) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig)))))))))) 
                                                                                & ((IData)(vlSelf->_mc___05Fs1786)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb129c4ea__0)
                                                                                 : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))))) 
                                                                   << 0xbU) 
                                                                  | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                                      | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                                         & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                                            | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))) 
                                                                     << 0xaU)))) 
                                                           | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__io_out_pipe_b_exc) 
                                                               << 5U) 
                                                              | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__io_out_pipe_b_exc)))) 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(5U) 
                                                           * (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_0_pipeid))))
                                                       : 0U)
                                                      : 0U))))),5);
    bufp->chgQData(oldp+748,(((IData)(vlSelf->_mc___05Fs1839)
                               ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__toint
                               : (((QData)((IData)(
                                                   (- (IData)((IData)(vlSelf->_mc___05Fs1838))))) 
                                   << 0x20U) | (QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__toint))))),64);
    bufp->chgBit(oldp+750,((1U & (~ (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_wflags) 
                                      & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_valid)) 
                                     | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_wflags) 
                                         & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_reg_valid)) 
                                        | ((IData)(vlSelf->_mc___05Fs2441) 
                                           | ((0U != (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wen)) 
                                              | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_inFlight)))))))));
    bufp->chgBit(oldp+751,(vlSelf->_cp___05Fs9729));
    bufp->chgBit(oldp+752,(vlSelf->_cp___05Fs9732));
    bufp->chgBit(oldp+753,(vlSelf->_cp___05Fs9735));
    bufp->chgBit(oldp+754,(vlSelf->_mc___05Fs3349));
    bufp->chgBit(oldp+755,(vlSelf->_rs___05Fs3325));
    bufp->chgBit(oldp+756,(vlSelf->_mc___05Fs1675));
    bufp->chgBit(oldp+757,(vlSelf->_mc___05Fs1479));
    bufp->chgBit(oldp+758,(vlSelf->_cp___05Fs9385));
    bufp->chgBit(oldp+759,(vlSelf->_cp___05Fs9396));
    bufp->chgBit(oldp+760,(vlSelf->_mc___05Fs1365));
    bufp->chgCData(oldp+761,(vlSelf->_rs___05Fs3436),2);
    bufp->chgBit(oldp+762,(vlSelf->_rs___05Fs3437));
    bufp->chgCData(oldp+763,(vlSelf->_rs___05Fs3438),2);
    bufp->chgBit(oldp+764,(vlSelf->_rs___05Fs3439));
    bufp->chgQData(oldp+765,(vlSelf->_rs___05Fs3440),39);
    bufp->chgCData(oldp+767,(vlSelf->_rs___05Fs3441),5);
    bufp->chgCData(oldp+768,(vlSelf->_rs___05Fs3442),8);
    bufp->chgBit(oldp+769,(vlSelf->_rs___05Fs3443));
    bufp->chgCData(oldp+770,(((IData)(vlSelf->_mc___05Fs3354)
                               ? 2U : ((IData)(vlSelf->_mc___05Fs3353)
                                        ? 3U : (IData)(vlSelf->_mc___05Fs3352)))),2);
    bufp->chgBit(oldp+771,(vlSelf->_cp___05Fs9635));
    bufp->chgBit(oldp+772,(vlSelf->_cp___05Fs9636));
    bufp->chgBit(oldp+773,(vlSelf->_rs___05Fs3460));
    bufp->chgBit(oldp+774,(vlSelf->_cp___05Fs9638));
    bufp->chgBit(oldp+775,(vlSelf->_cp___05Fs9650));
    bufp->chgQData(oldp+776,((((QData)((IData)((1U 
                                                & ((IData)(vlSelf->_mc___05Fs3356)
                                                    ? (IData)(
                                                              (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___io_adder_out_output 
                                                               >> 0x27U))
                                                    : 
                                                   (~ (IData)(
                                                              (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___io_adder_out_output 
                                                               >> 0x26U))))))) 
                               << 0x27U) | (0x7fffffffffULL 
                                            & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___io_adder_out_output))),40);
    bufp->chgCData(oldp+778,(vlSelf->_rs___05Fs3340),5);
    bufp->chgCData(oldp+779,(vlSelf->_rs___05Fs3427),2);
    bufp->chgCData(oldp+780,(((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_hls)
                               ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_hstatus_spvp)
                               : ((IData)(vlSelf->_mc___05Fs2828)
                                   ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_mpp)
                                   : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)))),2);
    bufp->chgCData(oldp+781,(vlSelf->_rs___05Fs3291),4);
    bufp->chgQData(oldp+782,(vlSelf->_rs___05Fs3293),44);
    bufp->chgBit(oldp+784,(vlSelf->_mc___05Fs2819));
    bufp->chgCData(oldp+785,(vlSelf->_rs___05Fs3007),2);
    bufp->chgBit(oldp+786,(vlSelf->_mc___05Fs1029));
    bufp->chgBit(oldp+787,(vlSelf->_rs___05Fs3023));
    bufp->chgBit(oldp+788,(vlSelf->_rs___05Fs3102));
    bufp->chgCData(oldp+789,(vlSelf->_rs___05Fs3104),2);
    bufp->chgBit(oldp+790,(vlSelf->_rs___05Fs3105));
    bufp->chgBit(oldp+791,(vlSelf->_rs___05Fs3106));
    bufp->chgBit(oldp+792,(vlSelf->_rs___05Fs3107));
    bufp->chgIData(oldp+793,(vlSelf->_rs___05Fs3108),30);
    bufp->chgBit(oldp+794,(vlSelf->_rs___05Fs3109));
    bufp->chgCData(oldp+795,(vlSelf->_rs___05Fs3111),2);
    bufp->chgBit(oldp+796,(vlSelf->_rs___05Fs3112));
    bufp->chgBit(oldp+797,(vlSelf->_rs___05Fs3113));
    bufp->chgBit(oldp+798,(vlSelf->_rs___05Fs3114));
    bufp->chgIData(oldp+799,(vlSelf->_rs___05Fs3115),30);
    bufp->chgBit(oldp+800,(vlSelf->_rs___05Fs3116));
    bufp->chgCData(oldp+801,(vlSelf->_rs___05Fs3118),2);
    bufp->chgBit(oldp+802,(vlSelf->_rs___05Fs3119));
    bufp->chgBit(oldp+803,(vlSelf->_rs___05Fs3120));
    bufp->chgBit(oldp+804,(vlSelf->_rs___05Fs3121));
    bufp->chgIData(oldp+805,(vlSelf->_rs___05Fs3122),30);
    bufp->chgBit(oldp+806,(vlSelf->_rs___05Fs3123));
    bufp->chgCData(oldp+807,(vlSelf->_rs___05Fs3125),2);
    bufp->chgBit(oldp+808,(vlSelf->_rs___05Fs3126));
    bufp->chgBit(oldp+809,(vlSelf->_rs___05Fs3127));
    bufp->chgBit(oldp+810,(vlSelf->_rs___05Fs3128));
    bufp->chgIData(oldp+811,(vlSelf->_rs___05Fs3129),30);
    bufp->chgBit(oldp+812,(vlSelf->_rs___05Fs3130));
    bufp->chgCData(oldp+813,(vlSelf->_rs___05Fs3132),2);
    bufp->chgBit(oldp+814,(vlSelf->_rs___05Fs3133));
    bufp->chgBit(oldp+815,(vlSelf->_rs___05Fs3134));
    bufp->chgBit(oldp+816,(vlSelf->_rs___05Fs3135));
    bufp->chgIData(oldp+817,(vlSelf->_rs___05Fs3136),30);
    bufp->chgBit(oldp+818,(vlSelf->_rs___05Fs3137));
    bufp->chgCData(oldp+819,(vlSelf->_rs___05Fs3139),2);
    bufp->chgBit(oldp+820,(vlSelf->_rs___05Fs3140));
    bufp->chgBit(oldp+821,(vlSelf->_rs___05Fs3141));
    bufp->chgBit(oldp+822,(vlSelf->_rs___05Fs3142));
    bufp->chgIData(oldp+823,(vlSelf->_rs___05Fs3143),30);
    bufp->chgBit(oldp+824,(vlSelf->_rs___05Fs3144));
    bufp->chgCData(oldp+825,(vlSelf->_rs___05Fs3146),2);
    bufp->chgBit(oldp+826,(vlSelf->_rs___05Fs3147));
    bufp->chgBit(oldp+827,(vlSelf->_rs___05Fs3148));
    bufp->chgBit(oldp+828,(vlSelf->_rs___05Fs3149));
    bufp->chgIData(oldp+829,(vlSelf->_rs___05Fs3150),30);
    bufp->chgBit(oldp+830,(vlSelf->_rs___05Fs3151));
    bufp->chgCData(oldp+831,(vlSelf->_rs___05Fs3153),2);
    bufp->chgBit(oldp+832,(vlSelf->_rs___05Fs3154));
    bufp->chgBit(oldp+833,(vlSelf->_rs___05Fs3155));
    bufp->chgBit(oldp+834,(vlSelf->_rs___05Fs3156));
    bufp->chgIData(oldp+835,(vlSelf->_rs___05Fs3157),30);
    bufp->chgQData(oldp+836,(vlSelf->_rs___05Fs3305),64);
    bufp->chgCData(oldp+838,(vlSelf->_rs___05Fs3296),3);
    bufp->chgBit(oldp+839,(vlSelf->_cp___05Fs9722));
    bufp->chgBit(oldp+840,(vlSelf->_cp___05Fs9721));
    bufp->chgBit(oldp+841,(vlSelf->_rs___05Fs3294));
    bufp->chgBit(oldp+842,(((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_valid) 
                            & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_xcpt)) 
                               & ((IData)(vlSelf->_cp___05Fs9638) 
                                  | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_sfence))))));
    bufp->chgBit(oldp+843,(vlSelf->_mc___05Fs3234));
    bufp->chgBit(oldp+844,(vlSelf->_mc___05Fs3236));
    bufp->chgBit(oldp+845,(vlSelf->_cp___05Fs10069));
    bufp->chgBit(oldp+846,(vlSelf->_cp___05Fs10070));
    bufp->chgBit(oldp+847,(vlSelf->_mc___05Fs3278));
    bufp->chgBit(oldp+848,(vlSelf->_mc___05Fs3277));
    bufp->chgBit(oldp+849,(vlSelf->_mc___05Fs3281));
    bufp->chgBit(oldp+850,(vlSelf->_mc___05Fs3280));
    bufp->chgBit(oldp+851,(vlSelf->_mc___05Fs3316));
    bufp->chgBit(oldp+852,(vlSelf->_cp___05Fs10083));
    bufp->chgBit(oldp+853,(vlSelf->_mc___05Fs3323));
    bufp->chgBit(oldp+854,(vlSelf->_mc___05Fs3335));
    bufp->chgBit(oldp+855,(vlSelf->_cp___05Fs10086));
    bufp->chgBit(oldp+856,(vlSelf->_mc___05Fs3342));
    bufp->chgBit(oldp+857,(vlSelf->_mc___05Fs3343));
    bufp->chgBit(oldp+858,(vlSelf->_mc___05Fs3344));
    bufp->chgBit(oldp+859,(vlSelf->_cp___05Fs10097));
    bufp->chgBit(oldp+860,(vlSelf->_mc___05Fs3360));
    bufp->chgQData(oldp+861,(((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_alu_dw)
                               ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT__out
                               : (((QData)((IData)(
                                                   (- (IData)((IData)(vlSelf->_mc___05Fs3109))))) 
                                   << 0x20U) | (QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT__out))))),64);
    bufp->chgBit(oldp+863,(vlSelf->_mc___05Fs3102));
    bufp->chgBit(oldp+864,(vlSelf->_rs___05Fs3062));
    bufp->chgBit(oldp+865,(vlSelf->_rs___05Fs3063));
    bufp->chgCData(oldp+866,(vlSelf->_rs___05Fs3065),2);
    bufp->chgBit(oldp+867,(vlSelf->_rs___05Fs3066));
    bufp->chgBit(oldp+868,(vlSelf->_rs___05Fs3068));
    bufp->chgBit(oldp+869,(vlSelf->_rs___05Fs3069));
    bufp->chgBit(oldp+870,(vlSelf->_rs___05Fs3070));
    bufp->chgBit(oldp+871,(vlSelf->_rs___05Fs3071));
    bufp->chgBit(oldp+872,(vlSelf->_rs___05Fs3072));
    bufp->chgQData(oldp+873,(vlSelf->_rs___05Fs3073),39);
    bufp->chgBit(oldp+875,(vlSelf->_mc___05Fs3243));
    bufp->chgBit(oldp+876,(((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action)) 
                            & (IData)(vlSelf->_cp___05Fs10045))));
    bufp->chgBit(oldp+877,(((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action)) 
                            & (IData)(vlSelf->_cp___05Fs10046))));
    bufp->chgBit(oldp+878,(vlSelf->_mc___05Fs3244));
    bufp->chgBit(oldp+879,(((IData)(vlSelf->_cp___05Fs10045) 
                            & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action))));
    bufp->chgBit(oldp+880,(((IData)(vlSelf->_cp___05Fs10046) 
                            & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action))));
    bufp->chgBit(oldp+881,(vlSelf->_cp___05Fs10045));
    bufp->chgBit(oldp+882,(vlSelf->_cp___05Fs10046));
    bufp->chgBit(oldp+883,(vlSelf->_cp___05Fs10047));
    bufp->chgBit(oldp+884,((0xfU & ((IData)(vlSelf->_cp___05Fs9832) 
                                    & ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_m) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_s) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_u))) 
                                       >> (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv))))));
    bufp->chgCData(oldp+885,((0x1fU & ((((IData)(vlSelf->_mc___05Fs2441)
                                          ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wb_toint_exc)
                                          : 0U) | (
                                                   ((IData)(vlSelf->_mc___05Fs2425)
                                                     ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_flags)
                                                     : 0U) 
                                                   | ((IData)(vlSelf->_mc___05Fs2442)
                                                       ? 
                                                      ((0x13U 
                                                        >= 
                                                        (0x1fU 
                                                         & ((IData)(5U) 
                                                            * (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_0_pipeid))))
                                                        ? 
                                                       ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__io_out_pipe_b_exc) 
                                                          << 0xfU) 
                                                         | ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_invalidExc_pipe_b) 
                                                              << 0xeU) 
                                                             | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                                 << 0xcU) 
                                                                | ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                                     & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                                        | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                                                           & ((1U 
                                                                               != 
                                                                               (3U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp) 
                                                                                >> 8U))) 
                                                                              & ((~ 
                                                                                ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_detectTininess_pipe_b) 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->_mc___05Fs1786)
                                                                                 ? 
                                                                                ((IData)(vlSelf->_mc___05Fs1782) 
                                                                                & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_haf133fcb__0 
                                                                                >> 2U))
                                                                                 : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb129c4ea__0))) 
                                                                                & (((IData)(vlSelf->_mc___05Fs1786)
                                                                                 ? 
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                                >> 0x18U)) 
                                                                                & ((0U 
                                                                                != vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_5) 
                                                                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_7) 
                                                                                & ((IData)(vlSelf->_mc___05Fs1786)
                                                                                 ? 
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                                                                >> 2U)
                                                                                 : 
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                                                                >> 1U))) 
                                                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                                                & (((IData)(vlSelf->_mc___05Fs1786) 
                                                                                & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                                                                >> 2U)) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig)))))))))) 
                                                                                & ((IData)(vlSelf->_mc___05Fs1786)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb129c4ea__0)
                                                                                 : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))))) 
                                                                    << 0xbU) 
                                                                   | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                                       | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                                          & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                                             | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))) 
                                                                      << 0xaU)))) 
                                                            | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__io_out_pipe_b_exc) 
                                                                << 5U) 
                                                               | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__io_out_pipe_b_exc)))) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(5U) 
                                                            * (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_0_pipeid))))
                                                        : 0U)
                                                       : 0U))) 
                                       & (- (IData)((IData)(vlSelf->_mc___05Fs3340)))))),5);
    bufp->chgIData(oldp+886,(((((IData)(vlSelf->_mc___05Fs3339)
                                 ? (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                    >> 0x10U) : 0U) 
                               << 0x10U) | (0xffffU 
                                            & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_raw_inst))),32);
    bufp->chgBit(oldp+887,((1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_98) 
                                  | ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__csr_exists)) 
                                     | (((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__allow_sfence_vma)) 
                                         & ((0x180U 
                                             == (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                 >> 0x14U)) 
                                            | (0x680U 
                                               == (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                   >> 0x14U)))) 
                                        | (((~ ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv) 
                                                  >> 1U) 
                                                 | vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_92) 
                                                & ((0U 
                                                    != (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)) 
                                                   | ((7U 
                                                       & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_scounteren) 
                                                      >> 
                                                      (0x1fU 
                                                       & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                          >> 0x14U)))))) 
                                            & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__is_counter)) 
                                           | ((IData)(
                                                      ((0x7b000000U 
                                                        == 
                                                        (0xff000000U 
                                                         & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                                       & (IData)(vlSelf->_cp___05Fs9832))) 
                                              | ((0xfU 
                                                  == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_96)) 
                                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___io_decode_0_fp_illegal_output))))))))));
    bufp->chgBit(oldp+888,(((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_98) 
                            | (((~ ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_tw)) 
                                    | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv) 
                                       >> 1U))) & (0x3ffU 
                                                   == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_88))) 
                               | (((~ ((~ ((IData)(vlSelf->_cp___05Fs9839) 
                                           & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_tsr))) 
                                       | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv) 
                                          >> 1U))) 
                                   & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_90))) 
                                  | (((0U != (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_90)) 
                                      & (IData)(((0x48000000U 
                                                  == 
                                                  (0x48000000U 
                                                   & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                                 & (IData)(vlSelf->_cp___05Fs9832)))) 
                                     | ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__allow_sfence_vma)) 
                                        & (0x1ffffU 
                                           == vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_89))))))));
    bufp->chgBit(oldp+889,(((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_v) 
                            & (((~ (IData)(vlSelf->_mc___05Fs1432)) 
                                & (0x3ffU == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_88))) 
                               | (((0U != (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_90)) 
                                   & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h9cf01ff6__0)) 
                                  | ((~ (IData)(vlSelf->_mc___05Fs1432)) 
                                     & (0x1ffffU == vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_89)))))));
    bufp->chgCData(oldp+890,(((IData)(vlSelf->_mc___05Fs2828)
                               ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_mpp)
                               : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv))),2);
    bufp->chgBit(oldp+891,(((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_v) 
                            | ((IData)(vlSelf->_mc___05Fs2828) 
                               & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_mpv)))));
    bufp->chgBit(oldp+892,(vlSelf->_mc___05Fs2815));
    bufp->chgBit(oldp+893,(vlSelf->_rs___05Fs3232));
    bufp->chgQData(oldp+894,((0xffffffffffULL & ((IData)(vlSelf->_cp___05Fs9837)
                                                  ? 
                                                 ((0x20000000U 
                                                   & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst)
                                                   ? 
                                                  ((IData)(vlSelf->_cp___05Fs9840)
                                                    ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_29
                                                    : vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_27)
                                                   : 
                                                  ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_v)
                                                    ? 
                                                   (~ 
                                                    ((0xfffffffffcULL 
                                                      & ((~ 
                                                          (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_vsepc 
                                                           >> 2U)) 
                                                         << 2U)) 
                                                     | (QData)((IData)(
                                                                       (3U 
                                                                        & (1U 
                                                                           | ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_vsepc)) 
                                                                              | (2U 
                                                                                & ((~ (IData)(vlSelf->_mc___05Fs2805)) 
                                                                                << 1U)))))))))
                                                    : vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_31))
                                                  : 
                                                 ((IData)(vlSelf->_mc___05Fs2827)
                                                   ? (QData)((IData)(
                                                                     ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_debug)
                                                                       ? 
                                                                      (0x800U 
                                                                       | (8U 
                                                                          & ((~ (IData)(vlSelf->_mc___05Fs2817)) 
                                                                             << 3U)))
                                                                       : 0x800U)))
                                                   : 
                                                  (0xfffffffffcULL 
                                                   & (((IData)(vlSelf->_mc___05Fs2824)
                                                        ? 
                                                       (((QData)((IData)(
                                                                         (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_110 
                                                                          >> 8U))) 
                                                         << 6U) 
                                                        | (QData)((IData)(
                                                                          (0x3fU 
                                                                           & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__cause)))))
                                                        : 
                                                       (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_110 
                                                        >> 2U)) 
                                                      << 2U)))))),40);
    bufp->chgBit(oldp+896,(vlSelf->_mc___05Fs3245));
    bufp->chgBit(oldp+897,(vlSelf->_cp___05Fs10098));
    bufp->chgQData(oldp+898,(vlSelf->_rs___05Fs3469),40);
    bufp->chgBit(oldp+900,(vlSelf->_cp___05Fs9830));
    bufp->chgCData(oldp+901,(((IData)(vlSelf->_cp___05Fs9837)
                               ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__ret_prv)
                               : ((IData)(vlSelf->_cp___05Fs9830)
                                   ? ((IData)(vlSelf->_mc___05Fs2827)
                                       ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_debug)
                                           ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)
                                           : 3U) : 
                                      (1U | (2U & (
                                                   (~ (IData)(vlSelf->_mc___05Fs2823)) 
                                                   << 1U))))
                                   : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)))),2);
    bufp->chgBit(oldp+902,(((IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__intsource_1__DOT__reg_0__DOT__reg_0) 
                            | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mip_seip))));
    bufp->chgBit(oldp+903,(vlSelf->_mc___05Fs2818));
    bufp->chgBit(oldp+904,(vlSelf->_mc___05Fs2817));
    bufp->chgBit(oldp+905,(vlSelf->_cp___05Fs9837));
    bufp->chgBit(oldp+906,(vlSelf->_cp___05Fs9843));
    bufp->chgBit(oldp+907,(vlSelf->_mc___05Fs2831));
    bufp->chgBit(oldp+908,(vlSelf->_mc___05Fs2830));
    bufp->chgBit(oldp+909,(vlSelf->_mc___05Fs2827));
    bufp->chgBit(oldp+910,(vlSelf->_mc___05Fs2823));
    bufp->chgBit(oldp+911,(vlSelf->_mc___05Fs2824));
    bufp->chgBit(oldp+912,(vlSelf->_cp___05Fs10007));
    bufp->chgBit(oldp+913,((1U & ((~ (IData)(vlSelf->_cp___05Fs10085)) 
                                  & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_wxd))))));
    bufp->chgBit(oldp+914,(vlSelf->_cp___05Fs10062));
    bufp->chgQData(oldp+915,((((QData)((IData)(((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__req_dw)
                                                 ? (IData)(
                                                           (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__result 
                                                            >> 0x20U))
                                                 : 
                                                (- (IData)((IData)(vlSelf->_mc___05Fs3217)))))) 
                               << 0x20U) | (QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__loOut)))),64);
    bufp->chgCData(oldp+917,(vlSelf->_rs___05Fs3315),5);
    bufp->chgBit(oldp+918,(vlSelf->_mc___05Fs3111));
    bufp->chgBit(oldp+919,(vlSelf->_mc___05Fs3113));
    bufp->chgBit(oldp+920,(vlSelf->_mc___05Fs3115));
    bufp->chgBit(oldp+921,(vlSelf->_cp___05Fs10057));
    bufp->chgBit(oldp+922,(vlSelf->_cp___05Fs9805));
    bufp->chgCData(oldp+923,(((IData)(vlSelf->_cp___05Fs9810)
                               ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__buf_btb_cfiType)
                               : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_btb_cfiType))),2);
    bufp->chgBit(oldp+924,(((IData)(vlSelf->_cp___05Fs9810)
                             ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__buf_btb_taken)
                             : (IData)(vlSelf->_mc___05Fs2722))));
    bufp->chgCData(oldp+925,(((IData)(vlSelf->_cp___05Fs9810)
                               ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__buf_btb_mask)
                               : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_btb_mask))),2);
    bufp->chgBit(oldp+926,(((IData)(vlSelf->_cp___05Fs9810)
                             ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__buf_btb_bridx)
                             : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_btb_bridx))));
    bufp->chgQData(oldp+927,(((IData)(vlSelf->_cp___05Fs9810)
                               ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__buf_btb_target
                               : vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_btb_target)),39);
    bufp->chgCData(oldp+929,(((IData)(vlSelf->_cp___05Fs9810)
                               ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__buf_btb_entry)
                               : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_btb_entry))),5);
    bufp->chgCData(oldp+930,(((IData)(vlSelf->_cp___05Fs9810)
                               ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__buf_btb_bht_history)
                               : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_btb_bht_history))),8);
    bufp->chgBit(oldp+931,(((IData)(vlSelf->_cp___05Fs9810)
                             ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__buf_btb_bht_value)
                             : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_btb_bht_value))));
    bufp->chgBit(oldp+932,(vlSelf->_mc___05Fs3242));
    bufp->chgBit(oldp+933,(vlSelf->_mc___05Fs3241));
    bufp->chgBit(oldp+934,(vlSelf->_mc___05Fs3240));
    bufp->chgBit(oldp+935,(vlSelf->_mc___05Fs3239));
    bufp->chgBit(oldp+936,(vlSelf->_mc___05Fs3238));
    bufp->chgBit(oldp+937,(vlSelf->_mc___05Fs3237));
    bufp->chgBit(oldp+938,(vlSelf->_mc___05Fs2732));
    bufp->chgBit(oldp+939,(vlSelf->_cp___05Fs9811));
    bufp->chgCData(oldp+940,(((IData)(vlSelf->_mc___05Fs2619)
                               ? 3U : 0x1fU)),7);
    bufp->chgQData(oldp+941,(((IData)(vlSelf->_cp___05Fs10062)
                               ? (((QData)((IData)(
                                                   ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__req_dw)
                                                     ? (IData)(
                                                               (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__result 
                                                                >> 0x20U))
                                                     : 
                                                    (- (IData)((IData)(vlSelf->_mc___05Fs3217)))))) 
                                   << 0x20U) | (QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__loOut)))
                               : 0ULL)),64);
    bufp->chgCData(oldp+943,(((IData)(vlSelf->_cp___05Fs10062)
                               ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__req_tag)
                               : 0U)),5);
    bufp->chgBit(oldp+944,(vlSelf->_cp___05Fs8026));
    bufp->chgBit(oldp+945,(vlSelf->_cp___05Fs7955));
    bufp->chgCData(oldp+946,(((IData)(vlSelf->_cp___05Fs9760)
                               ? 0U : (1U | ((0x7cU 
                                              & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_inst 
                                                 >> 5U)) 
                                             | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_fp) 
                                                << 1U))))),7);
    bufp->chgBit(oldp+947,((1U & ((~ (IData)(vlSelf->_cp___05Fs9760)) 
                                  & (~ ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_hls)
                                         ? (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_inst 
                                            >> 0x14U)
                                         : (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_inst 
                                            >> 0xeU)))))));
    bufp->chgBit(oldp+948,(vlSelf->_cp___05Fs9760));
    bufp->chgBit(oldp+949,((1U & ((~ (IData)(vlSelf->_cp___05Fs9760)) 
                                  & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_111)) 
                                     | ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_fp)) 
                                        & (0U == (0xf80U 
                                                  & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_inst))))))));
    bufp->chgBit(oldp+950,(vlSelf->_cp___05Fs8640));
    bufp->chgBit(oldp+951,(vlSelf->_mc___05Fs998));
    bufp->chgBit(oldp+952,(vlSelf->_rs___05Fs2895));
    bufp->chgBit(oldp+953,(vlSelf->_rs___05Fs2896));
    bufp->chgBit(oldp+954,(vlSelf->_rs___05Fs2897));
    bufp->chgBit(oldp+955,(vlSelf->_cp___05Fs9783));
    bufp->chgBit(oldp+956,(vlSelf->_rs___05Fs2899));
    bufp->chgBit(oldp+957,(vlSelf->_rs___05Fs2900));
    bufp->chgBit(oldp+958,(vlSelf->_rs___05Fs2901));
    bufp->chgQData(oldp+959,(vlSelf->_rs___05Fs2909),44);
    bufp->chgBit(oldp+961,(vlSelf->_rs___05Fs2911));
    bufp->chgBit(oldp+962,(vlSelf->_rs___05Fs2912));
    bufp->chgBit(oldp+963,(vlSelf->_rs___05Fs2913));
    bufp->chgBit(oldp+964,(vlSelf->_rs___05Fs2914));
    bufp->chgBit(oldp+965,(vlSelf->_rs___05Fs2915));
    bufp->chgBit(oldp+966,(vlSelf->_rs___05Fs2916));
    bufp->chgBit(oldp+967,(vlSelf->_rs___05Fs2917));
    bufp->chgBit(oldp+968,(vlSelf->_rs___05Fs2918));
    bufp->chgBit(oldp+969,(vlSelf->_rs___05Fs2904));
    bufp->chgBit(oldp+970,(vlSelf->_cp___05Fs7842));
    bufp->chgQData(oldp+971,((((IData)(vlSelf->_cp___05Fs9252) 
                               & ((IData)(vlSelf->_mc___05Fs1315) 
                                  & ((IData)(vlSelf->_mc___05Fs1311) 
                                     | ((IData)(vlSelf->_mc___05Fs1310) 
                                        | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h1fd10179__0)))))
                               ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data
                               : 0ULL)),64);
    bufp->chgBit(oldp+973,(vlSelf->_rs___05Fs1854));
    bufp->chgBit(oldp+974,(vlSelf->_mc___05Fs2596));
    bufp->chgCData(oldp+975,(vlSelf->_rs___05Fs1923),7);
    bufp->chgCData(oldp+976,(vlSelf->_rs___05Fs1924),5);
    bufp->chgBit(oldp+977,(vlSelf->_rs___05Fs1926));
    bufp->chgCData(oldp+978,(vlSelf->_rs___05Fs1927),2);
    bufp->chgBit(oldp+979,(vlSelf->_rs___05Fs1928));
    bufp->chgCData(oldp+980,(vlSelf->_rs___05Fs1934),8);
    bufp->chgQData(oldp+981,(vlSelf->_rs___05Fs2004),64);
    bufp->chgBit(oldp+983,(vlSelf->_cp___05Fs8638));
    bufp->chgIData(oldp+984,(vlSelf->_rs___05Fs1682),27);
    bufp->chgBit(oldp+985,(vlSelf->_rs___05Fs1691));
    bufp->chgBit(oldp+986,(vlSelf->_rs___05Fs1689));
    bufp->chgBit(oldp+987,(vlSelf->_rs___05Fs1690));
    bufp->chgIData(oldp+988,(((((IData)(vlSelf->_cp___05Fs9289)
                                 ? 0U : ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_79)
                                          ? 2U : ((IData)(vlSelf->_mc___05Fs1268)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelf->_mc___05Fs1267)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h4313730d__0) 
                                                    | (IData)(vlSelf->_mc___05Fs1264)))))) 
                               << 0x14U) | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__probe_bits_address 
                                            >> 0xcU))),22);
    bufp->chgBit(oldp+989,(vlSelf->_cp___05Fs9155));
    bufp->chgBit(oldp+990,(vlSelf->_cp___05Fs9194));
    bufp->chgCData(oldp+991,((0x3fU & ((IData)(vlSelf->_cp___05Fs9283)
                                        ? (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__probe_bits_address 
                                           >> 6U) : 
                                       ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_b_q__DOT___ram_ext_R0_data[0U] 
                                         << 0xfU) | 
                                        (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_b_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0x11U))))),6);
    bufp->chgBit(oldp+992,(vlSelf->_cp___05Fs9153));
    bufp->chgBit(oldp+993,((1U & ((~ (IData)(vlSelf->_cp___05Fs9272)) 
                                  | (~ (IData)(vlSelf->_cp___05Fs7955))))));
    bufp->chgBit(oldp+994,(vlSelf->_cp___05Fs9195));
    bufp->chgIData(oldp+995,(((((IData)(vlSelf->_mc___05Fs1322)
                                 ? 3U : (((IData)(vlSelf->_mc___05Fs1321) 
                                          | (IData)(vlSelf->_mc___05Fs1320))
                                          ? 2U : (IData)(vlSelf->_mc___05Fs1319))) 
                               << 0x14U) | (0xfffffU 
                                            & (IData)(
                                                      (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                                       >> 0xcU))))),22);
    bufp->chgBit(oldp+996,(vlSelf->_cp___05Fs9156));
    bufp->chgBit(oldp+997,(vlSelf->_cp___05Fs9196));
    bufp->chgIData(oldp+998,(((((IData)(vlSelf->_mc___05Fs1293)
                                 ? 0U : (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_correctable_errors_r)
                                                ? (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r 
                                                   >> 0x14U)
                                                : ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_correctable_errors_r_1)
                                                    ? 
                                                   (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r_1 
                                                    >> 0x14U)
                                                    : 
                                                   ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_correctable_errors_r_2)
                                                     ? 
                                                    (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r_2 
                                                     >> 0x14U)
                                                     : 
                                                    (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r_3 
                                                     >> 0x14U)))))) 
                               << 0x14U) | (0xfffffU 
                                            & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_correctable_errors_r)
                                                ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r
                                                : ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_correctable_errors_r_1)
                                                    ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r_1
                                                    : 
                                                   ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_correctable_errors_r_2)
                                                     ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r_2
                                                     : vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r_3)))))),22);
    bufp->chgCData(oldp+999,(((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_uncorrectable_errors) 
                              | ((IData)(vlSelf->_mc___05Fs1293)
                                  ? 0U : ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_correctable_errors_r)
                                           ? 1U : ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_correctable_errors_r_1)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_correctable_errors_r_2)
                                                     ? 4U
                                                     : 
                                                    ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_correctable_errors_r_3) 
                                                     << 3U))))))),4);
    bufp->chgBit(oldp+1000,(vlSelf->_mc___05Fs1351));
    bufp->chgBit(oldp+1001,(vlSelf->_cp___05Fs9157));
    bufp->chgBit(oldp+1002,(vlSelf->_cp___05Fs9199));
    bufp->chgBit(oldp+1003,(vlSelf->_cp___05Fs9209));
    bufp->chgBit(oldp+1004,(vlSelf->_mc___05Fs1164));
    bufp->chgBit(oldp+1005,(vlSelf->_mc___05Fs1165));
    bufp->chgBit(oldp+1006,(vlSelf->_mc___05Fs1163));
    bufp->chgBit(oldp+1007,(vlSelf->_cp___05Fs8918));
    bufp->chgBit(oldp+1008,(vlSelf->_cp___05Fs8919));
    bufp->chgBit(oldp+1009,(vlSelf->_cp___05Fs8920));
    bufp->chgBit(oldp+1010,(vlSelf->_cp___05Fs8921));
    bufp->chgBit(oldp+1011,(vlSelf->_cp___05Fs8923));
    bufp->chgBit(oldp+1012,(vlSelf->_cp___05Fs9198));
    bufp->chgBit(oldp+1013,(vlSelf->_cp___05Fs9222));
    bufp->chgBit(oldp+1014,(vlSelf->_mc___05Fs1161));
    bufp->chgBit(oldp+1015,(vlSelf->_mc___05Fs1299));
    bufp->chgBit(oldp+1016,(vlSelf->_mc___05Fs1218));
    bufp->chgBit(oldp+1017,(vlSelf->_mc___05Fs1340));
    bufp->chgBit(oldp+1018,(vlSelf->_mc___05Fs1315));
    bufp->chgBit(oldp+1019,(vlSelf->_cp___05Fs9219));
    bufp->chgBit(oldp+1020,(vlSelf->_cp___05Fs9220));
    bufp->chgBit(oldp+1021,(vlSelf->_mc___05Fs1231));
    bufp->chgBit(oldp+1022,(vlSelf->_mc___05Fs1295));
    bufp->chgBit(oldp+1023,(vlSelf->_mc___05Fs1254));
    bufp->chgBit(oldp+1024,(vlSelf->_cp___05Fs9296));
    bufp->chgBit(oldp+1025,(vlSelf->_cp___05Fs9252));
    bufp->chgBit(oldp+1026,(vlSelf->_cp___05Fs9275));
    bufp->chgBit(oldp+1027,(vlSelf->_cp___05Fs9280));
    bufp->chgBit(oldp+1028,(vlSelf->_mc___05Fs1277));
    bufp->chgBit(oldp+1029,(((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_valid_likely) 
                             & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_valid) 
                                & (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_valid) 
                                    & (IData)(vlSelf->_mc___05Fs1299)) 
                                   | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_rmw))))));
    bufp->chgBit(oldp+1030,(vlSelf->_cp___05Fs9240));
    bufp->chgBit(oldp+1031,(vlSelf->_mc___05Fs1334));
    bufp->chgBit(oldp+1032,(vlSelf->_mc___05Fs1338));
    bufp->chgCData(oldp+1033,(((IData)(vlSelf->_mc___05Fs1309)
                                ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0)
                                : ((IData)(vlSelf->_mc___05Fs1308)
                                    ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0)
                                    : ((IData)(vlSelf->_mc___05Fs1307)
                                        ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0)
                                        : ((IData)(vlSelf->_mc___05Fs1306)
                                            ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0)
                                            : ((IData)(vlSelf->_mc___05Fs1305)
                                                ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0)
                                                : ((IData)(vlSelf->_mc___05Fs1304)
                                                    ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0)
                                                    : 
                                                   ((IData)(vlSelf->_mc___05Fs1303)
                                                     ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0)
                                                     : 
                                                    ((IData)(vlSelf->_mc___05Fs1302)
                                                      ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0)
                                                      : 
                                                     ((IData)(vlSelf->_mc___05Fs1301)
                                                       ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0)
                                                       : 0U)))))))))),8);
    bufp->chgBit(oldp+1034,(vlSelf->_cp___05Fs9260));
    bufp->chgBit(oldp+1035,(vlSelf->_cp___05Fs10266));
    bufp->chgBit(oldp+1036,(vlSelf->_cp___05Fs9261));
    bufp->chgBit(oldp+1037,(vlSelf->_cp___05Fs10242));
    bufp->chgBit(oldp+1038,(vlSelf->_mc___05Fs1318));
    bufp->chgBit(oldp+1039,(vlSelf->_mc___05Fs1324));
    bufp->chgBit(oldp+1040,(vlSelf->_mc___05Fs1328));
    bufp->chgBit(oldp+1041,(vlSelf->_mc___05Fs1325));
    bufp->chgCData(oldp+1042,(((IData)(vlSelf->_mc___05Fs1340)
                                ? 0U : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h07644e05__0))),8);
    bufp->chgBit(oldp+1043,(vlSelf->_cp___05Fs9299));
    bufp->chgBit(oldp+1044,(vlSelf->_mc___05Fs1348));
    bufp->chgBit(oldp+1045,(vlSelf->_mc___05Fs1350));
    bufp->chgBit(oldp+1046,(vlSelf->_mc___05Fs1204));
    bufp->chgBit(oldp+1047,(vlSelf->_mc___05Fs1201));
    bufp->chgBit(oldp+1048,(vlSelf->_mc___05Fs1202));
    bufp->chgQData(oldp+1049,((0xffffffff00000000ULL 
                               | (QData)((IData)((0x7fffffffU 
                                                  | ((IData)(vlSelf->_mc___05Fs1208) 
                                                     << 0x1fU)))))),64);
    bufp->chgBit(oldp+1051,(vlSelf->_mc___05Fs1199));
    bufp->chgQData(oldp+1052,(((IData)(vlSelf->_cp___05Fs9196)
                                ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_valid)
                                    ? (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_7)) 
                                        << 0x38U) | 
                                       (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_6)) 
                                         << 0x30U) 
                                        | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_5)) 
                                            << 0x28U) 
                                           | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_4)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_3) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_2) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_1) 
                                                                        << 8U) 
                                                                       | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r))))))))))
                                    : vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data)
                                : (((QData)((IData)(
                                                    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                    << 0x32U) | (((QData)((IData)(
                                                                  vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                  << 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                    >> 0xeU))))),64);
    bufp->chgCData(oldp+1054,(((IData)(vlSelf->_cp___05Fs9196)
                                ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dataArb_io_in_0_bits_eccMask)
                                : 0xffU)),8);
    bufp->chgBit(oldp+1055,(vlSelf->_cp___05Fs9193));
    bufp->chgBit(oldp+1056,(vlSelf->_cp___05Fs9160));
    bufp->chgBit(oldp+1057,(vlSelf->_cp___05Fs9161));
    bufp->chgBit(oldp+1058,(vlSelf->_cp___05Fs9162));
    bufp->chgBit(oldp+1059,(vlSelf->_cp___05Fs9163));
    bufp->chgBit(oldp+1060,(vlSelf->_cp___05Fs9164));
    bufp->chgBit(oldp+1061,(vlSelf->_cp___05Fs9165));
    bufp->chgBit(oldp+1062,(vlSelf->_cp___05Fs9166));
    bufp->chgBit(oldp+1063,(vlSelf->_cp___05Fs9167));
    bufp->chgBit(oldp+1064,(vlSelf->_cp___05Fs9168));
    bufp->chgBit(oldp+1065,(vlSelf->_cp___05Fs9169));
    bufp->chgBit(oldp+1066,(vlSelf->_cp___05Fs9170));
    bufp->chgBit(oldp+1067,(vlSelf->_cp___05Fs9171));
    bufp->chgBit(oldp+1068,(vlSelf->_cp___05Fs9172));
    bufp->chgBit(oldp+1069,(vlSelf->_cp___05Fs9173));
    bufp->chgBit(oldp+1070,(vlSelf->_cp___05Fs9174));
    bufp->chgBit(oldp+1071,(vlSelf->_cp___05Fs9175));
    bufp->chgBit(oldp+1072,(vlSelf->_cp___05Fs9176));
    bufp->chgBit(oldp+1073,(vlSelf->_cp___05Fs9177));
    bufp->chgBit(oldp+1074,(vlSelf->_cp___05Fs9178));
    bufp->chgBit(oldp+1075,(vlSelf->_cp___05Fs9179));
    bufp->chgBit(oldp+1076,(vlSelf->_cp___05Fs9180));
    bufp->chgBit(oldp+1077,(vlSelf->_cp___05Fs9181));
    bufp->chgBit(oldp+1078,(vlSelf->_cp___05Fs9182));
    bufp->chgBit(oldp+1079,(vlSelf->_cp___05Fs9183));
    bufp->chgBit(oldp+1080,(vlSelf->_cp___05Fs9184));
    bufp->chgBit(oldp+1081,(vlSelf->_cp___05Fs9185));
    bufp->chgBit(oldp+1082,(vlSelf->_cp___05Fs9186));
    bufp->chgBit(oldp+1083,(vlSelf->_cp___05Fs9187));
    bufp->chgBit(oldp+1084,(vlSelf->_cp___05Fs9188));
    bufp->chgBit(oldp+1085,(vlSelf->_cp___05Fs9189));
    bufp->chgBit(oldp+1086,(vlSelf->_cp___05Fs9190));
    bufp->chgBit(oldp+1087,(vlSelf->_cp___05Fs9191));
    bufp->chgBit(oldp+1088,(vlSelf->_cp___05Fs9192));
    __Vtemp_22[0U] = (IData)(((IData)(vlSelf->_cp___05Fs9196)
                               ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_valid)
                                   ? (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_7)) 
                                       << 0x38U) | 
                                      (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_6)) 
                                        << 0x30U) | 
                                       (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_5)) 
                                         << 0x28U) 
                                        | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_4)) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_3) 
                                                               << 0x18U) 
                                                              | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_2) 
                                                                  << 0x10U) 
                                                                 | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_1) 
                                                                     << 8U) 
                                                                    | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r))))))))))
                                   : vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data)
                               : (((QData)((IData)(
                                                   vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                   << 0x32U) | (((QData)((IData)(
                                                                 vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                 << 0x12U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                   >> 0xeU)))));
    __Vtemp_22[1U] = (IData)((((IData)(vlSelf->_cp___05Fs9196)
                                ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_valid)
                                    ? (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_7)) 
                                        << 0x38U) | 
                                       (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_6)) 
                                         << 0x30U) 
                                        | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_5)) 
                                            << 0x28U) 
                                           | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_4)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_3) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_2) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_1) 
                                                                        << 8U) 
                                                                       | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r))))))))))
                                    : vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data)
                                : (((QData)((IData)(
                                                    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                    << 0x32U) | (((QData)((IData)(
                                                                  vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                  << 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                    >> 0xeU)))) 
                              >> 0x20U));
    __Vtemp_22[2U] = (IData)(((IData)(vlSelf->_cp___05Fs9196)
                               ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_valid)
                                   ? (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_7)) 
                                       << 0x38U) | 
                                      (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_6)) 
                                        << 0x30U) | 
                                       (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_5)) 
                                         << 0x28U) 
                                        | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_4)) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_3) 
                                                               << 0x18U) 
                                                              | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_2) 
                                                                  << 0x10U) 
                                                                 | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_1) 
                                                                     << 8U) 
                                                                    | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r))))))))))
                                   : vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data)
                               : (((QData)((IData)(
                                                   vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                   << 0x32U) | (((QData)((IData)(
                                                                 vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                 << 0x12U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                   >> 0xeU)))));
    __Vtemp_22[3U] = (IData)((((IData)(vlSelf->_cp___05Fs9196)
                                ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_valid)
                                    ? (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_7)) 
                                        << 0x38U) | 
                                       (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_6)) 
                                         << 0x30U) 
                                        | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_5)) 
                                            << 0x28U) 
                                           | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_4)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_3) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_2) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_1) 
                                                                        << 8U) 
                                                                       | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r))))))))))
                                    : vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data)
                                : (((QData)((IData)(
                                                    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                    << 0x32U) | (((QData)((IData)(
                                                                  vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                  << 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                    >> 0xeU)))) 
                              >> 0x20U));
    __Vtemp_22[4U] = (IData)(((IData)(vlSelf->_cp___05Fs9196)
                               ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_valid)
                                   ? (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_7)) 
                                       << 0x38U) | 
                                      (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_6)) 
                                        << 0x30U) | 
                                       (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_5)) 
                                         << 0x28U) 
                                        | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_4)) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_3) 
                                                               << 0x18U) 
                                                              | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_2) 
                                                                  << 0x10U) 
                                                                 | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_1) 
                                                                     << 8U) 
                                                                    | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r))))))))))
                                   : vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data)
                               : (((QData)((IData)(
                                                   vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                   << 0x32U) | (((QData)((IData)(
                                                                 vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                 << 0x12U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                   >> 0xeU)))));
    __Vtemp_22[5U] = (IData)((((IData)(vlSelf->_cp___05Fs9196)
                                ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_valid)
                                    ? (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_7)) 
                                        << 0x38U) | 
                                       (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_6)) 
                                         << 0x30U) 
                                        | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_5)) 
                                            << 0x28U) 
                                           | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_4)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_3) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_2) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_1) 
                                                                        << 8U) 
                                                                       | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r))))))))))
                                    : vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data)
                                : (((QData)((IData)(
                                                    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                    << 0x32U) | (((QData)((IData)(
                                                                  vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                  << 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                    >> 0xeU)))) 
                              >> 0x20U));
    __Vtemp_22[6U] = (IData)(((IData)(vlSelf->_cp___05Fs9196)
                               ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_valid)
                                   ? (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_7)) 
                                       << 0x38U) | 
                                      (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_6)) 
                                        << 0x30U) | 
                                       (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_5)) 
                                         << 0x28U) 
                                        | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_4)) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_3) 
                                                               << 0x18U) 
                                                              | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_2) 
                                                                  << 0x10U) 
                                                                 | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_1) 
                                                                     << 8U) 
                                                                    | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r))))))))))
                                   : vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data)
                               : (((QData)((IData)(
                                                   vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                   << 0x32U) | (((QData)((IData)(
                                                                 vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                 << 0x12U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                   >> 0xeU)))));
    __Vtemp_22[7U] = (IData)((((IData)(vlSelf->_cp___05Fs9196)
                                ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_valid)
                                    ? (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_7)) 
                                        << 0x38U) | 
                                       (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_6)) 
                                         << 0x30U) 
                                        | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_5)) 
                                            << 0x28U) 
                                           | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_4)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_3) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_2) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_1) 
                                                                        << 8U) 
                                                                       | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r))))))))))
                                    : vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data)
                                : (((QData)((IData)(
                                                    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                    << 0x32U) | (((QData)((IData)(
                                                                  vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                  << 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                    >> 0xeU)))) 
                              >> 0x20U));
    bufp->chgWData(oldp+1089,(__Vtemp_22),256);
    bufp->chgBit(oldp+1097,(vlSelf->_cp___05Fs9151));
    bufp->chgBit(oldp+1098,(vlSelf->_rs___05Fs1832));
    bufp->chgBit(oldp+1099,(vlSelf->_rs___05Fs1833));
    bufp->chgBit(oldp+1100,(vlSelf->_rs___05Fs1834));
    bufp->chgBit(oldp+1101,(vlSelf->_rs___05Fs1835));
    bufp->chgBit(oldp+1102,(vlSelf->_rs___05Fs1836));
    bufp->chgBit(oldp+1103,(vlSelf->_rs___05Fs1837));
    bufp->chgBit(oldp+1104,(vlSelf->_rs___05Fs1838));
    bufp->chgBit(oldp+1105,(vlSelf->_rs___05Fs1839));
    bufp->chgBit(oldp+1106,(vlSelf->_rs___05Fs1840));
    bufp->chgBit(oldp+1107,(vlSelf->_rs___05Fs1841));
    bufp->chgBit(oldp+1108,(vlSelf->_rs___05Fs1842));
    bufp->chgBit(oldp+1109,(vlSelf->_rs___05Fs1843));
    bufp->chgBit(oldp+1110,(vlSelf->_rs___05Fs1844));
    bufp->chgBit(oldp+1111,(vlSelf->_rs___05Fs1845));
    bufp->chgBit(oldp+1112,(vlSelf->_rs___05Fs1846));
    bufp->chgBit(oldp+1113,(vlSelf->_rs___05Fs1847));
    bufp->chgBit(oldp+1114,(vlSelf->_mc___05Fs1155));
    bufp->chgBit(oldp+1115,(vlSelf->_mc___05Fs1156));
    bufp->chgBit(oldp+1116,(vlSelf->_mc___05Fs1157));
    bufp->chgBit(oldp+1117,(((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pma_checker___05F7__DOT__legal_address) 
                             & (IData)(vlSelf->_mc___05Fs1109))));
    bufp->chgBit(oldp+1118,(vlSelf->_mc___05Fs1154));
    bufp->chgBit(oldp+1119,(vlSelf->_mc___05Fs1151));
    bufp->chgBit(oldp+1120,(vlSelf->_mc___05Fs1075));
    bufp->chgBit(oldp+1121,(vlSelf->_mc___05Fs1074));
    bufp->chgBit(oldp+1122,(vlSelf->_cp___05Fs8646));
    bufp->chgBit(oldp+1123,(vlSelf->_mc___05Fs1223));
    bufp->chgCData(oldp+1124,(vlSelf->_rs___05Fs1876),2);
    bufp->chgCData(oldp+1125,(vlSelf->_rs___05Fs1877),5);
    bufp->chgBit(oldp+1126,(vlSelf->_mc___05Fs997));
    bufp->chgBit(oldp+1127,(vlSelf->_cp___05Fs8613));
    bufp->chgBit(oldp+1128,(vlSelf->_mc___05Fs1010));
    bufp->chgCData(oldp+1129,(((IData)(vlSelf->_mc___05Fs999)
                                ? 1U : (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_debug) 
                                         << 2U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_prv)))),3);
    bufp->chgBit(oldp+1130,(vlSelf->_mc___05Fs1032));
    bufp->chgBit(oldp+1131,(vlSelf->_mc___05Fs1033));
    bufp->chgBit(oldp+1132,(vlSelf->_mc___05Fs1034));
    bufp->chgBit(oldp+1133,(vlSelf->_mc___05Fs1002));
    bufp->chgBit(oldp+1134,(vlSelf->_mc___05Fs1004));
    bufp->chgBit(oldp+1135,(vlSelf->_cp___05Fs8814));
    bufp->chgBit(oldp+1136,(vlSelf->_mc___05Fs1006));
    bufp->chgBit(oldp+1137,(vlSelf->_cp___05Fs8821));
    bufp->chgBit(oldp+1138,(vlSelf->_mc___05Fs1008));
    bufp->chgBit(oldp+1139,(vlSelf->_cp___05Fs8828));
    bufp->chgBit(oldp+1140,(vlSelf->_mc___05Fs1012));
    bufp->chgBit(oldp+1141,(vlSelf->_mc___05Fs1013));
    bufp->chgBit(oldp+1142,(vlSelf->_mc___05Fs1014));
    bufp->chgBit(oldp+1143,(vlSelf->_mc___05Fs1015));
    bufp->chgBit(oldp+1144,(vlSelf->_mc___05Fs1016));
    bufp->chgBit(oldp+1145,(vlSelf->_mc___05Fs1017));
    bufp->chgBit(oldp+1146,(vlSelf->_mc___05Fs1018));
    bufp->chgBit(oldp+1147,(vlSelf->_mc___05Fs1019));
    bufp->chgBit(oldp+1148,(vlSelf->_mc___05Fs1020));
    bufp->chgBit(oldp+1149,(vlSelf->_mc___05Fs1021));
    bufp->chgBit(oldp+1150,(vlSelf->_mc___05Fs1022));
    bufp->chgBit(oldp+1151,(vlSelf->_mc___05Fs1023));
    bufp->chgBit(oldp+1152,(vlSelf->_mc___05Fs1024));
    bufp->chgBit(oldp+1153,(vlSelf->_mc___05Fs1041));
    bufp->chgBit(oldp+1154,(vlSelf->_mc___05Fs1045));
    bufp->chgBit(oldp+1155,(vlSelf->_mc___05Fs1046));
    bufp->chgBit(oldp+1156,(vlSelf->_mc___05Fs1044));
    bufp->chgBit(oldp+1157,(vlSelf->_mc___05Fs1042));
    bufp->chgBit(oldp+1158,(vlSelf->_mc___05Fs1043));
    bufp->chgBit(oldp+1159,(vlSelf->_mc___05Fs1036));
    bufp->chgBit(oldp+1160,(vlSelf->_mc___05Fs1037));
    bufp->chgBit(oldp+1161,(vlSelf->_mc___05Fs1038));
    bufp->chgBit(oldp+1162,(((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pma__DOT__legal_address) 
                             & (IData)(vlSelf->_mc___05Fs990))));
    bufp->chgBit(oldp+1163,(vlSelf->_mc___05Fs1035));
    bufp->chgCData(oldp+1164,(((IData)(vlSelf->_mc___05Fs999)
                                ? 1U : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_prv))),2);
    bufp->chgBit(oldp+1165,(((IData)(vlSelf->_mc___05Fs979)
                              ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_7) 
                                 & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_r) 
                                    | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_7)))
                              : ((IData)(vlSelf->_mc___05Fs976)
                                  ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_6) 
                                     & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_r) 
                                        | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_6)))
                                  : ((IData)(vlSelf->_mc___05Fs973)
                                      ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_5) 
                                         & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_r) 
                                            | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_5)))
                                      : ((IData)(vlSelf->_mc___05Fs970)
                                          ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_4) 
                                             & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_r) 
                                                | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_4)))
                                          : ((IData)(vlSelf->_mc___05Fs967)
                                              ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_3) 
                                                 & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_r) 
                                                    | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_3)))
                                              : ((IData)(vlSelf->_mc___05Fs964)
                                                  ? 
                                                 ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_2) 
                                                  & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_r) 
                                                     | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_2)))
                                                  : 
                                                 ((IData)(vlSelf->_mc___05Fs961)
                                                   ? 
                                                  ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_1) 
                                                   & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_r) 
                                                      | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_1)))
                                                   : 
                                                  ((IData)(vlSelf->_mc___05Fs958)
                                                    ? 
                                                   ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned) 
                                                    & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_r) 
                                                       | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore)))
                                                    : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0)))))))))));
    bufp->chgBit(oldp+1166,(((IData)(vlSelf->_mc___05Fs979)
                              ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_7) 
                                 & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_w) 
                                    | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_7)))
                              : ((IData)(vlSelf->_mc___05Fs976)
                                  ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_6) 
                                     & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_w) 
                                        | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_6)))
                                  : ((IData)(vlSelf->_mc___05Fs973)
                                      ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_5) 
                                         & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_w) 
                                            | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_5)))
                                      : ((IData)(vlSelf->_mc___05Fs970)
                                          ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_4) 
                                             & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_w) 
                                                | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_4)))
                                          : ((IData)(vlSelf->_mc___05Fs967)
                                              ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_3) 
                                                 & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_w) 
                                                    | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_3)))
                                              : ((IData)(vlSelf->_mc___05Fs964)
                                                  ? 
                                                 ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_2) 
                                                  & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_w) 
                                                     | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_2)))
                                                  : 
                                                 ((IData)(vlSelf->_mc___05Fs961)
                                                   ? 
                                                  ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_1) 
                                                   & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_w) 
                                                      | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_1)))
                                                   : 
                                                  ((IData)(vlSelf->_mc___05Fs958)
                                                    ? 
                                                   ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned) 
                                                    & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_w) 
                                                       | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore)))
                                                    : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0)))))))))));
    bufp->chgBit(oldp+1167,(((IData)(vlSelf->_mc___05Fs979)
                              ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_7) 
                                 & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_x) 
                                    | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_7)))
                              : ((IData)(vlSelf->_mc___05Fs976)
                                  ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_6) 
                                     & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_x) 
                                        | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_6)))
                                  : ((IData)(vlSelf->_mc___05Fs973)
                                      ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_5) 
                                         & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_x) 
                                            | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_5)))
                                      : ((IData)(vlSelf->_mc___05Fs970)
                                          ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_4) 
                                             & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_x) 
                                                | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_4)))
                                          : ((IData)(vlSelf->_mc___05Fs967)
                                              ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_3) 
                                                 & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_x) 
                                                    | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_3)))
                                              : ((IData)(vlSelf->_mc___05Fs964)
                                                  ? 
                                                 ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_2) 
                                                  & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_x) 
                                                     | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_2)))
                                                  : 
                                                 ((IData)(vlSelf->_mc___05Fs961)
                                                   ? 
                                                  ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_1) 
                                                   & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_x) 
                                                      | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_1)))
                                                   : 
                                                  ((IData)(vlSelf->_mc___05Fs958)
                                                    ? 
                                                   ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned) 
                                                    & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_x) 
                                                       | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore)))
                                                    : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0)))))))))));
    bufp->chgBit(oldp+1168,(vlSelf->_mc___05Fs958));
    bufp->chgBit(oldp+1169,(vlSelf->_mc___05Fs961));
    bufp->chgBit(oldp+1170,(vlSelf->_mc___05Fs964));
    bufp->chgBit(oldp+1171,(vlSelf->_mc___05Fs967));
    bufp->chgBit(oldp+1172,(vlSelf->_mc___05Fs970));
    bufp->chgBit(oldp+1173,(vlSelf->_mc___05Fs973));
    bufp->chgBit(oldp+1174,(vlSelf->_mc___05Fs976));
    bufp->chgBit(oldp+1175,(vlSelf->_mc___05Fs979));
    bufp->chgBit(oldp+1176,(vlSelf->_mc___05Fs2449));
    bufp->chgBit(oldp+1177,(vlSelf->_cp___05Fs9801));
    bufp->chgBit(oldp+1178,(vlSelf->_mc___05Fs2425));
    bufp->chgBit(oldp+1179,(vlSelf->_cp___05Fs9758));
    bufp->chgBit(oldp+1180,(vlSelf->_mc___05Fs2351));
    bufp->chgBit(oldp+1181,(vlSelf->_mc___05Fs2376));
    bufp->chgBit(oldp+1182,((1U & ((~ (IData)(vlSelf->_mc___05Fs2379)) 
                                   | ((1U & (IData)(
                                                    (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_8 
                                                     >> 0x3cU))) 
                                      == (0xfffffU 
                                          == (0xfffffU 
                                              & (IData)(
                                                        (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_8 
                                                         >> 0x20U)))))))));
    bufp->chgBit(oldp+1183,(vlSelf->_cp___05Fs9742));
    bufp->chgBit(oldp+1184,(vlSelf->_mc___05Fs2430));
    bufp->chgBit(oldp+1185,((1U & ((~ (IData)(vlSelf->_mc___05Fs2440)) 
                                   | ((1U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wdata_1[1U] 
                                             >> 0x1cU)) 
                                      == (0xfffffU 
                                          == (0xfffffU 
                                              & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wdata_1[1U])))))));
    bufp->chgBit(oldp+1186,(vlSelf->_mc___05Fs2441));
    bufp->chgBit(oldp+1187,(vlSelf->_cp___05Fs9754));
    bufp->chgBit(oldp+1188,(vlSelf->_cp___05Fs9709));
    bufp->chgWData(oldp+1189,(vlSelf->_rs___05Fs2771),65);
    bufp->chgCData(oldp+1192,(vlSelf->_rs___05Fs2772),5);
    bufp->chgCData(oldp+1193,((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_invalidExc_pipe_b) 
                                << 4U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (VL_GTS_III(14, 0x3ceU, (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                                   & ((1U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp) 
                                                           >> 0xbU))) 
                                                      & ((~ 
                                                          ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_detectTininess_pipe_b) 
                                                           & ((~ 
                                                               ((IData)(vlSelf->_mc___05Fs2173)
                                                                 ? 
                                                                ((IData)(vlSelf->_mc___05Fs2169) 
                                                                 & (IData)(
                                                                           (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h3152f987__0 
                                                                            >> 2U)))
                                                                 : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h1ff36051__0))) 
                                                              & (((IData)(vlSelf->_mc___05Fs2173)
                                                                   ? (IData)(
                                                                             (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                              >> 0x36U))
                                                                   : (IData)(
                                                                             (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                              >> 0x35U))) 
                                                                 & ((0U 
                                                                     != vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_6) 
                                                                    & (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_8) 
                                                                        & ((IData)(vlSelf->_mc___05Fs2173)
                                                                            ? (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                                                                >> 2U))
                                                                            : (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                                                                >> 1U)))) 
                                                                       | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                                          & (((IData)(vlSelf->_mc___05Fs2173) 
                                                                              & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                                                                >> 2U))) 
                                                                             | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig))))))))))) 
                                                         & ((IData)(vlSelf->_mc___05Fs2173)
                                                             ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h1ff36051__0)
                                                             : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_3))))))) 
                                            << 1U) 
                                           | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                              | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                 & (VL_GTS_III(14, 0x3ceU, (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                    | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))))))),5);
    bufp->chgBit(oldp+1194,(vlSelf->_cp___05Fs9712));
    bufp->chgBit(oldp+1195,(((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
                             | ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_CIsDominant)) 
                                & (IData)(vlSelf->_mc___05Fs2158)))));
    bufp->chgBit(oldp+1196,((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_signProd)) 
                             | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isInfC) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__opSignC)) 
                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
                                    & ((2U != (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundingMode_stage0_pipe_b)) 
                                       & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_signProd) 
                                          & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__opSignC)))) 
                                   | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
                                       & ((2U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundingMode_stage0_pipe_b)) 
                                          & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_signProd) 
                                             | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__opSignC)))) 
                                      | ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfOut)) 
                                         & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros)) 
                                            & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_CIsDominant)
                                                ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__opSignC)
                                                : ((IData)(vlSelf->_mc___05Fs2158)
                                                    ? 
                                                   (2U 
                                                    == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundingMode_stage0_pipe_b))
                                                    : 
                                                   ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_signProd) 
                                                    ^ (IData)(vlSelf->_mc___05Fs2103))))))))))));
    bufp->chgBit(oldp+1197,(vlSelf->_mc___05Fs2158));
    bufp->chgSData(oldp+1198,((0x1fffU & ((IData)(vlSelf->_mc___05Fs2100)
                                           ? (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                              >> 0x14U)
                                           : ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN) 
                                              - (IData)(0x35U))))),13);
    bufp->chgBit(oldp+1199,(vlSelf->_mc___05Fs2098));
    bufp->chgBit(oldp+1200,(vlSelf->_mc___05Fs2100));
    bufp->chgCData(oldp+1201,(((IData)(vlSelf->_mc___05Fs2097)
                                ? 0U : ((IData)(vlSelf->_mc___05Fs2096)
                                         ? (0x3fU & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN_0))
                                         : 0x21U))),6);
    bufp->chgBit(oldp+1202,(((IData)(vlSelf->_mc___05Fs2098)
                              ? ((~ (IData)((0U != (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN_2)))) 
                                 & (7U == (7U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])))
                              : ((0U != (7U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                 | (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN_2))))));
    bufp->chgBit(oldp+1203,(vlSelf->_mc___05Fs2097));
    bufp->chgCData(oldp+1204,(((IData)(vlSelf->_mc___05Fs2097)
                                ? 0U : ((IData)(vlSelf->_mc___05Fs2096)
                                         ? (0xffU & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN_0))
                                         : 0xa1U))),8);
    bufp->chgBit(oldp+1205,(vlSelf->_mc___05Fs2172));
    bufp->chgBit(oldp+1206,(vlSelf->_mc___05Fs2174));
    bufp->chgBit(oldp+1207,(vlSelf->_rs___05Fs2734));
    bufp->chgBit(oldp+1208,(vlSelf->_mc___05Fs2176));
    bufp->chgBit(oldp+1209,(vlSelf->_mc___05Fs2177));
    bufp->chgBit(oldp+1210,(vlSelf->_mc___05Fs2178));
    bufp->chgBit(oldp+1211,(((IData)(vlSelf->_cp___05Fs9754) 
                             & (0U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_typeTagOut)))));
    bufp->chgQData(oldp+1212,((((QData)((IData)(vlSelf->_mc___05Fs1795)) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_expOut) 
                                                              << 0x17U) 
                                                             | (0x7fffffU 
                                                                & ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                                    << 3U) 
                                                                   | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U] 
                                                                      >> 0x1dU)))))))),33);
    bufp->chgCData(oldp+1214,(vlSelf->_rs___05Fs2643),3);
    bufp->chgBit(oldp+1215,(vlSelf->_rs___05Fs2774));
    bufp->chgQData(oldp+1216,((((QData)((IData)(((~ (IData)(vlSelf->_mc___05Fs2230)) 
                                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z)))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                << 0x17U) 
                                                               & ((((IData)(vlSelf->_mc___05Fs2231)
                                                                     ? 0x3fU
                                                                     : 0x1ffU) 
                                                                   << 0x17U) 
                                                                  & ((((IData)(vlSelf->_mc___05Fs2232)
                                                                        ? 0x6bU
                                                                        : 0x1ffU) 
                                                                      << 0x17U) 
                                                                     & ((0xbf800000U 
                                                                         | (0x40000000U 
                                                                            & ((~ (IData)(vlSelf->_mc___05Fs2233)) 
                                                                               << 0x1eU))) 
                                                                        & (0xdf800000U 
                                                                           | (0x20000000U 
                                                                              & ((~ (IData)(vlSelf->_mc___05Fs2234)) 
                                                                                << 0x1dU))))))) 
                                                              | ((((IData)(vlSelf->_mc___05Fs2232)
                                                                    ? 0x6bU
                                                                    : 0U) 
                                                                  | (((IData)(vlSelf->_mc___05Fs2233)
                                                                       ? 0x17fU
                                                                       : 0U) 
                                                                     | (((IData)(vlSelf->_mc___05Fs2234)
                                                                          ? 0x180U
                                                                          : 0U) 
                                                                        | ((IData)(vlSelf->_mc___05Fs2230)
                                                                            ? 0x1c0U
                                                                            : 0U)))) 
                                                                 << 0x17U)) 
                                                             | (0x7fffffU 
                                                                & (((IData)(vlSelf->_mc___05Fs2235)
                                                                     ? 
                                                                    ((IData)(vlSelf->_mc___05Fs2230) 
                                                                     << 0x16U)
                                                                     : 
                                                                    ((IData)(vlSelf->_mc___05Fs2229)
                                                                      ? 
                                                                     (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                      >> 1U)
                                                                      : vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)) 
                                                                   | (- (IData)((IData)(vlSelf->_mc___05Fs2233)))))))))),33);
    bufp->chgCData(oldp+1218,((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT___divSqrtRecFNToRaw_io_invalidExc) 
                                << 4U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT___divSqrtRecFNToRaw_io_infiniteExc) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                   | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                                      & ((1U 
                                                          != 
                                                          (3U 
                                                           & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z) 
                                                              >> 8U))) 
                                                         & ((~ 
                                                             ((~ 
                                                               ((IData)(vlSelf->_mc___05Fs2229)
                                                                 ? 
                                                                ((IData)(vlSelf->_mc___05Fs2225) 
                                                                 & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_haf133fcb__0 
                                                                    >> 2U))
                                                                 : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb129c4ea__0))) 
                                                              & (((IData)(vlSelf->_mc___05Fs2229)
                                                                   ? 
                                                                  (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                   >> 0x19U)
                                                                   : 
                                                                  (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                   >> 0x18U)) 
                                                                 & ((0U 
                                                                     != vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_5) 
                                                                    & (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_7) 
                                                                        & ((IData)(vlSelf->_mc___05Fs2229)
                                                                            ? 
                                                                           (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
                                                                            >> 1U)
                                                                            : vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z)) 
                                                                       | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                                          & (((IData)(vlSelf->_mc___05Fs2229) 
                                                                              & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
                                                                                >> 1U)) 
                                                                             | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
                                                                                | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notZeroRem_Z))))))))) 
                                                            & ((IData)(vlSelf->_mc___05Fs2229)
                                                                ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb129c4ea__0)
                                                                : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))))) 
                                               << 1U) 
                                              | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                 | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                    & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                       | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))))))),5);
    bufp->chgCData(oldp+1219,(vlSelf->_rs___05Fs2784),3);
    bufp->chgBit(oldp+1220,(vlSelf->_rs___05Fs2778));
    bufp->chgBit(oldp+1221,(vlSelf->_rs___05Fs2779));
    bufp->chgBit(oldp+1222,(vlSelf->_rs___05Fs2780));
    bufp->chgBit(oldp+1223,(vlSelf->_rs___05Fs2781));
    bufp->chgSData(oldp+1224,(vlSelf->_rs___05Fs2782),10);
    bufp->chgBit(oldp+1225,(vlSelf->_mc___05Fs1795));
    bufp->chgBit(oldp+1226,(vlSelf->_cp___05Fs9714));
    bufp->chgBit(oldp+1227,(vlSelf->_mc___05Fs2186));
    bufp->chgBit(oldp+1228,(vlSelf->_mc___05Fs2189));
    bufp->chgBit(oldp+1229,(vlSelf->_mc___05Fs2210));
    bufp->chgBit(oldp+1230,(vlSelf->_mc___05Fs2228));
    bufp->chgBit(oldp+1231,(vlSelf->_mc___05Fs2230));
    bufp->chgBit(oldp+1232,(vlSelf->_mc___05Fs2232));
    bufp->chgBit(oldp+1233,(vlSelf->_mc___05Fs2233));
    bufp->chgBit(oldp+1234,(vlSelf->_mc___05Fs2234));
    bufp->chgBit(oldp+1235,(((IData)(vlSelf->_cp___05Fs9754) 
                             & (1U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_typeTagOut)))));
    bufp->chgWData(oldp+1236,(vlSelf->_rs___05Fs2647),65);
    bufp->chgWData(oldp+1239,(vlSelf->_rs___05Fs2648),65);
    bufp->chgBit(oldp+1242,(vlSelf->_rs___05Fs2789));
    __Vtemp_23[0U] = (IData)((((QData)((IData)(vlSelf->__VdfgTmp_he1742db9__0)) 
                               << 0x34U) | (0xfffffffffffffULL 
                                            & (((IData)(vlSelf->_mc___05Fs2296)
                                                 ? 
                                                ((QData)((IData)(vlSelf->_mc___05Fs2291)) 
                                                 << 0x33U)
                                                 : 
                                                ((IData)(vlSelf->_mc___05Fs2290)
                                                  ? 
                                                 (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                  >> 1U)
                                                  : vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)) 
                                               | (- (QData)((IData)(vlSelf->_mc___05Fs2294)))))));
    __Vtemp_23[1U] = (IData)(((((QData)((IData)(vlSelf->__VdfgTmp_he1742db9__0)) 
                                << 0x34U) | (0xfffffffffffffULL 
                                             & (((IData)(vlSelf->_mc___05Fs2296)
                                                  ? 
                                                 ((QData)((IData)(vlSelf->_mc___05Fs2291)) 
                                                  << 0x33U)
                                                  : 
                                                 ((IData)(vlSelf->_mc___05Fs2290)
                                                   ? 
                                                  (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                   >> 1U)
                                                   : vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)) 
                                                | (- (QData)((IData)(vlSelf->_mc___05Fs2294)))))) 
                              >> 0x20U));
    __Vtemp_23[2U] = ((~ (IData)(vlSelf->_mc___05Fs2291)) 
                      & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z));
    bufp->chgWData(oldp+1243,(__Vtemp_23),65);
    bufp->chgCData(oldp+1246,((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT___divSqrtRecFNToRaw_io_invalidExc) 
                                << 4U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT___divSqrtRecFNToRaw_io_infiniteExc) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                & (VL_GTS_III(14, 0x3ceU, (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                   | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                                      & ((1U 
                                                          != 
                                                          (3U 
                                                           & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z) 
                                                              >> 0xbU))) 
                                                         & ((~ 
                                                             ((~ 
                                                               ((IData)(vlSelf->_mc___05Fs2290)
                                                                 ? 
                                                                ((IData)(vlSelf->_mc___05Fs2286) 
                                                                 & (IData)(
                                                                           (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h3152f987__0 
                                                                            >> 2U)))
                                                                 : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h1ff36051__0))) 
                                                              & (((IData)(vlSelf->_mc___05Fs2290)
                                                                   ? (IData)(
                                                                             (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                              >> 0x36U))
                                                                   : (IData)(
                                                                             (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                              >> 0x35U))) 
                                                                 & ((0U 
                                                                     != vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_6) 
                                                                    & (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_8) 
                                                                        & ((IData)(vlSelf->_mc___05Fs2290)
                                                                            ? (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
                                                                                >> 1U))
                                                                            : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z))) 
                                                                       | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                                          & (((IData)(vlSelf->_mc___05Fs2290) 
                                                                              & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
                                                                                >> 1U))) 
                                                                             | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z) 
                                                                                | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notZeroRem_Z))))))))) 
                                                            & ((IData)(vlSelf->_mc___05Fs2290)
                                                                ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h1ff36051__0)
                                                                : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_3))))))) 
                                               << 1U) 
                                              | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                 | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                    & (VL_GTS_III(14, 0x3ceU, (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                       | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))))))),5);
    bufp->chgCData(oldp+1247,(vlSelf->_rs___05Fs2799),3);
    bufp->chgBit(oldp+1248,(vlSelf->_rs___05Fs2793));
    bufp->chgBit(oldp+1249,(vlSelf->_rs___05Fs2794));
    bufp->chgBit(oldp+1250,(vlSelf->_rs___05Fs2795));
    bufp->chgBit(oldp+1251,(vlSelf->_rs___05Fs2796));
    bufp->chgSData(oldp+1252,(vlSelf->_rs___05Fs2797),13);
    bufp->chgBit(oldp+1253,(vlSelf->_mc___05Fs1810));
    bufp->chgBit(oldp+1254,((1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__rawA_isNaN) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                   >> 0x1dU)))) 
                                      | (IData)(vlSelf->_mc___05Fs1810))))));
    bufp->chgBit(oldp+1255,(vlSelf->_cp___05Fs9718));
    bufp->chgBit(oldp+1256,(vlSelf->_mc___05Fs2241));
    bufp->chgBit(oldp+1257,(vlSelf->_mc___05Fs2244));
    bufp->chgBit(oldp+1258,(vlSelf->_mc___05Fs2265));
    bufp->chgBit(oldp+1259,(vlSelf->_mc___05Fs2289));
    bufp->chgBit(oldp+1260,(vlSelf->_mc___05Fs2291));
    bufp->chgBit(oldp+1261,(vlSelf->_mc___05Fs2293));
    bufp->chgBit(oldp+1262,(vlSelf->_mc___05Fs2294));
    bufp->chgBit(oldp+1263,(vlSelf->_mc___05Fs2295));
    bufp->chgBit(oldp+1264,(vlSelf->_cp___05Fs9731));
    bufp->chgBit(oldp+1265,(vlSelf->_cp___05Fs9733));
    bufp->chgBit(oldp+1266,(((IData)(vlSelf->_cp___05Fs9731) 
                             | ((0x7fffU == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_19)) 
                                | ((0x7fffU == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_20)) 
                                   | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT____VdfgTmp_h12421854__0))))));
    bufp->chgBit(oldp+1267,(((IData)(vlSelf->_cp___05Fs9735) 
                             | ((IData)(((0x53U == 
                                          (0xc00007fU 
                                           & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                         & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h00b2f4b4__0))) 
                                | (IData)(vlSelf->_cp___05Fs9733)))));
    bufp->chgBit(oldp+1268,(vlSelf->_cp___05Fs9691));
    bufp->chgBit(oldp+1269,(vlSelf->_rs___05Fs2650));
    bufp->chgCData(oldp+1270,(((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_wflags)
                                ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_ren2)
                                    ? (0x10U & ((((~ 
                                                   (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                    >> 0x13U)) 
                                                  & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__rawA_isNaN)) 
                                                 | (((~ 
                                                      (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                       >> 0x13U)) 
                                                     & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__rawB_isNaN)) 
                                                    | ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__ordered)) 
                                                       & (~ 
                                                          ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm) 
                                                           >> 1U))))) 
                                                << 4U))
                                    : ((2U & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_typ))
                                        ? ((((IData)(vlSelf->_mc___05Fs1809) 
                                             | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__common_overflow)) 
                                            << 4U) 
                                           | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT____VdfgTmp_hf60e2de1__0))
                                        : (((IData)(vlSelf->_cp___05Fs9696) 
                                            << 4U) 
                                           | ((~ (IData)(vlSelf->_cp___05Fs9696)) 
                                              & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT____VdfgTmp_hf60e2de1__0)))))
                                : 0U)),5);
    bufp->chgBit(oldp+1271,(vlSelf->_mc___05Fs1839));
    bufp->chgBit(oldp+1272,(vlSelf->_mc___05Fs1808));
    bufp->chgBit(oldp+1273,(vlSelf->_mc___05Fs1813));
    bufp->chgBit(oldp+1274,(vlSelf->_mc___05Fs1811));
    bufp->chgBit(oldp+1275,(vlSelf->_cp___05Fs9696));
    bufp->chgBit(oldp+1276,(vlSelf->_mc___05Fs1797));
    bufp->chgCData(oldp+1277,((((IData)(vlSelf->_mc___05Fs1809) 
                                << 2U) | ((((~ (IData)(vlSelf->_mc___05Fs1809)) 
                                            & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__common_overflow)) 
                                           << 1U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT____VdfgTmp_hf60e2de1__0)))),3);
    bufp->chgQData(oldp+1278,(((- (QData)((IData)(vlSelf->_mc___05Fs1795))) 
                               ^ (((QData)((IData)(
                                                   vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[3U])) 
                                   << 0x2cU) | (((QData)((IData)(
                                                                 vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[2U])) 
                                                 << 0xcU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[1U])) 
                                                   >> 0x14U))))),64);
    bufp->chgBit(oldp+1280,(vlSelf->_mc___05Fs1809));
    bufp->chgBit(oldp+1281,(((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__ordered) 
                             & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__bothZeros) 
                                | (((IData)(vlSelf->_mc___05Fs1795) 
                                    == (1U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U])) 
                                   & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__bothInfs) 
                                      | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__common_eqMags)))))));
    bufp->chgCData(oldp+1282,((((IData)(vlSelf->_mc___05Fs1809) 
                                << 2U) | ((((~ (IData)(vlSelf->_mc___05Fs1809)) 
                                            & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__common_overflow)) 
                                           << 1U) | 
                                          ((~ (IData)(vlSelf->_mc___05Fs1809)) 
                                           & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__common_overflow)) 
                                              & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__common_inexact)))))),3);
    bufp->chgBit(oldp+1283,(vlSelf->_cp___05Fs9701));
    bufp->chgWData(oldp+1284,(vlSelf->_rs___05Fs2701),65);
    bufp->chgCData(oldp+1287,(vlSelf->_rs___05Fs2702),5);
    bufp->chgBit(oldp+1288,(vlSelf->_mc___05Fs2093));
    bufp->chgBit(oldp+1289,(vlSelf->_mc___05Fs2092));
    bufp->chgQData(oldp+1290,((((QData)((IData)(((~ (IData)(vlSelf->_mc___05Fs2083)) 
                                                 & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[2U]))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                << 0x17U) 
                                                               & ((((IData)(vlSelf->_mc___05Fs2084)
                                                                     ? 0x3fU
                                                                     : 0x1ffU) 
                                                                   << 0x17U) 
                                                                  & ((((IData)(vlSelf->_mc___05Fs2085)
                                                                        ? 0x6bU
                                                                        : 0x1ffU) 
                                                                      << 0x17U) 
                                                                     & ((0xbf800000U 
                                                                         | (0x40000000U 
                                                                            & ((~ (IData)(vlSelf->_mc___05Fs2086)) 
                                                                               << 0x1eU))) 
                                                                        & (0xdf800000U 
                                                                           | (0x20000000U 
                                                                              & ((~ (IData)(vlSelf->_mc___05Fs2087)) 
                                                                                << 0x1dU))))))) 
                                                              | ((((IData)(vlSelf->_mc___05Fs2085)
                                                                    ? 0x6bU
                                                                    : 0U) 
                                                                  | (((IData)(vlSelf->_mc___05Fs2086)
                                                                       ? 0x17fU
                                                                       : 0U) 
                                                                     | (((IData)(vlSelf->_mc___05Fs2087)
                                                                          ? 0x180U
                                                                          : 0U) 
                                                                        | ((IData)(vlSelf->_mc___05Fs2083)
                                                                            ? 0x1c0U
                                                                            : 0U)))) 
                                                                 << 0x17U)) 
                                                             | (0x7fffffU 
                                                                & (((IData)(vlSelf->_mc___05Fs2088)
                                                                     ? 
                                                                    ((IData)(vlSelf->_mc___05Fs2083) 
                                                                     << 0x16U)
                                                                     : vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__roundedSig) 
                                                                   | (- (IData)((IData)(vlSelf->_mc___05Fs2086)))))))))),33);
    bufp->chgCData(oldp+1292,((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT____Vcellinp__roundAnyRawFNToRecFN__io_invalidExc) 
                                << 4U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (VL_GTS_III(15, 0x6bU, (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                                   & (VL_GTS_III(6, 1U, 
                                                                 (0x3fU 
                                                                  & (((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[1U] 
                                                                       >> 0x14U) 
                                                                      - (IData)(0x700U)) 
                                                                     >> 8U))) 
                                                      & ((~ 
                                                          ((~ 
                                                            ((IData)(vlSelf->_mc___05Fs2079) 
                                                             & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb2fc1c1b__0 
                                                                >> 1U))) 
                                                           & ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                               >> 0x18U) 
                                                              & ((0U 
                                                                  != vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___GEN_4) 
                                                                 & (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___GEN_6) 
                                                                     & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[0U] 
                                                                        >> 0x1cU)) 
                                                                    | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                                       & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fffffffU 
                                                                                & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[0U]))))))))) 
                                                         & ((IData)(vlSelf->_mc___05Fs2079) 
                                                            & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb2fc1c1b__0)))))) 
                                            << 1U) 
                                           | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                              | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                 & (VL_GTS_III(15, 0x6bU, (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                    | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))))))),5);
    bufp->chgBit(oldp+1293,(vlSelf->_mc___05Fs2082));
    bufp->chgBit(oldp+1294,(vlSelf->_mc___05Fs2083));
    bufp->chgBit(oldp+1295,(vlSelf->_mc___05Fs2085));
    bufp->chgBit(oldp+1296,(vlSelf->_mc___05Fs2086));
    bufp->chgBit(oldp+1297,(vlSelf->_mc___05Fs2087));
    bufp->chgBit(oldp+1298,(vlSelf->_cp___05Fs9697));
    bufp->chgWData(oldp+1299,(vlSelf->_rs___05Fs2673),65);
    bufp->chgCData(oldp+1302,(vlSelf->_rs___05Fs2674),5);
    bufp->chgBit(oldp+1303,(vlSelf->_mc___05Fs2043));
    bufp->chgBit(oldp+1304,(vlSelf->_mc___05Fs2044));
    bufp->chgBit(oldp+1305,(vlSelf->_mc___05Fs2045));
    bufp->chgBit(oldp+1306,(vlSelf->_mc___05Fs2068));
    bufp->chgCData(oldp+1307,(((IData)(vlSelf->_mc___05Fs2013)
                                ? 0U : ((IData)(vlSelf->_mc___05Fs2012)
                                         ? 1U : ((IData)(vlSelf->_mc___05Fs2011)
                                                  ? 2U
                                                  : 
                                                 ((IData)(vlSelf->_mc___05Fs2010)
                                                   ? 3U
                                                   : 
                                                  ((IData)(vlSelf->_mc___05Fs2009)
                                                    ? 4U
                                                    : 
                                                   ((IData)(vlSelf->_mc___05Fs2008)
                                                     ? 5U
                                                     : 
                                                    ((IData)(vlSelf->_mc___05Fs2007)
                                                      ? 6U
                                                      : 
                                                     ((IData)(vlSelf->_mc___05Fs2006)
                                                       ? 7U
                                                       : 
                                                      ((IData)(vlSelf->_mc___05Fs2005)
                                                        ? 8U
                                                        : 
                                                       ((IData)(vlSelf->_mc___05Fs2004)
                                                         ? 9U
                                                         : 
                                                        ((IData)(vlSelf->_mc___05Fs2003)
                                                          ? 0xaU
                                                          : 
                                                         ((IData)(vlSelf->_mc___05Fs2002)
                                                           ? 0xbU
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs2001)
                                                            ? 0xcU
                                                            : 
                                                           ((IData)(vlSelf->_mc___05Fs2000)
                                                             ? 0xdU
                                                             : 
                                                            ((IData)(vlSelf->_mc___05Fs1999)
                                                              ? 0xeU
                                                              : 
                                                             ((IData)(vlSelf->_mc___05Fs1998)
                                                               ? 0xfU
                                                               : 
                                                              ((IData)(vlSelf->_mc___05Fs1997)
                                                                ? 0x10U
                                                                : 
                                                               ((IData)(vlSelf->_mc___05Fs1996)
                                                                 ? 0x11U
                                                                 : 
                                                                ((IData)(vlSelf->_mc___05Fs1995)
                                                                  ? 0x12U
                                                                  : 
                                                                 ((IData)(vlSelf->_mc___05Fs1994)
                                                                   ? 0x13U
                                                                   : 
                                                                  ((IData)(vlSelf->_mc___05Fs1993)
                                                                    ? 0x14U
                                                                    : 
                                                                   ((IData)(vlSelf->_mc___05Fs1992)
                                                                     ? 0x15U
                                                                     : 0x16U))))))))))))))))))))))),5);
    bufp->chgBit(oldp+1308,(vlSelf->_mc___05Fs2069));
    bufp->chgBit(oldp+1309,(vlSelf->_mc___05Fs2070));
    bufp->chgBit(oldp+1310,((1U & (~ (IData)(vlSelf->_mc___05Fs2072)))));
    bufp->chgQData(oldp+1311,((((QData)((IData)(vlSelf->_mc___05Fs1853)) 
                                << 0x20U) | (QData)((IData)(
                                                            (((((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___GEN[1U] 
                                                                 >> 0x1fU)
                                                                 ? 0x1ffU
                                                                 : 0x3fU) 
                                                               & ((IData)(0x80U) 
                                                                  + 
                                                                  ((0x80U 
                                                                    | (IData)(vlSelf->__VdfgTmp_hd01f357c__0)) 
                                                                   + 
                                                                   (3U 
                                                                    & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                       >> 0x18U))))) 
                                                              << 0x17U) 
                                                             | ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___GEN[1U] 
                                                                 >> 0x1fU)
                                                                 ? 
                                                                (0x7fffffU 
                                                                 & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)
                                                                 : 0U)))))),33);
    bufp->chgBit(oldp+1313,(vlSelf->_mc___05Fs1853));
    bufp->chgBit(oldp+1314,(vlSelf->_mc___05Fs1847));
    bufp->chgBit(oldp+1315,(vlSelf->_mc___05Fs1845));
    bufp->chgBit(oldp+1316,(vlSelf->_mc___05Fs1919));
    bufp->chgBit(oldp+1317,(vlSelf->_cp___05Fs9747));
    bufp->chgBit(oldp+1318,(vlSelf->_cp___05Fs9688));
    __Vtemp_24[0U] = (IData)(((((QData)((IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[0U] 
                                                 >> 0x1fU))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x80000000U 
                                                              & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[1U] 
                                                                 << 0xbU)) 
                                                             | (0x7fffffffU 
                                                                & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[0U]))))) 
                              | ((IData)(vlSelf->_mc___05Fs2393)
                                  ? 0ULL : 0xe0400000ULL)));
    __Vtemp_24[1U] = (IData)((((((QData)((IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[0U] 
                                                  >> 0x1fU))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[1U] 
                                                                  << 0xbU)) 
                                                              | (0x7fffffffU 
                                                                 & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[0U]))))) 
                               | ((IData)(vlSelf->_mc___05Fs2393)
                                   ? 0ULL : 0xe0400000ULL)) 
                              >> 0x20U));
    __Vtemp_24[2U] = 0U;
    bufp->chgWData(oldp+1319,(__Vtemp_24),65);
    __Vtemp_25[0U] = (IData)((((QData)((IData)(((~ (IData)(vlSelf->_mc___05Fs1787)) 
                                                & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sign)))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                               << 0x17U) 
                                                              & ((((IData)(vlSelf->_mc___05Fs1788)
                                                                    ? 0x3fU
                                                                    : 0x1ffU) 
                                                                  << 0x17U) 
                                                                 & ((((IData)(vlSelf->_mc___05Fs1789)
                                                                       ? 0x6bU
                                                                       : 0x1ffU) 
                                                                     << 0x17U) 
                                                                    & ((0xbf800000U 
                                                                        | (0x40000000U 
                                                                           & ((~ (IData)(vlSelf->_mc___05Fs1790)) 
                                                                              << 0x1eU))) 
                                                                       & (0xdf800000U 
                                                                          | (0x20000000U 
                                                                             & ((~ (IData)(vlSelf->_mc___05Fs1791)) 
                                                                                << 0x1dU))))))) 
                                                             | ((((IData)(vlSelf->_mc___05Fs1789)
                                                                   ? 0x6bU
                                                                   : 0U) 
                                                                 | (((IData)(vlSelf->_mc___05Fs1790)
                                                                      ? 0x17fU
                                                                      : 0U) 
                                                                    | (((IData)(vlSelf->_mc___05Fs1791)
                                                                         ? 0x180U
                                                                         : 0U) 
                                                                       | ((IData)(vlSelf->_mc___05Fs1787)
                                                                           ? 0x1c0U
                                                                           : 0U)))) 
                                                                << 0x17U)) 
                                                            | (0x7fffffU 
                                                               & (((IData)(vlSelf->_mc___05Fs1792)
                                                                    ? 
                                                                   ((IData)(vlSelf->_mc___05Fs1787) 
                                                                    << 0x16U)
                                                                    : 
                                                                   ((IData)(vlSelf->_mc___05Fs1786)
                                                                     ? 
                                                                    (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                     >> 1U)
                                                                     : vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)) 
                                                                  | (- (IData)((IData)(vlSelf->_mc___05Fs1790))))))))));
    __Vtemp_25[1U] = (IData)(((((QData)((IData)(((~ (IData)(vlSelf->_mc___05Fs1787)) 
                                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sign)))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                << 0x17U) 
                                                               & ((((IData)(vlSelf->_mc___05Fs1788)
                                                                     ? 0x3fU
                                                                     : 0x1ffU) 
                                                                   << 0x17U) 
                                                                  & ((((IData)(vlSelf->_mc___05Fs1789)
                                                                        ? 0x6bU
                                                                        : 0x1ffU) 
                                                                      << 0x17U) 
                                                                     & ((0xbf800000U 
                                                                         | (0x40000000U 
                                                                            & ((~ (IData)(vlSelf->_mc___05Fs1790)) 
                                                                               << 0x1eU))) 
                                                                        & (0xdf800000U 
                                                                           | (0x20000000U 
                                                                              & ((~ (IData)(vlSelf->_mc___05Fs1791)) 
                                                                                << 0x1dU))))))) 
                                                              | ((((IData)(vlSelf->_mc___05Fs1789)
                                                                    ? 0x6bU
                                                                    : 0U) 
                                                                  | (((IData)(vlSelf->_mc___05Fs1790)
                                                                       ? 0x17fU
                                                                       : 0U) 
                                                                     | (((IData)(vlSelf->_mc___05Fs1791)
                                                                          ? 0x180U
                                                                          : 0U) 
                                                                        | ((IData)(vlSelf->_mc___05Fs1787)
                                                                            ? 0x1c0U
                                                                            : 0U)))) 
                                                                 << 0x17U)) 
                                                             | (0x7fffffU 
                                                                & (((IData)(vlSelf->_mc___05Fs1792)
                                                                     ? 
                                                                    ((IData)(vlSelf->_mc___05Fs1787) 
                                                                     << 0x16U)
                                                                     : 
                                                                    ((IData)(vlSelf->_mc___05Fs1786)
                                                                      ? 
                                                                     (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                      >> 1U)
                                                                      : vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)) 
                                                                   | (- (IData)((IData)(vlSelf->_mc___05Fs1790))))))))) 
                              >> 0x20U));
    __Vtemp_25[2U] = 0U;
    bufp->chgWData(oldp+1322,(__Vtemp_25),65);
    bufp->chgCData(oldp+1325,((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_invalidExc_pipe_b) 
                                << 4U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                                   & ((1U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp) 
                                                           >> 8U))) 
                                                      & ((~ 
                                                          ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_detectTininess_pipe_b) 
                                                           & ((~ 
                                                               ((IData)(vlSelf->_mc___05Fs1786)
                                                                 ? 
                                                                ((IData)(vlSelf->_mc___05Fs1782) 
                                                                 & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_haf133fcb__0 
                                                                    >> 2U))
                                                                 : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb129c4ea__0))) 
                                                              & (((IData)(vlSelf->_mc___05Fs1786)
                                                                   ? 
                                                                  (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                   >> 0x19U)
                                                                   : 
                                                                  (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                   >> 0x18U)) 
                                                                 & ((0U 
                                                                     != vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_5) 
                                                                    & (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_7) 
                                                                        & ((IData)(vlSelf->_mc___05Fs1786)
                                                                            ? 
                                                                           (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                                                            >> 2U)
                                                                            : 
                                                                           (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                                                            >> 1U))) 
                                                                       | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                                          & (((IData)(vlSelf->_mc___05Fs1786) 
                                                                              & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                                                                >> 2U)) 
                                                                             | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig)))))))))) 
                                                         & ((IData)(vlSelf->_mc___05Fs1786)
                                                             ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb129c4ea__0)
                                                             : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))))) 
                                            << 1U) 
                                           | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                              | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                 & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                    | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))))))),5);
    bufp->chgQData(oldp+1326,((((QData)((IData)(((~ (IData)(vlSelf->_mc___05Fs1787)) 
                                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sign)))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                                                << 0x17U) 
                                                               & ((((IData)(vlSelf->_mc___05Fs1788)
                                                                     ? 0x3fU
                                                                     : 0x1ffU) 
                                                                   << 0x17U) 
                                                                  & ((((IData)(vlSelf->_mc___05Fs1789)
                                                                        ? 0x6bU
                                                                        : 0x1ffU) 
                                                                      << 0x17U) 
                                                                     & ((0xbf800000U 
                                                                         | (0x40000000U 
                                                                            & ((~ (IData)(vlSelf->_mc___05Fs1790)) 
                                                                               << 0x1eU))) 
                                                                        & (0xdf800000U 
                                                                           | (0x20000000U 
                                                                              & ((~ (IData)(vlSelf->_mc___05Fs1791)) 
                                                                                << 0x1dU))))))) 
                                                              | ((((IData)(vlSelf->_mc___05Fs1789)
                                                                    ? 0x6bU
                                                                    : 0U) 
                                                                  | (((IData)(vlSelf->_mc___05Fs1790)
                                                                       ? 0x17fU
                                                                       : 0U) 
                                                                     | (((IData)(vlSelf->_mc___05Fs1791)
                                                                          ? 0x180U
                                                                          : 0U) 
                                                                        | ((IData)(vlSelf->_mc___05Fs1787)
                                                                            ? 0x1c0U
                                                                            : 0U)))) 
                                                                 << 0x17U)) 
                                                             | (0x7fffffU 
                                                                & (((IData)(vlSelf->_mc___05Fs1792)
                                                                     ? 
                                                                    ((IData)(vlSelf->_mc___05Fs1787) 
                                                                     << 0x16U)
                                                                     : 
                                                                    ((IData)(vlSelf->_mc___05Fs1786)
                                                                      ? 
                                                                     (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                      >> 1U)
                                                                      : vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)) 
                                                                   | (- (IData)((IData)(vlSelf->_mc___05Fs1790)))))))))),33);
    bufp->chgBit(oldp+1328,(((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
                             | ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_CIsDominant)) 
                                & (IData)(vlSelf->_mc___05Fs1777)))));
    bufp->chgBit(oldp+1329,((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_signProd)) 
                             | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isInfC) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__opSignC)) 
                                | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
                                    & ((2U != (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundingMode_stage0_pipe_b)) 
                                       & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_signProd) 
                                          & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__opSignC)))) 
                                   | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
                                       & ((2U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundingMode_stage0_pipe_b)) 
                                          & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_signProd) 
                                             | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__opSignC)))) 
                                      | ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfOut)) 
                                         & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros)) 
                                            & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_CIsDominant)
                                                ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__opSignC)
                                                : ((IData)(vlSelf->_mc___05Fs1777)
                                                    ? 
                                                   (2U 
                                                    == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundingMode_stage0_pipe_b))
                                                    : 
                                                   ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_signProd) 
                                                    ^ (IData)(vlSelf->_mc___05Fs1751))))))))))));
    bufp->chgBit(oldp+1330,(vlSelf->_mc___05Fs1777));
    bufp->chgSData(oldp+1331,((0x3ffU & ((IData)(vlSelf->_mc___05Fs1748)
                                          ? (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                             >> 0x17U)
                                          : ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN) 
                                             - (IData)(0x18U))))),10);
    bufp->chgBit(oldp+1332,(vlSelf->_mc___05Fs1746));
    bufp->chgBit(oldp+1333,(vlSelf->_mc___05Fs1748));
    bufp->chgCData(oldp+1334,(((IData)(vlSelf->_mc___05Fs1745)
                                ? 0U : ((IData)(vlSelf->_mc___05Fs1744)
                                         ? (0x1fU & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN_0))
                                         : 0xaU))),5);
    bufp->chgBit(oldp+1335,(((IData)(vlSelf->_mc___05Fs1746)
                              ? ((~ (IData)((0U != (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN_2)))) 
                                 & (7U == (7U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])))
                              : ((0U != (7U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                 | (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN_2))))));
    bufp->chgBit(oldp+1336,(vlSelf->_mc___05Fs1745));
    bufp->chgCData(oldp+1337,(((IData)(vlSelf->_mc___05Fs1745)
                                ? 0U : ((IData)(vlSelf->_mc___05Fs1744)
                                         ? (0x7fU & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN_0))
                                         : 0x4aU))),7);
    bufp->chgBit(oldp+1338,(vlSelf->_mc___05Fs1785));
    bufp->chgBit(oldp+1339,(vlSelf->_mc___05Fs1787));
    bufp->chgBit(oldp+1340,(vlSelf->_rs___05Fs2590));
    bufp->chgBit(oldp+1341,(vlSelf->_mc___05Fs1789));
    bufp->chgBit(oldp+1342,(vlSelf->_mc___05Fs1790));
    bufp->chgBit(oldp+1343,(vlSelf->_mc___05Fs1791));
    bufp->chgBit(oldp+1344,(vlSelf->_cp___05Fs8444));
    bufp->chgBit(oldp+1345,(vlSelf->_cp___05Fs9379));
    bufp->chgBit(oldp+1346,(vlSelf->_mc___05Fs1403));
    bufp->chgBit(oldp+1347,(vlSelf->_cp___05Fs8331));
    bufp->chgBit(oldp+1348,(vlSelf->_cp___05Fs9377));
    bufp->chgBit(oldp+1349,((1U & (~ (IData)(vlSelf->_cp___05Fs9380)))));
    bufp->chgIData(oldp+1350,(vlSelf->_rs___05Fs2283),27);
    bufp->chgBit(oldp+1351,(vlSelf->_rs___05Fs2292));
    bufp->chgBit(oldp+1352,(vlSelf->_rs___05Fs2290));
    bufp->chgBit(oldp+1353,(vlSelf->_rs___05Fs2291));
    bufp->chgBit(oldp+1354,(vlSelf->_cp___05Fs9682));
    bufp->chgBit(oldp+1355,((((IData)(vlSelf->_cp___05Fs9666) 
                              & (IData)(vlSelf->_cp___05Fs9672)) 
                             | (IData)(vlSelf->_cp___05Fs9664))));
    bufp->chgBit(oldp+1356,(vlSelf->_mc___05Fs1674));
    bufp->chgBit(oldp+1357,(vlSelf->_cp___05Fs9655));
    bufp->chgBit(oldp+1358,(vlSelf->_mc___05Fs1706));
    bufp->chgBit(oldp+1359,(vlSelf->_mc___05Fs1740));
    bufp->chgBit(oldp+1360,(vlSelf->_cp___05Fs9675));
    bufp->chgBit(oldp+1361,(vlSelf->_cp___05Fs9678));
    bufp->chgBit(oldp+1362,(vlSelf->_cp___05Fs9619));
    bufp->chgBit(oldp+1363,(((IData)(vlSelf->_cp___05Fs9656) 
                             | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_cfi))));
    bufp->chgQData(oldp+1364,(((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___core_io_imem_btb_update_valid)
                                ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___io_imem_btb_update_bits_br_pc_output
                                : ((0x7ffffffffcULL 
                                    & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_pc) 
                                   | (QData)((IData)(
                                                     ((IData)(vlSelf->_cp___05Fs9666) 
                                                      << 1U)))))),39);
    bufp->chgCData(oldp+1366,(((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___core_io_imem_btb_update_valid)
                                ? ((IData)(vlSelf->_mc___05Fs3354)
                                    ? 2U : ((IData)(vlSelf->_mc___05Fs3353)
                                             ? 3U : (IData)(vlSelf->_mc___05Fs3352)))
                                : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_0))),2);
    bufp->chgBit(oldp+1367,(vlSelf->_cp___05Fs9634));
    bufp->chgBit(oldp+1368,(vlSelf->_cp___05Fs9641));
    bufp->chgBit(oldp+1369,(vlSelf->_cp___05Fs9631));
    bufp->chgBit(oldp+1370,(vlSelf->_cp___05Fs9621));
    bufp->chgBit(oldp+1371,(vlSelf->_mc___05Fs1642));
    bufp->chgCData(oldp+1372,(vlSelf->_rs___05Fs2503),8);
    bufp->chgBit(oldp+1373,(vlSelf->_cp___05Fs9645));
    bufp->chgBit(oldp+1374,(vlSelf->_mc___05Fs1506));
    bufp->chgBit(oldp+1375,(vlSelf->_mc___05Fs1489));
    bufp->chgBit(oldp+1376,(vlSelf->_mc___05Fs1490));
    bufp->chgBit(oldp+1377,(vlSelf->_mc___05Fs1491));
    bufp->chgBit(oldp+1378,(vlSelf->_cp___05Fs9633));
    bufp->chgBit(oldp+1379,(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____Vcellinp__fq__reset));
    bufp->chgBit(oldp+1380,(vlSelf->_cp___05Fs9346));
    bufp->chgBit(oldp+1381,(vlSelf->_cp___05Fs9341));
    bufp->chgBit(oldp+1382,(vlSelf->_cp___05Fs9342));
    bufp->chgBit(oldp+1383,(vlSelf->_cp___05Fs9343));
    bufp->chgBit(oldp+1384,(vlSelf->_cp___05Fs9344));
    bufp->chgBit(oldp+1385,(vlSelf->_cp___05Fs9345));
    bufp->chgBit(oldp+1386,(((IData)(vlSelf->_cp___05Fs9682) 
                             | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___tlb_io_resp_miss) 
                                | (IData)(vlSelf->_mc___05Fs1674)))));
    bufp->chgBit(oldp+1387,(vlSelf->_rs___05Fs2087));
    bufp->chgBit(oldp+1388,(vlSelf->_cp___05Fs9333));
    bufp->chgBit(oldp+1389,(vlSelf->_cp___05Fs9321));
    bufp->chgBit(oldp+1390,(vlSelf->_cp___05Fs9326));
    bufp->chgBit(oldp+1391,(vlSelf->_cp___05Fs9315));
    bufp->chgBit(oldp+1392,(vlSelf->_cp___05Fs9314));
    bufp->chgBit(oldp+1393,(vlSelf->_cp___05Fs9313));
    bufp->chgBit(oldp+1394,(vlSelf->_cp___05Fs9311));
    bufp->chgBit(oldp+1395,(vlSelf->_cp___05Fs9305));
    bufp->chgBit(oldp+1396,(vlSelf->_mc___05Fs1357));
    bufp->chgBit(oldp+1397,(vlSelf->_mc___05Fs1354));
    bufp->chgBit(oldp+1398,(vlSelf->_cp___05Fs9312));
    bufp->chgBit(oldp+1399,(vlSelf->_cp___05Fs9318));
    bufp->chgBit(oldp+1400,(vlSelf->_cp___05Fs8521));
    bufp->chgBit(oldp+1401,(vlSelf->_rs___05Fs2039));
    bufp->chgBit(oldp+1402,(vlSelf->_rs___05Fs2040));
    bufp->chgBit(oldp+1403,(vlSelf->_rs___05Fs2041));
    bufp->chgBit(oldp+1404,(vlSelf->_rs___05Fs2042));
    bufp->chgBit(oldp+1405,(vlSelf->_rs___05Fs2043));
    bufp->chgBit(oldp+1406,(vlSelf->_rs___05Fs2044));
    bufp->chgBit(oldp+1407,(vlSelf->_rs___05Fs2045));
    bufp->chgBit(oldp+1408,(vlSelf->_rs___05Fs2046));
    bufp->chgBit(oldp+1409,(vlSelf->_rs___05Fs2047));
    bufp->chgBit(oldp+1410,(vlSelf->_rs___05Fs2048));
    bufp->chgBit(oldp+1411,(vlSelf->_rs___05Fs2049));
    bufp->chgBit(oldp+1412,(vlSelf->_rs___05Fs2050));
    bufp->chgBit(oldp+1413,(vlSelf->_rs___05Fs2051));
    bufp->chgBit(oldp+1414,(vlSelf->_rs___05Fs2052));
    bufp->chgBit(oldp+1415,(vlSelf->_rs___05Fs2053));
    bufp->chgBit(oldp+1416,(vlSelf->_rs___05Fs2054));
    bufp->chgBit(oldp+1417,(vlSelf->_cp___05Fs9380));
    bufp->chgBit(oldp+1418,(((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__bad_va) 
                             | (0U != ((((~ ((((IData)(vlSelf->_mc___05Fs1431)
                                                ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_77)
                                                : 0U) 
                                              | ((IData)(vlSelf->_mc___05Fs1432)
                                                  ? 
                                                 (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_77))
                                                  : 0U)) 
                                             & (((0x1000U 
                                                  & ((IData)(
                                                             (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                                                              >> 0xcU)) 
                                                     << 0xcU)) 
                                                 | ((0x800U 
                                                     & ((IData)(
                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                                                 >> 0xcU)) 
                                                        << 0xbU)) 
                                                    | ((0x400U 
                                                        & ((IData)(
                                                                   (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                                                    >> 0xcU)) 
                                                           << 0xaU)) 
                                                       | ((0x200U 
                                                           & ((IData)(
                                                                      (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                                                       >> 0xcU)) 
                                                              << 9U)) 
                                                          | ((0x100U 
                                                              & ((IData)(
                                                                         (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                                                          >> 0xcU)) 
                                                                 << 8U)) 
                                                             | ((0x80U 
                                                                 & ((IData)(
                                                                            (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_75 
                                                                             >> 0xcU)) 
                                                                    << 7U)) 
                                                                | ((0x40U 
                                                                    & ((IData)(
                                                                               (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_73 
                                                                                >> 0xcU)) 
                                                                       << 6U)) 
                                                                   | ((0x20U 
                                                                       & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_71 
                                                                                >> 0xcU)) 
                                                                          << 5U)) 
                                                                      | ((0x10U 
                                                                          & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_69 
                                                                                >> 0xcU)) 
                                                                             << 4U)) 
                                                                         | ((8U 
                                                                             & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_67 
                                                                                >> 0xcU)) 
                                                                                << 3U)) 
                                                                            | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_65 
                                                                                >> 0xcU)) 
                                                                                << 2U)) 
                                                                               | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_63 
                                                                                >> 0xcU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_61 
                                                                                >> 0xcU))))))))))))))) 
                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_mxr)
                                                    ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_78)
                                                    : 0U)))) 
                                         & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_80)) 
                                        | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_81)) 
                                       & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_h9a79f180__0))))));
    bufp->chgBit(oldp+1419,(((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__bad_va) 
                             | (0U != ((((~ (((- (IData)((IData)(vlSelf->_mc___05Fs1432))) 
                                              ^ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_77)) 
                                             & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_78))) 
                                         & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_80)) 
                                        | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_81)) 
                                       & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_h9a79f180__0))))));
    bufp->chgBit(oldp+1420,((0U != ((~ (((0x3000U & 
                                          ((- (IData)((IData)(vlSelf->_mc___05Fs1439))) 
                                           << 0xcU)) 
                                         | ((0x800U 
                                             & ((IData)(
                                                        (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                                         >> 7U)) 
                                                << 0xbU)) 
                                            | ((0x400U 
                                                & ((IData)(
                                                           (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                                            >> 7U)) 
                                                   << 0xaU)) 
                                               | ((0x200U 
                                                   & ((IData)(
                                                              (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                                               >> 7U)) 
                                                      << 9U)) 
                                                  | ((0x100U 
                                                      & ((IData)(
                                                                 (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                                                  >> 7U)) 
                                                         << 8U)) 
                                                     | ((0x80U 
                                                         & ((IData)(
                                                                    (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_75 
                                                                     >> 7U)) 
                                                            << 7U)) 
                                                        | ((0x40U 
                                                            & ((IData)(
                                                                       (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_73 
                                                                        >> 7U)) 
                                                               << 6U)) 
                                                           | ((0x20U 
                                                               & ((IData)(
                                                                          (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_71 
                                                                           >> 7U)) 
                                                                  << 5U)) 
                                                              | ((0x10U 
                                                                  & ((IData)(
                                                                             (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_69 
                                                                              >> 7U)) 
                                                                     << 4U)) 
                                                                 | ((8U 
                                                                     & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_67 
                                                                                >> 7U)) 
                                                                        << 3U)) 
                                                                    | ((4U 
                                                                        & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_65 
                                                                                >> 7U)) 
                                                                           << 2U)) 
                                                                       | ((2U 
                                                                           & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_63 
                                                                                >> 7U)) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_61 
                                                                                >> 7U))))))))))))))) 
                                        & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_79))) 
                                    & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hits)))));
    bufp->chgBit(oldp+1421,(vlSelf->_mc___05Fs1445));
    bufp->chgBit(oldp+1422,((0U != (((0x3000U & ((- (IData)((IData)(vlSelf->_mc___05Fs1441))) 
                                                 << 0xcU)) 
                                     | ((0x800U & ((IData)(
                                                           (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                                            >> 1U)) 
                                                   << 0xbU)) 
                                        | ((0x400U 
                                            & ((IData)(
                                                       (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                                        >> 1U)) 
                                               << 0xaU)) 
                                           | ((0x200U 
                                               & ((IData)(
                                                          (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                                           >> 1U)) 
                                                  << 9U)) 
                                              | ((0x100U 
                                                  & ((IData)(
                                                             (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                                              >> 1U)) 
                                                     << 8U)) 
                                                 | ((0x80U 
                                                     & ((IData)(
                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_75 
                                                                 >> 1U)) 
                                                        << 7U)) 
                                                    | ((0x40U 
                                                        & ((IData)(
                                                                   (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_73 
                                                                    >> 1U)) 
                                                           << 6U)) 
                                                       | ((0x20U 
                                                           & ((IData)(
                                                                      (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_71 
                                                                       >> 1U)) 
                                                              << 5U)) 
                                                          | ((0x10U 
                                                              & ((IData)(
                                                                         (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_69 
                                                                          >> 1U)) 
                                                                 << 4U)) 
                                                             | ((8U 
                                                                 & ((IData)(
                                                                            (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_67 
                                                                             >> 1U)) 
                                                                    << 3U)) 
                                                                | ((4U 
                                                                    & ((IData)(
                                                                               (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_65 
                                                                                >> 1U)) 
                                                                       << 2U)) 
                                                                   | ((2U 
                                                                       & ((IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_63 
                                                                                >> 1U)) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_61 
                                                                                >> 1U))))))))))))))) 
                                    & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hits)))));
    bufp->chgBit(oldp+1423,(vlSelf->_cp___05Fs9352));
    bufp->chgBit(oldp+1424,(vlSelf->_mc___05Fs1400));
    bufp->chgBit(oldp+1425,(vlSelf->_mc___05Fs1437));
    bufp->chgBit(oldp+1426,(vlSelf->_mc___05Fs1438));
    bufp->chgBit(oldp+1427,(vlSelf->_mc___05Fs1439));
    bufp->chgBit(oldp+1428,(vlSelf->_mc___05Fs1407));
    bufp->chgBit(oldp+1429,(vlSelf->_mc___05Fs1409));
    bufp->chgBit(oldp+1430,(vlSelf->_cp___05Fs9553));
    bufp->chgBit(oldp+1431,(vlSelf->_mc___05Fs1411));
    bufp->chgBit(oldp+1432,(vlSelf->_cp___05Fs9560));
    bufp->chgBit(oldp+1433,(vlSelf->_mc___05Fs1413));
    bufp->chgBit(oldp+1434,(vlSelf->_cp___05Fs9567));
    bufp->chgBit(oldp+1435,(vlSelf->_mc___05Fs1417));
    bufp->chgBit(oldp+1436,(vlSelf->_mc___05Fs1418));
    bufp->chgBit(oldp+1437,(vlSelf->_mc___05Fs1419));
    bufp->chgBit(oldp+1438,(vlSelf->_mc___05Fs1420));
    bufp->chgBit(oldp+1439,(vlSelf->_mc___05Fs1421));
    bufp->chgBit(oldp+1440,(vlSelf->_mc___05Fs1422));
    bufp->chgBit(oldp+1441,(vlSelf->_mc___05Fs1423));
    bufp->chgBit(oldp+1442,(vlSelf->_mc___05Fs1424));
    bufp->chgBit(oldp+1443,(vlSelf->_mc___05Fs1425));
    bufp->chgBit(oldp+1444,(vlSelf->_mc___05Fs1426));
    bufp->chgBit(oldp+1445,(vlSelf->_mc___05Fs1427));
    bufp->chgBit(oldp+1446,(vlSelf->_mc___05Fs1428));
    bufp->chgBit(oldp+1447,(vlSelf->_mc___05Fs1429));
    bufp->chgBit(oldp+1448,(vlSelf->_mc___05Fs1441));
    bufp->chgBit(oldp+1449,(vlSelf->_mc___05Fs1442));
    bufp->chgBit(oldp+1450,(vlSelf->_mc___05Fs1443));
    bufp->chgBit(oldp+1451,(((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pma__DOT__legal_address) 
                             & (IData)(vlSelf->_mc___05Fs1395))));
    bufp->chgBit(oldp+1452,(vlSelf->_mc___05Fs1440));
    bufp->chgBit(oldp+1453,(((IData)(vlSelf->_mc___05Fs1384)
                              ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_r) 
                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_7))
                              : ((IData)(vlSelf->_mc___05Fs1382)
                                  ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_r) 
                                     | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_6))
                                  : ((IData)(vlSelf->_mc___05Fs1380)
                                      ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_r) 
                                         | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_5))
                                      : ((IData)(vlSelf->_mc___05Fs1378)
                                          ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_r) 
                                             | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_4))
                                          : ((IData)(vlSelf->_mc___05Fs1376)
                                              ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_r) 
                                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_3))
                                              : ((IData)(vlSelf->_mc___05Fs1374)
                                                  ? 
                                                 ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_r) 
                                                  | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_2))
                                                  : 
                                                 ((IData)(vlSelf->_mc___05Fs1372)
                                                   ? 
                                                  ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_r) 
                                                   | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_1))
                                                   : 
                                                  ((IData)(vlSelf->_mc___05Fs1370)
                                                    ? 
                                                   ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_r) 
                                                    | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore))
                                                    : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0)))))))))));
    bufp->chgBit(oldp+1454,(((IData)(vlSelf->_mc___05Fs1384)
                              ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_w) 
                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_7))
                              : ((IData)(vlSelf->_mc___05Fs1382)
                                  ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_w) 
                                     | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_6))
                                  : ((IData)(vlSelf->_mc___05Fs1380)
                                      ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_w) 
                                         | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_5))
                                      : ((IData)(vlSelf->_mc___05Fs1378)
                                          ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_w) 
                                             | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_4))
                                          : ((IData)(vlSelf->_mc___05Fs1376)
                                              ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_w) 
                                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_3))
                                              : ((IData)(vlSelf->_mc___05Fs1374)
                                                  ? 
                                                 ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_w) 
                                                  | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_2))
                                                  : 
                                                 ((IData)(vlSelf->_mc___05Fs1372)
                                                   ? 
                                                  ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_w) 
                                                   | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_1))
                                                   : 
                                                  ((IData)(vlSelf->_mc___05Fs1370)
                                                    ? 
                                                   ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_w) 
                                                    | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore))
                                                    : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0)))))))))));
    bufp->chgBit(oldp+1455,(((IData)(vlSelf->_mc___05Fs1384)
                              ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_x) 
                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_7))
                              : ((IData)(vlSelf->_mc___05Fs1382)
                                  ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_x) 
                                     | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_6))
                                  : ((IData)(vlSelf->_mc___05Fs1380)
                                      ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_x) 
                                         | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_5))
                                      : ((IData)(vlSelf->_mc___05Fs1378)
                                          ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_x) 
                                             | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_4))
                                          : ((IData)(vlSelf->_mc___05Fs1376)
                                              ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_x) 
                                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_3))
                                              : ((IData)(vlSelf->_mc___05Fs1374)
                                                  ? 
                                                 ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_x) 
                                                  | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_2))
                                                  : 
                                                 ((IData)(vlSelf->_mc___05Fs1372)
                                                   ? 
                                                  ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_x) 
                                                   | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_1))
                                                   : 
                                                  ((IData)(vlSelf->_mc___05Fs1370)
                                                    ? 
                                                   ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_x) 
                                                    | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore))
                                                    : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0)))))))))));
    bufp->chgBit(oldp+1456,(vlSelf->_mc___05Fs1370));
    bufp->chgBit(oldp+1457,(vlSelf->_mc___05Fs1372));
    bufp->chgBit(oldp+1458,(vlSelf->_mc___05Fs1374));
    bufp->chgBit(oldp+1459,(vlSelf->_mc___05Fs1376));
    bufp->chgBit(oldp+1460,(vlSelf->_mc___05Fs1378));
    bufp->chgBit(oldp+1461,(vlSelf->_mc___05Fs1380));
    bufp->chgBit(oldp+1462,(vlSelf->_mc___05Fs1382));
    bufp->chgBit(oldp+1463,(vlSelf->_mc___05Fs1384));
    bufp->chgBit(oldp+1464,(vlSelf->_mc___05Fs2609));
    bufp->chgBit(oldp+1465,(vlSelf->_cp___05Fs9789));
    bufp->chgBit(oldp+1466,(vlSelf->_mc___05Fs2613));
    bufp->chgBit(oldp+1467,(vlSelf->_cp___05Fs9782));
    bufp->chgBit(oldp+1468,(((IData)(vlSelf->_cp___05Fs8638) 
                             | (IData)(vlSelf->_cp___05Fs9377))));
    bufp->chgBit(oldp+1469,(vlSelf->_mc___05Fs2593));
    bufp->chgBit(oldp+1470,(vlSelf->_mc___05Fs2446));
    bufp->chgBit(oldp+1471,(vlSelf->_mc___05Fs2594));
    bufp->chgBit(oldp+1472,((1U & (~ (IData)(vlSelf->_cp___05Fs8638)))));
    bufp->chgSData(oldp+1473,(((IData)(vlSelf->_mc___05Fs2610)
                                ? 0U : (0x3ffU & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_74)
                                                   ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_reserved_for_future)
                                                   : 
                                                  ((IData)(vlSelf->_mc___05Fs2604)
                                                    ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_reserved_for_future)
                                                    : (IData)(
                                                              (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                               >> 0x36U))))))),10);
    bufp->chgCData(oldp+1474,(((IData)(vlSelf->_mc___05Fs2610)
                                ? 0U : (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_74)
                                               ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_reserved_for_software)
                                               : ((IData)(vlSelf->_mc___05Fs2604)
                                                   ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_reserved_for_software)
                                                   : (IData)(
                                                             (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                              >> 8U))))))),2);
    bufp->chgBit(oldp+1475,((1U & ((~ (IData)(vlSelf->_mc___05Fs2610)) 
                                   & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_74)
                                       ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_d)
                                       : ((IData)(vlSelf->_mc___05Fs2604)
                                           ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_d)
                                           : (IData)(
                                                     (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                      >> 7U))))))));
    bufp->chgBit(oldp+1476,((1U & ((~ (IData)(vlSelf->_mc___05Fs2610)) 
                                   & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_74)
                                       ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_a)
                                       : ((IData)(vlSelf->_mc___05Fs2604)
                                           ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_a)
                                           : (IData)(
                                                     (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                      >> 6U))))))));
    bufp->chgBit(oldp+1477,((1U & ((~ (IData)(vlSelf->_mc___05Fs2610)) 
                                   & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_74)
                                       ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_g)
                                       : ((IData)(vlSelf->_mc___05Fs2604)
                                           ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_g)
                                           : (IData)(
                                                     (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                      >> 5U))))))));
    bufp->chgBit(oldp+1478,((1U & ((~ (IData)(vlSelf->_mc___05Fs2610)) 
                                   & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_74)
                                       ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_u)
                                       : ((IData)(vlSelf->_mc___05Fs2604)
                                           ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_u)
                                           : (IData)(
                                                     (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                      >> 4U))))))));
    bufp->chgBit(oldp+1479,((1U & ((~ (IData)(vlSelf->_mc___05Fs2610)) 
                                   & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_74)
                                       ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_x)
                                       : ((IData)(vlSelf->_mc___05Fs2604)
                                           ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_x)
                                           : (IData)(
                                                     (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                      >> 3U))))))));
    bufp->chgBit(oldp+1480,((1U & ((~ (IData)(vlSelf->_mc___05Fs2610)) 
                                   & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_74)
                                       ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_w)
                                       : ((IData)(vlSelf->_mc___05Fs2604)
                                           ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_w)
                                           : (IData)(
                                                     (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                      >> 2U))))))));
    bufp->chgBit(oldp+1481,((1U & ((~ (IData)(vlSelf->_mc___05Fs2610)) 
                                   & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_74)
                                       ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_r)
                                       : ((IData)(vlSelf->_mc___05Fs2604)
                                           ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_r)
                                           : (IData)(
                                                     (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                      >> 1U))))))));
    bufp->chgBit(oldp+1482,(((~ (IData)(vlSelf->_mc___05Fs2610)) 
                             & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_74)
                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_v)
                                 : ((IData)(vlSelf->_mc___05Fs2604)
                                     ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_v)
                                     : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_pte_v))))));
    bufp->chgCData(oldp+1483,(((IData)(vlSelf->_cp___05Fs9801)
                                ? 1U : ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_valid)
                                         ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_79)
                                         : ((0U != (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state))
                                             ? ((IData)(vlSelf->_cp___05Fs9779)
                                                 ? 
                                                ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_gf)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->_cp___05Fs9782)
                                                   ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state)
                                                   : 
                                                  ((IData)(vlSelf->_mc___05Fs2596)
                                                    ? 2U
                                                    : 1U)))
                                                 : 
                                                ((IData)(vlSelf->_cp___05Fs9784)
                                                  ? 4U
                                                  : 
                                                 ((IData)(vlSelf->_cp___05Fs9785)
                                                   ? 
                                                  ((IData)(vlSelf->_cp___05Fs9786)
                                                    ? 0U
                                                    : 5U)
                                                   : 
                                                  ((IData)(vlSelf->_cp___05Fs9787)
                                                    ? 0U
                                                    : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state)))))
                                             : ((IData)(vlSelf->_mc___05Fs2606)
                                                 ? (IData)(vlSelf->_mc___05Fs2593)
                                                 : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state)))))),3);
    bufp->chgBit(oldp+1484,(vlSelf->_mc___05Fs947));
    bufp->chgBit(oldp+1485,(vlSelf->_mc___05Fs951));
    bufp->chgBit(oldp+1486,(vlSelf->_mc___05Fs950));
    bufp->chgBit(oldp+1487,(vlSelf->_mc___05Fs948));
    bufp->chgBit(oldp+1488,(vlSelf->_mc___05Fs949));
    bufp->chgBit(oldp+1489,(vlSelf->_mc___05Fs954));
    bufp->chgBit(oldp+1490,(vlSelf->_mc___05Fs955));
    bufp->chgBit(oldp+1491,(vlSelf->_cp___05Fs8245));
    bufp->chgBit(oldp+1492,(vlSelf->_mc___05Fs920));
    bufp->chgBit(oldp+1493,(vlSelf->_mc___05Fs922));
    bufp->chgBit(oldp+1494,(vlSelf->_cp___05Fs8282));
    bufp->chgBit(oldp+1495,(vlSelf->_mc___05Fs924));
    bufp->chgBit(oldp+1496,(vlSelf->_mc___05Fs926));
    bufp->chgBit(oldp+1497,(vlSelf->_cp___05Fs8310));
    bufp->chgBit(oldp+1498,(vlSelf->_mc___05Fs928));
    bufp->chgBit(oldp+1499,(vlSelf->_mc___05Fs934));
    bufp->chgBit(oldp+1500,(vlSelf->_mc___05Fs936));
    bufp->chgBit(oldp+1501,(vlSelf->_cp___05Fs8551));
    bufp->chgBit(oldp+1502,(vlSelf->_cp___05Fs8552));
    bufp->chgBit(oldp+1503,(vlSelf->_cp___05Fs8555));
    bufp->chgBit(oldp+1504,(vlSelf->_mc___05Fs939));
    bufp->chgBit(oldp+1505,(vlSelf->_cp___05Fs8583));
    bufp->chgBit(oldp+1506,(vlSelf->_rs___05Fs3556));
    bufp->chgBit(oldp+1507,(vlSelf->_rs___05Fs3557));
    bufp->chgBit(oldp+1508,(vlSelf->_rs___05Fs3558));
    bufp->chgCData(oldp+1509,(vlSelf->_rs___05Fs3814),3);
    bufp->chgCData(oldp+1510,(vlSelf->_rs___05Fs3815),3);
    bufp->chgCData(oldp+1511,(vlSelf->_rs___05Fs3816),2);
    bufp->chgBit(oldp+1512,(vlSelf->_rs___05Fs3817));
    bufp->chgSData(oldp+1513,(vlSelf->_rs___05Fs3818),9);
    bufp->chgCData(oldp+1514,(vlSelf->_rs___05Fs3819),4);
    bufp->chgIData(oldp+1515,(vlSelf->_rs___05Fs3820),32);
    bufp->chgBit(oldp+1516,(vlSelf->_rs___05Fs3821));
    bufp->chgBit(oldp+1517,(vlSelf->_rs___05Fs3824));
    bufp->chgBit(oldp+1518,(vlSelf->_rs___05Fs3805));
    bufp->chgBit(oldp+1519,(vlSelf->_cp___05Fs11207));
    bufp->chgBit(oldp+1520,(vlSelf->_rs___05Fs3843));
    bufp->chgBit(oldp+1521,(vlSelf->_rs___05Fs3832));
    bufp->chgBit(oldp+1522,(vlSelf->_rs___05Fs3862));
    bufp->chgSData(oldp+1523,(vlSelf->_rs___05Fs3863),10);
    bufp->chgBit(oldp+1524,(vlSelf->_rs___05Fs3864));
    bufp->chgBit(oldp+1525,(vlSelf->_rs___05Fs3865));
    bufp->chgBit(oldp+1526,(vlSelf->_rs___05Fs3866));
    bufp->chgBit(oldp+1527,(vlSelf->_rs___05Fs3867));
    bufp->chgBit(oldp+1528,(vlSelf->_rs___05Fs3870));
    bufp->chgBit(oldp+1529,(vlSelf->_rs___05Fs3853));
    bufp->chgBit(oldp+1530,(vlSelf->_rs___05Fs4037));
    bufp->chgBit(oldp+1531,(vlSelf->_rs___05Fs4026));
    bufp->chgBit(oldp+1532,(vlSelf->_cp___05Fs12585));
    bufp->chgCData(oldp+1533,(vlSelf->_rs___05Fs4053),3);
    bufp->chgCData(oldp+1534,(vlSelf->_rs___05Fs4054),2);
    bufp->chgCData(oldp+1535,(vlSelf->_rs___05Fs4055),2);
    bufp->chgBit(oldp+1536,(vlSelf->_rs___05Fs4056));
    bufp->chgBit(oldp+1537,(vlSelf->_rs___05Fs4057));
    bufp->chgBit(oldp+1538,(vlSelf->_rs___05Fs4058));
    bufp->chgIData(oldp+1539,(vlSelf->_rs___05Fs4059),32);
    bufp->chgBit(oldp+1540,(vlSelf->_rs___05Fs4060));
    bufp->chgBit(oldp+1541,(vlSelf->_rs___05Fs4063));
    bufp->chgBit(oldp+1542,(vlSelf->_rs___05Fs4044));
    bufp->chgBit(oldp+1543,(vlSelf->_rs___05Fs4085));
    bufp->chgBit(oldp+1544,(vlSelf->_rs___05Fs4074));
    bufp->chgBit(oldp+1545,(vlSelf->_rs___05Fs3929));
    bufp->chgBit(oldp+1546,(vlSelf->_cp___05Fs12584));
    bufp->chgBit(oldp+1547,(vlSelf->_cp___05Fs12595));
    bufp->chgBit(oldp+1548,(vlSelf->_cp___05Fs12605));
    bufp->chgBit(oldp+1549,(vlSelf->_cp___05Fs12846));
    bufp->chgBit(oldp+1550,(vlSelf->_rs___05Fs4064));
    bufp->chgBit(oldp+1551,(vlSelf->_cp___05Fs13118));
    bufp->chgCData(oldp+1552,(vlSelf->_mc___05Fs3606),3);
    bufp->chgIData(oldp+1553,(((IData)(vlSelf->_mc___05Fs3642)
                                ? (((0U == (0x1fU & 
                                            VL_SHIFTL_III(10,10,32, (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex), 5U)))
                                     ? 0U : (vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[
                                             (((IData)(0x1fU) 
                                               + (0x3ffU 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex), 5U))))) 
                                   | (vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[
                                      (0x1fU & (VL_SHIFTL_III(10,10,32, (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex), 5U) 
                                                >> 5U))] 
                                      >> (0x1fU & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex), 5U))))
                                : 0U)),32);
    bufp->chgBit(oldp+1554,(vlSelf->_cp___05Fs13212));
    bufp->chgBit(oldp+1555,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_102) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+1556,(vlSelf->_cp___05Fs13211));
    bufp->chgBit(oldp+1557,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_102) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+1558,(vlSelf->_cp___05Fs13210));
    bufp->chgBit(oldp+1559,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_102) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+1560,(vlSelf->_cp___05Fs13209));
    bufp->chgBit(oldp+1561,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_102) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+1562,(vlSelf->_cp___05Fs13208));
    bufp->chgBit(oldp+1563,(vlSelf->_cp___05Fs13207));
    bufp->chgBit(oldp+1564,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_97) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+1565,(vlSelf->_cp___05Fs13206));
    bufp->chgBit(oldp+1566,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_97) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+1567,(vlSelf->_cp___05Fs13205));
    bufp->chgBit(oldp+1568,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_97) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+1569,(vlSelf->_cp___05Fs13204));
    bufp->chgBit(oldp+1570,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_97) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+1571,(vlSelf->_cp___05Fs13203));
    bufp->chgBit(oldp+1572,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_93) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+1573,(vlSelf->_cp___05Fs13202));
    bufp->chgBit(oldp+1574,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_93) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+1575,(vlSelf->_cp___05Fs13201));
    bufp->chgBit(oldp+1576,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_93) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+1577,(vlSelf->_cp___05Fs13200));
    bufp->chgBit(oldp+1578,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_93) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+1579,(vlSelf->_cp___05Fs13199));
    bufp->chgBit(oldp+1580,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_82) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+1581,(vlSelf->_cp___05Fs13198));
    bufp->chgBit(oldp+1582,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_82) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+1583,(vlSelf->_cp___05Fs13197));
    bufp->chgBit(oldp+1584,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_82) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+1585,(vlSelf->_cp___05Fs13196));
    bufp->chgBit(oldp+1586,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_82) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+1587,(vlSelf->_cp___05Fs13195));
    bufp->chgBit(oldp+1588,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_78) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+1589,(vlSelf->_cp___05Fs13194));
    bufp->chgBit(oldp+1590,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_78) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+1591,(vlSelf->_cp___05Fs13193));
    bufp->chgBit(oldp+1592,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_78) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+1593,(vlSelf->_cp___05Fs13192));
    bufp->chgBit(oldp+1594,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_78) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+1595,(vlSelf->_cp___05Fs13191));
    bufp->chgBit(oldp+1596,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_54) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+1597,(vlSelf->_cp___05Fs13190));
    bufp->chgBit(oldp+1598,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_54) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+1599,(vlSelf->_cp___05Fs13189));
    bufp->chgBit(oldp+1600,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_54) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+1601,(vlSelf->_cp___05Fs13188));
    bufp->chgBit(oldp+1602,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_54) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+1603,(vlSelf->_cp___05Fs13187));
    bufp->chgBit(oldp+1604,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_50) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+1605,(vlSelf->_cp___05Fs13186));
    bufp->chgBit(oldp+1606,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_50) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+1607,(vlSelf->_cp___05Fs13185));
    bufp->chgBit(oldp+1608,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_50) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+1609,(vlSelf->_cp___05Fs13184));
    bufp->chgBit(oldp+1610,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_50) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+1611,(vlSelf->_cp___05Fs13183));
    bufp->chgBit(oldp+1612,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_46) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+1613,(vlSelf->_cp___05Fs13182));
    bufp->chgBit(oldp+1614,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_46) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+1615,(vlSelf->_cp___05Fs13181));
    bufp->chgBit(oldp+1616,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_46) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+1617,(vlSelf->_cp___05Fs13180));
    bufp->chgBit(oldp+1618,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_46) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+1619,(vlSelf->_cp___05Fs13179));
    bufp->chgBit(oldp+1620,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_42) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+1621,(vlSelf->_cp___05Fs13178));
    bufp->chgBit(oldp+1622,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_42) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+1623,(vlSelf->_cp___05Fs13177));
    bufp->chgBit(oldp+1624,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_42) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+1625,(vlSelf->_cp___05Fs13176));
    bufp->chgBit(oldp+1626,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_42) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+1627,(vlSelf->_cp___05Fs13175));
    bufp->chgBit(oldp+1628,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_35) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+1629,(vlSelf->_cp___05Fs13174));
    bufp->chgBit(oldp+1630,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_35) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+1631,(vlSelf->_cp___05Fs13173));
    bufp->chgBit(oldp+1632,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_35) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+1633,(vlSelf->_cp___05Fs13172));
    bufp->chgBit(oldp+1634,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_35) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+1635,(vlSelf->_cp___05Fs13171));
    bufp->chgBit(oldp+1636,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_31) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+1637,(vlSelf->_cp___05Fs13170));
    bufp->chgBit(oldp+1638,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_31) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+1639,(vlSelf->_cp___05Fs13169));
    bufp->chgBit(oldp+1640,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_31) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+1641,(vlSelf->_cp___05Fs13168));
    bufp->chgBit(oldp+1642,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_31) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+1643,(vlSelf->_cp___05Fs13167));
    bufp->chgBit(oldp+1644,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_27) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+1645,(vlSelf->_cp___05Fs13166));
    bufp->chgBit(oldp+1646,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_27) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+1647,(vlSelf->_cp___05Fs13165));
    bufp->chgBit(oldp+1648,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_27) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+1649,(vlSelf->_cp___05Fs13164));
    bufp->chgBit(oldp+1650,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_27) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+1651,(vlSelf->_cp___05Fs13163));
    bufp->chgBit(oldp+1652,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_23) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+1653,(vlSelf->_cp___05Fs13162));
    bufp->chgBit(oldp+1654,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_23) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+1655,(vlSelf->_cp___05Fs13161));
    bufp->chgBit(oldp+1656,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_23) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+1657,(vlSelf->_cp___05Fs13160));
    bufp->chgBit(oldp+1658,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_23) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+1659,(vlSelf->_cp___05Fs13159));
    bufp->chgBit(oldp+1660,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_19) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+1661,(vlSelf->_cp___05Fs13158));
    bufp->chgBit(oldp+1662,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_19) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+1663,(vlSelf->_cp___05Fs13157));
    bufp->chgBit(oldp+1664,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_19) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+1665,(vlSelf->_cp___05Fs13156));
    bufp->chgBit(oldp+1666,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_19) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+1667,(vlSelf->_cp___05Fs13155));
    bufp->chgBit(oldp+1668,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_15) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+1669,(vlSelf->_cp___05Fs13154));
    bufp->chgBit(oldp+1670,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_15) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+1671,(vlSelf->_cp___05Fs13153));
    bufp->chgBit(oldp+1672,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_15) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+1673,(vlSelf->_cp___05Fs13152));
    bufp->chgBit(oldp+1674,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_15) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+1675,(vlSelf->_cp___05Fs13151));
    bufp->chgBit(oldp+1676,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_11) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+1677,(vlSelf->_cp___05Fs13150));
    bufp->chgBit(oldp+1678,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_11) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+1679,(vlSelf->_cp___05Fs13149));
    bufp->chgBit(oldp+1680,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_11) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+1681,(vlSelf->_cp___05Fs13148));
    bufp->chgBit(oldp+1682,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_11) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+1683,(vlSelf->_cp___05Fs13147));
    bufp->chgBit(oldp+1684,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_7) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+1685,(vlSelf->_cp___05Fs13146));
    bufp->chgBit(oldp+1686,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_7) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+1687,(vlSelf->_cp___05Fs13145));
    bufp->chgBit(oldp+1688,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_7) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+1689,(vlSelf->_cp___05Fs13144));
    bufp->chgBit(oldp+1690,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_7) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+1691,(vlSelf->_cp___05Fs13143));
    bufp->chgBit(oldp+1692,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_3) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+1693,(vlSelf->_cp___05Fs13142));
    bufp->chgBit(oldp+1694,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_3) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+1695,(vlSelf->_cp___05Fs13141));
    bufp->chgBit(oldp+1696,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_3) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+1697,(vlSelf->_cp___05Fs13140));
    bufp->chgBit(oldp+1698,(((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_3) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+1699,(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartHalted));
    bufp->chgBit(oldp+1700,(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hrmaskReg_0));
    bufp->chgBit(oldp+1701,(vlSelf->_cp___05Fs13139));
    bufp->chgBit(oldp+1702,(vlSelf->_cp___05Fs13129));
    bufp->chgBit(oldp+1703,(vlSelf->_cp___05Fs13135));
    bufp->chgBit(oldp+1704,(vlSelf->_mc___05Fs3606));
    bufp->chgBit(oldp+1705,(vlSelf->_mc___05Fs3617));
    bufp->chgBit(oldp+1706,(vlSelf->_cp___05Fs13292));
    bufp->chgBit(oldp+1707,(vlSelf->_cp___05Fs13293));
    bufp->chgBit(oldp+1708,(vlSelf->_cp___05Fs13294));
    bufp->chgBit(oldp+1709,(vlSelf->_cp___05Fs13295));
    bufp->chgBit(oldp+1710,(vlSelf->_cp___05Fs13296));
    bufp->chgBit(oldp+1711,(vlSelf->_cp___05Fs13297));
    bufp->chgBit(oldp+1712,(vlSelf->_cp___05Fs13298));
    bufp->chgBit(oldp+1713,(vlSelf->_cp___05Fs13299));
    bufp->chgBit(oldp+1714,(vlSelf->_cp___05Fs13300));
    bufp->chgBit(oldp+1715,(vlSelf->_cp___05Fs13301));
    bufp->chgBit(oldp+1716,(vlSelf->_cp___05Fs13302));
    bufp->chgBit(oldp+1717,(vlSelf->_cp___05Fs13303));
    bufp->chgBit(oldp+1718,(vlSelf->_cp___05Fs13304));
    bufp->chgBit(oldp+1719,(vlSelf->_cp___05Fs13305));
    bufp->chgBit(oldp+1720,(vlSelf->_cp___05Fs13306));
    bufp->chgBit(oldp+1721,(vlSelf->_cp___05Fs13307));
    bufp->chgBit(oldp+1722,(vlSelf->_cp___05Fs13138));
    bufp->chgBit(oldp+1723,(vlSelf->_cp___05Fs13377));
    bufp->chgBit(oldp+1724,(vlSelf->_cp___05Fs13308));
    bufp->chgBit(oldp+1725,(vlSelf->_cp___05Fs13309));
    bufp->chgBit(oldp+1726,(vlSelf->_cp___05Fs13310));
    bufp->chgBit(oldp+1727,(vlSelf->_cp___05Fs13311));
    bufp->chgBit(oldp+1728,(vlSelf->_cp___05Fs13312));
    bufp->chgBit(oldp+1729,(vlSelf->_cp___05Fs13313));
    bufp->chgBit(oldp+1730,(vlSelf->_cp___05Fs13314));
    bufp->chgBit(oldp+1731,(vlSelf->_cp___05Fs13315));
    bufp->chgBit(oldp+1732,(vlSelf->_cp___05Fs13316));
    bufp->chgBit(oldp+1733,(vlSelf->_cp___05Fs13317));
    bufp->chgBit(oldp+1734,(vlSelf->_cp___05Fs13318));
    bufp->chgBit(oldp+1735,(vlSelf->_cp___05Fs13319));
    bufp->chgBit(oldp+1736,(vlSelf->_cp___05Fs13320));
    bufp->chgBit(oldp+1737,(vlSelf->_cp___05Fs13321));
    bufp->chgBit(oldp+1738,(vlSelf->_cp___05Fs13322));
    bufp->chgBit(oldp+1739,(vlSelf->_cp___05Fs13323));
    bufp->chgBit(oldp+1740,(vlSelf->_cp___05Fs13137));
    bufp->chgBit(oldp+1741,(vlSelf->_cp___05Fs13287));
    bufp->chgBit(oldp+1742,(vlSelf->_cp___05Fs13324));
    bufp->chgBit(oldp+1743,(vlSelf->_cp___05Fs13325));
    bufp->chgBit(oldp+1744,(vlSelf->_cp___05Fs13326));
    bufp->chgBit(oldp+1745,(vlSelf->_cp___05Fs13327));
    bufp->chgBit(oldp+1746,(vlSelf->_cp___05Fs13328));
    bufp->chgBit(oldp+1747,(vlSelf->_cp___05Fs13329));
    bufp->chgBit(oldp+1748,(vlSelf->_cp___05Fs13330));
    bufp->chgBit(oldp+1749,(vlSelf->_cp___05Fs13331));
    bufp->chgBit(oldp+1750,(vlSelf->_cp___05Fs13332));
    bufp->chgBit(oldp+1751,(vlSelf->_cp___05Fs13333));
    bufp->chgBit(oldp+1752,(vlSelf->_cp___05Fs13334));
    bufp->chgBit(oldp+1753,(vlSelf->_cp___05Fs13335));
    bufp->chgBit(oldp+1754,(vlSelf->_cp___05Fs13336));
    bufp->chgBit(oldp+1755,(vlSelf->_cp___05Fs13337));
    bufp->chgBit(oldp+1756,(vlSelf->_cp___05Fs13338));
    bufp->chgBit(oldp+1757,(vlSelf->_cp___05Fs13339));
    bufp->chgBit(oldp+1758,(vlSelf->_cp___05Fs13340));
    bufp->chgBit(oldp+1759,(vlSelf->_cp___05Fs13341));
    bufp->chgBit(oldp+1760,(vlSelf->_cp___05Fs13342));
    bufp->chgBit(oldp+1761,(vlSelf->_cp___05Fs13343));
    bufp->chgBit(oldp+1762,(vlSelf->_cp___05Fs13344));
    bufp->chgBit(oldp+1763,(vlSelf->_cp___05Fs13345));
    bufp->chgBit(oldp+1764,(vlSelf->_cp___05Fs13346));
    bufp->chgBit(oldp+1765,(vlSelf->_cp___05Fs13347));
    bufp->chgBit(oldp+1766,(vlSelf->_cp___05Fs13348));
    bufp->chgBit(oldp+1767,(vlSelf->_cp___05Fs13349));
    bufp->chgBit(oldp+1768,(vlSelf->_cp___05Fs13350));
    bufp->chgBit(oldp+1769,(vlSelf->_cp___05Fs13351));
    bufp->chgBit(oldp+1770,(vlSelf->_cp___05Fs13352));
    bufp->chgBit(oldp+1771,(vlSelf->_cp___05Fs13353));
    bufp->chgBit(oldp+1772,(vlSelf->_cp___05Fs13354));
    bufp->chgBit(oldp+1773,(vlSelf->_cp___05Fs13355));
    bufp->chgBit(oldp+1774,(vlSelf->_cp___05Fs13356));
    bufp->chgBit(oldp+1775,(vlSelf->_cp___05Fs13357));
    bufp->chgBit(oldp+1776,(vlSelf->_cp___05Fs13358));
    bufp->chgBit(oldp+1777,(vlSelf->_cp___05Fs13359));
    bufp->chgBit(oldp+1778,(vlSelf->_cp___05Fs13360));
    bufp->chgBit(oldp+1779,(vlSelf->_cp___05Fs13361));
    bufp->chgBit(oldp+1780,(vlSelf->_cp___05Fs13362));
    bufp->chgBit(oldp+1781,(vlSelf->_cp___05Fs13363));
    bufp->chgBit(oldp+1782,(vlSelf->_cp___05Fs13125));
    bufp->chgBit(oldp+1783,(vlSelf->_cp___05Fs13365));
    bufp->chgBit(oldp+1784,(vlSelf->_cp___05Fs13370));
    bufp->chgBit(oldp+1785,(vlSelf->_cp___05Fs13373));
    bufp->chgBit(oldp+1786,(vlSelf->_cp___05Fs13374));
    bufp->chgBit(oldp+1787,(vlSelf->_cp___05Fs13127));
    bufp->chgBit(oldp+1788,(vlSelf->_cp___05Fs13128));
    bufp->chgBit(oldp+1789,(vlSelf->_cp___05Fs13286));
    bufp->chgBit(oldp+1790,(vlSelf->_cp___05Fs13126));
    bufp->chgBit(oldp+1791,(vlSelf->_rs___05Fs3921));
    bufp->chgBit(oldp+1792,(vlSelf->_cp___05Fs12774));
    bufp->chgBit(oldp+1793,(vlSelf->_cp___05Fs12700));
    bufp->chgBit(oldp+1794,(vlSelf->_cp___05Fs12813));
    bufp->chgBit(oldp+1795,(vlSelf->_cp___05Fs13040));
    bufp->chgBit(oldp+1796,(vlSelf->_cp___05Fs13079));
    bufp->chgBit(oldp+1797,(vlSelf->_cp___05Fs13389));
    bufp->chgSData(oldp+1798,(vlSelf->_rs___05Fs4070),15);
    bufp->chgBit(oldp+1799,(vlSelf->_rs___05Fs4071));
    bufp->chgBit(oldp+1800,(vlSelf->_rs___05Fs4077));
    bufp->chgBit(oldp+1801,(vlSelf->_rs___05Fs4080));
    bufp->chgBit(oldp+1802,(vlSelf->_rs___05Fs4067));
    bufp->chgBit(oldp+1803,(vlSelf->_rs___05Fs4038));
    bufp->chgBit(oldp+1804,(vlSelf->_rs___05Fs4047));
    bufp->chgBit(oldp+1805,(vlSelf->_rs___05Fs4050));
    bufp->chgBit(oldp+1806,(vlSelf->_rs___05Fs4041));
    bufp->chgBit(oldp+1807,(vlSelf->_cp___05Fs13387));
    bufp->chgQData(oldp+1808,(vlSelf->_rs___05Fs4022),55);
    bufp->chgBit(oldp+1810,(vlSelf->_rs___05Fs4023));
    bufp->chgBit(oldp+1811,(vlSelf->_rs___05Fs4029));
    bufp->chgBit(oldp+1812,(vlSelf->_rs___05Fs4032));
    bufp->chgBit(oldp+1813,(vlSelf->_rs___05Fs4019));
    bufp->chgBit(oldp+1814,(vlSelf->_cp___05Fs12310));
    bufp->chgBit(oldp+1815,(vlSelf->_cp___05Fs12574));
    bufp->chgBit(oldp+1816,(vlSelf->_cp___05Fs12423));
    bufp->chgBit(oldp+1817,(vlSelf->_cp___05Fs12428));
    bufp->chgBit(oldp+1818,(vlSelf->_cp___05Fs12436));
    bufp->chgBit(oldp+1819,(vlSelf->_cp___05Fs12434));
    bufp->chgBit(oldp+1820,(vlSelf->_cp___05Fs12500));
    bufp->chgBit(oldp+1821,(vlSelf->_cp___05Fs12513));
    bufp->chgBit(oldp+1822,(vlSelf->_cp___05Fs12530));
    bufp->chgBit(oldp+1823,(vlSelf->_cp___05Fs12531));
    bufp->chgBit(oldp+1824,(vlSelf->_cp___05Fs12426));
    bufp->chgBit(oldp+1825,(vlSelf->_cp___05Fs12539));
    bufp->chgBit(oldp+1826,(vlSelf->_cp___05Fs12582));
    bufp->chgQData(oldp+1827,(vlSelf->_rs___05Fs3828),43);
    bufp->chgBit(oldp+1829,(vlSelf->_rs___05Fs3829));
    bufp->chgBit(oldp+1830,(vlSelf->_rs___05Fs3835));
    bufp->chgBit(oldp+1831,(vlSelf->_rs___05Fs3838));
    bufp->chgBit(oldp+1832,(vlSelf->_rs___05Fs3825));
    bufp->chgBit(oldp+1833,(vlSelf->_rs___05Fs3799));
    bufp->chgBit(oldp+1834,(vlSelf->_rs___05Fs3808));
    bufp->chgBit(oldp+1835,(vlSelf->_rs___05Fs3811));
    bufp->chgBit(oldp+1836,(vlSelf->_rs___05Fs3802));
    bufp->chgBit(oldp+1837,(vlSelf->_cp___05Fs11481));
    bufp->chgBit(oldp+1838,(vlSelf->_cp___05Fs11743));
    bufp->chgBit(oldp+1839,(vlSelf->_rs___05Fs3844));
    bufp->chgCData(oldp+1840,(vlSelf->_mc___05Fs3497),3);
    bufp->chgIData(oldp+1841,(((IData)(vlSelf->_mc___05Fs3537)
                                ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT____VdfgTmp_hcef7e3f7__0)
                                    ? 0x112380U : (
                                                   ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq) 
                                                    << 0x1fU) 
                                                   | (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__VdfgTmp_h68d180b8__0))))
                                : 0U)),32);
    bufp->chgSData(oldp+1842,(vlSelf->_rs___05Fs3693),10);
    bufp->chgBit(oldp+1843,(vlSelf->_cp___05Fs11748));
    bufp->chgBit(oldp+1844,(((IData)(vlSelf->_cp___05Fs11479) 
                             & (vlSelf->debug_clockeddmi_dmi_req_bits_data 
                                >> 3U))));
    bufp->chgBit(oldp+1845,(((IData)(vlSelf->_cp___05Fs11479) 
                             & (vlSelf->debug_clockeddmi_dmi_req_bits_data 
                                >> 2U))));
    bufp->chgBit(oldp+1846,(vlSelf->_mc___05Fs3497));
    bufp->chgBit(oldp+1847,(vlSelf->_cp___05Fs11671));
    bufp->chgBit(oldp+1848,(vlSelf->_cp___05Fs11702));
    bufp->chgBit(oldp+1849,(vlSelf->_cp___05Fs11597));
    bufp->chgBit(oldp+1850,(vlSelf->_cp___05Fs11706));
    bufp->chgBit(oldp+1851,(vlSelf->_cp___05Fs11332));
    bufp->chgBit(oldp+1852,(vlSelf->_cp___05Fs11330));
    bufp->chgBit(oldp+1853,(vlSelf->_cp___05Fs11206));
    bufp->chgBit(oldp+1854,(vlSelf->_cp___05Fs11468));
    bufp->chgBit(oldp+1855,(vlSelf->_cp___05Fs11759));
    bufp->chgBit(oldp+1856,(vlSelf->_cp___05Fs12021));
    bufp->chgBit(oldp+1857,(vlSelf->_cp___05Fs11872));
    bufp->chgBit(oldp+1858,(vlSelf->_cp___05Fs11885));
    bufp->chgIData(oldp+1859,(((IData)(vlSelf->_mc___05Fs3561)
                                ? 0U : (IData)((vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                >> 1U)))),32);
    bufp->chgBit(oldp+1860,(vlSelf->_cp___05Fs11883));
    bufp->chgBit(oldp+1861,(vlSelf->_cp___05Fs12145));
    bufp->chgCData(oldp+1862,(((IData)(vlSelf->_mc___05Fs3589) 
                               << 1U)),2);
    bufp->chgBit(oldp+1863,(vlSelf->_mc___05Fs3589));
    bufp->chgBit(oldp+1864,(vlSelf->_mc___05Fs3564));
    bufp->chgBit(oldp+1865,(vlSelf->_cp___05Fs12032));
    bufp->chgBit(oldp+1866,(vlSelf->_cp___05Fs12294));
    bufp->chgBit(oldp+1867,(vlSelf->_mc___05Fs3561));
    bufp->chgBit(oldp+1868,(vlSelf->_cp___05Fs11949));
    bufp->chgBit(oldp+1869,(vlSelf->_cp___05Fs11962));
    bufp->chgBit(oldp+1870,(vlSelf->_cp___05Fs11877));
    bufp->chgBit(oldp+1871,(vlSelf->_cp___05Fs11980));
    bufp->chgBit(oldp+1872,(vlSelf->_cp___05Fs11875));
    bufp->chgBit(oldp+1873,(vlSelf->_cp___05Fs11988));
    bufp->chgBit(oldp+1874,(vlSelf->_mc___05Fs3583));
    bufp->chgBit(oldp+1875,(vlSelf->_cp___05Fs12222));
    bufp->chgBit(oldp+1876,(vlSelf->_cp___05Fs12299));
    bufp->chgBit(oldp+1877,(vlSelf->_mc___05Fs3584));
    bufp->chgBit(oldp+1878,(vlSelf->_cp___05Fs12235));
    bufp->chgBit(oldp+1879,(vlSelf->_cp___05Fs12253));
    bufp->chgBit(oldp+1880,(vlSelf->_cp___05Fs12148));
    bufp->chgBit(oldp+1881,(vlSelf->_cp___05Fs12257));
    bufp->chgBit(oldp+1882,(vlSelf->_cp___05Fs12283));
    bufp->chgBit(oldp+1883,(vlSelf->_mc___05Fs3498));
    bufp->chgBit(oldp+1884,(vlSelf->_mc___05Fs3499));
    bufp->chgBit(oldp+1885,(vlSelf->_mc___05Fs3504));
    bufp->chgBit(oldp+1886,(vlSelf->_mc___05Fs3502));
    bufp->chgBit(oldp+1887,(vlSelf->_mc___05Fs3503));
    bufp->chgBit(oldp+1888,(vlSelf->_mc___05Fs3508));
    bufp->chgBit(oldp+1889,(vlSelf->_mc___05Fs3509));
    bufp->chgBit(oldp+1890,(vlSelf->_cp___05Fs11396));
    bufp->chgBit(oldp+1891,(vlSelf->_cp___05Fs11409));
    bufp->chgBit(oldp+1892,(vlSelf->_cp___05Fs11427));
    bufp->chgBit(oldp+1893,(vlSelf->_cp___05Fs11322));
    bufp->chgBit(oldp+1894,(vlSelf->_cp___05Fs11431));
    bufp->chgBit(oldp+1895,(vlSelf->_cp___05Fs11457));
    bufp->chgBit(oldp+1896,(vlSelf->_rs___05Fs3847));
    bufp->chgBit(oldp+1897,(vlSelf->_rs___05Fs3856));
    bufp->chgBit(oldp+1898,(vlSelf->_rs___05Fs3859));
    bufp->chgBit(oldp+1899,(vlSelf->_rs___05Fs3850));
}

void VExampleRocketSystem___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root__trace_cleanup\n"); );
    // Init
    VExampleRocketSystem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VExampleRocketSystem___024root*>(voidSelf);
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x11U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x12U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x13U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x14U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x15U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x16U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x17U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x18U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x19U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1aU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1bU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1cU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1dU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1eU] = 0U;
}
