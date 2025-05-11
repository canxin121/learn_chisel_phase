// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness__pch.h"
#include "VTestHarness___024root.h"

VL_INLINE_OPT void VTestHarness___024root___nba_sequent__TOP__17(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___nba_sequent__TOP__17\n"); );
    // Init
    CData/*0:0*/ TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____VdfgTmp_h9518d69a__0;
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____VdfgTmp_h9518d69a__0 = 0;
    CData/*0:0*/ TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_18;
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_18 = 0;
    IData/*18:0*/ TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_32;
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_32 = 0;
    IData/*21:0*/ TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_34;
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_34 = 0;
    CData/*0:0*/ TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_57;
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_57 = 0;
    CData/*0:0*/ TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_59;
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_59 = 0;
    CData/*6:0*/ TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h6404c24a__0;
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h6404c24a__0 = 0;
    CData/*7:0*/ TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_15;
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_15 = 0;
    SData/*15:0*/ TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_16;
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_16 = 0;
    CData/*1:0*/ TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_17;
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_17 = 0;
    CData/*7:0*/ TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_18;
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_18 = 0;
    QData/*50:0*/ TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_19;
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_19 = 0;
    // Body
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_valid 
        = ((~ ((IData)(vlSelf->_mc___05Fs3350) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_xcpt))) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_valid));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__take_pc_wb 
        = ((IData)(vlSelf->_mc___05Fs3350) | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_xcpt) 
                                              | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___csr_io_eret) 
                                                 | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_flush_pipe))));
    vlSelf->_cp___05Fs10553 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_148)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_140 
        = (1U & ((7U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__inflight) 
                        >> (3U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                  >> 9U)))) | (IData)(vlSelf->_cp___05Fs10540)));
    vlSelf->_cp___05Fs10128 = vlSelf->_cp___05Fs10111;
    vlSelf->_cp___05Fs10147 = vlSelf->_cp___05Fs10111;
    vlSelf->_cp___05Fs10160 = vlSelf->_cp___05Fs10111;
    vlSelf->_cp___05Fs10171 = vlSelf->_cp___05Fs10111;
    vlSelf->_cp___05Fs10182 = vlSelf->_cp___05Fs10111;
    vlSelf->_cp___05Fs10193 = vlSelf->_cp___05Fs10111;
    vlSelf->_cp___05Fs10204 = vlSelf->_cp___05Fs10111;
    vlSelf->_cp___05Fs10143 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_9)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_12 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_9) 
           & ((7U > (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
              & (8U == (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                        >> 0x1cU))));
    vlSelf->_cp___05Fs10132 = vlSelf->_cp___05Fs10115;
    vlSelf->_cp___05Fs10149 = vlSelf->_cp___05Fs10115;
    vlSelf->_cp___05Fs10162 = vlSelf->_cp___05Fs10115;
    vlSelf->_cp___05Fs10173 = vlSelf->_cp___05Fs10115;
    vlSelf->_cp___05Fs10184 = vlSelf->_cp___05Fs10115;
    vlSelf->_cp___05Fs10195 = vlSelf->_cp___05Fs10115;
    vlSelf->_cp___05Fs10206 = vlSelf->_cp___05Fs10115;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_20 
        = ((0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_source)) 
           & ((6U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
              & ((0xdU > (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                 & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_19) 
                    | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hae8d912e__0)))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_32 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_9) 
           & ((4U > (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
              & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_19) 
                 | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_16) 
                    | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_17)))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_36 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_9) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_24));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_25 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_24) 
           | ((7U > (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
              & ((0U == (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                         >> 0xcU)) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hae8d912e__0))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_28 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_9) 
           & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_24) 
              | (((7U > (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                  & ((0U == (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                             >> 0xcU)) | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_16) 
                                          | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_17) 
                                             | (8U 
                                                == 
                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                                 >> 0x1cU)))))) 
                 | ((9U > (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                    & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_18)))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)) 
            << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                        | ((~ vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address) 
                           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_5))) 
                       << 6U) | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                      & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)) 
                                  << 5U) | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                              | ((~ vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address) 
                                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_4))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((~ vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address) 
                                                       & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_3))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((~ vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address) 
                                                           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_2))))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT___GEN_1 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__nReady) 
           >= (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__nBufValid));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__nICReady 
        = (3U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__nReady) 
                 - (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__nBufValid)));
    vlSelf->_mc___05Fs3315 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_valid) 
                              | (IData)(vlSelf->_mc___05Fs2723));
    vlSelf->_cp___05Fs9729 = ((IData)(vlSelf->_cp___05Fs9735) 
                              | ((0x7ffU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_1)) 
                                 | ((0x3fffU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_6)) 
                                    | ((0x3fffU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_7)) 
                                       | ((0x3fffU 
                                           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_8)) 
                                          | ((0x3ffffU 
                                              == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_13) 
                                             | ((0x3ffffU 
                                                 == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_15) 
                                                | ((0x3ffffU 
                                                    == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_17) 
                                                   | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT____VdfgTmp_h12421854__0)))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_88 
        = ((0x200U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                      >> 0xdU)) | ((0x100U & ((~ (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                  >> 0x17U)) 
                                              << 8U)) 
                                   | ((0x80U & ((~ 
                                                 (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                  >> 0x18U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   (~ 
                                                    (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                     >> 0x19U)) 
                                                   << 6U)) 
                                         | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h8ac6930f__0)))));
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h6404c24a__0 
        = ((0x40U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                     >> 0x13U)) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h8ac6930f__0));
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_32 
        = ((0x40000U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                        << 0x12U)) | ((0x20000U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                   << 0x10U)) 
                                      | ((0x10000U 
                                          & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                             << 0xeU)) 
                                         | ((0x8000U 
                                             & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                << 0xcU)) 
                                            | ((0x4000U 
                                                & ((~ 
                                                    (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                     >> 4U)) 
                                                   << 0xeU)) 
                                               | ((0x2000U 
                                                   & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                      << 8U)) 
                                                  | ((0x1000U 
                                                      & ((~ 
                                                          (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                           >> 6U)) 
                                                         << 0xcU)) 
                                                     | ((0x800U 
                                                         & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                            >> 2U)) 
                                                        | ((0x400U 
                                                            & ((~ 
                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                                 >> 0xeU)) 
                                                               << 0xaU)) 
                                                           | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h8a29efed__0))))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_31 
        = ((0x10000U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                        << 0x10U)) | ((0x8000U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                  << 0xeU)) 
                                      | ((0x4000U & 
                                          (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                           << 0xcU)) 
                                         | ((0x2000U 
                                             & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                << 0xaU)) 
                                            | ((0x1000U 
                                                & ((~ 
                                                    (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                     >> 4U)) 
                                                   << 0xcU)) 
                                               | ((0x800U 
                                                   & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                      << 6U)) 
                                                  | ((0x400U 
                                                      & ((~ 
                                                          (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                           >> 6U)) 
                                                         << 0xaU)) 
                                                     | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h8a29efed__0))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_51 
        = (((IData)(((0x33U == (0x7fU & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                     & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h2d652b57__0))) 
            << 2U) | (((IData)(((0x33U == (0x3077U 
                                           & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h2d652b57__0))) 
                       << 1U) | (0x3fffU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_29))));
    vlSelf->_cp___05Fs3517 = vlSelf->_cp___05Fs3504;
    vlSelf->_cp___05Fs3539 = vlSelf->_cp___05Fs3504;
    vlSelf->_cp___05Fs3550 = vlSelf->_cp___05Fs3504;
    vlSelf->_cp___05Fs3561 = vlSelf->_cp___05Fs3504;
    vlSelf->_cp___05Fs8245 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_b_ready) 
                              & (IData)(vlSelf->_cp___05Fs8026));
    vlSelf->_cp___05Fs10503 = ((IData)(vlSelf->_cp___05Fs10284) 
                               & ((IData)(vlSelf->_mc___05Fs944) 
                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_b_ready)));
    vlSelf->_cp___05Fs9209 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__metaArb_io_out_valid) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__metaArb_io_out_bits_write));
    vlSelf->_cp___05Fs9199 = ((IData)(vlSelf->_cp___05Fs9284) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__metaArb_io_out_valid));
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_15 
        = (0xffU & ((IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_14 
                             >> 0x1eU)) | (0x33U & 
                                           ((0xf0U 
                                             & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[0U] 
                                                >> 8U)) 
                                            | (0xfU 
                                               & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[0U] 
                                                  >> 0x10U))))));
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_16 
        = (0xffffU & ((IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_14 
                               >> 0xeU)) | (0x3333U 
                                            & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_13))));
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_17 
        = (3U & ((IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_14 
                          >> 0xaU)) | ((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[1U] 
                                        << 0x1cU) | 
                                       (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[1U] 
                                        >> 4U))));
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_18 
        = ((0xfcU & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_14) 
                     << 2U)) | (0x33U & ((0xf0U & (
                                                   vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[1U] 
                                                   >> 8U)) 
                                         | (0xfU & 
                                            (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[1U] 
                                             >> 0x10U)))));
    vlSelf->_cp___05Fs9217 = ((IData)(vlSelf->_cp___05Fs9222) 
                              | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_flush_valid));
    vlSelf->_cp___05Fs9230 = ((IData)(vlSelf->_cp___05Fs9222) 
                              & (IData)(vlSelf->_mc___05Fs1299));
    vlSelf->_mc___05Fs2596 = ((IData)(vlSelf->_cp___05Fs9272)
                               ? ((~ ((IData)(vlSelf->_cp___05Fs7955) 
                                      | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h77dbb06a__0))) 
                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_8))
                               : ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h77dbb06a__0)) 
                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_8)));
    vlSelf->_cp___05Fs9829 = (1U & (~ ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_singleStepped)) 
                                       | (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_valid)))));
    vlSelf->_cp___05Fs10098 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_valid) 
                               | (IData)(vlSelf->_cp___05Fs9830));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__nextSmall 
        = (0x7fU & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__small_0) 
                    + (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_valid)));
    vlSelf->_mc___05Fs3347 = (((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_dcache_miss) 
                                 | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_ctrl_vec)) 
                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_ctrl_wfd)) 
                               | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__io_sboard_set_REG) 
                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wb_reg_valid))) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_valid));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_wen 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_valid) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_ctrl_wxd));
    vlSelf->_cp___05Fs9635 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__take_pc_wb)) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_valid));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__killm_common 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__dcache_kill_mem) 
                 | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__take_pc_wb) 
                    | ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_valid)) 
                       | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_xcpt)))));
    vlSelf->_cp___05Fs10539 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_140)));
    vlSelf->_cp___05Fs10107 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_12)));
    vlSelf->_cp___05Fs10109 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_20)));
    vlSelf->_cp___05Fs10180 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_32)));
    vlSelf->_cp___05Fs10202 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_36)));
    vlSelf->_cp___05Fs10145 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_25)));
    vlSelf->_cp___05Fs10158 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_28)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_30 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__mask)) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_mask));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_26 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_mask) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__mask));
    vlSelf->_mc___05Fs2724 = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__nBufValid)) 
                                    | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT___GEN_1)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT___GEN_2 
        = (3U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__nIC) 
                 - (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__nICReady)));
    vlSelf->_cp___05Fs9638 = (1U & ((IData)(vlSelf->_mc___05Fs3316)
                                     ? ((0xfffffffffeULL 
                                         & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_105) 
                                        != vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_pc)
                                     : (~ ((IData)(vlSelf->_mc___05Fs3315) 
                                           & ((0xfffffffffeULL 
                                               & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_105) 
                                              == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_pc)))));
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_34 
        = ((0x200000U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                         << 0x15U)) | ((0x100000U & 
                                        (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                         << 0x13U)) 
                                       | ((0x80000U 
                                           & ((~ (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                  >> 2U)) 
                                              << 0x13U)) 
                                          | ((0x40000U 
                                              & ((~ 
                                                  (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                   >> 3U)) 
                                                 << 0x12U)) 
                                             | ((0x20000U 
                                                 & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                    << 0xdU)) 
                                                | ((0x10000U 
                                                    & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                       << 0xbU)) 
                                                   | ((0x8000U 
                                                       & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                          << 9U)) 
                                                      | ((0x4000U 
                                                          & ((~ 
                                                              (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                               >> 7U)) 
                                                             << 0xeU)) 
                                                         | ((0x2000U 
                                                             & ((~ 
                                                                 (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                                  >> 8U)) 
                                                                << 0xdU)) 
                                                            | ((0x1000U 
                                                                & ((~ 
                                                                    (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                                     >> 9U)) 
                                                                   << 0xcU)) 
                                                               | ((0x800U 
                                                                   & ((~ 
                                                                       (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                                        >> 0xaU)) 
                                                                      << 0xbU)) 
                                                                  | ((0x400U 
                                                                      & ((~ 
                                                                          (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                                           >> 0xbU)) 
                                                                         << 0xaU)) 
                                                                     | ((0x200U 
                                                                         & ((~ 
                                                                             (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                                              >> 0xcU)) 
                                                                            << 9U)) 
                                                                        | ((0x100U 
                                                                            & ((~ 
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                                                >> 0xdU)) 
                                                                               << 8U)) 
                                                                           | ((0x80U 
                                                                               & ((~ 
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                                                >> 0xeU)) 
                                                                                << 7U)) 
                                                                              | (IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h6404c24a__0))))))))))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_89 
        = ((0x10000U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                        << 0x10U)) | ((0x8000U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                  << 0xeU)) 
                                      | ((0x4000U & 
                                          ((~ (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                               >> 2U)) 
                                           << 0xeU)) 
                                         | ((0x2000U 
                                             & ((~ 
                                                 (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                  >> 3U)) 
                                                << 0xdU)) 
                                            | ((0x1000U 
                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                   << 8U)) 
                                               | ((0x800U 
                                                   & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                      << 6U)) 
                                                  | ((0x400U 
                                                      & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                         << 4U)) 
                                                     | ((0x200U 
                                                         & ((~ 
                                                             (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                              >> 7U)) 
                                                            << 9U)) 
                                                        | ((0x100U 
                                                            & ((~ 
                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                                 >> 8U)) 
                                                               << 8U)) 
                                                           | ((0x80U 
                                                               & ((~ 
                                                                   (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                                    >> 9U)) 
                                                                  << 7U)) 
                                                              | (IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h6404c24a__0)))))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_49 
        = (((IData)((0x7ffU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_23))) 
            << 2U) | (((IData)((0x1fffU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_30))) 
                       << 1U) | (0x1ffffU == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_31)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_54 
        = (((IData)((0xffU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_7))) 
            << 0xcU) | (((IData)(((0x23U == (0x3fU 
                                             & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h2c7e0a8e__0))) 
                         << 0xbU) | (((IData)((0x7fffU 
                                               == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_8))) 
                                      << 0xaU) | (((IData)(
                                                           (0x1fffU 
                                                            == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_9))) 
                                                   << 9U) 
                                                  | (((IData)(
                                                              (0x7fffU 
                                                               == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_10))) 
                                                      << 8U) 
                                                     | (((IData)(
                                                                 ((0x33U 
                                                                   == 
                                                                   (0x6077U 
                                                                    & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h085d4e30__0))) 
                                                         << 7U) 
                                                        | (((IData)(
                                                                    (0x7ffU 
                                                                     == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_23))) 
                                                            << 6U) 
                                                           | (((IData)(
                                                                       (0xffU 
                                                                        == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_25))) 
                                                               << 5U) 
                                                              | (((IData)(
                                                                          (0x7fffU 
                                                                           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_28))) 
                                                                  << 4U) 
                                                                 | (((IData)(
                                                                             (0x3fffU 
                                                                              == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_29))) 
                                                                     << 3U) 
                                                                    | (((IData)(
                                                                                (0x1fffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_30))) 
                                                                        << 2U) 
                                                                       | (((IData)(
                                                                                (0x1ffffU 
                                                                                == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_31)) 
                                                                           << 1U) 
                                                                          | (IData)(
                                                                                ((0x73U 
                                                                                == 
                                                                                (0x33ffU 
                                                                                & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                                                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h22225e9c__0)))))))))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_50 
        = (((IData)((0x7fU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_1))) 
            << 0x19U) | (((IData)((0xffU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_2))) 
                          << 0x18U) | (((IData)((3U 
                                                 == 
                                                 (0x407fU 
                                                  & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits))) 
                                        << 0x17U) | 
                                       (((IData)((0x1ffU 
                                                  == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_5))) 
                                         << 0x16U) 
                                        | (((IData)(
                                                    (0x3fU 
                                                     == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_6))) 
                                            << 0x15U) 
                                           | (((IData)(
                                                       (0x7fffU 
                                                        == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_8))) 
                                               << 0x14U) 
                                              | (((IData)(
                                                          (0x1fffU 
                                                           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_9))) 
                                                  << 0x13U) 
                                                 | (((IData)(
                                                             (0x7fffU 
                                                              == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_10))) 
                                                     << 0x12U) 
                                                    | (((IData)(
                                                                (0x3ffU 
                                                                 == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_14))) 
                                                        << 0x11U) 
                                                       | (((IData)(
                                                                   (0x7fU 
                                                                    == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_15))) 
                                                           << 0x10U) 
                                                          | (((IData)(
                                                                      (0x3fffU 
                                                                       == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_17))) 
                                                              << 0xfU) 
                                                             | (((IData)(
                                                                         (0x7fffU 
                                                                          == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_18))) 
                                                                 << 0xeU) 
                                                                | (((IData)(
                                                                            (0xffU 
                                                                             == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_20))) 
                                                                    << 0xdU) 
                                                                   | (((IData)(
                                                                               (0xffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_22))) 
                                                                       << 0xcU) 
                                                                      | (((IData)(
                                                                                (0x7ffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_23))) 
                                                                          << 0xbU) 
                                                                         | (((IData)(
                                                                                (0xffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_24))) 
                                                                             << 0xaU) 
                                                                            | (((IData)(
                                                                                (0x7fffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_26))) 
                                                                                << 9U) 
                                                                               | (((IData)(
                                                                                (0x7fffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_27))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0x7fffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_28))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0x3fffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_29))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0x1fffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_30))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0x1ffffU 
                                                                                == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_31)) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                ((0x53U 
                                                                                == 
                                                                                (0x107fU 
                                                                                & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                                                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_ha21c2d2c__0))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                ((0x53U 
                                                                                == 
                                                                                (0x207fU 
                                                                                & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                                                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_ha21c2d2c__0))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0xffffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_21))) 
                                                                                << 1U) 
                                                                                | (0xfffffU 
                                                                                == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_23))))))))))))))))))))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_53 
        = (((IData)((0x7fU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_1))) 
            << 0x18U) | (((IData)((0xffU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_2))) 
                          << 0x17U) | (((IData)((0x7fU 
                                                 == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_3))) 
                                        << 0x16U) | 
                                       (((IData)((0x1ffU 
                                                  == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_5))) 
                                         << 0x15U) 
                                        | (((IData)(
                                                    (0x7fffU 
                                                     == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_8))) 
                                            << 0x14U) 
                                           | (((IData)(
                                                       (0x1fffU 
                                                        == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_9))) 
                                               << 0x13U) 
                                              | (((IData)(
                                                          (0x7fffU 
                                                           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_10))) 
                                                  << 0x12U) 
                                                 | (((IData)(
                                                             (0x1ffU 
                                                              == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_13))) 
                                                     << 0x11U) 
                                                    | (((IData)(
                                                                (0x3fffU 
                                                                 == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_17))) 
                                                        << 0x10U) 
                                                       | (((IData)(
                                                                   (0x7fffU 
                                                                    == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_18))) 
                                                           << 0xfU) 
                                                          | (((IData)(
                                                                      ((0x1063U 
                                                                        == 
                                                                        (0x106fU 
                                                                         & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                                                       & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h2c7e0a8e__0))) 
                                                              << 0xeU) 
                                                             | (((IData)(
                                                                         (0x7fU 
                                                                          == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_21))) 
                                                                 << 0xdU) 
                                                                | (((IData)(
                                                                            (0xffU 
                                                                             == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_22))) 
                                                                    << 0xcU) 
                                                                   | (((IData)(
                                                                               (0x7ffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_23))) 
                                                                       << 0xbU) 
                                                                      | (((IData)(
                                                                                ((0x73U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                                                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_he0d066d5__0))) 
                                                                          << 0xaU) 
                                                                         | (((IData)(
                                                                                (0xffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_25))) 
                                                                             << 9U) 
                                                                            | (((IData)(
                                                                                (0x7fffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_26))) 
                                                                                << 8U) 
                                                                               | (((IData)(
                                                                                (0x7fffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_27))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0x7fffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_28))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0x3fffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_29))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0x1fffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_30))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0x1ffffU 
                                                                                == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_31)) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                ((0x73U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                                                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h22225e9c__0))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0xffffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_22))) 
                                                                                << 1U) 
                                                                                | (0x1fffffU 
                                                                                == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_25)))))))))))))))))))))))));
    vlSelf->_cp___05Fs9197 = vlSelf->_cp___05Fs8245;
    vlSelf->_cp___05Fs8257 = ((IData)(vlSelf->_mc___05Fs916) 
                              & (IData)(vlSelf->_cp___05Fs8245));
    vlSelf->_cp___05Fs10596 = vlSelf->_cp___05Fs10503;
    vlSelf->_cp___05Fs10515 = ((IData)(vlSelf->_mc___05Fs3387) 
                               & (IData)(vlSelf->_cp___05Fs10503));
    vlSelf->_cp___05Fs10597 = ((IData)(vlSelf->_cp___05Fs10595) 
                               != (IData)(vlSelf->_cp___05Fs10503));
    vlSelf->_cp___05Fs9201 = vlSelf->_cp___05Fs9199;
    vlSelf->_cp___05Fs9214 = vlSelf->_cp___05Fs9199;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__rockettile_dcache_tag_array_ext__RW0_en 
        = ((IData)(vlSelf->_cp___05Fs9199) | (IData)(vlSelf->_cp___05Fs9209));
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_19 
        = (0x5555555555555ULL & (((QData)((IData)((3U 
                                                   & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[0U] 
                                                      >> 4U)))) 
                                  << 0x31U) | (((QData)((IData)(
                                                                (3U 
                                                                 & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[0U] 
                                                                    >> 6U)))) 
                                                << 0x2fU) 
                                               | (((QData)((IData)(
                                                                   (3U 
                                                                    & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[0U] 
                                                                       >> 8U)))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_15)) 
                                                      << 0x25U) 
                                                     | (((QData)((IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_16)) 
                                                         << 0x15U) 
                                                        | (QData)((IData)(
                                                                          ((0x180000U 
                                                                            & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_13) 
                                                                               << 0x11U)) 
                                                                           | (((IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_17) 
                                                                               << 0x11U) 
                                                                              | ((0x18000U 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[1U] 
                                                                                << 9U)) 
                                                                                | ((0x6000U 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[1U] 
                                                                                << 5U)) 
                                                                                | (((IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_18) 
                                                                                << 5U) 
                                                                                | ((0x18U 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((6U 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[1U] 
                                                                                >> 0x13U)) 
                                                                                | (1U 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[1U] 
                                                                                >> 0x17U)))))))))))))))));
    vlSelf->_cp___05Fs9218 = vlSelf->_cp___05Fs9217;
    vlSelf->_cp___05Fs9223 = vlSelf->_cp___05Fs9217;
    vlSelf->_cp___05Fs9224 = vlSelf->_cp___05Fs9217;
    vlSelf->_cp___05Fs9219 = ((IData)(vlSelf->_cp___05Fs9217) 
                              | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_probe));
    vlSelf->_cp___05Fs9231 = vlSelf->_cp___05Fs9230;
    vlSelf->_cp___05Fs9232 = vlSelf->_cp___05Fs9230;
    vlSelf->_cp___05Fs9233 = vlSelf->_cp___05Fs9230;
    vlSelf->_cp___05Fs9234 = vlSelf->_cp___05Fs9230;
    vlSelf->_cp___05Fs9235 = vlSelf->_cp___05Fs9230;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT____Vcellinp__state_barrier__io_x 
        = ((IData)(vlSelf->_cp___05Fs9801) ? 1U : ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_valid)
                                                    ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_79)
                                                    : 
                                                   ((0U 
                                                     != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state))
                                                     ? 
                                                    ((IData)(vlSelf->_cp___05Fs9779)
                                                      ? 
                                                     ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_gf)
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelf->_cp___05Fs9782)
                                                        ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state)
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
                                                         : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state)))))
                                                     : 
                                                    ((IData)(vlSelf->_mc___05Fs2606)
                                                      ? (IData)(vlSelf->_mc___05Fs2593)
                                                      : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state)))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_1_req_ready 
        = ((~ (IData)(vlSelf->_cp___05Fs9760)) & (IData)(vlSelf->_mc___05Fs2596));
    vlSelf->_cp___05Fs9824 = vlSelf->_cp___05Fs10098;
    vlSelf->_cp___05Fs9813 = ((IData)(vlSelf->_cp___05Fs9812) 
                              & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__nextSmall) 
                                 >> 6U));
    vlSelf->_cp___05Fs10094 = vlSelf->_mc___05Fs3347;
    vlSelf->_cp___05Fs10095 = ((IData)(vlSelf->_mc___05Fs3347) 
                               | (IData)(vlSelf->_mc___05Fs3348));
    vlSelf->_mc___05Fs3360 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_set_sboard)) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_wen));
    vlSelf->_mc___05Fs3346 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_set_sboard) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_wen));
    vlSelf->_cp___05Fs10086 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_wen) 
                               | (IData)(vlSelf->_mc___05Fs3335));
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_18 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_branch) 
           & (IData)(vlSelf->_cp___05Fs9635));
    vlSelf->_cp___05Fs10059 = ((IData)(vlSelf->__VdfgTmp_h1960b732__0) 
                               | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__killm_common) 
                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div_io_kill_REG)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__killm_common) 
           | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___io_nack_mem_output));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_valid_masked 
        = ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcacheArb__DOT__s1_id)
                ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__killm_common) 
                   | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ldst_xcpt) 
                      | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__fpu_kill_mem)))
                : ((2U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state)) 
                   | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_gf)))) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_valid));
    vlSelf->_cp___05Fs10124 = vlSelf->_cp___05Fs10107;
    vlSelf->_cp___05Fs10126 = vlSelf->_cp___05Fs10109;
    vlSelf->_cp___05Fs10191 = vlSelf->_cp___05Fs10180;
    vlSelf->_cp___05Fs10169 = vlSelf->_cp___05Fs10158;
    vlSelf->_cp___05Fs10177 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_30));
    vlSelf->_cp___05Fs10153 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_26)));
    vlSelf->_cp___05Fs9806 = ((IData)(vlSelf->_mc___05Fs2723) 
                              & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT___GEN_1) 
                                 & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT___GEN_2) 
                                        >> 1U)) & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__nICReady) 
                                                   < (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__nIC)))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___core_io_imem_btb_update_valid 
        = ((IData)(vlSelf->_cp___05Fs9635) & ((IData)(vlSelf->_cp___05Fs9638) 
                                              & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_cfi)) 
                                                 | ((IData)(vlSelf->_mc___05Fs3312) 
                                                    | (IData)(vlSelf->_mc___05Fs3352)))));
    vlSelf->_mc___05Fs1675 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__take_pc_wb) 
                              | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_valid) 
                                 & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_xcpt)) 
                                    & ((IData)(vlSelf->_cp___05Fs9638) 
                                       | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_sfence)))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_56 
        = (((QData)((IData)((0x7fU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_1)))) 
            << 0x28U) | (((QData)((IData)((0xffU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_2)))) 
                          << 0x27U) | (((QData)((IData)(
                                                        (0x7fU 
                                                         == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_3)))) 
                                        << 0x26U) | 
                                       (((QData)((IData)(
                                                         (0x1ffU 
                                                          == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_4)))) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            (0x1ffU 
                                                             == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_5)))) 
                                            << 0x24U) 
                                           | (((QData)((IData)(
                                                               (0x3fU 
                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_6)))) 
                                               << 0x23U) 
                                              | (((QData)((IData)(
                                                                  (0x7fffU 
                                                                   == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_8)))) 
                                                  << 0x22U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fffU 
                                                                      == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_9)))) 
                                                     << 0x21U) 
                                                    | (((QData)((IData)(
                                                                        (0x7fffU 
                                                                         == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_10)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         (((IData)(
                                                                                (0x43U 
                                                                                == 
                                                                                (0x4000073U 
                                                                                & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits))) 
                                                                           << 0x1fU) 
                                                                          | (((IData)(
                                                                                (0x7ffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_1))) 
                                                                              << 0x1eU) 
                                                                             | (((IData)(
                                                                                (0x1ffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_13))) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(
                                                                                (0x7fU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_15))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                ((3U 
                                                                                == 
                                                                                (0xfU 
                                                                                & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                                                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h85cdb45b__0))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0x3fffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_17))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0x7fffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_18))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0xffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_19))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0x7fU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_21))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0xffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_22))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0x7ffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_23))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0xffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_24))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0xffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_25))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0x7fffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_26))) 
                                                                                << 0x12U) 
                                                                                | (((IData)(
                                                                                (0x7fffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_27))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0x7fffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_28))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0x3fffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_29))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0x1fffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_30))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0x7ffffU 
                                                                                == TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_32)) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                ((3U 
                                                                                == 
                                                                                (0xfU 
                                                                                & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                                                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_hfd1d1605__0))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                ((3U 
                                                                                == 
                                                                                (0xfU 
                                                                                & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                                                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_hdfad664e__0))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0x3fffffU 
                                                                                == TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_34)) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0x3fffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_6))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0x3fffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_7))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0x3fffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_8))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0x3ffffU 
                                                                                == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_13)) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0x3ffffU 
                                                                                == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_15)) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0x3ffffU 
                                                                                == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_17)) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                ((3U 
                                                                                == 
                                                                                (0xfU 
                                                                                & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                                                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_ha5ac6863__0))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0x7fffU 
                                                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_43))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                ((0x53U 
                                                                                == 
                                                                                (0x1f0707fU 
                                                                                & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                                                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h720c54da__0))) 
                                                                                << 1U) 
                                                                                | (0xfffffU 
                                                                                == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_23)))))))))))))))))))))))))))))))))))))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_52 
        = (((IData)((3U == (0x107fU & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits))) 
            << 7U) | (((IData)((0xffU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_2))) 
                       << 6U) | (((IData)((0x7fU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_3))) 
                                  << 5U) | (((IData)(
                                                     (0x7fU 
                                                      == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_21))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0x7ffU 
                                                         == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_23))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0x1fffU 
                                                            == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_30))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0x7ffffU 
                                                               == TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_32)) 
                                                      << 1U) 
                                                     | (0x3fffffU 
                                                        == TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_34))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_ctrl_mem_cmd 
        = (((IData)((0x1ffffU == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_89)) 
            << 4U) | (((IData)((0x7ffU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_23))) 
                       << 3U) | ((4U & (((0x1fffU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_30)) 
                                         | ((0x1ffffU 
                                             == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_31) 
                                            | ((0x1ffffU 
                                                == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_89) 
                                               | (IData)(
                                                         (0x8000202fU 
                                                          == 
                                                          (0x9800607fU 
                                                           & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)))))) 
                                        << 2U)) | (
                                                   (2U 
                                                    & (((0x1ffffU 
                                                         == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_31) 
                                                        | ((IData)(
                                                                   ((0x800202fU 
                                                                     == 
                                                                     (0x800607fU 
                                                                      & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                                                    & (0xfU 
                                                                       == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h0114936d__0)))) 
                                                           | (IData)(
                                                                     (0x4000202fU 
                                                                      == 
                                                                      (0x5800607fU 
                                                                       & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits))))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((0xffU 
                                                          == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_7)) 
                                                         | ((IData)(
                                                                    ((0x23U 
                                                                      == 
                                                                      (0x3bU 
                                                                       & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                                                     & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_hd6c3fe8f__0))) 
                                                            | ((IData)(
                                                                       ((0x800202fU 
                                                                         == 
                                                                         (0x800607fU 
                                                                          & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                                                        & (0xfU 
                                                                           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h0114936d__0)))) 
                                                               | (IData)(
                                                                         (0x2000202fU 
                                                                          == 
                                                                          (0x3800607fU 
                                                                           & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)))))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_ctrl_csr 
        = ((((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h85cdb45b__0)) 
             | ((0xffU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_20)) 
                | ((0xffU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_24)) 
                   | ((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                       & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_hfd1d1605__0)) 
                      | ((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                          & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_hdfad664e__0)) 
                         | ((0x1ffffU == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_89) 
                            | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_ha5ac6863__0))))))) 
            << 2U) | (((IData)((0xffU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_24))) 
                       << 1U) | (0xffU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_20))));
    vlSelf->_cp___05Fs10069 = ((0x1ffU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_4)) 
                               | ((0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_49)) 
                                  & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                     >> 0x1aU)));
    vlSelf->_cp___05Fs10076 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__do_bypass_1)) 
                               & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_54)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_135 
        = ((0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_54)) 
           & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs2)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_136 
        = ((0U != vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_50) 
           & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rd)));
    vlSelf->_cp___05Fs10075 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__do_bypass)) 
                               & (0U != vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_53));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_134 
        = ((0U != vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_53) 
           & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs1)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT__out 
        = (((IData)(vlSelf->_mc___05Fs3108) | (IData)(vlSelf->_mc___05Fs3107))
            ? vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___io_adder_out_output
            : ((QData)((IData)(((0xbU < (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_alu_fn)) 
                                & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_alu_fn) 
                                       >> 4U)) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT__slt))))) 
               | (((IData)(vlSelf->_mc___05Fs3014) ? vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT__in1_xor_in2
                    : 0ULL) | (((IData)(vlSelf->_mc___05Fs3015)
                                 ? (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____Vcellinp__alu__io_in1 
                                    & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT__in2_inv)
                                 : 0ULL) | (((IData)(vlSelf->_mc___05Fs3012)
                                              ? (((QData)((IData)(
                                                                  vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[0U])))
                                              : 0ULL) 
                                            | ((IData)(vlSelf->_mc___05Fs3013)
                                                ? (
                                                   ((QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[0U]))) 
                                                    << 0x3fU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[0U] 
                                                                           >> 1U)))) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[0U] 
                                                                              >> 2U)))) 
                                                          << 0x3dU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[0U] 
                                                                                >> 3U)))) 
                                                             << 0x3cU) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[0U] 
                                                                                >> 4U)))) 
                                                                << 0x3bU) 
                                                               | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & ((IData)(
                                                                                (TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_19 
                                                                                >> 0x2fU)) 
                                                                                | (5U 
                                                                                & ((0xcU 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[0U] 
                                                                                >> 4U)) 
                                                                                | (3U 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[0U] 
                                                                                >> 8U)))))))) 
                                                                   << 0x37U) 
                                                                  | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & ((IData)(
                                                                                (TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_19 
                                                                                >> 0x27U)) 
                                                                                | (0x55U 
                                                                                & (IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_15)))))) 
                                                                      << 0x2fU) 
                                                                     | (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & ((IData)(
                                                                                (TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_19 
                                                                                >> 0x17U)) 
                                                                                | (0x5555U 
                                                                                & (IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_16)))))) 
                                                                         << 0x1fU) 
                                                                        | (QData)((IData)(
                                                                                ((0x40000000U 
                                                                                & ((IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_16) 
                                                                                << 0x1dU)) 
                                                                                | ((0x20000000U 
                                                                                & (((IData)(
                                                                                (TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_19 
                                                                                >> 0x15U)) 
                                                                                << 0x1dU) 
                                                                                | (0xe0000000U 
                                                                                & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_13) 
                                                                                << 0x1bU)))) 
                                                                                | (((0x10000000U 
                                                                                & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_13) 
                                                                                << 0x19U)) 
                                                                                | (0x8000000U 
                                                                                & ((IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_17) 
                                                                                << 0x1bU))) 
                                                                                | ((0x7800000U 
                                                                                & (((IData)(
                                                                                (TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_19 
                                                                                >> 0xfU)) 
                                                                                << 0x17U) 
                                                                                | (0x2800000U 
                                                                                & ((0x6000000U 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[1U] 
                                                                                << 0x13U)) 
                                                                                | (0x1800000U 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[1U] 
                                                                                << 0xfU)))))) 
                                                                                | ((0x7f8000U 
                                                                                & (((IData)(
                                                                                (TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_19 
                                                                                >> 7U)) 
                                                                                << 0xfU) 
                                                                                | (0x2a8000U 
                                                                                & ((IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_18) 
                                                                                << 0xfU)))) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_18) 
                                                                                << 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(
                                                                                (TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_19 
                                                                                >> 5U)) 
                                                                                << 0xdU) 
                                                                                | (0x7ffe000U 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[1U] 
                                                                                >> 5U)))) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[1U] 
                                                                                >> 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[1U] 
                                                                                >> 9U)) 
                                                                                | (((0x700U 
                                                                                & ((IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_19) 
                                                                                << 8U)) 
                                                                                | (0x280U 
                                                                                & ((0x600U 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[1U] 
                                                                                >> 0xdU)) 
                                                                                | (0x180U 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[1U] 
                                                                                >> 0x11U))))) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[1U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[1U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[1U] 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[1U] 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[1U] 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[1U] 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_12[1U] 
                                                                                >> 0x1fU)))))))))))))))))))))))))))
                                                : 0ULL))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__replay_ex 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_replay) 
           | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_valid) 
              & (((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_1_req_ready)) 
                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_mem)) 
                 | (((0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__state)) 
                     & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_div)) 
                    | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_dcache_miss) 
                       & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_load_use))))));
    vlSelf->_cp___05Fs10096 = ((IData)(vlSelf->_cp___05Fs10095) 
                               | (IData)(vlSelf->_mc___05Fs3349));
    vlSelf->_cp___05Fs10093 = ((IData)(vlSelf->_mc___05Fs3335) 
                               | (IData)(vlSelf->_mc___05Fs3346));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____Vcellinp__rf_ext__W0_en 
        = ((IData)(vlSelf->_cp___05Fs10086) & (IData)(vlSelf->_cp___05Fs10087));
    vlSelf->_cp___05Fs9633 = ((IData)(vlSelf->_mc___05Fs1671) 
                              | (IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_18));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT____VdfgTmp_h4d93a516__0 
        = ((IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_18) 
           & (IData)(vlSelf->_cp___05Fs9637));
    vlSelf->_cp___05Fs9743 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_19 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_valid_masked) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_cmd_uses_tlb));
    vlSelf->_mc___05Fs1074 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_valid_masked) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_sfence));
    vlSelf->_cp___05Fs10166 = vlSelf->_cp___05Fs10153;
    vlSelf->_cp___05Fs10188 = vlSelf->_cp___05Fs10153;
    vlSelf->_cp___05Fs10199 = vlSelf->_cp___05Fs10153;
    vlSelf->_cp___05Fs10210 = vlSelf->_cp___05Fs10153;
    vlSelf->_cp___05Fs9656 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___core_io_imem_btb_update_valid)));
    vlSelf->_cp___05Fs9619 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___core_io_imem_btb_update_valid)
                               ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___core_io_imem_btb_update_valid)
                               : ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_11) 
                                  & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__valid_1)) 
                                     & (((IData)(vlSelf->_cp___05Fs9666) 
                                         & (IData)(vlSelf->_cp___05Fs9672)) 
                                        | (IData)(vlSelf->_cp___05Fs9664)))));
    vlSelf->_cp___05Fs9683 = vlSelf->_mc___05Fs1675;
    vlSelf->_cp___05Fs9807 = vlSelf->_mc___05Fs1675;
    vlSelf->_cp___05Fs9682 = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_46) 
                               & (IData)(vlSelf->_cp___05Fs9673)) 
                              | (IData)(vlSelf->_mc___05Fs1675));
    vlSelf->_cp___05Fs10097 = (1U & ((0U == (0x1fU 
                                             & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__small_1))) 
                                     | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mcountinhibit) 
                                        | ((((1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__io_cpu_perf_release_counter)) 
                                             | (0U 
                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__beats1_1))) 
                                            & (IData)(vlSelf->_cp___05Fs10516)) 
                                           | (IData)(vlSelf->_mc___05Fs1675)))));
    vlSelf->_cp___05Fs9647 = (1U & (~ ((~ ((IData)(vlSelf->_mc___05Fs1675) 
                                           | ((IData)(vlSelf->_mc___05Fs1479) 
                                              | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___core_io_imem_flush_icache) 
                                                 | ((IData)(vlSelf->_cp___05Fs9635) 
                                                    | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___core_io_imem_btb_update_valid)))))) 
                                       | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__imem_might_request_reg))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s0_valid 
        = (1U & ((IData)(vlSelf->_mc___05Fs1675) | 
                 ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__valid_2)) 
                  | (((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__valid_3)) 
                      & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_valid)) 
                         | (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_valid)))) 
                     | ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__valid_4)) 
                        & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_valid)) 
                           & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_valid))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_1 
        = (0x7fffffffffULL & ((IData)(vlSelf->_mc___05Fs1675)
                               ? (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___io_imem_req_bits_pc_output 
                                  >> 1U) : ((IData)(vlSelf->_mc___05Fs1674)
                                             ? (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_pc 
                                                >> 1U)
                                             : ((IData)(vlSelf->_cp___05Fs9675)
                                                 ? 
                                                VL_SHIFTR_QQI(39,39,32, vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_21, 1U)
                                                 : 
                                                (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____VdfgTmp_hb8a1c1ac__0) 
                                                  & (IData)(vlSelf->_cp___05Fs9670))
                                                  ? 
                                                 (0x7fffffffffULL 
                                                  & ((((IData)(vlSelf->_mc___05Fs1740)
                                                        ? 
                                                       ((2ULL 
                                                         | (0xfffffffffcULL 
                                                            & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_pc)) 
                                                        - 2ULL)
                                                        : 
                                                       (2ULL 
                                                        | (0xfffffffffcULL 
                                                           & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_pc))) 
                                                      + 
                                                      (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_41 
                                                                                >> 0x1eU))))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_41 
                                                                          << 1U))))) 
                                                     >> 1U))
                                                  : 
                                                 (((IData)(vlSelf->_cp___05Fs9659) 
                                                   & (IData)(vlSelf->_cp___05Fs9662))
                                                   ? 
                                                  (0x7fffffffffULL 
                                                   & (((0xfffffffffcULL 
                                                        & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_pc) 
                                                       + 
                                                       (((QData)((IData)(
                                                                         (0x7fU 
                                                                          & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_26 
                                                                                >> 0x20U)))))))) 
                                                         << 0x21U) 
                                                        | vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_26)) 
                                                      >> 1U))
                                                   : 
                                                  ((IData)(vlSelf->_cp___05Fs9655)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___btb_io_resp_bits_target 
                                                                                >> 0x26U))))) 
                                                     << 0x26U) 
                                                    | (0x3fffffffffULL 
                                                       & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___btb_io_resp_bits_target 
                                                          >> 1U)))
                                                    : 
                                                   (0x7fffffffffULL 
                                                    & ((4ULL 
                                                        + 
                                                        (0xfffffffffcULL 
                                                         & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc)) 
                                                       >> 1U)))))))));
    vlSelf->_cp___05Fs10073 = ((0x14U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_ctrl_mem_cmd)) 
                               | ((0x15U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_ctrl_mem_cmd)) 
                                  | ((0x16U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_ctrl_mem_cmd)) 
                                     | (5U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_ctrl_mem_cmd)))));
    vlSelf->_cp___05Fs10074 = ((0x14U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_ctrl_mem_cmd)) 
                               & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_v));
    vlSelf->_mc___05Fs3235 = ((4U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_ctrl_csr)) 
                              & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_52)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_hd5497691__0 
        = ((~ (IData)(vlSelf->_mc___05Fs2732)) & (4U 
                                                  == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_ctrl_csr)));
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_57 
        = ((6U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_ctrl_csr)) 
           | (7U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_ctrl_csr)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__data_hazard_mem 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_wxd) 
           & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_134) 
               & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_65)) 
              | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_135) 
                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_67)) 
                 | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_136) 
                    & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_147)))));
    vlSelf->_mc___05Fs3109 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT__out 
                                            >> 0x1fU)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_killx 
        = (1U & ((IData)(vlSelf->_mc___05Fs1675) | 
                 ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_valid)) 
                  | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__replay_ex))));
    vlSelf->_cp___05Fs8633 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_19) 
                              & (IData)(vlSelf->_mc___05Fs997));
    vlSelf->_cp___05Fs8637 = ((0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__state)) 
                              & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_19) 
                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__tlb_miss)));
    vlSelf->_cp___05Fs8639 = vlSelf->_mc___05Fs1074;
    vlSelf->_cp___05Fs8642 = ((2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__state)) 
                              & (IData)(vlSelf->_mc___05Fs1074));
    vlSelf->_cp___05Fs8613 = ((IData)(vlSelf->_cp___05Fs8638) 
                              | ((3U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__state)) 
                                 | (IData)(vlSelf->_mc___05Fs1074)));
    vlSelf->_cp___05Fs9305 = ((~ (IData)(vlSelf->_mc___05Fs1357)) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s0_valid));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____Vcellinp__rockettile_icache_tag_array_ext__RW0_addr 
        = (0x3fU & ((IData)(vlSelf->_cp___05Fs9312)
                     ? (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refill_paddr 
                        >> 6U) : (IData)((0x1ffffffffULL 
                                          & (VL_SHIFTL_QQI(39,39,32, vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_1, 1U) 
                                             >> 6U)))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____Vcellinp__rockettile_icache_data_arrays_0_ext__RW0_addr 
        = (0x1ffU & ((IData)(vlSelf->_mc___05Fs1357)
                      ? ((0x1f8U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refill_paddr 
                                    >> 3U)) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refill_cnt))
                      : (IData)((0xfffffffffULL & (
                                                   VL_SHIFTL_QQI(39,39,32, vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_1, 1U) 
                                                   >> 3U)))));
    vlSelf->_mc___05Fs3234 = ((IData)(vlSelf->_mc___05Fs3279) 
                              & (IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_57));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_csr_en 
        = ((IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_57) 
           | (5U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_ctrl_csr)));
    vlSelf->_cp___05Fs9311 = ((~ (IData)(vlSelf->_cp___05Fs9312)) 
                              & (IData)(vlSelf->_cp___05Fs9305));
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____VdfgTmp_h9518d69a__0 
        = ((~ (IData)(vlSelf->_cp___05Fs9321)) & (IData)(vlSelf->_cp___05Fs9305));
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_59 
        = ((~ (IData)(vlSelf->_mc___05Fs3234)) & (3U 
                                                  == 
                                                  (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                   >> 0x1eU)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_160 
        = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_valid) 
            & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_wxd) 
                & ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_134) 
                     & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_64)) 
                    | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_135) 
                        & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_66)) 
                       | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_136) 
                          & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_146)))) 
                   & ((0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_csr)) 
                      | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_jalr) 
                         | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_mem) 
                            | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_mul) 
                               | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_div) 
                                  | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_fp) 
                                     | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_rocc) 
                                        | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_vec)))))))))) 
               | ((0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_55)) 
                  & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_wfd) 
                     & (((IData)(vlSelf->_cp___05Fs9729) 
                         & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_64)) 
                        | (((IData)(vlSelf->_cp___05Fs9732) 
                            & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_66)) 
                           | (((IData)(vlSelf->_cp___05Fs9735) 
                               & ((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                   >> 0x1bU) == (0x1fU 
                                                 & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_inst 
                                                    >> 7U)))) 
                              | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___fp_decoder_io_sigs_wen) 
                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_146))))))))) 
           | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_valid) 
               & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__data_hazard_mem) 
                   & ((0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_csr)) 
                      | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_mem) 
                          & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_mem_cmd_bh)) 
                         | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_mul) 
                            | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_div) 
                               | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_fp) 
                                  | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_rocc) 
                                     | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_vec)))))))) 
                  | ((0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_55)) 
                     & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_wfd) 
                        & (((IData)(vlSelf->_cp___05Fs9729) 
                            & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_65)) 
                           | (((IData)(vlSelf->_cp___05Fs9732) 
                               & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_67)) 
                              | (((IData)(vlSelf->_cp___05Fs9735) 
                                  & ((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                      >> 0x1bU) == 
                                     (0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_inst 
                                               >> 7U)))) 
                                 | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___fp_decoder_io_sigs_wen) 
                                    & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_147))))))))) 
              | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_valid) 
                  & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_ctrl_wxd) 
                      & ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_134) 
                           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_148)) 
                          | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_135) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_149)) 
                             | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_136) 
                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_150)))) 
                         & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_set_sboard))) 
                     | ((0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_55)) 
                        & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_ctrl_wfd) 
                           & (((IData)(vlSelf->_cp___05Fs9729) 
                               & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_148)) 
                              | (((IData)(vlSelf->_cp___05Fs9732) 
                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_149)) 
                                 | (((IData)(vlSelf->_cp___05Fs9735) 
                                     & ((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                         >> 0x1bU) 
                                        == (0x1fU & 
                                            (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                             >> 7U)))) 
                                    | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___fp_decoder_io_sigs_wen) 
                                       & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_150))))))))) 
                 | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_134) 
                     & ((~ ((IData)(vlSelf->_mc___05Fs3335) 
                            & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ll_waddr) 
                               == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs1)))) 
                        & ((0xfffffffeU & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_137) 
                           >> (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs1)))) 
                    | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_135) 
                        & ((~ ((IData)(vlSelf->_mc___05Fs3335) 
                               & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ll_waddr) 
                                  == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs2)))) 
                           & ((0xfffffffeU & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_137) 
                              >> (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs2)))) 
                       | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_136) 
                           & ((~ ((IData)(vlSelf->_mc___05Fs3335) 
                                  & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ll_waddr) 
                                     == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rd)))) 
                              & ((0xfffffffeU & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_137) 
                                 >> (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rd)))) 
                          | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___io_singleStep_output) 
                              & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_valid) 
                                 | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_valid) 
                                    | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_valid)))) 
                             | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_csr_en) 
                                 & ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_wflags) 
                                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_valid)) 
                                     | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_wflags) 
                                         & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_reg_valid)) 
                                        | ((IData)(vlSelf->_mc___05Fs2441) 
                                           | ((0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wen)) 
                                              | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_inFlight))))) 
                                    & (0xfU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_96)))) 
                                | (((0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_55)) 
                                    & (((IData)(vlSelf->_cp___05Fs9729) 
                                        & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_151 
                                           >> (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs1))) 
                                       | (((IData)(vlSelf->_cp___05Fs9732) 
                                           & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_151 
                                              >> (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs2))) 
                                          | (((IData)(vlSelf->_cp___05Fs9735) 
                                              & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_151 
                                                 >> 
                                                 (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                  >> 0x1bU))) 
                                             | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___fp_decoder_io_sigs_wen) 
                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_151 
                                                   >> (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rd))))))) 
                                   | (((0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_52)) 
                                       & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_1_perf_grant)) 
                                          & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__dcache_blocked_blocked))) 
                                      | (((0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_51)) 
                                          & ((~ ((0U 
                                                  == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__state)) 
                                                 | ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_wxd)) 
                                                    & (IData)(vlSelf->_cp___05Fs10062)))) 
                                             | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_87))) 
                                         | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_mem_busy) 
                                             & (((0U 
                                                  != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_49)) 
                                                 & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                    >> 0x19U)) 
                                                | ((0x3ffU 
                                                    == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_16)) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_reg_fence) 
                                                      & (0U 
                                                         != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_52)))))) 
                                            | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___io_csr_stall_output) 
                                               | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_reg_pause))))))))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____Vcellinp__rockettile_icache_tag_array_ext__RW0_en 
        = ((IData)(vlSelf->_cp___05Fs9311) | (IData)(vlSelf->_cp___05Fs9312));
    vlSelf->_cp___05Fs9326 = ((~ (IData)((0x1fffffffffULL 
                                          & (VL_SHIFTL_QQI(39,39,32, vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_1, 1U) 
                                             >> 2U)))) 
                              & (IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____VdfgTmp_h9518d69a__0));
    vlSelf->_cp___05Fs9333 = ((IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____VdfgTmp_h9518d69a__0) 
                              & (IData)((0x1fffffffffULL 
                                         & (VL_SHIFTL_QQI(39,39,32, vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_1, 1U) 
                                            >> 2U))));
    vlSelf->_mc___05Fs3236 = ((0U != vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_56) 
                              & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_csr_en) 
                                  & ((~ (IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_59)) 
                                     & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_v) 
                                        & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__csr_exists) 
                                           & ((2U == 
                                               (3U 
                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                   >> 0x1cU))) 
                                              | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__is_counter) 
                                                  & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_92) 
                                                 | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h9cf01ff6__0))))))) 
                                 | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_hd5497691__0) 
                                    & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_v) 
                                       & (((~ (IData)(vlSelf->_mc___05Fs1432)) 
                                           & (0x3ffU 
                                              == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_88))) 
                                          | (((0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_90)) 
                                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h9cf01ff6__0)) 
                                             | ((~ (IData)(vlSelf->_mc___05Fs1432)) 
                                                & (0x1ffffU 
                                                   == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_89))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_illegal_insn 
        = (1U & ((~ (IData)((0U != vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_56))) 
                 | (((~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_misa 
                                 >> 0xcU))) & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_51))) 
                    | (((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_misa)) 
                        & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_49))) 
                       | (((0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_55)) 
                           & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___io_decode_0_fp_illegal_output) 
                              | ((5U == (7U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                               >> 0xcU))) 
                                 | ((6U == (7U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                  >> 0xcU))) 
                                    | (IData)(((0x7000U 
                                                == 
                                                (0x7000U 
                                                 & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                               & (4U 
                                                  < (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_frm)))))))) 
                          | (((~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_misa 
                                          >> 3U))) 
                              & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_48))) 
                             | (((~ (IData)(vlSelf->_mc___05Fs2805)) 
                                 & (IData)(vlSelf->_mc___05Fs2732)) 
                                | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_csr_en) 
                                    & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_98) 
                                        | ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__csr_exists)) 
                                           | (((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__allow_sfence_vma)) 
                                               & ((0x180U 
                                                   == 
                                                   (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                    >> 0x14U)) 
                                                  | (0x680U 
                                                     == 
                                                     (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                      >> 0x14U)))) 
                                              | (((~ 
                                                   ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv) 
                                                      >> 1U) 
                                                     | vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_92) 
                                                    & ((0U 
                                                        != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)) 
                                                       | ((7U 
                                                           & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_scounteren) 
                                                          >> 
                                                          (0x1fU 
                                                           & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                              >> 0x14U)))))) 
                                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__is_counter)) 
                                                 | ((IData)(
                                                            ((0x7b000000U 
                                                              == 
                                                              (0xff000000U 
                                                               & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                                             & (IData)(vlSelf->_cp___05Fs9832))) 
                                                    | ((0xfU 
                                                        == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_96)) 
                                                       & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___io_decode_0_fp_illegal_output))))))) 
                                       | (IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_59))) 
                                   | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_hd5497691__0) 
                                      & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_98) 
                                         | (((~ ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_tw)) 
                                                 | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv) 
                                                    >> 1U))) 
                                             & (0x3ffU 
                                                == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_88))) 
                                            | (((~ 
                                                 ((~ 
                                                   ((IData)(vlSelf->_cp___05Fs9839) 
                                                    & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_tsr))) 
                                                  | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv) 
                                                     >> 1U))) 
                                                & (0U 
                                                   != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_90))) 
                                               | (((0U 
                                                    != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_90)) 
                                                   & (IData)(
                                                             ((0x48000000U 
                                                               == 
                                                               (0x48000000U 
                                                                & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                                              & (IData)(vlSelf->_cp___05Fs9832)))) 
                                                  | ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__allow_sfence_vma)) 
                                                     & (0x1ffffU 
                                                        == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_89)))))))))))))));
    vlSelf->_cp___05Fs9805 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_160)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____Vcellinp__rockettile_icache_data_arrays_0_ext__RW0_en 
        = ((IData)(vlSelf->_cp___05Fs9326) | (IData)(vlSelf->_cp___05Fs9321));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____Vcellinp__rockettile_icache_data_arrays_1_ext__RW0_en 
        = ((IData)(vlSelf->_cp___05Fs9333) | (IData)(vlSelf->_cp___05Fs9321));
    vlSelf->_cp___05Fs10077 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_illegal_insn) 
                               | (IData)(vlSelf->_mc___05Fs3236));
    vlSelf->_mc___05Fs1365 = ((IData)(vlSelf->_cp___05Fs9805) 
                              & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT___GEN_1) 
                                 & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT___GEN_2) 
                                        >> 1U)) | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__nICReady) 
                                                   >= (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__nIC)))));
    if (vlSelf->_mc___05Fs1365) {
        vlSelf->_cp___05Fs9341 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT___GEN_1;
        vlSelf->_cp___05Fs9342 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT___GEN_3;
        vlSelf->_cp___05Fs9343 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT___GEN_5;
        vlSelf->_cp___05Fs9344 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT___GEN_7;
        vlSelf->_cp___05Fs9345 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT___GEN_8;
    } else {
        vlSelf->_cp___05Fs9341 = ((IData)(vlSelf->_cp___05Fs9347) 
                                  & (IData)(vlSelf->_cp___05Fs9673));
        vlSelf->_cp___05Fs9342 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__valid_1)) 
                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT___GEN_0));
        vlSelf->_cp___05Fs9343 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__valid_2)) 
                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT___GEN_2));
        vlSelf->_cp___05Fs9344 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__valid_3)) 
                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT___GEN_4));
        vlSelf->_cp___05Fs9345 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__valid_4)) 
                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT___GEN_6));
    }
}

VL_INLINE_OPT void VTestHarness___024root___nba_sequent__TOP__19(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___nba_sequent__TOP__19\n"); );
    // Init
    CData/*0:0*/ __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx_widx_bin;
    __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx_widx_bin = 0;
    // Body
    __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx_widx_bin 
        = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx_widx_bin;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hrDebugIntReg_0 
        = ((~ (IData)(vlSelf->TestHarness__DOT__debug_reset)) 
           & (((IData)(vlSelf->_rs___05Fs4064) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hrmaskReg_0)) 
              & ((IData)(vlSelf->_rs___05Fs3921) | 
                 ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hrDebugIntReg_0) 
                  & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartHalted))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_gray 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__ridx_gray 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__ridx));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_ridx_bin 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__ridx_ridx_bin 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__ridx));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->_cp___05Fs13389));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->_cp___05Fs13387));
    if (vlSelf->TestHarness__DOT__debug_reset) {
        __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx_widx_bin = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__ready_reg = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx_gray = 0U;
    } else {
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__unnamedblk1__DOT__widx 
            = ((IData)(vlSelf->_rs___05Fs4050) & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx_widx_bin) 
                                                  + (IData)(vlSelf->_cp___05Fs12774)));
        __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx_widx_bin 
            = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__unnamedblk1__DOT__widx;
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__ready_reg 
            = ((IData)(vlSelf->_rs___05Fs4050) & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__unnamedblk1__DOT__widx) 
                                                  != 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->_rs___05Fs4038)))));
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx_gray 
            = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__unnamedblk1__DOT__widx;
    }
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx_widx_bin 
        = __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx_widx_bin;
    vlSelf->_rs___05Fs3929 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hrDebugIntReg_0;
    vlSelf->_rs___05Fs4083 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_ridx_bin;
    vlSelf->_rs___05Fs4035 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__ridx_ridx_bin;
    vlSelf->_rs___05Fs4084 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__valid_reg;
    vlSelf->_rs___05Fs4038 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs4067 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs4019 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->_cp___05Fs13117 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0)));
    vlSelf->_rs___05Fs4064 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_2));
    vlSelf->_mc___05Fs3674 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)));
    vlSelf->_rs___05Fs4080 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->_cp___05Fs13118 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                               & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__valid_reg));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs3921 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_0;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs4036 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__valid_reg;
    vlSelf->_rs___05Fs4061 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx_widx_bin;
    vlSelf->_rs___05Fs4062 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__ready_reg;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_mc___05Fs3673 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)));
    vlSelf->_rs___05Fs4050 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->_cp___05Fs12846 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__ready_reg) 
                               & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_mc___05Fs3672 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)));
    vlSelf->_rs___05Fs4032 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->_cp___05Fs12584 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                               & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__valid_reg));
    vlSelf->_cp___05Fs13119 = vlSelf->_cp___05Fs13117;
    vlSelf->_cp___05Fs13122 = vlSelf->_cp___05Fs13117;
    vlSelf->_cp___05Fs13124 = vlSelf->_cp___05Fs13117;
    vlSelf->_cp___05Fs13131 = vlSelf->_cp___05Fs13117;
    vlSelf->_cp___05Fs13134 = vlSelf->_cp___05Fs13117;
    vlSelf->_cp___05Fs13136 = vlSelf->_cp___05Fs13117;
    vlSelf->_cp___05Fs13285 = vlSelf->_cp___05Fs13117;
    vlSelf->_cp___05Fs13364 = vlSelf->_cp___05Fs13117;
    vlSelf->_cp___05Fs13384 = vlSelf->_cp___05Fs13117;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_ridx_bin) 
              + (IData)(vlSelf->_cp___05Fs13118)));
    vlSelf->_cp___05Fs12697 = vlSelf->_cp___05Fs12584;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_9 
        = ((IData)(vlSelf->_cp___05Fs12584) & (IData)(vlSelf->_cp___05Fs12846));
    vlSelf->_cp___05Fs12774 = ((IData)(vlSelf->_cp___05Fs12846) 
                               & (IData)(vlSelf->_cp___05Fs12584));
    vlSelf->_rs___05Fs4039 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->_rs___05Fs3843));
    vlSelf->_rs___05Fs4068 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->_rs___05Fs3870));
    vlSelf->_rs___05Fs4020 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->_rs___05Fs3824));
    vlSelf->_rs___05Fs4065 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->_rs___05Fs3699));
    vlSelf->_cp___05Fs13389 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                               & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx) 
                                  != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->_rs___05Fs4081 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->_rs___05Fs4077));
    vlSelf->_rs___05Fs3922 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->reset));
    vlSelf->_rs___05Fs4051 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->_rs___05Fs4047));
    vlSelf->_rs___05Fs4033 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->_rs___05Fs4029));
    vlSelf->_cp___05Fs12787 = vlSelf->_cp___05Fs12774;
    vlSelf->_cp___05Fs12802 = vlSelf->_cp___05Fs12774;
    vlSelf->_cp___05Fs12803 = vlSelf->_cp___05Fs12774;
    vlSelf->_cp___05Fs12827 = vlSelf->_cp___05Fs12774;
    vlSelf->_cp___05Fs12829 = vlSelf->_cp___05Fs12774;
    vlSelf->_cp___05Fs12849 = vlSelf->_cp___05Fs12774;
    vlSelf->_cp___05Fs13388 = vlSelf->_cp___05Fs12774;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__ridx 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__ridx_ridx_bin) 
              + (IData)(vlSelf->_cp___05Fs12774)));
    vlSelf->_cp___05Fs13387 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                               & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__ridx) 
                                  != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->_rs___05Fs4040 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4069 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4021 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4066 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4082 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs3923 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4052 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4034 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
}

VL_INLINE_OPT void VTestHarness___024root___nba_sequent__TOP__20(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___nba_sequent__TOP__20\n"); );
    // Init
    CData/*0:0*/ __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_resumereq;
    __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_resumereq = 0;
    CData/*0:0*/ __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartreset;
    __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartreset = 0;
    CData/*0:0*/ __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ackhavereset;
    __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ackhavereset = 0;
    CData/*0:0*/ __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_reserved0;
    __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_reserved0 = 0;
    CData/*0:0*/ __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hasel;
    __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hasel = 0;
    CData/*0:0*/ __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_setresethaltreq;
    __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_setresethaltreq = 0;
    CData/*0:0*/ __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_clrresethaltreq;
    __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_clrresethaltreq = 0;
    CData/*0:0*/ __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0;
    __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0 = 0;
    CData/*0:0*/ __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx_widx_bin;
    __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx_widx_bin = 0;
    CData/*0:0*/ __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin;
    __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin = 0;
    // Body
    __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin 
        = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin;
    __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx_widx_bin 
        = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx_widx_bin;
    __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0 
        = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0;
    vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset 
        = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset;
    __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_clrresethaltreq 
        = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_clrresethaltreq;
    __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_setresethaltreq 
        = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_setresethaltreq;
    __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hasel 
        = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hasel;
    __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_reserved0 
        = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_reserved0;
    __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ackhavereset 
        = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ackhavereset;
    __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartreset 
        = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartreset;
    __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_resumereq 
        = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_resumereq;
    vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq 
        = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_gray 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__hrmaskReg_0 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__hrmaskNxt_0));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_ridx_bin 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlAckHaveResetReg 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT___io_innerCtrl_bits_ackhavereset_output) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT___io_enq_ready_output))));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlResumeReqReg 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT___io_innerCtrl_bits_resumereq_output) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT___io_enq_ready_output))));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlValidReg 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT___io_innerCtrl_valid_output) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT___io_enq_ready_output))));
    if (vlSelf->reset) {
        __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ready_reg = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_gray = 0U;
        __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx_widx_bin = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__ready_reg = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx_gray = 0U;
        vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq = 0U;
        __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_resumereq = 0U;
        __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartreset = 0U;
        __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ackhavereset = 0U;
        __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_reserved0 = 0U;
        __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hasel = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartsello = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartselhi = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_reserved1 = 0U;
        __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_setresethaltreq = 0U;
        __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_clrresethaltreq = 0U;
        vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset = 0U;
        __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0 = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive = 0U;
    } else {
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__unnamedblk1__DOT__widx 
            = ((IData)(vlSelf->_rs___05Fs3859) & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin) 
                                                  + (IData)(vlSelf->_cp___05Fs12583)));
        __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin 
            = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__unnamedblk1__DOT__widx;
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ready_reg 
            = ((IData)(vlSelf->_rs___05Fs3859) & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__unnamedblk1__DOT__widx) 
                                                  != 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->_rs___05Fs3847)))));
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_gray 
            = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__unnamedblk1__DOT__widx;
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__unnamedblk1__DOT__widx 
            = ((IData)(vlSelf->_rs___05Fs3811) & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx_widx_bin) 
                                                  + (IData)(vlSelf->_cp___05Fs12500)));
        __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx_widx_bin 
            = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__unnamedblk1__DOT__widx;
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__ready_reg 
            = ((IData)(vlSelf->_rs___05Fs3811) & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__unnamedblk1__DOT__widx) 
                                                  != 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->_rs___05Fs3799)))));
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx_gray 
            = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__unnamedblk1__DOT__widx;
        vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq 
            = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
               & ((IData)(vlSelf->_cp___05Fs11748) ? 
                  (vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_data 
                   >> 0x1fU) : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq)));
        __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_resumereq 
            = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
               & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_resumereq));
        __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartreset 
            = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
               & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartreset));
        __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ackhavereset 
            = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
               & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ackhavereset));
        __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_reserved0 
            = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
               & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_reserved0));
        __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hasel 
            = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
               & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hasel));
        __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_setresethaltreq 
            = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
               & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_setresethaltreq));
        __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_clrresethaltreq 
            = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
               & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_clrresethaltreq));
        vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset 
            = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
               & ((IData)(vlSelf->_cp___05Fs11748) ? 
                  (vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_data 
                   >> 1U) : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset)));
        __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0 
            = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
               & ((IData)(vlSelf->_cp___05Fs11748) ? 
                  (vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_data 
                   >> 0x1fU) : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0)));
        if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive)))) {
            vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartsello = 0U;
            vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartselhi = 0U;
            vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_reserved1 = 0U;
        }
        if (vlSelf->_cp___05Fs11748) {
            vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive 
                = (1U & vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_data);
        }
    }
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TestHarness__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->_cp___05Fs12582));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__dut_reset_reg__DOT__reg_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->_rs___05Fs3698));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin 
        = __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx_widx_bin 
        = __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx_widx_bin;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_resumereq 
        = __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_resumereq;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartreset 
        = __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartreset;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ackhavereset 
        = __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ackhavereset;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_reserved0 
        = __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_reserved0;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hasel 
        = __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hasel;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_setresethaltreq 
        = __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_setresethaltreq;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_clrresethaltreq 
        = __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_clrresethaltreq;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0 
        = __Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0;
    vlSelf->_rs___05Fs3843 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_gray;
    vlSelf->_rs___05Fs3702 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__hrmaskReg_0;
    vlSelf->_rs___05Fs3841 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_ridx_bin;
    vlSelf->_rs___05Fs3706 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlAckHaveResetReg;
    vlSelf->_rs___05Fs3705 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlResumeReqReg;
    vlSelf->_rs___05Fs3704 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlValidReg;
    vlSelf->_rs___05Fs3868 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin;
    vlSelf->_rs___05Fs3870 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_gray;
    vlSelf->_rs___05Fs3869 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ready_reg;
    vlSelf->_rs___05Fs3822 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx_widx_bin;
    vlSelf->_rs___05Fs3824 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx_gray;
    vlSelf->_rs___05Fs3823 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__ready_reg;
    vlSelf->_rs___05Fs3847 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs3799 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs3825 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->_mc___05Fs3603 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)));
    vlSelf->_rs___05Fs3859 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT___io_enq_ready_output 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ready_reg) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_mc___05Fs3601 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)));
    vlSelf->_rs___05Fs3811 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___io_enq_ready_output 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__ready_reg) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_cp___05Fs12585 = vlSelf->TestHarness__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT__sync_0;
    vlSelf->TestHarness__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TestHarness__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs3842 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__valid_reg;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_mc___05Fs3602 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)));
    vlSelf->_rs___05Fs3838 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->_cp___05Fs12423 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                               & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__valid_reg));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs3844 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_0;
    vlSelf->_rs___05Fs4112 = vlSelf->TestHarness__DOT__dut_reset_reg__DOT__reg_0;
    vlSelf->_rs___05Fs3688 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_resumereq;
    vlSelf->_rs___05Fs3689 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartreset;
    vlSelf->_rs___05Fs3690 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ackhavereset;
    vlSelf->_rs___05Fs3691 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_reserved0;
    vlSelf->_rs___05Fs3692 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hasel;
    vlSelf->_rs___05Fs3694 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartselhi;
    vlSelf->_rs___05Fs3695 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_reserved1;
    vlSelf->_rs___05Fs3696 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_setresethaltreq;
    vlSelf->_rs___05Fs3697 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_clrresethaltreq;
    vlSelf->_rs___05Fs3703 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0;
    vlSelf->_cp___05Fs12587 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12590 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12592 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12594 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12596 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12598 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12600 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12602 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12604 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12607 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12609 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12611 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12613 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12615 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12617 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12619 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12621 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12623 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12626 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12628 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12630 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12632 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12634 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12636 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12638 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12641 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12643 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12645 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12647 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12649 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12652 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12654 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12656 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12658 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12660 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12663 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12665 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12667 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12669 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12671 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12674 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12676 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12678 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12680 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12682 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12685 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12687 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12689 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12691 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12693 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12695 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12698 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12701 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12703 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12705 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12707 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12709 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12712 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12714 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12716 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12718 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12720 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12722 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12724 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12727 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12729 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12731 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12733 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12735 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12737 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12739 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12742 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12744 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12746 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12748 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12751 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12753 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12755 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12757 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12760 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12762 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12764 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12766 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12768 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12770 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12772 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12776 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12778 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12780 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12782 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12784 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12789 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12791 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12793 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12795 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12797 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12799 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12806 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12811 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12814 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12816 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12818 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12820 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12823 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12825 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12832 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12837 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12840 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12842 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12845 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12847 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12851 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12853 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12856 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12858 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12860 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12862 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12864 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12866 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12868 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12870 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12873 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12875 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12877 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12879 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12881 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12883 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12885 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12887 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12889 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12892 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12894 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12896 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12898 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12900 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12902 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12904 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12907 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12909 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12911 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12913 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12915 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12918 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12920 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12922 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12924 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12926 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12929 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12931 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12933 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12935 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12937 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12940 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12942 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12944 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12946 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12948 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12951 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12953 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12955 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12957 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12959 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12961 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12964 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12967 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12969 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12971 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12973 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12975 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12978 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12980 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12982 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12984 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12986 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12988 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12990 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12993 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12995 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12997 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs12999 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13001 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13003 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13005 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13008 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13010 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13012 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13014 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13017 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13019 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13021 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13023 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13026 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13028 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13030 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13032 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13034 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13036 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13038 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13042 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13044 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13046 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13048 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13050 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13055 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13057 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13059 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13061 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13063 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13065 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13072 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13077 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13080 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13082 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13084 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13086 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13089 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13091 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13098 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13103 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13106 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13108 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13111 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13113 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13288 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13290 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13378 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13381 = vlSelf->_cp___05Fs12585;
    vlSelf->_cp___05Fs13385 = vlSelf->_cp___05Fs12585;
    vlSelf->_rs___05Fs4259 = vlSelf->_cp___05Fs12585;
    vlSelf->_rs___05Fs3848 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->_rs___05Fs4085));
    vlSelf->_rs___05Fs3800 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->_rs___05Fs4037));
    vlSelf->_rs___05Fs3826 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->_rs___05Fs4063));
    vlSelf->_rs___05Fs3860 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->_rs___05Fs3856));
    vlSelf->_rs___05Fs3812 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->_rs___05Fs3808));
    vlSelf->_rs___05Fs4260 = vlSelf->TestHarness__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->reset)));
    vlSelf->_rs___05Fs3839 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->_rs___05Fs3835));
    vlSelf->_rs___05Fs3845 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->_rs___05Fs4262));
    vlSelf->_cp___05Fs11747 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive)));
    vlSelf->_cp___05Fs11754 = vlSelf->_cp___05Fs11747;
    vlSelf->_cp___05Fs11757 = vlSelf->_cp___05Fs11747;
    vlSelf->_rs___05Fs3849 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs3801 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs3827 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs3861 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs3813 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4261 = vlSelf->TestHarness__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs3840 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs3846 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_2;
}

VL_INLINE_OPT void VTestHarness___024root___nba_sequent__TOP__21(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___nba_sequent__TOP__21\n"); );
    // Body
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__intsource__DOT__reg_0__DOT__reg_0 = 0U;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__intsource_1__DOT__reg_0__DOT__reg_0 
        = ((~ (IData)(vlSelf->_cp___05Fs10034)) & (IData)(vlSelf->_rs___05Fs3498));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__intsource__DOT__reg_0__DOT__reg_0 
        = ((IData)(vlSelf->_cp___05Fs10034) ? 0U : 
           (((vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__time_0 
              >= vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__pad) 
             << 1U) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__ipi_0)));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__intsource_1__DOT__reg_0__DOT__reg_0 
        = ((~ (IData)(vlSelf->_cp___05Fs10034)) & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__intnodeOut_0_REG_1) 
                                                   > (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__threshold_1)));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__intsource__DOT__reg_0__DOT__reg_0 
        = ((~ (IData)(vlSelf->_cp___05Fs10034)) & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__intnodeOut_0_REG) 
                                                   > (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__threshold_0)));
    vlSelf->TestHarness__DOT__ldut__DOT__ibus_intsource__DOT__reg_0__DOT__reg_0 = 0U;
    vlSelf->_rs___05Fs3556 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__intsource__DOT__reg_0__DOT__reg_0;
    vlSelf->_rs___05Fs3558 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__intsource__DOT__reg_0__DOT__reg_0;
    vlSelf->_rs___05Fs3557 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__intsource_1__DOT__reg_0__DOT__reg_0;
    vlSelf->_rs___05Fs3587 = vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__intsource__DOT__reg_0__DOT__reg_0;
    vlSelf->_rs___05Fs3632 = vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__intsource_1__DOT__reg_0__DOT__reg_0;
    vlSelf->_rs___05Fs3631 = vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__intsource__DOT__reg_0__DOT__reg_0;
    vlSelf->_rs___05Fs6 = vlSelf->TestHarness__DOT__ldut__DOT__ibus_intsource__DOT__reg_0__DOT__reg_0;
}

VL_INLINE_OPT void VTestHarness___024root___nba_sequent__TOP__22(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___nba_sequent__TOP__22\n"); );
    // Body
    vlSelf->TestHarness__DOT__clock_en = ((IData)(vlSelf->TestHarness__DOT__debug_reset) 
                                          | (IData)(vlSelf->_rs___05Fs4262));
    vlSelf->TestHarness__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->TestHarness__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT__sync_1));
    vlSelf->_rs___05Fs4265 = vlSelf->TestHarness__DOT__clock_en;
    if ((1U & (~ (IData)(vlSelf->clock)))) {
        vlSelf->TestHarness__DOT__gated_clock_debug_clock_gate__DOT__en_latched 
            = vlSelf->TestHarness__DOT__clock_en;
    }
    vlSelf->_rs___05Fs4262 = vlSelf->TestHarness__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT__sync_0;
    vlSelf->TestHarness__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->TestHarness__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT___gated_clock_debug_clock_gate_out 
        = ((IData)(vlSelf->TestHarness__DOT__gated_clock_debug_clock_gate__DOT__en_latched) 
           & (IData)(vlSelf->clock));
    vlSelf->_rs___05Fs4263 = vlSelf->TestHarness__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__debug_reset))) 
           && (IData)(vlSelf->_rs___05Fs3699));
    vlSelf->_rs___05Fs4264 = vlSelf->TestHarness__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT__sync_2;
}

VL_INLINE_OPT void VTestHarness___024root___nba_sequent__TOP__23(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___nba_sequent__TOP__23\n"); );
    // Body
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs3856 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs3835 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs3808 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs3851 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0)));
    vlSelf->_rs___05Fs3830 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0)));
    vlSelf->_rs___05Fs3803 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0)));
    vlSelf->_rs___05Fs3857 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->_rs___05Fs4074));
    vlSelf->_rs___05Fs3854 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->_rs___05Fs3850));
    vlSelf->_rs___05Fs3836 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->_rs___05Fs4044));
    vlSelf->_rs___05Fs3833 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->_rs___05Fs3829));
    vlSelf->_rs___05Fs3809 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->_rs___05Fs4026));
    vlSelf->_rs___05Fs3806 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->_rs___05Fs3802));
    vlSelf->_rs___05Fs3850 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->_rs___05Fs3829 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->_rs___05Fs3802 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->_rs___05Fs3852 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs3831 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs3804 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs3858 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs3855 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs3837 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs3834 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs3810 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs3807 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
}

VL_INLINE_OPT void VTestHarness___024root___nba_sequent__TOP__24(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___nba_sequent__TOP__24\n"); );
    // Body
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs4077 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs4074 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs4047 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs4044 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs4029 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs4026 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->_rs___05Fs4072 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0)));
    vlSelf->_rs___05Fs4042 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0)));
    vlSelf->_rs___05Fs4024 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0)));
    vlSelf->_rs___05Fs4078 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->_rs___05Fs3853));
    vlSelf->_rs___05Fs4075 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->_rs___05Fs4071));
    vlSelf->_rs___05Fs4048 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->_rs___05Fs3832));
    vlSelf->_rs___05Fs4045 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->_rs___05Fs4041));
    vlSelf->_rs___05Fs4030 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->_rs___05Fs3805));
    vlSelf->_rs___05Fs4027 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0))) 
           && (IData)(vlSelf->_rs___05Fs4023));
    vlSelf->_rs___05Fs4071 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->_rs___05Fs4041 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->_rs___05Fs4023 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->_rs___05Fs4073 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4043 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4025 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4079 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4076 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4049 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4046 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4031 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
    vlSelf->_rs___05Fs4028 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2;
}

extern const VlWide<10>/*319:0*/ VTestHarness__ConstPool__CONST_h3c9e891d_0;
extern const VlWide<10>/*319:0*/ VTestHarness__ConstPool__CONST_h2dc653e5_0;
extern const VlWide<10>/*319:0*/ VTestHarness__ConstPool__CONST_h7c08bc10_0;

VL_INLINE_OPT void VTestHarness___024root___nba_sequent__TOP__26(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___nba_sequent__TOP__26\n"); );
    // Init
    CData/*2:0*/ TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT___GEN_3;
    TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT___GEN_3 = 0;
    VlWide<3>/*75:0*/ TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_63;
    VL_ZERO_W(76, TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_63);
    CData/*0:0*/ TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_72;
    TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_72 = 0;
    CData/*0:0*/ TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT____VdfgTmp_h788cf908__0;
    TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT____VdfgTmp_h788cf908__0 = 0;
    CData/*7:0*/ TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT___GEN_0;
    TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT___GEN_0 = 0;
    CData/*6:0*/ TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT___GEN_1;
    TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT___GEN_1 = 0;
    VlWide<3>/*75:0*/ TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_63;
    VL_ZERO_W(76, TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_63);
    CData/*0:0*/ TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT____VdfgTmp_h788cf908__0;
    TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT____VdfgTmp_h788cf908__0 = 0;
    VlWide<38>/*1215:0*/ TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_40;
    VL_ZERO_W(1216, TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_40);
    CData/*0:0*/ TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0;
    TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0 = 0;
    CData/*0:0*/ TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN;
    TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN = 0;
    CData/*0:0*/ TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN_0;
    TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN_0 = 0;
    CData/*0:0*/ TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0;
    TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0 = 0;
    CData/*0:0*/ TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT____VdfgTmp_hd3fe7d91__0;
    TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT____VdfgTmp_hd3fe7d91__0 = 0;
    VlWide<38>/*1215:0*/ TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_32;
    VL_ZERO_W(1216, TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_32);
    CData/*0:0*/ TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0;
    TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0 = 0;
    CData/*0:0*/ __VdfgTmp_h1c20b598__0;
    __VdfgTmp_h1c20b598__0 = 0;
    VlWide<38>/*1215:0*/ __Vtemp_5;
    VlWide<10>/*319:0*/ __Vtemp_6;
    VlWide<38>/*1215:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<4>/*127:0*/ __Vtemp_24;
    VlWide<5>/*159:0*/ __Vtemp_36;
    VlWide<5>/*159:0*/ __Vtemp_43;
    VlWide<5>/*159:0*/ __Vtemp_50;
    VlWide<5>/*159:0*/ __Vtemp_57;
    VlWide<6>/*191:0*/ __Vtemp_68;
    VlWide<6>/*191:0*/ __Vtemp_75;
    VlWide<6>/*191:0*/ __Vtemp_82;
    VlWide<6>/*191:0*/ __Vtemp_89;
    VlWide<7>/*223:0*/ __Vtemp_100;
    VlWide<7>/*223:0*/ __Vtemp_107;
    VlWide<7>/*223:0*/ __Vtemp_114;
    VlWide<7>/*223:0*/ __Vtemp_121;
    VlWide<8>/*255:0*/ __Vtemp_132;
    VlWide<8>/*255:0*/ __Vtemp_139;
    VlWide<8>/*255:0*/ __Vtemp_146;
    VlWide<8>/*255:0*/ __Vtemp_153;
    VlWide<10>/*319:0*/ __Vtemp_157;
    VlWide<38>/*1215:0*/ __Vtemp_158;
    VlWide<10>/*319:0*/ __Vtemp_159;
    VlWide<10>/*319:0*/ __Vtemp_160;
    VlWide<38>/*1215:0*/ __Vtemp_161;
    VlWide<38>/*1215:0*/ __Vtemp_162;
    VlWide<10>/*319:0*/ __Vtemp_163;
    VlWide<3>/*95:0*/ __Vtemp_165;
    VlWide<3>/*95:0*/ __Vtemp_168;
    VlWide<3>/*95:0*/ __Vtemp_171;
    VlWide<3>/*95:0*/ __Vtemp_174;
    VlWide<3>/*95:0*/ __Vtemp_177;
    VlWide<3>/*95:0*/ __Vtemp_180;
    VlWide<3>/*95:0*/ __Vtemp_183;
    VlWide<10>/*319:0*/ __Vtemp_185;
    VlWide<10>/*319:0*/ __Vtemp_187;
    VlWide<10>/*319:0*/ __Vtemp_189;
    VlWide<5>/*159:0*/ __Vtemp_193;
    VlWide<5>/*159:0*/ __Vtemp_196;
    VlWide<5>/*159:0*/ __Vtemp_199;
    VlWide<5>/*159:0*/ __Vtemp_202;
    VlWide<3>/*95:0*/ __Vtemp_205;
    VlWide<3>/*95:0*/ __Vtemp_207;
    // Body
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hasel 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hasel;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hamask_0 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hamask_0;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_source 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_source;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_corrupt 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_corrupt;
    vlSelf->_rs___05Fs3498 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__wfiNodeOut_0_REG;
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__time_0 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__time_0;
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__pad 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__pad;
    vlSelf->_rs___05Fs3865 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hasel;
    vlSelf->_rs___05Fs3866 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hamask_0;
    if (vlSelf->_cp___05Fs12583) {
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hartsel 
            = vlSelf->_rs___05Fs3693;
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_resumereq 
            = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT___io_innerCtrl_bits_resumereq_output;
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_ackhavereset 
            = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT___io_innerCtrl_bits_ackhavereset_output;
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hrmask_0 
            = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__hrmaskNxt_0;
    }
    vlSelf->_rs___05Fs3817 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_source;
    vlSelf->_rs___05Fs3821 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_corrupt;
    if (vlSelf->_cp___05Fs12500) {
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_param = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_size = 2U;
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_mask = 0xfU;
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_data 
            = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_data;
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_address 
            = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_address;
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_opcode 
            = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode;
    }
    vlSelf->_rs___05Fs3584 = vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__time_0;
    vlSelf->_rs___05Fs3585 = vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__pad;
    if (vlSelf->_cp___05Fs10034) {
        vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__ipi_0 = 0U;
    } else if (vlSelf->_cp___05Fs10876) {
        vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__ipi_0 
            = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                     >> 0x13U));
    }
    if (vlSelf->_cp___05Fs11180) {
        vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__threshold_1 
            = (3U & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[0U] 
                     >> 0x18U));
    }
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__intnodeOut_0_REG_1 
        = ((IData)(vlSelf->_mc___05Fs3455) ? ((IData)(vlSelf->_mc___05Fs3454)
                                               ? 0U
                                               : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__priority_0))
            : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__priority_1));
    if (vlSelf->_cp___05Fs11183) {
        vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__threshold_0 
            = (3U & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[0U] 
                     >> 0x18U));
    }
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__intnodeOut_0_REG 
        = ((IData)(vlSelf->_mc___05Fs3453) ? ((IData)(vlSelf->_mc___05Fs3452)
                                               ? 0U
                                               : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__priority_0))
            : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__priority_1));
    if (vlSelf->_cp___05Fs11479) {
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_data 
            = vlSelf->TestHarness__DOT__SimDTM__DOT__debug_req_bits_data_reg;
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode = 0U;
    } else {
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_data = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode 
            = ((IData)(vlSelf->_cp___05Fs11480) << 2U);
    }
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_address 
        = ((IData)(vlSelf->__VdfgTmp_h883e40ce__0) ? 
           ((IData)(vlSelf->TestHarness__DOT__SimDTM__DOT__debug_req_bits_addr_reg) 
            << 2U) : 0x48U);
    vlSelf->_rs___05Fs3863 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hartsel;
    vlSelf->_rs___05Fs3862 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_resumereq;
    vlSelf->_rs___05Fs3864 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_ackhavereset;
    vlSelf->_rs___05Fs3867 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hrmask_0;
    vlSelf->_rs___05Fs3815 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_param;
    vlSelf->_rs___05Fs3816 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_size;
    vlSelf->_rs___05Fs3819 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_mask;
    vlSelf->_rs___05Fs3820 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_data;
    vlSelf->_rs___05Fs3818 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_address;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_21 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__address) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_address));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_23 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__address) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_address));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_19 
        = (0U == ((((vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__address[0U] 
                     ^ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_address)) 
                    | vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__address[1U]) 
                   | vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__address[2U]) 
                  | vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__address[3U]));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_23 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__address) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_address));
    vlSelf->_rs___05Fs3814 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_opcode;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_19 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__opcode));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___GEN_13 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__opcode));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_21 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__opcode));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_17 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__opcode));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_21 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__opcode));
    vlSelf->_cp___05Fs11211 = (6U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode));
    vlSelf->_cp___05Fs11262 = (0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode));
    vlSelf->_cp___05Fs11273 = (1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode));
    vlSelf->_cp___05Fs11284 = (2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode));
    vlSelf->_cp___05Fs11295 = (3U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode));
    vlSelf->_cp___05Fs11306 = (5U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode));
    if ((0x17U >= (0x1fU & ((IData)(3U) * (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode))))) {
        vlSelf->__VdfgTmp_h9fe9cfab__0 = (7U & (0x951240U 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode)))));
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_bits_opcode 
            = (7U & (0x911240U >> (0x1fU & ((IData)(3U) 
                                            * (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode)))));
    } else {
        vlSelf->__VdfgTmp_h9fe9cfab__0 = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_bits_opcode = 0U;
    }
    vlSelf->_mc___05Fs3497 = (4U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode));
    vlSelf->_rs___05Fs3586 = vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__ipi_0;
    vlSelf->_rs___05Fs3619 = vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__threshold_1;
    vlSelf->_rs___05Fs3627 = vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__intnodeOut_0_REG_1;
    vlSelf->_rs___05Fs3618 = vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__threshold_0;
    vlSelf->_rs___05Fs3626 = vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__intnodeOut_0_REG;
    if (vlSelf->_cp___05Fs11179) {
        vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__priority_1 
            = (3U & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[0U] 
                     >> 0x18U));
    }
    if (vlSelf->_cp___05Fs11187) {
        vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__priority_0 
            = (3U & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[1U] 
                     >> 0x18U));
    }
    vlSelf->_cp___05Fs11407 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_21)));
    vlSelf->_cp___05Fs11960 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_23)));
    vlSelf->_cp___05Fs12233 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_19)));
    vlSelf->_cp___05Fs12511 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_23)));
    vlSelf->_cp___05Fs11399 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_19)));
    vlSelf->_cp___05Fs11674 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___GEN_13)));
    vlSelf->_cp___05Fs11952 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_21)));
    vlSelf->_cp___05Fs12225 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_17)));
    vlSelf->_cp___05Fs12503 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_21)));
    vlSelf->_cp___05Fs11486 = vlSelf->_cp___05Fs11211;
    vlSelf->_cp___05Fs11764 = vlSelf->_cp___05Fs11211;
    vlSelf->_cp___05Fs12037 = vlSelf->_cp___05Fs11211;
    vlSelf->_cp___05Fs12315 = vlSelf->_cp___05Fs11211;
    vlSelf->_cp___05Fs11537 = vlSelf->_cp___05Fs11262;
    vlSelf->_cp___05Fs11815 = vlSelf->_cp___05Fs11262;
    vlSelf->_cp___05Fs12088 = vlSelf->_cp___05Fs11262;
    vlSelf->_cp___05Fs12366 = vlSelf->_cp___05Fs11262;
    vlSelf->_cp___05Fs11548 = vlSelf->_cp___05Fs11273;
    vlSelf->_cp___05Fs11826 = vlSelf->_cp___05Fs11273;
    vlSelf->_cp___05Fs12099 = vlSelf->_cp___05Fs11273;
    vlSelf->_cp___05Fs12377 = vlSelf->_cp___05Fs11273;
    vlSelf->_cp___05Fs11559 = vlSelf->_cp___05Fs11284;
    vlSelf->_cp___05Fs11837 = vlSelf->_cp___05Fs11284;
    vlSelf->_cp___05Fs12110 = vlSelf->_cp___05Fs11284;
    vlSelf->_cp___05Fs12388 = vlSelf->_cp___05Fs11284;
    vlSelf->_cp___05Fs11570 = vlSelf->_cp___05Fs11295;
    vlSelf->_cp___05Fs11848 = vlSelf->_cp___05Fs11295;
    vlSelf->_cp___05Fs12121 = vlSelf->_cp___05Fs11295;
    vlSelf->_cp___05Fs12399 = vlSelf->_cp___05Fs11295;
    vlSelf->_cp___05Fs11581 = vlSelf->_cp___05Fs11306;
    vlSelf->_cp___05Fs11859 = vlSelf->_cp___05Fs11306;
    vlSelf->_cp___05Fs12132 = vlSelf->_cp___05Fs11306;
    vlSelf->_cp___05Fs12410 = vlSelf->_cp___05Fs11306;
    vlSelf->_mc___05Fs3513 = vlSelf->_mc___05Fs3497;
    vlSelf->_mc___05Fs3517 = vlSelf->_mc___05Fs3497;
    vlSelf->_mc___05Fs3520 = vlSelf->_mc___05Fs3497;
    vlSelf->_mc___05Fs3534 = vlSelf->_mc___05Fs3497;
    vlSelf->_mc___05Fs3538 = vlSelf->_mc___05Fs3497;
    vlSelf->_cp___05Fs11247 = vlSelf->_mc___05Fs3497;
    vlSelf->_cp___05Fs11522 = vlSelf->_mc___05Fs3497;
    vlSelf->_cp___05Fs11638 = (1U & (~ (IData)(vlSelf->_mc___05Fs3497)));
    vlSelf->_cp___05Fs11647 = vlSelf->_mc___05Fs3497;
    vlSelf->_cp___05Fs11800 = vlSelf->_mc___05Fs3497;
    vlSelf->_cp___05Fs12073 = vlSelf->_mc___05Fs3497;
    vlSelf->_cp___05Fs12351 = vlSelf->_mc___05Fs3497;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___GEN_18 
        = ((IData)(vlSelf->_mc___05Fs3497) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__opcode_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___GEN_26 
        = (((IData)(vlSelf->_mc___05Fs3497) == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_opcodes) 
                                                         >> 1U)))))
                                                 ? 
                                                (7U 
                                                 & (0x911240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_opcodes) 
                                                            >> 1U))))))
                                                 : 0U)) 
           | ((IData)(vlSelf->_mc___05Fs3497) == ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_opcodes) 
                                                           >> 1U)))))
                                                   ? 
                                                  (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_opcodes) 
                                                              >> 1U))))))
                                                   : 0U)));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___GEN_25 
        = (((IData)(vlSelf->_mc___05Fs3497) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_bits_opcode)) 
           | ((IData)(vlSelf->_mc___05Fs3497) == (IData)(vlSelf->__VdfgTmp_h9fe9cfab__0)));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_42 
        = (((7U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                           >> 0x28U))) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_bits_opcode)) 
           | ((7U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                             >> 0x28U))) == (IData)(vlSelf->__VdfgTmp_h9fe9cfab__0)));
    vlSelf->_mc___05Fs3575 = (1U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_bits_opcode));
    vlSelf->_cp___05Fs11687 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___GEN_18)));
    vlSelf->_cp___05Fs11716 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___GEN_26)));
    vlSelf->_cp___05Fs11712 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___GEN_25)));
    vlSelf->_cp___05Fs12541 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_42)));
    vlSelf->_mc___05Fs3581 = vlSelf->_mc___05Fs3575;
    vlSelf->_rs___05Fs3617 = vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__priority_1;
    vlSelf->_rs___05Fs3616 = vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__priority_0;
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__fanin__DOT__effectivePriority_1 
        = ((4U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT____Vcellinp__fanin__io_ip) 
                  << 2U)) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__priority_0));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__fanin_1__DOT__effectivePriority_1 
        = ((4U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT____Vcellinp__fanin_1__io_ip) 
                  << 2U)) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__priority_0));
    if (vlSelf->_cp___05Fs11084) {
        vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[0U] 
            = (((IData)((((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                          << 0x2dU) | (((QData)((IData)(
                                                        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                        << 0xdU) | 
                                       ((QData)((IData)(
                                                        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                        >> 0x13U)))) 
                << 0x18U) | ((0xfffffeU & (vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_address 
                                           >> 2U)) 
                             | (IData)(vlSelf->_mc___05Fs3480)));
        vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[1U] 
            = (((IData)((((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                          << 0x2dU) | (((QData)((IData)(
                                                        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                        << 0xdU) | 
                                       ((QData)((IData)(
                                                        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                        >> 0x13U)))) 
                >> 8U) | ((IData)(((((QData)((IData)(
                                                     vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                                     << 0x2dU) | (((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                                   << 0xdU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                                     >> 0x13U))) 
                                   >> 0x20U)) << 0x18U));
        vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[2U] 
            = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_mask) 
                << 0x18U) | ((IData)(((((QData)((IData)(
                                                        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                         << 0xdU) | 
                                        ((QData)((IData)(
                                                         vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                         >> 0x13U))) 
                                      >> 0x20U)) >> 8U));
        vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
            = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_size) 
                << 9U) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_source));
    }
    vlSelf->_mc___05Fs3452 = (5U > (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__fanin__DOT__effectivePriority_1));
    vlSelf->_mc___05Fs3454 = (5U > (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__fanin_1__DOT__effectivePriority_1));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
        = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory
        [vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1][0U];
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
        = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory
        [vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1][1U];
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
        = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory
        [vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1][2U];
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
        = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory
        [vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1][3U];
    vlSelf->_mc___05Fs3453 = (((IData)(vlSelf->_mc___05Fs3452)
                                ? 4U : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__fanin__DOT__effectivePriority_1)) 
                              >= ((4U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT____Vcellinp__fanin__io_ip) 
                                         << 1U)) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__priority_1)));
    vlSelf->_mc___05Fs3455 = (((IData)(vlSelf->_mc___05Fs3454)
                                ? 4U : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__fanin_1__DOT__effectivePriority_1)) 
                              >= ((4U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT____Vcellinp__fanin_1__io_ip) 
                                         << 1U)) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__priority_1)));
    vlSelf->_mc___05Fs3469 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[2U] 
                                    >> 0x19U));
    vlSelf->_mc___05Fs3470 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[2U] 
                                    >> 0x1aU));
    vlSelf->_mc___05Fs3471 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[2U] 
                                    >> 0x1bU));
    vlSelf->_cp___05Fs11153 = (0U != (3U & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                            >> 9U)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_46 
        = ((0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                     >> 4U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source_1));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_75 
        = (0x7ffffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_1 
                       >> (0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                    >> 4U))));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_36 
        = ((3U & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                  >> 9U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__size_1));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_37 
        = ((0x1ffU & vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U]) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__source_1));
    VL_SHIFTR_WWI(1216,1216,11, __Vtemp_5, vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__inflight_sizes, 
                  (0x7fcU & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                             << 2U)));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_58 
        = ((3U & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                  >> 9U)) == (7U & (__Vtemp_5[0U] >> 1U)));
    VL_SHIFTR_WWI(304,304,9, __Vtemp_6, vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__inflight_1, 
                  (0x1ffU & vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U]));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_67[0U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[0U] 
           & __Vtemp_6[0U]);
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_67[1U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[1U] 
           & __Vtemp_6[1U]);
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_67[2U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[2U] 
           & __Vtemp_6[2U]);
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_67[3U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[3U] 
           & __Vtemp_6[3U]);
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_67[4U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[4U] 
           & __Vtemp_6[4U]);
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_67[5U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[5U] 
           & __Vtemp_6[5U]);
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_67[6U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[6U] 
           & __Vtemp_6[6U]);
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_67[7U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[7U] 
           & __Vtemp_6[7U]);
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_67[8U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[8U] 
           & __Vtemp_6[8U]);
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_67[9U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[9U] 
           & __Vtemp_6[9U]);
    VL_SHIFTR_WWI(1216,1216,11, __Vtemp_7, vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__inflight_sizes_1, 
                  (0x7fcU & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                             << 2U)));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_68 
        = ((3U & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                  >> 9U)) == (7U & (__Vtemp_7[0U] >> 1U)));
    vlSelf->_cp___05Fs11014 = (1U & (~ (IData)((3U 
                                                == 
                                                (3U 
                                                 & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                                    >> 9U))))));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_9, vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, 
                  (0x7cU & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                            >> 2U)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_49[0U] 
        = __Vtemp_9[0U];
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_49[1U] 
        = __Vtemp_9[1U];
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_49[2U] 
        = (0xfffU & __Vtemp_9[2U]);
    VL_SHIFTR_WWI(1216,1216,11, vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_40, vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__inflight_opcodes, 
                  (0x7fcU & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                             << 2U)));
    vlSelf->_cp___05Fs11012 = (0x130U <= (0x1ffU & 
                                          vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U]));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source_ok_1 
        = ((0U == (3U & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                         >> 7U))) | ((1U == (3U & (
                                                   vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                                   >> 7U))) 
                                     | ((0x10U == (0x1fU 
                                                   & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                                      >> 4U))) 
                                        | ((0x11U == 
                                            (0x1fU 
                                             & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                                >> 4U))) 
                                           | (0x12U 
                                              == (0x1fU 
                                                  & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                                     >> 4U)))))));
    vlSelf->_mc___05Fs3468 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[2U] 
                                    >> 0x18U));
    vlSelf->_mc___05Fs3473 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[2U] 
                                    >> 0x1dU));
    vlSelf->_mc___05Fs3474 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[2U] 
                                    >> 0x1eU));
    vlSelf->_mc___05Fs3475 = (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[2U] 
                              >> 0x1fU);
    vlSelf->_mc___05Fs3472 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[2U] 
                                    >> 0x1cU));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN_10 
        = (0U == ((0x3c000U & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[0U] 
                               >> 6U)) | ((0x3f80U 
                                           & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[0U] 
                                              >> 5U)) 
                                          | ((0x78U 
                                              & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[0U] 
                                                 >> 3U)) 
                                             | (7U 
                                                & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[0U] 
                                                   >> 2U))))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___GEN_0 
        = (((0x38U & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                      << 3U)) | (7U & (~ ((IData)(7U) 
                                          << (3U & 
                                              (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                               >> 9U)))))) 
           & (0x20U | ((0x1cU & ((~ vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U]) 
                                 << 2U)) | (3U & (((IData)(7U) 
                                                   << 
                                                   (3U 
                                                    & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                                       >> 9U))) 
                                                  >> 1U)))));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_oindex 
        = ((0x10U & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[0U] 
                     >> 0xfU)) | ((0xcU & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[0U] 
                                           >> 8U)) 
                                  | ((2U & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[0U] 
                                            >> 4U)) 
                                     | (1U & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[0U] 
                                              >> 1U)))));
    vlSelf->_mc___05Fs3443 = (1U & vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[0U]);
    vlSelf->_cp___05Fs5174 = (7U == (7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 6U)));
    vlSelf->_mc___05Fs3460 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xbU)));
    vlSelf->_mc___05Fs3461 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xcU)));
    vlSelf->_mc___05Fs3462 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xdU)));
    vlSelf->_mc___05Fs3463 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xeU)));
    vlSelf->_mc___05Fs3464 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xfU)));
    vlSelf->_mc___05Fs3465 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0x10U)));
    vlSelf->_mc___05Fs3466 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0x11U)));
    vlSelf->_mc___05Fs3467 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0x12U)));
    vlSelf->_cp___05Fs4845 = (1U & (~ ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                       | (0xffU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full)
                                             ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                             : ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                 << 0x15U) 
                                                | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                   >> 0xbU))))))));
    vlSelf->_cp___05Fs5128 = (1U & (~ ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                       | (0xffU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
                                             ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                             : ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                 << 0x15U) 
                                                | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                   >> 0xbU))))))));
    vlSelf->_cp___05Fs5406 = (1U & (~ ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                       | (0xffU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full)
                                             ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                             : ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                 << 0x15U) 
                                                | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                   >> 0xbU))))))));
    vlSelf->_cp___05Fs5684 = (1U & (~ ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                       | (0xffU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                                             ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                             : ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                 << 0x15U) 
                                                | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                   >> 0xbU))))))));
    vlSelf->_cp___05Fs13289 = (0U != (0x3ffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                >> 0x13U)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_15 
        = ((7U != (7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                         >> 6U))) & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 0x1fU));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_48 
        = ((7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__opcode));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_49 
        = ((7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 3U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__param));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_50 
        = ((0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                    >> 6U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__size));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_51 
        = ((0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xaU)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__source));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_52 
        = (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__address 
           == (0xfffffffU & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                              << 0x11U) | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xfU))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_68 
        = (0x7ffffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight 
                       >> (0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0xaU))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_48 
        = ((7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__opcode));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_49 
        = ((7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 3U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__param));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_50 
        = ((0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                    >> 6U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__size));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_51 
        = ((0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xaU)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__source));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_52 
        = (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__address 
           == (0xfffffffU & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                              << 0x11U) | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xfU))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_68 
        = (0x7ffffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight 
                       >> (0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0xaU))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_41 
        = ((7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__opcode));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_42 
        = ((7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 3U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__param));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_43 
        = ((0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                    >> 6U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__size));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_44 
        = ((0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xaU)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__source));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_45 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__address) 
           == (0x3fffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                          >> 0xfU)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_62 
        = (0x7ffffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight 
                       >> (0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0xaU))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_72 
        = ((0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                    >> 6U)) == (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                        >> 5U)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_37 
        = ((7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__opcode));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_38 
        = ((7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 3U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__param));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_39 
        = ((7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 6U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__size));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_40 
        = ((0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xaU)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__source));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_41 
        = (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__address 
           == (0x3ffffffU & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                              << 0x11U) | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xfU))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_54 
        = (0x7ffffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight 
                       >> (0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0xaU))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_36 
        = ((7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__opcode));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_37 
        = ((7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 3U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__param));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_38 
        = ((7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 6U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__size));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_39 
        = ((0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xaU)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_40 
        = (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__address 
           == (0xfffffffU & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                              << 0x11U) | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xfU))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_54 
        = (0x7ffffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight 
                       >> (0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0xaU))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_36 
        = ((7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__opcode));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_37 
        = ((7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 3U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__param));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_38 
        = ((7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 6U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__size));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_39 
        = ((0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xaU)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__source));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_40 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__address) 
           == (0xfffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                         >> 0xfU)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_53 
        = (0x7ffffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight 
                       >> (0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0xaU))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_27 
        = ((7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__opcode));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_28 
        = ((7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 3U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__param));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_29 
        = ((7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 6U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__size));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_30 
        = ((0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xaU)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__source));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_31 
        = (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__address 
           == (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
               >> 0xfU));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_44 
        = (0x7ffffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight 
                       >> (0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0xaU))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_11 
        = (IData)(((0x4180U == (0x7dc0U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                   & (0x200U == (0x3ffU & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                            << 1U) 
                                           | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0x1fU))))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_10 
        = (IData)(((0x4180U == (0x7dc0U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                   & (0x600U == (0x600U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U]))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_10 
        = (IData)((0x4180U == (0x7dc0U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_10 
        = (IData)((0x80004180U == (0x80007dc0U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_16 
        = ((7U != (7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                         >> 6U))) & (0x200U == (0x3ffU 
                                                & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                    << 1U) 
                                                   | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x1fU)))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_15 
        = (IData)(((0x600U == (0x600U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                   & (7U != (7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                   >> 6U)))));
    vlSelf->_cp___05Fs2917 = (2U >= (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U)));
    vlSelf->_cp___05Fs2909 = (6U == (7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs2926 = (7U == (7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs2945 = (4U == (7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs2960 = (0U == (7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs2971 = (1U == (7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs2982 = (2U == (7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs2990 = (5U <= (7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 3U)));
    vlSelf->_cp___05Fs2993 = (3U == (7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs3001 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 5U));
    vlSelf->_cp___05Fs3004 = (5U == (7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs3012 = (2U <= (7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 3U)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_59 
        = ((0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xaU)) == (0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                            >> 4U)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_67 
        = ((0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xaU)) == (0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U)));
    vlSelf->_cp___05Fs4581 = (2U >= (7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 6U)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_11 
        = (IData)(((0x18000000U == (0x18000000U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                   & (0xdU > (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                      >> 6U)))));
    vlSelf->_mc___05Fs3417 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xcU)));
    vlSelf->_mc___05Fs3418 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xdU)));
    vlSelf->_mc___05Fs3419 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xeU)));
    vlSelf->_mc___05Fs3420 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xfU)));
    vlSelf->_mc___05Fs3421 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0x10U)));
    vlSelf->_mc___05Fs3422 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0x11U)));
    vlSelf->_mc___05Fs3423 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0x12U)));
    vlSelf->_mc___05Fs3416 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xbU)));
    vlSelf->_mc___05Fs327 = (1U & (~ (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                      >> 2U)));
    vlSelf->_cp___05Fs2921 = (3U <= (7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 3U)));
    vlSelf->_cp___05Fs2923 = (0xffU != (0xffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                 >> 0xbU)));
    vlSelf->_mc___05Fs3649 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xdU)));
    vlSelf->_mc___05Fs3650 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xeU)));
    vlSelf->_mc___05Fs3653 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0x11U)));
    vlSelf->_mc___05Fs3654 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0x12U)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT____VdfgTmp_h4ea4ca6f__0 
        = ((0U == ((0xc00U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                              << 1U)) | (0x3ffU & (0x200U 
                                                   ^ 
                                                   ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                     << 1U) 
                                                    | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x1fU)))))) 
           | (3U == (3U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                           >> 9U))));
    if ((0x17U >= (0x1fU & ((IData)(3U) * (7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))) {
        vlSelf->__VdfgTmp_h5b5ca2ab__0 = (7U & (0x911240U 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
        vlSelf->__VdfgTmp_hac78d6ab__0 = (7U & (0x951240U 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
    } else {
        vlSelf->__VdfgTmp_h5b5ca2ab__0 = 0U;
        vlSelf->__VdfgTmp_hac78d6ab__0 = 0U;
    }
    vlSelf->_mc___05Fs3647 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xbU)));
    vlSelf->_mc___05Fs3648 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xcU)));
    vlSelf->_mc___05Fs3651 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xfU)));
    vlSelf->_mc___05Fs3652 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full) 
                                    | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0x10U)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_7 
        = (0xfffU & ((~ ((IData)(0xfffU) << (0xfU & 
                                             (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U)))) 
                     & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                         << 0x11U) | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                      >> 0xfU))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_12 
        = (0U == ((0xfffcU & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                               << 5U) | (0x1cU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x1bU)))) 
                  | (3U & (~ ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                               << 5U) | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0x1bU))))));
    vlSelf->_cp___05Fs2955 = (0U != (7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 3U)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_7 
        = (0x3fU & ((~ ((IData)(0x3fU) << (7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 6U)))) 
                    & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                        << 0x11U) | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 0xfU))));
    vlSelf->_cp___05Fs2925 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                    >> 0x13U));
    if (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full) {
        vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_mask = 0xffU;
        vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_param 
            = (7U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_param));
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode 
            = (7U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_opcode));
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source 
            = (0x1fU & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_source));
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
            = (0x1ffffU & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_address);
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_size 
            = (7U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_size));
        vlSelf->_cp___05Fs13411 = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt;
    } else {
        vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_mask 
            = (0xffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                        >> 0xbU));
        vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_param 
            = (7U & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                      << 0x1dU) | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                   >> 3U)));
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode 
            = (7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]);
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source 
            = (0x1fU & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                         << 0x16U) | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                      >> 0xaU)));
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
            = (0x1ffffU & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            << 0x11U) | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xfU)));
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_size 
            = (7U & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                      << 0x1aU) | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                   >> 6U)));
        vlSelf->_cp___05Fs13411 = vlSelf->_cp___05Fs2925;
    }
    if (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full) {
        vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_mask = 0xffU;
        vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_param 
            = (7U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_param));
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source 
            = (0x1fU & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_source));
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
            = (0xfffU & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_address));
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode 
            = (7U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_opcode));
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_size 
            = (7U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_size));
        vlSelf->_cp___05Fs12871 = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt;
    } else {
        vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_mask 
            = (0xffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                        >> 0xbU));
        vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_param 
            = (7U & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                      << 0x1dU) | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                   >> 3U)));
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source 
            = (0x1fU & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                         << 0x16U) | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                      >> 0xaU)));
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
            = (0xfffU & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                          << 0x11U) | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 0xfU)));
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode 
            = (7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]);
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_size 
            = (7U & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                      << 0x1aU) | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                   >> 6U)));
        vlSelf->_cp___05Fs12871 = vlSelf->_cp___05Fs2925;
    }
    if (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full) {
        vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_mask = 0xffU;
        vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_param 
            = (7U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_param));
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode 
            = (7U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_opcode));
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
            = (0xfffffffU & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_address);
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_size 
            = (7U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_size));
        vlSelf->_cp___05Fs10915 = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt;
    } else {
        vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_mask 
            = (0xffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                        >> 0xbU));
        vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_param 
            = (7U & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                      << 0x1dU) | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                   >> 3U)));
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode 
            = (7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]);
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
            = (0xfffffffU & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                              << 0x11U) | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xfU)));
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_size 
            = (7U & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                      << 0x1aU) | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                   >> 6U)));
        vlSelf->_cp___05Fs10915 = vlSelf->_cp___05Fs2925;
    }
    if (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full) {
        vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_mask = 0xffU;
        vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_param 
            = (7U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_param));
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source 
            = (0x1fU & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_source));
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
            = (0x3ffffffU & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_address);
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode 
            = (7U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_opcode));
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_size 
            = (7U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_size));
        vlSelf->_cp___05Fs10628 = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt;
    } else {
        vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_mask 
            = (0xffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                        >> 0xbU));
        vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_param 
            = (7U & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                      << 0x1dU) | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                   >> 3U)));
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source 
            = (0x1fU & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                         << 0x16U) | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                      >> 0xaU)));
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
            = (0x3ffffffU & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                              << 0x11U) | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xfU)));
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode 
            = (7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]);
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_size 
            = (7U & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                      << 0x1aU) | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                   >> 6U)));
        vlSelf->_cp___05Fs10628 = vlSelf->_cp___05Fs2925;
    }
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__source_ok 
        = ((0U == (3U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                         >> 0xdU))) | ((1U == (3U & 
                                               (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xdU))) 
                                       | ((0x10U == 
                                           (0x1fU & 
                                            (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xaU))) 
                                          | ((0x11U 
                                              == (0x1fU 
                                                  & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xaU))) 
                                             | (0x12U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0xaU)))))));
    vlSelf->__VdfgTmp_h20313e8a__0 = (IData)((0x80U 
                                              == (0x200c0U 
                                                  & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->__VdfgTmp_h4e0b4325__0 = (IData)((0x20080U 
                                              == (0x200c0U 
                                                  & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (0x30000U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_3 
        = (IData)((0x10000U == (0x30000U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_4 
        = (IData)((0x20000U == (0x30000U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_5 
        = (IData)((0x30000U == (0x30000U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->_mc___05Fs343 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                   >> 0xaU));
    vlSelf->_cp___05Fs5058 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_46)));
    vlSelf->_cp___05Fs5102 = (1U & (~ vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_75));
    vlSelf->_cp___05Fs11104 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_36)));
    vlSelf->_cp___05Fs11106 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_37)));
    vlSelf->_cp___05Fs11131 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_58)));
    vlSelf->_cp___05Fs11150 = (1U & (~ vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_67[0U]));
    vlSelf->_cp___05Fs11155 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_68)));
    vlSelf->_cp___05Fs11027 = vlSelf->_cp___05Fs11014;
    vlSelf->_cp___05Fs11042 = vlSelf->_cp___05Fs11014;
    vlSelf->_cp___05Fs11023 = vlSelf->_cp___05Fs11012;
    vlSelf->_cp___05Fs11038 = vlSelf->_cp___05Fs11012;
    vlSelf->_cp___05Fs11053 = vlSelf->_cp___05Fs11012;
    vlSelf->_cp___05Fs11062 = vlSelf->_cp___05Fs11012;
    vlSelf->_cp___05Fs11071 = vlSelf->_cp___05Fs11012;
    vlSelf->_cp___05Fs4964 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source_ok_1)));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN_11 
        = (((- (IData)((IData)(vlSelf->_mc___05Fs3475))) 
            << 0x18U) | ((0xff0000U & ((- (IData)((IData)(vlSelf->_mc___05Fs3474))) 
                                       << 0x10U)) | 
                         ((0xff00U & ((- (IData)((IData)(vlSelf->_mc___05Fs3473))) 
                                      << 8U)) | (0xffU 
                                                 & (- (IData)((IData)(vlSelf->_mc___05Fs3472)))))));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT____VdfgTmp_he21ecb82__0 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN_10) 
           & (IData)(vlSelf->_mc___05Fs3468));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___GEN_1 
        = (7U & ((3U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___GEN_0) 
                        >> 4U)) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___GEN_0)));
    vlSelf->_cp___05Fs11190 = (4U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_oindex));
    vlSelf->_cp___05Fs11189 = (1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_oindex));
    vlSelf->_cp___05Fs11191 = (8U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_oindex));
    vlSelf->_cp___05Fs11192 = (0xaU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_oindex));
    vlSelf->_cp___05Fs11188 = (0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_oindex));
    vlSelf->_cp___05Fs11194 = (0x14U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_oindex));
    vlSelf->_cp___05Fs11193 = (0x10U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_oindex));
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
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_44 
        = ((IData)(vlSelf->_mc___05Fs3443) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__opcode_1));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_65 
        = (((IData)(vlSelf->_mc___05Fs3443) == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_49[0U] 
                                                         >> 1U)))))
                                                 ? 
                                                (7U 
                                                 & (0x911240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * 
                                                        (7U 
                                                         & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_49[0U] 
                                                            >> 1U))))))
                                                 : 0U)) 
           | ((IData)(vlSelf->_mc___05Fs3443) == ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_49[0U] 
                                                           >> 1U)))))
                                                   ? 
                                                  (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_49[0U] 
                                                              >> 1U))))))
                                                   : 0U)));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_35 
        = ((IData)(vlSelf->_mc___05Fs3443) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__opcode_1));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_56 
        = (((IData)(vlSelf->_mc___05Fs3443) == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_40[0U] 
                                                         >> 1U)))))
                                                 ? 
                                                (7U 
                                                 & (0x911240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * 
                                                        (7U 
                                                         & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_40[0U] 
                                                            >> 1U))))))
                                                 : 0U)) 
           | ((IData)(vlSelf->_mc___05Fs3443) == ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_40[0U] 
                                                           >> 1U)))))
                                                   ? 
                                                  (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_40[0U] 
                                                              >> 1U))))))
                                                   : 0U)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__drop 
        = ((~ (IData)(vlSelf->_mc___05Fs3443)) & (0U 
                                                  != 
                                                  (7U 
                                                   & vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U])));
    vlSelf->_cp___05Fs13379 = vlSelf->_cp___05Fs13289;
    vlSelf->_cp___05Fs5452 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_15)));
    vlSelf->_cp___05Fs3097 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_48)));
    vlSelf->_cp___05Fs3099 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_49)));
    vlSelf->_cp___05Fs3101 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_50)));
    vlSelf->_cp___05Fs3103 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_51)));
    vlSelf->_cp___05Fs3105 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_52)));
    vlSelf->_cp___05Fs3127 = (1U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_68);
    vlSelf->_cp___05Fs3371 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_48)));
    vlSelf->_cp___05Fs3373 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_49)));
    vlSelf->_cp___05Fs3375 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_50)));
    vlSelf->_cp___05Fs3377 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_51)));
    vlSelf->_cp___05Fs3379 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_52)));
    vlSelf->_cp___05Fs3401 = (1U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_68);
    vlSelf->_cp___05Fs4484 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_41)));
    vlSelf->_cp___05Fs4486 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_42)));
    vlSelf->_cp___05Fs4488 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_43)));
    vlSelf->_cp___05Fs4490 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_44)));
    vlSelf->_cp___05Fs4492 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_45)));
    vlSelf->_cp___05Fs4514 = (1U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_62);
    vlSelf->_cp___05Fs4524 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_72)));
    vlSelf->_cp___05Fs4761 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_37)));
    vlSelf->_cp___05Fs4763 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_38)));
    vlSelf->_cp___05Fs4765 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_39)));
    vlSelf->_cp___05Fs4767 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_40)));
    vlSelf->_cp___05Fs4769 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_41)));
    vlSelf->_cp___05Fs4791 = (1U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_54);
    vlSelf->_cp___05Fs5039 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_36)));
    vlSelf->_cp___05Fs5041 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_37)));
    vlSelf->_cp___05Fs5043 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_38)));
    vlSelf->_cp___05Fs5045 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_39)));
    vlSelf->_cp___05Fs5047 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_40)));
    vlSelf->_cp___05Fs5069 = (1U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_54);
    vlSelf->_cp___05Fs5322 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_36)));
    vlSelf->_cp___05Fs5324 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_37)));
    vlSelf->_cp___05Fs5326 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_38)));
    vlSelf->_cp___05Fs5328 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_39)));
    vlSelf->_cp___05Fs5330 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_40)));
    vlSelf->_cp___05Fs5352 = (1U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_53);
    vlSelf->_cp___05Fs5600 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_27)));
    vlSelf->_cp___05Fs5602 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_28)));
    vlSelf->_cp___05Fs5604 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_29)));
    vlSelf->_cp___05Fs5606 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_30)));
    vlSelf->_cp___05Fs5608 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_31)));
    vlSelf->_cp___05Fs5630 = (1U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_44);
    vlSelf->_cp___05Fs4577 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_11)));
    vlSelf->_cp___05Fs4855 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_10)));
    vlSelf->_cp___05Fs5138 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_10)));
    vlSelf->_cp___05Fs5416 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_10)));
    vlSelf->_cp___05Fs4613 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_16)));
    vlSelf->_cp___05Fs4891 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_15)));
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
    vlSelf->_cp___05Fs4336 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_11)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_12 
        = (IData)(((0x4180U == (0x7fc0U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                   & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_11)));
    vlSelf->_mc___05Fs3425 = vlSelf->_mc___05Fs3417;
    vlSelf->_mc___05Fs3426 = vlSelf->_mc___05Fs3418;
    vlSelf->_mc___05Fs3427 = vlSelf->_mc___05Fs3419;
    vlSelf->_mc___05Fs3428 = vlSelf->_mc___05Fs3420;
    vlSelf->_mc___05Fs3429 = vlSelf->_mc___05Fs3421;
    vlSelf->_mc___05Fs3430 = vlSelf->_mc___05Fs3422;
    vlSelf->_mc___05Fs3431 = vlSelf->_mc___05Fs3423;
    vlSelf->_cp___05Fs13409 = (0xffU != (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_mask));
    vlSelf->_cp___05Fs12869 = (0xffU != (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_mask));
    vlSelf->_cp___05Fs10913 = (0xffU != (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_mask));
    vlSelf->_cp___05Fs10626 = (0xffU != (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_mask));
    vlSelf->_cp___05Fs13476 = (5U <= (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_param));
    vlSelf->_cp___05Fs13487 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_param) 
                                     >> 2U));
    vlSelf->_cp___05Fs13498 = (2U <= (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_param));
    vlSelf->_cp___05Fs13407 = (3U <= (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_param));
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_21 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_param) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__param));
    vlSelf->_cp___05Fs13441 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_param));
    vlSelf->_cp___05Fs12936 = (5U <= (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_param));
    vlSelf->_cp___05Fs12947 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_param) 
                                     >> 2U));
    vlSelf->_cp___05Fs12958 = (2U <= (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_param));
    vlSelf->_cp___05Fs12867 = (3U <= (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_param));
    vlSelf->_cp___05Fs12901 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_param));
    vlSelf->_cp___05Fs10980 = (5U <= (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_param));
    vlSelf->_cp___05Fs10991 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_param) 
                                     >> 2U));
    vlSelf->_cp___05Fs11002 = (2U <= (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_param));
    vlSelf->_cp___05Fs10911 = (3U <= (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_param));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_29 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_param) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__param));
    vlSelf->_cp___05Fs10945 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_param));
    vlSelf->_cp___05Fs10693 = (5U <= (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_param));
    vlSelf->_cp___05Fs10704 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_param) 
                                     >> 2U));
    vlSelf->_cp___05Fs10715 = (2U <= (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_param));
    vlSelf->_cp___05Fs10624 = (3U <= (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_param));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_29 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_param) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__param));
    vlSelf->_cp___05Fs10658 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_param));
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
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT____VdfgTmp_h79ced34c__0 
        = ((0U == ((0xffeU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                              << 1U)) | (1U & (~ (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x1fU))))) 
           | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT____VdfgTmp_h4ea4ca6f__0));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_51 
        = ((1U == (IData)(vlSelf->__VdfgTmp_h5b5ca2ab__0)) 
           | (1U == (IData)(vlSelf->__VdfgTmp_hac78d6ab__0)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_71 
        = (((7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
            == (IData)(vlSelf->__VdfgTmp_h5b5ca2ab__0)) 
           | ((7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
              == (IData)(vlSelf->__VdfgTmp_hac78d6ab__0)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_63 
        = (((IData)(vlSelf->_mc___05Fs3443) == (IData)(vlSelf->__VdfgTmp_h5b5ca2ab__0)) 
           | ((IData)(vlSelf->_mc___05Fs3443) == (IData)(vlSelf->__VdfgTmp_hac78d6ab__0)));
    vlSelf->_mc___05Fs3655 = vlSelf->_mc___05Fs3647;
    vlSelf->_mc___05Fs3656 = vlSelf->_mc___05Fs3648;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_85 
        = ((0x300U & ((- (IData)((IData)(vlSelf->_mc___05Fs3648))) 
                      << 8U)) | (0xffU & (- (IData)((IData)(vlSelf->_mc___05Fs3647)))));
    vlSelf->_cp___05Fs13395 = (6U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_cp___05Fs13412 = (7U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs672 = (0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs673 = (1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs674 = (2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs675 = (3U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs676 = (4U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs677 = (5U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_43 
        = ((1U == ((0x17U >= (0x1fU & ((IData)(3U) 
                                       * (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))))
                    ? (7U & (0x911240U >> (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode)))))
                    : 0U)) | (1U == ((0x17U >= (0x1fU 
                                                & ((IData)(3U) 
                                                   * (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))))
                                      ? (7U & (0x951240U 
                                               >> (0x1fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode)))))
                                      : 0U)));
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_20 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__opcode));
    vlSelf->_mc___05Fs3659 = vlSelf->_mc___05Fs3651;
    vlSelf->_mc___05Fs3660 = vlSelf->_mc___05Fs3652;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_86 
        = ((0x300U & ((- (IData)((IData)(vlSelf->_mc___05Fs3652))) 
                      << 8U)) | (0xffU & (- (IData)((IData)(vlSelf->_mc___05Fs3651)))));
    vlSelf->_cp___05Fs2919 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_7));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_20 
        = ((0xdU > (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U))) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_12));
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
    vlSelf->_cp___05Fs10899 = (6U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_cp___05Fs10916 = (7U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_cp___05Fs5126 = (1U & (~ ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                       | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
                                          >> 2U))));
    vlSelf->_mc___05Fs608 = (0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs609 = (1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs610 = (2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs611 = (3U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs613 = (5U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_28 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__opcode));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_54 
        = (((IData)(vlSelf->_mc___05Fs3443) == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))))
                                                 ? 
                                                (7U 
                                                 & (0x911240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode)))))
                                                 : 0U)) 
           | ((IData)(vlSelf->_mc___05Fs3443) == ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))))
                                                   ? 
                                                  (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode)))))
                                                   : 0U)));
    vlSelf->_mc___05Fs3441 = (1U & (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
                                       >> 2U)));
    vlSelf->_mc___05Fs3480 = (4U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_cp___05Fs4583 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_7));
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
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_19 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__source_ok) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_16));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_18 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__source_ok) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_15));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_18 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__source_ok) 
           & (7U != (7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                           >> 6U))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_19 
        = ((0xdU > (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U))) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__source_ok));
    vlSelf->_cp___05Fs2915 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__source_ok)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc 
        = ((2U < (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                          >> 6U))) | (IData)(vlSelf->__VdfgTmp_h20313e8a__0));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc 
        = ((2U < (7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                        >> 6U))) | (IData)(vlSelf->__VdfgTmp_h20313e8a__0));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_1 
        = ((2U < (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                          >> 6U))) | (IData)(vlSelf->__VdfgTmp_h4e0b4325__0));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1 
        = ((2U < (7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                        >> 6U))) | (IData)(vlSelf->__VdfgTmp_h4e0b4325__0));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_37 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__source_1));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_11, vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_40[0U] 
        = __Vtemp_11[0U];
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_40[1U] 
        = __Vtemp_11[1U];
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_40[2U] 
        = (0xfffU & __Vtemp_11[2U]);
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__source_ok_1 
        = ((0U == (3U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                         >> 3U))) | ((1U == (3U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                                                   >> 3U))) 
                                     | ((0x10U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source)) 
                                        | ((0x11U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source)) 
                                           | (0x12U 
                                              == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source))))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_47 
        = ((0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xaU)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_46 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__source_1));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_72 
        = (0x7ffffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_1 
                       >> (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source)));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_13, vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_49[0U] 
        = __Vtemp_13[0U];
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_49[1U] 
        = __Vtemp_13[1U];
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_49[2U] 
        = (0xfffU & __Vtemp_13[2U]);
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__source_ok_1 
        = ((0U == (3U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                         >> 3U))) | ((1U == (3U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                                                   >> 3U))) 
                                     | ((0x10U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source)) 
                                        | ((0x11U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source)) 
                                           | (0x12U 
                                              == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source))))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_57 
        = ((0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xaU)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_47 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__source_1));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_73 
        = (0x7ffffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_1 
                       >> (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source)));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_15, vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_50[0U] 
        = __Vtemp_15[0U];
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_50[1U] 
        = __Vtemp_15[1U];
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_50[2U] 
        = (0xfffU & __Vtemp_15[2U]);
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__source_ok_1 
        = ((0U == (3U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                         >> 3U))) | ((1U == (3U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                                                   >> 3U))) 
                                     | ((0x10U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source)) 
                                        | ((0x11U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source)) 
                                           | (0x12U 
                                              == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source))))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_58 
        = ((0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xaU)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source));
    vlSelf->__VdfgTmp_h1db9e8c3__0 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_2) 
                                      & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xfU));
    vlSelf->__VdfgTmp_h801260d9__0 = ((~ (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0xfU)) 
                                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_2));
    vlSelf->__VdfgTmp_h65085cb0__0 = (IData)(((0x40U 
                                               == (0xc0U 
                                                   & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_2)));
    vlSelf->__VdfgTmp_h7f037460__0 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_3) 
                                      & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xfU));
    vlSelf->__VdfgTmp_h5ee1e54d__0 = ((~ (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0xfU)) 
                                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_3));
    vlSelf->__VdfgTmp_hb7dbd824__0 = (IData)(((0x40U 
                                               == (0xc0U 
                                                   & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_3)));
    vlSelf->__VdfgTmp_h2c078813__0 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_4) 
                                      & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xfU));
    vlSelf->__VdfgTmp_h210ca893__0 = ((~ (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0xfU)) 
                                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_4));
    vlSelf->__VdfgTmp_hdaf7070a__0 = (IData)(((0x40U 
                                               == (0xc0U 
                                                   & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_4)));
    vlSelf->__VdfgTmp_h3ea4d90a__0 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_5) 
                                      & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xfU));
    vlSelf->__VdfgTmp_h53fcee55__0 = ((~ (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0xfU)) 
                                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_5));
    vlSelf->__VdfgTmp_h48e6c14c__0 = (IData)(((0x40U 
                                               == (0xc0U 
                                                   & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_5)));
    vlSelf->_cp___05Fs10939 = (3U != (3U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                            >> 0x1aU)));
    vlSelf->_cp___05Fs13435 = (1U & (~ (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                        >> 0x10U)));
    vlSelf->_mc___05Fs3681 = (0U != (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                             >> 0xcU)));
    vlSelf->_cp___05Fs10652 = (0x200U != (0x3ffU & 
                                          (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                           >> 0x10U)));
    __Vtemp_24[3U] = (0x7eU | ((0x1000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                               >> 0xbU)) 
                                           << 0xcU)) 
                               | ((0x800U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                 >> 0xbU)) 
                                             << 0xbU)) 
                                  | ((0x400U & ((~ 
                                                 ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                  >> 0xbU)) 
                                                << 0xaU)) 
                                     | ((0x200U & (
                                                   (~ 
                                                    ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                     >> 0xbU)) 
                                                   << 9U)) 
                                        | ((0x100U 
                                            & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                   >> 0xbU)) 
                                               << 8U)) 
                                           | ((0x80U 
                                               & ((~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                    >> 0xbU)) 
                                                  << 7U)) 
                                              | (1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                     >> 0xbU))))))))));
    __Vtemp_36[4U] = ((0x40U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                    >> 0xbU)) << 6U)) 
                      | ((0x20U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                       >> 0xbU)) << 5U)) 
                         | ((0x10U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                          >> 0xbU)) 
                                      << 4U)) | ((8U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                       >> 0xbU)) 
                                                     << 3U)) 
                                                 | ((4U 
                                                     & ((~ 
                                                         ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                          >> 0xbU)) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & ((~ 
                                                            ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                             >> 0xbU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (~ 
                                                             ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                              >> 0xbU)))))))));
    __Vtemp_43[4U] = ((0x2000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                      >> 0xbU)) << 0xdU)) 
                      | ((0x1000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                         >> 0xbU)) 
                                     << 0xcU)) | ((0x800U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                        >> 0xbU)) 
                                                      << 0xbU)) 
                                                  | ((0x400U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                           >> 0xbU)) 
                                                         << 0xaU)) 
                                                     | ((0x200U 
                                                         & ((~ 
                                                             ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                              >> 0xbU)) 
                                                            << 9U)) 
                                                        | ((0x100U 
                                                            & ((~ 
                                                                ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                 >> 0xbU)) 
                                                               << 8U)) 
                                                           | ((0x80U 
                                                               & ((~ 
                                                                   ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                    >> 0xbU)) 
                                                                  << 7U)) 
                                                              | __Vtemp_36[4U])))))));
    __Vtemp_50[4U] = ((0x100000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                        >> 0xbU)) << 0x14U)) 
                      | ((0x80000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                          >> 0xbU)) 
                                      << 0x13U)) | 
                         ((0x40000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                           >> 0xbU)) 
                                       << 0x12U)) | 
                          ((0x20000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                            >> 0xbU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                               >> 0xbU)) 
                                           << 0x10U)) 
                              | ((0x8000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                 >> 0xbU)) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((~ 
                                                 ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                  >> 0xbU)) 
                                                << 0xeU)) 
                                    | __Vtemp_43[4U])))))));
    __Vtemp_57[4U] = ((0x8000000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                         >> 0xbU)) 
                                     << 0x1bU)) | (
                                                   (0x4000000U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                         >> 0xbU)) 
                                                       << 0x1aU)) 
                                                   | ((0x2000000U 
                                                       & ((~ 
                                                           ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                            >> 0xbU)) 
                                                          << 0x19U)) 
                                                      | ((0x1000000U 
                                                          & ((~ 
                                                              ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                               >> 0xbU)) 
                                                             << 0x18U)) 
                                                         | ((0x800000U 
                                                             & ((~ 
                                                                 ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                  >> 0xbU)) 
                                                                << 0x17U)) 
                                                            | ((0x400000U 
                                                                & ((~ 
                                                                    ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                     >> 0xbU)) 
                                                                   << 0x16U)) 
                                                               | ((0x200000U 
                                                                   & ((~ 
                                                                       ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                        >> 0xbU)) 
                                                                      << 0x15U)) 
                                                                  | __Vtemp_50[4U])))))));
    __Vtemp_68[5U] = ((0x40U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                    >> 0xbU)) << 6U)) 
                      | ((0x20U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                       >> 0xbU)) << 5U)) 
                         | ((0x10U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                          >> 0xbU)) 
                                      << 4U)) | ((8U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                       >> 0xbU)) 
                                                     << 3U)) 
                                                 | ((4U 
                                                     & ((~ 
                                                         ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                          >> 0xbU)) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & ((~ 
                                                            ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                             >> 0xbU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (~ 
                                                             ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                              >> 0xbU)))))))));
    __Vtemp_75[5U] = ((0x2000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                      >> 0xbU)) << 0xdU)) 
                      | ((0x1000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                         >> 0xbU)) 
                                     << 0xcU)) | ((0x800U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                        >> 0xbU)) 
                                                      << 0xbU)) 
                                                  | ((0x400U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                           >> 0xbU)) 
                                                         << 0xaU)) 
                                                     | ((0x200U 
                                                         & ((~ 
                                                             ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                              >> 0xbU)) 
                                                            << 9U)) 
                                                        | ((0x100U 
                                                            & ((~ 
                                                                ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                 >> 0xbU)) 
                                                               << 8U)) 
                                                           | ((0x80U 
                                                               & ((~ 
                                                                   ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                    >> 0xbU)) 
                                                                  << 7U)) 
                                                              | __Vtemp_68[5U])))))));
    __Vtemp_82[5U] = ((0x100000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                        >> 0xbU)) << 0x14U)) 
                      | ((0x80000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                          >> 0xbU)) 
                                      << 0x13U)) | 
                         ((0x40000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                           >> 0xbU)) 
                                       << 0x12U)) | 
                          ((0x20000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                            >> 0xbU)) 
                                        << 0x11U)) 
                           | ((0x10000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                               >> 0xbU)) 
                                           << 0x10U)) 
                              | ((0x8000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                 >> 0xbU)) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((~ 
                                                 ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                  >> 0xbU)) 
                                                << 0xeU)) 
                                    | __Vtemp_75[5U])))))));
    __Vtemp_89[5U] = ((0x8000000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                         >> 0xbU)) 
                                     << 0x1bU)) | (
                                                   (0x4000000U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                         >> 0xbU)) 
                                                       << 0x1aU)) 
                                                   | ((0x2000000U 
                                                       & ((~ 
                                                           ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                            >> 0xbU)) 
                                                          << 0x19U)) 
                                                      | ((0x1000000U 
                                                          & ((~ 
                                                              ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                               >> 0xbU)) 
                                                             << 0x18U)) 
                                                         | ((0x800000U 
                                                             & ((~ 
                                                                 ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                  >> 0xbU)) 
                                                                << 0x17U)) 
                                                            | ((0x400000U 
                                                                & ((~ 
                                                                    ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                     >> 0xbU)) 
                                                                   << 0x16U)) 
                                                               | ((0x200000U 
                                                                   & ((~ 
                                                                       ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                        >> 0xbU)) 
                                                                      << 0x15U)) 
                                                                  | __Vtemp_82[5U])))))));
    __Vtemp_100[6U] = ((0x40U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                     >> 0xbU)) << 6U)) 
                       | ((0x20U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                        >> 0xbU)) << 5U)) 
                          | ((0x10U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                           >> 0xbU)) 
                                       << 4U)) | ((8U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                        >> 0xbU)) 
                                                      << 3U)) 
                                                  | ((4U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                           >> 0xbU)) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & ((~ 
                                                             ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                              >> 0xbU)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                               >> 0xbU)))))))));
    __Vtemp_107[6U] = ((0x2000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                       >> 0xbU)) << 0xdU)) 
                       | ((0x1000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                          >> 0xbU)) 
                                      << 0xcU)) | (
                                                   (0x800U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                         >> 0xbU)) 
                                                       << 0xbU)) 
                                                   | ((0x400U 
                                                       & ((~ 
                                                           ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                            >> 0xbU)) 
                                                          << 0xaU)) 
                                                      | ((0x200U 
                                                          & ((~ 
                                                              ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                               >> 0xbU)) 
                                                             << 9U)) 
                                                         | ((0x100U 
                                                             & ((~ 
                                                                 ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                  >> 0xbU)) 
                                                                << 8U)) 
                                                            | ((0x80U 
                                                                & ((~ 
                                                                    ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                     >> 0xbU)) 
                                                                   << 7U)) 
                                                               | __Vtemp_100[6U])))))));
    __Vtemp_114[6U] = ((0x100000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                         >> 0xbU)) 
                                     << 0x14U)) | (
                                                   (0x80000U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                         >> 0xbU)) 
                                                       << 0x13U)) 
                                                   | ((0x40000U 
                                                       & ((~ 
                                                           ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                            >> 0xbU)) 
                                                          << 0x12U)) 
                                                      | ((0x20000U 
                                                          & ((~ 
                                                              ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                               >> 0xbU)) 
                                                             << 0x11U)) 
                                                         | ((0x10000U 
                                                             & ((~ 
                                                                 ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                  >> 0xbU)) 
                                                                << 0x10U)) 
                                                            | ((0x8000U 
                                                                & ((~ 
                                                                    ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                     >> 0xbU)) 
                                                                   << 0xfU)) 
                                                               | ((0x4000U 
                                                                   & ((~ 
                                                                       ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                        >> 0xbU)) 
                                                                      << 0xeU)) 
                                                                  | __Vtemp_107[6U])))))));
    __Vtemp_121[6U] = ((0x8000000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                          >> 0xbU)) 
                                      << 0x1bU)) | 
                       ((0x4000000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                           >> 0xbU)) 
                                       << 0x1aU)) | 
                        ((0x2000000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                            >> 0xbU)) 
                                        << 0x19U)) 
                         | ((0x1000000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                               >> 0xbU)) 
                                           << 0x18U)) 
                            | ((0x800000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                 >> 0xbU)) 
                                             << 0x17U)) 
                               | ((0x400000U & ((~ 
                                                 ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                  >> 0xbU)) 
                                                << 0x16U)) 
                                  | ((0x200000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                     >> 0xbU)) 
                                                   << 0x15U)) 
                                     | __Vtemp_114[6U])))))));
    __Vtemp_132[7U] = ((0x40U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                     >> 0xbU)) << 6U)) 
                       | ((0x20U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                        >> 0xbU)) << 5U)) 
                          | ((0x10U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                           >> 0xbU)) 
                                       << 4U)) | ((8U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                        >> 0xbU)) 
                                                      << 3U)) 
                                                  | ((4U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                           >> 0xbU)) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & ((~ 
                                                             ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                              >> 0xbU)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                               >> 0xbU)))))))));
    __Vtemp_139[7U] = ((0x2000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                       >> 0xbU)) << 0xdU)) 
                       | ((0x1000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                          >> 0xbU)) 
                                      << 0xcU)) | (
                                                   (0x800U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                         >> 0xbU)) 
                                                       << 0xbU)) 
                                                   | ((0x400U 
                                                       & ((~ 
                                                           ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                            >> 0xbU)) 
                                                          << 0xaU)) 
                                                      | ((0x200U 
                                                          & ((~ 
                                                              ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                               >> 0xbU)) 
                                                             << 9U)) 
                                                         | ((0x100U 
                                                             & ((~ 
                                                                 ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                  >> 0xbU)) 
                                                                << 8U)) 
                                                            | ((0x80U 
                                                                & ((~ 
                                                                    ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                     >> 0xbU)) 
                                                                   << 7U)) 
                                                               | __Vtemp_132[7U])))))));
    __Vtemp_146[7U] = ((0x100000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                         >> 0xbU)) 
                                     << 0x14U)) | (
                                                   (0x80000U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                         >> 0xbU)) 
                                                       << 0x13U)) 
                                                   | ((0x40000U 
                                                       & ((~ 
                                                           ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                            >> 0xbU)) 
                                                          << 0x12U)) 
                                                      | ((0x20000U 
                                                          & ((~ 
                                                              ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                               >> 0xbU)) 
                                                             << 0x11U)) 
                                                         | ((0x10000U 
                                                             & ((~ 
                                                                 ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                  >> 0xbU)) 
                                                                << 0x10U)) 
                                                            | ((0x8000U 
                                                                & ((~ 
                                                                    ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                     >> 0xbU)) 
                                                                   << 0xfU)) 
                                                               | ((0x4000U 
                                                                   & ((~ 
                                                                       ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                        >> 0xbU)) 
                                                                      << 0xeU)) 
                                                                  | __Vtemp_139[7U])))))));
    __Vtemp_153[7U] = ((0x8000000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                          >> 0xbU)) 
                                      << 0x1bU)) | 
                       ((0x4000000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                           >> 0xbU)) 
                                       << 0x1aU)) | 
                        ((0x2000000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                            >> 0xbU)) 
                                        << 0x19U)) 
                         | ((0x1000000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                               >> 0xbU)) 
                                           << 0x18U)) 
                            | ((0x800000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                 >> 0xbU)) 
                                             << 0x17U)) 
                               | ((0x400000U & ((~ 
                                                 ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                  >> 0xbU)) 
                                                << 0x16U)) 
                                  | ((0x200000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                     >> 0xbU)) 
                                                   << 0x15U)) 
                                     | __Vtemp_146[7U])))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_88[0U] 
        = (IData)((((QData)((IData)((1U & (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                              >> 0xbU))))) 
                    << 0x21U) | (((QData)((IData)((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                       >> 0xbU))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (0xfffff800U 
                                                               | (0x7ffU 
                                                                  & (- (IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                                >> 0xbU)))))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_88[1U] 
        = (0xfffffffcU | (IData)(((((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                         >> 0xbU))))) 
                                    << 0x21U) | (((QData)((IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                       >> 0xbU))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (0xfffff800U 
                                                                    | (0x7ffU 
                                                                       & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                                >> 0xbU)))))))))) 
                                  >> 0x20U)));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_88[2U] = 0xffffffffU;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_88[3U] 
        = (0xfffe0000U | ((0x10000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                           >> 0xbU)) 
                                       << 0x10U)) | 
                          ((0x8000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                           >> 0xbU)) 
                                       << 0xfU)) | 
                           ((0x4000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                            >> 0xbU)) 
                                        << 0xeU)) | 
                            ((0x2000U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                             >> 0xbU)) 
                                         << 0xdU)) 
                             | __Vtemp_24[3U])))));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_88[4U] 
        = (((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                >> 0xbU)) << 0x1fU) | ((0x40000000U 
                                        & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                               >> 0xbU)) 
                                           << 0x1eU)) 
                                       | ((0x20000000U 
                                           & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                  >> 0xbU)) 
                                              << 0x1dU)) 
                                          | ((0x10000000U 
                                              & ((~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                   >> 0xbU)) 
                                                 << 0x1cU)) 
                                             | __Vtemp_57[4U]))));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_88[5U] 
        = (((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                >> 0xbU)) << 0x1fU) | ((0x40000000U 
                                        & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                               >> 0xbU)) 
                                           << 0x1eU)) 
                                       | ((0x20000000U 
                                           & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                  >> 0xbU)) 
                                              << 0x1dU)) 
                                          | ((0x10000000U 
                                              & ((~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                   >> 0xbU)) 
                                                 << 0x1cU)) 
                                             | __Vtemp_89[5U]))));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_88[6U] 
        = (((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                >> 0xbU)) << 0x1fU) | ((0x40000000U 
                                        & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                               >> 0xbU)) 
                                           << 0x1eU)) 
                                       | ((0x20000000U 
                                           & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                  >> 0xbU)) 
                                              << 0x1dU)) 
                                          | ((0x10000000U 
                                              & ((~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                   >> 0xbU)) 
                                                 << 0x1cU)) 
                                             | __Vtemp_121[6U]))));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_88[7U] 
        = (((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                >> 0xbU)) << 0x1fU) | ((0x40000000U 
                                        & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                               >> 0xbU)) 
                                           << 0x1eU)) 
                                       | ((0x20000000U 
                                           & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                  >> 0xbU)) 
                                              << 0x1dU)) 
                                          | ((0x10000000U 
                                              & ((~ 
                                                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                   >> 0xbU)) 
                                                 << 0x1cU)) 
                                             | __Vtemp_153[7U]))));
    vlSelf->_mc___05Fs614 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_size) 
                                   >> 2U));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFragnum 
        = (7U & ((IData)(vlSelf->_mc___05Fs616) ? (~ 
                                                   (0x3ffU 
                                                    & (((IData)(0x3fU) 
                                                        << (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                       >> 3U)))
                  : ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__gennum) 
                     - (IData)(1U))));
    vlSelf->_mc___05Fs678 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_size) 
                                   >> 2U));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0 
        = (7U & ((IData)(vlSelf->_mc___05Fs679) ? (~ 
                                                   (0x3ffU 
                                                    & (((IData)(0x3fU) 
                                                        << (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                       >> 3U)))
                  : ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__gennum) 
                     - (IData)(1U))));
    vlSelf->_cp___05Fs10612 = (6U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_cp___05Fs10629 = (7U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_cp___05Fs4843 = (1U & (~ ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                       | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
                                          >> 2U))));
    vlSelf->_mc___05Fs573 = (0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs574 = (1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs575 = (2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs576 = (3U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs578 = (5U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_28 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__opcode));
    vlSelf->_mc___05Fs3405 = (1U & (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
                                       >> 2U)));
    vlSelf->_mc___05Fs3407 = (4U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_cp___05Fs12855 = (6U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_cp___05Fs12872 = (7U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_cp___05Fs5404 = (1U & (~ ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                       | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
                                          >> 2U))));
    vlSelf->_mc___05Fs643 = (0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs644 = (1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs645 = (2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs646 = (3U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs648 = (5U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs3615 = (1U & (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
                                       >> 2U)));
    vlSelf->_mc___05Fs3617 = (4U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode));
    vlSelf->_mc___05Fs579 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_size) 
                                   >> 2U));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0 
        = (7U & ((IData)(vlSelf->_mc___05Fs581) ? (~ 
                                                   (0x3ffU 
                                                    & (((IData)(0x3fU) 
                                                        << (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                       >> 3U)))
                  : ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__gennum) 
                     - (IData)(1U))));
    vlSelf->_mc___05Fs649 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_size) 
                                   >> 2U));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0 
        = (7U & ((IData)(vlSelf->_mc___05Fs651) ? (~ 
                                                   (0x3ffU 
                                                    & (((IData)(0x3fU) 
                                                        << (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                       >> 3U)))
                  : ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__gennum) 
                     - (IData)(1U))));
    vlSelf->_mc___05Fs381 = vlSelf->_mc___05Fs343;
    vlSelf->_mc___05Fs340 = (0U == (((IData)(vlSelf->_mc___05Fs343) 
                                     << 3U) | ((4U 
                                                & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                   >> 6U)) 
                                               | ((2U 
                                                   & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x1eU)) 
                                                  | (1U 
                                                     & (~ 
                                                        (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x1cU)))))));
    vlSelf->_mc___05Fs341 = (0U == (((IData)(vlSelf->_mc___05Fs343) 
                                     << 2U) | ((2U 
                                                & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                   >> 7U)) 
                                               | (1U 
                                                  & (~ 
                                                     (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x1fU))))));
    vlSelf->_mc___05Fs342 = (0U == (((IData)(vlSelf->_mc___05Fs343) 
                                     << 2U) | ((2U 
                                                & ((~ 
                                                    (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                     >> 8U)) 
                                                   << 1U)) 
                                               | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x1fU))));
    vlSelf->_mc___05Fs339 = (0U == (((IData)(vlSelf->_mc___05Fs343) 
                                     << 3U) | ((4U 
                                                & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                   >> 6U)) 
                                               | ((2U 
                                                   & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x1eU)) 
                                                  | (1U 
                                                     & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x1cU))))));
    vlSelf->_cp___05Fs4975 = vlSelf->_cp___05Fs4964;
    vlSelf->_cp___05Fs4990 = vlSelf->_cp___05Fs4964;
    vlSelf->_cp___05Fs5005 = vlSelf->_cp___05Fs4964;
    vlSelf->_cp___05Fs5014 = vlSelf->_cp___05Fs4964;
    vlSelf->_cp___05Fs5023 = vlSelf->_cp___05Fs4964;
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT____VdfgTmp_h64ff008c__0 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN_10) 
           & (0U != vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN_11));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dFirst_size 
        = (((IData)((0U != (7U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___GEN_0) 
                                  >> 3U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___GEN_1) 
                                     >> 1U)))) << 1U) 
              | (IData)((0U != (5U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___GEN_1))))));
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
                                    | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN_10)));
    vlSelf->_cp___05Fs5003 = vlSelf->_cp___05Fs11051;
    vlSelf->_cp___05Fs5012 = vlSelf->_cp___05Fs11060;
    vlSelf->_cp___05Fs5052 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_44)));
    vlSelf->_cp___05Fs5081 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_65)));
    vlSelf->_cp___05Fs11100 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_35)));
    vlSelf->_cp___05Fs11129 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_56)));
    vlSelf->_cp___05Fs4959 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__drop)) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__full));
    vlSelf->_cp___05Fs4594 = vlSelf->_cp___05Fs4577;
    vlSelf->_cp___05Fs4872 = vlSelf->_cp___05Fs4855;
    vlSelf->_cp___05Fs5155 = vlSelf->_cp___05Fs5138;
    vlSelf->_cp___05Fs5433 = vlSelf->_cp___05Fs5416;
    vlSelf->_cp___05Fs4300 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_12)));
    vlSelf->_cp___05Fs13428 = vlSelf->_cp___05Fs13409;
    vlSelf->_cp___05Fs12888 = vlSelf->_cp___05Fs12869;
    vlSelf->_cp___05Fs10932 = vlSelf->_cp___05Fs10913;
    vlSelf->_cp___05Fs10645 = vlSelf->_cp___05Fs10626;
    vlSelf->_cp___05Fs13424 = vlSelf->_cp___05Fs13407;
    vlSelf->_cp___05Fs13585 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_21)));
    vlSelf->_cp___05Fs13426 = (1U & (~ (IData)(vlSelf->_cp___05Fs13441)));
    vlSelf->_cp___05Fs13454 = vlSelf->_cp___05Fs13441;
    vlSelf->_cp___05Fs13465 = vlSelf->_cp___05Fs13441;
    vlSelf->_cp___05Fs12884 = vlSelf->_cp___05Fs12867;
    vlSelf->_cp___05Fs12886 = (1U & (~ (IData)(vlSelf->_cp___05Fs12901)));
    vlSelf->_cp___05Fs12914 = vlSelf->_cp___05Fs12901;
    vlSelf->_cp___05Fs12925 = vlSelf->_cp___05Fs12901;
    vlSelf->_cp___05Fs10928 = vlSelf->_cp___05Fs10911;
    vlSelf->_cp___05Fs11089 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_29)));
    vlSelf->_cp___05Fs10930 = (1U & (~ (IData)(vlSelf->_cp___05Fs10945)));
    vlSelf->_cp___05Fs10958 = vlSelf->_cp___05Fs10945;
    vlSelf->_cp___05Fs10969 = vlSelf->_cp___05Fs10945;
    vlSelf->_cp___05Fs10641 = vlSelf->_cp___05Fs10624;
    vlSelf->_cp___05Fs10802 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_29)));
    vlSelf->_cp___05Fs10643 = (1U & (~ (IData)(vlSelf->_cp___05Fs10658)));
    vlSelf->_cp___05Fs10671 = vlSelf->_cp___05Fs10658;
    vlSelf->_cp___05Fs10682 = vlSelf->_cp___05Fs10658;
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_15 
        = (IData)(((0x4180U == (0x7fc0U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                   & ((0xdU > (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 6U))) & (
                                                   (0U 
                                                    == 
                                                    (0xffffU 
                                                     & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                         << 5U) 
                                                        | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0x1bU)))) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_12) 
                                                      | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT____VdfgTmp_h79ced34c__0))))));
    vlSelf->_cp___05Fs5638 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_51)));
    vlSelf->_cp___05Fs4522 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_71)));
    vlSelf->_cp___05Fs5077 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_63)));
    vlSelf->_cp___05Fs13446 = vlSelf->_mc___05Fs672;
    vlSelf->_cp___05Fs13457 = vlSelf->_mc___05Fs673;
    vlSelf->_cp___05Fs13468 = vlSelf->_mc___05Fs674;
    vlSelf->_cp___05Fs13479 = vlSelf->_mc___05Fs675;
    vlSelf->_cp___05Fs13431 = vlSelf->_mc___05Fs676;
    vlSelf->_cp___05Fs13490 = vlSelf->_mc___05Fs677;
    vlSelf->_cp___05Fs13621 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_43)));
    vlSelf->_cp___05Fs13583 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_20)));
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
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_22 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_20) 
           | ((7U > (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 6U))) & ((0U == (0xffffU 
                                                 & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                     << 5U) 
                                                    | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x1bU)))) 
                                         | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT____VdfgTmp_h79ced34c__0))));
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
    vlSelf->_cp___05Fs11087 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_28)));
    vlSelf->_cp___05Fs11125 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_54)));
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
    vlSelf->_cp___05Fs4626 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_19)));
    vlSelf->_cp___05Fs4904 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_18)));
    vlSelf->_cp___05Fs5187 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_18)));
    vlSelf->_cp___05Fs2947 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_19)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_33 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_19) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_20));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_23 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_19) 
           & (IData)(((0x18000000U == (0x18000000U 
                                       & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                      & (4U > (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 6U))))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_19 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_19) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_11));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_29 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_19) 
           & ((4U > (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 6U))) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_12)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_25 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_19) 
           & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_20) 
              | ((7U > (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                >> 6U))) & ((0U == 
                                             (0xffffU 
                                              & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                  << 5U) 
                                                 | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x1bU)))) 
                                            | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT____VdfgTmp_h4ea4ca6f__0)))));
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
    vlSelf->_cp___05Fs5619 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_37)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_53 
        = ((1U == ((0x17U >= (0x1fU & ((IData)(3U) 
                                       * (7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_40[0U] 
                                                >> 1U)))))
                    ? (7U & (0x911240U >> (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_40[0U] 
                                                >> 1U))))))
                    : 0U)) | (1U == ((0x17U >= (0x1fU 
                                                & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_40[0U] 
                                                       >> 1U)))))
                                      ? (7U & (0x951240U 
                                               >> (0x1fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_40[0U] 
                                                          >> 1U))))))
                                      : 0U)));
    vlSelf->_cp___05Fs5525 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__source_ok_1)));
    vlSelf->_cp___05Fs5341 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_46)));
    vlSelf->_cp___05Fs5383 = (1U & (~ vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_72));
    vlSelf->_cp___05Fs5247 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__source_ok_1)));
    vlSelf->_cp___05Fs4780 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_47)));
    vlSelf->_cp___05Fs4822 = (1U & (~ vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_73));
    vlSelf->_cp___05Fs4686 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__source_ok_1)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc) 
           | (IData)(vlSelf->__VdfgTmp_h65085cb0__0));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc) 
           | (IData)(vlSelf->__VdfgTmp_h65085cb0__0));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc) 
           | (IData)(vlSelf->__VdfgTmp_hb7dbd824__0));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc) 
           | (IData)(vlSelf->__VdfgTmp_hb7dbd824__0));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_1) 
           | (IData)(vlSelf->__VdfgTmp_hdaf7070a__0));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1) 
           | (IData)(vlSelf->__VdfgTmp_hdaf7070a__0));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_1) 
           | (IData)(vlSelf->__VdfgTmp_h48e6c14c__0));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1) 
           | (IData)(vlSelf->__VdfgTmp_h48e6c14c__0));
    TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0 
        = ((IData)(vlSelf->_mc___05Fs614) | (3U == 
                                             (3U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_size))));
    vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_size 
        = ((IData)(vlSelf->_mc___05Fs614) ? 3U : (3U 
                                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_size)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat 
        = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
            >> 2U) & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFragnum)));
    vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_source 
        = ((0x1f0U & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
                        ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_source)
                        : ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            << 0x16U) | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xaU))) 
                      << 4U)) | ((8U & ((~ ((IData)(vlSelf->_mc___05Fs616)
                                             ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dToggle)
                                             : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aToggle_r))) 
                                        << 3U)) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFragnum)));
    vlSelf->__VdfgTmp_h55a20eaf__0 = (0x3fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                               | (0x38U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFragnum) 
                                                       | (0x3ffU 
                                                          & (((IData)(0x3fU) 
                                                              << (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                             >> 3U)))) 
                                                     << 3U))));
    vlSelf->_cp___05Fs13647 = ((IData)(vlSelf->_mc___05Fs678) 
                               | (0U != (3U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_size))));
    TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0 
        = ((IData)(vlSelf->_mc___05Fs678) | (3U == 
                                             (3U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_size))));
    vlSelf->TestHarness__DOT__ldut__DOT___bootrom_domain_auto_bootrom_in_d_bits_size 
        = ((IData)(vlSelf->_mc___05Fs678) ? 3U : (3U 
                                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_size)));
    vlSelf->TestHarness__DOT__ldut__DOT___bootrom_domain_auto_bootrom_in_d_bits_source 
        = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
            << 4U) | ((8U & ((~ ((IData)(vlSelf->_mc___05Fs679)
                                  ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dToggle)
                                  : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__aToggle_r))) 
                             << 3U)) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0)));
    vlSelf->__VdfgTmp_h70e6f20a__0 = (0x3fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                               | (0x38U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0) 
                                                       | (0x3ffU 
                                                          & (((IData)(0x3fU) 
                                                              << (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                             >> 3U)))) 
                                                     << 3U))));
    vlSelf->_cp___05Fs10663 = vlSelf->_mc___05Fs573;
    vlSelf->_cp___05Fs10674 = vlSelf->_mc___05Fs574;
    vlSelf->_cp___05Fs10685 = vlSelf->_mc___05Fs575;
    vlSelf->_cp___05Fs10696 = vlSelf->_mc___05Fs576;
    vlSelf->_cp___05Fs10707 = vlSelf->_mc___05Fs578;
    vlSelf->_cp___05Fs10800 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_28)));
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
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_45 
        = ((IData)(vlSelf->_mc___05Fs3407) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__opcode_1));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_64 
        = (((IData)(vlSelf->_mc___05Fs3407) == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_50[0U] 
                                                         >> 1U)))))
                                                 ? 
                                                (7U 
                                                 & (0x911240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * 
                                                        (7U 
                                                         & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_50[0U] 
                                                            >> 1U))))))
                                                 : 0U)) 
           | ((IData)(vlSelf->_mc___05Fs3407) == ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_50[0U] 
                                                           >> 1U)))))
                                                   ? 
                                                  (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_50[0U] 
                                                              >> 1U))))))
                                                   : 0U)));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_35 
        = ((IData)(vlSelf->_mc___05Fs3407) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__opcode_1));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_52 
        = (((IData)(vlSelf->_mc___05Fs3407) == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))))
                                                 ? 
                                                (7U 
                                                 & (0x911240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode)))))
                                                 : 0U)) 
           | ((IData)(vlSelf->_mc___05Fs3407) == ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))))
                                                   ? 
                                                  (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode)))))
                                                   : 0U)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_62 
        = (((IData)(vlSelf->_mc___05Fs3407) == (IData)(vlSelf->__VdfgTmp_h5b5ca2ab__0)) 
           | ((IData)(vlSelf->_mc___05Fs3407) == (IData)(vlSelf->__VdfgTmp_hac78d6ab__0)));
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
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_44 
        = ((IData)(vlSelf->_mc___05Fs3617) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__opcode_1));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_63 
        = (((IData)(vlSelf->_mc___05Fs3617) == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_49[0U] 
                                                         >> 1U)))))
                                                 ? 
                                                (7U 
                                                 & (0x911240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * 
                                                        (7U 
                                                         & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_49[0U] 
                                                            >> 1U))))))
                                                 : 0U)) 
           | ((IData)(vlSelf->_mc___05Fs3617) == ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_49[0U] 
                                                           >> 1U)))))
                                                   ? 
                                                  (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_49[0U] 
                                                              >> 1U))))))
                                                   : 0U)));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_50 
        = (((IData)(vlSelf->_mc___05Fs3617) == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))))
                                                 ? 
                                                (7U 
                                                 & (0x911240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode)))))
                                                 : 0U)) 
           | ((IData)(vlSelf->_mc___05Fs3617) == ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))))
                                                   ? 
                                                  (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode)))))
                                                   : 0U)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_61 
        = (((IData)(vlSelf->_mc___05Fs3617) == (IData)(vlSelf->__VdfgTmp_h5b5ca2ab__0)) 
           | ((IData)(vlSelf->_mc___05Fs3617) == (IData)(vlSelf->__VdfgTmp_hac78d6ab__0)));
    vlSelf->_cp___05Fs10864 = ((IData)(vlSelf->_mc___05Fs579) 
                               | (0U != (3U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_size))));
    TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0 
        = ((IData)(vlSelf->_mc___05Fs579) | (3U == 
                                             (3U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_size))));
    vlSelf->TestHarness__DOT__ldut__DOT___clint_domain_auto_clint_in_d_bits_size 
        = ((IData)(vlSelf->_mc___05Fs579) ? 3U : (3U 
                                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_size)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat 
        = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
            >> 2U) & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0)));
    vlSelf->TestHarness__DOT__ldut__DOT___clint_domain_auto_clint_in_d_bits_source 
        = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
            << 4U) | ((8U & ((~ ((IData)(vlSelf->_mc___05Fs581)
                                  ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dToggle)
                                  : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__aToggle_r))) 
                             << 3U)) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0)));
    vlSelf->__VdfgTmp_h3333567c__0 = (0x3fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                               | (0x38U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0) 
                                                       | (0x3ffU 
                                                          & (((IData)(0x3fU) 
                                                              << (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                             >> 3U)))) 
                                                     << 3U))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__drop 
        = ((~ (IData)(vlSelf->_mc___05Fs3407)) & (0U 
                                                  != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0)));
    vlSelf->_cp___05Fs13107 = ((IData)(vlSelf->_mc___05Fs649) 
                               | (0U != (3U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_size))));
    TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT____VdfgTmp_hd3fe7d91__0 
        = ((IData)(vlSelf->_mc___05Fs649) | (3U == 
                                             (3U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_size))));
    vlSelf->TestHarness__DOT__ldut__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size 
        = ((IData)(vlSelf->_mc___05Fs649) ? 3U : (3U 
                                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_size)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat 
        = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
            >> 2U) & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0)));
    vlSelf->TestHarness__DOT__ldut__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_source 
        = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
            << 4U) | ((8U & ((~ ((IData)(vlSelf->_mc___05Fs651)
                                  ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dToggle)
                                  : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aToggle_r))) 
                             << 3U)) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0)));
    vlSelf->__VdfgTmp_h7c9bc648__0 = (0x3fU & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                               | (0x38U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0) 
                                                       | (0x3ffU 
                                                          & (((IData)(0x3fU) 
                                                              << (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                             >> 3U)))) 
                                                     << 3U))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__drop 
        = ((~ (IData)(vlSelf->_mc___05Fs3617)) & (0U 
                                                  != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0)));
    vlSelf->_mc___05Fs379 = vlSelf->_mc___05Fs340;
    vlSelf->_mc___05Fs383 = vlSelf->_mc___05Fs341;
    vlSelf->_mc___05Fs380 = vlSelf->_mc___05Fs342;
    vlSelf->_mc___05Fs382 = vlSelf->_mc___05Fs339;
    TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT___GEN_3 
        = ((((IData)(vlSelf->_mc___05Fs339) << 2U) 
            | (IData)(vlSelf->_mc___05Fs340)) | ((IData)(vlSelf->_mc___05Fs341)
                                                  ? 5U
                                                  : 0U));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__anonIn_d_bits_size 
        = ((IData)(vlSelf->_mc___05Fs607) ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dFirst_size)
            : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dOrig));
    vlSelf->_cp___05Fs5050 = ((IData)(vlSelf->_cp___05Fs4959) 
                              & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter)));
    vlSelf->_cp___05Fs5070 = ((IData)(vlSelf->_cp___05Fs4959) 
                              & (IData)(vlSelf->_mc___05Fs600));
    vlSelf->_cp___05Fs4317 = vlSelf->_cp___05Fs4300;
    vlSelf->_cp___05Fs2913 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_15)));
    vlSelf->_cp___05Fs2949 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_22)));
    vlSelf->_cp___05Fs4637 = vlSelf->_cp___05Fs4626;
    vlSelf->_cp___05Fs4915 = vlSelf->_cp___05Fs4904;
    vlSelf->_cp___05Fs5198 = vlSelf->_cp___05Fs5187;
    vlSelf->_cp___05Fs3221 = vlSelf->_cp___05Fs2947;
    vlSelf->_cp___05Fs4334 = vlSelf->_cp___05Fs2947;
    vlSelf->_cp___05Fs3006 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_33)));
    vlSelf->_cp___05Fs4371 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_23)));
    vlSelf->_cp___05Fs4349 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_19)));
    vlSelf->_cp___05Fs2984 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_29)));
    vlSelf->_cp___05Fs2962 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_25)));
    vlSelf->_cp___05Fs5642 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_53)));
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
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_5) 
             | (IData)(vlSelf->__VdfgTmp_h3ea4d90a__0)) 
            << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_5) 
                        | (IData)(vlSelf->__VdfgTmp_h53fcee55__0)) 
                       << 6U) | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_4) 
                                   | (IData)(vlSelf->__VdfgTmp_h2c078813__0)) 
                                  << 5U) | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_4) 
                                              | (IData)(vlSelf->__VdfgTmp_h210ca893__0)) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_3) 
                                                 | (IData)(vlSelf->__VdfgTmp_h7f037460__0)) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_3) 
                                                    | (IData)(vlSelf->__VdfgTmp_h5ee1e54d__0)) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_2) 
                                                       | (IData)(vlSelf->__VdfgTmp_h1db9e8c3__0)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_2) 
                                                        | (IData)(vlSelf->__VdfgTmp_h801260d9__0)))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
             | (IData)(vlSelf->__VdfgTmp_h3ea4d90a__0)) 
            << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                        | (IData)(vlSelf->__VdfgTmp_h53fcee55__0)) 
                       << 6U) | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                   | (IData)(vlSelf->__VdfgTmp_h2c078813__0)) 
                                  << 5U) | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                              | (IData)(vlSelf->__VdfgTmp_h210ca893__0)) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                 | (IData)(vlSelf->__VdfgTmp_h7f037460__0)) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                    | (IData)(vlSelf->__VdfgTmp_h5ee1e54d__0)) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                       | (IData)(vlSelf->__VdfgTmp_h1db9e8c3__0)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                        | (IData)(vlSelf->__VdfgTmp_h801260d9__0)))))))));
    vlSelf->_cp___05Fs10907 = (1U & (~ (IData)(TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0)));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_30 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_size) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__size));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_55 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_size) 
           == (3U & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                     >> 9U)));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_31 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_source) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__source));
    VL_SHIFTR_WWI(304,304,9, __Vtemp_157, vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_source));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_45[0U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[0U] 
           & __Vtemp_157[0U]);
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_45[1U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[1U] 
           & __Vtemp_157[1U]);
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_45[2U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[2U] 
           & __Vtemp_157[2U]);
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_45[3U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[3U] 
           & __Vtemp_157[3U]);
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_45[4U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[4U] 
           & __Vtemp_157[4U]);
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_45[5U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[5U] 
           & __Vtemp_157[5U]);
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_45[6U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[6U] 
           & __Vtemp_157[6U]);
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_45[7U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[7U] 
           & __Vtemp_157[7U]);
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_45[8U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[8U] 
           & __Vtemp_157[8U]);
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_45[9U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[9U] 
           & __Vtemp_157[9U]);
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_11 
        = ((~ (IData)(vlSelf->_cp___05Fs10939)) & (0x130U 
                                                   > (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_source)));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_50 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_source) 
           == (0x1ffU & vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U]));
    vlSelf->_cp___05Fs10905 = (0x130U <= (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_source));
    vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_address 
        = ((0xfffffc0U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
           | (IData)(vlSelf->__VdfgTmp_h55a20eaf__0));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_3 
        = (7U & ((~ ((IData)(7U) << (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_size))) 
                 & (IData)(vlSelf->__VdfgTmp_h55a20eaf__0)));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & (IData)(vlSelf->__VdfgTmp_h55a20eaf__0))));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & (IData)(vlSelf->__VdfgTmp_h55a20eaf__0))));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & (IData)(vlSelf->__VdfgTmp_h55a20eaf__0))));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & (IData)(vlSelf->__VdfgTmp_h55a20eaf__0))));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc 
        = ((IData)(TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
           | ((~ ((IData)(vlSelf->__VdfgTmp_h55a20eaf__0) 
                  >> 2U)) & (2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_size))));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_1 
        = ((IData)(TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
           | ((2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_size)) 
              & ((IData)(vlSelf->__VdfgTmp_h55a20eaf__0) 
                 >> 2U)));
    vlSelf->_cp___05Fs13403 = (1U & (~ (IData)(TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0)));
    vlSelf->_cp___05Fs13649 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT___bootrom_domain_auto_bootrom_in_d_bits_size));
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_22 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___bootrom_domain_auto_bootrom_in_d_bits_size) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__size));
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_28 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___bootrom_domain_auto_bootrom_in_d_bits_size) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__size_1));
    vlSelf->_cp___05Fs13510 = (3U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT___bootrom_domain_auto_bootrom_in_d_bits_size));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___GEN_0 
        = ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0) 
             << 3U) | (7U & (~ ((IData)(7U) << (IData)(vlSelf->TestHarness__DOT__ldut__DOT___bootrom_domain_auto_bootrom_in_d_bits_size))))) 
           & (0x20U | ((0x1cU & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0)) 
                                 << 2U)) | (3U & (((IData)(7U) 
                                                   << (IData)(vlSelf->TestHarness__DOT__ldut__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                  >> 1U)))));
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_23 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___bootrom_domain_auto_bootrom_in_d_bits_source) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__source));
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_29 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___bootrom_domain_auto_bootrom_in_d_bits_source) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__source_1));
    VL_SHIFTR_WWI(1216,1216,11, __Vtemp_158, vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___bootrom_domain_auto_bootrom_in_d_bits_source) 
                   << 2U));
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_47 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___bootrom_domain_auto_bootrom_in_d_bits_size) 
           == (7U & (__Vtemp_158[0U] >> 1U)));
    VL_SHIFTR_WWI(1216,1216,11, TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_32, vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___bootrom_domain_auto_bootrom_in_d_bits_source) 
                   << 2U));
    VL_SHIFTR_WWI(304,304,9, __Vtemp_159, vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestHarness__DOT__ldut__DOT___bootrom_domain_auto_bootrom_in_d_bits_source));
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_36[0U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[0U] 
           & __Vtemp_159[0U]);
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_36[1U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[1U] 
           & __Vtemp_159[1U]);
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_36[2U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[2U] 
           & __Vtemp_159[2U]);
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_36[3U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[3U] 
           & __Vtemp_159[3U]);
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_36[4U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[4U] 
           & __Vtemp_159[4U]);
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_36[5U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[5U] 
           & __Vtemp_159[5U]);
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_36[6U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[6U] 
           & __Vtemp_159[6U]);
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_36[7U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[7U] 
           & __Vtemp_159[7U]);
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_36[8U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[8U] 
           & __Vtemp_159[8U]);
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_36[9U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[9U] 
           & __Vtemp_159[9U]);
    vlSelf->_cp___05Fs13401 = (0x130U <= (IData)(vlSelf->TestHarness__DOT__ldut__DOT___bootrom_domain_auto_bootrom_in_d_bits_source));
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_3 
        = (7U & ((~ ((IData)(7U) << (IData)(vlSelf->TestHarness__DOT__ldut__DOT___bootrom_domain_auto_bootrom_in_d_bits_size))) 
                 & (IData)(vlSelf->__VdfgTmp_h70e6f20a__0)));
    vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_address 
        = ((0x1ffc0U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
           | (IData)(vlSelf->__VdfgTmp_h70e6f20a__0));
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & (IData)(vlSelf->__VdfgTmp_h70e6f20a__0))));
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & (IData)(vlSelf->__VdfgTmp_h70e6f20a__0))));
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & (IData)(vlSelf->__VdfgTmp_h70e6f20a__0))));
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & (IData)(vlSelf->__VdfgTmp_h70e6f20a__0))));
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc 
        = ((IData)(TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
           | ((~ ((IData)(vlSelf->__VdfgTmp_h70e6f20a__0) 
                  >> 2U)) & (2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___bootrom_domain_auto_bootrom_in_d_bits_size))));
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_1 
        = ((IData)(TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
           | ((2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
              & ((IData)(vlSelf->__VdfgTmp_h70e6f20a__0) 
                 >> 2U)));
    vlSelf->_cp___05Fs4725 = vlSelf->_cp___05Fs10764;
    vlSelf->_cp___05Fs4734 = vlSelf->_cp___05Fs10773;
    vlSelf->_cp___05Fs4774 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_45)));
    vlSelf->_cp___05Fs4803 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_64)));
    vlSelf->_cp___05Fs10813 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_35)));
    vlSelf->_cp___05Fs10838 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_52)));
    vlSelf->_cp___05Fs4799 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_62)));
    vlSelf->_cp___05Fs5286 = vlSelf->_cp___05Fs13007;
    vlSelf->_cp___05Fs5295 = vlSelf->_cp___05Fs13016;
    vlSelf->_cp___05Fs5335 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_44)));
    vlSelf->_cp___05Fs5364 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_63)));
    vlSelf->_cp___05Fs13081 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_50)));
    vlSelf->_cp___05Fs5360 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_61)));
    vlSelf->_cp___05Fs10620 = (1U & (~ (IData)(TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0)));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_30 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___clint_domain_auto_clint_in_d_bits_size) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__size));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_36 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___clint_domain_auto_clint_in_d_bits_size) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__size_1));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___GEN_0 
        = ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0) 
             << 3U) | (7U & (~ ((IData)(7U) << (IData)(vlSelf->TestHarness__DOT__ldut__DOT___clint_domain_auto_clint_in_d_bits_size))))) 
           & (0x20U | ((0x1cU & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0)) 
                                 << 2U)) | (3U & (((IData)(7U) 
                                                   << (IData)(vlSelf->TestHarness__DOT__ldut__DOT___clint_domain_auto_clint_in_d_bits_size)) 
                                                  >> 1U)))));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_31 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___clint_domain_auto_clint_in_d_bits_source) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__source));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_37 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___clint_domain_auto_clint_in_d_bits_source) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__source_1));
    VL_SHIFTR_WWI(304,304,9, __Vtemp_160, vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__inflight_1, (IData)(vlSelf->TestHarness__DOT__ldut__DOT___clint_domain_auto_clint_in_d_bits_source));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_64[0U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[0U] 
           & __Vtemp_160[0U]);
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_64[1U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[1U] 
           & __Vtemp_160[1U]);
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_64[2U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[2U] 
           & __Vtemp_160[2U]);
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_64[3U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[3U] 
           & __Vtemp_160[3U]);
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_64[4U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[4U] 
           & __Vtemp_160[4U]);
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_64[5U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[5U] 
           & __Vtemp_160[5U]);
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_64[6U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[6U] 
           & __Vtemp_160[6U]);
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_64[7U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[7U] 
           & __Vtemp_160[7U]);
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_64[8U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[8U] 
           & __Vtemp_160[8U]);
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_64[9U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[9U] 
           & __Vtemp_160[9U]);
    VL_SHIFTR_WWI(1216,1216,11, __Vtemp_161, vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___clint_domain_auto_clint_in_d_bits_source) 
                   << 2U));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_56 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___clint_domain_auto_clint_in_d_bits_size) 
           == (7U & (__Vtemp_161[0U] >> 1U)));
    VL_SHIFTR_WWI(1216,1216,11, __Vtemp_162, vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___clint_domain_auto_clint_in_d_bits_source) 
                   << 2U));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_65 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___clint_domain_auto_clint_in_d_bits_size) 
           == (7U & (__Vtemp_162[0U] >> 1U)));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_11 
        = ((~ (IData)(vlSelf->_cp___05Fs10652)) & (0x130U 
                                                   > (IData)(vlSelf->TestHarness__DOT__ldut__DOT___clint_domain_auto_clint_in_d_bits_source)));
    VL_SHIFTR_WWI(1216,1216,11, TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_40, vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___clint_domain_auto_clint_in_d_bits_source) 
                   << 2U));
    VL_SHIFTR_WWI(304,304,9, __Vtemp_163, vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestHarness__DOT__ldut__DOT___clint_domain_auto_clint_in_d_bits_source));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_44[0U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[0U] 
           & __Vtemp_163[0U]);
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_44[1U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[1U] 
           & __Vtemp_163[1U]);
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_44[2U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[2U] 
           & __Vtemp_163[2U]);
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_44[3U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[3U] 
           & __Vtemp_163[3U]);
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_44[4U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[4U] 
           & __Vtemp_163[4U]);
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_44[5U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[5U] 
           & __Vtemp_163[5U]);
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_44[6U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[6U] 
           & __Vtemp_163[6U]);
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_44[7U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[7U] 
           & __Vtemp_163[7U]);
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_44[8U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[8U] 
           & __Vtemp_163[8U]);
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_44[9U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[9U] 
           & __Vtemp_163[9U]);
    vlSelf->_cp___05Fs10618 = (0x130U <= (IData)(vlSelf->TestHarness__DOT__ldut__DOT___clint_domain_auto_clint_in_d_bits_source));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_3 
        = (7U & ((~ ((IData)(7U) << (IData)(vlSelf->TestHarness__DOT__ldut__DOT___clint_domain_auto_clint_in_d_bits_size))) 
                 & (IData)(vlSelf->__VdfgTmp_h3333567c__0)));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & (IData)(vlSelf->__VdfgTmp_h3333567c__0))));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & (IData)(vlSelf->__VdfgTmp_h3333567c__0))));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & (IData)(vlSelf->__VdfgTmp_h3333567c__0))));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & (IData)(vlSelf->__VdfgTmp_h3333567c__0))));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc 
        = ((IData)(TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
           | ((~ ((IData)(vlSelf->__VdfgTmp_h3333567c__0) 
                  >> 2U)) & (2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___clint_domain_auto_clint_in_d_bits_size))));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_1 
        = ((IData)(TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
           | ((2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___clint_domain_auto_clint_in_d_bits_size)) 
              & ((IData)(vlSelf->__VdfgTmp_h3333567c__0) 
                 >> 2U)));
    vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_address 
        = ((0x3ffffc0U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
           | (IData)(vlSelf->__VdfgTmp_h3333567c__0));
    vlSelf->_cp___05Fs12863 = (1U & (~ (IData)(TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT____VdfgTmp_hd3fe7d91__0)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___GEN_0 
        = ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0) 
             << 3U) | (7U & (~ ((IData)(7U) << (IData)(vlSelf->TestHarness__DOT__ldut__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size))))) 
           & (0x20U | ((0x1cU & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0)) 
                                 << 2U)) | (3U & (((IData)(7U) 
                                                   << (IData)(vlSelf->TestHarness__DOT__ldut__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
                                                  >> 1U)))));
    vlSelf->_cp___05Fs12861 = (0x130U <= (IData)(vlSelf->TestHarness__DOT__ldut__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_source));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_3 
        = (7U & ((~ ((IData)(7U) << (IData)(vlSelf->TestHarness__DOT__ldut__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size))) 
                 & (IData)(vlSelf->__VdfgTmp_h7c9bc648__0)));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_2 
        = (IData)((0U == (6U & (IData)(vlSelf->__VdfgTmp_h7c9bc648__0))));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_3 
        = (IData)((2U == (6U & (IData)(vlSelf->__VdfgTmp_h7c9bc648__0))));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_4 
        = (IData)((4U == (6U & (IData)(vlSelf->__VdfgTmp_h7c9bc648__0))));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_5 
        = (IData)((6U == (6U & (IData)(vlSelf->__VdfgTmp_h7c9bc648__0))));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc 
        = ((IData)(TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT____VdfgTmp_hd3fe7d91__0) 
           | ((~ ((IData)(vlSelf->__VdfgTmp_h7c9bc648__0) 
                  >> 2U)) & (2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size))));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_1 
        = ((IData)(TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT____VdfgTmp_hd3fe7d91__0) 
           | ((2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
              & ((IData)(vlSelf->__VdfgTmp_h7c9bc648__0) 
                 >> 2U)));
    vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address 
        = ((0xfc0U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address)) 
           | (IData)(vlSelf->__VdfgTmp_h7c9bc648__0));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__a_id 
        = ((4U & (IData)(TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT___GEN_3)) 
           | (3U & ((IData)(TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT___GEN_3) 
                    | (((IData)(vlSelf->_mc___05Fs342) 
                        << 1U) | (- (IData)((IData)(vlSelf->_mc___05Fs343)))))));
    vlSelf->_cp___05Fs5105 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__anonIn_d_bits_size));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_45 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__anonIn_d_bits_size) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__size_1));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_64 
        = ((7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 6U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__anonIn_d_bits_size));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_165, vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes, 
                  (0x7cU & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                            >> 2U)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_66 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__anonIn_d_bits_size) 
           == (7U & (__Vtemp_165[0U] >> 1U)));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_168, vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1, 
                  (0x7cU & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                            >> 2U)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_76 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__anonIn_d_bits_size) 
           == (7U & (__Vtemp_168[0U] >> 1U)));
    vlSelf->_cp___05Fs4966 = (2U >= (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__anonIn_d_bits_size));
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
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_27 
        = (0xffU & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask)) 
                    & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                        << 0x15U) | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                     >> 0xbU))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_23 
        = ((0xffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                     >> 0xbU)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_21 
        = (0xffU & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask)) 
                    & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                        << 0x15U) | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                     >> 0xbU))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_17 
        = ((0xffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                     >> 0xbU)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask));
    vlSelf->_cp___05Fs10924 = vlSelf->_cp___05Fs10907;
    vlSelf->_cp___05Fs11091 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_30)));
    vlSelf->_cp___05Fs11127 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_55)));
    vlSelf->_cp___05Fs11093 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_31)));
    vlSelf->_cp___05Fs11117 = (1U & vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_45[0U]);
    vlSelf->_cp___05Fs10952 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_11)));
    vlSelf->_cp___05Fs10922 = vlSelf->_cp___05Fs10905;
    vlSelf->_cp___05Fs10937 = vlSelf->_cp___05Fs10905;
    vlSelf->_cp___05Fs10941 = vlSelf->_cp___05Fs10905;
    vlSelf->_cp___05Fs10954 = vlSelf->_cp___05Fs10905;
    vlSelf->_cp___05Fs10965 = vlSelf->_cp___05Fs10905;
    vlSelf->_cp___05Fs10976 = vlSelf->_cp___05Fs10905;
    vlSelf->_cp___05Fs10987 = vlSelf->_cp___05Fs10905;
    vlSelf->_cp___05Fs10998 = vlSelf->_cp___05Fs10905;
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_32 
        = (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__address 
           == vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_address);
    vlSelf->_cp___05Fs10909 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_3));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc) 
           | ((1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_size)) 
              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_2)));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc) 
           | ((1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_size)) 
              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_3)));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_size)) 
              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_4)));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_size)) 
              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_5)));
    vlSelf->_cp___05Fs13420 = vlSelf->_cp___05Fs13403;
    vlSelf->_cp___05Fs13587 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_22)));
    vlSelf->_cp___05Fs13600 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_28)));
    vlSelf->_cp___05Fs13523 = vlSelf->_cp___05Fs13510;
    vlSelf->_cp___05Fs13538 = vlSelf->_cp___05Fs13510;
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___GEN_1 
        = (7U & ((3U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___GEN_0) 
                        >> 4U)) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___GEN_0)));
    vlSelf->_cp___05Fs13589 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_23)));
    vlSelf->_cp___05Fs13602 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_29)));
    vlSelf->_cp___05Fs13627 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_47)));
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_45 
        = ((1U == ((0x17U >= (0x1fU & ((IData)(3U) 
                                       * (7U & (TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_32[0U] 
                                                >> 1U)))))
                    ? (7U & (0x911240U >> (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               (TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_32[0U] 
                                                >> 1U))))))
                    : 0U)) | (1U == ((0x17U >= (0x1fU 
                                                & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_32[0U] 
                                                       >> 1U)))))
                                      ? (7U & (0x951240U 
                                               >> (0x1fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (7U 
                                                       & (TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_32[0U] 
                                                          >> 1U))))))
                                      : 0U)));
    vlSelf->_cp___05Fs13613 = (1U & vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_36[0U]);
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
    vlSelf->_cp___05Fs13405 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_3));
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_24 
        = (vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__address 
           == vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_address);
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc) 
           | ((1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_2)));
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc) 
           | ((1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_3)));
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_4)));
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_5)));
    vlSelf->_cp___05Fs10637 = vlSelf->_cp___05Fs10620;
    vlSelf->_cp___05Fs10727 = vlSelf->_cp___05Fs10620;
    vlSelf->_cp___05Fs10740 = vlSelf->_cp___05Fs10620;
    vlSelf->_cp___05Fs10755 = vlSelf->_cp___05Fs10620;
    vlSelf->_cp___05Fs10804 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_30)));
    vlSelf->_cp___05Fs10817 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_36)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___GEN_1 
        = (7U & ((3U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___GEN_0) 
                        >> 4U)) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___GEN_0)));
    vlSelf->_cp___05Fs10806 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_31)));
    vlSelf->_cp___05Fs10819 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_37)));
    vlSelf->_cp___05Fs10861 = (1U & (~ vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_64[0U]));
    vlSelf->_cp___05Fs10844 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_56)));
    vlSelf->_cp___05Fs10866 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_65)));
    vlSelf->_cp___05Fs10665 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_11)));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_54 
        = (((IData)(vlSelf->_mc___05Fs3407) == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_40[0U] 
                                                         >> 1U)))))
                                                 ? 
                                                (7U 
                                                 & (0x911240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * 
                                                        (7U 
                                                         & (TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_40[0U] 
                                                            >> 1U))))))
                                                 : 0U)) 
           | ((IData)(vlSelf->_mc___05Fs3407) == ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * 
                                                       (7U 
                                                        & (TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_40[0U] 
                                                           >> 1U)))))
                                                   ? 
                                                  (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_40[0U] 
                                                              >> 1U))))))
                                                   : 0U)));
    vlSelf->_cp___05Fs10830 = (1U & vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_44[0U]);
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
    vlSelf->_cp___05Fs10622 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_3));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc) 
           | ((1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___clint_domain_auto_clint_in_d_bits_size)) 
              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_2)));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc) 
           | ((1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___clint_domain_auto_clint_in_d_bits_size)) 
              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_3)));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___clint_domain_auto_clint_in_d_bits_size)) 
              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_4)));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___clint_domain_auto_clint_in_d_bits_size)) 
              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_5)));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_32 
        = (vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__address 
           == vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_address);
    vlSelf->_mc___05Fs3439 = (1U & ((8U | (((IData)(
                                                    (0x7ffU 
                                                     == 
                                                     (0x7ffU 
                                                      & (vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_address 
                                                         >> 3U)))) 
                                            << 2U) 
                                           | (3U & 
                                              (- (IData)(
                                                         (0U 
                                                          == 
                                                          (0x7ffU 
                                                           & (vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_address 
                                                              >> 3U)))))))) 
                                    >> (3U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                              >> 0xeU))));
    vlSelf->_cp___05Fs12880 = vlSelf->_cp___05Fs12863;
    vlSelf->_cp___05Fs12970 = vlSelf->_cp___05Fs12863;
    vlSelf->_cp___05Fs12983 = vlSelf->_cp___05Fs12863;
    vlSelf->_cp___05Fs12998 = vlSelf->_cp___05Fs12863;
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___GEN_1 
        = (7U & ((3U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___GEN_0) 
                        >> 4U)) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___GEN_0)));
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
    vlSelf->_cp___05Fs12865 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_3));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc) 
           | ((1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_2)));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc) 
           | ((1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_3)));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_1) 
           | ((1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_4)));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_1) 
           | ((1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_5)));
    vlSelf->_mc___05Fs3670 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_88[
                                    (7U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address) 
                                           >> 8U))] 
                                    >> (0x1fU & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address) 
                                                 >> 3U))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__stall 
        = ((IData)((((0U == (0x6000U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                     & (IData)(vlSelf->_mc___05Fs345)) 
                    & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__flight_0) 
                        | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__flight_1) 
                           | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__flight_2) 
                              | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__flight_3) 
                                 | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__flight_4) 
                                    | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__flight_5) 
                                       | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__flight_6) 
                                          | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__flight_7)))))))) 
                       & ((0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__a_id)) 
                          | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__stalls_id) 
                             != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__a_id)))))) 
           | (IData)((((0x2000U == (0x6000U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                       & (IData)(vlSelf->_mc___05Fs345)) 
                      & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__flight_8) 
                          | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__flight_9) 
                             | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__flight_10) 
                                | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__flight_11) 
                                   | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__flight_12) 
                                      | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__flight_13) 
                                         | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__flight_14) 
                                            | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__flight_15)))))))) 
                         & ((0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__a_id)) 
                            | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__stalls_id_1) 
                               != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__a_id)))))));
    vlSelf->_cp___05Fs5056 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_45)));
    vlSelf->_cp___05Fs5079 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_64)));
    vlSelf->_cp___05Fs5083 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_66)));
    vlSelf->_cp___05Fs5107 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_76)));
    vlSelf->_cp___05Fs4979 = vlSelf->_cp___05Fs4966;
    vlSelf->_cp___05Fs4994 = vlSelf->_cp___05Fs4966;
    vlSelf->_cp___05Fs2981 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_27));
    vlSelf->_cp___05Fs2957 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_23)));
    vlSelf->_cp___05Fs4645 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_21));
    vlSelf->_cp___05Fs4621 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_17)));
    vlSelf->_cp___05Fs10963 = vlSelf->_cp___05Fs10952;
    vlSelf->_cp___05Fs11095 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_32)));
    vlSelf->_cp___05Fs10926 = vlSelf->_cp___05Fs10909;
    vlSelf->_cp___05Fs10943 = vlSelf->_cp___05Fs10909;
    vlSelf->_cp___05Fs10956 = vlSelf->_cp___05Fs10909;
    vlSelf->_cp___05Fs10967 = vlSelf->_cp___05Fs10909;
    vlSelf->_cp___05Fs10978 = vlSelf->_cp___05Fs10909;
    vlSelf->_cp___05Fs10989 = vlSelf->_cp___05Fs10909;
    vlSelf->_cp___05Fs11000 = vlSelf->_cp___05Fs10909;
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_5) 
                & (IData)(vlSelf->__VdfgTmp_h55a20eaf__0))) 
            << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_5) 
                        | ((~ (IData)(vlSelf->__VdfgTmp_h55a20eaf__0)) 
                           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_5))) 
                       << 6U) | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_4) 
                                      & (IData)(vlSelf->__VdfgTmp_h55a20eaf__0))) 
                                  << 5U) | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_4) 
                                              | ((~ (IData)(vlSelf->__VdfgTmp_h55a20eaf__0)) 
                                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_4))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_3) 
                                                    & (IData)(vlSelf->__VdfgTmp_h55a20eaf__0))) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((~ (IData)(vlSelf->__VdfgTmp_h55a20eaf__0)) 
                                                       & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_3))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_2) 
                                                          & (IData)(vlSelf->__VdfgTmp_h55a20eaf__0))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((~ (IData)(vlSelf->__VdfgTmp_h55a20eaf__0)) 
                                                           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_2))))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dFirst_size 
        = (((IData)((0U != (7U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___GEN_0) 
                                  >> 3U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___GEN_1) 
                                     >> 1U)))) << 1U) 
              | (IData)((0U != (5U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___GEN_1))))));
    vlSelf->_cp___05Fs13625 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_45)));
    vlSelf->_cp___05Fs13422 = vlSelf->_cp___05Fs13405;
    vlSelf->_cp___05Fs13439 = vlSelf->_cp___05Fs13405;
    vlSelf->_cp___05Fs13452 = vlSelf->_cp___05Fs13405;
    vlSelf->_cp___05Fs13463 = vlSelf->_cp___05Fs13405;
    vlSelf->_cp___05Fs13474 = vlSelf->_cp___05Fs13405;
    vlSelf->_cp___05Fs13485 = vlSelf->_cp___05Fs13405;
    vlSelf->_cp___05Fs13496 = vlSelf->_cp___05Fs13405;
    vlSelf->_cp___05Fs13591 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_24)));
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_5) 
                & (IData)(vlSelf->__VdfgTmp_h70e6f20a__0))) 
            << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_5) 
                        | ((~ (IData)(vlSelf->__VdfgTmp_h70e6f20a__0)) 
                           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_5))) 
                       << 6U) | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_4) 
                                      & (IData)(vlSelf->__VdfgTmp_h70e6f20a__0))) 
                                  << 5U) | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_4) 
                                              | ((~ (IData)(vlSelf->__VdfgTmp_h70e6f20a__0)) 
                                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_4))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_3) 
                                                    & (IData)(vlSelf->__VdfgTmp_h70e6f20a__0))) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((~ (IData)(vlSelf->__VdfgTmp_h70e6f20a__0)) 
                                                       & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_3))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_2) 
                                                          & (IData)(vlSelf->__VdfgTmp_h70e6f20a__0))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((~ (IData)(vlSelf->__VdfgTmp_h70e6f20a__0)) 
                                                           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_2))))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dFirst_size 
        = (((IData)((0U != (7U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___GEN_0) 
                                  >> 3U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___GEN_1) 
                                     >> 1U)))) << 1U) 
              | (IData)((0U != (5U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___GEN_1))))));
    vlSelf->_cp___05Fs10676 = vlSelf->_cp___05Fs10665;
    vlSelf->_cp___05Fs10842 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_54)));
    vlSelf->_cp___05Fs10639 = vlSelf->_cp___05Fs10622;
    vlSelf->_cp___05Fs10656 = vlSelf->_cp___05Fs10622;
    vlSelf->_cp___05Fs10669 = vlSelf->_cp___05Fs10622;
    vlSelf->_cp___05Fs10680 = vlSelf->_cp___05Fs10622;
    vlSelf->_cp___05Fs10691 = vlSelf->_cp___05Fs10622;
    vlSelf->_cp___05Fs10702 = vlSelf->_cp___05Fs10622;
    vlSelf->_cp___05Fs10713 = vlSelf->_cp___05Fs10622;
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_5) 
                & (IData)(vlSelf->__VdfgTmp_h3333567c__0))) 
            << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_5) 
                        | ((~ (IData)(vlSelf->__VdfgTmp_h3333567c__0)) 
                           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_5))) 
                       << 6U) | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_4) 
                                      & (IData)(vlSelf->__VdfgTmp_h3333567c__0))) 
                                  << 5U) | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_4) 
                                              | ((~ (IData)(vlSelf->__VdfgTmp_h3333567c__0)) 
                                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_4))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_3) 
                                                    & (IData)(vlSelf->__VdfgTmp_h3333567c__0))) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((~ (IData)(vlSelf->__VdfgTmp_h3333567c__0)) 
                                                       & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_3))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_2) 
                                                          & (IData)(vlSelf->__VdfgTmp_h3333567c__0))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((~ (IData)(vlSelf->__VdfgTmp_h3333567c__0)) 
                                                           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_2))))))))));
    vlSelf->_cp___05Fs10808 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_32)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dFirst_size 
        = (((IData)((0U != (7U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___GEN_0) 
                                  >> 3U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___GEN_1) 
                                     >> 1U)))) << 1U) 
              | (IData)((0U != (5U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___GEN_1))))));
    vlSelf->_cp___05Fs12882 = vlSelf->_cp___05Fs12865;
    vlSelf->_cp___05Fs12899 = vlSelf->_cp___05Fs12865;
    vlSelf->_cp___05Fs12912 = vlSelf->_cp___05Fs12865;
    vlSelf->_cp___05Fs12923 = vlSelf->_cp___05Fs12865;
    vlSelf->_cp___05Fs12934 = vlSelf->_cp___05Fs12865;
    vlSelf->_cp___05Fs12945 = vlSelf->_cp___05Fs12865;
    vlSelf->_cp___05Fs12956 = vlSelf->_cp___05Fs12865;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask 
        = ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_5) 
             | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_5) 
                & (IData)(vlSelf->__VdfgTmp_h7c9bc648__0))) 
            << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_5) 
                        | ((~ (IData)(vlSelf->__VdfgTmp_h7c9bc648__0)) 
                           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_5))) 
                       << 6U) | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_4) 
                                      & (IData)(vlSelf->__VdfgTmp_h7c9bc648__0))) 
                                  << 5U) | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_4) 
                                              | ((~ (IData)(vlSelf->__VdfgTmp_h7c9bc648__0)) 
                                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_4))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_3) 
                                                    & (IData)(vlSelf->__VdfgTmp_h7c9bc648__0))) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_3) 
                                                    | ((~ (IData)(vlSelf->__VdfgTmp_h7c9bc648__0)) 
                                                       & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_3))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_2) 
                                                          & (IData)(vlSelf->__VdfgTmp_h7c9bc648__0))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_2) 
                                                        | ((~ (IData)(vlSelf->__VdfgTmp_h7c9bc648__0)) 
                                                           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_2))))))))));
    vlSelf->_cp___05Fs3178 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__stall)) 
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
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_13 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask)) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_mask));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_9 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_mask) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__anonIn_d_bits_size 
        = ((IData)(vlSelf->_mc___05Fs671) ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dFirst_size)
            : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dOrig));
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_11 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask)) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_mask));
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_8 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_mask) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__anonIn_d_bits_size 
        = ((IData)(vlSelf->_mc___05Fs572) ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dFirst_size)
            : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dOrig));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_13 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask)) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_mask));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_9 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_mask) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__anonIn_d_bits_size 
        = ((IData)(vlSelf->_mc___05Fs642) ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dFirst_size)
            : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dOrig));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_11 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask)) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_mask));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_8 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_mask) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask));
    vlSelf->_cp___05Fs3369 = ((IData)(vlSelf->_cp___05Fs3178) 
                              & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter)));
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
    vlSelf->_cp___05Fs10971 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_13));
    vlSelf->_cp___05Fs10947 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_9)));
    vlSelf->_cp___05Fs5664 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__anonIn_d_bits_size));
    vlSelf->_cp___05Fs5666 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__anonIn_d_bits_size));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_36 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__anonIn_d_bits_size) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__size_1));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_52 
        = ((7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 6U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__anonIn_d_bits_size));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_171, vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_54 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__anonIn_d_bits_size) 
           == (7U & (__Vtemp_171[0U] >> 1U)));
    vlSelf->_cp___05Fs5527 = (3U > (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__anonIn_d_bits_size));
    vlSelf->_cp___05Fs13467 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_11));
    vlSelf->_cp___05Fs13443 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_8)));
    vlSelf->_cp___05Fs4825 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__anonIn_d_bits_size));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_46 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__anonIn_d_bits_size) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__size_1));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_63 
        = ((7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 6U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__anonIn_d_bits_size));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_174, vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_65 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__anonIn_d_bits_size) 
           == (7U & (__Vtemp_174[0U] >> 1U)));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_177, vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_74 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__anonIn_d_bits_size) 
           == (7U & (__Vtemp_177[0U] >> 1U)));
    vlSelf->_cp___05Fs4688 = (2U >= (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__anonIn_d_bits_size));
    vlSelf->_cp___05Fs10684 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_13));
    vlSelf->_cp___05Fs10660 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_9)));
    vlSelf->_cp___05Fs5386 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__anonIn_d_bits_size));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_45 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__anonIn_d_bits_size) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__size_1));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_62 
        = ((7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 6U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__anonIn_d_bits_size));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_180, vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_64 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__anonIn_d_bits_size) 
           == (7U & (__Vtemp_180[0U] >> 1U)));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_183, vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_73 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__anonIn_d_bits_size) 
           == (7U & (__Vtemp_183[0U] >> 1U)));
    vlSelf->_cp___05Fs5249 = (2U >= (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__anonIn_d_bits_size));
    vlSelf->_cp___05Fs12927 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_11));
    vlSelf->_cp___05Fs12903 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_8)));
    vlSelf->_cp___05Fs4482 = ((IData)(vlSelf->_cp___05Fs4291) 
                              & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter)));
    vlSelf->_cp___05Fs4529 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_63) 
                              & ((IData)(vlSelf->_mc___05Fs539) 
                                 & ((IData)(vlSelf->_cp___05Fs4291) 
                                    & ((~ (IData)(vlSelf->_cp___05Fs4407)) 
                                       & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_67)))));
    vlSelf->_cp___05Fs4481 = ((~ (IData)(vlSelf->_mc___05Fs546)) 
                              & (IData)(vlSelf->_cp___05Fs4291));
    vlSelf->_cp___05Fs4511 = ((IData)(vlSelf->_cp___05Fs4291) 
                              & (IData)(vlSelf->_mc___05Fs539));
    vlSelf->_cp___05Fs5037 = ((IData)(vlSelf->_cp___05Fs4846) 
                              & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)));
    vlSelf->_cp___05Fs5117 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output) 
                              & ((IData)(vlSelf->_cp___05Fs4846) 
                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat)));
    vlSelf->_cp___05Fs5084 = ((IData)(vlSelf->_cp___05Fs5070) 
                              & ((IData)(vlSelf->_mc___05Fs598) 
                                 & ((IData)(vlSelf->_cp___05Fs4846) 
                                    & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_59))));
    vlSelf->_cp___05Fs5036 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output) 
                              & (IData)(vlSelf->_cp___05Fs4846));
    vlSelf->_cp___05Fs5066 = ((IData)(vlSelf->_cp___05Fs4846) 
                              & (IData)(vlSelf->_mc___05Fs598));
    vlSelf->_cp___05Fs10894 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full) 
                               | (IData)(vlSelf->_cp___05Fs4846));
    vlSelf->_cp___05Fs5598 = ((IData)(vlSelf->_cp___05Fs5407) 
                              & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)));
    vlSelf->_cp___05Fs5627 = ((IData)(vlSelf->_cp___05Fs5407) 
                              & (IData)(vlSelf->_mc___05Fs665));
    vlSelf->_cp___05Fs13390 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full) 
                               | (IData)(vlSelf->_cp___05Fs5407));
    vlSelf->_cp___05Fs4759 = ((IData)(vlSelf->_cp___05Fs4568) 
                              & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)));
    vlSelf->_cp___05Fs4788 = ((IData)(vlSelf->_cp___05Fs4568) 
                              & (IData)(vlSelf->_mc___05Fs563));
    vlSelf->_cp___05Fs10607 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full) 
                               | (IData)(vlSelf->_cp___05Fs4568));
    vlSelf->_cp___05Fs5320 = ((IData)(vlSelf->_cp___05Fs5129) 
                              & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)));
    vlSelf->_cp___05Fs5349 = ((IData)(vlSelf->_cp___05Fs5129) 
                              & (IData)(vlSelf->_mc___05Fs633));
    vlSelf->_cp___05Fs12850 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full) 
                               | (IData)(vlSelf->_cp___05Fs5129));
    vlSelf->_cp___05Fs10960 = vlSelf->_cp___05Fs10947;
    vlSelf->_cp___05Fs10982 = vlSelf->_cp___05Fs10947;
    vlSelf->_cp___05Fs10993 = vlSelf->_cp___05Fs10947;
    vlSelf->_cp___05Fs11004 = vlSelf->_cp___05Fs10947;
    vlSelf->_cp___05Fs5617 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_36)));
    vlSelf->_cp___05Fs5640 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_52)));
    vlSelf->_cp___05Fs5644 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_54)));
    vlSelf->_cp___05Fs5540 = vlSelf->_cp___05Fs5527;
    vlSelf->_cp___05Fs5555 = vlSelf->_cp___05Fs5527;
    vlSelf->_cp___05Fs13456 = vlSelf->_cp___05Fs13443;
    vlSelf->_cp___05Fs13478 = vlSelf->_cp___05Fs13443;
    vlSelf->_cp___05Fs13489 = vlSelf->_cp___05Fs13443;
    vlSelf->_cp___05Fs13500 = vlSelf->_cp___05Fs13443;
    vlSelf->_cp___05Fs4778 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_46)));
    vlSelf->_cp___05Fs4801 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_63)));
    vlSelf->_cp___05Fs4805 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_65)));
    vlSelf->_cp___05Fs4827 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_74)));
    vlSelf->_cp___05Fs4701 = vlSelf->_cp___05Fs4688;
    vlSelf->_cp___05Fs4716 = vlSelf->_cp___05Fs4688;
    vlSelf->_cp___05Fs10673 = vlSelf->_cp___05Fs10660;
    vlSelf->_cp___05Fs10695 = vlSelf->_cp___05Fs10660;
    vlSelf->_cp___05Fs10706 = vlSelf->_cp___05Fs10660;
    vlSelf->_cp___05Fs10717 = vlSelf->_cp___05Fs10660;
    vlSelf->_cp___05Fs5339 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_45)));
    vlSelf->_cp___05Fs5362 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_62)));
    vlSelf->_cp___05Fs5366 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_64)));
    vlSelf->_cp___05Fs5388 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_73)));
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
        vlSelf->_cp___05Fs4520 = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_67;
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready 
            = (0x7ffffU & ((IData)(1U) << (0x1fU & 
                                           (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))));
    } else {
        vlSelf->_cp___05Fs4520 = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready = 0U;
    }
    vlSelf->_cp___05Fs5064 = vlSelf->_cp___05Fs5036;
    vlSelf->_cp___05Fs5048 = ((IData)(vlSelf->_mc___05Fs594) 
                              & (IData)(vlSelf->_cp___05Fs5036));
    vlSelf->_cp___05Fs5067 = ((IData)(vlSelf->_cp___05Fs5036) 
                              & (IData)(vlSelf->_mc___05Fs598));
    if (vlSelf->_cp___05Fs5066) {
        vlSelf->_cp___05Fs5075 = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_59;
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_set_wo_ready 
            = (0x7ffffU & ((IData)(1U) << (0x1fU & 
                                           (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))));
    } else {
        vlSelf->_cp___05Fs5075 = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_set_wo_ready = 0U;
    }
    vlSelf->_cp___05Fs11085 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_first_counter) 
                               & (IData)(vlSelf->_cp___05Fs10894));
    vlSelf->_cp___05Fs5118 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__full)) 
                              & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat)) 
                                 & (IData)(vlSelf->_cp___05Fs10894)));
    vlSelf->_cp___05Fs11132 = ((IData)(vlSelf->_cp___05Fs11118) 
                               & ((IData)(vlSelf->_mc___05Fs3446) 
                                  & ((IData)(vlSelf->_cp___05Fs10894) 
                                     & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_50))));
    vlSelf->_cp___05Fs11114 = ((IData)(vlSelf->_mc___05Fs3446) 
                               & (IData)(vlSelf->_cp___05Fs10894));
    vlSelf->_cp___05Fs11084 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__full)) 
                               & (IData)(vlSelf->_cp___05Fs10894));
    vlSelf->_cp___05Fs5636 = ((IData)(vlSelf->_cp___05Fs5627) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_47));
    vlSelf->_cp___05Fs13503 = vlSelf->_cp___05Fs13390;
    vlSelf->_cp___05Fs5520 = vlSelf->_cp___05Fs13390;
    vlSelf->_cp___05Fs13581 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__a_first_counter) 
                               & (IData)(vlSelf->_cp___05Fs13390));
    vlSelf->_cp___05Fs13594 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__d_first_counter) 
                               & (IData)(vlSelf->_cp___05Fs13390));
    vlSelf->_cp___05Fs5611 = ((IData)(vlSelf->_cp___05Fs13390) 
                              & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter)));
    vlSelf->_cp___05Fs13614 = ((IData)(vlSelf->_mc___05Fs3678) 
                               & (IData)(vlSelf->_cp___05Fs13390));
    vlSelf->_cp___05Fs5631 = ((IData)(vlSelf->_cp___05Fs13390) 
                              & (IData)(vlSelf->_mc___05Fs666));
    vlSelf->_cp___05Fs13610 = ((IData)(vlSelf->_mc___05Fs3677) 
                               & (IData)(vlSelf->_cp___05Fs13390));
    vlSelf->_cp___05Fs4797 = ((IData)(vlSelf->_cp___05Fs4788) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_58));
    vlSelf->_cp___05Fs10720 = vlSelf->_cp___05Fs10607;
    vlSelf->_cp___05Fs10798 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__a_first_counter) 
                               & (IData)(vlSelf->_cp___05Fs10607));
    vlSelf->_cp___05Fs10811 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__d_first_counter) 
                               & (IData)(vlSelf->_cp___05Fs10607));
    vlSelf->_cp___05Fs10831 = ((IData)(vlSelf->_mc___05Fs3412) 
                               & (IData)(vlSelf->_cp___05Fs10607));
    vlSelf->_cp___05Fs10827 = ((IData)(vlSelf->_mc___05Fs3410) 
                               & (IData)(vlSelf->_cp___05Fs10607));
    vlSelf->_cp___05Fs4681 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__drop)) 
                              & (IData)(vlSelf->_cp___05Fs10607));
    vlSelf->_cp___05Fs5358 = ((IData)(vlSelf->_cp___05Fs5349) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_57));
    vlSelf->_cp___05Fs12963 = vlSelf->_cp___05Fs12850;
    vlSelf->_cp___05Fs5242 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__drop)) 
                              & (IData)(vlSelf->_cp___05Fs12850));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_70 
        = (1U & ((0x7ffffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight 
                              >> (0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                           >> 9U)))) 
                 | (IData)(vlSelf->_cp___05Fs4520)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_78 
        = ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready 
            != ((IData)(vlSelf->_cp___05Fs4515) ? (0x7ffffU 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (0x1fU 
                                                       & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 9U))))
                 : 0U)) | (0U == vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_62 
        = (1U & ((0x7ffffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight 
                              >> (0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                           >> 4U)))) 
                 | (IData)(vlSelf->_cp___05Fs5075)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_69 
        = ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_set_wo_ready 
            != ((IData)(vlSelf->_cp___05Fs5070) ? (0x7ffffU 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (0x1fU 
                                                       & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                                          >> 4U))))
                 : 0U)) | (0U == vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_set_wo_ready));
    vlSelf->_cp___05Fs11123 = ((IData)(vlSelf->_cp___05Fs11114) 
                               & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_50));
    VL_SHIFTL_WWI(304,304,9, __Vtemp_185, VTestHarness__ConstPool__CONST_h2dc653e5_0, (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_source));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[0U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[0U] 
           & ((IData)(vlSelf->_cp___05Fs11114) ? __Vtemp_185[0U]
               : VTestHarness__ConstPool__CONST_h7c08bc10_0[0U]));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[1U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[1U] 
           & ((IData)(vlSelf->_cp___05Fs11114) ? __Vtemp_185[1U]
               : VTestHarness__ConstPool__CONST_h7c08bc10_0[1U]));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[2U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[2U] 
           & ((IData)(vlSelf->_cp___05Fs11114) ? __Vtemp_185[2U]
               : VTestHarness__ConstPool__CONST_h7c08bc10_0[2U]));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[3U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[3U] 
           & ((IData)(vlSelf->_cp___05Fs11114) ? __Vtemp_185[3U]
               : VTestHarness__ConstPool__CONST_h7c08bc10_0[3U]));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[4U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[4U] 
           & ((IData)(vlSelf->_cp___05Fs11114) ? __Vtemp_185[4U]
               : VTestHarness__ConstPool__CONST_h7c08bc10_0[4U]));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[5U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[5U] 
           & ((IData)(vlSelf->_cp___05Fs11114) ? __Vtemp_185[5U]
               : VTestHarness__ConstPool__CONST_h7c08bc10_0[5U]));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[6U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[6U] 
           & ((IData)(vlSelf->_cp___05Fs11114) ? __Vtemp_185[6U]
               : VTestHarness__ConstPool__CONST_h7c08bc10_0[6U]));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[7U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[7U] 
           & ((IData)(vlSelf->_cp___05Fs11114) ? __Vtemp_185[7U]
               : VTestHarness__ConstPool__CONST_h7c08bc10_0[7U]));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[8U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[8U] 
           & ((IData)(vlSelf->_cp___05Fs11114) ? __Vtemp_185[8U]
               : VTestHarness__ConstPool__CONST_h7c08bc10_0[8U]));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[9U] 
        = (VTestHarness__ConstPool__CONST_h3c9e891d_0[9U] 
           & ((IData)(vlSelf->_cp___05Fs11114) ? __Vtemp_185[9U]
               : VTestHarness__ConstPool__CONST_h7c08bc10_0[9U]));
    vlSelf->_cp___05Fs11112 = vlSelf->_cp___05Fs11084;
    vlSelf->_cp___05Fs11169 = vlSelf->_cp___05Fs11084;
    vlSelf->_cp___05Fs5124 = vlSelf->_cp___05Fs11084;
    vlSelf->_cp___05Fs11096 = ((IData)(vlSelf->_mc___05Fs3442) 
                               & (IData)(vlSelf->_cp___05Fs11084));
    vlSelf->_cp___05Fs11115 = ((IData)(vlSelf->_mc___05Fs3446) 
                               & (IData)(vlSelf->_cp___05Fs11084));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_50 
        = (1U & ((0x7ffffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight 
                              >> (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source))) 
                 | (IData)(vlSelf->_cp___05Fs5636)));
    vlSelf->_cp___05Fs13616 = vlSelf->_cp___05Fs13614;
    vlSelf->_cp___05Fs13628 = ((IData)(vlSelf->_cp___05Fs13614) 
                               & ((IData)(vlSelf->_mc___05Fs3677) 
                                  & (IData)(vlSelf->_cp___05Fs13390)));
    vlSelf->_cp___05Fs5633 = vlSelf->_cp___05Fs5631;
    vlSelf->_cp___05Fs5645 = ((IData)(vlSelf->_cp___05Fs5631) 
                              & ((IData)(vlSelf->_mc___05Fs665) 
                                 & ((IData)(vlSelf->_cp___05Fs5407) 
                                    & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_47))));
    vlSelf->_cp___05Fs13619 = vlSelf->_cp___05Fs13610;
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_61 
        = (1U & ((0x7ffffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight 
                              >> (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source))) 
                 | (IData)(vlSelf->_cp___05Fs4797)));
    vlSelf->_cp___05Fs10833 = vlSelf->_cp___05Fs10831;
    vlSelf->_cp___05Fs10845 = ((IData)(vlSelf->_cp___05Fs10831) 
                               & ((IData)(vlSelf->_mc___05Fs3410) 
                                  & (IData)(vlSelf->_cp___05Fs10607)));
    vlSelf->_cp___05Fs10836 = vlSelf->_cp___05Fs10827;
    vlSelf->_cp___05Fs4772 = ((IData)(vlSelf->_cp___05Fs4681) 
                              & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter)));
    vlSelf->_cp___05Fs4792 = ((IData)(vlSelf->_cp___05Fs4681) 
                              & (IData)(vlSelf->_mc___05Fs565));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_60 
        = (1U & ((0x7ffffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight 
                              >> (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source))) 
                 | (IData)(vlSelf->_cp___05Fs5358)));
    vlSelf->_cp___05Fs5333 = ((IData)(vlSelf->_cp___05Fs5242) 
                              & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter)));
    vlSelf->_cp___05Fs5353 = ((IData)(vlSelf->_cp___05Fs5242) 
                              & (IData)(vlSelf->_mc___05Fs635));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT___GEN_4 
        = ((IData)(vlSelf->_cp___05Fs4404) | ((IData)(vlSelf->_cp___05Fs4681) 
                                              | ((IData)(vlSelf->_cp___05Fs4959) 
                                                 | ((IData)(vlSelf->_cp___05Fs5242) 
                                                    | (IData)(vlSelf->_cp___05Fs13390)))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__readys_valid 
        = (((IData)(vlSelf->_cp___05Fs13390) << 4U) 
           | (((IData)(vlSelf->_cp___05Fs5242) << 3U) 
              | (((IData)(vlSelf->_cp___05Fs4959) << 2U) 
                 | (((IData)(vlSelf->_cp___05Fs4681) 
                     << 1U) | (IData)(vlSelf->_cp___05Fs4404)))));
    vlSelf->_cp___05Fs4519 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_70)));
    vlSelf->_cp___05Fs4533 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_78)));
    vlSelf->_cp___05Fs5074 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_62)));
    vlSelf->_cp___05Fs5088 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_69)));
    VL_SHIFTR_WWI(304,304,9, __Vtemp_187, vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__inflight, 
                  (0x1ffU & vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U]));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_53 
        = (1U & ((VTestHarness__ConstPool__CONST_h3c9e891d_0[0U] 
                  & __Vtemp_187[0U]) | (IData)(vlSelf->_cp___05Fs11123)));
    VL_SHIFTL_WWI(304,304,9, __Vtemp_189, VTestHarness__ConstPool__CONST_h2dc653e5_0, 
                  (0x1ffU & vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U]));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_61 
        = ((0U != ((((((((((vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[0U] 
                            ^ (VTestHarness__ConstPool__CONST_h3c9e891d_0[0U] 
                               & ((IData)(vlSelf->_cp___05Fs11118)
                                   ? __Vtemp_189[0U]
                                   : VTestHarness__ConstPool__CONST_h7c08bc10_0[0U]))) 
                           | (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[1U] 
                              ^ (VTestHarness__ConstPool__CONST_h3c9e891d_0[1U] 
                                 & ((IData)(vlSelf->_cp___05Fs11118)
                                     ? __Vtemp_189[1U]
                                     : VTestHarness__ConstPool__CONST_h7c08bc10_0[1U])))) 
                          | (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[2U] 
                             ^ (VTestHarness__ConstPool__CONST_h3c9e891d_0[2U] 
                                & ((IData)(vlSelf->_cp___05Fs11118)
                                    ? __Vtemp_189[2U]
                                    : VTestHarness__ConstPool__CONST_h7c08bc10_0[2U])))) 
                         | (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[3U] 
                            ^ (VTestHarness__ConstPool__CONST_h3c9e891d_0[3U] 
                               & ((IData)(vlSelf->_cp___05Fs11118)
                                   ? __Vtemp_189[3U]
                                   : VTestHarness__ConstPool__CONST_h7c08bc10_0[3U])))) 
                        | (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[4U] 
                           ^ (VTestHarness__ConstPool__CONST_h3c9e891d_0[4U] 
                              & ((IData)(vlSelf->_cp___05Fs11118)
                                  ? __Vtemp_189[4U]
                                  : VTestHarness__ConstPool__CONST_h7c08bc10_0[4U])))) 
                       | (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[5U] 
                          ^ (VTestHarness__ConstPool__CONST_h3c9e891d_0[5U] 
                             & ((IData)(vlSelf->_cp___05Fs11118)
                                 ? __Vtemp_189[5U] : 
                                VTestHarness__ConstPool__CONST_h7c08bc10_0[5U])))) 
                      | (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[6U] 
                         ^ (VTestHarness__ConstPool__CONST_h3c9e891d_0[6U] 
                            & ((IData)(vlSelf->_cp___05Fs11118)
                                ? __Vtemp_189[6U] : 
                               VTestHarness__ConstPool__CONST_h7c08bc10_0[6U])))) 
                     | (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[7U] 
                        ^ (VTestHarness__ConstPool__CONST_h3c9e891d_0[7U] 
                           & ((IData)(vlSelf->_cp___05Fs11118)
                               ? __Vtemp_189[7U] : 
                              VTestHarness__ConstPool__CONST_h7c08bc10_0[7U])))) 
                    | (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[8U] 
                       ^ (VTestHarness__ConstPool__CONST_h3c9e891d_0[8U] 
                          & ((IData)(vlSelf->_cp___05Fs11118)
                              ? __Vtemp_189[8U] : VTestHarness__ConstPool__CONST_h7c08bc10_0[8U])))) 
                   | (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[9U] 
                      ^ (VTestHarness__ConstPool__CONST_h3c9e891d_0[9U] 
                         & ((IData)(vlSelf->_cp___05Fs11118)
                             ? __Vtemp_189[9U] : VTestHarness__ConstPool__CONST_h7c08bc10_0[9U]))))) 
           | (0U == ((((((((((VTestHarness__ConstPool__CONST_h7c08bc10_0[0U] 
                              ^ vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[0U]) 
                             | (VTestHarness__ConstPool__CONST_h7c08bc10_0[1U] 
                                ^ vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[1U])) 
                            | (VTestHarness__ConstPool__CONST_h7c08bc10_0[2U] 
                               ^ vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[2U])) 
                           | (VTestHarness__ConstPool__CONST_h7c08bc10_0[3U] 
                              ^ vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[3U])) 
                          | (VTestHarness__ConstPool__CONST_h7c08bc10_0[4U] 
                             ^ vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[4U])) 
                         | (VTestHarness__ConstPool__CONST_h7c08bc10_0[5U] 
                            ^ vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[5U])) 
                        | (VTestHarness__ConstPool__CONST_h7c08bc10_0[6U] 
                           ^ vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[6U])) 
                       | (VTestHarness__ConstPool__CONST_h7c08bc10_0[7U] 
                          ^ vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[7U])) 
                      | (VTestHarness__ConstPool__CONST_h7c08bc10_0[8U] 
                         ^ vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[8U])) 
                     | (VTestHarness__ConstPool__CONST_h7c08bc10_0[9U] 
                        ^ vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready[9U]))));
    vlSelf->_cp___05Fs5635 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_50)));
    vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_42 
        = ((IData)(vlSelf->_cp___05Fs13613) | (IData)(vlSelf->_cp___05Fs13619));
    vlSelf->_cp___05Fs4796 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_61)));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_51 
        = ((IData)(vlSelf->_cp___05Fs10830) | (IData)(vlSelf->_cp___05Fs10836));
    vlSelf->_cp___05Fs4794 = vlSelf->_cp___05Fs4792;
    vlSelf->_cp___05Fs4806 = ((IData)(vlSelf->_cp___05Fs4792) 
                              & ((IData)(vlSelf->_mc___05Fs563) 
                                 & ((IData)(vlSelf->_cp___05Fs4568) 
                                    & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_58))));
    vlSelf->_cp___05Fs5357 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_60)));
    vlSelf->_cp___05Fs5355 = vlSelf->_cp___05Fs5353;
    vlSelf->_cp___05Fs5367 = ((IData)(vlSelf->_cp___05Fs5353) 
                              & ((IData)(vlSelf->_mc___05Fs633) 
                                 & ((IData)(vlSelf->_cp___05Fs5129) 
                                    & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_57))));
    vlSelf->_cp___05Fs3446 = ((IData)(vlSelf->_mc___05Fs394) 
                              & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__readys_valid)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT___GEN 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__readys_mask)) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__readys_valid));
    vlSelf->_cp___05Fs11122 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_53)));
    vlSelf->_cp___05Fs11136 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_61)));
    vlSelf->_cp___05Fs13618 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_42)));
    vlSelf->_cp___05Fs10835 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_51)));
    vlSelf->_cp___05Fs3017 = ((IData)(vlSelf->_mc___05Fs395)
                               ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT___GEN_4)
                               : (((IData)(vlSelf->_cp___05Fs4404) 
                                   & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__state_0)) 
                                  | (((IData)(vlSelf->_cp___05Fs4681) 
                                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__state_1)) 
                                     | (((IData)(vlSelf->_cp___05Fs4959) 
                                         & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__state_2)) 
                                        | (((IData)(vlSelf->_cp___05Fs5242) 
                                            & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__state_3)) 
                                           | ((IData)(vlSelf->_cp___05Fs13390) 
                                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__state_4)))))));
    vlSelf->_cp___05Fs3291 = vlSelf->_cp___05Fs3017;
    vlSelf->_cp___05Fs3108 = ((IData)(vlSelf->_cp___05Fs3017) 
                              & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter)));
    vlSelf->_cp___05Fs3382 = ((IData)(vlSelf->_cp___05Fs3017) 
                              & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_69 
        = ((IData)(vlSelf->_cp___05Fs3017) & (IData)(vlSelf->_mc___05Fs334));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_69 
        = ((IData)(vlSelf->_cp___05Fs3017) & (IData)(vlSelf->_mc___05Fs368));
    vlSelf->_cp___05Fs3107 = ((IData)(vlSelf->_cp___05Fs3166) 
                              & (IData)(vlSelf->_cp___05Fs3017));
    TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT___GEN_0 
        = (((0xf0U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT___GEN) 
                      << 4U)) | (((IData)(vlSelf->_cp___05Fs13390) 
                                  << 3U) | (((IData)(vlSelf->_cp___05Fs5242) 
                                             << 2U) 
                                            | (((IData)(vlSelf->_cp___05Fs4959) 
                                                << 1U) 
                                               | (IData)(vlSelf->_cp___05Fs4681))))) 
           | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT___GEN) 
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
    vlSelf->_cp___05Fs3727 = ((IData)(vlSelf->_cp___05Fs3107) 
                              != (IData)(vlSelf->_cp___05Fs3654));
    TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT___GEN_1 
        = (0x7fU & ((IData)(TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT___GEN_0) 
                    | ((0x40U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT___GEN) 
                                 << 2U)) | (0x3fU & 
                                            ((IData)(TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT___GEN_0) 
                                             >> 2U)))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__readys_readys 
        = (0x1fU & (~ (((0x10U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__readys_mask)) 
                        | ((8U & ((0x7ffffff8U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT___GEN) 
                                                  >> 1U)) 
                                  | (0xfffffff8U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__readys_mask)))) 
                           | ((4U & ((0x7fffffcU & 
                                      ((IData)(TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT___GEN_0) 
                                       >> 5U)) | (0xfffffffcU 
                                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__readys_mask)))) 
                              | (3U & (((IData)(TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT___GEN_1) 
                                        >> 5U) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__readys_mask)))))) 
                       & ((IData)(TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT___GEN_1) 
                          | ((0x10U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT___GEN)) 
                             | ((8U & ((IData)(TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT___GEN_0) 
                                       >> 4U)) | (7U 
                                                  & ((IData)(TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT___GEN_1) 
                                                     >> 4U))))))));
    vlSelf->_cp___05Fs4555 = ((IData)(vlSelf->_cp___05Fs3166) 
                              & ((IData)(vlSelf->_mc___05Fs395)
                                  ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__readys_readys)
                                  : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__state_0)));
    vlSelf->_cp___05Fs13652 = ((IData)(vlSelf->_cp___05Fs3166) 
                               & ((IData)(vlSelf->_mc___05Fs395)
                                   ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__readys_readys) 
                                      >> 4U) : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__state_4)));
    vlSelf->_cp___05Fs5110 = ((IData)(vlSelf->_cp___05Fs3166) 
                              & ((IData)(vlSelf->_mc___05Fs395)
                                  ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__readys_readys) 
                                     >> 2U) : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__state_2)));
    vlSelf->_cp___05Fs4830 = ((IData)(vlSelf->_cp___05Fs3166) 
                              & ((IData)(vlSelf->_mc___05Fs395)
                                  ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__state_1)));
    vlSelf->_mc___05Fs392 = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__readys_readys) 
                              >> 3U) & (IData)(vlSelf->_cp___05Fs5242));
    vlSelf->_mc___05Fs393 = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__readys_readys) 
                              >> 4U) & (IData)(vlSelf->_cp___05Fs13390));
    vlSelf->_mc___05Fs391 = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__readys_readys) 
                              >> 2U) & (IData)(vlSelf->_cp___05Fs4959));
    vlSelf->_mc___05Fs390 = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__readys_readys) 
                              >> 1U) & (IData)(vlSelf->_cp___05Fs4681));
    vlSelf->_cp___05Fs5391 = ((IData)(vlSelf->_cp___05Fs3166) 
                              & ((IData)(vlSelf->_mc___05Fs395)
                                  ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__readys_readys) 
                                     >> 3U) : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__state_3)));
    vlSelf->_mc___05Fs389 = ((IData)(vlSelf->_cp___05Fs4404) 
                             & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__readys_readys));
    if (vlSelf->_mc___05Fs395) {
        vlSelf->_mc___05Fs404 = vlSelf->_mc___05Fs392;
        vlSelf->_mc___05Fs405 = vlSelf->_mc___05Fs393;
        vlSelf->_mc___05Fs403 = vlSelf->_mc___05Fs391;
        vlSelf->_mc___05Fs402 = vlSelf->_mc___05Fs390;
        vlSelf->_mc___05Fs401 = vlSelf->_mc___05Fs389;
    } else {
        vlSelf->_mc___05Fs404 = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__state_3;
        vlSelf->_mc___05Fs405 = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__state_4;
        vlSelf->_mc___05Fs403 = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__state_2;
        vlSelf->_mc___05Fs402 = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__state_1;
        vlSelf->_mc___05Fs401 = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__state_0;
    }
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_77 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs4555)) 
                 | (~ (IData)(vlSelf->_mc___05Fs546))));
    vlSelf->_cp___05Fs4494 = ((IData)(vlSelf->_cp___05Fs4404) 
                              & (IData)(vlSelf->_cp___05Fs4555));
    vlSelf->_cp___05Fs5669 = vlSelf->_cp___05Fs13652;
    vlSelf->_cp___05Fs5680 = ((IData)(vlSelf->_cp___05Fs13390) 
                              & (IData)(vlSelf->_cp___05Fs13652));
    vlSelf->_cp___05Fs5674 = ((IData)(vlSelf->_cp___05Fs13652) 
                              & ((~ (IData)((0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0)))) 
                                 & (IData)(vlSelf->_cp___05Fs13390)));
    vlSelf->_cp___05Fs13580 = ((IData)(vlSelf->_cp___05Fs13652) 
                               & (IData)(vlSelf->_cp___05Fs13390));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)) 
           & (IData)(vlSelf->_cp___05Fs13652));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_68 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs5110)) 
                 | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output)));
    vlSelf->_cp___05Fs5049 = ((IData)(vlSelf->_cp___05Fs5110) 
                              & (IData)(vlSelf->_cp___05Fs4959));
    vlSelf->_cp___05Fs11158 = ((IData)(vlSelf->_cp___05Fs5110) 
                               | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__drop));
    vlSelf->_cp___05Fs4771 = ((IData)(vlSelf->_cp___05Fs4830) 
                              & (IData)(vlSelf->_cp___05Fs4681));
    vlSelf->_cp___05Fs10869 = ((IData)(vlSelf->_cp___05Fs4830) 
                               | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__drop));
    vlSelf->_cp___05Fs5332 = ((IData)(vlSelf->_cp___05Fs5391) 
                              & (IData)(vlSelf->_cp___05Fs5242));
    vlSelf->_cp___05Fs13112 = ((IData)(vlSelf->_cp___05Fs5391) 
                               | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__drop));
    vlSelf->_cp___05Fs3450 = (1U & (~ ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT___GEN_4)) 
                                       | ((IData)(vlSelf->_mc___05Fs389) 
                                          | ((IData)(vlSelf->_mc___05Fs390) 
                                             | ((IData)(vlSelf->_mc___05Fs391) 
                                                | ((IData)(vlSelf->_mc___05Fs392) 
                                                   | (IData)(vlSelf->_mc___05Fs393))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__prefixOR_2 
        = ((IData)(vlSelf->_mc___05Fs389) | (IData)(vlSelf->_mc___05Fs390));
    vlSelf->_cp___05Fs4531 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_77)));
    vlSelf->_cp___05Fs4510 = vlSelf->_cp___05Fs4494;
    vlSelf->_cp___05Fs4538 = vlSelf->_cp___05Fs4494;
    vlSelf->_cp___05Fs4561 = vlSelf->_cp___05Fs4494;
    vlSelf->_cp___05Fs4566 = vlSelf->_cp___05Fs4494;
    vlSelf->_cp___05Fs4508 = ((IData)(vlSelf->_mc___05Fs537) 
                              & (IData)(vlSelf->_cp___05Fs4494));
    vlSelf->_cp___05Fs4536 = ((IData)(vlSelf->_cp___05Fs4481) 
                              | (IData)(vlSelf->_cp___05Fs4494));
    vlSelf->_cp___05Fs4544 = ((IData)(vlSelf->_cp___05Fs4494) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h788cf908__0));
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
    vlSelf->_cp___05Fs5673 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output) 
                              & ((IData)(vlSelf->_cp___05Fs5407) 
                                 & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_56 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs13652)) 
                 | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output)));
    vlSelf->_cp___05Fs5597 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output) 
                              & (IData)(vlSelf->_cp___05Fs5407));
    vlSelf->_cp___05Fs5086 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_68)));
    vlSelf->_cp___05Fs5065 = vlSelf->_cp___05Fs5049;
    vlSelf->_cp___05Fs5093 = vlSelf->_cp___05Fs5049;
    vlSelf->_cp___05Fs5116 = vlSelf->_cp___05Fs5049;
    vlSelf->_cp___05Fs5063 = ((IData)(vlSelf->_mc___05Fs596) 
                              & (IData)(vlSelf->_cp___05Fs5049));
    vlSelf->_cp___05Fs5071 = ((IData)(vlSelf->_cp___05Fs5049) 
                              & (IData)(vlSelf->_mc___05Fs600));
    vlSelf->_cp___05Fs5091 = ((IData)(vlSelf->_cp___05Fs5036) 
                              | (IData)(vlSelf->_cp___05Fs5049));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_60 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs11158)) 
                 | (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__full))));
    vlSelf->_cp___05Fs11097 = ((IData)(vlSelf->_cp___05Fs11158) 
                               & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__full));
    vlSelf->_cp___05Fs11170 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__full) 
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
                              & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat)) 
                                 & (IData)(vlSelf->_cp___05Fs10607)));
    vlSelf->_cp___05Fs10797 = ((IData)(vlSelf->_cp___05Fs10869) 
                               & (IData)(vlSelf->_cp___05Fs10607));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full)) 
           & (IData)(vlSelf->_cp___05Fs10869));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT___GEN 
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
                              & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat)) 
                                 & (IData)(vlSelf->_cp___05Fs12850)));
    vlSelf->_cp___05Fs13040 = ((IData)(vlSelf->_cp___05Fs13112) 
                               & (IData)(vlSelf->_cp___05Fs12850));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full)) 
           & (IData)(vlSelf->_cp___05Fs13112));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_87 
        = ((IData)(vlSelf->_cp___05Fs12850) & ((~ (IData)(vlSelf->_mc___05Fs3617)) 
                                               & (IData)(vlSelf->_cp___05Fs13112)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__prefixOR_3 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__prefixOR_2) 
           | (IData)(vlSelf->_mc___05Fs391));
    if (vlSelf->_mc___05Fs401) {
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_sink 
            = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xeU));
        vlSelf->_cp___05Fs3026 = vlSelf->_cp___05Fs4413;
        vlSelf->_cp___05Fs3030 = vlSelf->_cp___05Fs4417;
        vlSelf->_cp___05Fs3028 = vlSelf->_cp___05Fs4415;
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_param 
            = (3U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                     >> 3U));
    } else {
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_sink = 0U;
        vlSelf->_cp___05Fs3026 = 0U;
        vlSelf->_cp___05Fs3030 = 0U;
        vlSelf->_cp___05Fs3028 = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_param = 0U;
    }
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_size 
        = (0xfU & (((IData)(vlSelf->_mc___05Fs401) ? 
                    ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                      << 0x1bU) | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                   >> 5U)) : 0U) | 
                   (((IData)(vlSelf->_mc___05Fs402)
                      ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__anonIn_d_bits_size)
                      : 0U) | (((IData)(vlSelf->_mc___05Fs403)
                                 ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__anonIn_d_bits_size)
                                 : 0U) | (((IData)(vlSelf->_mc___05Fs404)
                                            ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__anonIn_d_bits_size)
                                            : 0U) | 
                                          ((IData)(vlSelf->_mc___05Fs405)
                                            ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__anonIn_d_bits_size)
                                            : 0U))))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode 
        = (7U & (((IData)(vlSelf->_mc___05Fs401) ? 
                  vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]
                   : 0U) | (((IData)(vlSelf->_mc___05Fs402)
                              ? (IData)(vlSelf->_mc___05Fs3407)
                              : 0U) | (((IData)(vlSelf->_mc___05Fs403)
                                         ? (IData)(vlSelf->_mc___05Fs3443)
                                         : 0U) | (((IData)(vlSelf->_mc___05Fs404)
                                                    ? (IData)(vlSelf->_mc___05Fs3617)
                                                    : 0U) 
                                                  | (IData)(vlSelf->_mc___05Fs405))))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source 
        = (0x1fU & (((IData)(vlSelf->_mc___05Fs401)
                      ? ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                          << 0x17U) | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                       >> 9U)) : 0U) 
                    | (((IData)(vlSelf->_mc___05Fs402)
                         ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source)
                         : 0U) | (((IData)(vlSelf->_mc___05Fs403)
                                    ? ((vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                        << 0x1cU) | 
                                       (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                        >> 4U)) : 0U) 
                                  | (((IData)(vlSelf->_mc___05Fs404)
                                       ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source)
                                       : 0U) | ((IData)(vlSelf->_mc___05Fs405)
                                                 ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source)
                                                 : 0U))))));
    vlSelf->_cp___05Fs5647 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_56)));
    vlSelf->_cp___05Fs5625 = vlSelf->_cp___05Fs5597;
    vlSelf->_cp___05Fs5609 = ((IData)(vlSelf->_mc___05Fs663) 
                              & (IData)(vlSelf->_cp___05Fs5597));
    vlSelf->_cp___05Fs5628 = ((IData)(vlSelf->_cp___05Fs5597) 
                              & (IData)(vlSelf->_mc___05Fs665));
    vlSelf->_cp___05Fs5650 = ((IData)(vlSelf->_cp___05Fs5597) 
                              | (IData)(vlSelf->_cp___05Fs13580));
    vlSelf->_cp___05Fs11134 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_60)));
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
    TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN_0 
        = ((IData)(vlSelf->_cp___05Fs11170) & (IData)(vlSelf->_mc___05Fs3443));
    TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN 
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
    vlSelf->_cp___05Fs4834 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output) 
                              & ((IData)(vlSelf->_cp___05Fs4568) 
                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_67 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs4830)) 
                 | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output)));
    vlSelf->_cp___05Fs4758 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output) 
                              & (IData)(vlSelf->_cp___05Fs4568));
    vlSelf->_cp___05Fs10876 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT___GEN) 
                               & (IData)((((0U == (0xc000U 
                                                   & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address)) 
                                           & (0U == 
                                              (0x3ff8U 
                                               & vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_address))) 
                                          & (IData)(vlSelf->_mc___05Fs3416))));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__out_woready_9 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT___GEN) 
           & (IData)(((0x8000U == (0xc000U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address)) 
                      & (0x3ff8U == (0x3ff8U & vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_address)))));
    vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__out_woready_17 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT___GEN) 
           & (IData)(((0x4000U == (0xc000U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address)) 
                      & (0U == (0x3ff8U & vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_address)))));
    vlSelf->_cp___05Fs13053 = vlSelf->_cp___05Fs13040;
    vlSelf->_cp___05Fs13068 = vlSelf->_cp___05Fs13040;
    vlSelf->_cp___05Fs13069 = vlSelf->_cp___05Fs13040;
    vlSelf->_cp___05Fs13093 = vlSelf->_cp___05Fs13040;
    vlSelf->_cp___05Fs13095 = vlSelf->_cp___05Fs13040;
    vlSelf->_cp___05Fs13115 = vlSelf->_cp___05Fs13040;
    vlSelf->_cp___05Fs5399 = vlSelf->_cp___05Fs13040;
    vlSelf->_cp___05Fs5395 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output) 
                              & ((IData)(vlSelf->_cp___05Fs5129) 
                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_66 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs5391)) 
                 | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output)));
    vlSelf->_cp___05Fs5319 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output) 
                              & (IData)(vlSelf->_cp___05Fs5129));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_a_ready 
        = (((~ (IData)(vlSelf->_mc___05Fs546)) & (IData)(vlSelf->_mc___05Fs340)) 
           | (((IData)(vlSelf->_mc___05Fs342) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output)) 
              | (((IData)(vlSelf->_mc___05Fs343) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output)) 
                 | (((IData)(vlSelf->_mc___05Fs339) 
                     & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output)) 
                    | ((IData)(vlSelf->_mc___05Fs341) 
                       & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_528 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_87) 
           & (IData)(((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                          >> 0xbU)) & (0x100U == (0x7f8U 
                                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_345 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_87) 
           & (IData)(((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                          >> 0xbU)) & (0x108U == (0x7f8U 
                                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_111 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_87) 
           & (IData)(((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                          >> 0xbU)) & (0x370U == (0x7f8U 
                                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_191 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_87) 
           & (IData)(((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                          >> 0xbU)) & (0x350U == (0x7f8U 
                                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_442 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_87) 
           & (IData)(((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                          >> 0xbU)) & (0x368U == (0x7f8U 
                                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_510 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_87) 
           & (IData)(((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                          >> 0xbU)) & (0x348U == (0x7f8U 
                                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_722 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_87) 
           & (IData)(((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                          >> 0xbU)) & (0x360U == (0x7f8U 
                                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_818 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_87) 
           & (IData)(((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                          >> 0xbU)) & (0x380U == (0x7f8U 
                                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_922 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_87) 
           & (IData)(((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                          >> 0xbU)) & (0x340U == (0x7f8U 
                                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1074 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_87) 
           & (IData)(((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                          >> 0xbU)) & (0x358U == (0x7f8U 
                                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1146 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_87) 
           & (IData)(((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                          >> 0xbU)) & (0x378U == (0x7f8U 
                                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address))))));
    vlSelf->_cp___05Fs3448 = (1U & (~ ((~ ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__prefixOR_3) 
                                             | (IData)(vlSelf->_mc___05Fs392)) 
                                            & (IData)(vlSelf->_mc___05Fs393)) 
                                           | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__prefixOR_3) 
                                               & (IData)(vlSelf->_mc___05Fs392)) 
                                              | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__prefixOR_2) 
                                                 & (IData)(vlSelf->_mc___05Fs391))))) 
                                       & (~ ((IData)(vlSelf->_mc___05Fs389) 
                                             & (IData)(vlSelf->_mc___05Fs390))))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_60 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_sink) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__sink));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_60 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_sink) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__sink));
    vlSelf->_cp___05Fs3065 = vlSelf->_cp___05Fs3026;
    vlSelf->_cp___05Fs3074 = vlSelf->_cp___05Fs3026;
    vlSelf->_cp___05Fs3083 = vlSelf->_cp___05Fs3026;
    vlSelf->_cp___05Fs3300 = vlSelf->_cp___05Fs3026;
    vlSelf->_cp___05Fs3339 = vlSelf->_cp___05Fs3026;
    vlSelf->_cp___05Fs3348 = vlSelf->_cp___05Fs3026;
    vlSelf->_cp___05Fs3357 = vlSelf->_cp___05Fs3026;
    vlSelf->_cp___05Fs3304 = vlSelf->_cp___05Fs3030;
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_61 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__denied) 
           == (IData)(vlSelf->_cp___05Fs3030));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_61 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__denied) 
           == (IData)(vlSelf->_cp___05Fs3030));
    vlSelf->_cp___05Fs3043 = vlSelf->_cp___05Fs3028;
    vlSelf->_cp___05Fs3067 = vlSelf->_cp___05Fs3028;
    vlSelf->_cp___05Fs3085 = vlSelf->_cp___05Fs3028;
    vlSelf->_cp___05Fs3302 = vlSelf->_cp___05Fs3028;
    vlSelf->_cp___05Fs3317 = vlSelf->_cp___05Fs3028;
    vlSelf->_cp___05Fs3341 = vlSelf->_cp___05Fs3028;
    vlSelf->_cp___05Fs3359 = vlSelf->_cp___05Fs3028;
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_42 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs3030)) 
                 | (IData)(vlSelf->_cp___05Fs3028)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_57 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_param) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__param_1));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_57 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_param) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__param_1));
    vlSelf->_cp___05Fs3039 = (3U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_param));
    vlSelf->_cp___05Fs3041 = (2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_param));
    vlSelf->_cp___05Fs3161 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_size));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_58 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_size) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__size_1));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_58 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_size) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__size_1));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_77 
        = ((0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                    >> 6U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_size));
    vlSelf->_cp___05Fs3024 = (2U >= (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_size));
    vlSelf->_cp___05Fs3019 = (7U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode));
    vlSelf->_cp___05Fs3031 = (4U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode));
    vlSelf->_cp___05Fs3046 = (5U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode));
    vlSelf->_cp___05Fs3061 = (0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode));
    vlSelf->_cp___05Fs3070 = (1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode));
    vlSelf->_cp___05Fs3079 = (2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_56 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__opcode_1));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_56 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__opcode_1));
    vlSelf->_cp___05Fs3173 = ((IData)(vlSelf->_mc___05Fs347) 
                              & ((6U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode)) 
                                 & (IData)(vlSelf->_cp___05Fs3107)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_76 
        = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode) 
            == (IData)(vlSelf->__VdfgTmp_h5b5ca2ab__0)) 
           | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode) 
              == (IData)(vlSelf->__VdfgTmp_hac78d6ab__0)));
    vlSelf->_mc___05Fs329 = (1U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode));
    vlSelf->_cp___05Fs3020 = (6U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_59 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__source_1));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_88 
        = (0x7ffffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1 
                       >> (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_59 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__source_1));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_88 
        = (0x7ffffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1 
                       >> (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source)));
    VL_SHIFTR_WWI(152,152,8, __Vtemp_193, vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source) 
                   << 3U));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_80 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_size) 
           == (0x7fU & (__Vtemp_193[0U] >> 1U)));
    VL_SHIFTR_WWI(152,152,8, __Vtemp_196, vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source) 
                   << 3U));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_89 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_size) 
           == (0x7fU & (__Vtemp_196[0U] >> 1U)));
    VL_SHIFTR_WWI(152,152,8, __Vtemp_199, vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source) 
                   << 3U));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_80 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_size) 
           == (0x7fU & (__Vtemp_199[0U] >> 1U)));
    VL_SHIFTR_WWI(152,152,8, __Vtemp_202, vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source) 
                   << 3U));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_89 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_size) 
           == (0x7fU & (__Vtemp_202[0U] >> 1U)));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_205, vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source) 
                   << 2U));
    TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_63[0U] 
        = __Vtemp_205[0U];
    TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_63[1U] 
        = __Vtemp_205[1U];
    TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_63[2U] 
        = (0xfffU & __Vtemp_205[2U]);
    VL_SHIFTR_WWI(76,76,7, __Vtemp_207, vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source) 
                   << 2U));
    TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_63[0U] 
        = __Vtemp_207[0U];
    TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_63[1U] 
        = __Vtemp_207[1U];
    TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_63[2U] 
        = (0xfffU & __Vtemp_207[2U]);
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__source_ok_1 
        = ((0U == (3U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source) 
                         >> 3U))) | ((1U == (3U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source) 
                                                   >> 3U))) 
                                     | ((0x10U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source)) 
                                        | ((0x11U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source)) 
                                           | (0x12U 
                                              == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source))))));
    TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_72 
        = ((0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xaU)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source));
    vlSelf->_mc___05Fs3458 = ((IData)(TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN_0) 
                              & ((IData)(vlSelf->_cp___05Fs11194) 
                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT____VdfgTmp_h64ff008c__0)));
    vlSelf->_mc___05Fs3457 = ((IData)(TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN_0) 
                              & ((IData)(vlSelf->_cp___05Fs11193) 
                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT____VdfgTmp_h64ff008c__0)));
    vlSelf->_cp___05Fs11178 = ((IData)(TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN) 
                               & ((IData)(vlSelf->_cp___05Fs11192) 
                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT____VdfgTmp_he21ecb82__0)));
    vlSelf->_cp___05Fs11179 = ((IData)(TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN) 
                               & ((IData)(vlSelf->_cp___05Fs11189) 
                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT____VdfgTmp_he21ecb82__0)));
    vlSelf->_cp___05Fs11186 = ((IData)(TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN) 
                               & ((IData)(vlSelf->_cp___05Fs11191) 
                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT____VdfgTmp_he21ecb82__0)));
    vlSelf->_cp___05Fs11187 = ((IData)(TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN) 
                               & ((IData)(vlSelf->_cp___05Fs11188) 
                                  & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN_10) 
                                     & (IData)(vlSelf->_mc___05Fs3472))));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_woready_8 
        = ((IData)(TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN) 
           & ((IData)(vlSelf->_cp___05Fs11194) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN_10)));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_woready_11 
        = ((IData)(TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN) 
           & ((IData)(vlSelf->_cp___05Fs11193) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN_10)));
    vlSelf->_cp___05Fs4808 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_67)));
    vlSelf->_cp___05Fs4786 = vlSelf->_cp___05Fs4758;
    vlSelf->_cp___05Fs4770 = ((IData)(vlSelf->_mc___05Fs559) 
                              & (IData)(vlSelf->_cp___05Fs4758));
    vlSelf->_cp___05Fs4789 = ((IData)(vlSelf->_cp___05Fs4758) 
                              & (IData)(vlSelf->_mc___05Fs563));
    vlSelf->_cp___05Fs4811 = ((IData)(vlSelf->_cp___05Fs4758) 
                              | (IData)(vlSelf->_cp___05Fs4771));
    vlSelf->_cp___05Fs10877 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__out_woready_9) 
                               & (IData)(vlSelf->_mc___05Fs3416));
    vlSelf->_cp___05Fs10878 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__out_woready_9) 
                               & (IData)(vlSelf->_mc___05Fs3417));
    vlSelf->_cp___05Fs10879 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__out_woready_9) 
                               & (IData)(vlSelf->_mc___05Fs3418));
    vlSelf->_cp___05Fs10880 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__out_woready_9) 
                               & (IData)(vlSelf->_mc___05Fs3419));
    vlSelf->_cp___05Fs10881 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__out_woready_9) 
                               & (IData)(vlSelf->_mc___05Fs3420));
    vlSelf->_cp___05Fs10882 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__out_woready_9) 
                               & (IData)(vlSelf->_mc___05Fs3421));
    vlSelf->_cp___05Fs10883 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__out_woready_9) 
                               & (IData)(vlSelf->_mc___05Fs3422));
    vlSelf->_cp___05Fs10884 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__out_woready_9) 
                               & (IData)(vlSelf->_mc___05Fs3423));
    vlSelf->_cp___05Fs10885 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__out_woready_17) 
                               & (IData)(vlSelf->_mc___05Fs3416));
    vlSelf->_cp___05Fs10886 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__out_woready_17) 
                               & (IData)(vlSelf->_mc___05Fs3417));
    vlSelf->_cp___05Fs10887 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__out_woready_17) 
                               & (IData)(vlSelf->_mc___05Fs3418));
    vlSelf->_cp___05Fs10888 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__out_woready_17) 
                               & (IData)(vlSelf->_mc___05Fs3419));
    vlSelf->_cp___05Fs10889 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__out_woready_17) 
                               & (IData)(vlSelf->_mc___05Fs3420));
    vlSelf->_cp___05Fs10890 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__out_woready_17) 
                               & (IData)(vlSelf->_mc___05Fs3421));
    vlSelf->_cp___05Fs10891 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__out_woready_17) 
                               & (IData)(vlSelf->_mc___05Fs3422));
    vlSelf->_cp___05Fs10892 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__out_woready_17) 
                               & (IData)(vlSelf->_mc___05Fs3423));
    vlSelf->_cp___05Fs5369 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_66)));
    vlSelf->_cp___05Fs5347 = vlSelf->_cp___05Fs5319;
    vlSelf->_cp___05Fs5331 = ((IData)(vlSelf->_mc___05Fs629) 
                              & (IData)(vlSelf->_cp___05Fs5319));
    vlSelf->_cp___05Fs5350 = ((IData)(vlSelf->_cp___05Fs5319) 
                              & (IData)(vlSelf->_mc___05Fs633));
    vlSelf->_cp___05Fs5372 = ((IData)(vlSelf->_cp___05Fs5319) 
                              | (IData)(vlSelf->_cp___05Fs5332));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_82 
        = ((IData)(vlSelf->_mc___05Fs429) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_a_ready));
    vlSelf->_cp___05Fs3368 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_a_ready) 
                              & (IData)(vlSelf->_cp___05Fs3178));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__anonIn_a_ready 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__stall)) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_a_ready));
    vlSelf->_cp___05Fs13287 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_528) 
                               & (0x3ffU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_86)));
    vlSelf->_cp___05Fs13137 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_528) 
                               & (0x3ffU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_85)));
    vlSelf->_cp___05Fs13138 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_345) 
                               & (0x3ffU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_85)));
    vlSelf->_cp___05Fs13377 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_345) 
                               & (0x3ffU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_86)));
    vlSelf->_cp___05Fs13292 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_111) 
                               & (IData)(vlSelf->_mc___05Fs3647));
    vlSelf->_cp___05Fs13293 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_111) 
                               & (IData)(vlSelf->_mc___05Fs3648));
    vlSelf->_cp___05Fs13294 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_111) 
                               & (IData)(vlSelf->_mc___05Fs3649));
    vlSelf->_cp___05Fs13295 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_111) 
                               & (IData)(vlSelf->_mc___05Fs3650));
    vlSelf->_cp___05Fs13296 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_111) 
                               & (IData)(vlSelf->_mc___05Fs3651));
    vlSelf->_cp___05Fs13297 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_111) 
                               & (IData)(vlSelf->_mc___05Fs3652));
    vlSelf->_cp___05Fs13298 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_111) 
                               & (IData)(vlSelf->_mc___05Fs3653));
    vlSelf->_cp___05Fs13299 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_111) 
                               & (IData)(vlSelf->_mc___05Fs3654));
    vlSelf->_cp___05Fs13300 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_191) 
                               & (IData)(vlSelf->_mc___05Fs3647));
    vlSelf->_cp___05Fs13301 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_191) 
                               & (IData)(vlSelf->_mc___05Fs3648));
    vlSelf->_cp___05Fs13302 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_191) 
                               & (IData)(vlSelf->_mc___05Fs3649));
    vlSelf->_cp___05Fs13303 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_191) 
                               & (IData)(vlSelf->_mc___05Fs3650));
    vlSelf->_cp___05Fs13304 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_191) 
                               & (IData)(vlSelf->_mc___05Fs3651));
    vlSelf->_cp___05Fs13305 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_191) 
                               & (IData)(vlSelf->_mc___05Fs3652));
    vlSelf->_cp___05Fs13306 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_191) 
                               & (IData)(vlSelf->_mc___05Fs3653));
    vlSelf->_cp___05Fs13307 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_191) 
                               & (IData)(vlSelf->_mc___05Fs3654));
    vlSelf->_cp___05Fs13308 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_442) 
                               & (IData)(vlSelf->_mc___05Fs3647));
    vlSelf->_cp___05Fs13309 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_442) 
                               & (IData)(vlSelf->_mc___05Fs3648));
    vlSelf->_cp___05Fs13310 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_442) 
                               & (IData)(vlSelf->_mc___05Fs3649));
    vlSelf->_cp___05Fs13311 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_442) 
                               & (IData)(vlSelf->_mc___05Fs3650));
    vlSelf->_cp___05Fs13312 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_442) 
                               & (IData)(vlSelf->_mc___05Fs3651));
    vlSelf->_cp___05Fs13313 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_442) 
                               & (IData)(vlSelf->_mc___05Fs3652));
    vlSelf->_cp___05Fs13314 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_442) 
                               & (IData)(vlSelf->_mc___05Fs3653));
    vlSelf->_cp___05Fs13315 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_442) 
                               & (IData)(vlSelf->_mc___05Fs3654));
    vlSelf->_cp___05Fs13316 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_510) 
                               & (IData)(vlSelf->_mc___05Fs3647));
    vlSelf->_cp___05Fs13317 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_510) 
                               & (IData)(vlSelf->_mc___05Fs3648));
    vlSelf->_cp___05Fs13318 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_510) 
                               & (IData)(vlSelf->_mc___05Fs3649));
    vlSelf->_cp___05Fs13319 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_510) 
                               & (IData)(vlSelf->_mc___05Fs3650));
    vlSelf->_cp___05Fs13320 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_510) 
                               & (IData)(vlSelf->_mc___05Fs3651));
    vlSelf->_cp___05Fs13321 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_510) 
                               & (IData)(vlSelf->_mc___05Fs3652));
    vlSelf->_cp___05Fs13322 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_510) 
                               & (IData)(vlSelf->_mc___05Fs3653));
    vlSelf->_cp___05Fs13323 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_510) 
                               & (IData)(vlSelf->_mc___05Fs3654));
    vlSelf->_cp___05Fs13324 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_722) 
                               & (IData)(vlSelf->_mc___05Fs3647));
    vlSelf->_cp___05Fs13325 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_722) 
                               & (IData)(vlSelf->_mc___05Fs3648));
    vlSelf->_cp___05Fs13326 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_722) 
                               & (IData)(vlSelf->_mc___05Fs3649));
    vlSelf->_cp___05Fs13327 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_722) 
                               & (IData)(vlSelf->_mc___05Fs3650));
    vlSelf->_cp___05Fs13328 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_722) 
                               & (IData)(vlSelf->_mc___05Fs3651));
    vlSelf->_cp___05Fs13329 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_722) 
                               & (IData)(vlSelf->_mc___05Fs3652));
    vlSelf->_cp___05Fs13330 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_722) 
                               & (IData)(vlSelf->_mc___05Fs3653));
    vlSelf->_cp___05Fs13331 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_722) 
                               & (IData)(vlSelf->_mc___05Fs3654));
    vlSelf->_cp___05Fs13332 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_818) 
                               & (IData)(vlSelf->_mc___05Fs3647));
    vlSelf->_cp___05Fs13333 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_818) 
                               & (IData)(vlSelf->_mc___05Fs3648));
    vlSelf->_cp___05Fs13334 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_818) 
                               & (IData)(vlSelf->_mc___05Fs3649));
    vlSelf->_cp___05Fs13335 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_818) 
                               & (IData)(vlSelf->_mc___05Fs3650));
    vlSelf->_cp___05Fs13336 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_818) 
                               & (IData)(vlSelf->_mc___05Fs3651));
    vlSelf->_cp___05Fs13337 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_818) 
                               & (IData)(vlSelf->_mc___05Fs3652));
    vlSelf->_cp___05Fs13338 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_818) 
                               & (IData)(vlSelf->_mc___05Fs3653));
    vlSelf->_cp___05Fs13339 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_818) 
                               & (IData)(vlSelf->_mc___05Fs3654));
    vlSelf->_cp___05Fs13340 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_922) 
                               & (IData)(vlSelf->_mc___05Fs3647));
    vlSelf->_cp___05Fs13341 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_922) 
                               & (IData)(vlSelf->_mc___05Fs3648));
    vlSelf->_cp___05Fs13342 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_922) 
                               & (IData)(vlSelf->_mc___05Fs3649));
    vlSelf->_cp___05Fs13343 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_922) 
                               & (IData)(vlSelf->_mc___05Fs3650));
    vlSelf->_cp___05Fs13344 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_922) 
                               & (IData)(vlSelf->_mc___05Fs3651));
    vlSelf->_cp___05Fs13345 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_922) 
                               & (IData)(vlSelf->_mc___05Fs3652));
    vlSelf->_cp___05Fs13346 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_922) 
                               & (IData)(vlSelf->_mc___05Fs3653));
    vlSelf->_cp___05Fs13347 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_922) 
                               & (IData)(vlSelf->_mc___05Fs3654));
    vlSelf->_cp___05Fs13348 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1074) 
                               & (IData)(vlSelf->_mc___05Fs3647));
    vlSelf->_cp___05Fs13349 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1074) 
                               & (IData)(vlSelf->_mc___05Fs3648));
    vlSelf->_cp___05Fs13350 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1074) 
                               & (IData)(vlSelf->_mc___05Fs3649));
    vlSelf->_cp___05Fs13351 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1074) 
                               & (IData)(vlSelf->_mc___05Fs3650));
    vlSelf->_cp___05Fs13352 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1074) 
                               & (IData)(vlSelf->_mc___05Fs3651));
    vlSelf->_cp___05Fs13353 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1074) 
                               & (IData)(vlSelf->_mc___05Fs3652));
    vlSelf->_cp___05Fs13354 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1074) 
                               & (IData)(vlSelf->_mc___05Fs3653));
    vlSelf->_cp___05Fs13355 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1074) 
                               & (IData)(vlSelf->_mc___05Fs3654));
    vlSelf->_cp___05Fs13356 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1146) 
                               & (IData)(vlSelf->_mc___05Fs3647));
    vlSelf->_cp___05Fs13357 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1146) 
                               & (IData)(vlSelf->_mc___05Fs3648));
    vlSelf->_cp___05Fs13358 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1146) 
                               & (IData)(vlSelf->_mc___05Fs3649));
    vlSelf->_cp___05Fs13359 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1146) 
                               & (IData)(vlSelf->_mc___05Fs3650));
    vlSelf->_cp___05Fs13360 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1146) 
                               & (IData)(vlSelf->_mc___05Fs3651));
    vlSelf->_cp___05Fs13361 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1146) 
                               & (IData)(vlSelf->_mc___05Fs3652));
    vlSelf->_cp___05Fs13362 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1146) 
                               & (IData)(vlSelf->_mc___05Fs3653));
    vlSelf->_cp___05Fs13363 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1146) 
                               & (IData)(vlSelf->_mc___05Fs3654));
    vlSelf->_cp___05Fs3118 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_60)));
    vlSelf->_cp___05Fs3392 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_60)));
    vlSelf->_cp___05Fs3120 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_61)));
    vlSelf->_cp___05Fs3394 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_61)));
    vlSelf->_cp___05Fs3058 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_42)));
    vlSelf->_cp___05Fs3112 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_57)));
    vlSelf->_cp___05Fs3386 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_57)));
    vlSelf->_cp___05Fs3054 = vlSelf->_cp___05Fs3039;
    vlSelf->_cp___05Fs3313 = vlSelf->_cp___05Fs3039;
    vlSelf->_cp___05Fs3328 = vlSelf->_cp___05Fs3039;
    vlSelf->_cp___05Fs3056 = vlSelf->_cp___05Fs3041;
    vlSelf->_cp___05Fs3315 = vlSelf->_cp___05Fs3041;
    vlSelf->_cp___05Fs3330 = vlSelf->_cp___05Fs3041;
    vlSelf->_cp___05Fs3435 = vlSelf->_cp___05Fs3161;
    vlSelf->_cp___05Fs3114 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_58)));
    vlSelf->_cp___05Fs3388 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_58)));
    vlSelf->_cp___05Fs3137 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_77)));
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
    vlSelf->_cp___05Fs3110 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_56)));
    vlSelf->_cp___05Fs3384 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_56)));
    vlSelf->_cp___05Fs3177 = vlSelf->_cp___05Fs3173;
    vlSelf->_cp___05Fs3135 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_76)));
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
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_69));
    vlSelf->_cp___05Fs3402 = ((~ (IData)(vlSelf->_cp___05Fs3020)) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_69));
    TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT____VdfgTmp_h788cf908__0 
        = ((IData)(vlSelf->_mc___05Fs338) & (IData)(vlSelf->_cp___05Fs3020));
    TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT____VdfgTmp_h788cf908__0 
        = ((IData)(vlSelf->_mc___05Fs372) & (IData)(vlSelf->_cp___05Fs3020));
    vlSelf->_cp___05Fs3116 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_59)));
    vlSelf->_cp___05Fs3158 = (1U & (~ vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_88));
    vlSelf->_cp___05Fs3390 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_59)));
    vlSelf->_cp___05Fs3432 = (1U & (~ vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_88));
    vlSelf->_cp___05Fs3141 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_80)));
    vlSelf->_cp___05Fs3163 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_89)));
    vlSelf->_cp___05Fs3415 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_80)));
    vlSelf->_cp___05Fs3437 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_89)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_78 
        = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode) 
            == ((0x17U >= (0x1fU & ((IData)(3U) * (7U 
                                                   & (TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_63[0U] 
                                                      >> 1U)))))
                 ? (7U & (0x911240U >> (0x1fU & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_63[0U] 
                                                     >> 1U))))))
                 : 0U)) | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode) 
                           == ((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_63[0U] 
                                                       >> 1U)))))
                                ? (7U & (0x951240U 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & (TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_63[0U] 
                                                      >> 1U))))))
                                : 0U)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_78 
        = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode) 
            == ((0x17U >= (0x1fU & ((IData)(3U) * (7U 
                                                   & (TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_63[0U] 
                                                      >> 1U)))))
                 ? (7U & (0x911240U >> (0x1fU & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_63[0U] 
                                                     >> 1U))))))
                 : 0U)) | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode) 
                           == ((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_63[0U] 
                                                       >> 1U)))))
                                ? (7U & (0x951240U 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & (TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_63[0U] 
                                                      >> 1U))))))
                                : 0U)));
    vlSelf->_cp___05Fs3022 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__source_ok_1)));
    vlSelf->_cp___05Fs3133 = ((IData)(vlSelf->_cp___05Fs3124) 
                              & (IData)(TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_72));
    vlSelf->_cp___05Fs3407 = ((IData)(vlSelf->_cp___05Fs3398) 
                              & (IData)(TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_72));
    __VdfgTmp_h1c20b598__0 = ((~ (IData)(vlSelf->_cp___05Fs3020)) 
                              & (IData)(TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_72));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN_1 
        = (((IData)(vlSelf->_mc___05Fs3458) << 1U) 
           | (IData)(vlSelf->_mc___05Fs3457));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__claimed 
        = ((IData)(vlSelf->_mc___05Fs3457) & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__maxDevs_0)));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__claiming 
        = (((IData)(vlSelf->_mc___05Fs3457) ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__maxDevs_0)
             : 0U) | ((IData)(vlSelf->_mc___05Fs3458)
                       ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__maxDevs_1)
                       : 0U));
    vlSelf->_cp___05Fs11180 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_woready_8) 
                               & (IData)(vlSelf->_mc___05Fs3468));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__completer_1 
        = (7U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_woready_8) 
                 & ((0xffffffffU == vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN_11) 
                    & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__enables_1_0) 
                        << 1U) >> (3U & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[1U] 
                                         >> 0x18U))))));
    vlSelf->_cp___05Fs11183 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_woready_11) 
                               & (IData)(vlSelf->_mc___05Fs3468));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__completer_0 
        = (7U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_woready_11) 
                 & ((0xffffffffU == vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN_11) 
                    & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__enables_0_0) 
                        << 1U) >> (3U & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[1U] 
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
    vlSelf->_cp___05Fs3418 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_82)));
    vlSelf->_cp___05Fs3396 = vlSelf->_cp___05Fs3368;
    vlSelf->_cp___05Fs3380 = ((IData)(vlSelf->_mc___05Fs362) 
                              & (IData)(vlSelf->_cp___05Fs3368));
    vlSelf->_cp___05Fs3399 = ((IData)(vlSelf->_cp___05Fs3368) 
                              & (IData)(vlSelf->_mc___05Fs366));
    vlSelf->_cp___05Fs3421 = ((IData)(vlSelf->_cp___05Fs3368) 
                              | (IData)(vlSelf->_cp___05Fs3107));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_82 
        = ((IData)(vlSelf->_mc___05Fs429) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__anonIn_a_ready));
    vlSelf->_cp___05Fs3094 = ((IData)(vlSelf->_cp___05Fs2904) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__anonIn_a_ready));
    vlSelf->_cp___05Fs3076 = vlSelf->_cp___05Fs3058;
    vlSelf->_cp___05Fs3332 = vlSelf->_cp___05Fs3058;
    vlSelf->_cp___05Fs3350 = vlSelf->_cp___05Fs3058;
    vlSelf->_cp___05Fs3411 = vlSelf->_cp___05Fs3137;
    vlSelf->_cp___05Fs3409 = vlSelf->_cp___05Fs3135;
    vlSelf->_cp___05Fs3130 = vlSelf->_cp___05Fs3128;
    vlSelf->_cp___05Fs3404 = vlSelf->_cp___05Fs3402;
    vlSelf->_cp___05Fs3155 = ((IData)(vlSelf->_cp___05Fs3107) 
                              & (IData)(TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT____VdfgTmp_h788cf908__0));
    vlSelf->_cp___05Fs3154 = ((IData)(vlSelf->_cp___05Fs3017) 
                              & (IData)(TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT____VdfgTmp_h788cf908__0));
    vlSelf->_cp___05Fs3429 = ((IData)(vlSelf->_cp___05Fs3107) 
                              & (IData)(TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT____VdfgTmp_h788cf908__0));
    vlSelf->_cp___05Fs3428 = ((IData)(vlSelf->_cp___05Fs3017) 
                              & (IData)(TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT____VdfgTmp_h788cf908__0));
    vlSelf->_cp___05Fs3139 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_78)));
    vlSelf->_cp___05Fs3413 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_78)));
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
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_75 
        = (1U & ((0x7ffffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight 
                              >> (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source))) 
                 | (IData)(vlSelf->_cp___05Fs3133)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_75 
        = (1U & ((0x7ffffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight 
                              >> (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source))) 
                 | (IData)(vlSelf->_cp___05Fs3407)));
    vlSelf->_cp___05Fs3142 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_69) 
                              & ((IData)(vlSelf->_mc___05Fs332) 
                                 & ((IData)(vlSelf->_cp___05Fs2904) 
                                    & (IData)(__VdfgTmp_h1c20b598__0))));
    vlSelf->_cp___05Fs3416 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_69) 
                              & ((IData)(vlSelf->_mc___05Fs366) 
                                 & ((IData)(vlSelf->_cp___05Fs3178) 
                                    & (IData)(__VdfgTmp_h1c20b598__0))));
    vlSelf->_cp___05Fs11173 = (0U != ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN_1) 
                                      & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN_1) 
                                         - (IData)(1U))));
    vlSelf->_cp___05Fs11174 = ((1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__claiming)) 
                               | ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__gateways_gateway__DOT__inFlight)) 
                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__ibus_intsink__DOT__chain__DOT__output_chain__DOT__sync_0)));
    vlSelf->_cp___05Fs11175 = ((2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__claiming)) 
                               | ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__gateways_gateway_1__DOT__inFlight)) 
                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__ibus_intsink__DOT__chain__DOT__output_chain_1__DOT__sync_0)));
    vlSelf->_cp___05Fs11202 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__claimed) 
                               | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__completer_0));
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN_5 
        = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__completer_1) 
            << 1U) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__completer_0));
    vlSelf->_mc___05Fs3459 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__completer_0) 
                              | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__completer_1));
    vlSelf->_cp___05Fs3144 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_82)));
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
                              & (0U == (0x6000U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->_cp___05Fs3175 = ((IData)(vlSelf->_cp___05Fs3094) 
                              & (0x2000U == (0x6000U 
                                             & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->_cp___05Fs3724 = ((IData)(vlSelf->_cp___05Fs3641) 
                              != (IData)(vlSelf->_cp___05Fs3094));
    vlSelf->_cp___05Fs3172 = ((IData)(vlSelf->_mc___05Fs345) 
                              & (IData)(vlSelf->_cp___05Fs3094));
    vlSelf->_cp___05Fs3156 = vlSelf->_cp___05Fs3154;
    vlSelf->_cp___05Fs3430 = vlSelf->_cp___05Fs3428;
    vlSelf->_cp___05Fs3132 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_75)));
    vlSelf->_cp___05Fs3406 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_75)));
    vlSelf->_cp___05Fs11203 = vlSelf->_cp___05Fs11202;
    vlSelf->_cp___05Fs11177 = (0U != ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN_5) 
                                      & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT___GEN_5) 
                                         - (IData)(1U))));
    vlSelf->_cp___05Fs11166 = (7U & ((IData)(vlSelf->_mc___05Fs3459) 
                                     & (((IData)(1U) 
                                         << (3U & (
                                                   vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[1U] 
                                                   >> 0x18U))) 
                                        >> 1U)));
    vlSelf->_cp___05Fs11168 = (3U & ((IData)(vlSelf->_mc___05Fs3459) 
                                     & (((IData)(1U) 
                                         << (3U & (
                                                   vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[1U] 
                                                   >> 0x18U))) 
                                        >> 2U)));
    vlSelf->_cp___05Fs3176 = vlSelf->_cp___05Fs3172;
}
