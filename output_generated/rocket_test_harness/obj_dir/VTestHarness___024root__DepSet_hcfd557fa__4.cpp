// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness__pch.h"
#include "VTestHarness___024root.h"

VL_INLINE_OPT void VTestHarness___024root___nba_sequent__TOP__12(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___nba_sequent__TOP__12\n"); );
    // Init
    VlWide<3>/*75:0*/ TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_51;
    VL_ZERO_W(76, TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_51);
    CData/*7:0*/ TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_4;
    TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_4 = 0;
    CData/*7:0*/ TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_6;
    TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_6 = 0;
    CData/*7:0*/ TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_19;
    TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_19 = 0;
    CData/*7:0*/ TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_21;
    TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_21 = 0;
    CData/*7:0*/ TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_119;
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_119 = 0;
    CData/*3:0*/ TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_66;
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_66 = 0;
    CData/*0:0*/ TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__unnamedblk2__DOT___GEN_132;
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__unnamedblk2__DOT___GEN_132 = 0;
    CData/*0:0*/ TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__unnamedblk2__DOT___GEN_133;
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__unnamedblk2__DOT___GEN_133 = 0;
    CData/*0:0*/ TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__unnamedblk1__DOT___GEN_296;
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__unnamedblk1__DOT___GEN_296 = 0;
    IData/*23:0*/ TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h595d38b9__0;
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h595d38b9__0 = 0;
    CData/*0:0*/ TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__unnamedblk1__DOT___GEN_171;
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__unnamedblk1__DOT___GEN_171 = 0;
    SData/*11:0*/ TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_126;
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_126 = 0;
    CData/*4:0*/ TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT___GEN;
    TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT___GEN = 0;
    CData/*0:0*/ TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT____VdfgTmp_h2dd21bce__0;
    TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT____VdfgTmp_h2dd21bce__0 = 0;
    CData/*0:0*/ __VdfgTmp_hdb458410__0;
    __VdfgTmp_hdb458410__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_34;
    VlWide<3>/*95:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_38;
    VlWide<3>/*95:0*/ __Vtemp_39;
    VlWide<3>/*95:0*/ __Vtemp_42;
    VlWide<3>/*95:0*/ __Vtemp_43;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_50;
    VlWide<3>/*95:0*/ __Vtemp_51;
    VlWide<3>/*95:0*/ __Vtemp_54;
    VlWide<3>/*95:0*/ __Vtemp_55;
    VlWide<3>/*95:0*/ __Vtemp_58;
    VlWide<3>/*95:0*/ __Vtemp_59;
    VlWide<3>/*95:0*/ __Vtemp_62;
    VlWide<3>/*95:0*/ __Vtemp_63;
    VlWide<3>/*95:0*/ __Vtemp_66;
    VlWide<3>/*95:0*/ __Vtemp_67;
    VlWide<3>/*95:0*/ __Vtemp_70;
    VlWide<3>/*95:0*/ __Vtemp_71;
    VlWide<3>/*95:0*/ __Vtemp_74;
    VlWide<3>/*95:0*/ __Vtemp_75;
    VlWide<3>/*95:0*/ __Vtemp_78;
    VlWide<3>/*95:0*/ __Vtemp_79;
    VlWide<3>/*95:0*/ __Vtemp_82;
    VlWide<3>/*95:0*/ __Vtemp_83;
    VlWide<3>/*95:0*/ __Vtemp_86;
    VlWide<3>/*95:0*/ __Vtemp_87;
    VlWide<3>/*95:0*/ __Vtemp_90;
    VlWide<3>/*95:0*/ __Vtemp_91;
    VlWide<3>/*95:0*/ __Vtemp_94;
    VlWide<3>/*95:0*/ __Vtemp_95;
    VlWide<3>/*95:0*/ __Vtemp_98;
    VlWide<3>/*95:0*/ __Vtemp_99;
    VlWide<3>/*95:0*/ __Vtemp_101;
    VlWide<3>/*95:0*/ __Vtemp_102;
    VlWide<3>/*95:0*/ __Vtemp_104;
    VlWide<3>/*95:0*/ __Vtemp_105;
    VlWide<3>/*95:0*/ __Vtemp_108;
    VlWide<3>/*95:0*/ __Vtemp_109;
    VlWide<3>/*95:0*/ __Vtemp_112;
    VlWide<3>/*95:0*/ __Vtemp_113;
    VlWide<3>/*95:0*/ __Vtemp_116;
    VlWide<3>/*95:0*/ __Vtemp_117;
    VlWide<3>/*95:0*/ __Vtemp_120;
    VlWide<3>/*95:0*/ __Vtemp_121;
    VlWide<3>/*95:0*/ __Vtemp_124;
    VlWide<3>/*95:0*/ __Vtemp_125;
    VlWide<5>/*159:0*/ __Vtemp_132;
    VlWide<5>/*159:0*/ __Vtemp_135;
    VlWide<3>/*95:0*/ __Vtemp_138;
    VlWide<5>/*159:0*/ __Vtemp_144;
    VlWide<5>/*159:0*/ __Vtemp_147;
    VlWide<3>/*95:0*/ __Vtemp_150;
    VlWide<3>/*95:0*/ __Vtemp_152;
    VlWide<3>/*95:0*/ __Vtemp_153;
    VlWide<3>/*95:0*/ __Vtemp_155;
    VlWide<3>/*95:0*/ __Vtemp_156;
    VlWide<3>/*95:0*/ __Vtemp_159;
    VlWide<3>/*95:0*/ __Vtemp_160;
    VlWide<3>/*95:0*/ __Vtemp_163;
    VlWide<3>/*95:0*/ __Vtemp_164;
    VlWide<3>/*95:0*/ __Vtemp_167;
    VlWide<3>/*95:0*/ __Vtemp_168;
    VlWide<3>/*95:0*/ __Vtemp_171;
    VlWide<3>/*95:0*/ __Vtemp_172;
    VlWide<3>/*95:0*/ __Vtemp_175;
    VlWide<3>/*95:0*/ __Vtemp_176;
    VlWide<3>/*95:0*/ __Vtemp_179;
    VlWide<3>/*95:0*/ __Vtemp_180;
    VlWide<3>/*95:0*/ __Vtemp_183;
    VlWide<3>/*95:0*/ __Vtemp_184;
    VlWide<3>/*95:0*/ __Vtemp_187;
    VlWide<3>/*95:0*/ __Vtemp_188;
    VlWide<3>/*95:0*/ __Vtemp_191;
    VlWide<3>/*95:0*/ __Vtemp_192;
    VlWide<3>/*95:0*/ __Vtemp_195;
    VlWide<3>/*95:0*/ __Vtemp_196;
    VlWide<3>/*95:0*/ __Vtemp_199;
    VlWide<3>/*95:0*/ __Vtemp_200;
    VlWide<3>/*95:0*/ __Vtemp_203;
    VlWide<3>/*95:0*/ __Vtemp_204;
    VlWide<3>/*95:0*/ __Vtemp_207;
    VlWide<3>/*95:0*/ __Vtemp_208;
    VlWide<3>/*95:0*/ __Vtemp_211;
    VlWide<3>/*95:0*/ __Vtemp_212;
    VlWide<3>/*95:0*/ __Vtemp_215;
    VlWide<3>/*95:0*/ __Vtemp_216;
    VlWide<3>/*95:0*/ __Vtemp_219;
    VlWide<3>/*95:0*/ __Vtemp_220;
    VlWide<3>/*95:0*/ __Vtemp_223;
    VlWide<3>/*95:0*/ __Vtemp_224;
    VlWide<3>/*95:0*/ __Vtemp_227;
    VlWide<3>/*95:0*/ __Vtemp_228;
    VlWide<3>/*95:0*/ __Vtemp_231;
    VlWide<3>/*95:0*/ __Vtemp_232;
    VlWide<3>/*95:0*/ __Vtemp_235;
    VlWide<3>/*95:0*/ __Vtemp_236;
    VlWide<3>/*95:0*/ __Vtemp_239;
    VlWide<3>/*95:0*/ __Vtemp_240;
    VlWide<3>/*95:0*/ __Vtemp_243;
    VlWide<3>/*95:0*/ __Vtemp_244;
    VlWide<3>/*95:0*/ __Vtemp_247;
    VlWide<3>/*95:0*/ __Vtemp_248;
    VlWide<3>/*95:0*/ __Vtemp_251;
    VlWide<3>/*95:0*/ __Vtemp_252;
    VlWide<3>/*95:0*/ __Vtemp_255;
    VlWide<3>/*95:0*/ __Vtemp_256;
    VlWide<3>/*95:0*/ __Vtemp_259;
    VlWide<3>/*95:0*/ __Vtemp_260;
    VlWide<3>/*95:0*/ __Vtemp_263;
    VlWide<3>/*95:0*/ __Vtemp_264;
    VlWide<3>/*95:0*/ __Vtemp_267;
    VlWide<3>/*95:0*/ __Vtemp_268;
    VlWide<3>/*95:0*/ __Vtemp_271;
    VlWide<3>/*95:0*/ __Vtemp_272;
    VlWide<3>/*95:0*/ __Vtemp_275;
    VlWide<3>/*95:0*/ __Vtemp_276;
    VlWide<3>/*95:0*/ __Vtemp_279;
    VlWide<3>/*95:0*/ __Vtemp_280;
    VlWide<3>/*95:0*/ __Vtemp_283;
    VlWide<3>/*95:0*/ __Vtemp_284;
    VlWide<3>/*95:0*/ __Vtemp_287;
    VlWide<3>/*95:0*/ __Vtemp_288;
    VlWide<3>/*95:0*/ __Vtemp_291;
    VlWide<3>/*95:0*/ __Vtemp_292;
    VlWide<3>/*95:0*/ __Vtemp_295;
    VlWide<3>/*95:0*/ __Vtemp_296;
    VlWide<3>/*95:0*/ __Vtemp_299;
    VlWide<3>/*95:0*/ __Vtemp_300;
    VlWide<3>/*95:0*/ __Vtemp_303;
    VlWide<3>/*95:0*/ __Vtemp_304;
    VlWide<3>/*95:0*/ __Vtemp_307;
    VlWide<3>/*95:0*/ __Vtemp_308;
    VlWide<3>/*95:0*/ __Vtemp_311;
    VlWide<3>/*95:0*/ __Vtemp_312;
    VlWide<3>/*95:0*/ __Vtemp_315;
    VlWide<3>/*95:0*/ __Vtemp_316;
    VlWide<3>/*95:0*/ __Vtemp_319;
    VlWide<3>/*95:0*/ __Vtemp_320;
    VlWide<3>/*95:0*/ __Vtemp_323;
    VlWide<3>/*95:0*/ __Vtemp_324;
    VlWide<3>/*95:0*/ __Vtemp_327;
    VlWide<3>/*95:0*/ __Vtemp_328;
    VlWide<3>/*95:0*/ __Vtemp_331;
    VlWide<3>/*95:0*/ __Vtemp_332;
    VlWide<3>/*95:0*/ __Vtemp_335;
    VlWide<3>/*95:0*/ __Vtemp_336;
    VlWide<3>/*95:0*/ __Vtemp_339;
    VlWide<3>/*95:0*/ __Vtemp_340;
    VlWide<3>/*95:0*/ __Vtemp_343;
    VlWide<3>/*95:0*/ __Vtemp_344;
    VlWide<3>/*95:0*/ __Vtemp_347;
    VlWide<3>/*95:0*/ __Vtemp_348;
    VlWide<3>/*95:0*/ __Vtemp_351;
    VlWide<3>/*95:0*/ __Vtemp_352;
    VlWide<3>/*95:0*/ __Vtemp_355;
    VlWide<3>/*95:0*/ __Vtemp_356;
    VlWide<3>/*95:0*/ __Vtemp_359;
    VlWide<3>/*95:0*/ __Vtemp_360;
    VlWide<3>/*95:0*/ __Vtemp_363;
    VlWide<3>/*95:0*/ __Vtemp_364;
    VlWide<3>/*95:0*/ __Vtemp_367;
    VlWide<3>/*95:0*/ __Vtemp_368;
    VlWide<3>/*95:0*/ __Vtemp_371;
    VlWide<3>/*95:0*/ __Vtemp_372;
    VlWide<3>/*95:0*/ __Vtemp_375;
    VlWide<3>/*95:0*/ __Vtemp_376;
    VlWide<3>/*95:0*/ __Vtemp_379;
    VlWide<3>/*95:0*/ __Vtemp_380;
    VlWide<3>/*95:0*/ __Vtemp_383;
    VlWide<3>/*95:0*/ __Vtemp_384;
    VlWide<3>/*95:0*/ __Vtemp_387;
    VlWide<3>/*95:0*/ __Vtemp_388;
    VlWide<3>/*95:0*/ __Vtemp_391;
    VlWide<3>/*95:0*/ __Vtemp_392;
    VlWide<3>/*95:0*/ __Vtemp_395;
    VlWide<3>/*95:0*/ __Vtemp_396;
    VlWide<3>/*95:0*/ __Vtemp_399;
    VlWide<3>/*95:0*/ __Vtemp_400;
    VlWide<3>/*95:0*/ __Vtemp_403;
    VlWide<3>/*95:0*/ __Vtemp_404;
    VlWide<3>/*95:0*/ __Vtemp_407;
    VlWide<3>/*95:0*/ __Vtemp_408;
    VlWide<3>/*95:0*/ __Vtemp_411;
    VlWide<3>/*95:0*/ __Vtemp_412;
    VlWide<3>/*95:0*/ __Vtemp_415;
    VlWide<3>/*95:0*/ __Vtemp_416;
    // Body
    vlSelf->_cp___05Fs2463 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT__param));
    vlSelf->_rs___05Fs315 = vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT__param;
    vlSelf->_cp___05Fs2740 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT__param));
    vlSelf->_rs___05Fs346 = vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT__param;
    vlSelf->_mc___05Fs846 = (1U & (~ ((IData)(vlSelf->_mc___05Fs814) 
                                      | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__opcode) 
                                         >> 2U))));
    vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_3_io_out_a_bits_opcode 
        = ((IData)(vlSelf->_mc___05Fs814) ? 4U : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__opcode));
    vlSelf->_mc___05Fs845 = (1U & (~ ((IData)(vlSelf->_mc___05Fs810) 
                                      | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__opcode) 
                                         >> 2U))));
    vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_2_io_out_a_bits_opcode 
        = ((IData)(vlSelf->_mc___05Fs810) ? 4U : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__opcode));
    vlSelf->_mc___05Fs844 = (1U & (~ ((IData)(vlSelf->_mc___05Fs806) 
                                      | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__opcode) 
                                         >> 2U))));
    vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_1_io_out_a_bits_opcode 
        = ((IData)(vlSelf->_mc___05Fs806) ? 4U : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__opcode));
    vlSelf->_mc___05Fs843 = (1U & (~ ((IData)(vlSelf->_mc___05Fs802) 
                                      | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__opcode) 
                                         >> 2U))));
    vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_io_out_a_bits_opcode 
        = ((IData)(vlSelf->_mc___05Fs802) ? 4U : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__opcode));
    vlSelf->_rs___05Fs1076 = vlSelf->_mc___05Fs743;
    vlSelf->_cp___05Fs4221 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__param_1));
    vlSelf->_rs___05Fs591 = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__param_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_23 
        = (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mtvec 
           & (0xffffff00U | ((IData)(vlSelf->_mc___05Fs2801)
                              ? 1U : 0xfdU)));
    vlSelf->__VdfgTmp_ha3a7f1c4__0 = ((~ ((IData)(1U) 
                                          + vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_15)) 
                                      & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_15);
    vlSelf->_mc___05Fs2518 = vlSelf->_mc___05Fs1383;
    vlSelf->_mc___05Fs977 = vlSelf->_mc___05Fs1383;
    vlSelf->_mc___05Fs978 = vlSelf->_mc___05Fs1383;
    vlSelf->__VdfgTmp_hab9e2c62__0 = ((~ ((IData)(1U) 
                                          + vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_21)) 
                                      & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_21);
    vlSelf->_mc___05Fs2578 = vlSelf->_mc___05Fs1371;
    vlSelf->_mc___05Fs959 = vlSelf->_mc___05Fs1371;
    vlSelf->_mc___05Fs960 = vlSelf->_mc___05Fs1371;
    vlSelf->__VdfgTmp_h209cdce3__0 = ((~ ((IData)(1U) 
                                          + vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_17)) 
                                      & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_17);
    vlSelf->_mc___05Fs2538 = vlSelf->_mc___05Fs1379;
    vlSelf->_mc___05Fs971 = vlSelf->_mc___05Fs1379;
    vlSelf->_mc___05Fs972 = vlSelf->_mc___05Fs1379;
    vlSelf->__VdfgTmp_hea86f5fb__0 = ((~ ((IData)(1U) 
                                          + vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_18)) 
                                      & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_18);
    vlSelf->_mc___05Fs2548 = vlSelf->_mc___05Fs1377;
    vlSelf->_mc___05Fs968 = vlSelf->_mc___05Fs1377;
    vlSelf->_mc___05Fs969 = vlSelf->_mc___05Fs1377;
    vlSelf->__VdfgTmp_h54bb3a64__0 = ((~ ((IData)(1U) 
                                          + vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_16)) 
                                      & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_16);
    vlSelf->_mc___05Fs2528 = vlSelf->_mc___05Fs1381;
    vlSelf->_mc___05Fs974 = vlSelf->_mc___05Fs1381;
    vlSelf->_mc___05Fs975 = vlSelf->_mc___05Fs1381;
    vlSelf->__VdfgTmp_h7c2ed6a4__0 = ((~ ((IData)(1U) 
                                          + vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_19)) 
                                      & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_19);
    vlSelf->_mc___05Fs2558 = vlSelf->_mc___05Fs1375;
    vlSelf->_mc___05Fs965 = vlSelf->_mc___05Fs1375;
    vlSelf->_mc___05Fs966 = vlSelf->_mc___05Fs1375;
    vlSelf->__VdfgTmp_h4941706f__0 = ((~ ((IData)(1U) 
                                          + vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_20)) 
                                      & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_20);
    vlSelf->_mc___05Fs2568 = vlSelf->_mc___05Fs1373;
    vlSelf->_mc___05Fs962 = vlSelf->_mc___05Fs1373;
    vlSelf->_mc___05Fs963 = vlSelf->_mc___05Fs1373;
    vlSelf->__VdfgTmp_h41d8cc3f__0 = ((~ ((IData)(1U) 
                                          + vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_22)) 
                                      & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_22);
    vlSelf->_mc___05Fs2588 = vlSelf->_mc___05Fs1369;
    vlSelf->_mc___05Fs956 = vlSelf->_mc___05Fs1369;
    vlSelf->_mc___05Fs957 = vlSelf->_mc___05Fs1369;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_154 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l) 
           & ((~ (IData)(vlSelf->_mc___05Fs1369)) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a)));
    vlSelf->_cp___05Fs5123 = vlSelf->_mc___05Fs616;
    vlSelf->_rs___05Fs508 = vlSelf->_mc___05Fs400;
    vlSelf->_rs___05Fs85 = vlSelf->_mc___05Fs107;
    vlSelf->_rs___05Fs87 = vlSelf->_mc___05Fs109;
    vlSelf->_rs___05Fs506 = vlSelf->_mc___05Fs398;
    vlSelf->_rs___05Fs1077 = vlSelf->_mc___05Fs744;
    vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___GEN_5 
        = ((IData)(vlSelf->_cp___05Fs6343) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__doneAW));
    vlSelf->_rs___05Fs504 = vlSelf->_mc___05Fs396;
    vlSelf->_rs___05Fs505 = vlSelf->_mc___05Fs397;
    vlSelf->_rs___05Fs507 = vlSelf->_mc___05Fs399;
    vlSelf->_rs___05Fs92 = vlSelf->_mc___05Fs120;
    vlSelf->_rs___05Fs90 = vlSelf->_mc___05Fs118;
    vlSelf->_rs___05Fs581 = vlSelf->_mc___05Fs488;
    vlSelf->_cp___05Fs5679 = vlSelf->_mc___05Fs679;
    vlSelf->_rs___05Fs1567 = vlSelf->_mc___05Fs953;
    vlSelf->_rs___05Fs86 = vlSelf->_mc___05Fs108;
    vlSelf->_rs___05Fs1566 = vlSelf->_mc___05Fs952;
    vlSelf->_rs___05Fs78 = vlSelf->_mc___05Fs91;
    vlSelf->_rs___05Fs77 = vlSelf->_mc___05Fs90;
    vlSelf->_rs___05Fs91 = vlSelf->_mc___05Fs119;
    vlSelf->_rs___05Fs580 = vlSelf->_mc___05Fs487;
    vlSelf->_rs___05Fs398 = vlSelf->_mc___05Fs290;
    vlSelf->_rs___05Fs399 = vlSelf->_mc___05Fs291;
    vlSelf->_mc___05Fs3003 = vlSelf->_mc___05Fs3002;
    vlSelf->_mc___05Fs3004 = vlSelf->_mc___05Fs3002;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT___GEN_2 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT___GEN_1) 
           & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_address 
                      >> 1U)));
    vlSelf->_rs___05Fs82 = vlSelf->_mc___05Fs99;
    vlSelf->_rs___05Fs81 = vlSelf->_mc___05Fs98;
    vlSelf->_cp___05Fs13596 = (1U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__opcode_1));
    vlSelf->_rs___05Fs4093 = vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__opcode_1;
    vlSelf->_cp___05Fs13598 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__param_1));
    vlSelf->_rs___05Fs4094 = vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__param_1;
    vlSelf->_cp___05Fs8524 = (4U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__opcode));
    vlSelf->_rs___05Fs1540 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__opcode;
    vlSelf->_cp___05Fs8526 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__param));
    vlSelf->_rs___05Fs1541 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__param;
    vlSelf->_cp___05Fs8528 = (6U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__size));
    vlSelf->_rs___05Fs1542 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__size;
    vlSelf->_mc___05Fs572 = (0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__acknum));
    vlSelf->_cp___05Fs9294 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__doUncachedResp;
    vlSelf->_mc___05Fs642 = (0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__acknum));
    vlSelf->_cp___05Fs1885 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__param_1));
    vlSelf->_rs___05Fs247 = vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__param_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN 
        = (0x7fffffffffffffULL & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_highAlignedSigC 
                                  + (QData)((IData)(vlSelf->_mc___05Fs2101))));
    vlSelf->_mc___05Fs2203 = vlSelf->_mc___05Fs2200;
    vlSelf->_mc___05Fs2207 = vlSelf->_mc___05Fs2200;
    vlSelf->_mc___05Fs2219 = vlSelf->_mc___05Fs2200;
    vlSelf->_cp___05Fs9755 = vlSelf->_mc___05Fs2200;
    vlSelf->_mc___05Fs2208 = ((IData)(vlSelf->_mc___05Fs2200) 
                              & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sqrtOp_Z)));
    vlSelf->_mc___05Fs2209 = ((IData)(vlSelf->_mc___05Fs2200) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sqrtOp_Z));
    vlSelf->_mc___05Fs2189 = ((3U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum)) 
                              & (IData)(vlSelf->_mc___05Fs2229));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isInf_Z) 
           | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT___divSqrtRecFNToRaw_io_infiniteExc));
    vlSelf->_mc___05Fs2291 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isNaN_Z) 
                              | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT___divSqrtRecFNToRaw_io_invalidExc));
    vlSelf->_cp___05Fs11007 = vlSelf->_mc___05Fs3456;
    vlSelf->_rs___05Fs3615 = vlSelf->_mc___05Fs3456;
    vlSelf->_mc___05Fs1433 = vlSelf->_mc___05Fs1028;
    vlSelf->_rs___05Fs74 = vlSelf->_mc___05Fs83;
    vlSelf->_rs___05Fs73 = vlSelf->_mc___05Fs82;
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_29 
        = ((IData)(vlSelf->_mc___05Fs315) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__wbeats_latched));
    vlSelf->_mc___05Fs3484 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs11479)) 
                                       & (IData)(vlSelf->_cp___05Fs11480))));
    vlSelf->__VdfgTmp_h883e40ce__0 = ((IData)(vlSelf->_cp___05Fs11479) 
                                      | (IData)(vlSelf->_cp___05Fs11480));
    vlSelf->_rs___05Fs1469 = vlSelf->_mc___05Fs857;
    vlSelf->_rs___05Fs1470 = vlSelf->_mc___05Fs858;
    vlSelf->_rs___05Fs1468 = vlSelf->_mc___05Fs856;
    vlSelf->_rs___05Fs1467 = vlSelf->_mc___05Fs855;
    vlSelf->_rs___05Fs4142 = vlSelf->_mc___05Fs3690;
    vlSelf->_cp___05Fs10815 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__param_1));
    vlSelf->_rs___05Fs3567 = vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__param_1;
    vlSelf->_mc___05Fs2258 = vlSelf->_mc___05Fs2255;
    vlSelf->_mc___05Fs2262 = vlSelf->_mc___05Fs2255;
    vlSelf->_mc___05Fs2274 = vlSelf->_mc___05Fs2255;
    vlSelf->_cp___05Fs9757 = vlSelf->_mc___05Fs2255;
    vlSelf->_mc___05Fs2263 = ((IData)(vlSelf->_mc___05Fs2255) 
                              & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sqrtOp_Z)));
    vlSelf->_mc___05Fs2264 = ((IData)(vlSelf->_mc___05Fs2255) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sqrtOp_Z));
    vlSelf->_mc___05Fs2244 = ((3U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum)) 
                              & (IData)(vlSelf->_mc___05Fs2290));
    vlSelf->_cp___05Fs5899 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__picker__DOT__monitor__DOT__param_1));
    vlSelf->_rs___05Fs938 = vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__picker__DOT__monitor__DOT__param_1;
    vlSelf->_cp___05Fs6270 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__param_1));
    vlSelf->_rs___05Fs1059 = vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__param_1;
    vlSelf->_cp___05Fs7779 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__param_1));
    vlSelf->_rs___05Fs1483 = vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__param_1;
    vlSelf->_rs___05Fs1466 = vlSelf->_mc___05Fs854;
    vlSelf->_rs___05Fs2008 = vlSelf->_mc___05Fs1298;
    vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___axi4index_auto_in_r_bits_last 
        = (IData)((0xc0U == (0xc0U & vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[2U])));
    vlSelf->_mc___05Fs2223 = vlSelf->_mc___05Fs2222;
    __Vtemp_2[0U] = 0U;
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_3, __Vtemp_2, (0x3fU 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_6[0U] = 0U;
    __Vtemp_6[1U] = 0U;
    __Vtemp_6[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_7, __Vtemp_6, (0x3fU 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_10[0U] = 0U;
    __Vtemp_10[1U] = 0U;
    __Vtemp_10[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_11, __Vtemp_10, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_14[0U] = 0U;
    __Vtemp_14[1U] = 0U;
    __Vtemp_14[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_15, __Vtemp_14, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_18[0U] = 0U;
    __Vtemp_18[1U] = 0U;
    __Vtemp_18[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_19, __Vtemp_18, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_22[0U] = 0U;
    __Vtemp_22[1U] = 0U;
    __Vtemp_22[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_23, __Vtemp_22, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_26[0U] = 0U;
    __Vtemp_26[1U] = 0U;
    __Vtemp_26[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_27, __Vtemp_26, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_30[0U] = 0U;
    __Vtemp_30[1U] = 0U;
    __Vtemp_30[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_31, __Vtemp_30, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_34[0U] = 0U;
    __Vtemp_34[1U] = 0U;
    __Vtemp_34[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_35, __Vtemp_34, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_38[0U] = 0U;
    __Vtemp_38[1U] = 0U;
    __Vtemp_38[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_39, __Vtemp_38, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_42[0U] = 0U;
    __Vtemp_42[1U] = 0U;
    __Vtemp_42[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_43, __Vtemp_42, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_46[0U] = 0U;
    __Vtemp_46[1U] = 0U;
    __Vtemp_46[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_47, __Vtemp_46, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_50[0U] = 0U;
    __Vtemp_50[1U] = 0U;
    __Vtemp_50[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_51, __Vtemp_50, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_54[0U] = 0U;
    __Vtemp_54[1U] = 0U;
    __Vtemp_54[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_55, __Vtemp_54, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_58[0U] = 0U;
    __Vtemp_58[1U] = 0U;
    __Vtemp_58[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_59, __Vtemp_58, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_62[0U] = 0U;
    __Vtemp_62[1U] = 0U;
    __Vtemp_62[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_63, __Vtemp_62, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_66[0U] = 0U;
    __Vtemp_66[1U] = 0U;
    __Vtemp_66[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_67, __Vtemp_66, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_70[0U] = 0U;
    __Vtemp_70[1U] = 0U;
    __Vtemp_70[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_71, __Vtemp_70, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_74[0U] = 0U;
    __Vtemp_74[1U] = 0U;
    __Vtemp_74[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_75, __Vtemp_74, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_78[0U] = 0U;
    __Vtemp_78[1U] = 0U;
    __Vtemp_78[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_79, __Vtemp_78, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_82[0U] = 0U;
    __Vtemp_82[1U] = 0U;
    __Vtemp_82[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_83, __Vtemp_82, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_86[0U] = 0U;
    __Vtemp_86[1U] = 0U;
    __Vtemp_86[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_87, __Vtemp_86, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_90[0U] = 0U;
    __Vtemp_90[1U] = 0U;
    __Vtemp_90[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_91, __Vtemp_90, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_94[0U] = 0U;
    __Vtemp_94[1U] = 0U;
    __Vtemp_94[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_95, __Vtemp_94, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_98[0U] = 0U;
    __Vtemp_98[1U] = 0U;
    __Vtemp_98[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_99, __Vtemp_98, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_haf133fcb__0 
        = ((IData)(vlSelf->_mc___05Fs2224) ? (7U | 
                                              (((IData)(vlSelf->_mc___05Fs2222)
                                                 ? 0x3fffffU
                                                 : 
                                                ((0x200000U 
                                                  & (__Vtemp_3[1U] 
                                                     << 0xbU)) 
                                                 | ((0x100000U 
                                                     & (__Vtemp_7[1U] 
                                                        << 9U)) 
                                                    | ((0x80000U 
                                                        & (__Vtemp_11[1U] 
                                                           << 7U)) 
                                                       | ((0x40000U 
                                                           & (__Vtemp_15[1U] 
                                                              << 5U)) 
                                                          | ((0x20000U 
                                                              & (__Vtemp_19[1U] 
                                                                 << 3U)) 
                                                             | ((((0x10000U 
                                                                   & (__Vtemp_23[1U] 
                                                                      << 1U)) 
                                                                  | (0x4000U 
                                                                     & (__Vtemp_27[1U] 
                                                                        >> 3U))) 
                                                                 | (0xa000U 
                                                                    & ((0x18000U 
                                                                        & (__Vtemp_31[1U] 
                                                                           >> 1U)) 
                                                                       | (0x6000U 
                                                                          & (__Vtemp_35[1U] 
                                                                             >> 5U))))) 
                                                                | ((0x1000U 
                                                                    & (__Vtemp_39[1U] 
                                                                       >> 7U)) 
                                                                   | ((0x800U 
                                                                       & (__Vtemp_43[1U] 
                                                                          >> 9U)) 
                                                                      | ((0x400U 
                                                                          & (__Vtemp_47[1U] 
                                                                             >> 0xbU)) 
                                                                         | ((0x200U 
                                                                             & (__Vtemp_51[1U] 
                                                                                >> 0xdU)) 
                                                                            | ((0x100U 
                                                                                & (__Vtemp_55[1U] 
                                                                                >> 0xfU)) 
                                                                               | ((0x80U 
                                                                                & (__Vtemp_59[1U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (__Vtemp_63[1U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (__Vtemp_67[1U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (__Vtemp_71[1U] 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (__Vtemp_75[1U] 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (__Vtemp_79[1U] 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (__Vtemp_83[1U] 
                                                                                >> 0x1dU)) 
                                                                                | (__Vtemp_87[1U] 
                                                                                >> 0x1fU)))))))))))))))))))) 
                                               << 3U))
            : ((IData)(vlSelf->_mc___05Fs2222) ? ((4U 
                                                   & (__Vtemp_91[0U] 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & __Vtemp_95[0U]) 
                                                     | (1U 
                                                        & (__Vtemp_99[0U] 
                                                           >> 2U))))
                : 0U));
    vlSelf->_rs___05Fs421 = vlSelf->_mc___05Fs309;
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_size))) 
              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_3)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_size))) 
              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_2)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_size))) 
              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_5)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_size))) 
              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_4)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__wide_mask 
        = (((QData)((IData)((0xffU & (- (IData)((IData)(vlSelf->_mc___05Fs477)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           (- (IData)((IData)(vlSelf->_mc___05Fs476)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & (- (IData)((IData)(vlSelf->_mc___05Fs475)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & (- (IData)((IData)(vlSelf->_mc___05Fs474)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((- (IData)((IData)(vlSelf->_mc___05Fs473))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & ((- (IData)((IData)(vlSelf->_mc___05Fs472))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & ((- (IData)((IData)(vlSelf->_mc___05Fs471))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & (- (IData)((IData)(vlSelf->_mc___05Fs470)))))))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT___GEN_67 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT___GEN_65)) 
           & ((0x40U & ((IData)((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                 >> 0x37U)) << 6U)) 
              | ((0x20U & ((IData)((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                    >> 0x2fU)) << 5U)) 
                 | ((0x10U & ((IData)((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                       >> 0x27U)) << 4U)) 
                    | ((8U & ((IData)((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                       >> 0x1fU)) << 3U)) 
                       | ((4U & ((IData)((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                          >> 0x17U)) 
                                 << 2U)) | ((2U & ((IData)(
                                                           (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                            >> 0xfU)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 7U))))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT___GEN_66 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT___GEN_65)) 
           & ((0x40U & ((IData)((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                 >> 0x37U)) << 6U)) 
              | ((0x20U & ((IData)((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                    >> 0x2fU)) << 5U)) 
                 | ((0x10U & ((IData)((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                       >> 0x27U)) << 4U)) 
                    | ((8U & ((IData)((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                       >> 0x1fU)) << 3U)) 
                       | ((4U & ((IData)((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                          >> 0x17U)) 
                                 << 2U)) | ((2U & ((IData)(
                                                           (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 0xfU)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                             >> 7U))))))))));
    vlSelf->_cp___05Fs4007 = vlSelf->_mc___05Fs483;
    vlSelf->_mc___05Fs489 = ((IData)(vlSelf->_mc___05Fs486)
                              ? (IData)(vlSelf->_mc___05Fs483)
                              : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__state_0));
    vlSelf->_cp___05Fs4840 = vlSelf->_mc___05Fs581;
    vlSelf->_cp___05Fs5401 = vlSelf->_mc___05Fs651;
    vlSelf->_cp___05Fs12505 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__param));
    vlSelf->_rs___05Fs3776 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__param;
    vlSelf->_cp___05Fs12507 = (2U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__size));
    vlSelf->_rs___05Fs3777 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__size;
    vlSelf->_mc___05Fs222 = vlSelf->_mc___05Fs218;
    vlSelf->_mc___05Fs226 = vlSelf->_mc___05Fs218;
    vlSelf->_mc___05Fs235 = vlSelf->_mc___05Fs218;
    vlSelf->_mc___05Fs51 = vlSelf->_mc___05Fs218;
    vlSelf->_cp___05Fs1834 = (1U & (~ (IData)(vlSelf->_mc___05Fs218)));
    vlSelf->_cp___05Fs1843 = vlSelf->_mc___05Fs218;
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_46 
        = ((IData)(vlSelf->_mc___05Fs218) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__opcode_1));
    __Vtemp_101[0U] = ((0x1f00000U & (vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT___ram_ext_R0_data[2U] 
                                      << 0xaU)) | (
                                                   (0xf8000U 
                                                    & (vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT___ram_ext_R0_data[2U] 
                                                       << 5U)) 
                                                   | ((0x7c00U 
                                                       & vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT___ram_ext_R0_data[2U]) 
                                                      | ((0x3e0U 
                                                          & (vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT___ram_ext_R0_data[2U] 
                                                             >> 5U)) 
                                                         | (0x1fU 
                                                            & (vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT___ram_ext_R0_data[2U] 
                                                               >> 0xaU))))));
    __Vtemp_101[1U] = 0U;
    __Vtemp_101[2U] = 0U;
    __Vtemp_102[0U] = ((0x1f00000U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram) 
                                      << 0x10U)) | 
                       ((0xf8000U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram) 
                                     << 0xbU)) | ((0x7c00U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_3__DOT___ram_ext_R0_data) 
                                                      << 6U)) 
                                                  | ((0x3e0U 
                                                      & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_2__DOT___ram_ext_R0_data) 
                                                         << 1U)) 
                                                     | (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram) 
                                                           >> 4U))))));
    __Vtemp_102[1U] = 0U;
    __Vtemp_102[2U] = 0U;
    vlSelf->_rs___05Fs418 = vlSelf->_mc___05Fs305;
    vlSelf->_rs___05Fs1464 = vlSelf->_mc___05Fs839;
    vlSelf->_rs___05Fs416 = vlSelf->_mc___05Fs303;
    vlSelf->_cp___05Fs2893 = (2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst));
    vlSelf->_cp___05Fs2894 = (0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst));
    vlSelf->_cp___05Fs2896 = ((IData)(vlSelf->_mc___05Fs314) 
                              & (IData)(vlSelf->_mc___05Fs315));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_32 
        = (1U & ((~ (IData)(vlSelf->_mc___05Fs315)) 
                 | (IData)(vlSelf->_mc___05Fs314)));
    if (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__busy_1) {
        vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
            = vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__r_addr_1;
        vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len_1 
            = vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__r_len_1;
    } else {
        vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
            = vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr;
        vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len_1 
            = vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len;
    }
    vlSelf->_rs___05Fs4140 = vlSelf->_mc___05Fs3689;
    vlSelf->_cp___05Fs8638 = (1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__state));
    vlSelf->_mc___05Fs2591 = vlSelf->_mc___05Fs2589;
    vlSelf->_rs___05Fs2935 = vlSelf->_cp___05Fs9799;
    vlSelf->_cp___05Fs9780 = vlSelf->_mc___05Fs2451;
    vlSelf->_mc___05Fs2506 = vlSelf->_mc___05Fs2452;
    vlSelf->_mc___05Fs2509 = vlSelf->_mc___05Fs2452;
    vlSelf->_mc___05Fs2512 = vlSelf->_mc___05Fs2452;
    vlSelf->_mc___05Fs2515 = vlSelf->_mc___05Fs2452;
    vlSelf->_mc___05Fs2519 = vlSelf->_mc___05Fs2452;
    vlSelf->_mc___05Fs2522 = vlSelf->_mc___05Fs2452;
    vlSelf->_mc___05Fs2525 = vlSelf->_mc___05Fs2452;
    vlSelf->_mc___05Fs2529 = vlSelf->_mc___05Fs2452;
    vlSelf->_mc___05Fs2532 = vlSelf->_mc___05Fs2452;
    vlSelf->_mc___05Fs2535 = vlSelf->_mc___05Fs2452;
    vlSelf->_mc___05Fs2539 = vlSelf->_mc___05Fs2452;
    vlSelf->_mc___05Fs2542 = vlSelf->_mc___05Fs2452;
    vlSelf->_mc___05Fs2545 = vlSelf->_mc___05Fs2452;
    vlSelf->_mc___05Fs2549 = vlSelf->_mc___05Fs2452;
    vlSelf->_mc___05Fs2552 = vlSelf->_mc___05Fs2452;
    vlSelf->_mc___05Fs2555 = vlSelf->_mc___05Fs2452;
    vlSelf->_mc___05Fs2559 = vlSelf->_mc___05Fs2452;
    vlSelf->_mc___05Fs2562 = vlSelf->_mc___05Fs2452;
    vlSelf->_mc___05Fs2565 = vlSelf->_mc___05Fs2452;
    vlSelf->_mc___05Fs2569 = vlSelf->_mc___05Fs2452;
    vlSelf->_mc___05Fs2572 = vlSelf->_mc___05Fs2452;
    vlSelf->_mc___05Fs2575 = vlSelf->_mc___05Fs2452;
    vlSelf->_mc___05Fs2579 = vlSelf->_mc___05Fs2452;
    vlSelf->_mc___05Fs2582 = vlSelf->_mc___05Fs2452;
    vlSelf->_mc___05Fs2585 = vlSelf->_mc___05Fs2452;
    vlSelf->_mc___05Fs2601 = vlSelf->_mc___05Fs2452;
    vlSelf->_mc___05Fs2614 = vlSelf->_mc___05Fs2452;
    vlSelf->_mc___05Fs2507 = vlSelf->_mc___05Fs2453;
    vlSelf->_mc___05Fs2510 = vlSelf->_mc___05Fs2453;
    vlSelf->_mc___05Fs2513 = vlSelf->_mc___05Fs2453;
    vlSelf->_mc___05Fs2516 = vlSelf->_mc___05Fs2453;
    vlSelf->_mc___05Fs2520 = vlSelf->_mc___05Fs2453;
    vlSelf->_mc___05Fs2523 = vlSelf->_mc___05Fs2453;
    vlSelf->_mc___05Fs2526 = vlSelf->_mc___05Fs2453;
    vlSelf->_mc___05Fs2530 = vlSelf->_mc___05Fs2453;
    vlSelf->_mc___05Fs2533 = vlSelf->_mc___05Fs2453;
    vlSelf->_mc___05Fs2536 = vlSelf->_mc___05Fs2453;
    vlSelf->_mc___05Fs2540 = vlSelf->_mc___05Fs2453;
    vlSelf->_mc___05Fs2543 = vlSelf->_mc___05Fs2453;
    vlSelf->_mc___05Fs2546 = vlSelf->_mc___05Fs2453;
    vlSelf->_mc___05Fs2550 = vlSelf->_mc___05Fs2453;
    vlSelf->_mc___05Fs2553 = vlSelf->_mc___05Fs2453;
    vlSelf->_mc___05Fs2556 = vlSelf->_mc___05Fs2453;
    vlSelf->_mc___05Fs2560 = vlSelf->_mc___05Fs2453;
    vlSelf->_mc___05Fs2563 = vlSelf->_mc___05Fs2453;
    vlSelf->_mc___05Fs2566 = vlSelf->_mc___05Fs2453;
    vlSelf->_mc___05Fs2570 = vlSelf->_mc___05Fs2453;
    vlSelf->_mc___05Fs2573 = vlSelf->_mc___05Fs2453;
    vlSelf->_mc___05Fs2576 = vlSelf->_mc___05Fs2453;
    vlSelf->_mc___05Fs2580 = vlSelf->_mc___05Fs2453;
    vlSelf->_mc___05Fs2583 = vlSelf->_mc___05Fs2453;
    vlSelf->_mc___05Fs2586 = vlSelf->_mc___05Fs2453;
    vlSelf->_mc___05Fs2602 = vlSelf->_mc___05Fs2453;
    vlSelf->_mc___05Fs2615 = vlSelf->_mc___05Fs2453;
    vlSelf->_mc___05Fs2508 = vlSelf->_mc___05Fs2454;
    vlSelf->_mc___05Fs2511 = vlSelf->_mc___05Fs2454;
    vlSelf->_mc___05Fs2514 = vlSelf->_mc___05Fs2454;
    vlSelf->_mc___05Fs2517 = vlSelf->_mc___05Fs2454;
    vlSelf->_mc___05Fs2521 = vlSelf->_mc___05Fs2454;
    vlSelf->_mc___05Fs2524 = vlSelf->_mc___05Fs2454;
    vlSelf->_mc___05Fs2527 = vlSelf->_mc___05Fs2454;
    vlSelf->_mc___05Fs2531 = vlSelf->_mc___05Fs2454;
    vlSelf->_mc___05Fs2534 = vlSelf->_mc___05Fs2454;
    vlSelf->_mc___05Fs2537 = vlSelf->_mc___05Fs2454;
    vlSelf->_mc___05Fs2541 = vlSelf->_mc___05Fs2454;
    vlSelf->_mc___05Fs2544 = vlSelf->_mc___05Fs2454;
    vlSelf->_mc___05Fs2547 = vlSelf->_mc___05Fs2454;
    vlSelf->_mc___05Fs2551 = vlSelf->_mc___05Fs2454;
    vlSelf->_mc___05Fs2554 = vlSelf->_mc___05Fs2454;
    vlSelf->_mc___05Fs2557 = vlSelf->_mc___05Fs2454;
    vlSelf->_mc___05Fs2561 = vlSelf->_mc___05Fs2454;
    vlSelf->_mc___05Fs2564 = vlSelf->_mc___05Fs2454;
    vlSelf->_mc___05Fs2567 = vlSelf->_mc___05Fs2454;
    vlSelf->_mc___05Fs2571 = vlSelf->_mc___05Fs2454;
    vlSelf->_mc___05Fs2574 = vlSelf->_mc___05Fs2454;
    vlSelf->_mc___05Fs2577 = vlSelf->_mc___05Fs2454;
    vlSelf->_mc___05Fs2581 = vlSelf->_mc___05Fs2454;
    vlSelf->_mc___05Fs2584 = vlSelf->_mc___05Fs2454;
    vlSelf->_mc___05Fs2587 = vlSelf->_mc___05Fs2454;
    vlSelf->_mc___05Fs2603 = vlSelf->_mc___05Fs2454;
    vlSelf->_mc___05Fs2616 = vlSelf->_mc___05Fs2454;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_13 
        = ((IData)(vlSelf->_mc___05Fs2454) | (IData)(vlSelf->_mc___05Fs2453));
    vlSelf->_cp___05Fs8609 = vlSelf->_mc___05Fs998;
    vlSelf->_cp___05Fs8643 = vlSelf->_mc___05Fs998;
    vlSelf->_rs___05Fs2891 = vlSelf->_mc___05Fs998;
    vlSelf->_rs___05Fs415 = vlSelf->_mc___05Fs302;
    vlSelf->_cp___05Fs2890 = (2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst));
    vlSelf->_cp___05Fs2891 = (0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst));
    if (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__busy) {
        vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
            = vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__r_addr;
        vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len 
            = vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__r_len;
    } else {
        vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
            = vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr;
        vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len 
            = vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___deq_q_io_deq_bits_len;
    }
    vlSelf->_rs___05Fs1463 = vlSelf->_mc___05Fs838;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
        = (((IData)(vlSelf->_mc___05Fs2299) ? 0ULL : 0xffffffff00000000ULL) 
           | vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__load_wb_data);
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__intValue_res 
        = ((2U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__in_pipe_b_typ))
            ? vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__in_pipe_b_in1
            : (((QData)((IData)((- (IData)((1U & ((~ (IData)(vlSelf->_mc___05Fs2072)) 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__in_pipe_b_in1 
                                                             >> 0x1fU)))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__in_pipe_b_in1))));
    vlSelf->_mc___05Fs1218 = ((1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state)) 
                              | (IData)(vlSelf->_cp___05Fs9288));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lrscCount 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lrscCount;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_probe 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_probe;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__neg_out 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__neg_out;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__count 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__count;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U];
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U];
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[2U] 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[2U];
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U];
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U];
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[2U] 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[2U];
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[3U] 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[3U];
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[4U] 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[4U];
    vlSelf->_cp___05Fs7403 = (0x10U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__source_2));
    vlSelf->_rs___05Fs1357 = vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__source_2;
    vlSelf->_cp___05Fs7397 = (6U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__opcode_2));
    vlSelf->_rs___05Fs1354 = vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__opcode_2;
    vlSelf->_cp___05Fs7401 = (6U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__opcode_2));
    vlSelf->_rs___05Fs1356 = vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__opcode_2;
    vlSelf->_mc___05Fs2281 = vlSelf->_mc___05Fs2277;
    vlSelf->_mc___05Fs2282 = vlSelf->_mc___05Fs2278;
    vlSelf->_mc___05Fs2283 = vlSelf->_mc___05Fs2279;
    vlSelf->_mc___05Fs2284 = vlSelf->_mc___05Fs2280;
    __Vtemp_104[0U] = 0U;
    __Vtemp_104[1U] = 0U;
    __Vtemp_104[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_105, __Vtemp_104, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_108[0U] = 0U;
    __Vtemp_108[1U] = 0U;
    __Vtemp_108[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_109, __Vtemp_108, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_112[0U] = 0U;
    __Vtemp_112[1U] = 0U;
    __Vtemp_112[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_113, __Vtemp_112, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_116[0U] = 0U;
    __Vtemp_116[1U] = 0U;
    __Vtemp_116[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_117, __Vtemp_116, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_120[0U] = 0U;
    __Vtemp_120[1U] = 0U;
    __Vtemp_120[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_121, __Vtemp_120, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_124[0U] = 0U;
    __Vtemp_124[1U] = 0U;
    __Vtemp_124[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_125, __Vtemp_124, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1 
        = (0x55555U & ((0x60000U & __Vtemp_105[0U]) 
                       | ((0x18000U & (__Vtemp_109[0U] 
                                       >> 4U)) | ((0x6000U 
                                                   & (__Vtemp_113[0U] 
                                                      >> 8U)) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_0) 
                                                      << 5U) 
                                                     | ((0x18U 
                                                         & ((__Vtemp_117[1U] 
                                                             << 4U) 
                                                            | (8U 
                                                               & (__Vtemp_117[0U] 
                                                                  >> 0x1cU)))) 
                                                        | ((6U 
                                                            & __Vtemp_121[1U]) 
                                                           | (1U 
                                                              & (__Vtemp_125[1U] 
                                                                 >> 4U)))))))));
    vlSelf->_cp___05Fs678 = (6U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__opcode_2));
    vlSelf->_rs___05Fs46 = vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__opcode_2;
    vlSelf->_cp___05Fs682 = (6U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__size_2));
    vlSelf->_rs___05Fs48 = vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__size_2;
    vlSelf->_cp___05Fs684 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__source_2));
    vlSelf->_rs___05Fs49 = vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__source_2;
    vlSelf->_cp___05Fs1473 = (6U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__opcode_2));
    vlSelf->_rs___05Fs132 = vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__opcode_2;
    vlSelf->_cp___05Fs1477 = (6U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__size_2));
    vlSelf->_rs___05Fs134 = vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__size_2;
    vlSelf->_cp___05Fs1479 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__source_2));
    vlSelf->_rs___05Fs135 = vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__source_2;
    vlSelf->_rs___05Fs2918 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_v;
    vlSelf->_rs___05Fs2917 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_r;
    vlSelf->_rs___05Fs2915 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_x;
    vlSelf->_rs___05Fs2916 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_w;
    vlSelf->_rs___05Fs2912 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_a;
    vlSelf->_rs___05Fs2914 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_u;
    vlSelf->_rs___05Fs2913 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_g;
    vlSelf->_rs___05Fs2895 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_ae_ptw;
    vlSelf->_rs___05Fs2896 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_ae_final;
    vlSelf->_rs___05Fs2897 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_pf;
    vlSelf->_rs___05Fs2911 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_d;
    vlSelf->_rs___05Fs2900 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_hw;
    vlSelf->_rs___05Fs2901 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_hx;
    vlSelf->_rs___05Fs2899 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_hr;
    vlSelf->_cp___05Fs9783 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_gf;
    vlSelf->_mc___05Fs1403 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_1;
    vlSelf->_cp___05Fs9396 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_mem_size) 
                                    >> 1U));
    vlSelf->_cp___05Fs9385 = (1U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_mem_size));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__max_count 
        = ((IData)(vlSelf->_mc___05Fs2447) ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_count)
            : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__count));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_tag_v 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_tag_v;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_tag_v 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_tag_v;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_tag_v 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_tag_v;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_tag_v 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_tag_v;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_tag_v 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_tag_v;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_tag_v 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_tag_v;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_tag_v 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_tag_v;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_tag_v 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_tag_v;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_tag_v 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_tag_v;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_tag_v 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_tag_v;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_tag_v 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_tag_v;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_tag_v 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_tag_v;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_tag_v 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_tag_v;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__stage2_final 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__stage2_final;
    vlSelf->_cp___05Fs5054 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__param_1));
    vlSelf->_rs___05Fs690 = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__param_1;
    vlSelf->_cp___05Fs5613 = (1U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__opcode_1));
    vlSelf->_rs___05Fs767 = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__opcode_1;
    vlSelf->_cp___05Fs5615 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__param_1));
    vlSelf->_rs___05Fs768 = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__param_1;
    vlSelf->_cp___05Fs4776 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__param_1));
    vlSelf->_rs___05Fs651 = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__param_1;
    vlSelf->_cp___05Fs5337 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__param_1));
    vlSelf->_rs___05Fs729 = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__param_1;
    vlSelf->_cp___05Fs11102 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__param_1));
    vlSelf->_rs___05Fs3596 = vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__param_1;
    vlSelf->_mc___05Fs607 = (0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__acknum));
    vlSelf->_cp___05Fs8843 = vlSelf->_cp___05Fs8842;
    vlSelf->_cp___05Fs8844 = vlSelf->_cp___05Fs8842;
    vlSelf->_cp___05Fs8845 = vlSelf->_cp___05Fs8842;
    vlSelf->_rs___05Fs1570 = vlSelf->_cp___05Fs8842;
    vlSelf->_cp___05Fs8663 = vlSelf->_cp___05Fs8662;
    vlSelf->_cp___05Fs8664 = vlSelf->_cp___05Fs8662;
    vlSelf->_cp___05Fs8665 = vlSelf->_cp___05Fs8662;
    vlSelf->_cp___05Fs8653 = ((IData)(vlSelf->_cp___05Fs8662) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_0_data_0));
    vlSelf->_cp___05Fs8654 = ((IData)(vlSelf->_cp___05Fs8662) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_0_data_1));
    vlSelf->_cp___05Fs8655 = ((IData)(vlSelf->_cp___05Fs8662) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_0_data_2));
    vlSelf->_cp___05Fs8656 = ((IData)(vlSelf->_cp___05Fs8662) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_0_data_3));
    vlSelf->_cp___05Fs8658 = ((IData)(vlSelf->_cp___05Fs8662) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_0_data_0 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8659 = ((IData)(vlSelf->_cp___05Fs8662) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_0_data_1 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8660 = ((IData)(vlSelf->_cp___05Fs8662) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_0_data_2 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8661 = ((IData)(vlSelf->_cp___05Fs8662) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_0_data_3 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8855 = vlSelf->_cp___05Fs8854;
    vlSelf->_cp___05Fs8856 = vlSelf->_cp___05Fs8854;
    vlSelf->_cp___05Fs8857 = vlSelf->_cp___05Fs8854;
    vlSelf->_rs___05Fs1603 = vlSelf->_cp___05Fs8854;
    vlSelf->_cp___05Fs8723 = vlSelf->_cp___05Fs8722;
    vlSelf->_cp___05Fs8724 = vlSelf->_cp___05Fs8722;
    vlSelf->_cp___05Fs8725 = vlSelf->_cp___05Fs8722;
    vlSelf->_cp___05Fs8713 = ((IData)(vlSelf->_cp___05Fs8722) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_3_data_0));
    vlSelf->_cp___05Fs8714 = ((IData)(vlSelf->_cp___05Fs8722) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_3_data_1));
    vlSelf->_cp___05Fs8715 = ((IData)(vlSelf->_cp___05Fs8722) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_3_data_2));
    vlSelf->_cp___05Fs8716 = ((IData)(vlSelf->_cp___05Fs8722) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_3_data_3));
    vlSelf->_cp___05Fs8718 = ((IData)(vlSelf->_cp___05Fs8722) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_3_data_0 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8719 = ((IData)(vlSelf->_cp___05Fs8722) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_3_data_1 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8720 = ((IData)(vlSelf->_cp___05Fs8722) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_3_data_2 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8721 = ((IData)(vlSelf->_cp___05Fs8722) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_3_data_3 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8867 = vlSelf->_cp___05Fs8866;
    vlSelf->_cp___05Fs8868 = vlSelf->_cp___05Fs8866;
    vlSelf->_cp___05Fs8869 = vlSelf->_cp___05Fs8866;
    vlSelf->_rs___05Fs1636 = vlSelf->_cp___05Fs8866;
    vlSelf->_cp___05Fs8783 = vlSelf->_cp___05Fs8782;
    vlSelf->_cp___05Fs8784 = vlSelf->_cp___05Fs8782;
    vlSelf->_cp___05Fs8785 = vlSelf->_cp___05Fs8782;
    vlSelf->_cp___05Fs8773 = ((IData)(vlSelf->_cp___05Fs8782) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_6_data_0));
    vlSelf->_cp___05Fs8774 = ((IData)(vlSelf->_cp___05Fs8782) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_6_data_1));
    vlSelf->_cp___05Fs8775 = ((IData)(vlSelf->_cp___05Fs8782) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_6_data_2));
    vlSelf->_cp___05Fs8776 = ((IData)(vlSelf->_cp___05Fs8782) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_6_data_3));
    vlSelf->_cp___05Fs8778 = ((IData)(vlSelf->_cp___05Fs8782) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_6_data_0 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8779 = ((IData)(vlSelf->_cp___05Fs8782) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_6_data_1 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8780 = ((IData)(vlSelf->_cp___05Fs8782) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_6_data_2 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8781 = ((IData)(vlSelf->_cp___05Fs8782) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_6_data_3 
                                            >> 0x14U))));
    vlSelf->_rs___05Fs1678 = vlSelf->_cp___05Fs8878;
    vlSelf->_cp___05Fs8837 = ((IData)(vlSelf->_cp___05Fs8840) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__special_entry_data_0));
    vlSelf->_cp___05Fs8839 = ((IData)(vlSelf->_cp___05Fs8840) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__special_entry_data_0 
                                            >> 0x14U))));
    vlSelf->_rs___05Fs1658 = vlSelf->_cp___05Fs8874;
    vlSelf->_cp___05Fs8809 = ((IData)(vlSelf->_cp___05Fs8812) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_data_0));
    vlSelf->_cp___05Fs8811 = ((IData)(vlSelf->_cp___05Fs8812) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_data_0 
                                            >> 0x14U))));
    vlSelf->_rs___05Fs1663 = vlSelf->_cp___05Fs8875;
    vlSelf->_cp___05Fs8816 = ((IData)(vlSelf->_cp___05Fs8819) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_data_0));
    vlSelf->_cp___05Fs8818 = ((IData)(vlSelf->_cp___05Fs8819) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_data_0 
                                            >> 0x14U))));
    vlSelf->_rs___05Fs1668 = vlSelf->_cp___05Fs8876;
    vlSelf->_cp___05Fs8823 = ((IData)(vlSelf->_cp___05Fs8826) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_data_0));
    vlSelf->_cp___05Fs8825 = ((IData)(vlSelf->_cp___05Fs8826) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_data_0 
                                            >> 0x14U))));
    vlSelf->_rs___05Fs1673 = vlSelf->_cp___05Fs8877;
    vlSelf->_cp___05Fs8830 = ((IData)(vlSelf->_cp___05Fs8833) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_data_0));
    vlSelf->_cp___05Fs8832 = ((IData)(vlSelf->_cp___05Fs8833) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_data_0 
                                            >> 0x14U))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT____VdfgTmp_hc3f94a52__0 
        = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT___GEN_20) 
            << 6U) | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT___GEN_17) 
                       << 5U) | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT___GEN_14) 
                                  << 4U) | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT___GEN_11) 
                                             << 3U) 
                                            | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT___GEN_8) 
                                                << 2U) 
                                               | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT___GEN_5) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT___GEN_2)))))));
    vlSelf->_cp___05Fs8859 = vlSelf->_cp___05Fs8858;
    vlSelf->_cp___05Fs8860 = vlSelf->_cp___05Fs8858;
    vlSelf->_cp___05Fs8861 = vlSelf->_cp___05Fs8858;
    vlSelf->_rs___05Fs1614 = vlSelf->_cp___05Fs8858;
    vlSelf->_cp___05Fs8743 = vlSelf->_cp___05Fs8742;
    vlSelf->_cp___05Fs8744 = vlSelf->_cp___05Fs8742;
    vlSelf->_cp___05Fs8745 = vlSelf->_cp___05Fs8742;
    vlSelf->_cp___05Fs8733 = ((IData)(vlSelf->_cp___05Fs8742) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_4_data_0));
    vlSelf->_cp___05Fs8734 = ((IData)(vlSelf->_cp___05Fs8742) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_4_data_1));
    vlSelf->_cp___05Fs8735 = ((IData)(vlSelf->_cp___05Fs8742) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_4_data_2));
    vlSelf->_cp___05Fs8736 = ((IData)(vlSelf->_cp___05Fs8742) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_4_data_3));
    vlSelf->_cp___05Fs8738 = ((IData)(vlSelf->_cp___05Fs8742) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_4_data_0 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8739 = ((IData)(vlSelf->_cp___05Fs8742) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_4_data_1 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8740 = ((IData)(vlSelf->_cp___05Fs8742) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_4_data_2 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8741 = ((IData)(vlSelf->_cp___05Fs8742) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_4_data_3 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8847 = vlSelf->_cp___05Fs8846;
    vlSelf->_cp___05Fs8848 = vlSelf->_cp___05Fs8846;
    vlSelf->_cp___05Fs8849 = vlSelf->_cp___05Fs8846;
    vlSelf->_rs___05Fs1581 = vlSelf->_cp___05Fs8846;
    vlSelf->_cp___05Fs8683 = vlSelf->_cp___05Fs8682;
    vlSelf->_cp___05Fs8684 = vlSelf->_cp___05Fs8682;
    vlSelf->_cp___05Fs8685 = vlSelf->_cp___05Fs8682;
    vlSelf->_cp___05Fs8673 = ((IData)(vlSelf->_cp___05Fs8682) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_1_data_0));
    vlSelf->_cp___05Fs8674 = ((IData)(vlSelf->_cp___05Fs8682) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_1_data_1));
    vlSelf->_cp___05Fs8675 = ((IData)(vlSelf->_cp___05Fs8682) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_1_data_2));
    vlSelf->_cp___05Fs8676 = ((IData)(vlSelf->_cp___05Fs8682) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_1_data_3));
    vlSelf->_cp___05Fs8678 = ((IData)(vlSelf->_cp___05Fs8682) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_1_data_0 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8679 = ((IData)(vlSelf->_cp___05Fs8682) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_1_data_1 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8680 = ((IData)(vlSelf->_cp___05Fs8682) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_1_data_2 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8681 = ((IData)(vlSelf->_cp___05Fs8682) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_1_data_3 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8851 = vlSelf->_cp___05Fs8850;
    vlSelf->_cp___05Fs8852 = vlSelf->_cp___05Fs8850;
    vlSelf->_cp___05Fs8853 = vlSelf->_cp___05Fs8850;
    vlSelf->_rs___05Fs1592 = vlSelf->_cp___05Fs8850;
    vlSelf->_cp___05Fs8703 = vlSelf->_cp___05Fs8702;
    vlSelf->_cp___05Fs8704 = vlSelf->_cp___05Fs8702;
    vlSelf->_cp___05Fs8705 = vlSelf->_cp___05Fs8702;
    vlSelf->_cp___05Fs8693 = ((IData)(vlSelf->_cp___05Fs8702) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_2_data_0));
    vlSelf->_cp___05Fs8694 = ((IData)(vlSelf->_cp___05Fs8702) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_2_data_1));
    vlSelf->_cp___05Fs8695 = ((IData)(vlSelf->_cp___05Fs8702) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_2_data_2));
    vlSelf->_cp___05Fs8696 = ((IData)(vlSelf->_cp___05Fs8702) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_2_data_3));
    vlSelf->_cp___05Fs8698 = ((IData)(vlSelf->_cp___05Fs8702) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_2_data_0 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8699 = ((IData)(vlSelf->_cp___05Fs8702) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_2_data_1 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8700 = ((IData)(vlSelf->_cp___05Fs8702) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_2_data_2 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8701 = ((IData)(vlSelf->_cp___05Fs8702) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_2_data_3 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8863 = vlSelf->_cp___05Fs8862;
    vlSelf->_cp___05Fs8864 = vlSelf->_cp___05Fs8862;
    vlSelf->_cp___05Fs8865 = vlSelf->_cp___05Fs8862;
    vlSelf->_rs___05Fs1625 = vlSelf->_cp___05Fs8862;
    vlSelf->_cp___05Fs8763 = vlSelf->_cp___05Fs8762;
    vlSelf->_cp___05Fs8764 = vlSelf->_cp___05Fs8762;
    vlSelf->_cp___05Fs8765 = vlSelf->_cp___05Fs8762;
    vlSelf->_cp___05Fs8753 = ((IData)(vlSelf->_cp___05Fs8762) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_5_data_0));
    vlSelf->_cp___05Fs8754 = ((IData)(vlSelf->_cp___05Fs8762) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_5_data_1));
    vlSelf->_cp___05Fs8755 = ((IData)(vlSelf->_cp___05Fs8762) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_5_data_2));
    vlSelf->_cp___05Fs8756 = ((IData)(vlSelf->_cp___05Fs8762) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_5_data_3));
    vlSelf->_cp___05Fs8758 = ((IData)(vlSelf->_cp___05Fs8762) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_5_data_0 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8759 = ((IData)(vlSelf->_cp___05Fs8762) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_5_data_1 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8760 = ((IData)(vlSelf->_cp___05Fs8762) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_5_data_2 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8761 = ((IData)(vlSelf->_cp___05Fs8762) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_5_data_3 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8871 = vlSelf->_cp___05Fs8870;
    vlSelf->_cp___05Fs8872 = vlSelf->_cp___05Fs8870;
    vlSelf->_cp___05Fs8873 = vlSelf->_cp___05Fs8870;
    vlSelf->_rs___05Fs1647 = vlSelf->_cp___05Fs8870;
    vlSelf->_cp___05Fs8803 = vlSelf->_cp___05Fs8802;
    vlSelf->_cp___05Fs8804 = vlSelf->_cp___05Fs8802;
    vlSelf->_cp___05Fs8805 = vlSelf->_cp___05Fs8802;
    vlSelf->_cp___05Fs8793 = ((IData)(vlSelf->_cp___05Fs8802) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_7_data_0));
    vlSelf->_cp___05Fs8794 = ((IData)(vlSelf->_cp___05Fs8802) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_7_data_1));
    vlSelf->_cp___05Fs8795 = ((IData)(vlSelf->_cp___05Fs8802) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_7_data_2));
    vlSelf->_cp___05Fs8796 = ((IData)(vlSelf->_cp___05Fs8802) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_7_data_3));
    vlSelf->_cp___05Fs8798 = ((IData)(vlSelf->_cp___05Fs8802) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_7_data_0 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8799 = ((IData)(vlSelf->_cp___05Fs8802) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_7_data_1 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8800 = ((IData)(vlSelf->_cp___05Fs8802) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_7_data_2 
                                            >> 0x14U))));
    vlSelf->_cp___05Fs8801 = ((IData)(vlSelf->_cp___05Fs8802) 
                              & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_7_data_3 
                                            >> 0x14U))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__state_reg_1 
        = vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__state_reg_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT____VdfgTmp_h09699339__0 
        = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_valid_0) 
            << 2U) | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_valid_0) 
                       << 1U) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_valid_0)));
    vlSelf->_mc___05Fs996 = vlSelf->_mc___05Fs1011;
    vlSelf->_mc___05Fs995 = vlSelf->_mc___05Fs1010;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rviCall 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_13) 
           & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_partial_insn) 
              >> 7U));
    vlSelf->_mc___05Fs1196 = vlSelf->_mc___05Fs1194;
    vlSelf->_mc___05Fs1203 = ((IData)(vlSelf->_mc___05Fs1201) 
                              | (IData)(vlSelf->_mc___05Fs1202));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_38 
        = ((IData)(vlSelf->_mc___05Fs1301) | ((IData)(vlSelf->_mc___05Fs1302) 
                                              | ((IData)(vlSelf->_mc___05Fs1303) 
                                                 | (IData)(vlSelf->_mc___05Fs1304))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h1fd10179__0 
        = ((IData)(vlSelf->_mc___05Fs1309) | ((IData)(vlSelf->_mc___05Fs1308) 
                                              | ((IData)(vlSelf->_mc___05Fs1307) 
                                                 | ((IData)(vlSelf->_mc___05Fs1306) 
                                                    | ((IData)(vlSelf->_mc___05Fs1305) 
                                                       | ((IData)(vlSelf->_mc___05Fs1304) 
                                                          | ((IData)(vlSelf->_mc___05Fs1303) 
                                                             | ((IData)(vlSelf->_mc___05Fs1302) 
                                                                | (IData)(vlSelf->_mc___05Fs1301)))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_44 
        = ((IData)(vlSelf->_mc___05Fs1305) | ((IData)(vlSelf->_mc___05Fs1306) 
                                              | ((IData)(vlSelf->_mc___05Fs1307) 
                                                 | ((IData)(vlSelf->_mc___05Fs1308) 
                                                    | (IData)(vlSelf->_mc___05Fs1309)))));
    vlSelf->_mc___05Fs3364 = vlSelf->_mc___05Fs3363;
    vlSelf->_mc___05Fs3362 = vlSelf->_mc___05Fs3361;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__waddr 
        = ((IData)(vlSelf->_mc___05Fs1506) ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__r_btb_update_pipe_b_prediction_entry)
            : (((IData)(vlSelf->_mc___05Fs1505) << 4U) 
               | ((IData)(vlSelf->_mc___05Fs1505) ? 
                  (((IData)(vlSelf->_mc___05Fs1497) 
                    << 3U) | ((IData)(vlSelf->_mc___05Fs1497)
                               ? (((IData)(vlSelf->_mc___05Fs1493) 
                                   << 1U) | (1U & ((IData)(vlSelf->_mc___05Fs1493)
                                                    ? 
                                                   (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                    >> 0x17U)
                                                    : 
                                                   (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                    >> 0x16U))))
                               : (((IData)(vlSelf->_mc___05Fs1496) 
                                   << 2U) | ((IData)(vlSelf->_mc___05Fs1496)
                                              ? (((IData)(vlSelf->_mc___05Fs1494) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((IData)(vlSelf->_mc___05Fs1494)
                                                        ? 
                                                       (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                        >> 0x13U)
                                                        : 
                                                       (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                        >> 0x12U))))
                                              : (((IData)(vlSelf->_mc___05Fs1495) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((IData)(vlSelf->_mc___05Fs1495)
                                                        ? 
                                                       (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                        >> 0x10U)
                                                        : 
                                                       (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                        >> 0xfU))))))))
                   : (((IData)(vlSelf->_mc___05Fs1504) 
                       << 3U) | ((IData)(vlSelf->_mc___05Fs1504)
                                  ? (((IData)(vlSelf->_mc___05Fs1500) 
                                      << 2U) | ((IData)(vlSelf->_mc___05Fs1500)
                                                 ? 
                                                (((IData)(vlSelf->_mc___05Fs1498) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((IData)(vlSelf->_mc___05Fs1498)
                                                        ? 
                                                       (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                        >> 0xbU)
                                                        : 
                                                       (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                        >> 0xaU))))
                                                 : 
                                                (((IData)(vlSelf->_mc___05Fs1499) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((IData)(vlSelf->_mc___05Fs1499)
                                                        ? 
                                                       (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                        >> 8U)
                                                        : 
                                                       (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                        >> 7U))))))
                                  : (((IData)(vlSelf->_mc___05Fs1503) 
                                      << 2U) | ((IData)(vlSelf->_mc___05Fs1503)
                                                 ? 
                                                (((IData)(vlSelf->_mc___05Fs1501) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((IData)(vlSelf->_mc___05Fs1501)
                                                        ? 
                                                       (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                        >> 4U)
                                                        : 
                                                       (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                        >> 3U))))
                                                 : 
                                                (((IData)(vlSelf->_mc___05Fs1502) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((IData)(vlSelf->_mc___05Fs1502)
                                                        ? 
                                                       (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__state_reg 
                                                        >> 1U)
                                                        : vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__state_reg))))))))));
    vlSelf->_rs___05Fs3401 = vlSelf->_mc___05Fs3336;
    vlSelf->_rs___05Fs3492 = vlSelf->_cp___05Fs9650;
    vlSelf->_mc___05Fs3325 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_xcpt) 
                              | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_xcpt_interrupt));
    vlSelf->_rs___05Fs3056 = vlSelf->_mc___05Fs2832;
    vlSelf->_rs___05Fs3053 = vlSelf->_mc___05Fs2819;
    vlSelf->_mc___05Fs2828 = ((IData)(vlSelf->_cp___05Fs9832) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_mprv));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___io_singleStep_output 
        = ((IData)(vlSelf->_cp___05Fs9832) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_dcsr_step));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT____VdfgTmp_hbdaf4d7e__0 
        = (0xfU & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_chain)) 
                   & ((IData)(vlSelf->_cp___05Fs9832) 
                      & ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_m) 
                           << 3U) | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_s) 
                                      << 1U) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_u))) 
                         >> (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)))));
    vlSelf->_rs___05Fs3008 = vlSelf->_mc___05Fs2815;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__allow_sfence_vma 
        = (1U & ((~ ((IData)(vlSelf->_cp___05Fs9839) 
                     & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_tvm))) 
                 | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv) 
                    >> 1U)));
    vlSelf->_mc___05Fs2808 = vlSelf->_mc___05Fs2805;
    vlSelf->_mc___05Fs2811 = vlSelf->_mc___05Fs2805;
    vlSelf->_mc___05Fs2835 = vlSelf->_mc___05Fs2805;
    vlSelf->_mc___05Fs2836 = vlSelf->_mc___05Fs2805;
    vlSelf->_mc___05Fs2837 = vlSelf->_mc___05Fs2805;
    vlSelf->_mc___05Fs2838 = vlSelf->_mc___05Fs2805;
    vlSelf->_mc___05Fs2840 = vlSelf->_mc___05Fs2805;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_31 
        = (0xffffffffffULL & (~ ((0xfffffffffcULL & 
                                  ((~ (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_sepc 
                                       >> 2U)) << 2U)) 
                                 | (QData)((IData)(
                                                   (3U 
                                                    & (1U 
                                                       | ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_sepc)) 
                                                          | (2U 
                                                             & ((~ (IData)(vlSelf->_mc___05Fs2805)) 
                                                                << 1U))))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_29 
        = (0xffffffffffULL & (~ ((0xfffffffffcULL & 
                                  ((~ (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_dpc 
                                       >> 2U)) << 2U)) 
                                 | (QData)((IData)(
                                                   (3U 
                                                    & (1U 
                                                       | ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_dpc)) 
                                                          | (2U 
                                                             & ((~ (IData)(vlSelf->_mc___05Fs2805)) 
                                                                << 1U))))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_27 
        = (0xffffffffffULL & (~ ((0xfffffffffcULL & 
                                  ((~ (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mepc 
                                       >> 2U)) << 2U)) 
                                 | (QData)((IData)(
                                                   (3U 
                                                    & (1U 
                                                       | ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mepc)) 
                                                          | (2U 
                                                             & ((~ (IData)(vlSelf->_mc___05Fs2805)) 
                                                                << 1U))))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_7 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l)) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_6 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l)) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_5 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l)) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_4 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l)) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_3 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l)) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_2 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l)) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_1 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l)) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l)) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->_mc___05Fs1430 = (1U & (~ (IData)(vlSelf->_mc___05Fs1402)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pagesMasked_4 
        = ((IData)(vlSelf->_mc___05Fs1484) ? vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pages_4
            : 0U);
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pagesMasked_5 
        = ((IData)(vlSelf->_mc___05Fs1485) ? vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pages_5
            : 0U);
    vlSelf->_cp___05Fs9336 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s2_valid) 
                              & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT___GEN_12)));
    vlSelf->_cp___05Fs9653 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s2_tl_error) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_valid));
    vlSelf->_rs___05Fs2075 = vlSelf->_mc___05Fs1360;
    vlSelf->_rs___05Fs2076 = vlSelf->_mc___05Fs1361;
    vlSelf->_rs___05Fs2077 = vlSelf->_mc___05Fs1362;
    vlSelf->_rs___05Fs2078 = vlSelf->_mc___05Fs1363;
    vlSelf->_cp___05Fs11435 = vlSelf->_cp___05Fs11426;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_33 
        = ((IData)(vlSelf->_cp___05Fs11429) | (IData)(vlSelf->_cp___05Fs11426));
    vlSelf->_mc___05Fs3706 = vlSelf->TestHarness__DOT__mmio_mem__DOT__srams__DOT__w_sel1;
    vlSelf->_rs___05Fs4188 = vlSelf->TestHarness__DOT__mmio_mem__DOT__srams__DOT__w_echo_real_last;
    vlSelf->_rs___05Fs4187 = vlSelf->TestHarness__DOT__mmio_mem__DOT__srams__DOT__w_id;
    vlSelf->_mc___05Fs3722 = vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq_q__DOT__full;
    vlSelf->_cp___05Fs13856 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq_q__DOT__full)));
    vlSelf->_mc___05Fs3698 = vlSelf->TestHarness__DOT__mem__DOT__axi4frag__DOT__in_w_deq_q__DOT__full;
    vlSelf->_cp___05Fs13742 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4frag__DOT__in_w_deq_q__DOT__full)));
    vlSelf->_cp___05Fs13772 = ((~ (IData)(vlSelf->_mc___05Fs3717)) 
                               & (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__srams__DOT__w_full));
    vlSelf->TestHarness__DOT__mmio_mem__DOT__srams__DOT___GEN_1 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__srams__DOT__w_full)) 
                 | (~ (IData)(vlSelf->_mc___05Fs3717))));
    vlSelf->_cp___05Fs13823 = ((~ (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT__empty)) 
                               & (IData)(vlSelf->_mc___05Fs3729));
    if (vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_q__DOT__full) {
        vlSelf->_mc___05Fs3720 = 1U;
        vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_size 
            = (7U & (IData)((vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 0x2bU)));
        vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr 
            = (0x7fffffffU & (IData)((vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_q__DOT__ram 
                                      >> 4U)));
        vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst 
            = (3U & (IData)((vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 0x2eU)));
        vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_len 
            = (0xffU & (IData)((vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_q__DOT__ram 
                                >> 0x23U)));
    } else {
        vlSelf->_mc___05Fs3720 = 0U;
        vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_size 
            = (7U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeOut_ar_deq_q__DOT___ram_ext_R0_data 
                             >> 0x2bU)));
        vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr 
            = (0x7fffffffU & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeOut_ar_deq_q__DOT___ram_ext_R0_data 
                                      >> 4U)));
        vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst 
            = (3U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeOut_ar_deq_q__DOT___ram_ext_R0_data 
                             >> 0x2eU)));
        vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_len 
            = (0xffU & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeOut_ar_deq_q__DOT___ram_ext_R0_data 
                                >> 0x23U)));
    }
    vlSelf->_cp___05Fs13844 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_q__DOT__full)));
    if (vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelf->_mc___05Fs3721 = 1U;
        vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size 
            = (7U & (IData)((vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 0x2bU)));
        vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr 
            = (0x7fffffffU & (IData)((vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                                      >> 4U)));
        vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst 
            = (3U & (IData)((vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 0x2eU)));
        vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len 
            = (0xffU & (IData)((vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                                >> 0x23U)));
    } else {
        vlSelf->_mc___05Fs3721 = 0U;
        vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size 
            = (7U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeOut_aw_deq_q__DOT___ram_ext_R0_data 
                             >> 0x2bU)));
        vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr 
            = (0x7fffffffU & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeOut_aw_deq_q__DOT___ram_ext_R0_data 
                                      >> 4U)));
        vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst 
            = (3U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeOut_aw_deq_q__DOT___ram_ext_R0_data 
                             >> 0x2eU)));
        vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len 
            = (0xffU & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeOut_aw_deq_q__DOT___ram_ext_R0_data 
                                >> 0x23U)));
    }
    vlSelf->_cp___05Fs13850 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_q_1__DOT__full)));
    vlSelf->_mc___05Fs3708 = vlSelf->TestHarness__DOT__mmio_mem__DOT__srams__DOT__r_sel1;
    vlSelf->_rs___05Fs4193 = vlSelf->TestHarness__DOT__mmio_mem__DOT__srams__DOT__r_echo_real_last;
    vlSelf->_rs___05Fs4192 = vlSelf->TestHarness__DOT__mmio_mem__DOT__srams__DOT__r_id;
    vlSelf->_cp___05Fs13784 = ((~ (IData)(vlSelf->_mc___05Fs3719)) 
                               & (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__srams__DOT__r_full));
    vlSelf->_rs___05Fs4195 = vlSelf->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_0;
    vlSelf->_rs___05Fs4196 = vlSelf->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_1;
    vlSelf->_rs___05Fs4197 = vlSelf->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_2;
    vlSelf->_rs___05Fs4198 = vlSelf->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_3;
    vlSelf->_rs___05Fs4199 = vlSelf->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_4;
    vlSelf->_rs___05Fs4200 = vlSelf->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_5;
    vlSelf->_rs___05Fs4201 = vlSelf->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_6;
    vlSelf->_rs___05Fs4202 = vlSelf->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_7;
    vlSelf->TestHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG 
        = vlSelf->_cp___05Fs13785;
    vlSelf->_mc___05Fs3696 = vlSelf->TestHarness__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__full;
    vlSelf->_cp___05Fs13730 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__full)));
    vlSelf->TestHarness__DOT__mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst 
        = (3U & ((IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__full)
                  ? (IData)((vlSelf->TestHarness__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 0x2fU)) : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_burst)));
    if (vlSelf->TestHarness__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelf->_mc___05Fs3697 = 1U;
        vlSelf->TestHarness__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst 
            = (3U & (IData)((vlSelf->TestHarness__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 0x2fU)));
    } else {
        vlSelf->_mc___05Fs3697 = 0U;
        vlSelf->TestHarness__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst 
            = (3U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_burst));
    }
    vlSelf->_cp___05Fs13736 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full)));
    vlSelf->_cp___05Fs11120 = vlSelf->_cp___05Fs11118;
    vlSelf->_cp___05Fs13843 = vlSelf->_cp___05Fs13811;
    vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_q__DOT___io_deq_valid_output 
        = ((IData)(vlSelf->_cp___05Fs13811) | (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_q__DOT__full));
    vlSelf->_mc___05Fs2493 = (1U & (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_1) 
                                       >> 2U)));
    vlSelf->_mc___05Fs2492 = (1U & (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_1) 
                                       >> 1U)));
    vlSelf->_cp___05Fs13849 = vlSelf->_cp___05Fs13805;
    vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_q_1__DOT___io_deq_valid_output 
        = ((IData)(vlSelf->_cp___05Fs13805) | (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    vlSelf->_cp___05Fs1953 = (1U & (~ (IData)(vlSelf->_mc___05Fs187)));
    vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq_q__DOT___io_deq_valid_output 
        = ((IData)(vlSelf->_cp___05Fs13855) | (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_w_deq_q__DOT__full));
    vlSelf->_mc___05Fs228 = vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__full;
    vlSelf->_cp___05Fs1952 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__full)));
    vlSelf->_cp___05Fs13838 = ((IData)(vlSelf->_cp___05Fs13817) 
                               & (~ (IData)(vlSelf->_mc___05Fs190)));
    vlSelf->_cp___05Fs13818 = ((~ (IData)(vlSelf->_mc___05Fs190)) 
                               & (IData)(vlSelf->_cp___05Fs13817));
    vlSelf->_cp___05Fs1635 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT__empty)) 
                              & (5U == (0xfU & vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->_cp___05Fs1637 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT__empty)) 
                              & (6U == (0xfU & vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->_cp___05Fs1639 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT__empty)) 
                              & (7U == (0xfU & vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->_cp___05Fs1641 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT__empty)) 
                              & (8U == (0xfU & vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->_cp___05Fs1643 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT__empty)) 
                              & (9U == (0xfU & vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->_cp___05Fs1645 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT__empty)) 
                              & (0xaU == (0xfU & vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->_cp___05Fs1647 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT__empty)) 
                              & (0xbU == (0xfU & vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->_cp___05Fs1649 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT__empty)) 
                              & (0xcU == (0xfU & vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->_cp___05Fs1651 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT__empty)) 
                              & (0xdU == (0xfU & vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->_cp___05Fs1653 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT__empty)) 
                              & (0xeU == (0xfU & vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->_cp___05Fs1655 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT__empty)) 
                              & (0xfU == (0xfU & vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->_cp___05Fs1616 = (1U & (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT__empty) 
                                       | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full) 
                                            << 4U) 
                                           | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full) 
                                               << 3U) 
                                              | ((4U 
                                                  & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_1__DOT__empty)) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue8_BundleMap__DOT__empty)) 
                                                        << 1U)) 
                                                    | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full))))) 
                                          >> (0xfU 
                                              & vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])))));
    vlSelf->_cp___05Fs10602 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_e_q__DOT__empty)));
    vlSelf->_mc___05Fs2468 = (1U & (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r) 
                                       >> 2U)));
    vlSelf->_mc___05Fs2467 = (1U & (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r) 
                                       >> 1U)));
    vlSelf->_cp___05Fs2255 = (1U & (~ (IData)(vlSelf->_mc___05Fs264)));
    vlSelf->_cp___05Fs2658 = vlSelf->_cp___05Fs2381;
    vlSelf->_cp___05Fs2472 = ((IData)(vlSelf->_cp___05Fs2381) 
                              & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT__d_first_counter)));
    vlSelf->_cp___05Fs2749 = ((IData)(vlSelf->_cp___05Fs2381) 
                              & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT__d_first_counter)));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_63 
        = ((IData)(vlSelf->_cp___05Fs2381) & (IData)(vlSelf->_mc___05Fs259));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_63 
        = ((IData)(vlSelf->_cp___05Fs2381) & (IData)(vlSelf->_mc___05Fs272));
    vlSelf->_cp___05Fs2660 = vlSelf->_cp___05Fs2383;
    vlSelf->_cp___05Fs2672 = vlSelf->_cp___05Fs2395;
    vlSelf->_cp___05Fs2687 = vlSelf->_cp___05Fs2410;
    vlSelf->_cp___05Fs2702 = vlSelf->_cp___05Fs2425;
    vlSelf->_cp___05Fs2711 = vlSelf->_cp___05Fs2434;
    vlSelf->_cp___05Fs2720 = vlSelf->_cp___05Fs2443;
    vlSelf->_cp___05Fs2804 = vlSelf->_cp___05Fs2527;
    vlSelf->_cp___05Fs2474 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_48)));
    vlSelf->_cp___05Fs2476 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_49)));
    vlSelf->_cp___05Fs2478 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_50)));
    vlSelf->_cp___05Fs2480 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_51)));
    vlSelf->_cp___05Fs2482 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_52)));
    vlSelf->_cp___05Fs2505 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_75)));
    vlSelf->_cp___05Fs2524 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_84)));
    vlSelf->_cp___05Fs2529 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_85)));
    vlSelf->_cp___05Fs2751 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_48)));
    vlSelf->_cp___05Fs2753 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_49)));
    vlSelf->_cp___05Fs2755 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_50)));
    vlSelf->_cp___05Fs2757 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_51)));
    vlSelf->_cp___05Fs2759 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_52)));
    vlSelf->_cp___05Fs2782 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_75)));
    vlSelf->_cp___05Fs2801 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_84)));
    vlSelf->_cp___05Fs2806 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_85)));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_73 
        = (((7U & vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
            == ((0x17U >= (0x1fU & ((IData)(3U) * (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_55 
                                                              >> 1U))))))
                 ? (7U & (0x911240U >> (0x1fU & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_55 
                                                             >> 1U)))))))
                 : 0U)) | ((7U & vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
                           == ((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_55 
                                                               >> 1U))))))
                                ? (7U & (0x951240U 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_55 
                                                              >> 1U)))))))
                                : 0U)));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_73 
        = (((7U & vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
            == ((0x17U >= (0x1fU & ((IData)(3U) * (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_55 
                                                              >> 1U))))))
                 ? (7U & (0x911240U >> (0x1fU & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_55 
                                                             >> 1U)))))))
                 : 0U)) | ((7U & vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
                           == ((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_55 
                                                               >> 1U))))))
                                ? (7U & (0x951240U 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_55 
                                                              >> 1U)))))))
                                : 0U)));
    vlSelf->_cp___05Fs2418 = vlSelf->_cp___05Fs2403;
    vlSelf->_cp___05Fs2680 = vlSelf->_cp___05Fs2403;
    vlSelf->_cp___05Fs2695 = vlSelf->_cp___05Fs2403;
    vlSelf->_cp___05Fs2420 = vlSelf->_cp___05Fs2405;
    vlSelf->_cp___05Fs2682 = vlSelf->_cp___05Fs2405;
    vlSelf->_cp___05Fs2697 = vlSelf->_cp___05Fs2405;
    vlSelf->_cp___05Fs2401 = vlSelf->_cp___05Fs2388;
    vlSelf->_cp___05Fs2416 = vlSelf->_cp___05Fs2388;
    vlSelf->_cp___05Fs2665 = vlSelf->_cp___05Fs2388;
    vlSelf->_cp___05Fs2678 = vlSelf->_cp___05Fs2388;
    vlSelf->_cp___05Fs2693 = vlSelf->_cp___05Fs2388;
    vlSelf->_cp___05Fs2429 = vlSelf->_cp___05Fs2390;
    vlSelf->_cp___05Fs2438 = vlSelf->_cp___05Fs2390;
    vlSelf->_cp___05Fs2447 = vlSelf->_cp___05Fs2390;
    vlSelf->_cp___05Fs2667 = vlSelf->_cp___05Fs2390;
    vlSelf->_cp___05Fs2706 = vlSelf->_cp___05Fs2390;
    vlSelf->_cp___05Fs2715 = vlSelf->_cp___05Fs2390;
    vlSelf->_cp___05Fs2724 = vlSelf->_cp___05Fs2390;
    vlSelf->_cp___05Fs2671 = vlSelf->_cp___05Fs2394;
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_53 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT__denied) 
           == (IData)(vlSelf->_cp___05Fs2394));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_53 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT__denied) 
           == (IData)(vlSelf->_cp___05Fs2394));
    vlSelf->_cp___05Fs2407 = vlSelf->_cp___05Fs2392;
    vlSelf->_cp___05Fs2431 = vlSelf->_cp___05Fs2392;
    vlSelf->_cp___05Fs2449 = vlSelf->_cp___05Fs2392;
    vlSelf->_cp___05Fs2669 = vlSelf->_cp___05Fs2392;
    vlSelf->_cp___05Fs2684 = vlSelf->_cp___05Fs2392;
    vlSelf->_cp___05Fs2708 = vlSelf->_cp___05Fs2392;
    vlSelf->_cp___05Fs2726 = vlSelf->_cp___05Fs2392;
    vlSelf->_mc___05Fs294 = ((IData)(vlSelf->_cp___05Fs2392) 
                             | (IData)(vlSelf->_cp___05Fs2394));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_35 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs2394)) 
                 | (IData)(vlSelf->_cp___05Fs2392)));
    vlSelf->_cp___05Fs2661 = vlSelf->_cp___05Fs2384;
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h788cf908__0 
        = ((IData)(vlSelf->_mc___05Fs262) & (IData)(vlSelf->_cp___05Fs2384));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT____VdfgTmp_h788cf908__0 
        = ((IData)(vlSelf->_mc___05Fs275) & (IData)(vlSelf->_cp___05Fs2384));
    vlSelf->_mc___05Fs316 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___q_b_deq_q_io_deq_bits_id)
                                    ? (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__ram_ext__DOT__Memory
                                       [vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__deq_ptr_value] 
                                       >> 7U) : (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__ram_ext__DOT__Memory
                                                 [vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__deq_ptr_value] 
                                                 >> 7U)));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__b_allow 
        = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___q_b_deq_q_io_deq_bits_id)
             ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__b_count_1)
             : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__b_count_0)) 
           != ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___q_b_deq_q_io_deq_bits_id)
                ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__w_count_1)
                : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__w_count_0)));
    vlSelf->_mc___05Fs258 = vlSelf->_mc___05Fs254;
    vlSelf->_mc___05Fs261 = vlSelf->_mc___05Fs254;
    vlSelf->_mc___05Fs267 = vlSelf->_mc___05Fs254;
    vlSelf->_mc___05Fs271 = vlSelf->_mc___05Fs254;
    vlSelf->_mc___05Fs274 = vlSelf->_mc___05Fs254;
    vlSelf->_mc___05Fs280 = vlSelf->_mc___05Fs254;
    vlSelf->_mc___05Fs295 = vlSelf->_mc___05Fs254;
    vlSelf->_mc___05Fs297 = vlSelf->_mc___05Fs254;
    vlSelf->_cp___05Fs2827 = ((IData)(vlSelf->_cp___05Fs2381) 
                              & (IData)(vlSelf->_mc___05Fs254));
    vlSelf->_cp___05Fs2833 = ((~ (IData)(vlSelf->_mc___05Fs254)) 
                              & (IData)(vlSelf->_cp___05Fs2381));
    vlSelf->_cp___05Fs2182 = ((IData)(vlSelf->_cp___05Fs1991) 
                              & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__a_first_counter)));
    vlSelf->_cp___05Fs2211 = ((IData)(vlSelf->_cp___05Fs1991) 
                              & (IData)(vlSelf->_mc___05Fs244));
    vlSelf->_cp___05Fs2021 = vlSelf->_cp___05Fs2004;
    vlSelf->_cp___05Fs2025 = vlSelf->_cp___05Fs2008;
    vlSelf->_cp___05Fs2029 = vlSelf->_cp___05Fs2010;
    vlSelf->_cp___05Fs2184 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_44)));
    vlSelf->_cp___05Fs2186 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_45)));
    vlSelf->_cp___05Fs2188 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_46)));
    vlSelf->_cp___05Fs2190 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_47)));
    vlSelf->_cp___05Fs2192 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_48)));
    vlSelf->_cp___05Fs2214 = (1U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_66));
    vlSelf->_mc___05Fs239 = vlSelf->_mc___05Fs237;
    vlSelf->_mc___05Fs243 = vlSelf->_mc___05Fs237;
    vlSelf->_cp___05Fs1998 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_8)));
    vlSelf->_cp___05Fs2031 = vlSelf->_cp___05Fs2012;
    vlSelf->_cp___05Fs2046 = vlSelf->_cp___05Fs2012;
    vlSelf->_cp___05Fs2103 = vlSelf->_cp___05Fs2012;
    vlSelf->_cp___05Fs2027 = (1U & (~ (IData)(vlSelf->_cp___05Fs2042)));
    vlSelf->_cp___05Fs2055 = vlSelf->_cp___05Fs2042;
    vlSelf->_cp___05Fs2066 = vlSelf->_cp___05Fs2042;
    vlSelf->_cp___05Fs2006 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_2));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_25 
        = ((0xdU > (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                            >> 6U))) & ((4U > (0xfU 
                                               & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                  >> 6U))) 
                                        & ((0U == (0xfffffU 
                                                   & ((vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[1U] 
                                                       << 6U) 
                                                      | (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                         >> 0x1aU)))) 
                                           | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_12) 
                                              | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_15) 
                                                 | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_16))))));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_13 
        = ((0xdU > (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                            >> 6U))) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_12));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc) 
           | (IData)(((0x40U == (0xc0U & vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U])) 
                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__mask_eq_2))));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc) 
           | (IData)(((0x40U == (0xc0U & vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U])) 
                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__mask_eq_3))));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc_1) 
           | (IData)(((0x40U == (0xc0U & vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U])) 
                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__mask_eq_4))));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc_1) 
           | (IData)(((0x40U == (0xc0U & vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U])) 
                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__mask_eq_5))));
    vlSelf->_cp___05Fs10595 = ((~ (IData)(vlSelf->_mc___05Fs3402)) 
                               & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_todo));
    vlSelf->_cp___05Fs10504 = ((IData)(vlSelf->_cp___05Fs10284) 
                               & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__b_first_counter)));
    vlSelf->_cp___05Fs2141 = vlSelf->_cp___05Fs2126;
    vlSelf->_cp___05Fs2143 = vlSelf->_cp___05Fs2128;
    vlSelf->_cp___05Fs2197 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_52)));
    vlSelf->_cp___05Fs2199 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_53)));
    vlSelf->_cp___05Fs2201 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_54)));
    vlSelf->_cp___05Fs2203 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_55)));
    vlSelf->_cp___05Fs2205 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)));
    vlSelf->_cp___05Fs2222 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_75)));
    vlSelf->_cp___05Fs2224 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_76)));
    vlSelf->_cp___05Fs2228 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_79)));
    vlSelf->_cp___05Fs2247 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_88)));
    vlSelf->_cp___05Fs2252 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_89)));
    vlSelf->_cp___05Fs2124 = vlSelf->_cp___05Fs2111;
    vlSelf->_cp___05Fs2139 = vlSelf->_cp___05Fs2111;
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_77 
        = (((7U & vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__nodeIn_d_q__DOT____Vcellinp__ram_ext__W0_data[0U]) 
            == ((0x17U >= (0x1fU & ((IData)(3U) * (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_59 
                                                              >> 1U))))))
                 ? (7U & (0x911240U >> (0x1fU & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_59 
                                                             >> 1U)))))))
                 : 0U)) | ((7U & vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__nodeIn_d_q__DOT____Vcellinp__ram_ext__W0_data[0U]) 
                           == ((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_59 
                                                               >> 1U))))))
                                ? (7U & (0x951240U 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_59 
                                                              >> 1U)))))))
                                : 0U)));
    vlSelf->_mc___05Fs241 = vlSelf->_mc___05Fs238;
    vlSelf->_mc___05Fs245 = vlSelf->_mc___05Fs238;
    vlSelf->_mc___05Fs248 = vlSelf->_mc___05Fs238;
    vlSelf->_cp___05Fs2152 = vlSelf->_cp___05Fs2113;
    vlSelf->_cp___05Fs2161 = vlSelf->_cp___05Fs2113;
    vlSelf->_cp___05Fs2170 = vlSelf->_cp___05Fs2113;
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_57 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__denied) 
           == (IData)(vlSelf->_cp___05Fs2117));
    vlSelf->_cp___05Fs2130 = vlSelf->_cp___05Fs2115;
    vlSelf->_cp___05Fs2154 = vlSelf->_cp___05Fs2115;
    vlSelf->_cp___05Fs2172 = vlSelf->_cp___05Fs2115;
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_38 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs2117)) 
                 | (IData)(vlSelf->_cp___05Fs2115)));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT____VdfgTmp_h788cf908__0 
        = ((IData)(vlSelf->_mc___05Fs249) & (IData)(vlSelf->_cp___05Fs2107));
    vlSelf->_cp___05Fs2195 = ((IData)(vlSelf->_cp___05Fs2104) 
                              & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__d_first_counter)));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_67 
        = ((IData)(vlSelf->_cp___05Fs2104) & (IData)(vlSelf->_mc___05Fs246));
    vlSelf->_cp___05Fs1060 = (1U & (~ (IData)(vlSelf->_mc___05Fs251)));
    vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT___io_in_a_ready_output 
        = ((~ (IData)(vlSelf->_mc___05Fs811)) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT___GEN_2));
    vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_3_io_out_a_valid 
        = ((IData)(vlSelf->_cp___05Fs7546) & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__empty)));
    vlSelf->_cp___05Fs9226 = vlSelf->_mc___05Fs1293;
    vlSelf->_cp___05Fs9279 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_48));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN_3 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4frag_auto_out_aw_bits_id)
                  ? (~ (IData)(vlSelf->_mc___05Fs301))
                  : (~ (IData)(vlSelf->_mc___05Fs300))));
    vlSelf->_mc___05Fs116 = ((~ (IData)(vlSelf->_mc___05Fs3401)) 
                             & (IData)(vlSelf->_mc___05Fs117));
    vlSelf->_cp___05Fs10489 = ((IData)(vlSelf->_cp___05Fs10213) 
                               & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__d_first_counter)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_133 
        = ((IData)(vlSelf->_cp___05Fs10213) & (IData)(vlSelf->_mc___05Fs3393));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_157 
        = ((IData)(vlSelf->_cp___05Fs10213) & (IData)(vlSelf->_mc___05Fs3397));
    vlSelf->_rs___05Fs2515 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_valid;
    vlSelf->_cp___05Fs9380 = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_valid)) 
                                    | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_kill_speculative_tlb_refill)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_18 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_btb_resp_valid) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_valid));
    vlSelf->_cp___05Fs4441 = vlSelf->_cp___05Fs4426;
    vlSelf->_cp___05Fs4443 = vlSelf->_cp___05Fs4428;
    vlSelf->_cp___05Fs4497 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_49)));
    vlSelf->_cp___05Fs4499 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_50)));
    vlSelf->_cp___05Fs4501 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_51)));
    vlSelf->_cp___05Fs4503 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_52)));
    vlSelf->_cp___05Fs4505 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_53)));
    vlSelf->_cp___05Fs4528 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_75)));
    vlSelf->_cp___05Fs4547 = (1U & (~ vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_84));
    vlSelf->_cp___05Fs4552 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_85)));
    vlSelf->_cp___05Fs4424 = vlSelf->_cp___05Fs4411;
    vlSelf->_cp___05Fs4439 = vlSelf->_cp___05Fs4411;
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_73 
        = (((7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
            == ((0x17U >= (0x1fU & ((IData)(3U) * (7U 
                                                   & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_56[0U] 
                                                      >> 1U)))))
                 ? (7U & (0x911240U >> (0x1fU & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_56[0U] 
                                                     >> 1U))))))
                 : 0U)) | ((7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
                           == ((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_56[0U] 
                                                       >> 1U)))))
                                ? (7U & (0x951240U 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_56[0U] 
                                                      >> 1U))))))
                                : 0U)));
    vlSelf->_mc___05Fs536 = vlSelf->_mc___05Fs375;
    vlSelf->_mc___05Fs540 = vlSelf->_mc___05Fs375;
    vlSelf->_mc___05Fs544 = vlSelf->_mc___05Fs375;
    vlSelf->_cp___05Fs4409 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__source_ok_1)));
    vlSelf->_cp___05Fs4452 = vlSelf->_cp___05Fs4413;
    vlSelf->_cp___05Fs4461 = vlSelf->_cp___05Fs4413;
    vlSelf->_cp___05Fs4470 = vlSelf->_cp___05Fs4413;
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h788cf908__0 
        = ((IData)(vlSelf->_mc___05Fs545) & (IData)(vlSelf->_cp___05Fs4407));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_54 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__denied) 
           == (IData)(vlSelf->_cp___05Fs4417));
    vlSelf->_cp___05Fs4430 = vlSelf->_cp___05Fs4415;
    vlSelf->_cp___05Fs4454 = vlSelf->_cp___05Fs4415;
    vlSelf->_cp___05Fs4472 = vlSelf->_cp___05Fs4415;
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_35 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs4417)) 
                 | (IData)(vlSelf->_cp___05Fs4415)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_71 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__full)) 
                 | (IData)(vlSelf->_mc___05Fs547)));
    vlSelf->_cp___05Fs4277 = (1U & (~ (IData)(vlSelf->_mc___05Fs547)));
    vlSelf->_cp___05Fs4495 = ((IData)(vlSelf->_cp___05Fs4404) 
                              & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_63 
        = ((IData)(vlSelf->_cp___05Fs4404) & (IData)(vlSelf->_mc___05Fs541));
    vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT___io_in_a_ready_output 
        = ((~ (IData)(vlSelf->_mc___05Fs807)) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT___GEN_2));
    vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_2_io_out_a_valid 
        = ((IData)(vlSelf->_cp___05Fs7529) & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__empty)));
    vlSelf->_rs___05Fs417 = vlSelf->_mc___05Fs304;
    vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT___io_in_a_ready_output 
        = ((~ (IData)(vlSelf->_mc___05Fs803)) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT___GEN_2));
    vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_1_io_out_a_valid 
        = ((IData)(vlSelf->_cp___05Fs7512) & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__empty)));
    vlSelf->_cp___05Fs1631 = ((~ (IData)(vlSelf->_mc___05Fs205)) 
                              & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT__empty)) 
                                 & (4U == (0xfU & vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U]))));
    vlSelf->_cp___05Fs1628 = ((~ (IData)(vlSelf->_mc___05Fs204)) 
                              & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT__empty)) 
                                 & (3U == (0xfU & vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U]))));
    vlSelf->_cp___05Fs1625 = ((~ (IData)(vlSelf->_mc___05Fs203)) 
                              & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT__empty)) 
                                 & (2U == (0xfU & vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U]))));
    vlSelf->_cp___05Fs1622 = ((~ (IData)(vlSelf->_mc___05Fs202)) 
                              & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT__empty)) 
                                 & (1U == (0xfU & vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U]))));
    vlSelf->_cp___05Fs1619 = ((~ (IData)(vlSelf->_mc___05Fs201)) 
                              & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT__empty)) 
                                 & (0U == (0xfU & vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U]))));
    vlSelf->_cp___05Fs1583 = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT__empty)) 
                                    & (((0x10U & ((~ (IData)(vlSelf->_mc___05Fs205)) 
                                                  << 4U)) 
                                        | ((8U & ((~ (IData)(vlSelf->_mc___05Fs204)) 
                                                  << 3U)) 
                                           | ((4U & 
                                               ((~ (IData)(vlSelf->_mc___05Fs203)) 
                                                << 2U)) 
                                              | ((2U 
                                                  & ((~ (IData)(vlSelf->_mc___05Fs202)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (~ (IData)(vlSelf->_mc___05Fs201))))))) 
                                       >> (0xfU & vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U]))));
    vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT___io_in_a_ready_output 
        = ((~ (IData)(vlSelf->_mc___05Fs799)) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT___GEN_2));
    vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_io_out_a_valid 
        = ((IData)(vlSelf->_cp___05Fs7495) & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__empty)));
    vlSelf->_rs___05Fs390 = vlSelf->_mc___05Fs282;
    vlSelf->_cp___05Fs2532 = ((IData)(vlSelf->_mc___05Fs254)
                               ? (IData)(vlSelf->_cp___05Fs2828)
                               : (IData)(vlSelf->_cp___05Fs2834));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4frag_auto_out_ar_bits_id)
                  ? (~ (IData)(vlSelf->_mc___05Fs299))
                  : (~ (IData)(vlSelf->_mc___05Fs298))));
    vlSelf->_rs___05Fs207 = vlSelf->_mc___05Fs195;
    vlSelf->_rs___05Fs206 = vlSelf->_mc___05Fs194;
    vlSelf->_rs___05Fs199 = vlSelf->_mc___05Fs191;
    vlSelf->_rs___05Fs216 = vlSelf->_mc___05Fs200;
    vlSelf->_rs___05Fs215 = vlSelf->_mc___05Fs199;
    vlSelf->_rs___05Fs208 = vlSelf->_mc___05Fs196;
    vlSelf->_cp___05Fs9726 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__load_wb;
    vlSelf->_rs___05Fs2829 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__load_wb_tag;
    vlSelf->_rs___05Fs1846 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_14;
    vlSelf->_rs___05Fs1847 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_15;
    vlSelf->_rs___05Fs1843 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_11;
    vlSelf->_rs___05Fs1844 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_12;
    vlSelf->_rs___05Fs1842 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_10;
    vlSelf->_rs___05Fs2053 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_14;
    vlSelf->_rs___05Fs2054 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_15;
    vlSelf->_rs___05Fs2050 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_11;
    vlSelf->_rs___05Fs2051 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_12;
    vlSelf->_rs___05Fs2049 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_10;
    vlSelf->_cp___05Fs13832 = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT__empty)) 
                                     & ((~ (IData)(vlSelf->_mc___05Fs3729)) 
                                        | (~ (IData)(vlSelf->_mc___05Fs188)))));
    vlSelf->_cp___05Fs1618 = (1U & (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT__empty) 
                                       | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full) 
                                            << 4U) 
                                           | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full) 
                                               << 3U) 
                                              | ((4U 
                                                  & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_3__DOT__empty)) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_2__DOT__empty)) 
                                                        << 1U)) 
                                                    | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full))))) 
                                          >> (0xfU 
                                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))));
    vlSelf->_cp___05Fs3166 = (1U & (~ (IData)(vlSelf->_mc___05Fs429)));
    if (vlSelf->_mc___05Fs218) {
        vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount 
            = (7U & (IData)(((QData)((IData)(((0xf0000U 
                                               & (vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT___ram_ext_R0_data[0U] 
                                                  << 0x10U)) 
                                              | ((0xf000U 
                                                  & (vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT___ram_ext_R0_data[0U] 
                                                     << 0xcU)) 
                                                 | ((0xf00U 
                                                     & (vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT___ram_ext_R0_data[0U] 
                                                        << 8U)) 
                                                    | ((0xf0U 
                                                        & (vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT___ram_ext_R0_data[0U] 
                                                           << 4U)) 
                                                       | (0xfU 
                                                          & vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT___ram_ext_R0_data[0U]))))))) 
                             >> (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id), 2U)))));
        vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size 
            = (0xfU & (IData)(((QData)((IData)(((0xf0000U 
                                                 & (vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT___ram_ext_R0_data[2U] 
                                                    << 0xaU)) 
                                                | ((0xf000U 
                                                    & (vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT___ram_ext_R0_data[2U] 
                                                       << 6U)) 
                                                   | ((0xf00U 
                                                       & (vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT___ram_ext_R0_data[2U] 
                                                          << 2U)) 
                                                      | ((0xf0U 
                                                          & (vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT___ram_ext_R0_data[2U] 
                                                             >> 2U)) 
                                                         | (0xfU 
                                                            & (vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT___ram_ext_R0_data[2U] 
                                                               >> 6U)))))))) 
                               >> (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id), 2U)))));
        vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source 
            = (0x1fU & ((0x4fU >= (0x7fU & ((IData)(5U) 
                                            * (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id))))
                         ? (((0U == (0x1fU & ((IData)(5U) 
                                              * (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id))))
                              ? 0U : (__Vtemp_101[(
                                                   ((IData)(4U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(5U) 
                                                        * (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id)))) 
                                                   >> 5U)] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(5U) 
                                                * (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id)))))) 
                            | (__Vtemp_101[(3U & (((IData)(5U) 
                                                   * (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id)) 
                                                  >> 5U))] 
                               >> (0x1fU & ((IData)(5U) 
                                            * (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id)))))
                         : 0U));
        vlSelf->_cp___05Fs1790 = (1U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__locked));
    } else {
        vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount 
            = (7U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data));
        vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size 
            = (0xfU & (IData)(((QData)((IData)(((0xf0000U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram) 
                                                    << 0x10U)) 
                                                | ((0xf000U 
                                                    & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram) 
                                                       << 0xcU)) 
                                                   | ((0xf00U 
                                                       & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_3__DOT___ram_ext_R0_data) 
                                                          << 8U)) 
                                                      | ((0xf0U 
                                                          & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_2__DOT___ram_ext_R0_data) 
                                                             << 4U)) 
                                                         | (0xfU 
                                                            & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram)))))))) 
                               >> (0x3fU & VL_SHIFTL_III(6,6,32, 
                                                         (0xfU 
                                                          & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data)), 2U)))));
        vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source 
            = (0x1fU & ((0x4fU >= (0x7fU & ((IData)(5U) 
                                            * (0xfU 
                                               & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data)))))
                         ? (((0U == (0x1fU & ((IData)(5U) 
                                              * (0xfU 
                                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data)))))
                              ? 0U : (__Vtemp_102[(
                                                   ((IData)(4U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(5U) 
                                                        * 
                                                        (0xfU 
                                                         & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))) 
                                                   >> 5U)] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(5U) 
                                                * (0xfU 
                                                   & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))))) 
                            | (__Vtemp_102[(3U & (((IData)(5U) 
                                                   * 
                                                   (0xfU 
                                                    & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))) 
                                                  >> 5U))] 
                               >> (0x1fU & ((IData)(5U) 
                                            * (0xfU 
                                               & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))))
                         : 0U));
        vlSelf->_cp___05Fs1790 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT__empty)));
    }
    vlSelf->_cp___05Fs3655 = ((IData)(vlSelf->_cp___05Fs3564) 
                              & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_70 
        = ((IData)(vlSelf->_cp___05Fs3564) & (IData)(vlSelf->_mc___05Fs423));
    vlSelf->_cp___05Fs3987 = vlSelf->_cp___05Fs3710;
    vlSelf->_cp___05Fs3657 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_56)));
    vlSelf->_cp___05Fs3659 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_57)));
    vlSelf->_cp___05Fs3661 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_58)));
    vlSelf->_cp___05Fs3663 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_59)));
    vlSelf->_cp___05Fs3665 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_60)));
    vlSelf->_cp___05Fs3688 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_82)));
    vlSelf->_cp___05Fs3707 = (1U & (~ vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_91));
    vlSelf->_cp___05Fs3712 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_92)));
    vlSelf->_cp___05Fs3936 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_58)));
    vlSelf->_cp___05Fs3938 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_59)));
    vlSelf->_cp___05Fs3940 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_60)));
    vlSelf->_cp___05Fs3942 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_61)));
    vlSelf->_cp___05Fs3965 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_83)));
    vlSelf->_cp___05Fs3984 = (1U & (~ vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_92));
    vlSelf->_cp___05Fs3989 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_93)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_80 
        = (((7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
            == ((0x17U >= (0x1fU & ((IData)(3U) * (7U 
                                                   & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_63[0U] 
                                                      >> 1U)))))
                 ? (7U & (0x911240U >> (0x1fU & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_63[0U] 
                                                     >> 1U))))))
                 : 0U)) | ((7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
                           == ((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_63[0U] 
                                                       >> 1U)))))
                                ? (7U & (0x951240U 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_63[0U] 
                                                      >> 1U))))))
                                : 0U)));
    vlSelf->_cp___05Fs3601 = vlSelf->_cp___05Fs3586;
    vlSelf->_cp___05Fs3863 = vlSelf->_cp___05Fs3586;
    vlSelf->_cp___05Fs3878 = vlSelf->_cp___05Fs3586;
    vlSelf->_cp___05Fs3603 = vlSelf->_cp___05Fs3588;
    vlSelf->_cp___05Fs3865 = vlSelf->_cp___05Fs3588;
    vlSelf->_cp___05Fs3880 = vlSelf->_cp___05Fs3588;
    vlSelf->_cp___05Fs3584 = vlSelf->_cp___05Fs3571;
    vlSelf->_cp___05Fs3599 = vlSelf->_cp___05Fs3571;
    vlSelf->_cp___05Fs3848 = vlSelf->_cp___05Fs3571;
    vlSelf->_cp___05Fs3861 = vlSelf->_cp___05Fs3571;
    vlSelf->_cp___05Fs3876 = vlSelf->_cp___05Fs3571;
    vlSelf->_cp___05Fs3612 = vlSelf->_cp___05Fs3573;
    vlSelf->_cp___05Fs3621 = vlSelf->_cp___05Fs3573;
    vlSelf->_cp___05Fs3630 = vlSelf->_cp___05Fs3573;
    vlSelf->_cp___05Fs3850 = vlSelf->_cp___05Fs3573;
    vlSelf->_cp___05Fs3889 = vlSelf->_cp___05Fs3573;
    vlSelf->_cp___05Fs3898 = vlSelf->_cp___05Fs3573;
    vlSelf->_cp___05Fs3907 = vlSelf->_cp___05Fs3573;
    vlSelf->_mc___05Fs422 = vlSelf->_mc___05Fs418;
    vlSelf->_mc___05Fs426 = vlSelf->_mc___05Fs418;
    vlSelf->_mc___05Fs494 = vlSelf->_mc___05Fs418;
    vlSelf->_cp___05Fs3569 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__monitor__DOT__source_ok_1)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h788cf908__0 
        = ((IData)(vlSelf->_mc___05Fs427) & (IData)(vlSelf->_cp___05Fs3567));
    vlSelf->_cp___05Fs3590 = vlSelf->_cp___05Fs3575;
    vlSelf->_cp___05Fs3614 = vlSelf->_cp___05Fs3575;
    vlSelf->_cp___05Fs3632 = vlSelf->_cp___05Fs3575;
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_61 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__monitor__DOT__denied) 
           == (IData)(vlSelf->_cp___05Fs3577));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_42 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs3577)) 
                 | (IData)(vlSelf->_cp___05Fs3575)));
    vlSelf->_cp___05Fs3617 = vlSelf->_mc___05Fs496;
    vlSelf->_cp___05Fs4010 = ((IData)(vlSelf->_cp___05Fs4011) 
                              & (IData)(vlSelf->_mc___05Fs496));
    vlSelf->_cp___05Fs4012 = ((IData)(vlSelf->_mc___05Fs495) 
                              & ((IData)(vlSelf->_cp___05Fs3608) 
                                 & (IData)(vlSelf->_cp___05Fs4011)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__d_drop 
        = ((IData)(vlSelf->_mc___05Fs495) & ((IData)(vlSelf->_mc___05Fs496) 
                                             & (IData)(vlSelf->_cp___05Fs4011)));
    vlSelf->_mc___05Fs3684 = vlSelf->TestHarness__DOT__mem__DOT__srams__DOT__r_sel1;
    vlSelf->_rs___05Fs4120 = vlSelf->TestHarness__DOT__mem__DOT__srams__DOT__r_echo_real_last;
    vlSelf->_rs___05Fs4119 = vlSelf->TestHarness__DOT__mem__DOT__srams__DOT__r_id;
    vlSelf->_rs___05Fs4122 = vlSelf->TestHarness__DOT__mem__DOT__srams__DOT__rdata_r_0;
    vlSelf->_rs___05Fs4123 = vlSelf->TestHarness__DOT__mem__DOT__srams__DOT__rdata_r_1;
    vlSelf->_rs___05Fs4124 = vlSelf->TestHarness__DOT__mem__DOT__srams__DOT__rdata_r_2;
    vlSelf->_rs___05Fs4125 = vlSelf->TestHarness__DOT__mem__DOT__srams__DOT__rdata_r_3;
    vlSelf->_rs___05Fs4126 = vlSelf->TestHarness__DOT__mem__DOT__srams__DOT__rdata_r_4;
    vlSelf->_rs___05Fs4127 = vlSelf->TestHarness__DOT__mem__DOT__srams__DOT__rdata_r_5;
    vlSelf->_rs___05Fs4128 = vlSelf->TestHarness__DOT__mem__DOT__srams__DOT__rdata_r_6;
    vlSelf->_rs___05Fs4129 = vlSelf->TestHarness__DOT__mem__DOT__srams__DOT__rdata_r_7;
    vlSelf->TestHarness__DOT__mem__DOT__srams__DOT__rdata_REG 
        = vlSelf->_cp___05Fs13671;
    vlSelf->_mc___05Fs3682 = vlSelf->TestHarness__DOT__mem__DOT__srams__DOT__w_sel1;
    vlSelf->_rs___05Fs4115 = vlSelf->TestHarness__DOT__mem__DOT__srams__DOT__w_echo_real_last;
    vlSelf->_rs___05Fs4114 = vlSelf->TestHarness__DOT__mem__DOT__srams__DOT__w_id;
    vlSelf->_cp___05Fs13658 = ((~ (IData)(vlSelf->_mc___05Fs3693)) 
                               & (IData)(vlSelf->TestHarness__DOT__mem__DOT__srams__DOT__w_full));
    vlSelf->TestHarness__DOT__mem__DOT__srams__DOT___GEN_1 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__mem__DOT__srams__DOT__w_full)) 
                 | (~ (IData)(vlSelf->_mc___05Fs3693))));
    vlSelf->_cp___05Fs13709 = ((~ (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT__empty)) 
                               & (IData)(vlSelf->_mc___05Fs3705));
    vlSelf->_cp___05Fs4204 = ((IData)(vlSelf->_cp___05Fs4013) 
                              & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_counter)));
    vlSelf->_cp___05Fs4563 = ((IData)(vlSelf->_cp___05Fs4013) 
                              & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__full)));
    vlSelf->_cp___05Fs4203 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__full)) 
                              & (IData)(vlSelf->_cp___05Fs4013));
    vlSelf->_cp___05Fs4233 = ((IData)(vlSelf->_cp___05Fs4013) 
                              & (IData)(vlSelf->_mc___05Fs512));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_81 
        = (1U & ((~ (IData)(vlSelf->_mc___05Fs250)) 
                 | (IData)(vlSelf->_mc___05Fs264)));
    vlSelf->_cp___05Fs2540 = ((IData)(vlSelf->_cp___05Fs1991) 
                              & (~ (IData)(vlSelf->_mc___05Fs250)));
    vlSelf->_cp___05Fs2181 = ((~ (IData)(vlSelf->_mc___05Fs250)) 
                              & (IData)(vlSelf->_cp___05Fs1991));
    vlSelf->_cp___05Fs987 = ((IData)(vlSelf->_cp___05Fs796) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor__DOT__a_first_counter)));
    vlSelf->_cp___05Fs1016 = ((IData)(vlSelf->_cp___05Fs796) 
                              & (IData)(vlSelf->_mc___05Fs129));
    vlSelf->_cp___05Fs896 = vlSelf->_cp___05Fs101;
    vlSelf->_cp___05Fs904 = vlSelf->_cp___05Fs109;
    vlSelf->_cp___05Fs818 = vlSelf->_cp___05Fs23;
    vlSelf->_cp___05Fs837 = vlSelf->_cp___05Fs42;
    vlSelf->_cp___05Fs839 = vlSelf->_cp___05Fs44;
    vlSelf->_cp___05Fs852 = vlSelf->_cp___05Fs57;
    vlSelf->_cp___05Fs801 = vlSelf->_cp___05Fs6;
    vlSelf->_cp___05Fs863 = vlSelf->_cp___05Fs68;
    vlSelf->_cp___05Fs874 = vlSelf->_cp___05Fs79;
    vlSelf->_cp___05Fs882 = vlSelf->_cp___05Fs87;
    vlSelf->_cp___05Fs90 = vlSelf->_cp___05Fs885;
    vlSelf->_cp___05Fs98 = vlSelf->_cp___05Fs893;
    vlSelf->_cp___05Fs194 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_44)));
    vlSelf->_cp___05Fs196 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_45)));
    vlSelf->_cp___05Fs198 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_46)));
    vlSelf->_cp___05Fs200 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_47)));
    vlSelf->_cp___05Fs202 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_48)));
    vlSelf->_cp___05Fs224 = (1U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_66));
    vlSelf->_cp___05Fs989 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_44)));
    vlSelf->_cp___05Fs991 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_45)));
    vlSelf->_cp___05Fs993 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_46)));
    vlSelf->_cp___05Fs995 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_47)));
    vlSelf->_cp___05Fs997 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_48)));
    vlSelf->_cp___05Fs1019 = (1U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_66));
    vlSelf->_cp___05Fs31 = vlSelf->_cp___05Fs14;
    vlSelf->_cp___05Fs809 = vlSelf->_cp___05Fs14;
    vlSelf->_cp___05Fs826 = vlSelf->_cp___05Fs14;
    vlSelf->_cp___05Fs35 = vlSelf->_cp___05Fs18;
    vlSelf->_cp___05Fs813 = vlSelf->_cp___05Fs18;
    vlSelf->_cp___05Fs830 = vlSelf->_cp___05Fs18;
    vlSelf->_cp___05Fs39 = vlSelf->_cp___05Fs20;
    vlSelf->_cp___05Fs815 = vlSelf->_cp___05Fs20;
    vlSelf->_cp___05Fs834 = vlSelf->_cp___05Fs20;
    vlSelf->_cp___05Fs25 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_8)));
    vlSelf->_mc___05Fs124 = vlSelf->_mc___05Fs0;
    vlSelf->_mc___05Fs128 = vlSelf->_mc___05Fs0;
    vlSelf->_mc___05Fs174 = vlSelf->_mc___05Fs0;
    vlSelf->_mc___05Fs4 = vlSelf->_mc___05Fs0;
    vlSelf->_mc___05Fs46 = vlSelf->_mc___05Fs0;
    vlSelf->_cp___05Fs65 = vlSelf->_cp___05Fs52;
    vlSelf->_cp___05Fs76 = vlSelf->_cp___05Fs52;
    vlSelf->_cp___05Fs847 = vlSelf->_cp___05Fs52;
    vlSelf->_cp___05Fs860 = vlSelf->_cp___05Fs52;
    vlSelf->_cp___05Fs871 = vlSelf->_cp___05Fs52;
    vlSelf->_cp___05Fs37 = (1U & (~ (IData)(vlSelf->_cp___05Fs52)));
    vlSelf->_cp___05Fs107 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_2));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_25 
        = ((0xdU > (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U))) & ((4U > (0xfU 
                                               & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 6U))) 
                                        & ((0U == (0xfffffU 
                                                   & ((vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                       << 6U) 
                                                      | (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x1aU)))) 
                                           | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_12) 
                                              | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_15) 
                                                 | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_16))))));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_13 
        = ((0xdU > (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U))) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_12));
    vlSelf->_cp___05Fs22 = vlSelf->_cp___05Fs113;
    vlSelf->_cp___05Fs41 = vlSelf->_cp___05Fs113;
    vlSelf->_cp___05Fs56 = vlSelf->_cp___05Fs113;
    vlSelf->_cp___05Fs817 = vlSelf->_cp___05Fs113;
    vlSelf->_cp___05Fs836 = vlSelf->_cp___05Fs113;
    vlSelf->_cp___05Fs851 = vlSelf->_cp___05Fs113;
    vlSelf->_cp___05Fs908 = vlSelf->_cp___05Fs113;
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc) 
           | (IData)(((0x40U == (0xc0U & vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_2))));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc) 
           | (IData)(((0x40U == (0xc0U & vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_3))));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_1) 
           | (IData)(((0x40U == (0xc0U & vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_4))));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_1) 
           | (IData)(((0x40U == (0xc0U & vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_5))));
    vlSelf->_mc___05Fs170 = (1U & (~ (IData)(vlSelf->_mc___05Fs171)));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_17 
        = (0U == (((IData)(vlSelf->_mc___05Fs171) << 2U) 
                  | (3U & (~ ((vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                               << 0x15U) | (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                            >> 0xbU))))));
    vlSelf->_mc___05Fs172 = (1U & (~ (IData)(vlSelf->_mc___05Fs173)));
    vlSelf->_cp___05Fs13670 = ((~ (IData)(vlSelf->_mc___05Fs3695)) 
                               & (IData)(vlSelf->TestHarness__DOT__mem__DOT__srams__DOT__r_full));
    vlSelf->_cp___05Fs6059 = (1U & (~ ((IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT__empty) 
                                       | (((0x8000U 
                                            & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_15__DOT__empty)) 
                                               << 0xfU)) 
                                           | ((0x4000U 
                                               & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_14__DOT__empty)) 
                                                  << 0xeU)) 
                                              | ((0x2000U 
                                                  & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_13__DOT__empty)) 
                                                     << 0xdU)) 
                                                 | ((0x1000U 
                                                     & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_12__DOT__empty)) 
                                                        << 0xcU)) 
                                                    | ((0x800U 
                                                        & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_11__DOT__empty)) 
                                                           << 0xbU)) 
                                                       | ((0x400U 
                                                           & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_10__DOT__empty)) 
                                                              << 0xaU)) 
                                                          | ((0x200U 
                                                              & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_9__DOT__empty)) 
                                                                 << 9U)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_8__DOT__empty)) 
                                                                    << 8U)) 
                                                                | ((0x80U 
                                                                    & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_7__DOT__empty)) 
                                                                       << 7U)) 
                                                                   | ((0x40U 
                                                                       & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_6__DOT__empty)) 
                                                                          << 6U)) 
                                                                      | ((0x20U 
                                                                          & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_5__DOT__empty)) 
                                                                             << 5U)) 
                                                                         | ((0x10U 
                                                                             & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_4__DOT__empty)) 
                                                                                << 4U)) 
                                                                            | ((8U 
                                                                                & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_3__DOT__empty)) 
                                                                                << 3U)) 
                                                                               | ((4U 
                                                                                & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_2__DOT__empty)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_1__DOT__empty)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap__DOT__empty)))))))))))))))))) 
                                          >> (0xfU 
                                              & vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])))));
    vlSelf->_cp___05Fs13703 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT__empty)));
    vlSelf->_cp___05Fs9705 = vlSelf->_cp___05Fs9703;
    vlSelf->_rs___05Fs2700 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__io_out_pipe_v;
    vlSelf->_rs___05Fs2702 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__io_out_pipe_b_exc;
    vlSelf->_rs___05Fs2701[0U] = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__io_out_pipe_b_data[0U];
    vlSelf->_rs___05Fs2701[1U] = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__io_out_pipe_b_data[1U];
    vlSelf->_rs___05Fs2701[2U] = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__io_out_pipe_b_data[2U];
    if (vlSelf->_cp___05Fs9701) {
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in2[0U] 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in2[0U];
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in2[1U] 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in2[1U];
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in2[2U] 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in2[2U];
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_wflags 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_wflags;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[0U] 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in1[0U];
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[1U] 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in1[1U];
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[2U] 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in1[2U];
    }
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_v 
        = ((1U & (~ (IData)(vlSelf->_cp___05Fs10034))) 
           && (IData)(vlSelf->_cp___05Fs9701));
    vlSelf->_rs___05Fs2672 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__io_out_pipe_v;
    vlSelf->_rs___05Fs2674 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__io_out_pipe_b_exc;
    vlSelf->_rs___05Fs2673[0U] = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__io_out_pipe_b_data[0U];
    vlSelf->_rs___05Fs2673[1U] = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__io_out_pipe_b_data[1U];
    vlSelf->_rs___05Fs2673[2U] = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__io_out_pipe_b_data[2U];
    if (vlSelf->_cp___05Fs9697) {
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__in_pipe_b_wflags 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_wflags;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__in_pipe_b_typeTagIn 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagIn;
    }
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__in_pipe_v 
        = ((1U & (~ (IData)(vlSelf->_cp___05Fs10034))) 
           && (IData)(vlSelf->_cp___05Fs9697));
    vlSelf->_rs___05Fs2598 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_detectTininess_pipe_b;
    vlSelf->_rs___05Fs2600 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__io_validout_pipe_b;
    vlSelf->_rs___05Fs2586 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_invalidExc_pipe_v;
    vlSelf->_rs___05Fs2588 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_v;
    vlSelf->_rs___05Fs2595 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_pipe_v;
    vlSelf->_rs___05Fs2597 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_detectTininess_pipe_v;
    vlSelf->_rs___05Fs2599 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__io_validout_pipe_v;
    if (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__valid) {
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isNaNC 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_isNaN;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isNaNAOrB 
            = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
               | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_signProd 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__signProd;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_CIsDominant 
            = vlSelf->_mc___05Fs1748;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundingMode_stage0_pipe_b 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_rm;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isZeroA 
            = (1U & (~ (IData)((0U != (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[0U] 
                                       >> 0x1dU)))));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isInfA 
            = (IData)((0xc0000000U == (0xe0000000U 
                                       & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[0U])));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isInfC 
            = (IData)((0xc0000000U == (0xe0000000U 
                                       & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U])));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_sExpSum 
            = (0x3ffU & ((IData)(vlSelf->_mc___05Fs1748)
                          ? (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                             >> 0x17U) : ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN) 
                                          - (IData)(0x18U))));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isZeroB 
            = (1U & (~ (IData)((0U != (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[0U] 
                                       >> 0x1dU)))));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isInfB 
            = (IData)((0xc0000000U == (0xe0000000U 
                                       & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[0U])));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isSigNaNAny 
            = (((~ (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[0U] 
                    >> 0x16U)) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN)) 
               | (((~ (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[0U] 
                       >> 0x16U)) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN)) 
                  | ((~ (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                         >> 0x16U)) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_isNaN))));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_doSubMags 
            = vlSelf->_mc___05Fs1746;
    }
    vlSelf->_rs___05Fs2590 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_isInf;
    vlSelf->_rs___05Fs2587 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_invalidExc_pipe_b;
    vlSelf->_rs___05Fs2589 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_isNaN;
    vlSelf->_mc___05Fs1787 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_isNaN) 
                              | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_invalidExc_pipe_b));
    vlSelf->_rs___05Fs2591 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_isZero;
    vlSelf->_rs___05Fs2592 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sign;
    vlSelf->_rs___05Fs2596 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_pipe_b;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_7 
        = ((0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_pipe_b)) 
           | (4U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_pipe_b)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_pipe_b)) 
            & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sign)) 
           | ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sign)) 
              & (3U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_pipe_b))));
    vlSelf->_rs___05Fs2594 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig;
    vlSelf->_mc___05Fs1786 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                    >> 0x1aU));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__valid_stage0_pipe_v 
        = ((1U & (~ (IData)(vlSelf->_cp___05Fs10034))) 
           && (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__valid));
    vlSelf->_rs___05Fs2593 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp;
    vlSelf->_mc___05Fs1782 = (1U & (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp) 
                                       >> 8U)));
    vlSelf->_mc___05Fs1781 = (1U & (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp) 
                                       >> 7U)));
    vlSelf->_mc___05Fs1779 = (1U & (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp) 
                                       >> 6U)));
    vlSelf->_rs___05Fs2772 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__io_out_pipe_b_exc;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_detectTininess_pipe_b 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__valid_stage0_pipe_v) 
           | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_detectTininess_pipe_b));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__io_validout_pipe_b 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__valid_stage0_pipe_v)) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__io_validout_pipe_b));
    if (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__valid_stage0_pipe_v) {
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_invalidExc_pipe_b 
            = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isSigNaNAny) 
               | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isInfA) 
                   & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isZeroB)) 
                  | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isInfB) 
                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isZeroA)) 
                     | ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isNaNAOrB)) 
                        & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                           & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_doSubMags) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isInfC)))))));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_isNaN 
            = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isNaNAOrB) 
               | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isNaNC));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_isInf 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfOut;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_isZero 
            = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
               | ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_CIsDominant)) 
                  & (IData)(vlSelf->_mc___05Fs2158)));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sign 
            = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_signProd)) 
               | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isInfC) 
                   & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__opSignC)) 
                  | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
                      & ((2U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundingMode_stage0_pipe_b)) 
                         & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_signProd) 
                            & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__opSignC)))) 
                     | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
                         & ((2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundingMode_stage0_pipe_b)) 
                            & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_signProd) 
                               | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__opSignC)))) 
                        | ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfOut)) 
                           & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros)) 
                              & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_CIsDominant)
                                  ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__opSignC)
                                  : ((IData)(vlSelf->_mc___05Fs2158)
                                      ? (2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundingMode_stage0_pipe_b))
                                      : ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_signProd) 
                                         ^ (IData)(vlSelf->_mc___05Fs2103))))))))));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp 
            = (0x1fffU & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_CIsDominant)
                           ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_sExpSum) 
                              - (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_doSubMags))
                           : ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_sExpSum) 
                              - ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                                 << 1U))));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_pipe_b 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundingMode_stage0_pipe_b;
    }
    vlSelf->_rs___05Fs2833 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_reg_inst;
    vlSelf->_rs___05Fs2835 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_ldst;
    vlSelf->_rs___05Fs2836 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_wen;
    vlSelf->_rs___05Fs2837 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_ren1;
    vlSelf->_rs___05Fs2838 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_ren2;
    vlSelf->_rs___05Fs2839 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_ren3;
    vlSelf->_rs___05Fs2840 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_swap12;
    vlSelf->_rs___05Fs2841 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_swap23;
    vlSelf->_rs___05Fs2842 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_typeTagIn;
    vlSelf->_rs___05Fs2851 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_vec;
    vlSelf->_rs___05Fs2852 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wb_ctrl_ldst;
    vlSelf->_rs___05Fs2853 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wb_ctrl_wen;
    vlSelf->_rs___05Fs2854 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wb_ctrl_ren1;
    vlSelf->_rs___05Fs2855 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wb_ctrl_ren2;
    vlSelf->_rs___05Fs2856 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wb_ctrl_ren3;
    vlSelf->_rs___05Fs2857 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wb_ctrl_swap12;
    vlSelf->_rs___05Fs2858 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wb_ctrl_swap23;
    vlSelf->_rs___05Fs2859 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wb_ctrl_typeTagIn;
    vlSelf->_rs___05Fs2860 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wb_ctrl_typeTagOut;
    vlSelf->_rs___05Fs2861 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wb_ctrl_fromint;
    vlSelf->_rs___05Fs2863 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wb_ctrl_fastpipe;
    vlSelf->_rs___05Fs2864 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wb_ctrl_fma;
    vlSelf->_rs___05Fs2865 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wb_ctrl_div;
    vlSelf->_rs___05Fs2866 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wb_ctrl_sqrt;
    vlSelf->_rs___05Fs2867 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wb_ctrl_wflags;
    vlSelf->_rs___05Fs2868 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wb_ctrl_vec;
    vlSelf->_rs___05Fs2876 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_1_rd;
    vlSelf->_rs___05Fs2877 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_1_typeTag;
    vlSelf->_rs___05Fs2879 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_1_pipeid;
    vlSelf->_rs___05Fs2878 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_1_cp;
    vlSelf->_rs___05Fs2880 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_2_rd;
    vlSelf->_rs___05Fs2881 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_2_typeTag;
    vlSelf->_rs___05Fs2883 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_2_pipeid;
    vlSelf->_rs___05Fs2882 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_2_cp;
    vlSelf->_rs___05Fs2885 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wb_toint_exc;
    vlSelf->_cp___05Fs9753 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_toint;
    vlSelf->_rs___05Fs2869 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_waddr;
    vlSelf->_rs___05Fs2872 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_0_rd;
    vlSelf->_rs___05Fs2874 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_0_cp;
    vlSelf->_mc___05Fs2410 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_fromint;
    vlSelf->_mc___05Fs2409 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_fastpipe;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_24 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_fastpipe) 
           | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_fromint));
    vlSelf->_rs___05Fs2886 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__io_sboard_set_REG;
    vlSelf->_rs___05Fs2873 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_0_typeTag;
    vlSelf->_rs___05Fs2847 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_fma;
    if (vlSelf->_cp___05Fs9721) {
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_vec = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagOut 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___fp_decoder_io_sigs_typeTagOut;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_wen 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___fp_decoder_io_sigs_wen;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_ren1 
            = vlSelf->_cp___05Fs9729;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_fromint 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___fp_decoder_io_sigs_fromint;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_swap12 
            = vlSelf->_cp___05Fs9731;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_ldst 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___fp_decoder_io_sigs_ldst;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_toint 
            = ((IData)(vlSelf->_cp___05Fs9731) | ((0x7fffU 
                                                   == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_19)) 
                                                  | ((0x7fffU 
                                                      == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_20)) 
                                                     | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT____VdfgTmp_h12421854__0))));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_sqrt 
            = (0x3ffffU == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_17);
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_ren3 
            = vlSelf->_cp___05Fs9735;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_fastpipe 
            = ((0x3fffU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_8)) 
               | ((0x7fffU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_9)) 
                  | ((0x7ffffU == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_14) 
                     | (0x7ffffU == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_16))));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_div 
            = (IData)(((0x8000053U == (0xc00007fU & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                       & (IData)(vlSelf->__VdfgTmp_h39cd75a0__0)));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_fma 
            = ((IData)(vlSelf->_cp___05Fs9735) | ((IData)(
                                                          ((0x53U 
                                                            == 
                                                            (0xc00007fU 
                                                             & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                                           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h00b2f4b4__0))) 
                                                  | (IData)(vlSelf->_cp___05Fs9733)));
    }
    vlSelf->_rs___05Fs2884 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__write_port_busy;
    vlSelf->_rs___05Fs2875 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_0_pipeid;
    vlSelf->_mc___05Fs2426 = (1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_0_pipeid));
    vlSelf->_mc___05Fs2427 = (2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_0_pipeid));
    vlSelf->_mc___05Fs2428 = (3U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_0_pipeid));
    vlSelf->_rs___05Fs2843 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_typeTagOut;
    vlSelf->_mc___05Fs2411 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_fma) 
                              & (0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_typeTagOut)));
    vlSelf->_mc___05Fs2412 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_fma) 
                              & (1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_typeTagOut)));
    vlSelf->_rs___05Fs2850 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_wflags;
    vlSelf->_rs___05Fs2848 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_div;
    vlSelf->_rs___05Fs2862 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wb_ctrl_toint;
    vlSelf->_rs___05Fs2834 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wb_reg_valid;
    vlSelf->_mc___05Fs2441 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wb_ctrl_toint) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wb_reg_valid));
    vlSelf->_cp___05Fs9740 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wen) 
                                    >> 1U));
    vlSelf->_cp___05Fs9741 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wen) 
                                    >> 2U));
    vlSelf->_rs___05Fs2871 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wen;
    vlSelf->_mc___05Fs2442 = (1U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wen));
    vlSelf->_cp___05Fs9725 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_reg_valid;
    if (vlSelf->_cp___05Fs9691) {
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_ren2 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_ren2;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_wflags 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_wflags;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma_io_in_bits_req_rm;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[0U] 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in2[0U];
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in2[1U];
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in2[2U];
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U] 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in1[0U];
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in1[1U];
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in1[2U];
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_typ 
            = (3U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_inst 
                     >> 0x14U));
    }
    vlSelf->_mc___05Fs2182 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_sqrt;
    vlSelf->_mc___05Fs2196 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady));
    vlSelf->_mc___05Fs2251 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady));
    vlSelf->_mc___05Fs2217 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_sqrt));
    vlSelf->_mc___05Fs2272 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_sqrt));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_37 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_div) 
           | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_sqrt));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_valid 
        = ((1U & (~ (IData)(vlSelf->_cp___05Fs10034))) 
           && (IData)(vlSelf->_cp___05Fs9721));
    vlSelf->_cp___05Fs556 = vlSelf->_cp___05Fs1351;
    vlSelf->_cp___05Fs7275 = vlSelf->_cp___05Fs1351;
    vlSelf->_cp___05Fs1484 = ((IData)(vlSelf->_cp___05Fs1351) 
                              & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__c_first_counter)));
    vlSelf->_cp___05Fs689 = ((IData)(vlSelf->_cp___05Fs1351) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__c_first_counter)));
    vlSelf->_cp___05Fs7408 = ((IData)(vlSelf->_cp___05Fs1351) 
                              & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__c_first_counter)));
    vlSelf->_cp___05Fs691 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_106)));
    vlSelf->_cp___05Fs693 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_107)));
    vlSelf->_cp___05Fs695 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_108)));
    vlSelf->_cp___05Fs697 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_109)));
    vlSelf->_cp___05Fs699 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_110)));
    vlSelf->_cp___05Fs734 = (1U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_142));
    vlSelf->_cp___05Fs1486 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_106)));
    vlSelf->_cp___05Fs1488 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_107)));
    vlSelf->_cp___05Fs1490 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_108)));
    vlSelf->_cp___05Fs1492 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_109)));
    vlSelf->_cp___05Fs1494 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_110)));
    vlSelf->_cp___05Fs1529 = (1U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_142));
    vlSelf->_cp___05Fs7410 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_84)));
    vlSelf->_cp___05Fs7412 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_85)));
    vlSelf->_cp___05Fs7414 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_86)));
    vlSelf->_cp___05Fs7416 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_87)));
    vlSelf->_cp___05Fs7418 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_88)));
    vlSelf->_cp___05Fs7453 = (1U & vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_119);
    vlSelf->_cp___05Fs613 = vlSelf->_cp___05Fs1408;
    vlSelf->_cp___05Fs7332 = vlSelf->_cp___05Fs1408;
    vlSelf->_cp___05Fs624 = vlSelf->_cp___05Fs1419;
    vlSelf->_cp___05Fs7343 = vlSelf->_cp___05Fs1419;
    vlSelf->_cp___05Fs633 = vlSelf->_cp___05Fs1428;
    vlSelf->_cp___05Fs7352 = vlSelf->_cp___05Fs1428;
    vlSelf->_cp___05Fs7308 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_54)));
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
    vlSelf->_cp___05Fs7288 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_46));
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
    vlSelf->_cp___05Fs1364 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_62));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_77 
        = (IData)((((0x180U == (0xfc0U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U])) 
                    & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__address_ok_1)) 
                   & (0xdU > (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                      >> 6U)))));
    vlSelf->_cp___05Fs1358 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__address_ok_1)));
    vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_53 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__source_ok_2) 
           & (IData)(((0x800U == (0xf00U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[1U])) 
                      & (7U != (7U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                      >> 6U))))));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_76 
        = ((0xdU > (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U))) & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__source_ok_2) 
                                        & (IData)((
                                                   (0x800U 
                                                    == 
                                                    (0xf00U 
                                                     & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[1U])) 
                                                   & (7U 
                                                      > 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U)))))));
    vlSelf->_cp___05Fs1360 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__source_ok_2)));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT____VdfgTmp_h565f0b49__0 
        = ((IData)(vlSelf->_mc___05Fs41) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_138));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT____VdfgTmp_h565f0b49__0 
        = ((IData)(vlSelf->_mc___05Fs165) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_138));
    vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____VdfgTmp_h4c79c061__0 
        = ((IData)(vlSelf->_mc___05Fs794) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_138));
    vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_acc) 
           | (IData)(((0x40U == (0xc0U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_eq_3))));
    vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_acc) 
           | (IData)(((0x40U == (0xc0U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_eq_2))));
    vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_acc_1) 
           | (IData)(((0x40U == (0xc0U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_eq_5))));
    vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_acc_1) 
           | (IData)(((0x40U == (0xc0U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__putfull_bits_a_mask_eq_4))));
    vlSelf->_cp___05Fs561 = vlSelf->_cp___05Fs1356;
    vlSelf->_cp___05Fs7280 = vlSelf->_cp___05Fs1356;
    vlSelf->_cp___05Fs574 = vlSelf->_cp___05Fs1369;
    vlSelf->_cp___05Fs7293 = vlSelf->_cp___05Fs1369;
    vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_6 
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
    vlSelf->_cp___05Fs8564 = (6U != (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                             >> 5U)));
    vlSelf->_cp___05Fs8590 = (0U != (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                             >> 5U)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_97 
        = ((7U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__opcode_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_98 
        = ((3U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                  >> 3U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__param_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_99 
        = ((0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                    >> 5U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__size_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_100 
        = ((1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                  >> 9U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__source_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_101 
        = ((3U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                  >> 0xbU)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__sink));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_139 
        = ((0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                    >> 5U)) == (0x7fU & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_sizes) 
                                          >> (8U & 
                                              (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                               >> 6U))) 
                                         >> 1U)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_159 
        = ((0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                    >> 5U)) == (0x7fU & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_sizes_1) 
                                          >> (8U & 
                                              (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                               >> 6U))) 
                                         >> 1U)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_167 
        = (0xfU & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_2) 
                   >> (3U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xbU))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_27 
        = ((7U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__opcode_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_28 
        = ((3U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                  >> 3U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__param_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_29 
        = ((0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                    >> 5U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__size_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_30 
        = ((3U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                  >> 0xbU)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__sink));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_36 
        = (((7U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
            == ((0x17U >= (0x1fU & ((IData)(3U) * (7U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__inflight_opcodes) 
                                                      >> 1U)))))
                 ? (7U & (0x911240U >> (0x1fU & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__inflight_opcodes) 
                                                     >> 1U))))))
                 : 0U)) | ((7U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
                           == ((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__inflight_opcodes) 
                                                       >> 1U)))))
                                ? (7U & (0x951240U 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__inflight_opcodes) 
                                                      >> 1U))))))
                                : 0U)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_38 
        = ((0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                    >> 5U)) == (0xffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__inflight_sizes), 1U)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_43 
        = ((0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                    >> 5U)) == (0xffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__inflight_sizes_1), 1U)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_104 
        = ((7U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__opcode_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_105 
        = ((3U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                  >> 3U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__param_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_106 
        = ((0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                    >> 5U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__size_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_107 
        = ((3U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                  >> 9U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__source_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_108 
        = ((3U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                  >> 0xbU)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__sink));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_145 
        = ((0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                    >> 5U)) == (0x7fU & ((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__inflight_sizes 
                                          >> (0x18U 
                                              & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 6U))) 
                                         >> 1U)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_164 
        = ((0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                    >> 5U)) == (0x7fU & ((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1 
                                          >> (0x18U 
                                              & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 6U))) 
                                         >> 1U)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_172 
        = (0xfU & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__inflight_2) 
                   >> (3U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xbU))));
    vlSelf->_cp___05Fs10215 = (7U == (7U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]));
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_119 
        = (0xffU & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_opcodes) 
                    >> (4U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                              >> 7U))));
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_126 
        = (0xfffU & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__inflight_opcodes) 
                     >> (0xcU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                 >> 7U))));
    vlSelf->_cp___05Fs10235 = (3U == (3U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 3U)));
    vlSelf->_cp___05Fs10237 = (2U == (3U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 3U)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_155 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__probe_bits_source) 
           == (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                     >> 9U)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_160 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__probe_bits_source) 
           == (3U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                     >> 9U)));
    vlSelf->_cp___05Fs10220 = (2U >= (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                              >> 5U)));
    vlSelf->_cp___05Fs10222 = (0U != (3U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 3U)));
    vlSelf->__VdfgTmp_h10566486__0 = (IData)((4U == 
                                              (6U & 
                                               vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->_cp___05Fs10257 = (0U == (7U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs10275 = (2U == (7U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs10224 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U] 
                                     >> 0xeU));
    vlSelf->_cp___05Fs10226 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 0xdU));
    vlSelf->_mc___05Fs947 = (2U == (3U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                          >> 9U)));
    vlSelf->_mc___05Fs1316 = (1U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]);
    vlSelf->_cp___05Fs10227 = (4U == (7U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs10266 = (1U == (7U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs10242 = (5U == (7U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_mc___05Fs946 = (1U & (~ (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 0xaU)));
    vlSelf->_rs___05Fs1992 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_data;
    vlSelf->_mc___05Fs485 = ((~ (IData)(vlSelf->_mc___05Fs428)) 
                             & (IData)(vlSelf->_mc___05Fs486));
    vlSelf->_cp___05Fs4006 = ((~ (IData)(vlSelf->_mc___05Fs428)) 
                              & (((IData)(vlSelf->_mc___05Fs486) 
                                  | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__state_0)) 
                                 & (IData)(vlSelf->_mc___05Fs483)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__source_i_ready 
        = (1U & ((~ (IData)(vlSelf->_mc___05Fs428)) 
                 & ((IData)(vlSelf->_mc___05Fs486) ? 
                    (~ (IData)(vlSelf->_mc___05Fs483))
                     : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__state_1))));
    vlSelf->_cp___05Fs3095 = ((IData)(vlSelf->_cp___05Fs2904) 
                              & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter)));
    vlSelf->_cp___05Fs3124 = ((IData)(vlSelf->_cp___05Fs2904) 
                              & (IData)(vlSelf->_mc___05Fs332));
    vlSelf->_rs___05Fs2020 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_7;
    vlSelf->_rs___05Fs2019 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_6;
    vlSelf->_rs___05Fs2018 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_5;
    vlSelf->_rs___05Fs2017 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_4;
    vlSelf->_rs___05Fs2016 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_3;
    vlSelf->_rs___05Fs2015 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_2;
    vlSelf->_rs___05Fs2014 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_1;
    vlSelf->_rs___05Fs2013 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r;
    vlSelf->_rs___05Fs3159 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mideleg;
    vlSelf->_rs___05Fs3476 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_wdata;
    vlSelf->_mc___05Fs3341 = ((0U == (0x1ffffffU & (IData)(
                                                           (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_wdata 
                                                            >> 0x27U)))) 
                              | (0x1ffffffU == (0x1ffffffU 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_wdata 
                                                           >> 0x27U)))));
    vlSelf->_mc___05Fs950 = ((~ (IData)(vlSelf->_mc___05Fs3400)) 
                             & (IData)(vlSelf->_mc___05Fs951));
    vlSelf->_cp___05Fs272 = vlSelf->_cp___05Fs1067;
    vlSelf->_cp___05Fs1443 = ((IData)(vlSelf->_cp___05Fs1067) 
                              & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__a_first_counter)));
    vlSelf->_cp___05Fs648 = ((IData)(vlSelf->_cp___05Fs1067) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__a_first_counter)));
    vlSelf->_cp___05Fs1498 = ((IData)(vlSelf->_cp___05Fs1067) 
                              & (IData)(vlSelf->_mc___05Fs161));
    vlSelf->_cp___05Fs703 = ((IData)(vlSelf->_cp___05Fs1067) 
                             & (IData)(vlSelf->_mc___05Fs37));
    vlSelf->_cp___05Fs277 = vlSelf->_cp___05Fs1072;
    vlSelf->_cp___05Fs294 = vlSelf->_cp___05Fs1089;
    vlSelf->_cp___05Fs313 = vlSelf->_cp___05Fs1108;
    vlSelf->_cp___05Fs328 = vlSelf->_cp___05Fs1123;
    vlSelf->_cp___05Fs339 = vlSelf->_cp___05Fs1134;
    vlSelf->_cp___05Fs350 = vlSelf->_cp___05Fs1145;
    vlSelf->_cp___05Fs358 = vlSelf->_cp___05Fs1153;
    vlSelf->_cp___05Fs361 = vlSelf->_cp___05Fs1156;
    vlSelf->_cp___05Fs369 = vlSelf->_cp___05Fs1164;
    vlSelf->_cp___05Fs372 = vlSelf->_cp___05Fs1167;
    vlSelf->_cp___05Fs380 = vlSelf->_cp___05Fs1175;
    vlSelf->_cp___05Fs650 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_83)));
    vlSelf->_cp___05Fs652 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_84)));
    vlSelf->_cp___05Fs654 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_85)));
    vlSelf->_cp___05Fs656 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_86)));
    vlSelf->_cp___05Fs658 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_87)));
    vlSelf->_cp___05Fs706 = (1U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_118));
    vlSelf->_cp___05Fs1445 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_83)));
    vlSelf->_cp___05Fs1447 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_84)));
    vlSelf->_cp___05Fs1449 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_85)));
    vlSelf->_cp___05Fs1451 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_86)));
    vlSelf->_cp___05Fs1453 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_87)));
    vlSelf->_cp___05Fs1501 = (1U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_118));
    vlSelf->_cp___05Fs1097 = vlSelf->_cp___05Fs1080;
    vlSelf->_cp___05Fs285 = vlSelf->_cp___05Fs1080;
    vlSelf->_cp___05Fs302 = vlSelf->_cp___05Fs1080;
    vlSelf->_cp___05Fs1101 = vlSelf->_cp___05Fs1084;
    vlSelf->_cp___05Fs289 = vlSelf->_cp___05Fs1084;
    vlSelf->_cp___05Fs306 = vlSelf->_cp___05Fs1084;
    vlSelf->_cp___05Fs1105 = vlSelf->_cp___05Fs1086;
    vlSelf->_cp___05Fs291 = vlSelf->_cp___05Fs1086;
    vlSelf->_cp___05Fs310 = vlSelf->_cp___05Fs1086;
    vlSelf->_mc___05Fs160 = vlSelf->_mc___05Fs153;
    vlSelf->_mc___05Fs182 = vlSelf->_mc___05Fs153;
    vlSelf->_mc___05Fs29 = vlSelf->_mc___05Fs153;
    vlSelf->_mc___05Fs36 = vlSelf->_mc___05Fs153;
    vlSelf->_mc___05Fs47 = vlSelf->_mc___05Fs153;
    vlSelf->_cp___05Fs1131 = vlSelf->_cp___05Fs1118;
    vlSelf->_cp___05Fs1142 = vlSelf->_cp___05Fs1118;
    vlSelf->_cp___05Fs323 = vlSelf->_cp___05Fs1118;
    vlSelf->_cp___05Fs336 = vlSelf->_cp___05Fs1118;
    vlSelf->_cp___05Fs347 = vlSelf->_cp___05Fs1118;
    vlSelf->_cp___05Fs1103 = (1U & (~ (IData)(vlSelf->_cp___05Fs1118)));
    vlSelf->_cp___05Fs1082 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_5));
    vlSelf->_cp___05Fs1107 = vlSelf->_cp___05Fs1088;
    vlSelf->_cp___05Fs1122 = vlSelf->_cp___05Fs1088;
    vlSelf->_cp___05Fs1179 = vlSelf->_cp___05Fs1088;
    vlSelf->_cp___05Fs293 = vlSelf->_cp___05Fs1088;
    vlSelf->_cp___05Fs312 = vlSelf->_cp___05Fs1088;
    vlSelf->_cp___05Fs327 = vlSelf->_cp___05Fs1088;
    vlSelf->_cp___05Fs384 = vlSelf->_cp___05Fs1088;
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_19 
        = ((0U == (0xfffffU & ((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                << 8U) | (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0x18U)))) 
           | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_14));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_24 
        = ((0xdU > (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U))) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_14));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc) 
           | (IData)(((0x40U == (0xc0U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_2))));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc) 
           | (IData)(((0x40U == (0xc0U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_3))));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_1) 
           | (IData)(((0x40U == (0xc0U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_4))));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_1) 
           | (IData)(((0x40U == (0xc0U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_5))));
    vlSelf->_cp___05Fs1078 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__source_ok)));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_9 
        = ((0xdU > (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U))) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__source_ok));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_1_valid 
        = ((IData)(vlSelf->_cp___05Fs1067) & (IData)(vlSelf->_mc___05Fs56));
    vlSelf->_mc___05Fs180 = (1U & (~ (IData)(vlSelf->_mc___05Fs181)));
    vlSelf->_mc___05Fs178 = (1U & (~ (IData)(vlSelf->_mc___05Fs179)));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_18 
        = (0U == (((IData)(vlSelf->_mc___05Fs179) << 2U) 
                  | (3U & (~ ((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                               << 0x17U) | (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                            >> 9U))))));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_0_valid 
        = ((IData)(vlSelf->_cp___05Fs1067) & (IData)(vlSelf->_mc___05Fs55));
    vlSelf->_rs___05Fs2004 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data;
    vlSelf->_mc___05Fs1195 = ((1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_data 
                                             >> 0x3fU))) 
                              == (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data 
                                                >> 0x3fU))));
    vlSelf->_mc___05Fs1197 = ((1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_data 
                                             >> 0x1fU))) 
                              == (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data 
                                                >> 0x1fU))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__amoalus_0__DOT___GEN_1 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_data) 
           < (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data));
    if ((1U & (~ ((IData)(vlSelf->_cp___05Fs10079) 
                  | (~ ((IData)(vlSelf->_mc___05Fs3316) 
                        & (IData)(vlSelf->_cp___05Fs10081))))))) {
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_184[0U] 
            = (IData)((((QData)((IData)((0xffU & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1)))) 
                        << 0x38U) | (((QData)((IData)(
                                                      (0xffU 
                                                       & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1)))) 
                                      << 0x30U) | (
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1)))) 
                                                    << 0x28U) 
                                                   | (((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1)))) 
                                                       << 0x20U) 
                                                      | (((QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1)))) 
                                                          << 0x18U) 
                                                         | (((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1)))) 
                                                             << 0x10U) 
                                                            | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1)))) 
                                                                << 8U) 
                                                               | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1))))))))))));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_184[1U] 
            = (IData)(((((QData)((IData)((0xffU & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1)))) 
                         << 0x38U) | (((QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1)))) 
                                       << 0x30U) | 
                                      (((QData)((IData)(
                                                        (0xffU 
                                                         & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1)))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1)))) 
                                         << 0x20U) 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1)))) 
                                            << 0x18U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1)))) 
                                               << 0x10U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1)))) 
                                                  << 8U) 
                                                 | (QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1))))))))))) 
                       >> 0x20U));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_184[2U] 
            = (IData)((((QData)((IData)((0xffffU & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1)))) 
                        << 0x30U) | (((QData)((IData)(
                                                      (0xffffU 
                                                       & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1)))) 
                                      << 0x20U) | (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1)))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1))))))));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_184[3U] 
            = (IData)(((((QData)((IData)((0xffffU & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1)))) 
                         << 0x30U) | (((QData)((IData)(
                                                       (0xffffU 
                                                        & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1)))) 
                                       << 0x20U) | 
                                      (((QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1)))) 
                                        << 0x10U) | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1))))))) 
                       >> 0x20U));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_184[4U] 
            = (IData)((((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1)) 
                        << 0x20U) | (QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1))));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_184[5U] 
            = (IData)(((((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1)) 
                         << 0x20U) | (QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1))) 
                       >> 0x20U));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_184[6U] 
            = (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1);
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_184[7U] 
            = (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_rs_1 
                       >> 0x20U));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_rs2 
            = (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_184[
                                (((IData)(0x3fU) + 
                                  (0xffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_rs2_size), 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(8,32,32, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_rs2_size), 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(8,32,32, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_rs2_size), 6U))))) 
               | (((0U == (0x1fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_rs2_size), 6U)))
                    ? 0ULL : ((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_184[
                                              (((IData)(0x1fU) 
                                                + (0xffU 
                                                   & VL_SHIFTL_III(8,32,32, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_rs2_size), 6U))) 
                                               >> 5U)])) 
                              << ((IData)(0x20U) - 
                                  (0x1fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_rs2_size), 6U))))) 
                  | ((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_184[
                                     (7U & (VL_SHIFTL_III(8,32,32, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_rs2_size), 6U) 
                                            >> 5U))])) 
                     >> (0x1fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_rs2_size), 6U)))));
    }
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcacheArb__DOT__s1_id 
        = (1U & (~ (IData)(vlSelf->_cp___05Fs9760)));
    vlSelf->_cp___05Fs9632 = vlSelf->_mc___05Fs1671;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_72 
        = ((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_msb_1 
            << 2U) | (QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_lsb_1)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_70 
        = ((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_msb_0 
            << 2U) | (QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_lsb_0)));
    vlSelf->_rs___05Fs4 = vlSelf->TestHarness__DOT__ldut__DOT__ibus_intsink__DOT__chain__DOT__output_chain_1__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__ibus_intsink__DOT__chain__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__ibus_intsource__DOT__reg_0__DOT__reg_0) 
                 >> 1U));
    vlSelf->_rs___05Fs1 = vlSelf->TestHarness__DOT__ldut__DOT__ibus_intsink__DOT__chain__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__ibus_intsink__DOT__chain__DOT__output_chain__DOT__sync_2 
        = (1U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__ibus_intsource__DOT__reg_0__DOT__reg_0));
    vlSelf->_rs___05Fs2060 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s1_vaddr;
    vlSelf->_cp___05Fs10406 = vlSelf->_cp___05Fs10393;
    vlSelf->_cp___05Fs10419 = vlSelf->_cp___05Fs10393;
    vlSelf->_cp___05Fs10434 = vlSelf->_cp___05Fs10393;
    vlSelf->_cp___05Fs10445 = vlSelf->_cp___05Fs10393;
    vlSelf->_cp___05Fs10456 = vlSelf->_cp___05Fs10393;
    vlSelf->_cp___05Fs10465 = vlSelf->_cp___05Fs10393;
    vlSelf->_rs___05Fs1473 = vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_perms;
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_100 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_perms) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__param_2));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_100 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_perms) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__param_2));
    vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_77 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__param_2) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_perms));
    vlSelf->_cp___05Fs1266 = (3U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_perms));
    vlSelf->_cp___05Fs1281 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_perms));
    vlSelf->_rs___05Fs3554 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__intsink__DOT__chain__DOT__output_chain__DOT__sync_1;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__intsink__DOT__chain__DOT__output_chain__DOT__sync_2 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hrDebugIntReg_0) 
           | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0));
    vlSelf->_rs___05Fs1880 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_flush_valid;
    vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_aw_ready 
        = ((~ (IData)(vlSelf->_mc___05Fs3715)) & (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___GEN_9));
    vlSelf->TestHarness__DOT__mem__DOT__axi4frag__DOT__in_aw_ready 
        = ((~ (IData)(vlSelf->_mc___05Fs3691)) & (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4frag__DOT___GEN_9));
    vlSelf->_rs___05Fs3445 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_replay;
    vlSelf->_rs___05Fs1472 = vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_line;
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_102 
        = (vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__address_1 
           == (vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_line 
               << 6U));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_102 
        = (vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__address_1 
           == (vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_line 
               << 6U));
    vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_80 
        = (vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__address_1 
           == (vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_line 
               << 6U));
    vlSelf->_cp___05Fs7182 = (8U != (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_line 
                                             >> 0x16U)));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__address_ok 
        = ((0U == (0xfffffU & (vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_line 
                               >> 6U))) | ((0U == (
                                                   (0xffffcU 
                                                    & (vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_line 
                                                       >> 6U)) 
                                                   | (3U 
                                                      & (~ 
                                                         (vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_line 
                                                          >> 6U))))) 
                                           | ((0U == 
                                               ((0xfffeU 
                                                 & (vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_line 
                                                    >> 0xaU)) 
                                                | (1U 
                                                   & (~ 
                                                      (vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_line 
                                                       >> 0xaU))))) 
                                              | ((0U 
                                                  == 
                                                  ((0xfc00U 
                                                    & (vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_line 
                                                       >> 0xaU)) 
                                                   | (0x3ffU 
                                                      & (0x200U 
                                                         ^ 
                                                         (vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_line 
                                                          >> 0xaU))))) 
                                                 | ((0U 
                                                     == 
                                                     ((0x3cU 
                                                       & (vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_line 
                                                          >> 0x14U)) 
                                                      | (3U 
                                                         & (~ 
                                                            (vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_line 
                                                             >> 0x14U))))) 
                                                    | ((0U 
                                                        == 
                                                        ((4U 
                                                          & (vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_line 
                                                             >> 0x17U)) 
                                                         | (3U 
                                                            & (~ 
                                                               (vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_line 
                                                                >> 0x17U))))) 
                                                       | (8U 
                                                          == 
                                                          (0xfU 
                                                           & (vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__probe_line 
                                                              >> 0x16U)))))))));
    vlSelf->_rs___05Fs2028 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_release_data_valid;
    vlSelf->_rs___05Fs3421 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_xcpt;
    vlSelf->_rs___05Fs3410 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_xcpt_interrupt;
    vlSelf->_rs___05Fs3425 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_replay;
    vlSelf->_rs___05Fs2514 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_valid;
    vlSelf->_mc___05Fs520 = (1U & (~ (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[0U] 
                                      >> 2U)));
    vlSelf->_cp___05Fs4272 = (0U != (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[0U] 
                                             >> 6U)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_47 
        = ((0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[0U] 
                    >> 6U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__size_1));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_48 
        = ((0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[0U] 
                     >> 0xaU)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__source_1));
    VL_SHIFTR_WWI(152,152,8, __Vtemp_132, vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_sizes, 
                  (0xf8U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[0U] 
                            >> 7U)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_69 
        = ((0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[0U] 
                    >> 6U)) == (0x7fU & (__Vtemp_132[0U] 
                                         >> 1U)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_78 
        = (0x7ffffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_1 
                       >> (0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[0U] 
                                    >> 0xaU))));
    VL_SHIFTR_WWI(152,152,8, __Vtemp_135, vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_sizes_1, 
                  (0xf8U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[0U] 
                            >> 7U)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_79 
        = ((0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[0U] 
                    >> 6U)) == (0x7fU & (__Vtemp_135[0U] 
                                         >> 1U)));
    vlSelf->_cp___05Fs4133 = (2U >= (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[0U] 
                                             >> 6U)));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_138, vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_opcodes, 
                  (0x7cU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[0U] 
                            >> 8U)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_50[0U] 
        = __Vtemp_138[0U];
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_50[1U] 
        = __Vtemp_138[1U];
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_50[2U] 
        = (0xfffU & __Vtemp_138[2U]);
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__source_ok_1 
        = ((0U == (3U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[0U] 
                         >> 0xdU))) | ((1U == (3U & 
                                               (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[0U] 
                                                >> 0xdU))) 
                                       | ((0x10U == 
                                           (0x1fU & 
                                            (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[0U] 
                                             >> 0xaU))) 
                                          | ((0x11U 
                                              == (0x1fU 
                                                  & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[0U] 
                                                     >> 0xaU))) 
                                             | (0x12U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[0U] 
                                                    >> 0xaU)))))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last 
        = ((1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last_counter)) 
           | (0U == ((4U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[0U])
                      ? 0U : (0x1ffU & (~ (0xffffffU 
                                           & (((IData)(0xfffU) 
                                               << (0xfU 
                                                   & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[0U] 
                                                      >> 6U))) 
                                              >> 3U)))))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode 
        = ((0x17U >= (0x1fU & ((IData)(3U) * (7U & 
                                              vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[0U]))))
            ? (7U & (0x911240U >> (0x1fU & ((IData)(3U) 
                                            * (7U & 
                                               vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[0U])))))
            : 0U);
    vlSelf->_cp___05Fs4018 = (6U == (7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs4035 = (7U == (7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs4054 = (4U == (7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs4069 = (0U == (7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs4080 = (1U == (7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs4091 = (2U == (7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs4099 = (5U <= (7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 3U)));
    vlSelf->_cp___05Fs4102 = (3U == (7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs4110 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 5U));
    vlSelf->_cp___05Fs4113 = (5U == (7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->_cp___05Fs4121 = (2U <= (7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 3U)));
    vlSelf->_mc___05Fs507 = (1U & (~ (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                      >> 2U)));
    vlSelf->_cp___05Fs4026 = (2U >= (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U)));
    vlSelf->_cp___05Fs4030 = (3U <= (7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 3U)));
    vlSelf->_cp___05Fs4032 = (0xffU != (0xffU & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                  << 3U) 
                                                 | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x1dU))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_38 
        = ((7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__opcode));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_39 
        = ((7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                  >> 3U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__param));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_40 
        = ((0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                    >> 6U)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__size));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_41 
        = ((0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xaU)) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__source));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_42 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__address) 
           == (0x3fffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                          >> 0xfU)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_56 
        = (0x7ffffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight 
                       >> (0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0xaU))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_66 
        = ((0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                    >> 6U)) == (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[0U] 
                                        >> 6U)));
    vlSelf->_cp___05Fs4034 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                    >> 5U));
    vlSelf->_cp___05Fs4064 = (0U != (7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 3U)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_61 
        = ((0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xaU)) == (0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[0U] 
                                            >> 0xaU)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_7 
        = (0xfffU & ((~ ((IData)(0xfffU) << (0xfU & 
                                             (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U)))) 
                     & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                         << 0x11U) | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                      >> 0xfU))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_11 
        = (IData)(((0x18000000U == (0x18000000U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                   & (0xdU > (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                      >> 6U)))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__source_ok 
        = ((0U == (3U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                         >> 0xdU))) | ((1U == (3U & 
                                               (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xdU))) 
                                       | ((0x10U == 
                                           (0x1fU & 
                                            (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xaU))) 
                                          | ((0x11U 
                                              == (0x1fU 
                                                  & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xaU))) 
                                             | (0x12U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0xaU)))))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (0x30000U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_3 
        = (IData)((0x10000U == (0x30000U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_4 
        = (IData)((0x20000U == (0x30000U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_5 
        = (IData)((0x30000U == (0x30000U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc 
        = ((2U < (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                          >> 6U))) | (IData)((0x80U 
                                              == (0x200c0U 
                                                  & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_1 
        = ((2U < (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                          >> 6U))) | (IData)((0x20080U 
                                              == (0x200c0U 
                                                  & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))));
    vlSelf->_rs___05Fs2068 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refill_paddr;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_24 
        = (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__address 
           == (0xffffffc0U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refill_paddr));
    vlSelf->_cp___05Fs8433 = ((0U != (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refill_paddr 
                                      >> 0xeU)) | (0U 
                                                   != 
                                                   (3U 
                                                    & (~ 
                                                       (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refill_paddr 
                                                        >> 0xcU)))));
    vlSelf->_cp___05Fs8338 = (8U != (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refill_paddr 
                                     >> 0x1cU));
    vlSelf->_mc___05Fs2803 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_24 
                                            >> 0x26U)));
    vlSelf->_cp___05Fs9667 = vlSelf->_cp___05Fs9659;
    vlSelf->_cp___05Fs9677 = vlSelf->_cp___05Fs9659;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & ((~ (IData)(vlSelf->_mc___05Fs2230)) 
                 & (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
                       | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z)))));
    vlSelf->_rs___05Fs2005 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_way;
    vlSelf->_rs___05Fs2006 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_mask;
    vlSelf->_mc___05Fs1205 = (1U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_mask));
    vlSelf->_mc___05Fs1206 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_mask) 
                                    >> 1U));
    vlSelf->_mc___05Fs1207 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_mask) 
                                    >> 2U));
    vlSelf->_mc___05Fs1210 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_mask) 
                                    >> 5U));
    vlSelf->_mc___05Fs1211 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_mask) 
                                    >> 6U));
    vlSelf->_mc___05Fs1212 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_mask) 
                                    >> 7U));
    vlSelf->_mc___05Fs1208 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_mask) 
                                    >> 3U));
    vlSelf->_mc___05Fs1198 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_mask) 
                                    >> 4U));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dataArb_io_in_0_bits_eccMask 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_valid)
            ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_mask)
            : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_mask));
    vlSelf->_mc___05Fs1751 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN 
                                    >> 2U));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN_1 
        = (((QData)((IData)((3U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN))) 
            << 0x31U) | ((0x1fffffffffffeULL & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b 
                                                << 1U)) 
                         | (QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_bit0AlignedSigC))));
    if (vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_first) {
        vlSelf->_mc___05Fs236 = 1U;
        vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_d_denied 
            = (3U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4index_auto_in_r_bits_resp));
    } else {
        vlSelf->_mc___05Fs236 = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_d_denied 
            = vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_denied_r;
    }
    vlSelf->_rs___05Fs796 = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dToggle;
    vlSelf->_cp___05Fs5678 = vlSelf->_mc___05Fs671;
    vlSelf->_rs___05Fs795 = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dOrig;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT___GEN_3 
        = ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT___GEN_2) 
             & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_address 
                        >> 2U))) << 3U) | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT___GEN_2) 
                                            << 2U) 
                                           | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT___GEN_1) 
                                               << 1U) 
                                              | (1U 
                                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch)))));
    vlSelf->_rs___05Fs679 = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dToggle;
    vlSelf->_cp___05Fs4839 = vlSelf->_mc___05Fs572;
    vlSelf->_rs___05Fs678 = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dOrig;
    vlSelf->_rs___05Fs2032 = vlSelf->_cp___05Fs9294;
    vlSelf->_rs___05Fs757 = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dToggle;
    vlSelf->_cp___05Fs5400 = vlSelf->_mc___05Fs642;
    vlSelf->_rs___05Fs756 = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dOrig;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN_1[0U] 
        = ((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b[0U] 
            << 1U) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_bit0AlignedSigC));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN_1[1U] 
        = ((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b[0U] 
            >> 0x1fU) | (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b[1U] 
                         << 1U));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN_1[2U] 
        = ((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b[1U] 
            >> 0x1fU) | (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b[2U] 
                         << 1U));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN_1[3U] 
        = ((0x1800U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN) 
                       << 0xbU)) | ((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b[2U] 
                                     >> 0x1fU) | (0x7feU 
                                                  & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b[3U] 
                                                     << 1U))));
    vlSelf->_rs___05Fs2909 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT____VdfgTmp_h3b95fd69__0 
        = ((0U == ((0x3ffffffcU & ((IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn 
                                            >> 0x10U)) 
                                   << 2U)) | (3U & 
                                              (~ (IData)(
                                                         (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn 
                                                          >> 0xeU)))))) 
           | ((0U == ((0x7fffffcU & ((IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn 
                                              >> 0x13U)) 
                                     << 2U)) | (3U 
                                                & (~ (IData)(
                                                             (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn 
                                                              >> 0x11U)))))) 
              | (0U == ((0xffffff0U & ((IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn 
                                                >> 0x14U)) 
                                       << 4U)) | (0xfU 
                                                  & (8U 
                                                     ^ (IData)(
                                                               (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn 
                                                                >> 0x10U))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_29 
        = (0xfffffU & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn) 
                       ^ (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
                          >> 0xaU)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_33 
        = (0xfffffU & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn) 
                       ^ (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
                          >> 0xaU)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_37 
        = (0xfffffU & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn) 
                       ^ (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
                          >> 0xaU)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_41 
        = (0xfffffU & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn) 
                       ^ (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
                          >> 0xaU)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_45 
        = (0xfffffU & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn) 
                       ^ (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
                          >> 0xaU)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_49 
        = (0xfffffU & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn) 
                       ^ (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
                          >> 0xaU)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_53 
        = (0xfffffU & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn) 
                       ^ (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
                          >> 0xaU)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_56 
        = (0xfffffU & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn) 
                       ^ (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
                          >> 0xaU)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & ((~ (IData)(vlSelf->_mc___05Fs2291)) 
                 & (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
                       | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z)))));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__nodeOut_aw_valid 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q_1__DOT__full) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_29));
    vlSelf->_mc___05Fs3488 = vlSelf->_mc___05Fs3484;
    vlSelf->_mc___05Fs3495 = vlSelf->_mc___05Fs3484;
    vlSelf->_mc___05Fs3511 = vlSelf->_mc___05Fs3484;
    vlSelf->_mc___05Fs3515 = vlSelf->_mc___05Fs3484;
    vlSelf->_mc___05Fs3540 = vlSelf->_mc___05Fs3484;
    vlSelf->_mc___05Fs3544 = vlSelf->_mc___05Fs3484;
    vlSelf->_mc___05Fs3552 = vlSelf->_mc___05Fs3484;
    vlSelf->_mc___05Fs3559 = vlSelf->_mc___05Fs3484;
    vlSelf->_mc___05Fs3562 = vlSelf->_mc___05Fs3484;
    vlSelf->_mc___05Fs3566 = vlSelf->_mc___05Fs3484;
    vlSelf->_mc___05Fs3573 = vlSelf->_mc___05Fs3484;
    vlSelf->_mc___05Fs3590 = vlSelf->_mc___05Fs3484;
    vlSelf->_mc___05Fs3594 = vlSelf->_mc___05Fs3484;
    if (vlSelf->__VdfgTmp_h883e40ce__0) {
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_anon_out_1_a_bits_address 
            = (0x7fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->TestHarness__DOT__SimDTM__DOT__debug_req_bits_addr_reg), 2U));
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____VdfgTmp_h53dafab2__0 
            = (3U & ((IData)(vlSelf->TestHarness__DOT__SimDTM__DOT__debug_req_bits_addr_reg) 
                     >> 5U));
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____VdfgTmp_h53ca0f32__0 
            = (0xfU & ((IData)(vlSelf->TestHarness__DOT__SimDTM__DOT__debug_req_bits_addr_reg) 
                       >> 1U));
    } else {
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_anon_out_1_a_bits_address = 0x48U;
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____VdfgTmp_h53dafab2__0 = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____VdfgTmp_h53ca0f32__0 = 9U;
    }
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT____VdfgTmp_hcef7e3f7__0 
        = (1U & ((~ (IData)(vlSelf->__VdfgTmp_h883e40ce__0)) 
                 | ((IData)(vlSelf->TestHarness__DOT__SimDTM__DOT__debug_req_bits_addr_reg) 
                    >> 1U)));
    TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT___GEN 
        = (0x1fU & (0x11U ^ ((IData)(vlSelf->__VdfgTmp_h883e40ce__0)
                              ? (IData)(vlSelf->TestHarness__DOT__SimDTM__DOT__debug_req_bits_addr_reg)
                              : 0x12U)));
    TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT____VdfgTmp_h2dd21bce__0 
        = ((IData)(vlSelf->__VdfgTmp_h883e40ce__0) 
           & ((IData)(vlSelf->TestHarness__DOT__SimDTM__DOT__debug_req_bits_addr_reg) 
              >> 6U));
    __VdfgTmp_hdb458410__0 = ((IData)(vlSelf->__VdfgTmp_h883e40ce__0) 
                              & (IData)(vlSelf->TestHarness__DOT__SimDTM__DOT__debug_req_bits_addr_reg));
    vlSelf->_cp___05Fs9759 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_killed;
    vlSelf->_mc___05Fs2425 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_killed)) 
                              & ((IData)(vlSelf->_cp___05Fs9758) 
                                 | (IData)(vlSelf->_cp___05Fs9756)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_inFlight 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_killed)) 
           & ((IData)(vlSelf->_mc___05Fs2255) | (IData)(vlSelf->_mc___05Fs2200)));
    vlSelf->_rs___05Fs2530 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_tlb_resp_gpa;
    vlSelf->_rs___05Fs1919 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_valid;
    if (vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_first) {
        vlSelf->_mc___05Fs751 = 1U;
        vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_denied 
            = (3U == (3U & (vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[2U] 
                            >> 4U)));
    } else {
        vlSelf->_mc___05Fs751 = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_denied 
            = vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_denied_r;
    }
    if (vlSelf->_mc___05Fs2225) {
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb129c4ea__0 
            = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_haf133fcb__0 
                     >> 1U));
        TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h595d38b9__0 
            = (0xffffffU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_haf133fcb__0 
                            >> 1U));
    } else {
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb129c4ea__0 = 0U;
        TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h595d38b9__0 = 0U;
    }
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2 
        = (((IData)(vlSelf->_mc___05Fs2225) & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_haf133fcb__0) 
           | (IData)(vlSelf->_mc___05Fs2229));
    vlSelf->_mc___05Fs463 = (1U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT___GEN_67));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT___GEN_74 
        = (0x3fU & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT___GEN_67) 
                     >> 1U) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT___GEN_67)));
    vlSelf->_mc___05Fs455 = (1U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT___GEN_66));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT___GEN_68 
        = (0x3fU & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT___GEN_66) 
                     >> 1U) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT___GEN_66)));
    vlSelf->_cp___05Fs12425 = (7U == (7U & (IData)(
                                                   (vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                    >> 0x28U))));
    vlSelf->_cp___05Fs12437 = (4U == (7U & (IData)(
                                                   (vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                    >> 0x28U))));
    vlSelf->_cp___05Fs12452 = (5U == (7U & (IData)(
                                                   (vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                    >> 0x28U))));
    vlSelf->_cp___05Fs12467 = (0U == (7U & (IData)(
                                                   (vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                    >> 0x28U))));
    vlSelf->_cp___05Fs12476 = (1U == (7U & (IData)(
                                                   (vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                    >> 0x28U))));
    vlSelf->_cp___05Fs12485 = (2U == (7U & (IData)(
                                                   (vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                    >> 0x28U))));
    vlSelf->_cp___05Fs12543 = (2U != (3U & (IData)(
                                                   (vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                    >> 0x24U))));
    vlSelf->_cp___05Fs12569 = (0U != (3U & (IData)(
                                                   (vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                    >> 0x24U))));
    vlSelf->_rs___05Fs3828 = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
    vlSelf->_cp___05Fs12445 = (3U == (3U & (IData)(
                                                   (vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                    >> 0x26U))));
    vlSelf->_cp___05Fs12447 = (2U == (3U & (IData)(
                                                   (vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                    >> 0x26U))));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_26 
        = ((7U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                          >> 0x28U))) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__opcode_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_27 
        = ((3U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                          >> 0x26U))) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__param_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_28 
        = ((3U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                          >> 0x24U))) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__size_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_30 
        = ((1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                          >> 0x22U))) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__sink));
    vlSelf->_mc___05Fs3592 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x28U)));
    vlSelf->_cp___05Fs12430 = (1U & (~ (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                >> 0x25U))));
    vlSelf->_cp___05Fs12432 = (0U != (3U & (IData)(
                                                   (vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                    >> 0x26U))));
    vlSelf->_cp___05Fs12426 = (6U == (7U & (IData)(
                                                   (vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                    >> 0x28U))));
    vlSelf->_cp___05Fs12434 = (1U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg));
    vlSelf->_cp___05Fs12436 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                             >> 0x21U)));
    vlSelf->_cp___05Fs12428 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                             >> 0x23U)));
    vlSelf->_cp___05Fs1883 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_46)));
    vlSelf->_cp___05Fs1936 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_47 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__size_1));
    vlSelf->_cp___05Fs1797 = (2U >= (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_48 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__source_1));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_79 
        = (0x7ffffU & (vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_1 
                       >> (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source)));
    VL_SHIFTR_WWI(152,152,8, __Vtemp_144, vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                   << 3U));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_70 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size) 
           == (0x7fU & (__Vtemp_144[0U] >> 1U)));
    VL_SHIFTR_WWI(152,152,8, __Vtemp_147, vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                   << 3U));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_80 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size) 
           == (0x7fU & (__Vtemp_147[0U] >> 1U)));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_150, vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                   << 2U));
    TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_51[0U] 
        = __Vtemp_150[0U];
    TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_51[1U] 
        = __Vtemp_150[1U];
    TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_51[2U] 
        = (0xfffU & __Vtemp_150[2U]);
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__source_ok_1 
        = ((0U == (3U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                         >> 3U))) | ((1U == (3U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                                                   >> 3U))) 
                                     | ((0x10U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source)) 
                                        | ((0x11U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source)) 
                                           | (0x12U 
                                              == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source))))));
    vlSelf->_mc___05Fs74 = (1U & (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                                     >> 4U)));
    vlSelf->_mc___05Fs75 = (4U == (7U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                                         >> 2U)));
    vlSelf->_mc___05Fs313 = ((IData)(vlSelf->_cp___05Fs2894) 
                             | (3U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size)));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__nodeOut_w_valid 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__in_w_deq_q__DOT__full) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_32));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4frag_auto_out_aw_bits_addr 
        = (~ (((~ (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                   >> 3U)) << 3U) | (7U & ((~ ((IData)(7U) 
                                               << (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))) 
                                           | (~ vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1)))));
    vlSelf->_mc___05Fs312 = (0U == ((2U & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                           >> 0x1eU)) 
                                    | (1U & (~ (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                                >> 0x1eU)))));
    TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_21 
        = (0xffU & ((vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                     >> 3U) | (0xfeU & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                        >> 2U))));
    vlSelf->_mc___05Fs310 = ((0U == ((0x18U & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                               >> 0x1bU)) 
                                     | ((4U & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                               >> 0x19U)) 
                                        | ((2U & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                                  >> 0x18U)) 
                                           | (1U & 
                                              (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                               >> 0xdU)))))) 
                             | ((0U == ((0xcU & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                                 >> 0x1cU)) 
                                        | ((2U & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                                  >> 0x1aU)) 
                                           | (1U & 
                                              (~ (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                                  >> 0x19U)))))) 
                                | ((0U == ((6U & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                                  >> 0x1dU)) 
                                           | (1U & 
                                              (~ (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                                  >> 0x1bU))))) 
                                   | (2U == (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                             >> 0x1eU)))));
    vlSelf->_mc___05Fs311 = (0U == ((0x18U & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                              >> 0x1bU)) 
                                    | ((4U & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                              >> 0x19U)) 
                                       | ((2U & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                                 >> 0x18U)) 
                                          | (1U & (~ 
                                                   (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                                    >> 0xdU)))))));
    TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_19 
        = (0xffU & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len_1)) 
                    | VL_SHIFTL_III(8,8,32, (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len_1)), 1U)));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_16 
        = (0x3fU & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len_1) 
                     >> 1U) | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len_1) 
                               >> 2U)));
    vlSelf->_rs___05Fs2904 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_req_need_gpa;
    vlSelf->_rs___05Fs2907 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_req_dest;
    if (vlSelf->_cp___05Fs8638) {
        vlSelf->_cp___05Fs9763 = 1U;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___arb_io_out_bits_bits_need_gpa 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__r_need_gpa;
        vlSelf->_mc___05Fs2446 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__r_vstage1_en;
        vlSelf->_mc___05Fs2594 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__r_stage2_en;
    } else {
        vlSelf->_cp___05Fs9763 = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___arb_io_out_bits_bits_need_gpa 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_need_gpa;
        vlSelf->_mc___05Fs2446 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_vstage1_en;
        vlSelf->_mc___05Fs2594 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_stage2_en;
    }
    vlSelf->_rs___05Fs2903 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_req_addr;
    vlSelf->_rs___05Fs2906 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_req_stage2;
    vlSelf->_mc___05Fs2455 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_req_vstage1;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__can_hit 
        = (1U & ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__count) 
                     >> 1U)) & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_req_vstage1)
                                 ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__stage2)
                                 : (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_req_stage2)))));
    vlSelf->_mc___05Fs2448 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_req_vstage1) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__stage2));
    vlSelf->_cp___05Fs9789 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_req_stage2) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_req_vstage1));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__pmpHomogeneous_pgMask 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_13)
            ? 0xfffff000U : ((IData)(vlSelf->_mc___05Fs2452)
                              ? 0xffe00000U : 0xc0000000U));
    vlSelf->_rs___05Fs2938 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data;
    vlSelf->_cp___05Fs9764 = (IData)((0ULL != (0xeULL 
                                               & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data)));
    vlSelf->_cp___05Fs9765 = ((0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__count)) 
                              & (0U != (0x1ffU & (IData)(
                                                         (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                          >> 0x13U)))));
    vlSelf->_cp___05Fs9766 = ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__count) 
                                  >> 1U)) & (0U != 
                                             (0x1ffU 
                                              & (IData)(
                                                        (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                         >> 0xaU)))));
    vlSelf->_cp___05Fs9795 = (5U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state));
    vlSelf->_rs___05Fs2890 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state;
    vlSelf->_cp___05Fs9785 = (4U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state));
    vlSelf->_cp___05Fs9784 = (2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state));
    vlSelf->_cp___05Fs9787 = (7U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state));
    vlSelf->_cp___05Fs9775 = (1U & (~ (IData)((0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state)))));
    vlSelf->_cp___05Fs9779 = (1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state));
    vlSelf->_mc___05Fs2608 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_valid;
    vlSelf->_mc___05Fs308 = ((IData)(vlSelf->_cp___05Fs2891) 
                             | (3U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___deq_q_io_deq_bits_size)));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4frag_auto_out_ar_bits_addr 
        = (~ (((~ (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                   >> 3U)) << 3U) | (7U & ((~ ((IData)(7U) 
                                               << (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))) 
                                           | (~ vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr)))));
    vlSelf->_mc___05Fs306 = ((0U == ((0x30U & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                               >> 0x1aU)) 
                                     | ((8U & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                               >> 0x18U)) 
                                        | ((4U & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                  >> 0x17U)) 
                                           | ((2U & 
                                               (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                >> 0xfU)) 
                                              | (1U 
                                                 & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                    >> 0xdU))))))) 
                             | ((0U == ((0x18U & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                  >> 0x1bU)) 
                                        | ((4U & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                  >> 0x19U)) 
                                           | ((2U & 
                                               (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                >> 0x18U)) 
                                              | (1U 
                                                 & (~ 
                                                    (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                     >> 0x10U))))))) 
                                | ((0U == ((0x18U & 
                                            (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                             >> 0x1bU)) 
                                           | ((4U & 
                                               (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                >> 0x19U)) 
                                              | ((2U 
                                                  & ((~ 
                                                      (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                       >> 0x19U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                       >> 0x10U)))))) 
                                   | ((0U == ((6U & 
                                               (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                >> 0x1dU)) 
                                              | (1U 
                                                 & (~ 
                                                    (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                     >> 0x1bU))))) 
                                      | ((0U == ((2U 
                                                  & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                     >> 0x1eU)) 
                                                 | (1U 
                                                    & (~ 
                                                       (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                        >> 0x1eU))))) 
                                         | (2U == (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                   >> 0x1eU)))))));
    vlSelf->_mc___05Fs307 = (0U == ((0x30U & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                              >> 0x1aU)) 
                                    | ((8U & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                              >> 0x18U)) 
                                       | ((4U & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                 >> 0x17U)) 
                                          | ((2U & 
                                              (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                               >> 0xfU)) 
                                             | (1U 
                                                & (~ 
                                                   (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                    >> 0xdU))))))));
    TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_6 
        = (0xffU & ((vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                     >> 3U) | (0xfeU & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                        >> 2U))));
    TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_4 
        = (0xffU & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len)) 
                    | VL_SHIFTL_III(8,8,32, (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len)), 1U)));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_1 
        = (0x3fU & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len) 
                     >> 1U) | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len) 
                               >> 2U)));
    vlSelf->_mc___05Fs2376 = (0U == (0xffU & (IData)(
                                                     (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                                      >> 0x17U))));
    vlSelf->_mc___05Fs2322 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x17U)));
    vlSelf->_mc___05Fs2323 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x18U)));
    vlSelf->_mc___05Fs2324 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x19U)));
    vlSelf->_mc___05Fs2325 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x1aU)));
    vlSelf->_mc___05Fs2326 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x1bU)));
    vlSelf->_mc___05Fs2327 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x1cU)));
    vlSelf->_mc___05Fs2328 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x1dU)));
    vlSelf->_mc___05Fs2329 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x1eU)));
    vlSelf->_mc___05Fs2331 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x20U)));
    vlSelf->_mc___05Fs2332 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x21U)));
    vlSelf->_mc___05Fs2333 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x22U)));
    vlSelf->_mc___05Fs2334 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x23U)));
    vlSelf->_mc___05Fs2335 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x24U)));
    vlSelf->_mc___05Fs2336 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x25U)));
    vlSelf->_mc___05Fs2337 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x26U)));
    vlSelf->_mc___05Fs2338 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x27U)));
    vlSelf->_mc___05Fs2339 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x28U)));
    vlSelf->_mc___05Fs2340 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x29U)));
    vlSelf->_mc___05Fs2341 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x2aU)));
    vlSelf->_mc___05Fs2342 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x2bU)));
    vlSelf->_mc___05Fs2343 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x2cU)));
    vlSelf->_mc___05Fs2344 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x2dU)));
    vlSelf->_mc___05Fs2345 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x2eU)));
    vlSelf->_mc___05Fs2346 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x2fU)));
    vlSelf->_mc___05Fs2347 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x30U)));
    vlSelf->_mc___05Fs2348 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x31U)));
    vlSelf->_mc___05Fs2349 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x32U)));
    vlSelf->_mc___05Fs2350 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x33U)));
    vlSelf->_mc___05Fs2330 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x1fU)));
    vlSelf->_mc___05Fs2351 = (0U == (0x7ffU & (IData)(
                                                      (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                                       >> 0x34U))));
    vlSelf->_mc___05Fs2300 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 1U)));
    vlSelf->_mc___05Fs2301 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 2U)));
    vlSelf->_mc___05Fs2302 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 3U)));
    vlSelf->_mc___05Fs2303 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 4U)));
    vlSelf->_mc___05Fs2304 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 5U)));
    vlSelf->_mc___05Fs2305 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 6U)));
    vlSelf->_mc___05Fs2306 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 7U)));
    vlSelf->_mc___05Fs2307 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 8U)));
    vlSelf->_mc___05Fs2308 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 9U)));
    vlSelf->_mc___05Fs2309 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0xaU)));
    vlSelf->_mc___05Fs2310 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0xbU)));
    vlSelf->_mc___05Fs2311 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0xcU)));
    vlSelf->_mc___05Fs2312 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0xdU)));
    vlSelf->_mc___05Fs2313 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0xeU)));
    vlSelf->_mc___05Fs2314 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0xfU)));
    vlSelf->_mc___05Fs2315 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x10U)));
    vlSelf->_mc___05Fs2316 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x11U)));
    vlSelf->_mc___05Fs2317 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x12U)));
    vlSelf->_mc___05Fs2318 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x13U)));
    vlSelf->_mc___05Fs2319 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x14U)));
    vlSelf->_mc___05Fs2320 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x15U)));
    vlSelf->_mc___05Fs2321 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x16U)));
    vlSelf->_mc___05Fs1853 = ((~ (IData)(vlSelf->_mc___05Fs2072)) 
                              & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__intValue_res 
                                 >> 0x3fU));
    vlSelf->_rs___05Fs1995 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_hit_way;
    vlSelf->_rs___05Fs1993 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_probe_way;
    vlSelf->_rs___05Fs1999 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lrscCount;
    vlSelf->_cp___05Fs9228 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lrscCount));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__block_probe_for_core_progress 
        = ((IData)(vlSelf->_cp___05Fs9255) | (0U != 
                                              (0x7cU 
                                               & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lrscCount))));
    vlSelf->_cp___05Fs9221 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_probe;
    vlSelf->_mc___05Fs1294 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_probe;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__releaseInFlight 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_probe) 
           | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_probe) 
              | (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state))));
    vlSelf->_rs___05Fs1994 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_probe_state_state;
    vlSelf->_cp___05Fs9281 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_probe_state_state));
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_66 
        = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__probe_bits_param) 
            << 2U) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_probe_state_state));
    vlSelf->_rs___05Fs1996 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_hit_state_state;
    vlSelf->_mc___05Fs1249 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_hit_state_state));
    vlSelf->_mc___05Fs3117 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__neg_out;
    vlSelf->_cp___05Fs10056 = (0x40U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__count));
    vlSelf->_rs___05Fs3316 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__count;
    if (vlSelf->_cp___05Fs10060) {
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__isHi 
            = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT___GEN_0));
    }
    vlSelf->_mc___05Fs3114 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__resHi;
    vlSelf->_cp___05Fs10049 = (1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__state));
    vlSelf->_cp___05Fs10052 = (5U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__state));
    vlSelf->_cp___05Fs10053 = (2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__state));
    vlSelf->_cp___05Fs10055 = (3U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__state));
    vlSelf->_rs___05Fs3310 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__state;
    vlSelf->_mc___05Fs3216 = ((IData)(vlSelf->_mc___05Fs3218) 
                              & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__state)));
    vlSelf->_cp___05Fs10062 = ((6U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__state)) 
                               | (7U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__state)));
    vlSelf->_rs___05Fs3320[0U] = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U];
    vlSelf->_rs___05Fs3320[1U] = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U];
    vlSelf->_rs___05Fs3320[2U] = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[2U];
    vlSelf->_mc___05Fs3118 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                    >> 0x1eU));
    vlSelf->_mc___05Fs3120 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                    >> 0x1aU));
    vlSelf->_mc___05Fs3121 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                    >> 0x1bU));
    vlSelf->_mc___05Fs3122 = (0U != (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                     >> 0x1cU));
    vlSelf->_mc___05Fs3123 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                    >> 0x16U));
    vlSelf->_mc___05Fs3124 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                    >> 0x17U));
    vlSelf->_mc___05Fs3125 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                    >> 0x12U));
    vlSelf->_mc___05Fs3126 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                    >> 0x13U));
    vlSelf->_mc___05Fs3127 = (0U != (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                             >> 0x14U)));
    vlSelf->_mc___05Fs3128 = (0U != (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                     >> 0x18U));
    vlSelf->_mc___05Fs3129 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                    >> 0xeU));
    vlSelf->_mc___05Fs3130 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                    >> 0xfU));
    vlSelf->_mc___05Fs3131 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                    >> 0xaU));
    vlSelf->_mc___05Fs3132 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                    >> 0xbU));
    vlSelf->_mc___05Fs3133 = (0U != (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                             >> 0xcU)));
    vlSelf->_mc___05Fs3134 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                    >> 6U));
    vlSelf->_mc___05Fs3135 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                    >> 7U));
    vlSelf->_mc___05Fs3136 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                    >> 2U));
    vlSelf->_mc___05Fs3137 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                    >> 3U));
    vlSelf->_mc___05Fs3138 = (0U != (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                             >> 4U)));
    vlSelf->_mc___05Fs3139 = (0U != (0xffU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                              >> 8U)));
    vlSelf->_mc___05Fs3140 = (0U != (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                     >> 0x10U));
    vlSelf->_mc___05Fs3141 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                    >> 0x1eU));
    vlSelf->_mc___05Fs3142 = (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                              >> 0x1fU);
    vlSelf->_mc___05Fs3143 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                    >> 0x1aU));
    vlSelf->_mc___05Fs3144 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                    >> 0x1bU));
    vlSelf->_mc___05Fs3145 = (0U != (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                     >> 0x1cU));
    vlSelf->_mc___05Fs3146 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                    >> 0x16U));
    vlSelf->_mc___05Fs3147 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                    >> 0x17U));
    vlSelf->_mc___05Fs3148 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                    >> 0x12U));
    vlSelf->_mc___05Fs3149 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                    >> 0x13U));
    vlSelf->_mc___05Fs3150 = (0U != (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                             >> 0x14U)));
    vlSelf->_mc___05Fs3151 = (0U != (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                     >> 0x18U));
    vlSelf->_mc___05Fs3152 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                    >> 0xeU));
    vlSelf->_mc___05Fs3153 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                    >> 0xfU));
    vlSelf->_mc___05Fs3154 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                    >> 0xaU));
    vlSelf->_mc___05Fs3155 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                    >> 0xbU));
    vlSelf->_mc___05Fs3156 = (0U != (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                             >> 0xcU)));
    vlSelf->_mc___05Fs3157 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                    >> 6U));
    vlSelf->_mc___05Fs3158 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                    >> 7U));
    vlSelf->_mc___05Fs3159 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                    >> 2U));
    vlSelf->_mc___05Fs3160 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                    >> 3U));
    vlSelf->_mc___05Fs3161 = (0U != (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                             >> 4U)));
    vlSelf->_mc___05Fs3162 = (0U != (0xffU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                              >> 8U)));
    vlSelf->_mc___05Fs3163 = (0U != (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                     >> 0x10U));
    vlSelf->_mc___05Fs3164 = (0U != vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U]);
    vlSelf->_mc___05Fs3119 = (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                              >> 0x1fU);
    vlSelf->_rs___05Fs3321[0U] = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U];
    vlSelf->_rs___05Fs3321[1U] = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U];
    vlSelf->_rs___05Fs3321[2U] = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[2U];
    vlSelf->_rs___05Fs3321[3U] = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[3U];
    vlSelf->_rs___05Fs3321[4U] = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[4U];
    __Vtemp_152[0U] = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[2U];
    __Vtemp_152[1U] = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[3U];
    __Vtemp_152[2U] = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[4U];
    VL_SUB_W(3, __Vtemp_153, __Vtemp_152, vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor);
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__subtractor[0U] 
        = __Vtemp_153[0U];
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__subtractor[1U] 
        = __Vtemp_153[1U];
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__subtractor[2U] 
        = (1U & __Vtemp_153[2U]);
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__result 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__resHi)
            ? (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[4U])) 
                << 0x3fU) | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[3U])) 
                              << 0x1fU) | ((QData)((IData)(
                                                           vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[2U])) 
                                           >> 1U)))
            : (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U]))));
    vlSelf->_mc___05Fs3165 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                    >> 0x1eU));
    vlSelf->_mc___05Fs3167 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                    >> 0x1aU));
    vlSelf->_mc___05Fs3168 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                    >> 0x1bU));
    vlSelf->_mc___05Fs3169 = (0U != (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                     >> 0x1cU));
    vlSelf->_mc___05Fs3170 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                    >> 0x16U));
    vlSelf->_mc___05Fs3171 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                    >> 0x17U));
    vlSelf->_mc___05Fs3172 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                    >> 0x12U));
    vlSelf->_mc___05Fs3173 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                    >> 0x13U));
    vlSelf->_mc___05Fs3174 = (0U != (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                             >> 0x14U)));
    vlSelf->_mc___05Fs3175 = (0U != (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                     >> 0x18U));
    vlSelf->_mc___05Fs3176 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                    >> 0xeU));
    vlSelf->_mc___05Fs3177 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                    >> 0xfU));
    vlSelf->_mc___05Fs3178 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                    >> 0xaU));
    vlSelf->_mc___05Fs3179 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                    >> 0xbU));
    vlSelf->_mc___05Fs3180 = (0U != (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                             >> 0xcU)));
    vlSelf->_mc___05Fs3181 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                    >> 6U));
    vlSelf->_mc___05Fs3182 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                    >> 7U));
    vlSelf->_mc___05Fs3183 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                    >> 2U));
    vlSelf->_mc___05Fs3184 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                    >> 3U));
    vlSelf->_mc___05Fs3185 = (0U != (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                             >> 4U)));
    vlSelf->_mc___05Fs3186 = (0U != (0xffU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                              >> 8U)));
    vlSelf->_mc___05Fs3187 = (0U != (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                     >> 0x10U));
    vlSelf->_mc___05Fs3188 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                    >> 0x1eU));
    vlSelf->_mc___05Fs3189 = (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                              >> 0x1fU);
    vlSelf->_mc___05Fs3190 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                    >> 0x1aU));
    vlSelf->_mc___05Fs3191 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                    >> 0x1bU));
    vlSelf->_mc___05Fs3192 = (0U != (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                     >> 0x1cU));
    vlSelf->_mc___05Fs3193 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                    >> 0x16U));
    vlSelf->_mc___05Fs3194 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                    >> 0x17U));
    vlSelf->_mc___05Fs3195 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                    >> 0x12U));
    vlSelf->_mc___05Fs3196 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                    >> 0x13U));
    vlSelf->_mc___05Fs3197 = (0U != (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                             >> 0x14U)));
    vlSelf->_mc___05Fs3198 = (0U != (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                     >> 0x18U));
    vlSelf->_mc___05Fs3199 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                    >> 0xeU));
    vlSelf->_mc___05Fs3200 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                    >> 0xfU));
    vlSelf->_mc___05Fs3201 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                    >> 0xaU));
    vlSelf->_mc___05Fs3202 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                    >> 0xbU));
    vlSelf->_mc___05Fs3203 = (0U != (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                             >> 0xcU)));
    vlSelf->_mc___05Fs3204 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                    >> 6U));
    vlSelf->_mc___05Fs3205 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                    >> 7U));
    vlSelf->_mc___05Fs3206 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                    >> 2U));
    vlSelf->_mc___05Fs3207 = (1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                    >> 3U));
    vlSelf->_mc___05Fs3208 = (0U != (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                             >> 4U)));
    vlSelf->_mc___05Fs3209 = (0U != (0xffU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                              >> 8U)));
    vlSelf->_mc___05Fs3210 = (0U != (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                     >> 0x10U));
    vlSelf->_mc___05Fs3211 = (0U != vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U]);
    vlSelf->_mc___05Fs3166 = (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                              >> 0x1fU);
    __Vtemp_155[0U] = 0U;
    __Vtemp_155[1U] = 0U;
    __Vtemp_155[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_156, __Vtemp_155, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_159[0U] = 0U;
    __Vtemp_159[1U] = 0U;
    __Vtemp_159[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_160, __Vtemp_159, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_163[0U] = 0U;
    __Vtemp_163[1U] = 0U;
    __Vtemp_163[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_164, __Vtemp_163, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    if (vlSelf->_cp___05Fs10034) {
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_9 = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_9 = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_invalidExc_pipe_v = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_v = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_pipe_v = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_detectTininess_pipe_v = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__io_validout_pipe_v = 0U;
    } else {
        if (vlSelf->_cp___05Fs9151) {
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_9 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_8;
        }
        if (vlSelf->_cp___05Fs8521) {
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_9 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_8;
        }
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_invalidExc_pipe_v 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__valid_stage0_pipe_v;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_v 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__valid_stage0_pipe_v;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_pipe_v 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__valid_stage0_pipe_v;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_detectTininess_pipe_v 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__valid_stage0_pipe_v;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__io_validout_pipe_v 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__valid_stage0_pipe_v;
    }
    __Vtemp_167[0U] = 0U;
    __Vtemp_167[1U] = 0U;
    __Vtemp_167[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_168, __Vtemp_167, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_171[0U] = 0U;
    __Vtemp_171[1U] = 0U;
    __Vtemp_171[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_172, __Vtemp_171, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_175[0U] = 0U;
    __Vtemp_175[1U] = 0U;
    __Vtemp_175[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_176, __Vtemp_175, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_179[0U] = 0U;
    __Vtemp_179[1U] = 0U;
    __Vtemp_179[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_180, __Vtemp_179, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_183[0U] = 0U;
    __Vtemp_183[1U] = 0U;
    __Vtemp_183[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_184, __Vtemp_183, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_187[0U] = 0U;
    __Vtemp_187[1U] = 0U;
    __Vtemp_187[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_188, __Vtemp_187, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_191[0U] = 0U;
    __Vtemp_191[1U] = 0U;
    __Vtemp_191[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_192, __Vtemp_191, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_195[0U] = 0U;
    __Vtemp_195[1U] = 0U;
    __Vtemp_195[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_196, __Vtemp_195, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_199[0U] = 0U;
    __Vtemp_199[1U] = 0U;
    __Vtemp_199[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_200, __Vtemp_199, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_203[0U] = 0U;
    __Vtemp_203[1U] = 0U;
    __Vtemp_203[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_204, __Vtemp_203, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_207[0U] = 0U;
    __Vtemp_207[1U] = 0U;
    __Vtemp_207[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_208, __Vtemp_207, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_211[0U] = 0U;
    __Vtemp_211[1U] = 0U;
    __Vtemp_211[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_212, __Vtemp_211, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_215[0U] = 0U;
    __Vtemp_215[1U] = 0U;
    __Vtemp_215[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_216, __Vtemp_215, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_219[0U] = 0U;
    __Vtemp_219[1U] = 0U;
    __Vtemp_219[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_220, __Vtemp_219, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_223[0U] = 0U;
    __Vtemp_223[1U] = 0U;
    __Vtemp_223[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_224, __Vtemp_223, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_227[0U] = 0U;
    __Vtemp_227[1U] = 0U;
    __Vtemp_227[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_228, __Vtemp_227, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_231[0U] = 0U;
    __Vtemp_231[1U] = 0U;
    __Vtemp_231[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_232, __Vtemp_231, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_235[0U] = 0U;
    __Vtemp_235[1U] = 0U;
    __Vtemp_235[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_236, __Vtemp_235, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_239[0U] = 0U;
    __Vtemp_239[1U] = 0U;
    __Vtemp_239[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_240, __Vtemp_239, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_243[0U] = 0U;
    __Vtemp_243[1U] = 0U;
    __Vtemp_243[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_244, __Vtemp_243, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_247[0U] = 0U;
    __Vtemp_247[1U] = 0U;
    __Vtemp_247[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_248, __Vtemp_247, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_251[0U] = 0U;
    __Vtemp_251[1U] = 0U;
    __Vtemp_251[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_252, __Vtemp_251, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_255[0U] = 0U;
    __Vtemp_255[1U] = 0U;
    __Vtemp_255[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_256, __Vtemp_255, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_259[0U] = 0U;
    __Vtemp_259[1U] = 0U;
    __Vtemp_259[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_260, __Vtemp_259, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_263[0U] = 0U;
    __Vtemp_263[1U] = 0U;
    __Vtemp_263[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_264, __Vtemp_263, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_267[0U] = 0U;
    __Vtemp_267[1U] = 0U;
    __Vtemp_267[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_268, __Vtemp_267, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_271[0U] = 0U;
    __Vtemp_271[1U] = 0U;
    __Vtemp_271[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_272, __Vtemp_271, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_275[0U] = 0U;
    __Vtemp_275[1U] = 0U;
    __Vtemp_275[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_276, __Vtemp_275, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_279[0U] = 0U;
    __Vtemp_279[1U] = 0U;
    __Vtemp_279[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_280, __Vtemp_279, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_283[0U] = 0U;
    __Vtemp_283[1U] = 0U;
    __Vtemp_283[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_284, __Vtemp_283, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_287[0U] = 0U;
    __Vtemp_287[1U] = 0U;
    __Vtemp_287[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_288, __Vtemp_287, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_291[0U] = 0U;
    __Vtemp_291[1U] = 0U;
    __Vtemp_291[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_292, __Vtemp_291, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_295[0U] = 0U;
    __Vtemp_295[1U] = 0U;
    __Vtemp_295[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_296, __Vtemp_295, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_299[0U] = 0U;
    __Vtemp_299[1U] = 0U;
    __Vtemp_299[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_300, __Vtemp_299, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_303[0U] = 0U;
    __Vtemp_303[1U] = 0U;
    __Vtemp_303[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_304, __Vtemp_303, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_307[0U] = 0U;
    __Vtemp_307[1U] = 0U;
    __Vtemp_307[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_308, __Vtemp_307, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_311[0U] = 0U;
    __Vtemp_311[1U] = 0U;
    __Vtemp_311[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_312, __Vtemp_311, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_315[0U] = 0U;
    __Vtemp_315[1U] = 0U;
    __Vtemp_315[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_316, __Vtemp_315, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h3152f987__0 
        = ((IData)(vlSelf->_mc___05Fs2285) ? (7ULL 
                                              | ((((IData)(vlSelf->_mc___05Fs2280) 
                                                   | ((IData)(vlSelf->_mc___05Fs2279) 
                                                      | ((IData)(vlSelf->_mc___05Fs2278) 
                                                         | (IData)(vlSelf->_mc___05Fs2277))))
                                                   ? 0x7ffffffffffffULL
                                                   : 
                                                  (((QData)((IData)(
                                                                    (1U 
                                                                     & (__Vtemp_156[0U] 
                                                                        >> 0xdU)))) 
                                                    << 0x32U) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (__Vtemp_160[0U] 
                                                                           >> 0xeU)))) 
                                                       << 0x31U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (__Vtemp_164[0U] 
                                                                              >> 0xfU)))) 
                                                          << 0x30U) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (__Vtemp_168[0U] 
                                                                                >> 0x10U)))) 
                                                             << 0x2fU) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_172[0U] 
                                                                                >> 0x11U)))) 
                                                                << 0x2eU) 
                                                               | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & ((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1 
                                                                                >> 0xfU) 
                                                                                | (5U 
                                                                                & ((0xcU 
                                                                                & (__Vtemp_176[0U] 
                                                                                >> 0x11U)) 
                                                                                | (3U 
                                                                                & (__Vtemp_180[0U] 
                                                                                >> 0x15U)))))))) 
                                                                   << 0x2aU) 
                                                                  | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & ((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1 
                                                                                >> 7U) 
                                                                                | (0x55U 
                                                                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_0)))))) 
                                                                      << 0x22U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_0) 
                                                                                >> 1U)))) 
                                                                         << 0x21U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1 
                                                                                >> 5U) 
                                                                                | (__Vtemp_184[0U] 
                                                                                >> 0x1fU))))) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                ((__Vtemp_188[1U] 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (__Vtemp_192[1U] 
                                                                                << 0x1dU)) 
                                                                                | (((0x38000000U 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1 
                                                                                << 0x1bU)) 
                                                                                | (0x14000000U 
                                                                                & ((0x30000000U 
                                                                                & (__Vtemp_196[1U] 
                                                                                << 0x19U)) 
                                                                                | (0xc000000U 
                                                                                & (__Vtemp_200[1U] 
                                                                                << 0x15U))))) 
                                                                                | ((0x2000000U 
                                                                                & (__Vtemp_204[1U] 
                                                                                << 0x13U)) 
                                                                                | ((0x1000000U 
                                                                                & (__Vtemp_208[1U] 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (__Vtemp_212[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x400000U 
                                                                                & (__Vtemp_216[1U] 
                                                                                << 0xdU)) 
                                                                                | ((0x200000U 
                                                                                & (__Vtemp_220[1U] 
                                                                                << 0xbU)) 
                                                                                | ((0x100000U 
                                                                                & (__Vtemp_224[1U] 
                                                                                << 9U)) 
                                                                                | ((0x80000U 
                                                                                & (__Vtemp_228[1U] 
                                                                                << 7U)) 
                                                                                | ((0x40000U 
                                                                                & (__Vtemp_232[1U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & (__Vtemp_236[1U] 
                                                                                << 3U)) 
                                                                                | ((0x10000U 
                                                                                & (__Vtemp_240[1U] 
                                                                                << 1U)) 
                                                                                | ((0x8000U 
                                                                                & (__Vtemp_244[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (__Vtemp_248[1U] 
                                                                                >> 3U)) 
                                                                                | ((((0x2000U 
                                                                                & (__Vtemp_252[1U] 
                                                                                >> 5U)) 
                                                                                | (0x800U 
                                                                                & (__Vtemp_256[1U] 
                                                                                >> 9U))) 
                                                                                | (0x1400U 
                                                                                & ((0x3000U 
                                                                                & (__Vtemp_260[1U] 
                                                                                >> 7U)) 
                                                                                | (0xc00U 
                                                                                & (__Vtemp_264[1U] 
                                                                                >> 0xbU))))) 
                                                                                | ((0x200U 
                                                                                & (__Vtemp_268[1U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (__Vtemp_272[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (__Vtemp_276[1U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (__Vtemp_280[1U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (__Vtemp_284[1U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (__Vtemp_288[1U] 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (__Vtemp_292[1U] 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (__Vtemp_296[1U] 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (__Vtemp_300[1U] 
                                                                                >> 0x1dU)) 
                                                                                | (__Vtemp_304[1U] 
                                                                                >> 0x1fU)))))))))))))))))))))))))))))))))))))) 
                                                 << 3U))
            : (QData)((IData)((((IData)(vlSelf->_mc___05Fs2280) 
                                & ((IData)(vlSelf->_mc___05Fs2279) 
                                   & ((IData)(vlSelf->_mc___05Fs2278) 
                                      & (IData)(vlSelf->_mc___05Fs2277))))
                                ? ((4U & (__Vtemp_308[0U] 
                                          << 2U)) | 
                                   ((2U & __Vtemp_312[0U]) 
                                    | (1U & (__Vtemp_316[0U] 
                                             >> 2U))))
                                : 0U))));
    vlSelf->_mc___05Fs1029 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_mxr;
    vlSelf->_rs___05Fs2898 = vlSelf->_cp___05Fs9783;
    vlSelf->_rs___05Fs2169 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_level;
    vlSelf->_rs___05Fs2180 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_level;
    vlSelf->_rs___05Fs2191 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_level;
    vlSelf->_rs___05Fs2202 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_level;
    vlSelf->_rs___05Fs2213 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_level;
    vlSelf->_rs___05Fs2224 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_level;
    vlSelf->_rs___05Fs2235 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_level;
    vlSelf->_rs___05Fs2246 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_level;
    vlSelf->_rs___05Fs2295 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_gpa_vpn;
    vlSelf->_mc___05Fs1404 = vlSelf->_mc___05Fs1403;
    vlSelf->_cp___05Fs9348 = vlSelf->_mc___05Fs1403;
    vlSelf->_cp___05Fs9382 = vlSelf->_mc___05Fs1403;
    vlSelf->_rs___05Fs2892 = vlSelf->_mc___05Fs1403;
    vlSelf->_cp___05Fs9416 = vlSelf->_cp___05Fs9396;
    vlSelf->_cp___05Fs9436 = vlSelf->_cp___05Fs9396;
    vlSelf->_cp___05Fs9456 = vlSelf->_cp___05Fs9396;
    vlSelf->_cp___05Fs9476 = vlSelf->_cp___05Fs9396;
    vlSelf->_cp___05Fs9496 = vlSelf->_cp___05Fs9396;
    vlSelf->_cp___05Fs9516 = vlSelf->_cp___05Fs9396;
    vlSelf->_cp___05Fs9536 = vlSelf->_cp___05Fs9396;
    vlSelf->_cp___05Fs9549 = vlSelf->_cp___05Fs9396;
    vlSelf->_cp___05Fs9556 = vlSelf->_cp___05Fs9396;
    vlSelf->_cp___05Fs9563 = vlSelf->_cp___05Fs9396;
    vlSelf->_cp___05Fs9570 = vlSelf->_cp___05Fs9396;
    vlSelf->_cp___05Fs9577 = vlSelf->_cp___05Fs9396;
    vlSelf->_rs___05Fs2290 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_vstage1_en;
    vlSelf->_cp___05Fs9405 = vlSelf->_cp___05Fs9385;
    vlSelf->_cp___05Fs9425 = vlSelf->_cp___05Fs9385;
    vlSelf->_cp___05Fs9445 = vlSelf->_cp___05Fs9385;
    vlSelf->_cp___05Fs9465 = vlSelf->_cp___05Fs9385;
    vlSelf->_cp___05Fs9485 = vlSelf->_cp___05Fs9385;
    vlSelf->_cp___05Fs9505 = vlSelf->_cp___05Fs9385;
    vlSelf->_cp___05Fs9525 = vlSelf->_cp___05Fs9385;
    vlSelf->_cp___05Fs9545 = vlSelf->_cp___05Fs9385;
    vlSelf->_cp___05Fs9552 = vlSelf->_cp___05Fs9385;
    vlSelf->_cp___05Fs9559 = vlSelf->_cp___05Fs9385;
    vlSelf->_cp___05Fs9566 = vlSelf->_cp___05Fs9385;
    vlSelf->_cp___05Fs9573 = vlSelf->_cp___05Fs9385;
    vlSelf->_rs___05Fs2291 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_stage2_en;
    vlSelf->_cp___05Fs8611 = (1U & (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__max_count) 
                                       >> 1U)));
    vlSelf->_rs___05Fs2260 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0;
    vlSelf->_rs___05Fs2265 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0;
    vlSelf->_rs___05Fs2270 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0;
    vlSelf->_rs___05Fs2275 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0;
    vlSelf->_rs___05Fs2172 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_0;
    vlSelf->_rs___05Fs2173 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_1;
    vlSelf->_rs___05Fs2174 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_2;
    vlSelf->_rs___05Fs2175 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_3;
    vlSelf->_rs___05Fs2183 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_data_0;
    vlSelf->_rs___05Fs2184 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_data_1;
    vlSelf->_rs___05Fs2185 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_data_2;
    vlSelf->_rs___05Fs2186 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_data_3;
    vlSelf->_rs___05Fs2194 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_data_0;
    vlSelf->_rs___05Fs2195 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_data_1;
    vlSelf->_rs___05Fs2196 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_data_2;
    vlSelf->_rs___05Fs2197 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_data_3;
    vlSelf->_rs___05Fs2205 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_data_0;
    vlSelf->_rs___05Fs2206 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_data_1;
    vlSelf->_rs___05Fs2207 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_data_2;
    vlSelf->_rs___05Fs2208 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_data_3;
    vlSelf->_rs___05Fs2216 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_data_0;
    vlSelf->_rs___05Fs2217 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_data_1;
    vlSelf->_rs___05Fs2218 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_data_2;
    vlSelf->_rs___05Fs2219 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_data_3;
    vlSelf->_rs___05Fs2227 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_data_0;
    vlSelf->_rs___05Fs2228 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_data_1;
    vlSelf->_rs___05Fs2229 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_data_2;
    vlSelf->_rs___05Fs2230 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_data_3;
    vlSelf->_rs___05Fs2238 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_data_0;
    vlSelf->_rs___05Fs2239 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_data_1;
    vlSelf->_rs___05Fs2240 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_data_2;
    vlSelf->_rs___05Fs2241 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_data_3;
    vlSelf->_rs___05Fs2249 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_0;
    vlSelf->_rs___05Fs2250 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_1;
    vlSelf->_rs___05Fs2251 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_2;
    vlSelf->_rs___05Fs2252 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_3;
    vlSelf->_rs___05Fs2170 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_tag_vpn;
    vlSelf->_rs___05Fs2203 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_tag_vpn;
    vlSelf->_rs___05Fs2281 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_valid_0;
    vlSelf->_rs___05Fs2236 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_tag_vpn;
    vlSelf->_rs___05Fs2176 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_0;
    vlSelf->_rs___05Fs2177 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_1;
    vlSelf->_rs___05Fs2178 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_2;
    vlSelf->_rs___05Fs2179 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_3;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_2 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_0) 
           | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_1) 
              | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_2) 
                 | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_3))));
    vlSelf->_cp___05Fs9617 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_tag_v;
    vlSelf->_cp___05Fs9579 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_tag_v)));
    vlSelf->_cp___05Fs9613 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_tag_v;
    vlSelf->_cp___05Fs9551 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_tag_v)));
    vlSelf->_cp___05Fs9614 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_tag_v;
    vlSelf->_cp___05Fs9558 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_tag_v)));
    vlSelf->_rs___05Fs2276 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_valid_0;
    vlSelf->_rs___05Fs2261 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_valid_0;
    vlSelf->_rs___05Fs2266 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_valid_0;
    vlSelf->_cp___05Fs9615 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_tag_v;
    vlSelf->_cp___05Fs9565 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_tag_v)));
    vlSelf->_cp___05Fs9616 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_tag_v;
    vlSelf->_cp___05Fs9572 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_tag_v)));
    vlSelf->_rs___05Fs2209 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_0;
    vlSelf->_rs___05Fs2210 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_1;
    vlSelf->_rs___05Fs2211 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_2;
    vlSelf->_rs___05Fs2212 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_3;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_11 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_0) 
           | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_1) 
              | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_2) 
                 | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_3))));
    vlSelf->_rs___05Fs2214 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_tag_vpn;
    vlSelf->_rs___05Fs2271 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_valid_0;
    vlSelf->_rs___05Fs2181 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_tag_vpn;
    vlSelf->_rs___05Fs2192 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_tag_vpn;
    vlSelf->_rs___05Fs2242 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_0;
    vlSelf->_rs___05Fs2243 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_1;
    vlSelf->_rs___05Fs2244 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_2;
    vlSelf->_rs___05Fs2245 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_3;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_20 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_0) 
           | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_1) 
              | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_2) 
                 | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_3))));
    vlSelf->_rs___05Fs2225 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_tag_vpn;
    vlSelf->_rs___05Fs2247 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_tag_vpn;
    vlSelf->_cp___05Fs9581 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_tag_v;
    vlSelf->_cp___05Fs9401 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_tag_v)));
    vlSelf->_rs___05Fs2253 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_0;
    vlSelf->_rs___05Fs2254 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_1;
    vlSelf->_rs___05Fs2255 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_2;
    vlSelf->_rs___05Fs2256 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_3;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_23 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_0) 
           | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_1) 
              | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_2) 
                 | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_3))));
    vlSelf->_rs___05Fs2220 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_valid_0;
    vlSelf->_rs___05Fs2221 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_valid_1;
    vlSelf->_rs___05Fs2222 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_valid_2;
    vlSelf->_rs___05Fs2223 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_valid_3;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_14 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_valid_0) 
           | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_valid_1) 
              | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_valid_2) 
                 | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_valid_3))));
    vlSelf->_cp___05Fs9593 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_tag_v;
    vlSelf->_cp___05Fs9461 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_tag_v)));
    vlSelf->_rs___05Fs2187 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_0;
    vlSelf->_rs___05Fs2188 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_1;
    vlSelf->_rs___05Fs2189 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_2;
    vlSelf->_rs___05Fs2190 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_3;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_5 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_0) 
           | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_1) 
              | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_2) 
                 | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_3))));
    vlSelf->_rs___05Fs2198 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_0;
    vlSelf->_rs___05Fs2199 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_1;
    vlSelf->_rs___05Fs2200 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_2;
    vlSelf->_rs___05Fs2201 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_3;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_8 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_0) 
           | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_1) 
              | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_2) 
                 | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_3))));
    vlSelf->_cp___05Fs9605 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_tag_v;
    vlSelf->_cp___05Fs9521 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_tag_v)));
    vlSelf->_rs___05Fs2231 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_valid_0;
    vlSelf->_rs___05Fs2232 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_valid_1;
    vlSelf->_rs___05Fs2233 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_valid_2;
    vlSelf->_rs___05Fs2234 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_valid_3;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_17 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_valid_0) 
           | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_valid_1) 
              | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_valid_2) 
                 | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_valid_3))));
    vlSelf->_cp___05Fs9597 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_tag_v;
    vlSelf->_cp___05Fs9481 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_tag_v)));
    vlSelf->_cp___05Fs9585 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_tag_v;
    vlSelf->_cp___05Fs9421 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_tag_v)));
    vlSelf->_cp___05Fs9589 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_tag_v;
    vlSelf->_cp___05Fs9441 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_tag_v)));
    vlSelf->_rs___05Fs2257 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_level;
    vlSelf->_mc___05Fs1407 = (0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_level));
    vlSelf->_rs___05Fs2262 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_level;
    vlSelf->_mc___05Fs1409 = (0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_level));
    vlSelf->_rs___05Fs2267 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_level;
    vlSelf->_mc___05Fs1411 = (0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_level));
    vlSelf->_rs___05Fs2272 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_level;
    vlSelf->_mc___05Fs1413 = (0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_level));
    vlSelf->_cp___05Fs9601 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_tag_v;
    vlSelf->_cp___05Fs9501 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_tag_v)));
    vlSelf->_cp___05Fs9609 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_tag_v;
    vlSelf->_cp___05Fs9541 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_tag_v)));
    vlSelf->_mc___05Fs2597 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__stage2_final;
    vlSelf->_mc___05Fs2590 = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__stage2_final)) 
                                    | ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_req_vstage1)) 
                                       | (IData)(vlSelf->_mc___05Fs2595))));
    if (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__stage2_final) {
        vlSelf->_mc___05Fs2600 = (3U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__max_count));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_69 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__max_count;
    } else {
        vlSelf->_mc___05Fs2600 = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_69 = 2U;
    }
    vlSelf->_rs___05Fs2278 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_tag_vpn;
    vlSelf->_rs___05Fs2258 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_tag_vpn;
    vlSelf->_rs___05Fs2263 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_tag_vpn;
    vlSelf->_rs___05Fs2268 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_tag_vpn;
    vlSelf->_rs___05Fs2273 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_tag_vpn;
    vlSelf->_rs___05Fs2280 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0;
    vlSelf->_rs___05Fs2277 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_level;
    vlSelf->_mc___05Fs1401 = (1U & (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_level) 
                                       >> 1U)));
    vlSelf->_mc___05Fs1400 = (0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_level));
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__unnamedblk1__DOT___GEN_296 
        = ((IData)(vlSelf->_cp___05Fs9567) | (IData)(vlSelf->_cp___05Fs9553));
    if (vlSelf->_cp___05Fs9376) {
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_sectored_hit_valid 
            = vlSelf->_cp___05Fs9373;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__waddr 
            = ((0xfU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_superpage_repl_addr_valids))
                ? ((2U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__state_reg_1) 
                          >> 1U)) | (1U & ((4U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__state_reg_1))
                                            ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__state_reg_1) 
                                               >> 1U)
                                            : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__state_reg_1))))
                : ((1U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_h09699339__0))
                    ? ((2U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_h09699339__0))
                        ? (2U | (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_h09699339__0) 
                                       >> 2U))) : 1U)
                    : 0U));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_superpage_hit_bits 
            = ((((IData)(vlSelf->_cp___05Fs9567) | (IData)(vlSelf->_cp___05Fs9560)) 
                << 1U) | (IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__unnamedblk1__DOT___GEN_296));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_refill_tag 
            = (0x7ffffffU & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                     >> 0xcU)));
    }
    vlSelf->_rs___05Fs3622 = vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__enables_0_0;
    vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT____Vcellinp__fanin__io_ip 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__enables_0_0) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__pendingUInt));
    vlSelf->_rs___05Fs718 = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dToggle;
    vlSelf->_cp___05Fs5122 = vlSelf->_mc___05Fs607;
    vlSelf->_rs___05Fs717 = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dOrig;
    vlSelf->_mc___05Fs1001 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__r_sectored_hit_valid;
    vlSelf->_cp___05Fs8618 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__r_sectored_hit_valid)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__waddr_1 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__r_sectored_hit_valid)
            ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__r_sectored_hit_bits)
            : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__r_sectored_repl_addr));
    vlSelf->_mc___05Fs1066 = (1U & (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT____VdfgTmp_hc3f94a52__0) 
                                       >> 6U)));
    vlSelf->_mc___05Fs1067 = (1U & (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT____VdfgTmp_hc3f94a52__0) 
                                       >> 5U)));
    vlSelf->_mc___05Fs1068 = (1U & (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT____VdfgTmp_hc3f94a52__0) 
                                       >> 4U)));
    vlSelf->_mc___05Fs1069 = (1U & (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT____VdfgTmp_hc3f94a52__0) 
                                       >> 3U)));
    vlSelf->_mc___05Fs1070 = (1U & (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT____VdfgTmp_hc3f94a52__0) 
                                       >> 2U)));
    vlSelf->_mc___05Fs1071 = (1U & (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT____VdfgTmp_hc3f94a52__0) 
                                       >> 1U)));
    vlSelf->_mc___05Fs1072 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT____VdfgTmp_hc3f94a52__0)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__r_sectored_repl_addr_valids 
        = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT___GEN_23) 
            << 7U) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT____VdfgTmp_hc3f94a52__0));
    vlSelf->_rs___05Fs1688 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__r_superpage_hit_bits;
    vlSelf->_mc___05Fs1058 = (1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__state_reg_1) 
                                    >> 2U));
    vlSelf->_rs___05Fs1699 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__state_reg_1;
    vlSelf->_cp___05Fs8612 = (0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__waddr));
    vlSelf->_cp___05Fs8614 = (1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__waddr));
    vlSelf->_cp___05Fs8615 = (2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__waddr));
    vlSelf->_cp___05Fs8616 = (3U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__waddr));
    vlSelf->_rs___05Fs1683 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__waddr;
    vlSelf->_mc___05Fs1059 = (1U & (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT____VdfgTmp_h09699339__0) 
                                       >> 2U)));
    vlSelf->_mc___05Fs1060 = (1U & (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT____VdfgTmp_h09699339__0) 
                                       >> 1U)));
    vlSelf->_mc___05Fs1061 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT____VdfgTmp_h09699339__0)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__r_superpage_repl_addr_valids 
        = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_valid_0) 
            << 3U) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT____VdfgTmp_h09699339__0));
    vlSelf->_rs___05Fs1682 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__r_refill_tag;
    vlSelf->_rs___05Fs1978 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_vaddr_r;
    vlSelf->_rs___05Fs1977 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_uncached_resp_addr;
    vlSelf->_rs___05Fs2003 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_addr;
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__unnamedblk2__DOT___GEN_132 
        = ((IData)(vlSelf->_cp___05Fs8217) & (IData)(vlSelf->_cp___05Fs9252));
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__unnamedblk2__DOT___GEN_133 
        = ((IData)(vlSelf->_cp___05Fs9289) & (IData)(vlSelf->_cp___05Fs9291));
    if (vlSelf->_cp___05Fs10034) {
        vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__state_reg_1 = 0U;
        vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__resetting = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__flushCounter = 0xc0U;
        vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_ack_wait = 0U;
        vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__uncachedInFlight_0 = 0U;
    } else {
        if (((IData)(vlSelf->_cp___05Fs9372) & (IData)(vlSelf->_cp___05Fs9374))) {
            vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__state_reg_1 
                = ((4U & ((~ (IData)((0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hi_4)))) 
                          << 2U)) | ((2U & (((0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hi_4))
                                              ? (~ (IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__unnamedblk1__DOT___GEN_296))
                                              : ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__state_reg_1) 
                                                 >> 1U)) 
                                            << 1U)) 
                                     | (1U & ((0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hi_4))
                                               ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__state_reg_1)
                                               : (~ (IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__unnamedblk1__DOT___GEN_296))))));
        }
        vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__resetting 
            = ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__resetting) 
                   & (IData)(vlSelf->_cp___05Fs9299))) 
               & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__REG) 
                  | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__resetting)));
        vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_ack_wait 
            = ((IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__unnamedblk2__DOT___GEN_133) 
               | (((((~ (IData)(vlSelf->_cp___05Fs8230)) 
                     | (IData)(vlSelf->_mc___05Fs1318)) 
                    | (IData)(vlSelf->_cp___05Fs9261)) 
                   | (~ (IData)(vlSelf->_cp___05Fs10216))) 
                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_ack_wait)));
        vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__uncachedInFlight_0 
            = ((((~ (IData)(vlSelf->_cp___05Fs8230)) 
                 | (IData)(vlSelf->_mc___05Fs1318)) 
                | (~ ((IData)(vlSelf->_cp___05Fs9261) 
                      & (IData)(vlSelf->_cp___05Fs9262)))) 
               & ((IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__unnamedblk2__DOT___GEN_132) 
                  | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__uncachedInFlight_0)));
        if (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__resetting) {
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__flushCounter 
                = (0xffU & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__flushCounterNext));
        }
    }
    if (vlSelf->_cp___05Fs9227) {
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lrscAddr 
            = (0x3ffffffffULL & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                 >> 6U));
    }
    if (vlSelf->_cp___05Fs9199) {
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__unnamedblk2__DOT__unnamedblk6__DOT__s0_tlb_req_vaddr 
            = ((0xffffffffc0ULL & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__resetting)
                                     ? (((QData)((IData)(
                                                         (0xfffffffU 
                                                          & (IData)(
                                                                    (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_addr 
                                                                     >> 0xcU))))) 
                                         << 6U) | (QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__metaArb_io_in_5_bits_idx)))
                                     : ((IData)(vlSelf->_mc___05Fs1351)
                                         ? (((QData)((IData)(
                                                             (0xfffffffU 
                                                              & (IData)(
                                                                        (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_addr 
                                                                         >> 0xcU))))) 
                                             << 6U) 
                                            | (QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__metaArb_io_in_1_bits_idx)))
                                         : ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN)
                                             ? (((QData)((IData)(
                                                                 (0xfffffffU 
                                                                  & (IData)(
                                                                            (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_addr 
                                                                             >> 0xcU))))) 
                                                 << 6U) 
                                                | (QData)((IData)(
                                                                  (0x3fU 
                                                                   & (IData)(
                                                                             (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                                                              >> 6U))))))
                                             : ((IData)(vlSelf->_cp___05Fs9155)
                                                 ? 
                                                (((QData)((IData)(
                                                                  (0xfffffffU 
                                                                   & (IData)(
                                                                             (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_addr 
                                                                              >> 0xcU))))) 
                                                  << 6U) 
                                                 | (QData)((IData)(
                                                                   (0x3fU 
                                                                    & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__probe_bits_address 
                                                                       >> 6U)))))
                                                 : 
                                                ((IData)(vlSelf->_cp___05Fs9153)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(
                                                                              (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_addr 
                                                                               >> 0x20U))))) 
                                                   << 0x1aU) 
                                                  | (QData)((IData)(
                                                                    (0x3ffffffU 
                                                                     & ((IData)(vlSelf->_cp___05Fs9283)
                                                                         ? 
                                                                        (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__probe_bits_address 
                                                                         >> 6U)
                                                                         : 
                                                                        ((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_b_q__DOT___ram_ext_R0_data[1U] 
                                                                          << 0xfU) 
                                                                         | (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_b_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 0x11U)))))))
                                                  : 
                                                 (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_addr 
                                                  >> 6U)))))) 
                                   << 6U)) | (QData)((IData)(
                                                             (0x3fU 
                                                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_addr)))));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_vaddr 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__unnamedblk2__DOT__unnamedblk6__DOT__s0_tlb_req_vaddr;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__unnamedblk2__DOT__unnamedblk6__DOT__s0_tlb_req_vaddr;
    }
    if (TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__unnamedblk2__DOT___GEN_133) {
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_ack_addr 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__probe_bits_address;
    }
    if (TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__unnamedblk2__DOT___GEN_132) {
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__uncachedReqs_0_addr 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr;
        vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__uncachedReqs_0_tag 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_tag;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__uncachedReqs_0_cmd 
            = ((IData)(vlSelf->_mc___05Fs1315) ? (1U 
                                                  | ((IData)(vlSelf->_mc___05Fs1311) 
                                                     << 4U))
                : 0U);
        vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__uncachedReqs_0_size 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_size;
        vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__uncachedReqs_0_signed 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_signed;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__uncachedReqs_0_dprv 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_dprv;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__uncachedReqs_0_dv 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_dv;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__uncachedReqs_0_phys 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_phys;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__uncachedReqs_0_no_resp 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_no_resp;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__uncachedReqs_0_no_alloc 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_no_alloc;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__uncachedReqs_0_no_xcpt 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_no_xcpt;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__uncachedReqs_0_data 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_data;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__uncachedReqs_0_mask 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_mask;
    }
    if (vlSelf->_cp___05Fs9275) {
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__probe_bits_address 
            = ((((IData)(vlSelf->_mc___05Fs1254) ? (IData)(
                                                           (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                                            >> 0xcU))
                  : (((((IData)(vlSelf->_mc___05Fs1250)
                         ? vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r
                         : 0U) | ((IData)(vlSelf->_mc___05Fs1251)
                                   ? vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r_1
                                   : 0U)) | ((IData)(vlSelf->_mc___05Fs1252)
                                              ? vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r_2
                                              : 0U)) 
                     | ((3U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_victim_way_r))
                         ? vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r_3
                         : 0U))) << 0xcU) | (0xfc0U 
                                             & ((IData)(
                                                        (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                                         >> 6U)) 
                                                << 6U)));
    } else if (vlSelf->_cp___05Fs8245) {
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__probe_bits_address 
            = ((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_b_q__DOT___ram_ext_R0_data[1U] 
                << 0x15U) | (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_b_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xbU));
    }
    vlSelf->_rs___05Fs1863 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd;
    vlSelf->_rs___05Fs1877 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_sfence 
        = ((0x14U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
           | ((0x15U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
              | (0x16U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd))));
    vlSelf->_mc___05Fs1041 = ((6U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
                              | (7U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)));
    vlSelf->_mc___05Fs1044 = (0x11U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd));
    vlSelf->_mc___05Fs1045 = (((4U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
                               | ((9U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
                                  | (0xaU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)))) 
                              | (0xbU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)));
    vlSelf->_mc___05Fs1046 = (((8U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
                               | ((0xcU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
                                  | ((0xdU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
                                     | (0xeU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd))))) 
                              | (0xfU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)));
    vlSelf->_mc___05Fs1160 = ((6U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
                              | (7U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)));
    vlSelf->_mc___05Fs1163 = (0x11U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd));
    vlSelf->_mc___05Fs1164 = ((4U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
                              | ((9U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
                                 | ((0xaU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
                                    | (0xbU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)))));
    vlSelf->_mc___05Fs1165 = ((8U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
                              | ((0xcU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
                                 | ((0xdU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
                                    | ((0xeU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
                                       | (0xfU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_45 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_38) 
           | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_44));
    vlSelf->_rs___05Fs3423 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_load_use;
    vlSelf->_rs___05Fs3465 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_flush_pipe;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_valid 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_killx)));
    vlSelf->_mc___05Fs3334 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_xcpt;
    vlSelf->_mc___05Fs3343 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_xcpt) 
                              & (0x14ULL == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_cause));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__tval_any_addr 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_xcpt)) 
                 | ((3ULL == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_cause) 
                    | ((1ULL == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_cause) 
                       | ((0xcULL == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_cause) 
                          | (0x14ULL == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_cause))))));
    vlSelf->_rs___05Fs3395 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_ctrl_mem;
    vlSelf->_mc___05Fs3345 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_valid;
    vlSelf->_mc___05Fs1479 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_sfence) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_valid));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_wxd 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_ctrl_wxd) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_valid));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_60 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_ctrl_rocc) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_valid));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_ctrl_csr) 
           & (3U | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_valid) 
                    << 2U)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_118 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_ctrl_mem) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_valid));
    vlSelf->_mc___05Fs2829 = vlSelf->_mc___05Fs2828;
    vlSelf->_cp___05Fs9825 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___io_singleStep_output)));
    vlSelf->_mc___05Fs2812 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_31 
                                            >> 0x27U)));
    vlSelf->_mc___05Fs2809 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_29 
                                            >> 0x27U)));
    vlSelf->_mc___05Fs2806 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_27 
                                            >> 0x27U)));
    vlSelf->_mc___05Fs3358 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_pc 
                                            >> 0x27U)));
    vlSelf->_rs___05Fs3469 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_pc;
    vlSelf->_cp___05Fs9838 = (1U & (~ (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                       >> 0x1dU)));
    vlSelf->_rs___05Fs3474 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst;
    vlSelf->_cp___05Fs9840 = (IData)((0x48000000U == 
                                      (0x48000000U 
                                       & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h6ea9b8de__0 
        = (IData)((0xb0000000U == (0xfe000000U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hc7c8d47f__0 
        = (IData)((0xc0000000U == (0xc0000000U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_he0768f93__0 
        = ((0x200U & ((~ (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                          >> 0x16U)) << 9U)) | ((0x100U 
                                                 & ((~ 
                                                     (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                      >> 0x17U)) 
                                                    << 8U)) 
                                                | ((0x80U 
                                                    & ((~ 
                                                        (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                         >> 0x18U)) 
                                                       << 7U)) 
                                                   | ((0x40U 
                                                       & ((~ 
                                                           (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                            >> 0x19U)) 
                                                          << 6U)) 
                                                      | ((0x20U 
                                                          & ((~ 
                                                              (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                               >> 0x1aU)) 
                                                             << 5U)) 
                                                         | ((0x10U 
                                                             & ((~ 
                                                                 (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                                  >> 0x1bU)) 
                                                                << 4U)) 
                                                            | ((8U 
                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                                   >> 0x19U)) 
                                                               | ((4U 
                                                                   & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                                      >> 0x1bU)) 
                                                                  | ((2U 
                                                                      & ((~ 
                                                                          (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                                           >> 0x1eU)) 
                                                                         << 1U)) 
                                                                     | (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                                        >> 0x1fU))))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hc2dd8787__0 
        = ((2U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                  >> 0x1dU)) | (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                >> 0x1fU));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hab14c173__0 
        = (IData)((0U == (0xc0000000U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h79939cd5__0 
        = ((0x10U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                     >> 0x17U)) | ((8U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                          >> 0x19U)) 
                                   | ((4U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                             >> 0x1bU)) 
                                      | ((2U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                >> 0x1dU)) 
                                         | (1U & (~ 
                                                  (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                   >> 0x1fU)))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha9b0d59a__0 
        = ((2U & ((~ (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                      >> 0x1eU)) << 1U)) | (1U & (~ 
                                                  (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                   >> 0x1fU))));
    TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__unnamedblk1__DOT___GEN_171 
        = (1U & ((IData)(vlSelf->_cp___05Fs10079) | 
                 (~ (IData)(vlSelf->_mc___05Fs3316))));
    vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_rocc 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_killd) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_rocc));
    vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_mul 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_killd) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_mul));
    vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_vec 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_killd) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_vec));
    if ((1U & (~ (IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__unnamedblk1__DOT___GEN_171)))) {
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_legal 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_legal;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_fp 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_fp;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_rocc 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_rocc;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_branch 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_branch;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_jal 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_jal;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_jalr 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_jalr;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_rxs2 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_rxs2;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_rxs1 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_rxs1;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_sel_alu2 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_sel_alu2;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_sel_alu1 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_sel_alu1;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_sel_imm 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_sel_imm;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_alu_dw 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_alu_dw;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_alu_fn 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_alu_fn;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_mem 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_mem;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_mem_cmd 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_mem_cmd;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_rfs1 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_rfs1;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_rfs2 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_rfs2;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_rfs3 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_rfs3;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_wfd 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_wfd;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_mul 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_mul;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_div 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_div;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_wxd 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_wxd;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_csr 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_csr;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_fence_i 
            = ((IData)(vlSelf->_cp___05Fs10082) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_fence_i));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_fence 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_fence;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_amo 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_amo;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_dp 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_dp;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_vec 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_vec;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_rvc 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rvc;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_btb_resp_cfiType 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_btb_resp_cfiType;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_btb_resp_taken 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_btb_resp_taken;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_btb_resp_mask 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_btb_resp_mask;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_btb_resp_bridx 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_btb_resp_bridx;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_btb_resp_target 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_btb_resp_target;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_btb_resp_entry 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_btb_resp_entry;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_btb_resp_bht_history 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_btb_resp_bht_history;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_btb_resp_bht_value 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_btb_resp_bht_value;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_flush_pipe 
            = ((IData)(vlSelf->_cp___05Fs10082) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_flush_pipe));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_cause 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_cause;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_mem_cmd_bh 
            = (1U & ((7U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_mem_cmd)) 
                     | (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_mem_size) 
                           >> 1U))));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_load 
            = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_mem) 
               & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_111));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_store 
            = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_mem) 
               & ((((1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_mem_cmd)) 
                    | (0x11U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                   | (7U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                  | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_110)));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_set_vconfig 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_set_vconfig;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_pc 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_pc;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_inst 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_inst;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_mem_size 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_mem_size;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_hls_or_dv 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___io_dmem_req_bits_dv_output;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_raw_inst 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_raw_inst;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_wdata 
            = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_alu_dw)
                ? vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT__out
                : (((QData)((IData)((- (IData)((IData)(vlSelf->_mc___05Fs3109))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT__out))));
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_br_taken 
            = vlSelf->_mc___05Fs3102;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_wphit_0 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_wphit_0;
    }
    vlSelf->__Vdly__TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_set_vconfig 
        = ((~ (IData)(vlSelf->_cp___05Fs10078)) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_set_vconfig));
    vlSelf->_mc___05Fs1521 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__r_btb_update_pipe_b_isValid;
    vlSelf->_rs___05Fs2491 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__r_btb_update_pipe_b_cfiType;
    vlSelf->_cp___05Fs9622 = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__r_resp_pipe_b_taken) 
                               & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__r_resp_pipe_v)) 
                              | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__r_btb_update_pipe_v));
    if (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__r_btb_update_pipe_v) {
        vlSelf->_mc___05Fs1507 = 1U;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__waddr;
    } else {
        vlSelf->_mc___05Fs1507 = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__r_resp_pipe_b_entry;
    }
    vlSelf->_rs___05Fs2486 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__r_btb_update_pipe_b_pc;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__updatePageHit 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pageValid) 
           & (((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pages_5 
                == (0x1ffffffU & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__r_btb_update_pipe_b_pc 
                                          >> 0xeU)))) 
               << 5U) | (((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pages_4 
                           == (0x1ffffffU & (IData)(
                                                    (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__r_btb_update_pipe_b_pc 
                                                     >> 0xeU)))) 
                          << 4U) | (((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pages_3 
                                      == (0x1ffffffU 
                                          & (IData)(
                                                    (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__r_btb_update_pipe_b_pc 
                                                     >> 0xeU)))) 
                                     << 3U) | (((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pages_2 
                                                 == 
                                                 (0x1ffffffU 
                                                  & (IData)(
                                                            (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__r_btb_update_pipe_b_pc 
                                                             >> 0xeU)))) 
                                                << 2U) 
                                               | (((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pages_1 
                                                    == 
                                                    (0x1ffffffU 
                                                     & (IData)(
                                                               (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__r_btb_update_pipe_b_pc 
                                                                >> 0xeU)))) 
                                                   << 1U) 
                                                  | (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pages_0 
                                                     == 
                                                     (0x1ffffffU 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__r_btb_update_pipe_b_pc 
                                                                 >> 0xeU))))))))));
    vlSelf->_rs___05Fs2490 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__r_btb_update_pipe_b_br_pc;
    vlSelf->_cp___05Fs9335 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s1_valid;
    vlSelf->_rs___05Fs2104 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_0_mask;
    vlSelf->_rs___05Fs2094 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_0_btb_cfiType;
    vlSelf->_rs___05Fs2096 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_0_btb_mask;
    vlSelf->_rs___05Fs2098 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_0_btb_target;
    vlSelf->_rs___05Fs2099 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_0_btb_entry;
    vlSelf->_rs___05Fs2100 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_0_btb_bht_history;
    vlSelf->_rs___05Fs2101 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_0_btb_bht_value;
    vlSelf->_rs___05Fs2108 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_0_replay;
    vlSelf->_rs___05Fs2105 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_0_xcpt_pf_inst;
    vlSelf->_rs___05Fs2106 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_0_xcpt_gf_inst;
    vlSelf->_rs___05Fs2107 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_0_xcpt_ae_inst;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__valid_1 
        = ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____Vcellinp__fq__reset))) 
           && ((IData)(vlSelf->_mc___05Fs1365) ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT___GEN_3)
                : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT___GEN_1)));
    vlSelf->_rs___05Fs2095 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_0_btb_taken;
    vlSelf->_rs___05Fs2097 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_0_btb_bridx;
    vlSelf->_rs___05Fs2103 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_0_data;
    vlSelf->_rs___05Fs2102 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_0_pc;
    if (vlSelf->_cp___05Fs9342) {
        if (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__valid_2) {
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_btb_cfiType 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_2_btb_cfiType;
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_btb_taken 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_2_btb_taken;
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_btb_mask 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_2_btb_mask;
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_btb_bridx 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_2_btb_bridx;
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_btb_target 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_2_btb_target;
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_btb_entry 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_2_btb_entry;
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_btb_bht_history 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_2_btb_bht_history;
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_btb_bht_value 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_2_btb_bht_value;
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_pc 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_2_pc;
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_data 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_2_data;
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_mask 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_2_mask;
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_xcpt_pf_inst 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_2_xcpt_pf_inst;
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_xcpt_gf_inst 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_2_xcpt_gf_inst;
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_xcpt_ae_inst 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_2_xcpt_ae_inst;
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_replay 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_2_replay;
        } else {
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_btb_cfiType 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_btb_resp_bits_cfiType;
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_btb_taken 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____Vcellinp__fq__io_enq_bits_btb_taken;
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_btb_mask 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_btb_resp_bits_mask;
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_btb_bridx 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____Vcellinp__fq__io_enq_bits_btb_bridx;
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_btb_target 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_btb_resp_bits_target;
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_btb_entry 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____Vcellinp__fq__io_enq_bits_btb_entry;
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_btb_bht_history 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_btb_resp_bits_bht_history;
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_btb_bht_value 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_predict_taken;
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_pc 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_pc;
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_data 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data;
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_mask 
                = (3U & ((IData)(3U) << (1U & (IData)(
                                                      (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_pc 
                                                       >> 1U)))));
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_xcpt_pf_inst 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_tlb_resp_pf_inst;
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_xcpt_gf_inst 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_tlb_resp_gf_inst;
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_xcpt_ae_inst 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____Vcellinp__fq__io_enq_bits_xcpt_ae_inst;
            vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_1_replay 
                = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____Vcellinp__fq__io_enq_bits_replay;
        }
    }
    vlSelf->_cp___05Fs11434 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_33)));
    vlSelf->_rs___05Fs4190 = vlSelf->_mc___05Fs3706;
    vlSelf->_rs___05Fs4234 = vlSelf->_mc___05Fs3722;
    vlSelf->_cp___05Fs1574 = ((IData)(vlSelf->_cp___05Fs13855) 
                              & (IData)(vlSelf->_cp___05Fs13856));
    vlSelf->_rs___05Fs4161 = vlSelf->_mc___05Fs3698;
    vlSelf->_cp___05Fs6338 = vlSelf->_cp___05Fs13742;
    vlSelf->_cp___05Fs13831 = vlSelf->_cp___05Fs13772;
    vlSelf->_cp___05Fs13829 = ((~ (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__nodeOut_w_deq_q__DOT__empty)) 
                               & ((~ (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__nodeOut_aw_deq_q__DOT__empty)) 
                                  & (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__srams__DOT___GEN_1)));
    vlSelf->_cp___05Fs13773 = ((~ (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__nodeOut_aw_deq_q__DOT__empty)) 
                               & ((~ (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__nodeOut_w_deq_q__DOT__empty)) 
                                  & (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__srams__DOT___GEN_1)));
    vlSelf->_cp___05Fs13824 = ((~ (IData)(vlSelf->_mc___05Fs188)) 
                               & (IData)(vlSelf->_cp___05Fs13823));
    vlSelf->_rs___05Fs4232 = vlSelf->_mc___05Fs3720;
    if (vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__busy) {
        vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__addr 
            = vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__r_addr;
        vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__len 
            = vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__r_len;
    } else {
        vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__addr 
            = vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr;
        vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__len 
            = vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_len;
    }
    vlSelf->_cp___05Fs13858 = (2U == (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst));
    vlSelf->_cp___05Fs13859 = (0U == (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst));
    vlSelf->_cp___05Fs13812 = ((IData)(vlSelf->_cp___05Fs13811) 
                               & (IData)(vlSelf->_cp___05Fs13844));
    vlSelf->_rs___05Fs4233 = vlSelf->_mc___05Fs3721;
    if (vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__busy_1) {
        vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__addr_1 
            = vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__r_addr_1;
        vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__len_1 
            = vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__r_len_1;
    } else {
        vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__addr_1 
            = vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr;
        vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__len_1 
            = vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len;
    }
    vlSelf->_cp___05Fs13861 = (2U == (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst));
    vlSelf->_cp___05Fs13862 = (0U == (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst));
    vlSelf->_cp___05Fs13806 = ((IData)(vlSelf->_cp___05Fs13805) 
                               & (IData)(vlSelf->_cp___05Fs13850));
    vlSelf->_rs___05Fs4189 = vlSelf->_mc___05Fs3708;
    vlSelf->_cp___05Fs13837 = vlSelf->_cp___05Fs13784;
    vlSelf->_cp___05Fs13785 = (1U & ((~ ((~ (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__nodeOut_ar_deq_q__DOT__maybe_full)) 
                                         & (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__nodeOut_ar_deq_q__DOT__ptr_match))) 
                                     & ((~ (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__srams__DOT__r_full)) 
                                        | (~ (IData)(vlSelf->_mc___05Fs3719)))));
    vlSelf->_rs___05Fs4159 = vlSelf->_mc___05Fs3696;
    vlSelf->_cp___05Fs13744 = (2U == (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst));
    vlSelf->_cp___05Fs13745 = (0U == (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst));
    vlSelf->_rs___05Fs4160 = vlSelf->_mc___05Fs3697;
    vlSelf->_cp___05Fs13747 = (2U == (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst));
    vlSelf->_cp___05Fs13748 = (0U == (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst));
    vlSelf->_cp___05Fs13834 = ((~ (IData)(vlSelf->_mc___05Fs3718)) 
                               & (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_q__DOT___io_deq_valid_output));
    vlSelf->_mc___05Fs2494 = vlSelf->_mc___05Fs2492;
    vlSelf->_cp___05Fs13825 = ((~ (IData)(vlSelf->_mc___05Fs3715)) 
                               & ((IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_q_1__DOT___io_deq_valid_output) 
                                  & (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___GEN_9)));
    vlSelf->_mc___05Fs3727 = ((~ (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__wbeats_latched)) 
                              & (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_q_1__DOT___io_deq_valid_output));
    vlSelf->_rs___05Fs264 = vlSelf->_mc___05Fs228;
    vlSelf->_cp___05Fs13839 = ((IData)(vlSelf->_cp___05Fs13784) 
                               != (IData)(vlSelf->_cp___05Fs13838));
    vlSelf->_cp___05Fs1582 = vlSelf->_cp___05Fs13818;
    vlSelf->_cp___05Fs1439 = vlSelf->_cp___05Fs10602;
    vlSelf->_cp___05Fs1553 = vlSelf->_cp___05Fs10602;
    vlSelf->_cp___05Fs644 = vlSelf->_cp___05Fs10602;
    vlSelf->_cp___05Fs7363 = vlSelf->_cp___05Fs10602;
    vlSelf->_cp___05Fs7477 = vlSelf->_cp___05Fs10602;
    vlSelf->_cp___05Fs758 = vlSelf->_cp___05Fs10602;
    vlSelf->_cp___05Fs7490 = ((IData)(vlSelf->_cp___05Fs10602) 
                              & (0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT___fixer_auto_anon_out_1_e_bits_sink)));
    vlSelf->_cp___05Fs7507 = ((IData)(vlSelf->_cp___05Fs10602) 
                              & (1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT___fixer_auto_anon_out_1_e_bits_sink)));
    vlSelf->_cp___05Fs7524 = ((IData)(vlSelf->_cp___05Fs10602) 
                              & (2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT___fixer_auto_anon_out_1_e_bits_sink)));
    vlSelf->_cp___05Fs7541 = ((IData)(vlSelf->_cp___05Fs10602) 
                              & (3U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT___fixer_auto_anon_out_1_e_bits_sink)));
    vlSelf->_mc___05Fs2469 = vlSelf->_mc___05Fs2467;
    vlSelf->_cp___05Fs2266 = ((IData)(vlSelf->_cp___05Fs2104) 
                              & (IData)(vlSelf->_cp___05Fs2255));
    vlSelf->_cp___05Fs2194 = ((IData)(vlSelf->_cp___05Fs2255) 
                              & (IData)(vlSelf->_cp___05Fs2104));
    vlSelf->_cp___05Fs2492 = ((~ (IData)(vlSelf->_cp___05Fs2384)) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_63));
    vlSelf->_cp___05Fs2769 = ((~ (IData)(vlSelf->_cp___05Fs2384)) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_63));
    vlSelf->_cp___05Fs2503 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_73)));
    vlSelf->_cp___05Fs2780 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_73)));
    vlSelf->_cp___05Fs2484 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_53)));
    vlSelf->_cp___05Fs2761 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_53)));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4yank_auto_in_b_bits_resp 
        = (3U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__q_b_deq_q__DOT__full)
                  ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__q_b_deq_q__DOT__ram) 
                     >> 1U) : ((IData)(vlSelf->_mc___05Fs294) 
                               << 1U)));
    vlSelf->_cp___05Fs2422 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_35)));
    vlSelf->_cp___05Fs2520 = ((IData)(vlSelf->_cp___05Fs2381) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h788cf908__0));
    vlSelf->_cp___05Fs2797 = ((IData)(vlSelf->_cp___05Fs2381) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT____VdfgTmp_h788cf908__0));
    vlSelf->_cp___05Fs2835 = ((~ (IData)(vlSelf->_mc___05Fs316)) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__b_allow));
    vlSelf->_cp___05Fs2824 = ((IData)(vlSelf->_cp___05Fs2828) 
                              & (IData)(vlSelf->_cp___05Fs2827));
    vlSelf->_cp___05Fs2869 = (1U & (~ ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__nodeIn_r_deq_q__DOT__full) 
                                           | (IData)(vlSelf->_cp___05Fs2827))) 
                                       | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4frag_auto_in_r_bits_id)
                                           ? (~ ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__maybe_full)) 
                                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__ptr_match)))
                                           : (~ ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__maybe_full)) 
                                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__ptr_match)))))));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__q_b_deq_q__DOT___io_deq_valid_output 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__q_b_deq_q__DOT__full) 
           | (IData)(vlSelf->_cp___05Fs2833));
    if (vlSelf->_cp___05Fs2211) {
        vlSelf->_cp___05Fs2220 = vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_72;
        vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__a_set_wo_ready 
            = (0xffffU & ((IData)(1U) << (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                  >> 0xaU))));
    } else {
        vlSelf->_cp___05Fs2220 = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__a_set_wo_ready = 0U;
    }
    vlSelf->_cp___05Fs2015 = vlSelf->_cp___05Fs1998;
    vlSelf->_cp___05Fs2023 = vlSelf->_cp___05Fs2006;
    vlSelf->_cp___05Fs2040 = vlSelf->_cp___05Fs2006;
    vlSelf->_cp___05Fs2053 = vlSelf->_cp___05Fs2006;
    vlSelf->_cp___05Fs2064 = vlSelf->_cp___05Fs2006;
    vlSelf->_cp___05Fs2075 = vlSelf->_cp___05Fs2006;
    vlSelf->_cp___05Fs2086 = vlSelf->_cp___05Fs2006;
    vlSelf->_cp___05Fs2097 = vlSelf->_cp___05Fs2006;
    vlSelf->_cp___05Fs2071 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_25)));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_29 
        = ((0xdU > (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                            >> 6U))) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_13));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_18 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_13) 
           | ((7U > (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                             >> 6U))) & ((0U == (0xfffffU 
                                                 & ((vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[1U] 
                                                     << 6U) 
                                                    | (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                       >> 0x1aU)))) 
                                         | ((0U == 
                                             ((0xfffeU 
                                               & ((vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[1U] 
                                                   << 2U) 
                                                  | (2U 
                                                     & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                        >> 0x1eU)))) 
                                              | (1U 
                                                 & (~ 
                                                    (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                     >> 0x1eU))))) 
                                            | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_15) 
                                               | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_16) 
                                                  | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_17) 
                                                     | (8U 
                                                        == 
                                                        (0xfU 
                                                         & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[1U] 
                                                            >> 0xaU))))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_21 
        = ((0xdU > (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                            >> 6U))) & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_13) 
                                        | (((7U > (0xfU 
                                                   & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                      >> 6U))) 
                                            & ((0U 
                                                == 
                                                (0xfffffU 
                                                 & ((vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[1U] 
                                                     << 6U) 
                                                    | (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                       >> 0x1aU)))) 
                                               | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_15) 
                                                  | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_16) 
                                                     | (8U 
                                                        == 
                                                        (0xfU 
                                                         & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[1U] 
                                                            >> 0xaU))))))) 
                                           | ((9U > 
                                               (0xfU 
                                                & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                   >> 6U))) 
                                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_17)))));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc_5) 
             << 7U) | (0x1ffff80U & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__mask_eq_5) 
                                      << 7U) & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                >> 7U)))) 
           | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc_5) 
                | ((~ (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                       >> 0xeU)) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__mask_eq_5))) 
               << 6U) | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc_4) 
                           << 5U) | (0x7fffe0U & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__mask_eq_4) 
                                                   << 5U) 
                                                  & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                     >> 9U)))) 
                         | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc_4) 
                              | ((~ (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                     >> 0xeU)) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__mask_eq_4))) 
                             << 4U) | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc_3) 
                                         << 3U) | (0x1ffff8U 
                                                   & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__mask_eq_3) 
                                                       << 3U) 
                                                      & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                         >> 0xbU)))) 
                                       | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc_3) 
                                            | ((~ (
                                                   vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                   >> 0xeU)) 
                                               & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__mask_eq_3))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc_2) 
                                             << 1U) 
                                            | (0x7fffeU 
                                               & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__mask_eq_2) 
                                                   << 1U) 
                                                  & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                     >> 0xdU)))) 
                                           | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc_2) 
                                              | ((~ 
                                                  (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                   >> 0xeU)) 
                                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT__mask_eq_2))))))))));
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
    vlSelf->_cp___05Fs2226 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_77)));
    vlSelf->_cp___05Fs2207 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_57)));
    vlSelf->_cp___05Fs2145 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_38)));
    vlSelf->_cp___05Fs2243 = ((IData)(vlSelf->_cp___05Fs2104) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT____VdfgTmp_h788cf908__0));
    vlSelf->_cp___05Fs2229 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_67) 
                              & ((IData)(vlSelf->_mc___05Fs244) 
                                 & ((IData)(vlSelf->_cp___05Fs1991) 
                                    & ((~ (IData)(vlSelf->_cp___05Fs2107)) 
                                       & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_72)))));
    vlSelf->_cp___05Fs2215 = ((~ (IData)(vlSelf->_cp___05Fs2107)) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_67));
    vlSelf->_cp___05Fs265 = vlSelf->_cp___05Fs1060;
    vlSelf->_mc___05Fs105 = ((IData)(vlSelf->_cp___05Fs1060) 
                             & (IData)(vlSelf->_mc___05Fs106));
    vlSelf->_rs___05Fs3299 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mcountinhibit;
    vlSelf->_cp___05Fs9812 = (1U & (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mcountinhibit) 
                                       >> 2U)));
    vlSelf->_cp___05Fs9814 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mcountinhibit)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_flush_valid 
        = ((~ (IData)(vlSelf->_cp___05Fs9279)) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_flush_valid_pre_tag_ecc));
    vlSelf->_mc___05Fs2593 = (1U & ((~ (IData)(vlSelf->_cp___05Fs9380)) 
                                    | (IData)(vlSelf->_cp___05Fs8638)));
    vlSelf->_cp___05Fs4526 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_73)));
    vlSelf->_cp___05Fs4420 = vlSelf->_cp___05Fs4409;
    vlSelf->_cp___05Fs4435 = vlSelf->_cp___05Fs4409;
    vlSelf->_cp___05Fs4450 = vlSelf->_cp___05Fs4409;
    vlSelf->_cp___05Fs4459 = vlSelf->_cp___05Fs4409;
    vlSelf->_cp___05Fs4468 = vlSelf->_cp___05Fs4409;
    vlSelf->_cp___05Fs4543 = ((IData)(vlSelf->_cp___05Fs4404) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h788cf908__0));
    vlSelf->_cp___05Fs4507 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_54)));
    vlSelf->_cp___05Fs4445 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_35)));
    vlSelf->_cp___05Fs4253 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_71)));
    vlSelf->_cp___05Fs4515 = ((~ (IData)(vlSelf->_cp___05Fs4407)) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_63));
    vlSelf->_cp___05Fs1584 = ((IData)(vlSelf->_cp___05Fs13818) 
                              != (IData)(vlSelf->_cp___05Fs1583));
    vlSelf->_cp___05Fs1586 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full) 
                              & ((IData)(vlSelf->_cp___05Fs1583) 
                                 & ((0U == (0xfU & 
                                            vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                    & (vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[2U] 
                                       >> 6U))));
    vlSelf->_cp___05Fs1589 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue8_BundleMap__DOT__empty)) 
                              & ((IData)(vlSelf->_cp___05Fs1583) 
                                 & ((1U == (0xfU & 
                                            vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                    & (vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[2U] 
                                       >> 6U))));
    vlSelf->_cp___05Fs1592 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_1__DOT__empty)) 
                              & ((IData)(vlSelf->_cp___05Fs1583) 
                                 & ((2U == (0xfU & 
                                            vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                    & (vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[2U] 
                                       >> 6U))));
    vlSelf->_cp___05Fs1595 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full) 
                              & ((IData)(vlSelf->_cp___05Fs1583) 
                                 & ((3U == (0xfU & 
                                            vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                    & (vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[2U] 
                                       >> 6U))));
    vlSelf->_cp___05Fs1598 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full) 
                              & ((IData)(vlSelf->_cp___05Fs1583) 
                                 & ((4U == (0xfU & 
                                            vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                    & (vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[2U] 
                                       >> 6U))));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT____VdfgTmp_haff43c4e__0 
        = ((IData)(vlSelf->_cp___05Fs1583) & (vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[2U] 
                                              >> 6U));
    vlSelf->_cp___05Fs2809 = vlSelf->_cp___05Fs2532;
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_77 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs2532)) 
                 | (~ (IData)(vlSelf->_mc___05Fs263))));
    vlSelf->_cp___05Fs2471 = ((IData)(vlSelf->_cp___05Fs2381) 
                              & (IData)(vlSelf->_cp___05Fs2532));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4yank_auto_out_ar_valid 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q__DOT__full) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN));
    vlSelf->_rs___05Fs2826 = vlSelf->_cp___05Fs9726;
    vlSelf->_cp___05Fs13833 = ((IData)(vlSelf->_cp___05Fs13772) 
                               != (IData)(vlSelf->_cp___05Fs13832));
    vlSelf->_cp___05Fs13870 = ((0U == (0xfU & (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))) 
                               & (IData)(vlSelf->_cp___05Fs13832));
    vlSelf->_cp___05Fs13871 = ((1U == (0xfU & (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))) 
                               & (IData)(vlSelf->_cp___05Fs13832));
    vlSelf->_cp___05Fs13872 = ((2U == (0xfU & (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))) 
                               & (IData)(vlSelf->_cp___05Fs13832));
    vlSelf->_cp___05Fs13873 = ((3U == (0xfU & (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))) 
                               & (IData)(vlSelf->_cp___05Fs13832));
    vlSelf->_cp___05Fs13874 = ((4U == (0xfU & (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))) 
                               & (IData)(vlSelf->_cp___05Fs13832));
    vlSelf->_cp___05Fs13875 = ((5U == (0xfU & (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))) 
                               & (IData)(vlSelf->_cp___05Fs13832));
    vlSelf->_cp___05Fs1803 = ((IData)(vlSelf->_mc___05Fs218)
                               ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_d_denied)
                               : (0U != (3U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data) 
                                               >> 4U))));
    vlSelf->_cp___05Fs13876 = ((6U == (0xfU & (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))) 
                               & (IData)(vlSelf->_cp___05Fs13832));
    vlSelf->_cp___05Fs13877 = ((7U == (0xfU & (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))) 
                               & (IData)(vlSelf->_cp___05Fs13832));
    vlSelf->_cp___05Fs13878 = ((8U == (0xfU & (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))) 
                               & (IData)(vlSelf->_cp___05Fs13832));
    vlSelf->_cp___05Fs13879 = ((9U == (0xfU & (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))) 
                               & (IData)(vlSelf->_cp___05Fs13832));
    vlSelf->_cp___05Fs13880 = ((0xaU == (0xfU & (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))) 
                               & (IData)(vlSelf->_cp___05Fs13832));
    vlSelf->_cp___05Fs13881 = ((0xbU == (0xfU & (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))) 
                               & (IData)(vlSelf->_cp___05Fs13832));
    vlSelf->_cp___05Fs13882 = ((0xcU == (0xfU & (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))) 
                               & (IData)(vlSelf->_cp___05Fs13832));
    vlSelf->_cp___05Fs13883 = ((0xdU == (0xfU & (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))) 
                               & (IData)(vlSelf->_cp___05Fs13832));
    vlSelf->_cp___05Fs13884 = ((0xeU == (0xfU & (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))) 
                               & (IData)(vlSelf->_cp___05Fs13832));
    vlSelf->_cp___05Fs13885 = ((0xfU == (0xfU & (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))) 
                               & (IData)(vlSelf->_cp___05Fs13832));
    vlSelf->_cp___05Fs1881 = ((IData)(vlSelf->_cp___05Fs1790) 
                              & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter)));
    vlSelf->_cp___05Fs1901 = ((IData)(vlSelf->_cp___05Fs1790) 
                              & (IData)(vlSelf->_mc___05Fs223));
    vlSelf->_cp___05Fs3440 = vlSelf->_cp___05Fs3166;
    vlSelf->_mc___05Fs394 = ((IData)(vlSelf->_cp___05Fs3166) 
                             & (IData)(vlSelf->_mc___05Fs395));
    vlSelf->_cp___05Fs3675 = ((~ (IData)(vlSelf->_cp___05Fs3567)) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_70));
    vlSelf->_cp___05Fs3686 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_80)));
    vlSelf->_cp___05Fs3580 = vlSelf->_cp___05Fs3569;
    vlSelf->_cp___05Fs3595 = vlSelf->_cp___05Fs3569;
    vlSelf->_cp___05Fs3610 = vlSelf->_cp___05Fs3569;
    vlSelf->_cp___05Fs3619 = vlSelf->_cp___05Fs3569;
    vlSelf->_cp___05Fs3628 = vlSelf->_cp___05Fs3569;
    vlSelf->_cp___05Fs3846 = vlSelf->_cp___05Fs3569;
    vlSelf->_cp___05Fs3857 = vlSelf->_cp___05Fs3569;
    vlSelf->_cp___05Fs3872 = vlSelf->_cp___05Fs3569;
    vlSelf->_cp___05Fs3887 = vlSelf->_cp___05Fs3569;
    vlSelf->_cp___05Fs3896 = vlSelf->_cp___05Fs3569;
    vlSelf->_cp___05Fs3905 = vlSelf->_cp___05Fs3569;
    vlSelf->_cp___05Fs3703 = ((IData)(vlSelf->_cp___05Fs3564) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h788cf908__0));
    vlSelf->_cp___05Fs3667 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_61)));
    vlSelf->_cp___05Fs3605 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_42)));
    if (vlSelf->_cp___05Fs4012) {
        vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_bus_xing_in_d_bits_data 
            = vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__cam_d_0_data;
        vlSelf->_cp___05Fs3852 = ((IData)(vlSelf->_cp___05Fs3577) 
                                  | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__cam_d_0_corrupt));
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__nodeIn_d_bits_opcode = 1U;
    } else {
        vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_bus_xing_in_d_bits_data 
            = (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                << 0x30U) | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                              << 0x10U) | ((QData)((IData)(
                                                           vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                           >> 0x10U)));
        vlSelf->_cp___05Fs3852 = vlSelf->_cp___05Fs3575;
        vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__nodeIn_d_bits_opcode 
            = (7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]);
    }
    vlSelf->_mc___05Fs350 = ((IData)(vlSelf->_cp___05Fs4012) 
                             | (IData)(vlSelf->_mc___05Fs418));
    vlSelf->_cp___05Fs3854 = (((IData)(vlSelf->_cp___05Fs4012) 
                               & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__cam_d_0_denied)) 
                              | (IData)(vlSelf->_cp___05Fs3577));
    vlSelf->_cp___05Fs3841 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT__d_drop)) 
                              & (IData)(vlSelf->_cp___05Fs3564));
    vlSelf->_rs___05Fs4116 = vlSelf->_mc___05Fs3684;
    vlSelf->_cp___05Fs13671 = (1U & ((~ ((~ (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeOut_ar_deq_q__DOT__maybe_full)) 
                                         & (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeOut_ar_deq_q__DOT__ptr_match))) 
                                     & ((~ (IData)(vlSelf->TestHarness__DOT__mem__DOT__srams__DOT__r_full)) 
                                        | (~ (IData)(vlSelf->_mc___05Fs3695)))));
    vlSelf->_rs___05Fs4117 = vlSelf->_mc___05Fs3682;
    vlSelf->_cp___05Fs13717 = vlSelf->_cp___05Fs13658;
    vlSelf->_cp___05Fs13715 = ((~ (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeOut_w_deq_q__DOT__empty)) 
                               & ((~ (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeOut_aw_deq_q__DOT__empty)) 
                                  & (IData)(vlSelf->TestHarness__DOT__mem__DOT__srams__DOT___GEN_1)));
    vlSelf->_cp___05Fs13659 = ((~ (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeOut_aw_deq_q__DOT__empty)) 
                               & ((~ (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeOut_w_deq_q__DOT__empty)) 
                                  & (IData)(vlSelf->TestHarness__DOT__mem__DOT__srams__DOT___GEN_1)));
    vlSelf->_cp___05Fs6061 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs13709)) 
                                       | (((0x8000U 
                                            & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_31__DOT__empty)) 
                                               << 0xfU)) 
                                           | ((0x4000U 
                                               & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_30__DOT__empty)) 
                                                  << 0xeU)) 
                                              | ((0x2000U 
                                                  & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_29__DOT__empty)) 
                                                     << 0xdU)) 
                                                 | ((0x1000U 
                                                     & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_28__DOT__empty)) 
                                                        << 0xcU)) 
                                                    | ((0x800U 
                                                        & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_27__DOT__empty)) 
                                                           << 0xbU)) 
                                                       | ((0x400U 
                                                           & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_26__DOT__empty)) 
                                                              << 0xaU)) 
                                                          | ((0x200U 
                                                              & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_25__DOT__empty)) 
                                                                 << 9U)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_24__DOT__empty)) 
                                                                    << 8U)) 
                                                                | ((0x80U 
                                                                    & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_23__DOT__empty)) 
                                                                       << 7U)) 
                                                                   | ((0x40U 
                                                                       & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_22__DOT__empty)) 
                                                                          << 6U)) 
                                                                      | ((0x20U 
                                                                          & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_21__DOT__empty)) 
                                                                             << 5U)) 
                                                                         | ((0x10U 
                                                                             & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_20__DOT__empty)) 
                                                                                << 4U)) 
                                                                            | ((8U 
                                                                                & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_19__DOT__empty)) 
                                                                                << 3U)) 
                                                                               | ((4U 
                                                                                & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_18__DOT__empty)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_17__DOT__empty)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_16__DOT__empty)))))))))))))))))) 
                                          >> (0xfU 
                                              & (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))));
    vlSelf->_cp___05Fs4231 = vlSelf->_cp___05Fs4203;
    vlSelf->_cp___05Fs4284 = vlSelf->_cp___05Fs4203;
    vlSelf->_cp___05Fs4215 = ((IData)(vlSelf->_mc___05Fs508) 
                              & (IData)(vlSelf->_cp___05Fs4203));
    vlSelf->_cp___05Fs4234 = ((IData)(vlSelf->_cp___05Fs4203) 
                              & (IData)(vlSelf->_mc___05Fs512));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_set_wo_ready 
        = ((IData)(vlSelf->_cp___05Fs4233) ? (0x7ffffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (0x1fU 
                                                  & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xaU))))
            : 0U);
    vlSelf->_cp___05Fs2231 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__monitor__DOT___GEN_81)));
    vlSelf->_cp___05Fs2209 = vlSelf->_cp___05Fs2181;
    vlSelf->_cp___05Fs2262 = vlSelf->_cp___05Fs2181;
    vlSelf->_cp___05Fs2193 = ((IData)(vlSelf->_mc___05Fs240) 
                              & (IData)(vlSelf->_cp___05Fs2181));
    vlSelf->_cp___05Fs2212 = ((IData)(vlSelf->_cp___05Fs2181) 
                              & (IData)(vlSelf->_mc___05Fs244));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor__DOT__a_set_wo_ready 
        = ((IData)(vlSelf->_cp___05Fs1016) ? (0xffffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (0xfU 
                                                  & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xaU))))
            : 0U);
    vlSelf->_cp___05Fs8 = vlSelf->_cp___05Fs25;
    vlSelf->_cp___05Fs803 = vlSelf->_cp___05Fs25;
    vlSelf->_cp___05Fs820 = vlSelf->_cp___05Fs25;
    vlSelf->_cp___05Fs832 = vlSelf->_cp___05Fs37;
    vlSelf->_cp___05Fs16 = vlSelf->_cp___05Fs107;
    vlSelf->_cp___05Fs33 = vlSelf->_cp___05Fs107;
    vlSelf->_cp___05Fs50 = vlSelf->_cp___05Fs107;
    vlSelf->_cp___05Fs63 = vlSelf->_cp___05Fs107;
    vlSelf->_cp___05Fs74 = vlSelf->_cp___05Fs107;
    vlSelf->_cp___05Fs811 = vlSelf->_cp___05Fs107;
    vlSelf->_cp___05Fs828 = vlSelf->_cp___05Fs107;
    vlSelf->_cp___05Fs845 = vlSelf->_cp___05Fs107;
    vlSelf->_cp___05Fs85 = vlSelf->_cp___05Fs107;
    vlSelf->_cp___05Fs858 = vlSelf->_cp___05Fs107;
    vlSelf->_cp___05Fs869 = vlSelf->_cp___05Fs107;
    vlSelf->_cp___05Fs880 = vlSelf->_cp___05Fs107;
    vlSelf->_cp___05Fs891 = vlSelf->_cp___05Fs107;
    vlSelf->_cp___05Fs902 = vlSelf->_cp___05Fs107;
    vlSelf->_cp___05Fs96 = vlSelf->_cp___05Fs107;
    vlSelf->_cp___05Fs81 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_25)));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_29 
        = ((0xdU > (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U))) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_13));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_5) 
             << 7U) | (0x1ffff80U & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_5) 
                                      << 7U) & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 7U)))) 
           | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_5) 
                | ((~ (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                       >> 0xeU)) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_5))) 
               << 6U) | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_4) 
                           << 5U) | (0x7fffe0U & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_4) 
                                                   << 5U) 
                                                  & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 9U)))) 
                         | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_4) 
                              | ((~ (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 0xeU)) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_4))) 
                             << 4U) | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_3) 
                                         << 3U) | (0x1ffff8U 
                                                   & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_3) 
                                                       << 3U) 
                                                      & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0xbU)))) 
                                       | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_3) 
                                            | ((~ (
                                                   vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xeU)) 
                                               & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_3))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_2) 
                                             << 1U) 
                                            | (0x7fffeU 
                                               & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_2) 
                                                   << 1U) 
                                                  & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xdU)))) 
                                           | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_2) 
                                              | ((~ 
                                                  (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xeU)) 
                                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_2))))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_18 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_13) 
           | ((7U > (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 6U))) & ((0U == (0xfffffU 
                                                 & ((vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                     << 6U) 
                                                    | (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x1aU)))) 
                                         | ((0U == 
                                             ((0xfffeU 
                                               & ((vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 2U) 
                                                  | (2U 
                                                     & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x1eU)))) 
                                              | (1U 
                                                 & (~ 
                                                    (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x1eU))))) 
                                            | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_15) 
                                               | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_16) 
                                                  | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_17) 
                                                     | (8U 
                                                        == 
                                                        (0xfU 
                                                         & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                            >> 0xaU))))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_21 
        = ((0xdU > (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U))) & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_13) 
                                        | (((7U > (0xfU 
                                                   & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U))) 
                                            & ((0U 
                                                == 
                                                (0xfffffU 
                                                 & ((vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                     << 6U) 
                                                    | (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x1aU)))) 
                                               | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_15) 
                                                  | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_16) 
                                                     | (8U 
                                                        == 
                                                        (0xfU 
                                                         & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                            >> 0xaU))))))) 
                                           | ((9U > 
                                               (0xfU 
                                                & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U))) 
                                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_17)))));
    vlSelf->_mc___05Fs54 = (0U == (((IData)(vlSelf->_mc___05Fs171) 
                                    << 1U) | (IData)(vlSelf->_mc___05Fs172)));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__a_id 
        = (((IData)(vlSelf->_mc___05Fs173) << 1U) | (IData)(vlSelf->_mc___05Fs172));
    vlSelf->_cp___05Fs13723 = vlSelf->_cp___05Fs13670;
    vlSelf->_mc___05Fs682 = (((IData)(vlSelf->_cp___05Fs13703) 
                              & (7U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__b_delay))) 
                             | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_holds_d));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & ((~ (IData)(vlSelf->_mc___05Fs1787)) 
                 & (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_isInf) 
                       | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_isZero)))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_7) 
           | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlSelf->_mc___05Fs1780 = vlSelf->_mc___05Fs1779;
    __Vtemp_319[0U] = 0U;
    __Vtemp_319[1U] = 0U;
    __Vtemp_319[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_320, __Vtemp_319, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_323[0U] = 0U;
    __Vtemp_323[1U] = 0U;
    __Vtemp_323[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_324, __Vtemp_323, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_327[0U] = 0U;
    __Vtemp_327[1U] = 0U;
    __Vtemp_327[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_328, __Vtemp_327, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_331[0U] = 0U;
    __Vtemp_331[1U] = 0U;
    __Vtemp_331[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_332, __Vtemp_331, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_335[0U] = 0U;
    __Vtemp_335[1U] = 0U;
    __Vtemp_335[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_336, __Vtemp_335, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_339[0U] = 0U;
    __Vtemp_339[1U] = 0U;
    __Vtemp_339[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_340, __Vtemp_339, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_343[0U] = 0U;
    __Vtemp_343[1U] = 0U;
    __Vtemp_343[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_344, __Vtemp_343, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_347[0U] = 0U;
    __Vtemp_347[1U] = 0U;
    __Vtemp_347[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_348, __Vtemp_347, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_351[0U] = 0U;
    __Vtemp_351[1U] = 0U;
    __Vtemp_351[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_352, __Vtemp_351, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_355[0U] = 0U;
    __Vtemp_355[1U] = 0U;
    __Vtemp_355[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_356, __Vtemp_355, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_359[0U] = 0U;
    __Vtemp_359[1U] = 0U;
    __Vtemp_359[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_360, __Vtemp_359, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_363[0U] = 0U;
    __Vtemp_363[1U] = 0U;
    __Vtemp_363[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_364, __Vtemp_363, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_367[0U] = 0U;
    __Vtemp_367[1U] = 0U;
    __Vtemp_367[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_368, __Vtemp_367, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_371[0U] = 0U;
    __Vtemp_371[1U] = 0U;
    __Vtemp_371[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_372, __Vtemp_371, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_375[0U] = 0U;
    __Vtemp_375[1U] = 0U;
    __Vtemp_375[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_376, __Vtemp_375, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_379[0U] = 0U;
    __Vtemp_379[1U] = 0U;
    __Vtemp_379[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_380, __Vtemp_379, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_383[0U] = 0U;
    __Vtemp_383[1U] = 0U;
    __Vtemp_383[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_384, __Vtemp_383, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_387[0U] = 0U;
    __Vtemp_387[1U] = 0U;
    __Vtemp_387[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_388, __Vtemp_387, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_391[0U] = 0U;
    __Vtemp_391[1U] = 0U;
    __Vtemp_391[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_392, __Vtemp_391, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_395[0U] = 0U;
    __Vtemp_395[1U] = 0U;
    __Vtemp_395[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_396, __Vtemp_395, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_399[0U] = 0U;
    __Vtemp_399[1U] = 0U;
    __Vtemp_399[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_400, __Vtemp_399, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_403[0U] = 0U;
    __Vtemp_403[1U] = 0U;
    __Vtemp_403[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_404, __Vtemp_403, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_407[0U] = 0U;
    __Vtemp_407[1U] = 0U;
    __Vtemp_407[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_408, __Vtemp_407, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_411[0U] = 0U;
    __Vtemp_411[1U] = 0U;
    __Vtemp_411[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_412, __Vtemp_411, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_415[0U] = 0U;
    __Vtemp_415[1U] = 0U;
    __Vtemp_415[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_416, __Vtemp_415, 
                   (0x3fU & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_haf133fcb__0 
        = ((IData)(vlSelf->_mc___05Fs1781) ? (7U | 
                                              (((IData)(vlSelf->_mc___05Fs1779)
                                                 ? 0x3fffffU
                                                 : 
                                                ((0x200000U 
                                                  & (__Vtemp_320[1U] 
                                                     << 0xbU)) 
                                                 | ((0x100000U 
                                                     & (__Vtemp_324[1U] 
                                                        << 9U)) 
                                                    | ((0x80000U 
                                                        & (__Vtemp_328[1U] 
                                                           << 7U)) 
                                                       | ((0x40000U 
                                                           & (__Vtemp_332[1U] 
                                                              << 5U)) 
                                                          | ((0x20000U 
                                                              & (__Vtemp_336[1U] 
                                                                 << 3U)) 
                                                             | ((((0x10000U 
                                                                   & (__Vtemp_340[1U] 
                                                                      << 1U)) 
                                                                  | (0x4000U 
                                                                     & (__Vtemp_344[1U] 
                                                                        >> 3U))) 
                                                                 | (0xa000U 
                                                                    & ((0x18000U 
                                                                        & (__Vtemp_348[1U] 
                                                                           >> 1U)) 
                                                                       | (0x6000U 
                                                                          & (__Vtemp_352[1U] 
                                                                             >> 5U))))) 
                                                                | ((0x1000U 
                                                                    & (__Vtemp_356[1U] 
                                                                       >> 7U)) 
                                                                   | ((0x800U 
                                                                       & (__Vtemp_360[1U] 
                                                                          >> 9U)) 
                                                                      | ((0x400U 
                                                                          & (__Vtemp_364[1U] 
                                                                             >> 0xbU)) 
                                                                         | ((0x200U 
                                                                             & (__Vtemp_368[1U] 
                                                                                >> 0xdU)) 
                                                                            | ((0x100U 
                                                                                & (__Vtemp_372[1U] 
                                                                                >> 0xfU)) 
                                                                               | ((0x80U 
                                                                                & (__Vtemp_376[1U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (__Vtemp_380[1U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (__Vtemp_384[1U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (__Vtemp_388[1U] 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (__Vtemp_392[1U] 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (__Vtemp_396[1U] 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (__Vtemp_400[1U] 
                                                                                >> 0x1dU)) 
                                                                                | (__Vtemp_404[1U] 
                                                                                >> 0x1fU)))))))))))))))))))) 
                                               << 3U))
            : ((IData)(vlSelf->_mc___05Fs1779) ? ((4U 
                                                   & (__Vtemp_408[0U] 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & __Vtemp_412[0U]) 
                                                     | (1U 
                                                        & (__Vtemp_416[0U] 
                                                           >> 2U))))
                : 0U));
    vlSelf->_mc___05Fs2103 = (1U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN 
                                            >> 2U)));
    vlSelf->_rs___05Fs2845 = vlSelf->_cp___05Fs9753;
    vlSelf->_rs___05Fs2844 = vlSelf->_mc___05Fs2410;
    vlSelf->_rs___05Fs2846 = vlSelf->_mc___05Fs2409;
    vlSelf->_cp___05Fs9744 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__write_port_busy)) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_24));
    vlSelf->_cp___05Fs9742 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_reg_valid) 
                              & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_fma) 
                                 | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_24)));
    vlSelf->_mc___05Fs2431 = vlSelf->_mc___05Fs2426;
    vlSelf->_mc___05Fs2432 = vlSelf->_mc___05Fs2427;
    vlSelf->_mc___05Fs2433 = vlSelf->_mc___05Fs2428;
    vlSelf->_mc___05Fs2419 = vlSelf->_mc___05Fs2411;
    vlSelf->_mc___05Fs2421 = vlSelf->_mc___05Fs2411;
    vlSelf->_mc___05Fs2423 = vlSelf->_mc___05Fs2411;
    vlSelf->_cp___05Fs9745 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__write_port_busy)) 
                              & (IData)(vlSelf->_mc___05Fs2411));
    vlSelf->_mc___05Fs2420 = vlSelf->_mc___05Fs2412;
    vlSelf->_mc___05Fs2422 = vlSelf->_mc___05Fs2412;
    vlSelf->_mc___05Fs2424 = vlSelf->_mc___05Fs2412;
    vlSelf->_cp___05Fs9746 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__write_port_busy)) 
                              & (IData)(vlSelf->_mc___05Fs2412));
    vlSelf->_rs___05Fs2832 = vlSelf->_cp___05Fs9725;
    vlSelf->_mc___05Fs2237 = vlSelf->_mc___05Fs2182;
    vlSelf->_rs___05Fs2849 = vlSelf->_mc___05Fs2182;
    vlSelf->_mc___05Fs2204 = vlSelf->_mc___05Fs2196;
    vlSelf->_mc___05Fs2216 = vlSelf->_mc___05Fs2196;
    vlSelf->_mc___05Fs2259 = vlSelf->_mc___05Fs2251;
    vlSelf->_mc___05Fs2271 = vlSelf->_mc___05Fs2251;
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
    vlSelf->_cp___05Fs1384 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_77)));
    vlSelf->_cp___05Fs1371 = vlSelf->_cp___05Fs1358;
    vlSelf->_cp___05Fs1410 = vlSelf->_cp___05Fs1358;
    vlSelf->_cp___05Fs1421 = vlSelf->_cp___05Fs1358;
    vlSelf->_cp___05Fs1430 = vlSelf->_cp___05Fs1358;
    vlSelf->_cp___05Fs563 = vlSelf->_cp___05Fs1358;
    vlSelf->_cp___05Fs576 = vlSelf->_cp___05Fs1358;
    vlSelf->_cp___05Fs615 = vlSelf->_cp___05Fs1358;
    vlSelf->_cp___05Fs626 = vlSelf->_cp___05Fs1358;
    vlSelf->_cp___05Fs635 = vlSelf->_cp___05Fs1358;
    vlSelf->_cp___05Fs7306 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_53)));
    vlSelf->_cp___05Fs1382 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_76)));
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
                             & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT____VdfgTmp_h565f0b49__0));
    vlSelf->_cp___05Fs1526 = ((IData)(vlSelf->_cp___05Fs1351) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT____VdfgTmp_h565f0b49__0));
    vlSelf->_cp___05Fs7450 = ((IData)(vlSelf->_cp___05Fs1351) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____VdfgTmp_h4c79c061__0));
    vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT____VdfgTmp_h96b65360__0 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_6) 
           & ((0U == (7U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                            >> 3U))) | (4U == (7U & 
                                               (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                                >> 3U)))));
    vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_18 
        = ((IData)(vlSelf->_mc___05Fs847) | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_io_out_a_valid) 
                                             | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_1_io_out_a_valid) 
                                                | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_2_io_out_a_valid) 
                                                   | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_3_io_out_a_valid)))));
    vlSelf->_mc___05Fs859 = ((IData)(vlSelf->_mc___05Fs853)
                              ? (IData)(vlSelf->_mc___05Fs847)
                              : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1_0));
    vlSelf->_mc___05Fs848 = ((~ (IData)(vlSelf->_mc___05Fs847)) 
                             & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_io_out_a_valid));
    vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_14 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_io_out_a_valid) 
           | (IData)(vlSelf->_mc___05Fs847));
    vlSelf->_mc___05Fs840 = ((IData)(vlSelf->_mc___05Fs837)
                              ? (IData)(vlSelf->_mc___05Fs834)
                              : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_0));
    vlSelf->_cp___05Fs8233 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_97)));
    vlSelf->_cp___05Fs8235 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_98)));
    vlSelf->_cp___05Fs8237 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_99)));
    vlSelf->_cp___05Fs8239 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_100)));
    vlSelf->_cp___05Fs8241 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_101)));
    vlSelf->_cp___05Fs8290 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_139)));
    vlSelf->_cp___05Fs8314 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_159)));
    vlSelf->_cp___05Fs8327 = (1U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_167));
    vlSelf->_cp___05Fs8537 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_27)));
    vlSelf->_cp___05Fs8539 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_28)));
    vlSelf->_cp___05Fs8541 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_29)));
    vlSelf->_cp___05Fs8545 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_30)));
    vlSelf->_cp___05Fs8566 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_36)));
    vlSelf->_cp___05Fs8568 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_38)));
    vlSelf->_cp___05Fs8592 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_43)));
    vlSelf->_cp___05Fs10491 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_104)));
    vlSelf->_cp___05Fs10493 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_105)));
    vlSelf->_cp___05Fs10495 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_106)));
    vlSelf->_cp___05Fs10497 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_107)));
    vlSelf->_cp___05Fs10499 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_108)));
    vlSelf->_cp___05Fs10548 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_145)));
    vlSelf->_cp___05Fs10572 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_164)));
    vlSelf->_cp___05Fs10585 = (1U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_172));
    vlSelf->_cp___05Fs7957 = vlSelf->_cp___05Fs10215;
    vlSelf->_cp___05Fs8446 = vlSelf->_cp___05Fs10215;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_137 
        = (((7U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
            == ((0x17U >= (0x1fU & ((IData)(3U) * (7U 
                                                   & ((IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_119) 
                                                      >> 1U)))))
                 ? (7U & (0x911240U >> (0x1fU & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_119) 
                                                     >> 1U))))))
                 : 0U)) | ((7U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
                           == ((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_119) 
                                                       >> 1U)))))
                                ? (7U & (0x951240U 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & ((IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_119) 
                                                      >> 1U))))))
                                : 0U)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_143 
        = (((7U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
            == ((0x17U >= (0x1fU & ((IData)(3U) * (7U 
                                                   & ((IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_126) 
                                                      >> 1U)))))
                 ? (7U & (0x911240U >> (0x1fU & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_126) 
                                                     >> 1U))))))
                 : 0U)) | ((7U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
                           == ((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_126) 
                                                       >> 1U)))))
                                ? (7U & (0x951240U 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & ((IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_126) 
                                                      >> 1U))))))
                                : 0U)));
    vlSelf->_cp___05Fs10250 = vlSelf->_cp___05Fs10235;
    vlSelf->_cp___05Fs7977 = vlSelf->_cp___05Fs10235;
    vlSelf->_cp___05Fs7992 = vlSelf->_cp___05Fs10235;
    vlSelf->_cp___05Fs8466 = vlSelf->_cp___05Fs10235;
    vlSelf->_cp___05Fs8481 = vlSelf->_cp___05Fs10235;
    vlSelf->_cp___05Fs10252 = vlSelf->_cp___05Fs10237;
    vlSelf->_cp___05Fs7979 = vlSelf->_cp___05Fs10237;
    vlSelf->_cp___05Fs7994 = vlSelf->_cp___05Fs10237;
    vlSelf->_cp___05Fs8468 = vlSelf->_cp___05Fs10237;
    vlSelf->_cp___05Fs8483 = vlSelf->_cp___05Fs10237;
    vlSelf->_cp___05Fs10233 = vlSelf->_cp___05Fs10220;
    vlSelf->_cp___05Fs10248 = vlSelf->_cp___05Fs10220;
    vlSelf->_cp___05Fs7962 = vlSelf->_cp___05Fs10220;
    vlSelf->_cp___05Fs7975 = vlSelf->_cp___05Fs10220;
    vlSelf->_cp___05Fs7990 = vlSelf->_cp___05Fs10220;
    vlSelf->_cp___05Fs8451 = vlSelf->_cp___05Fs10220;
    vlSelf->_cp___05Fs8464 = vlSelf->_cp___05Fs10220;
    vlSelf->_cp___05Fs8479 = vlSelf->_cp___05Fs10220;
    vlSelf->_cp___05Fs10261 = vlSelf->_cp___05Fs10222;
    vlSelf->_cp___05Fs10270 = vlSelf->_cp___05Fs10222;
    vlSelf->_cp___05Fs10279 = vlSelf->_cp___05Fs10222;
    vlSelf->_cp___05Fs7964 = vlSelf->_cp___05Fs10222;
    vlSelf->_cp___05Fs8003 = vlSelf->_cp___05Fs10222;
    vlSelf->_cp___05Fs8012 = vlSelf->_cp___05Fs10222;
    vlSelf->_cp___05Fs8021 = vlSelf->_cp___05Fs10222;
    vlSelf->_cp___05Fs8453 = vlSelf->_cp___05Fs10222;
    vlSelf->_cp___05Fs8492 = vlSelf->_cp___05Fs10222;
    vlSelf->_cp___05Fs8501 = vlSelf->_cp___05Fs10222;
    vlSelf->_cp___05Fs8510 = vlSelf->_cp___05Fs10222;
    vlSelf->_cp___05Fs7999 = vlSelf->_cp___05Fs10257;
    vlSelf->_cp___05Fs8488 = vlSelf->_cp___05Fs10257;
    vlSelf->_cp___05Fs8017 = vlSelf->_cp___05Fs10275;
    vlSelf->_cp___05Fs8506 = vlSelf->_cp___05Fs10275;
    vlSelf->_cp___05Fs10239 = vlSelf->_cp___05Fs10224;
    vlSelf->_cp___05Fs10263 = vlSelf->_cp___05Fs10224;
    vlSelf->_cp___05Fs10281 = vlSelf->_cp___05Fs10224;
    vlSelf->_cp___05Fs7966 = vlSelf->_cp___05Fs10224;
    vlSelf->_cp___05Fs7981 = vlSelf->_cp___05Fs10224;
    vlSelf->_cp___05Fs8005 = vlSelf->_cp___05Fs10224;
    vlSelf->_cp___05Fs8023 = vlSelf->_cp___05Fs10224;
    vlSelf->_cp___05Fs8455 = vlSelf->_cp___05Fs10224;
    vlSelf->_cp___05Fs8470 = vlSelf->_cp___05Fs10224;
    vlSelf->_cp___05Fs8494 = vlSelf->_cp___05Fs10224;
    vlSelf->_cp___05Fs8512 = vlSelf->_cp___05Fs10224;
    vlSelf->_cp___05Fs7968 = vlSelf->_cp___05Fs10226;
    vlSelf->_cp___05Fs8457 = vlSelf->_cp___05Fs10226;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_102 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__denied) 
           == (IData)(vlSelf->_cp___05Fs10226));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_31 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__denied) 
           == (IData)(vlSelf->_cp___05Fs10226));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_109 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__denied) 
           == (IData)(vlSelf->_cp___05Fs10226));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_41 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs10226)) 
                 | (IData)(vlSelf->_cp___05Fs10224)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__source_ok_1 
        = ((0U == (3U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                         >> 9U))) | ((1U == (3U & (
                                                   vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U))) 
                                     | (IData)(vlSelf->_mc___05Fs947)));
    vlSelf->_cp___05Fs8444 = ((IData)(vlSelf->_cp___05Fs10213) 
                              & (IData)(vlSelf->_mc___05Fs947));
    if (vlSelf->_mc___05Fs1316) {
        vlSelf->_mc___05Fs1353 = 1U;
        vlSelf->_mc___05Fs3385 = 1U;
        vlSelf->_mc___05Fs3392 = 1U;
        vlSelf->_mc___05Fs3396 = 1U;
        vlSelf->_mc___05Fs3398 = 1U;
        vlSelf->_mc___05Fs914 = 1U;
        vlSelf->_mc___05Fs921 = 1U;
        vlSelf->_mc___05Fs925 = 1U;
        vlSelf->_mc___05Fs927 = 1U;
        vlSelf->_mc___05Fs931 = 1U;
        vlSelf->_mc___05Fs935 = 1U;
        vlSelf->_mc___05Fs938 = 1U;
        vlSelf->_mc___05Fs943 = 1U;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__beats1 
            = (0x1ffU & (~ (0xffffffU & (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 5U))) 
                                         >> 3U))));
    } else {
        vlSelf->_mc___05Fs1353 = 0U;
        vlSelf->_mc___05Fs3385 = 0U;
        vlSelf->_mc___05Fs3392 = 0U;
        vlSelf->_mc___05Fs3396 = 0U;
        vlSelf->_mc___05Fs3398 = 0U;
        vlSelf->_mc___05Fs914 = 0U;
        vlSelf->_mc___05Fs921 = 0U;
        vlSelf->_mc___05Fs925 = 0U;
        vlSelf->_mc___05Fs927 = 0U;
        vlSelf->_mc___05Fs931 = 0U;
        vlSelf->_mc___05Fs935 = 0U;
        vlSelf->_mc___05Fs938 = 0U;
        vlSelf->_mc___05Fs943 = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__beats1 = 0U;
    }
    vlSelf->_cp___05Fs7969 = vlSelf->_cp___05Fs10227;
    vlSelf->_cp___05Fs8458 = vlSelf->_cp___05Fs10227;
    vlSelf->_cp___05Fs8008 = vlSelf->_cp___05Fs10266;
    vlSelf->_cp___05Fs8497 = vlSelf->_cp___05Fs10266;
    vlSelf->_cp___05Fs8562 = (1U & (~ (IData)(vlSelf->_cp___05Fs10266)));
    vlSelf->_cp___05Fs9265 = vlSelf->_cp___05Fs10266;
    vlSelf->_cp___05Fs9272 = ((IData)(vlSelf->_cp___05Fs10266) 
                              & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__blockUncachedGrant) 
                                 | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_valid)));
    vlSelf->_cp___05Fs7984 = vlSelf->_cp___05Fs10242;
    vlSelf->_cp___05Fs8473 = vlSelf->_cp___05Fs10242;
    vlSelf->_cp___05Fs7955 = ((IData)(vlSelf->_mc___05Fs946) 
                              & (IData)(vlSelf->_cp___05Fs10213));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__a_set_wo_ready 
        = ((IData)(vlSelf->_cp___05Fs1498) ? (7U & 
                                              ((IData)(1U) 
                                               << (3U 
                                                   & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0xaU))))
            : 0U);
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__a_set_wo_ready 
        = ((IData)(vlSelf->_cp___05Fs703) ? (7U & ((IData)(1U) 
                                                   << 
                                                   (3U 
                                                    & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0xaU))))
            : 0U);
    vlSelf->_cp___05Fs308 = vlSelf->_cp___05Fs1103;
    vlSelf->_cp___05Fs1099 = vlSelf->_cp___05Fs1082;
    vlSelf->_cp___05Fs1116 = vlSelf->_cp___05Fs1082;
    vlSelf->_cp___05Fs1129 = vlSelf->_cp___05Fs1082;
    vlSelf->_cp___05Fs1140 = vlSelf->_cp___05Fs1082;
    vlSelf->_cp___05Fs1151 = vlSelf->_cp___05Fs1082;
    vlSelf->_cp___05Fs1162 = vlSelf->_cp___05Fs1082;
    vlSelf->_cp___05Fs1173 = vlSelf->_cp___05Fs1082;
    vlSelf->_cp___05Fs287 = vlSelf->_cp___05Fs1082;
    vlSelf->_cp___05Fs304 = vlSelf->_cp___05Fs1082;
    vlSelf->_cp___05Fs321 = vlSelf->_cp___05Fs1082;
    vlSelf->_cp___05Fs334 = vlSelf->_cp___05Fs1082;
    vlSelf->_cp___05Fs345 = vlSelf->_cp___05Fs1082;
    vlSelf->_cp___05Fs356 = vlSelf->_cp___05Fs1082;
    vlSelf->_cp___05Fs367 = vlSelf->_cp___05Fs1082;
    vlSelf->_cp___05Fs378 = vlSelf->_cp___05Fs1082;
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask 
        = ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_5) 
             << 7U) | (0x7ffff80U & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_5) 
                                      << 7U) & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 5U)))) 
           | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_5) 
                | ((~ (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                       >> 0xcU)) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_5))) 
               << 6U) | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_4) 
                           << 5U) | (0x1ffffe0U & (
                                                   ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_4) 
                                                    << 5U) 
                                                   & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 7U)))) 
                         | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_4) 
                              | ((~ (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 0xcU)) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_4))) 
                             << 4U) | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_3) 
                                         << 3U) | (0x7ffff8U 
                                                   & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_3) 
                                                       << 3U) 
                                                      & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 9U)))) 
                                       | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_3) 
                                            | ((~ (
                                                   vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xcU)) 
                                               & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_3))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_2) 
                                             << 1U) 
                                            | (0x1ffffeU 
                                               & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_2) 
                                                   << 1U) 
                                                  & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xbU)))) 
                                           | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_2) 
                                              | ((~ 
                                                  (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xcU)) 
                                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_2))))))))));
    vlSelf->_cp___05Fs1095 = vlSelf->_cp___05Fs1078;
    vlSelf->_cp___05Fs1114 = vlSelf->_cp___05Fs1078;
    vlSelf->_cp___05Fs1127 = vlSelf->_cp___05Fs1078;
    vlSelf->_cp___05Fs1138 = vlSelf->_cp___05Fs1078;
    vlSelf->_cp___05Fs1149 = vlSelf->_cp___05Fs1078;
    vlSelf->_cp___05Fs1160 = vlSelf->_cp___05Fs1078;
    vlSelf->_cp___05Fs1171 = vlSelf->_cp___05Fs1078;
    vlSelf->_cp___05Fs283 = vlSelf->_cp___05Fs1078;
    vlSelf->_cp___05Fs300 = vlSelf->_cp___05Fs1078;
    vlSelf->_cp___05Fs319 = vlSelf->_cp___05Fs1078;
    vlSelf->_cp___05Fs332 = vlSelf->_cp___05Fs1078;
    vlSelf->_cp___05Fs343 = vlSelf->_cp___05Fs1078;
    vlSelf->_cp___05Fs354 = vlSelf->_cp___05Fs1078;
    vlSelf->_cp___05Fs365 = vlSelf->_cp___05Fs1078;
    vlSelf->_cp___05Fs376 = vlSelf->_cp___05Fs1078;
    vlSelf->_cp___05Fs1110 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_9)));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_36 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_9) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_24));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_12 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_9) 
           & (IData)(((0x800U == (0xf00U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                      & (7U > (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 6U))))));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_32 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_9) 
           & ((4U > (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 6U))) & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_19) 
                                         | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_16) 
                                            | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_17)))));
    vlSelf->_mc___05Fs57 = (0U == (((IData)(vlSelf->_mc___05Fs179) 
                                    << 1U) | (IData)(vlSelf->_mc___05Fs180)));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_28 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_9) 
           & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_24) 
              | (((7U > (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                 >> 6U))) & ((0U == 
                                              (0xfffffU 
                                               & ((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 8U) 
                                                  | (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x18U)))) 
                                             | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_16) 
                                                | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_17) 
                                                   | (8U 
                                                      == 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                          >> 8U))))))) 
                 | ((9U > (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                   >> 6U))) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_18)))));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT____VdfgTmp_hae8d912e__0 
        = ((0U == ((0xfffeU & ((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                << 4U) | (0xeU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x1cU)))) 
                   | (1U & (~ (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 0x1cU))))) | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_16) 
                                                | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_17) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_18) 
                                                      | (8U 
                                                         == 
                                                         (0xfU 
                                                          & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                             >> 8U)))))));
    vlSelf->_rs___05Fs3496 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__coreMonitorBundle_rd1val_REG;
    if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_killd)))) {
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_bypass_1 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__do_bypass_1;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_rs_bypass_0 
            = ((~ (IData)(vlSelf->_cp___05Fs10077)) 
               & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__do_bypass));
    }
    vlSelf->_rs___05Fs3494 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__coreMonitorBundle_rd0val_REG;
    vlSelf->_cp___05Fs680 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_100)));
    vlSelf->_cp___05Fs1475 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_100)));
    vlSelf->_cp___05Fs7399 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_77)));
    vlSelf->_cp___05Fs471 = vlSelf->_cp___05Fs1266;
    vlSelf->_cp___05Fs7190 = vlSelf->_cp___05Fs1266;
    vlSelf->_cp___05Fs1296 = vlSelf->_cp___05Fs1281;
    vlSelf->_cp___05Fs1309 = vlSelf->_cp___05Fs1281;
    vlSelf->_cp___05Fs486 = vlSelf->_cp___05Fs1281;
    vlSelf->_cp___05Fs501 = vlSelf->_cp___05Fs1281;
    vlSelf->_cp___05Fs514 = vlSelf->_cp___05Fs1281;
    vlSelf->_cp___05Fs7205 = vlSelf->_cp___05Fs1281;
    vlSelf->_cp___05Fs7220 = vlSelf->_cp___05Fs1281;
    vlSelf->_cp___05Fs7233 = vlSelf->_cp___05Fs1281;
    vlSelf->_cp___05Fs13863 = ((IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_aw_ready) 
                               & (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_q_1__DOT___io_deq_valid_output));
    vlSelf->_cp___05Fs686 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_102)));
    vlSelf->_cp___05Fs1481 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_102)));
    vlSelf->_cp___05Fs7405 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_80)));
    vlSelf->_cp___05Fs7184 = vlSelf->_cp___05Fs7182;
    vlSelf->_cp___05Fs7199 = vlSelf->_cp___05Fs7182;
    vlSelf->_cp___05Fs7214 = vlSelf->_cp___05Fs7182;
    vlSelf->_cp___05Fs7227 = vlSelf->_cp___05Fs7182;
    vlSelf->_cp___05Fs7240 = vlSelf->_cp___05Fs7182;
    vlSelf->_cp___05Fs7253 = vlSelf->_cp___05Fs7182;
    vlSelf->_cp___05Fs7266 = vlSelf->_cp___05Fs7182;
    vlSelf->_cp___05Fs1258 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__address_ok)));
    vlSelf->_cp___05Fs4223 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_47)));
    vlSelf->_cp___05Fs4225 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_48)));
    vlSelf->_cp___05Fs4250 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_69)));
    vlSelf->_cp___05Fs4269 = (1U & (~ vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_78));
    vlSelf->_cp___05Fs4274 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_79)));
    vlSelf->_cp___05Fs4146 = vlSelf->_cp___05Fs4133;
    vlSelf->_cp___05Fs4161 = vlSelf->_cp___05Fs4133;
    vlSelf->_cp___05Fs4131 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__source_ok_1)));
    vlSelf->_cp___05Fs4126 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__full) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last));
    vlSelf->_cp___05Fs4128 = (7U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode));
    vlSelf->_cp___05Fs4140 = (4U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode));
    vlSelf->_cp___05Fs4155 = (5U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode));
    vlSelf->_cp___05Fs4170 = (0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode));
    vlSelf->_cp___05Fs4179 = (1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode));
    vlSelf->_cp___05Fs4188 = (2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_46 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__opcode_1));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_65 
        = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode) 
            == ((0x17U >= (0x1fU & ((IData)(3U) * (7U 
                                                   & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))
                 ? (7U & (0x911240U >> (0x1fU & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))))
                 : 0U)) | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode) 
                           == ((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))
                                ? (7U & (0x951240U 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))))
                                : 0U)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_67 
        = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode) 
            == ((0x17U >= (0x1fU & ((IData)(3U) * (7U 
                                                   & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_50[0U] 
                                                      >> 1U)))))
                 ? (7U & (0x911240U >> (0x1fU & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_50[0U] 
                                                     >> 1U))))))
                 : 0U)) | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode) 
                           == ((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_50[0U] 
                                                       >> 1U)))))
                                ? (7U & (0x951240U 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_50[0U] 
                                                      >> 1U))))))
                                : 0U)));
    vlSelf->_mc___05Fs509 = (1U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode));
    vlSelf->_cp___05Fs4129 = (6U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode));
    vlSelf->_mc___05Fs511 = vlSelf->_mc___05Fs507;
    vlSelf->_cp___05Fs4043 = vlSelf->_cp___05Fs4026;
    vlSelf->_cp___05Fs4047 = vlSelf->_cp___05Fs4030;
    vlSelf->_cp___05Fs4051 = vlSelf->_cp___05Fs4032;
    vlSelf->_cp___05Fs4206 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_38)));
    vlSelf->_cp___05Fs4208 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_39)));
    vlSelf->_cp___05Fs4210 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_40)));
    vlSelf->_cp___05Fs4212 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_41)));
    vlSelf->_cp___05Fs4214 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_42)));
    vlSelf->_cp___05Fs4236 = (1U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_56);
    vlSelf->_cp___05Fs4246 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_66)));
    vlSelf->_cp___05Fs4053 = vlSelf->_cp___05Fs4034;
    vlSelf->_cp___05Fs4068 = vlSelf->_cp___05Fs4034;
    vlSelf->_cp___05Fs4125 = vlSelf->_cp___05Fs4034;
    vlSelf->_cp___05Fs4049 = (1U & (~ (IData)(vlSelf->_cp___05Fs4064)));
    vlSelf->_cp___05Fs4077 = vlSelf->_cp___05Fs4064;
    vlSelf->_cp___05Fs4088 = vlSelf->_cp___05Fs4064;
    vlSelf->_cp___05Fs4242 = ((IData)(vlSelf->_cp___05Fs4233) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_61));
    vlSelf->_cp___05Fs4028 = (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_7));
    vlSelf->_cp___05Fs4058 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_11)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_12 
        = (IData)(((0x4180U == (0x7fc0U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                   & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_11)));
    vlSelf->_cp___05Fs4024 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__source_ok)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_16 
        = ((0xdU > (0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U))) & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__source_ok));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc) 
           | (IData)(((0x40U == (0xc0U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_2))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc) 
           | (IData)(((0x40U == (0xc0U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_3))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_1) 
           | (IData)(((0x40U == (0xc0U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_4))));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_1) 
           | (IData)(((0x40U == (0xc0U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_5))));
    vlSelf->_cp___05Fs8532 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_24)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT____VdfgTmp_hde9ebe14__0 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs8433)) 
                 | (0U == (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refill_paddr 
                           >> 0xcU))));
    vlSelf->_cp___05Fs8355 = vlSelf->_cp___05Fs8338;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT____VdfgTmp_h7fb77ec7__0 
        = (1U & ((0U == ((0xfc00U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refill_paddr 
                                     >> 0x10U)) | (0x3ffU 
                                                   & (0x200U 
                                                      ^ 
                                                      (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refill_paddr 
                                                       >> 0x10U))))) 
                 | ((0U == ((0x3cU & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refill_paddr 
                                      >> 0x1aU)) | 
                            (3U & (~ (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refill_paddr 
                                      >> 0x1aU))))) 
                    | ((~ (IData)(vlSelf->_cp___05Fs8338)) 
                       | (0U == ((4U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refill_paddr 
                                        >> 0x1dU)) 
                                 | (3U & (~ (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refill_paddr 
                                             >> 0x1dU)))))))));
    vlSelf->_mc___05Fs1209 = vlSelf->_mc___05Fs1198;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__amoalus_0__DOT__wmask 
        = (((QData)((IData)((0xffU & (- (IData)((IData)(vlSelf->_mc___05Fs1212)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           (- (IData)((IData)(vlSelf->_mc___05Fs1211)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & (- (IData)((IData)(vlSelf->_mc___05Fs1210)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & (- (IData)((IData)(vlSelf->_mc___05Fs1198)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((- (IData)((IData)(vlSelf->_mc___05Fs1208))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & ((- (IData)((IData)(vlSelf->_mc___05Fs1207))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & ((- (IData)((IData)(vlSelf->_mc___05Fs1206))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & (- (IData)((IData)(vlSelf->_mc___05Fs1205)))))))))))));
    vlSelf->_mc___05Fs1199 = (1U & ((IData)(vlSelf->_mc___05Fs1198)
                                     ? ((IData)(vlSelf->_mc___05Fs1195)
                                         ? (((IData)(
                                                     (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_data 
                                                      >> 0x20U)) 
                                             < (IData)(
                                                       (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data 
                                                        >> 0x20U))) 
                                            | (((IData)(
                                                        (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_data 
                                                         >> 0x20U)) 
                                                == (IData)(
                                                           (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data 
                                                            >> 0x20U))) 
                                               & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__amoalus_0__DOT___GEN_1)))
                                         : ((2U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_cmd))
                                             ? (IData)(
                                                       (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data 
                                                        >> 0x3fU))
                                             : (IData)(
                                                       (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_data 
                                                        >> 0x3fU))))
                                     : ((IData)(vlSelf->_mc___05Fs1197)
                                         ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__amoalus_0__DOT___GEN_1)
                                         : ((2U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_cmd))
                                             ? (IData)(
                                                       (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data 
                                                        >> 0x1fU))
                                             : (IData)(
                                                       (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_data 
                                                        >> 0x1fU))))));
    vlSelf->_cp___05Fs1965 = vlSelf->_mc___05Fs236;
    vlSelf->_rs___05Fs270 = vlSelf->_mc___05Fs236;
    vlSelf->_cp___05Fs1801 = ((IData)(vlSelf->_mc___05Fs218) 
                              & ((0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4index_auto_in_r_bits_resp)) 
                                 | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_d_denied)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT___GEN_5 
        = ((0x7ffffffff0ULL & ((~ (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_address 
                                   >> 4U)) << 4U)) 
           | (QData)((IData)((0xfU & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_address)) 
                                      | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT___GEN_3))))));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4yank_auto_out_aw_valid 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__nodeOut_aw_valid) 
           & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN_3));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___GEN_15 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__address) 
           == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_anon_out_1_a_bits_address));
    vlSelf->_mc___05Fs3537 = (0U == ((0x7ffffffeU & 
                                      (((IData)(vlSelf->__VdfgTmp_h883e40ce__0) 
                                        << 1U) & ((IData)(vlSelf->TestHarness__DOT__SimDTM__DOT__debug_req_bits_addr_reg) 
                                                  >> 1U))) 
                                     | (IData)(__VdfgTmp_hdb458410__0)));
    vlSelf->__VdfgTmp_h33d4be52__0 = ((0xeU & (8U ^ 
                                               (((IData)(vlSelf->__VdfgTmp_h883e40ce__0)
                                                  ? 
                                                 ((IData)(vlSelf->TestHarness__DOT__SimDTM__DOT__debug_req_bits_addr_reg) 
                                                  >> 2U)
                                                  : 4U) 
                                                << 1U))) 
                                      | (IData)(__VdfgTmp_hdb458410__0));
    vlSelf->_mc___05Fs3498 = ((0U == ((IData)(vlSelf->__VdfgTmp_h883e40ce__0)
                                       ? (7U & ((IData)(vlSelf->TestHarness__DOT__SimDTM__DOT__debug_req_bits_addr_reg) 
                                                >> 4U))
                                       : 1U)) | ((0U 
                                                  == 
                                                  (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____VdfgTmp_h53dafab2__0) 
                                                    << 4U) 
                                                   | ((0xeU 
                                                       & ((IData)(TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT___GEN) 
                                                          >> 1U)) 
                                                      | (1U 
                                                         & (IData)(TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT___GEN))))) 
                                                 | ((0U 
                                                     == 
                                                     (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____VdfgTmp_h53dafab2__0) 
                                                       << 4U) 
                                                      | (0xbU 
                                                         ^ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____VdfgTmp_h53ca0f32__0)))) 
                                                    | ((0U 
                                                        == 
                                                        (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____VdfgTmp_h53dafab2__0) 
                                                          << 2U) 
                                                         | (3U 
                                                            & (~ 
                                                               ((IData)(vlSelf->__VdfgTmp_h883e40ce__0)
                                                                 ? 
                                                                ((IData)(vlSelf->TestHarness__DOT__SimDTM__DOT__debug_req_bits_addr_reg) 
                                                                 >> 3U)
                                                                 : 2U))))) 
                                                       | ((0U 
                                                           == 
                                                           (((IData)(TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT____VdfgTmp_h2dd21bce__0) 
                                                             << 1U) 
                                                            | (1U 
                                                               & (~ 
                                                                  ((IData)(vlSelf->__VdfgTmp_h883e40ce__0) 
                                                                   & ((IData)(vlSelf->TestHarness__DOT__SimDTM__DOT__debug_req_bits_addr_reg) 
                                                                      >> 5U)))))) 
                                                          | (IData)(TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT____VdfgTmp_h2dd21bce__0))))));
    vlSelf->_rs___05Fs2887 = vlSelf->_cp___05Fs9759;
    vlSelf->_cp___05Fs9747 = (((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_0_cp)) 
                               & (IData)(vlSelf->_mc___05Fs2442)) 
                              | (IData)(vlSelf->_mc___05Fs2425));
    if (vlSelf->_mc___05Fs2425) {
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__waddr 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_waddr;
        vlSelf->_mc___05Fs2430 = vlSelf->_cp___05Fs9758;
    } else {
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__waddr 
            = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_0_rd;
        vlSelf->_mc___05Fs2430 = vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_0_typeTag;
    }
    vlSelf->_cp___05Fs9750 = (((IData)(vlSelf->_mc___05Fs2425)
                                ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_cp)
                                : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_0_cp)) 
                              & ((IData)(vlSelf->_mc___05Fs2442) 
                                 | (IData)(vlSelf->_mc___05Fs2425)));
    vlSelf->_mc___05Fs3340 = ((IData)(vlSelf->_mc___05Fs2441) 
                              | ((IData)(vlSelf->_mc___05Fs2425) 
                                 | (IData)(vlSelf->_mc___05Fs2442)));
    vlSelf->_mc___05Fs3349 = ((IData)(vlSelf->_mc___05Fs2425) 
                              | ((IData)(vlSelf->_mc___05Fs2442) 
                                 & (IData)(vlSelf->_mc___05Fs2428)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___io_nack_mem_output 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__write_port_busy) 
           | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_37) 
               & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wen))) 
              | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_inFlight)));
    vlSelf->_cp___05Fs9754 = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_reg_valid) 
                              & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_inFlight)) 
                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_37)));
    vlSelf->_cp___05Fs6350 = vlSelf->_mc___05Fs751;
    vlSelf->_rs___05Fs1082 = vlSelf->_mc___05Fs751;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h8582494a__0 
        = ((TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h595d38b9__0 
            << 1U) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_3 
        = (1U | ((TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h595d38b9__0 
                  << 2U) | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2) 
                            << 1U)));
    vlSelf->_mc___05Fs464 = (1U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT___GEN_74));
    vlSelf->_mc___05Fs465 = (1U & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT___GEN_74) 
                                    >> 1U) | (IData)(vlSelf->_mc___05Fs463)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT___GEN_75 
        = (0xfU & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT___GEN_74) 
                    >> 2U) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT___GEN_74)));
    vlSelf->_mc___05Fs456 = (1U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT___GEN_68));
    vlSelf->_mc___05Fs457 = (1U & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT___GEN_68) 
                                    >> 1U) | (IData)(vlSelf->_mc___05Fs455)));
    vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT___GEN_69 
        = (0xfU & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT___GEN_68) 
                    >> 2U) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__atomics__DOT___GEN_68)));
    vlSelf->_cp___05Fs12460 = vlSelf->_cp___05Fs12445;
    vlSelf->_cp___05Fs12462 = vlSelf->_cp___05Fs12447;
    vlSelf->_cp___05Fs12516 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_26)));
    vlSelf->_cp___05Fs12518 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_27)));
    vlSelf->_cp___05Fs12520 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_28)));
    vlSelf->_cp___05Fs12524 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_30)));
    vlSelf->_mc___05Fs3596 = vlSelf->_mc___05Fs3592;
    vlSelf->_mc___05Fs3599 = vlSelf->_mc___05Fs3592;
    vlSelf->_cp___05Fs12443 = vlSelf->_cp___05Fs12430;
    vlSelf->_cp___05Fs12458 = vlSelf->_cp___05Fs12430;
    vlSelf->_cp___05Fs12471 = vlSelf->_cp___05Fs12432;
    vlSelf->_cp___05Fs12480 = vlSelf->_cp___05Fs12432;
    vlSelf->_cp___05Fs12489 = vlSelf->_cp___05Fs12432;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT____VdfgTmp_h600785fd__0 
        = ((IData)(vlSelf->_mc___05Fs3600) & (IData)(vlSelf->_cp___05Fs12426));
    vlSelf->_cp___05Fs12449 = vlSelf->_cp___05Fs12434;
    vlSelf->_cp___05Fs12473 = vlSelf->_cp___05Fs12434;
    vlSelf->_cp___05Fs12491 = vlSelf->_cp___05Fs12434;
    vlSelf->_cp___05Fs12451 = vlSelf->_cp___05Fs12436;
    vlSelf->_cp___05Fs12466 = vlSelf->_cp___05Fs12436;
    vlSelf->_cp___05Fs12475 = vlSelf->_cp___05Fs12436;
    vlSelf->_cp___05Fs12484 = vlSelf->_cp___05Fs12436;
    vlSelf->_cp___05Fs12493 = vlSelf->_cp___05Fs12436;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_31 
        = ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__denied) 
           == (IData)(vlSelf->_cp___05Fs12436));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_16 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs12436)) 
                 | (IData)(vlSelf->_cp___05Fs12434)));
    vlSelf->_cp___05Fs12439 = vlSelf->_cp___05Fs12428;
    vlSelf->_cp___05Fs12454 = vlSelf->_cp___05Fs12428;
    vlSelf->_cp___05Fs12469 = vlSelf->_cp___05Fs12428;
    vlSelf->_cp___05Fs12478 = vlSelf->_cp___05Fs12428;
    vlSelf->_cp___05Fs12487 = vlSelf->_cp___05Fs12428;
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_29 
        = ((IData)(vlSelf->_cp___05Fs12428) == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__source_1));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_55 
        = (3U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_1) 
                 >> (IData)(vlSelf->_cp___05Fs12428)));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_46 
        = ((3U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                          >> 0x24U))) == (0xfU & VL_SHIFTR_III(4,4,32, 
                                                               (0xfU 
                                                                & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_sizes) 
                                                                   >> 
                                                                   ((IData)(vlSelf->_cp___05Fs12428) 
                                                                    << 2U))), 1U)));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_56 
        = ((3U & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                          >> 0x24U))) == (0xfU & VL_SHIFTR_III(4,4,32, 
                                                               (0xfU 
                                                                & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_sizes_1) 
                                                                   >> 
                                                                   ((IData)(vlSelf->_cp___05Fs12428) 
                                                                    << 2U))), 1U)));
    vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_34 
        = (0xfU & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_opcodes) 
                   >> ((IData)(vlSelf->_cp___05Fs12428) 
                       << 2U)));
    vlSelf->_cp___05Fs1887 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_47)));
    vlSelf->_cp___05Fs1810 = vlSelf->_cp___05Fs1797;
    vlSelf->_cp___05Fs1825 = vlSelf->_cp___05Fs1797;
    vlSelf->_cp___05Fs1889 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_48)));
    vlSelf->_cp___05Fs1933 = (1U & (~ vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_79));
    vlSelf->_cp___05Fs1914 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_70)));
    vlSelf->_cp___05Fs1938 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_80)));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_68 
        = (((IData)(vlSelf->_mc___05Fs218) == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_51[0U] 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x911240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_51[0U] 
                                                              >> 1U))))))
                                                : 0U)) 
           | ((IData)(vlSelf->_mc___05Fs218) == ((0x17U 
                                                  >= 
                                                  (0x1fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (7U 
                                                       & (TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_51[0U] 
                                                          >> 1U)))))
                                                  ? 
                                                 (7U 
                                                  & (0x951240U 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         * 
                                                         (7U 
                                                          & (TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_51[0U] 
                                                             >> 1U))))))
                                                  : 0U)));
    vlSelf->_cp___05Fs1795 = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__source_ok_1)));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__portsDIO_filtered_2_0_valid 
        = ((IData)(vlSelf->_mc___05Fs74) & (IData)(vlSelf->_cp___05Fs1790));
    vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__portsDIO_filtered_2_1_valid 
        = ((IData)(vlSelf->_cp___05Fs1790) & (IData)(vlSelf->_mc___05Fs75));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_22 
        = (0xffU & ((IData)(TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_21) 
                    | VL_SHIFTL_III(8,8,32, (IData)(TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_21), 2U)));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_15 
        = (0xffU & ((7U & (- (IData)((IData)(vlSelf->_mc___05Fs310)))) 
                    | (- (IData)((IData)(vlSelf->_mc___05Fs311)))));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_20 
        = (0xffU & ((IData)(TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_19) 
                    | VL_SHIFTL_III(8,8,32, (IData)(TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_19), 2U)));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_17 
        = (0x1fU & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_16) 
                    | ((0x10U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len_1) 
                                 >> 3U)) | (0xfU & 
                                            ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_16) 
                                             >> 2U)))));
    vlSelf->_rs___05Fs2905 = vlSelf->_mc___05Fs2455;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_2 
        = (0x7ffffffU & ((IData)(vlSelf->_mc___05Fs2448)
                          ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_ppn)
                          : vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_req_addr));
    vlSelf->_mc___05Fs2449 = ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__stage2)) 
                              & (IData)(vlSelf->_cp___05Fs9789));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_35 
        = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn) 
            << 0xcU) & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__pmpHomogeneous_pgMask);
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_pte_v 
        = (1U & ((~ ((IData)(vlSelf->_cp___05Fs9764) 
                     & ((IData)(vlSelf->_cp___05Fs9766) 
                        | (IData)(vlSelf->_cp___05Fs9765)))) 
                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data)));
    vlSelf->_cp___05Fs9803 = (1U & (~ (IData)(vlSelf->_cp___05Fs9785)));
    vlSelf->_cp___05Fs8640 = ((IData)(vlSelf->_cp___05Fs9775) 
                              & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__l2_refill)));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_67 
        = ((IData)(vlSelf->_cp___05Fs9779) | (IData)(vlSelf->_cp___05Fs9784));
    vlSelf->_cp___05Fs9793 = vlSelf->_mc___05Fs2608;
    vlSelf->_rs___05Fs2937 = vlSelf->_mc___05Fs2608;
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_7 
        = (0xffU & ((IData)(TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_6) 
                    | VL_SHIFTL_III(8,8,32, (IData)(TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_6), 2U)));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_5 
        = (0xffU & ((IData)(TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_4) 
                    | VL_SHIFTL_III(8,8,32, (IData)(TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_4), 2U)));
    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_2 
        = (0x1fU & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_1) 
                    | ((0x10U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len) 
                                 >> 3U)) | (0xfU & 
                                            ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_1) 
                                             >> 2U)))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____VdfgTmp_h1c068462__0 
        = ((~ (IData)((0U != (0x7fffffU & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0))))) 
           & (IData)(vlSelf->_mc___05Fs2376));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____VdfgTmp_h093aa888__0 
        = ((~ (IData)((0U != (0xfffffffffffffULL & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0)))) 
           & (IData)(vlSelf->_mc___05Fs2351));
    vlSelf->_mc___05Fs2354 = vlSelf->_mc___05Fs2300;
    vlSelf->_mc___05Fs2355 = vlSelf->_mc___05Fs2301;
    vlSelf->_mc___05Fs2356 = vlSelf->_mc___05Fs2302;
    vlSelf->_mc___05Fs2357 = vlSelf->_mc___05Fs2303;
    vlSelf->_mc___05Fs2358 = vlSelf->_mc___05Fs2304;
    vlSelf->_mc___05Fs2359 = vlSelf->_mc___05Fs2305;
    vlSelf->_mc___05Fs2360 = vlSelf->_mc___05Fs2306;
    vlSelf->_mc___05Fs2361 = vlSelf->_mc___05Fs2307;
    vlSelf->_mc___05Fs2362 = vlSelf->_mc___05Fs2308;
    vlSelf->_mc___05Fs2363 = vlSelf->_mc___05Fs2309;
    vlSelf->_mc___05Fs2364 = vlSelf->_mc___05Fs2310;
    vlSelf->_mc___05Fs2365 = vlSelf->_mc___05Fs2311;
    vlSelf->_mc___05Fs2366 = vlSelf->_mc___05Fs2312;
    vlSelf->_mc___05Fs2367 = vlSelf->_mc___05Fs2313;
    vlSelf->_mc___05Fs2368 = vlSelf->_mc___05Fs2314;
    vlSelf->_mc___05Fs2369 = vlSelf->_mc___05Fs2315;
    vlSelf->_mc___05Fs2370 = vlSelf->_mc___05Fs2316;
    vlSelf->_mc___05Fs2371 = vlSelf->_mc___05Fs2317;
    vlSelf->_mc___05Fs2372 = vlSelf->_mc___05Fs2318;
    vlSelf->_mc___05Fs2373 = vlSelf->_mc___05Fs2319;
    vlSelf->_mc___05Fs2374 = vlSelf->_mc___05Fs2320;
    if (vlSelf->_mc___05Fs2321) {
        vlSelf->_mc___05Fs2375 = 1U;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wdata_rawIn_normDist_1 = 0U;
    } else {
        vlSelf->_mc___05Fs2375 = 0U;
        vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wdata_rawIn_normDist_1 
            = ((IData)(vlSelf->_mc___05Fs2320) ? 1U
                : ((IData)(vlSelf->_mc___05Fs2319) ? 2U
                    : ((IData)(vlSelf->_mc___05Fs2318)
                        ? 3U : ((IData)(vlSelf->_mc___05Fs2317)
                                 ? 4U : ((IData)(vlSelf->_mc___05Fs2316)
                                          ? 5U : ((IData)(vlSelf->_mc___05Fs2315)
                                                   ? 6U
                                                   : 
                                                  ((IData)(vlSelf->_mc___05Fs2314)
                                                    ? 7U
                                                    : 
                                                   ((IData)(vlSelf->_mc___05Fs2313)
                                                     ? 8U
                                                     : 
                                                    ((IData)(vlSelf->_mc___05Fs2312)
                                                      ? 9U
                                                      : 
                                                     ((IData)(vlSelf->_mc___05Fs2311)
                                                       ? 0xaU
                                                       : 
                                                      ((IData)(vlSelf->_mc___05Fs2310)
                                                        ? 0xbU
                                                        : 
                                                       ((IData)(vlSelf->_mc___05Fs2309)
                                                         ? 0xcU
                                                         : 
                                                        ((IData)(vlSelf->_mc___05Fs2308)
                                                          ? 0xdU
                                                          : 
                                                         ((IData)(vlSelf->_mc___05Fs2307)
                                                           ? 0xeU
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs2306)
                                                            ? 0xfU
                                                            : 
                                                           ((IData)(vlSelf->_mc___05Fs2305)
                                                             ? 0x10U
                                                             : 
                                                            ((IData)(vlSelf->_mc___05Fs2304)
                                                              ? 0x11U
                                                              : 
                                                             ((IData)(vlSelf->_mc___05Fs2303)
                                                               ? 0x12U
                                                               : 
                                                              ((IData)(vlSelf->_mc___05Fs2302)
                                                                ? 0x13U
                                                                : 
                                                               ((IData)(vlSelf->_mc___05Fs2301)
                                                                 ? 0x14U
                                                                 : 
                                                                ((IData)(vlSelf->_mc___05Fs2300)
                                                                  ? 0x15U
                                                                  : 0x16U)))))))))))))))))))));
    }
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wdata_rawIn_adjustedExp_1 
        = (0x1ffU & (((IData)(vlSelf->_mc___05Fs2376)
                       ? (0x1e0U | ((IData)(vlSelf->_mc___05Fs2321)
                                     ? 0x1fU : ((IData)(vlSelf->_mc___05Fs2320)
                                                 ? 0x1eU
                                                 : 
                                                ((IData)(vlSelf->_mc___05Fs2319)
                                                  ? 0x1dU
                                                  : 
                                                 ((IData)(vlSelf->_mc___05Fs2318)
                                                   ? 0x1cU
                                                   : 
                                                  ((IData)(vlSelf->_mc___05Fs2317)
                                                    ? 0x1bU
                                                    : 
                                                   ((IData)(vlSelf->_mc___05Fs2316)
                                                     ? 0x1aU
                                                     : 
                                                    ((IData)(vlSelf->_mc___05Fs2315)
                                                      ? 0x19U
                                                      : 
                                                     ((IData)(vlSelf->_mc___05Fs2314)
                                                       ? 0x18U
                                                       : 
                                                      ((IData)(vlSelf->_mc___05Fs2313)
                                                        ? 0x17U
                                                        : 
                                                       ((IData)(vlSelf->_mc___05Fs2312)
                                                         ? 0x16U
                                                         : 
                                                        ((IData)(vlSelf->_mc___05Fs2311)
                                                          ? 0x15U
                                                          : 
                                                         ((IData)(vlSelf->_mc___05Fs2310)
                                                           ? 0x14U
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs2309)
                                                            ? 0x13U
                                                            : 
                                                           ((IData)(vlSelf->_mc___05Fs2308)
                                                             ? 0x12U
                                                             : 
                                                            ((IData)(vlSelf->_mc___05Fs2307)
                                                              ? 0x11U
                                                              : 
                                                             ((IData)(vlSelf->_mc___05Fs2306)
                                                               ? 0x10U
                                                               : 
                                                              ((IData)(vlSelf->_mc___05Fs2305)
                                                                ? 0xfU
                                                                : 
                                                               ((IData)(vlSelf->_mc___05Fs2304)
                                                                 ? 0xeU
                                                                 : 
                                                                ((IData)(vlSelf->_mc___05Fs2303)
                                                                  ? 0xdU
                                                                  : 
                                                                 ((IData)(vlSelf->_mc___05Fs2302)
                                                                   ? 0xcU
                                                                   : 
                                                                  ((IData)(vlSelf->_mc___05Fs2301)
                                                                    ? 0xbU
                                                                    : 
                                                                   ((IData)(vlSelf->_mc___05Fs2300)
                                                                     ? 0xaU
                                                                     : 9U)))))))))))))))))))))))
                       : (0xffU & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                           >> 0x17U)))) 
                     + (0x80U | ((IData)(vlSelf->_mc___05Fs2376)
                                  ? 2U : 1U))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wdata_rawIn_normDist 
        = ((IData)(vlSelf->_mc___05Fs2350) ? 0U : ((IData)(vlSelf->_mc___05Fs2349)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->_mc___05Fs2348)
                                                     ? 2U
                                                     : 
                                                    ((IData)(vlSelf->_mc___05Fs2347)
                                                      ? 3U
                                                      : 
                                                     ((IData)(vlSelf->_mc___05Fs2346)
                                                       ? 4U
                                                       : 
                                                      ((IData)(vlSelf->_mc___05Fs2345)
                                                        ? 5U
                                                        : 
                                                       ((IData)(vlSelf->_mc___05Fs2344)
                                                         ? 6U
                                                         : 
                                                        ((IData)(vlSelf->_mc___05Fs2343)
                                                          ? 7U
                                                          : 
                                                         ((IData)(vlSelf->_mc___05Fs2342)
                                                           ? 8U
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs2341)
                                                            ? 9U
                                                            : 
                                                           ((IData)(vlSelf->_mc___05Fs2340)
                                                             ? 0xaU
                                                             : 
                                                            ((IData)(vlSelf->_mc___05Fs2339)
                                                              ? 0xbU
                                                              : 
                                                             ((IData)(vlSelf->_mc___05Fs2338)
                                                               ? 0xcU
                                                               : 
                                                              ((IData)(vlSelf->_mc___05Fs2337)
                                                                ? 0xdU
                                                                : 
                                                               ((IData)(vlSelf->_mc___05Fs2336)
                                                                 ? 0xeU
                                                                 : 
                                                                ((IData)(vlSelf->_mc___05Fs2335)
                                                                  ? 0xfU
                                                                  : 
                                                                 ((IData)(vlSelf->_mc___05Fs2334)
                                                                   ? 0x10U
                                                                   : 
                                                                  ((IData)(vlSelf->_mc___05Fs2333)
                                                                    ? 0x11U
                                                                    : 
                                                                   ((IData)(vlSelf->_mc___05Fs2332)
                                                                     ? 0x12U
                                                                     : 
                                                                    ((IData)(vlSelf->_mc___05Fs2331)
                                                                      ? 0x13U
                                                                      : 
                                                                     ((IData)(vlSelf->_mc___05Fs2330)
                                                                       ? 0x14U
                                                                       : 
                                                                      ((IData)(vlSelf->_mc___05Fs2329)
                                                                        ? 0x15U
                                                                        : 
                                                                       ((IData)(vlSelf->_mc___05Fs2328)
                                                                         ? 0x16U
                                                                         : 
                                                                        ((IData)(vlSelf->_mc___05Fs2327)
                                                                          ? 0x17U
                                                                          : 
                                                                         ((IData)(vlSelf->_mc___05Fs2326)
                                                                           ? 0x18U
                                                                           : 
                                                                          ((IData)(vlSelf->_mc___05Fs2325)
                                                                            ? 0x19U
                                                                            : 
                                                                           ((IData)(vlSelf->_mc___05Fs2324)
                                                                             ? 0x1aU
                                                                             : 
                                                                            ((IData)(vlSelf->_mc___05Fs2323)
                                                                              ? 0x1bU
                                                                              : 
                                                                             ((IData)(vlSelf->_mc___05Fs2322)
                                                                               ? 0x1cU
                                                                               : 
                                                                              ((IData)(vlSelf->_mc___05Fs2321)
                                                                                ? 0x1dU
                                                                                : 
                                                                               ((IData)(vlSelf->_mc___05Fs2320)
                                                                                 ? 0x1eU
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2319)
                                                                                 ? 0x1fU
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2318)
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2317)
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2316)
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2315)
                                                                                 ? 0x23U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2314)
                                                                                 ? 0x24U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2313)
                                                                                 ? 0x25U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2312)
                                                                                 ? 0x26U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2311)
                                                                                 ? 0x27U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2310)
                                                                                 ? 0x28U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2309)
                                                                                 ? 0x29U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2308)
                                                                                 ? 0x2aU
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2307)
                                                                                 ? 0x2bU
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2306)
                                                                                 ? 0x2cU
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2305)
                                                                                 ? 0x2dU
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2304)
                                                                                 ? 0x2eU
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2303)
                                                                                 ? 0x2fU
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2302)
                                                                                 ? 0x30U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2301)
                                                                                 ? 0x31U
                                                                                 : 
                                                                                (0x32U 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->_mc___05Fs2300))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wdata_rawIn_adjustedExp 
        = (0xfffU & (((IData)(vlSelf->_mc___05Fs2351)
                       ? (0xfc0U | ((IData)(vlSelf->_mc___05Fs2350)
                                     ? 0x3fU : ((IData)(vlSelf->_mc___05Fs2349)
                                                 ? 0x3eU
                                                 : 
                                                ((IData)(vlSelf->_mc___05Fs2348)
                                                  ? 0x3dU
                                                  : 
                                                 ((IData)(vlSelf->_mc___05Fs2347)
                                                   ? 0x3cU
                                                   : 
                                                  ((IData)(vlSelf->_mc___05Fs2346)
                                                    ? 0x3bU
                                                    : 
                                                   ((IData)(vlSelf->_mc___05Fs2345)
                                                     ? 0x3aU
                                                     : 
                                                    ((IData)(vlSelf->_mc___05Fs2344)
                                                      ? 0x39U
                                                      : 
                                                     ((IData)(vlSelf->_mc___05Fs2343)
                                                       ? 0x38U
                                                       : 
                                                      ((IData)(vlSelf->_mc___05Fs2342)
                                                        ? 0x37U
                                                        : 
                                                       ((IData)(vlSelf->_mc___05Fs2341)
                                                         ? 0x36U
                                                         : 
                                                        ((IData)(vlSelf->_mc___05Fs2340)
                                                          ? 0x35U
                                                          : 
                                                         ((IData)(vlSelf->_mc___05Fs2339)
                                                           ? 0x34U
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs2338)
                                                            ? 0x33U
                                                            : 
                                                           ((IData)(vlSelf->_mc___05Fs2337)
                                                             ? 0x32U
                                                             : 
                                                            ((IData)(vlSelf->_mc___05Fs2336)
                                                              ? 0x31U
                                                              : 
                                                             ((IData)(vlSelf->_mc___05Fs2335)
                                                               ? 0x30U
                                                               : 
                                                              ((IData)(vlSelf->_mc___05Fs2334)
                                                                ? 0x2fU
                                                                : 
                                                               ((IData)(vlSelf->_mc___05Fs2333)
                                                                 ? 0x2eU
                                                                 : 
                                                                ((IData)(vlSelf->_mc___05Fs2332)
                                                                  ? 0x2dU
                                                                  : 
                                                                 ((IData)(vlSelf->_mc___05Fs2331)
                                                                   ? 0x2cU
                                                                   : 
                                                                  ((IData)(vlSelf->_mc___05Fs2330)
                                                                    ? 0x2bU
                                                                    : 
                                                                   ((IData)(vlSelf->_mc___05Fs2329)
                                                                     ? 0x2aU
                                                                     : 
                                                                    ((IData)(vlSelf->_mc___05Fs2328)
                                                                      ? 0x29U
                                                                      : 
                                                                     ((IData)(vlSelf->_mc___05Fs2327)
                                                                       ? 0x28U
                                                                       : 
                                                                      ((IData)(vlSelf->_mc___05Fs2326)
                                                                        ? 0x27U
                                                                        : 
                                                                       ((IData)(vlSelf->_mc___05Fs2325)
                                                                         ? 0x26U
                                                                         : 
                                                                        ((IData)(vlSelf->_mc___05Fs2324)
                                                                          ? 0x25U
                                                                          : 
                                                                         ((IData)(vlSelf->_mc___05Fs2323)
                                                                           ? 0x24U
                                                                           : 
                                                                          ((IData)(vlSelf->_mc___05Fs2322)
                                                                            ? 0x23U
                                                                            : 
                                                                           ((IData)(vlSelf->_mc___05Fs2321)
                                                                             ? 0x22U
                                                                             : 
                                                                            ((IData)(vlSelf->_mc___05Fs2320)
                                                                              ? 0x21U
                                                                              : 
                                                                             ((IData)(vlSelf->_mc___05Fs2319)
                                                                               ? 0x20U
                                                                               : 
                                                                              ((IData)(vlSelf->_mc___05Fs2318)
                                                                                ? 0x1fU
                                                                                : 
                                                                               ((IData)(vlSelf->_mc___05Fs2317)
                                                                                 ? 0x1eU
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2316)
                                                                                 ? 0x1dU
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2315)
                                                                                 ? 0x1cU
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2314)
                                                                                 ? 0x1bU
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2313)
                                                                                 ? 0x1aU
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2312)
                                                                                 ? 0x19U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2311)
                                                                                 ? 0x18U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2310)
                                                                                 ? 0x17U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2309)
                                                                                 ? 0x16U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2308)
                                                                                 ? 0x15U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2307)
                                                                                 ? 0x14U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2306)
                                                                                 ? 0x13U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2305)
                                                                                 ? 0x12U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2304)
                                                                                 ? 0x11U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2303)
                                                                                 ? 0x10U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2302)
                                                                                 ? 0xfU
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2301)
                                                                                 ? 0xeU
                                                                                 : 
                                                                                (0x3fU 
                                                                                & (~ 
                                                                                (0x32U 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->_mc___05Fs2300)))))))))))))))))))))))))))))))))))))))))))))))))))))))))
                       : (0x7ffU & (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x34U)))) 
                     + (0x400U | ((IData)(vlSelf->_mc___05Fs2351)
                                   ? 2U : 1U))));
    vlSelf->_mc___05Fs1927 = vlSelf->_mc___05Fs1853;
    vlSelf->__VdfgTmp_hb87b9221__0 = (((2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__in_pipe_b_rm)) 
                                       & (IData)(vlSelf->_mc___05Fs1853)) 
                                      | ((~ (IData)(vlSelf->_mc___05Fs1853)) 
                                         & (3U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__in_pipe_b_rm))));
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_absIn 
        = ((IData)(vlSelf->_mc___05Fs1853) ? (- vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__intValue_res)
            : vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__intValue_res);
    vlSelf->_rs___05Fs1850 = vlSelf->_cp___05Fs9221;
    vlSelf->_cp___05Fs9278 = vlSelf->_mc___05Fs1294;
    vlSelf->_rs___05Fs1920 = vlSelf->_mc___05Fs1294;
    vlSelf->_mc___05Fs1259 = (8U == (IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_66));
    vlSelf->_mc___05Fs1260 = (9U == (IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_66));
    vlSelf->_mc___05Fs1261 = (0xaU == (IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_66));
    vlSelf->_mc___05Fs1262 = (0xbU == (IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_66));
    vlSelf->_mc___05Fs1263 = (4U == (IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_66));
    vlSelf->_mc___05Fs1264 = (5U == (IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_66));
    vlSelf->_mc___05Fs1267 = (0U == (IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_66));
    vlSelf->_mc___05Fs1268 = (1U == (IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_66));
    vlSelf->_mc___05Fs1265 = (6U == (IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_66));
    vlSelf->_mc___05Fs1266 = (7U == (IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_66));
    vlSelf->_mc___05Fs1269 = (2U == (IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_66));
    vlSelf->_mc___05Fs1270 = (3U == (IData)(TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_66));
    vlSelf->_rs___05Fs3317 = vlSelf->_mc___05Fs3117;
    vlSelf->_rs___05Fs3319 = vlSelf->_mc___05Fs3114;
    vlSelf->_cp___05Fs10051 = vlSelf->_mc___05Fs3119;
    vlSelf->_mc___05Fs3116 = (1U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__subtractor[2U]);
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__loOut 
        = ((IData)(vlSelf->_mc___05Fs3216) ? (IData)(
                                                     (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__result 
                                                      >> 0x20U))
            : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__result));
    vlSelf->_cp___05Fs10050 = vlSelf->_mc___05Fs3166;
    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT___GEN_8 
        = (0x3fU & ((((IData)(vlSelf->_mc___05Fs3211) 
                      << 5U) | ((IData)(vlSelf->_mc___05Fs3211)
                                 ? (((IData)(vlSelf->_mc___05Fs3187) 
                                     << 4U) | ((IData)(vlSelf->_mc___05Fs3187)
                                                ? (
                                                   ((IData)(vlSelf->_mc___05Fs3175) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->_mc___05Fs3175)
                                                       ? 
                                                      (((IData)(vlSelf->_mc___05Fs3169) 
                                                        << 2U) 
                                                       | ((IData)(vlSelf->_mc___05Fs3169)
                                                           ? 
                                                          ((IData)(vlSelf->_mc___05Fs3166)
                                                            ? 3U
                                                            : 
                                                           ((IData)(vlSelf->_mc___05Fs3165)
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                                >> 0x1dU))))
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs3168)
                                                            ? 3U
                                                            : 
                                                           ((IData)(vlSelf->_mc___05Fs3167)
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                                >> 0x19U))))))
                                                       : 
                                                      (((IData)(vlSelf->_mc___05Fs3174) 
                                                        << 2U) 
                                                       | ((IData)(vlSelf->_mc___05Fs3174)
                                                           ? 
                                                          ((IData)(vlSelf->_mc___05Fs3171)
                                                            ? 3U
                                                            : 
                                                           ((IData)(vlSelf->_mc___05Fs3170)
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                                >> 0x15U))))
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs3173)
                                                            ? 3U
                                                            : 
                                                           ((IData)(vlSelf->_mc___05Fs3172)
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                                >> 0x11U))))))))
                                                : (
                                                   ((IData)(vlSelf->_mc___05Fs3186) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->_mc___05Fs3186)
                                                       ? 
                                                      (((IData)(vlSelf->_mc___05Fs3180) 
                                                        << 2U) 
                                                       | ((IData)(vlSelf->_mc___05Fs3180)
                                                           ? 
                                                          ((IData)(vlSelf->_mc___05Fs3177)
                                                            ? 3U
                                                            : 
                                                           ((IData)(vlSelf->_mc___05Fs3176)
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                                >> 0xdU))))
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs3179)
                                                            ? 3U
                                                            : 
                                                           ((IData)(vlSelf->_mc___05Fs3178)
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                                >> 9U))))))
                                                       : 
                                                      (((IData)(vlSelf->_mc___05Fs3185) 
                                                        << 2U) 
                                                       | ((IData)(vlSelf->_mc___05Fs3185)
                                                           ? 
                                                          ((IData)(vlSelf->_mc___05Fs3182)
                                                            ? 3U
                                                            : 
                                                           ((IData)(vlSelf->_mc___05Fs3181)
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                                >> 5U))))
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs3184)
                                                            ? 3U
                                                            : 
                                                           ((IData)(vlSelf->_mc___05Fs3183)
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                                >> 1U))))))))))
                                 : (((IData)(vlSelf->_mc___05Fs3210) 
                                     << 4U) | ((IData)(vlSelf->_mc___05Fs3210)
                                                ? (
                                                   ((IData)(vlSelf->_mc___05Fs3198) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->_mc___05Fs3198)
                                                       ? 
                                                      (((IData)(vlSelf->_mc___05Fs3192) 
                                                        << 2U) 
                                                       | ((IData)(vlSelf->_mc___05Fs3192)
                                                           ? 
                                                          ((IData)(vlSelf->_mc___05Fs3189)
                                                            ? 3U
                                                            : 
                                                           ((IData)(vlSelf->_mc___05Fs3188)
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                                >> 0x1dU))))
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs3191)
                                                            ? 3U
                                                            : 
                                                           ((IData)(vlSelf->_mc___05Fs3190)
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                                >> 0x19U))))))
                                                       : 
                                                      (((IData)(vlSelf->_mc___05Fs3197) 
                                                        << 2U) 
                                                       | ((IData)(vlSelf->_mc___05Fs3197)
                                                           ? 
                                                          ((IData)(vlSelf->_mc___05Fs3194)
                                                            ? 3U
                                                            : 
                                                           ((IData)(vlSelf->_mc___05Fs3193)
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                                >> 0x15U))))
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs3196)
                                                            ? 3U
                                                            : 
                                                           ((IData)(vlSelf->_mc___05Fs3195)
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                                >> 0x11U))))))))
                                                : (
                                                   ((IData)(vlSelf->_mc___05Fs3209) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->_mc___05Fs3209)
                                                       ? 
                                                      (((IData)(vlSelf->_mc___05Fs3203) 
                                                        << 2U) 
                                                       | ((IData)(vlSelf->_mc___05Fs3203)
                                                           ? 
                                                          ((IData)(vlSelf->_mc___05Fs3200)
                                                            ? 3U
                                                            : 
                                                           ((IData)(vlSelf->_mc___05Fs3199)
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                                >> 0xdU))))
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs3202)
                                                            ? 3U
                                                            : 
                                                           ((IData)(vlSelf->_mc___05Fs3201)
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                                >> 9U))))))
                                                       : 
                                                      (((IData)(vlSelf->_mc___05Fs3208) 
                                                        << 2U) 
                                                       | ((IData)(vlSelf->_mc___05Fs3208)
                                                           ? 
                                                          ((IData)(vlSelf->_mc___05Fs3205)
                                                            ? 3U
                                                            : 
                                                           ((IData)(vlSelf->_mc___05Fs3204)
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                                >> 5U))))
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs3207)
                                                            ? 3U
                                                            : 
                                                           ((IData)(vlSelf->_mc___05Fs3206)
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                                >> 1U)))))))))))) 
                    - (((IData)(vlSelf->_mc___05Fs3164) 
                        << 5U) | ((IData)(vlSelf->_mc___05Fs3164)
                                   ? (((IData)(vlSelf->_mc___05Fs3140) 
                                       << 4U) | ((IData)(vlSelf->_mc___05Fs3140)
                                                  ? 
                                                 (((IData)(vlSelf->_mc___05Fs3128) 
                                                   << 3U) 
                                                  | ((IData)(vlSelf->_mc___05Fs3128)
                                                      ? 
                                                     (((IData)(vlSelf->_mc___05Fs3122) 
                                                       << 2U) 
                                                      | ((IData)(vlSelf->_mc___05Fs3122)
                                                          ? 
                                                         ((IData)(vlSelf->_mc___05Fs3119)
                                                           ? 3U
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs3118)
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                               >> 0x1dU))))
                                                          : 
                                                         ((IData)(vlSelf->_mc___05Fs3121)
                                                           ? 3U
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs3120)
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                               >> 0x19U))))))
                                                      : 
                                                     (((IData)(vlSelf->_mc___05Fs3127) 
                                                       << 2U) 
                                                      | ((IData)(vlSelf->_mc___05Fs3127)
                                                          ? 
                                                         ((IData)(vlSelf->_mc___05Fs3124)
                                                           ? 3U
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs3123)
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                               >> 0x15U))))
                                                          : 
                                                         ((IData)(vlSelf->_mc___05Fs3126)
                                                           ? 3U
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs3125)
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                               >> 0x11U))))))))
                                                  : 
                                                 (((IData)(vlSelf->_mc___05Fs3139) 
                                                   << 3U) 
                                                  | ((IData)(vlSelf->_mc___05Fs3139)
                                                      ? 
                                                     (((IData)(vlSelf->_mc___05Fs3133) 
                                                       << 2U) 
                                                      | ((IData)(vlSelf->_mc___05Fs3133)
                                                          ? 
                                                         ((IData)(vlSelf->_mc___05Fs3130)
                                                           ? 3U
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs3129)
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                               >> 0xdU))))
                                                          : 
                                                         ((IData)(vlSelf->_mc___05Fs3132)
                                                           ? 3U
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs3131)
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                               >> 9U))))))
                                                      : 
                                                     (((IData)(vlSelf->_mc___05Fs3138) 
                                                       << 2U) 
                                                      | ((IData)(vlSelf->_mc___05Fs3138)
                                                          ? 
                                                         ((IData)(vlSelf->_mc___05Fs3135)
                                                           ? 3U
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs3134)
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                               >> 5U))))
                                                          : 
                                                         ((IData)(vlSelf->_mc___05Fs3137)
                                                           ? 3U
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs3136)
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                               >> 1U))))))))))
                                   : (((IData)(vlSelf->_mc___05Fs3163) 
                                       << 4U) | ((IData)(vlSelf->_mc___05Fs3163)
                                                  ? 
                                                 (((IData)(vlSelf->_mc___05Fs3151) 
                                                   << 3U) 
                                                  | ((IData)(vlSelf->_mc___05Fs3151)
                                                      ? 
                                                     (((IData)(vlSelf->_mc___05Fs3145) 
                                                       << 2U) 
                                                      | ((IData)(vlSelf->_mc___05Fs3145)
                                                          ? 
                                                         ((IData)(vlSelf->_mc___05Fs3142)
                                                           ? 3U
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs3141)
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                               >> 0x1dU))))
                                                          : 
                                                         ((IData)(vlSelf->_mc___05Fs3144)
                                                           ? 3U
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs3143)
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                               >> 0x19U))))))
                                                      : 
                                                     (((IData)(vlSelf->_mc___05Fs3150) 
                                                       << 2U) 
                                                      | ((IData)(vlSelf->_mc___05Fs3150)
                                                          ? 
                                                         ((IData)(vlSelf->_mc___05Fs3147)
                                                           ? 3U
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs3146)
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                               >> 0x15U))))
                                                          : 
                                                         ((IData)(vlSelf->_mc___05Fs3149)
                                                           ? 3U
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs3148)
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                               >> 0x11U))))))))
                                                  : 
                                                 (((IData)(vlSelf->_mc___05Fs3162) 
                                                   << 3U) 
                                                  | ((IData)(vlSelf->_mc___05Fs3162)
                                                      ? 
                                                     (((IData)(vlSelf->_mc___05Fs3156) 
                                                       << 2U) 
                                                      | ((IData)(vlSelf->_mc___05Fs3156)
                                                          ? 
                                                         ((IData)(vlSelf->_mc___05Fs3153)
                                                           ? 3U
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs3152)
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                               >> 0xdU))))
                                                          : 
                                                         ((IData)(vlSelf->_mc___05Fs3155)
                                                           ? 3U
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs3154)
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                               >> 9U))))))
                                                      : 
                                                     (((IData)(vlSelf->_mc___05Fs3161) 
                                                       << 2U) 
                                                      | ((IData)(vlSelf->_mc___05Fs3161)
                                                          ? 
                                                         ((IData)(vlSelf->_mc___05Fs3158)
                                                           ? 3U
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs3157)
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                               >> 5U))))
                                                          : 
                                                         ((IData)(vlSelf->_mc___05Fs3160)
                                                           ? 3U
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs3159)
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                               >> 1U))))))))))))));
}
