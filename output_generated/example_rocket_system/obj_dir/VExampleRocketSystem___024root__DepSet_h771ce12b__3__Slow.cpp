// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExampleRocketSystem.h for the primary calling header

#include "VExampleRocketSystem__pch.h"
#include "VExampleRocketSystem___024root.h"

VL_ATTR_COLD void VExampleRocketSystem___024root___stl_sequent__TOP__3(VExampleRocketSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExampleRocketSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExampleRocketSystem___024root___stl_sequent__TOP__3\n"); );
    // Init
    CData/*0:0*/ ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_13;
    ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_13 = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_17;
    ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_17 = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_18;
    ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_18 = 0;
    VlWide<3>/*75:0*/ ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_51;
    VL_ZERO_W(76, ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_51);
    CData/*0:0*/ ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_13;
    ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_13 = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_67;
    ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_67 = 0;
    CData/*7:0*/ ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_4;
    ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_4 = 0;
    CData/*7:0*/ ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_6;
    ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_6 = 0;
    CData/*7:0*/ ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_19;
    ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_19 = 0;
    CData/*7:0*/ ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_21;
    ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_21 = 0;
    CData/*5:0*/ ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT___GEN_68;
    ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT___GEN_68 = 0;
    CData/*5:0*/ ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT___GEN_74;
    ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT___GEN_74 = 0;
    VlWide<16>/*511:0*/ ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_43;
    VL_ZERO_W(512, ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_43);
    VlWide<16>/*511:0*/ ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_43;
    VL_ZERO_W(512, ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_43);
    VlWide<16>/*511:0*/ ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_43;
    VL_ZERO_W(512, ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_43);
    CData/*2:0*/ ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_10;
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_10 = 0;
    IData/*23:0*/ ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h595d38b9__0;
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h595d38b9__0 = 0;
    IData/*23:0*/ ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h595d38b9__0;
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h595d38b9__0 = 0;
    SData/*15:0*/ ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h3ec344f6__0;
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h3ec344f6__0 = 0;
    SData/*15:0*/ ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha17969ea__0;
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha17969ea__0 = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h473a13d8__0;
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h473a13d8__0 = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hb35d19a9__0;
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hb35d19a9__0 = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h1ab2a0df__0;
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h1ab2a0df__0 = 0;
    SData/*9:0*/ ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h4b27d750__0;
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h4b27d750__0 = 0;
    CData/*3:0*/ ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hee6be135__0;
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hee6be135__0 = 0;
    CData/*6:0*/ ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha7eb522c__0;
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha7eb522c__0 = 0;
    SData/*9:0*/ ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hafcbd1e5__0;
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hafcbd1e5__0 = 0;
    SData/*9:0*/ ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h6f659a34__0;
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h6f659a34__0 = 0;
    CData/*4:0*/ ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hf5d3cdb7__0;
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hf5d3cdb7__0 = 0;
    SData/*9:0*/ ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h5a282bfc__0;
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h5a282bfc__0 = 0;
    CData/*4:0*/ ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT___GEN;
    ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT___GEN = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT____VdfgTmp_h2dd21bce__0;
    ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT____VdfgTmp_h2dd21bce__0 = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN;
    ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN = 0;
    CData/*0:0*/ ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_10;
    ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_10 = 0;
    CData/*0:0*/ __VdfgTmp_ha89e5ec9__0;
    __VdfgTmp_ha89e5ec9__0 = 0;
    CData/*0:0*/ __VdfgTmp_hf45803bf__0;
    __VdfgTmp_hf45803bf__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_32;
    VlWide<3>/*95:0*/ __Vtemp_33;
    VlWide<3>/*95:0*/ __Vtemp_36;
    VlWide<3>/*95:0*/ __Vtemp_37;
    VlWide<3>/*95:0*/ __Vtemp_40;
    VlWide<3>/*95:0*/ __Vtemp_41;
    VlWide<3>/*95:0*/ __Vtemp_44;
    VlWide<3>/*95:0*/ __Vtemp_45;
    VlWide<3>/*95:0*/ __Vtemp_48;
    VlWide<3>/*95:0*/ __Vtemp_49;
    VlWide<3>/*95:0*/ __Vtemp_52;
    VlWide<3>/*95:0*/ __Vtemp_53;
    VlWide<3>/*95:0*/ __Vtemp_56;
    VlWide<3>/*95:0*/ __Vtemp_57;
    VlWide<3>/*95:0*/ __Vtemp_60;
    VlWide<3>/*95:0*/ __Vtemp_61;
    VlWide<3>/*95:0*/ __Vtemp_64;
    VlWide<3>/*95:0*/ __Vtemp_65;
    VlWide<3>/*95:0*/ __Vtemp_68;
    VlWide<3>/*95:0*/ __Vtemp_69;
    VlWide<3>/*95:0*/ __Vtemp_72;
    VlWide<3>/*95:0*/ __Vtemp_73;
    VlWide<3>/*95:0*/ __Vtemp_76;
    VlWide<3>/*95:0*/ __Vtemp_77;
    VlWide<3>/*95:0*/ __Vtemp_80;
    VlWide<3>/*95:0*/ __Vtemp_81;
    VlWide<3>/*95:0*/ __Vtemp_84;
    VlWide<3>/*95:0*/ __Vtemp_85;
    VlWide<3>/*95:0*/ __Vtemp_88;
    VlWide<3>/*95:0*/ __Vtemp_89;
    VlWide<3>/*95:0*/ __Vtemp_92;
    VlWide<3>/*95:0*/ __Vtemp_93;
    VlWide<3>/*95:0*/ __Vtemp_96;
    VlWide<3>/*95:0*/ __Vtemp_97;
    VlWide<3>/*95:0*/ __Vtemp_100;
    VlWide<3>/*95:0*/ __Vtemp_101;
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
    VlWide<3>/*95:0*/ __Vtemp_128;
    VlWide<3>/*95:0*/ __Vtemp_129;
    VlWide<3>/*95:0*/ __Vtemp_132;
    VlWide<3>/*95:0*/ __Vtemp_133;
    VlWide<3>/*95:0*/ __Vtemp_136;
    VlWide<3>/*95:0*/ __Vtemp_137;
    VlWide<3>/*95:0*/ __Vtemp_140;
    VlWide<3>/*95:0*/ __Vtemp_141;
    VlWide<3>/*95:0*/ __Vtemp_144;
    VlWide<3>/*95:0*/ __Vtemp_145;
    VlWide<3>/*95:0*/ __Vtemp_148;
    VlWide<3>/*95:0*/ __Vtemp_149;
    VlWide<3>/*95:0*/ __Vtemp_152;
    VlWide<3>/*95:0*/ __Vtemp_153;
    VlWide<3>/*95:0*/ __Vtemp_156;
    VlWide<3>/*95:0*/ __Vtemp_157;
    VlWide<3>/*95:0*/ __Vtemp_160;
    VlWide<3>/*95:0*/ __Vtemp_161;
    VlWide<3>/*95:0*/ __Vtemp_164;
    VlWide<3>/*95:0*/ __Vtemp_165;
    VlWide<3>/*95:0*/ __Vtemp_168;
    VlWide<3>/*95:0*/ __Vtemp_169;
    VlWide<4>/*127:0*/ __Vtemp_177;
    VlWide<5>/*159:0*/ __Vtemp_183;
    VlWide<5>/*159:0*/ __Vtemp_186;
    VlWide<3>/*95:0*/ __Vtemp_189;
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
    VlWide<16>/*511:0*/ __Vtemp_354;
    VlWide<16>/*511:0*/ __Vtemp_355;
    VlWide<16>/*511:0*/ __Vtemp_356;
    VlWide<16>/*511:0*/ __Vtemp_357;
    VlWide<16>/*511:0*/ __Vtemp_358;
    VlWide<16>/*511:0*/ __Vtemp_359;
    VlWide<3>/*95:0*/ __Vtemp_361;
    VlWide<3>/*95:0*/ __Vtemp_363;
    VlWide<3>/*95:0*/ __Vtemp_365;
    VlWide<4>/*127:0*/ __Vtemp_374;
    VlWide<5>/*159:0*/ __Vtemp_386;
    VlWide<5>/*159:0*/ __Vtemp_393;
    VlWide<5>/*159:0*/ __Vtemp_400;
    VlWide<5>/*159:0*/ __Vtemp_407;
    VlWide<6>/*191:0*/ __Vtemp_418;
    VlWide<6>/*191:0*/ __Vtemp_425;
    VlWide<6>/*191:0*/ __Vtemp_432;
    VlWide<6>/*191:0*/ __Vtemp_439;
    VlWide<7>/*223:0*/ __Vtemp_450;
    VlWide<7>/*223:0*/ __Vtemp_457;
    VlWide<7>/*223:0*/ __Vtemp_464;
    VlWide<7>/*223:0*/ __Vtemp_471;
    VlWide<8>/*255:0*/ __Vtemp_482;
    VlWide<8>/*255:0*/ __Vtemp_489;
    VlWide<8>/*255:0*/ __Vtemp_496;
    VlWide<8>/*255:0*/ __Vtemp_503;
    VlWide<6>/*191:0*/ __Vtemp_510;
    VlWide<6>/*191:0*/ __Vtemp_511;
    VlWide<3>/*95:0*/ __Vtemp_523;
    VlWide<3>/*95:0*/ __Vtemp_524;
    VlWide<6>/*191:0*/ __Vtemp_529;
    VlWide<6>/*191:0*/ __Vtemp_530;
    VlWide<3>/*95:0*/ __Vtemp_532;
    VlWide<3>/*95:0*/ __Vtemp_533;
    VlWide<3>/*95:0*/ __Vtemp_534;
    VlWide<3>/*95:0*/ __Vtemp_535;
    VlWide<3>/*95:0*/ __Vtemp_537;
    VlWide<3>/*95:0*/ __Vtemp_538;
    VlWide<6>/*191:0*/ __Vtemp_540;
    VlWide<6>/*191:0*/ __Vtemp_541;
    VlWide<4>/*127:0*/ __Vtemp_544;
    VlWide<4>/*127:0*/ __Vtemp_545;
    VlWide<7>/*223:0*/ __Vtemp_553;
    // Body
    vlSelf->_cp___05Fs9747 = (((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_0_cp)) 
                               & (IData)(vlSelf->_mc___05Fs2442)) 
                              | (IData)(vlSelf->_mc___05Fs2425));
    if (vlSelf->_mc___05Fs2425) {
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__waddr 
            = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_waddr;
        vlSelf->_mc___05Fs2430 = vlSelf->_cp___05Fs9758;
    } else {
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__waddr 
            = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_0_rd;
        vlSelf->_mc___05Fs2430 = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_0_typeTag;
    }
    vlSelf->_cp___05Fs9750 = (((IData)(vlSelf->_mc___05Fs2425)
                                ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_cp)
                                : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_0_cp)) 
                              & ((IData)(vlSelf->_mc___05Fs2442) 
                                 | (IData)(vlSelf->_mc___05Fs2425)));
    vlSelf->_mc___05Fs3340 = ((IData)(vlSelf->_mc___05Fs2441) 
                              | ((IData)(vlSelf->_mc___05Fs2425) 
                                 | (IData)(vlSelf->_mc___05Fs2442)));
    vlSelf->_mc___05Fs3349 = ((IData)(vlSelf->_mc___05Fs2425) 
                              | ((IData)(vlSelf->_mc___05Fs2442) 
                                 & (IData)(vlSelf->_mc___05Fs2428)));
    vlSelf->_cp___05Fs2141 = vlSelf->_cp___05Fs2126;
    vlSelf->_cp___05Fs2143 = vlSelf->_cp___05Fs2128;
    vlSelf->_cp___05Fs2197 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_52)));
    vlSelf->_cp___05Fs2199 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_53)));
    vlSelf->_cp___05Fs2201 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_54)));
    vlSelf->_cp___05Fs2203 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_55)));
    vlSelf->_cp___05Fs2205 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)));
    vlSelf->_cp___05Fs2228 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_79)));
    vlSelf->_cp___05Fs2247 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_88)));
    vlSelf->_cp___05Fs2252 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_89)));
    vlSelf->_cp___05Fs2124 = vlSelf->_cp___05Fs2111;
    vlSelf->_cp___05Fs2139 = vlSelf->_cp___05Fs2111;
    vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_77 
        = (((7U & vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__nodeIn_d_q__DOT____Vcellinp__ram_ext__W0_data[0U]) 
            == ((0x17U >= (0x1fU & ((IData)(3U) * (7U 
                                                   & (IData)(
                                                             (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_59 
                                                              >> 1U))))))
                 ? (7U & (0x911240U >> (0x1fU & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_59 
                                                             >> 1U)))))))
                 : 0U)) | ((7U & vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__nodeIn_d_q__DOT____Vcellinp__ram_ext__W0_data[0U]) 
                           == ((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_59 
                                                               >> 1U))))))
                                ? (7U & (0x951240U 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & (IData)(
                                                             (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_59 
                                                              >> 1U)))))))
                                : 0U)));
    vlSelf->_mc___05Fs241 = vlSelf->_mc___05Fs238;
    vlSelf->_mc___05Fs245 = vlSelf->_mc___05Fs238;
    vlSelf->_mc___05Fs248 = vlSelf->_mc___05Fs238;
    vlSelf->_cp___05Fs2152 = vlSelf->_cp___05Fs2113;
    vlSelf->_cp___05Fs2161 = vlSelf->_cp___05Fs2113;
    vlSelf->_cp___05Fs2170 = vlSelf->_cp___05Fs2113;
    vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_57 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__denied) 
           == (IData)(vlSelf->_cp___05Fs2117));
    vlSelf->_cp___05Fs2130 = vlSelf->_cp___05Fs2115;
    vlSelf->_cp___05Fs2154 = vlSelf->_cp___05Fs2115;
    vlSelf->_cp___05Fs2172 = vlSelf->_cp___05Fs2115;
    vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_38 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs2117)) 
                 | (IData)(vlSelf->_cp___05Fs2115)));
    vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT____VdfgTmp_h788cf908__0 
        = ((IData)(vlSelf->_mc___05Fs249) & (IData)(vlSelf->_cp___05Fs2107));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dFirst_size 
        = (((IData)((0U != (7U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___GEN_0) 
                                  >> 3U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___GEN_1) 
                                     >> 1U)))) << 1U) 
              | (IData)((0U != (5U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___GEN_1))))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_102 
        = (0xffffffffffULL & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_pc 
                              + (((QData)((IData)((0xffU 
                                                   & (- (IData)(
                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_101 
                                                                 >> 0x1fU)))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_101)))));
    vlSelf->_mc___05Fs1417 = ((IData)(vlSelf->_mc___05Fs1402) 
                              & (((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_3) 
                                    << 3U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_2) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_1) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_0)))) 
                                  >> (3U & (IData)(
                                                   (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                    >> 0xcU)))) 
                                 & (IData)(vlSelf->_cp___05Fs9386)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_3 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_11) 
           & (IData)(vlSelf->_cp___05Fs9446));
    vlSelf->_mc___05Fs1420 = ((IData)(vlSelf->_mc___05Fs1402) 
                              & (((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_3) 
                                    << 3U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_2) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_1) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_0)))) 
                                  >> (3U & (IData)(
                                                   (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                    >> 0xcU)))) 
                                 & (IData)(vlSelf->_cp___05Fs9446)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_6 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_20) 
           & (IData)(vlSelf->_cp___05Fs9506));
    vlSelf->_mc___05Fs1423 = ((IData)(vlSelf->_mc___05Fs1402) 
                              & (((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_3) 
                                    << 3U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_2) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_1) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_0)))) 
                                  >> (3U & (IData)(
                                                   (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                    >> 0xcU)))) 
                                 & (IData)(vlSelf->_cp___05Fs9506)));
    vlSelf->_cp___05Fs2255 = (1U & (~ (IData)(vlSelf->_mc___05Fs264)));
    vlSelf->_cp___05Fs2658 = vlSelf->_cp___05Fs2381;
    vlSelf->_cp___05Fs2472 = ((IData)(vlSelf->_cp___05Fs2381) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT__d_first_counter)));
    vlSelf->_cp___05Fs2749 = ((IData)(vlSelf->_cp___05Fs2381) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT__d_first_counter)));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_63 
        = ((IData)(vlSelf->_cp___05Fs2381) & (IData)(vlSelf->_mc___05Fs259));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_63 
        = ((IData)(vlSelf->_cp___05Fs2381) & (IData)(vlSelf->_mc___05Fs272));
    vlSelf->_cp___05Fs2182 = ((IData)(vlSelf->_cp___05Fs1991) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__a_first_counter)));
    vlSelf->_cp___05Fs2211 = ((IData)(vlSelf->_cp___05Fs1991) 
                              & (IData)(vlSelf->_mc___05Fs244));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___io_nack_mem_output 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__write_port_busy) 
           | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_37) 
               & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wen))) 
              | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_inFlight)));
    vlSelf->_cp___05Fs9754 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_reg_valid) 
                              & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_inFlight)) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_37)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_4 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_14) 
           & (IData)(vlSelf->_cp___05Fs9466));
    vlSelf->_mc___05Fs1421 = ((IData)(vlSelf->_mc___05Fs1402) 
                              & (((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_valid_3) 
                                    << 3U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_valid_2) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_valid_1) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_valid_0)))) 
                                  >> (3U & (IData)(
                                                   (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                    >> 0xcU)))) 
                                 & (IData)(vlSelf->_cp___05Fs9466)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_1 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_5) 
           & (IData)(vlSelf->_cp___05Fs9406));
    vlSelf->_mc___05Fs1418 = ((IData)(vlSelf->_mc___05Fs1402) 
                              & (((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_3) 
                                    << 3U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_2) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_1) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_0)))) 
                                  >> (3U & (IData)(
                                                   (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                    >> 0xcU)))) 
                                 & (IData)(vlSelf->_cp___05Fs9406)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_2 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_8) 
           & (IData)(vlSelf->_cp___05Fs9426));
    vlSelf->_mc___05Fs1419 = ((IData)(vlSelf->_mc___05Fs1402) 
                              & (((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_3) 
                                    << 3U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_2) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_1) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_0)))) 
                                  >> (3U & (IData)(
                                                   (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                    >> 0xcU)))) 
                                 & (IData)(vlSelf->_cp___05Fs9426)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT___dcmp_io_lt 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__ordered) 
           & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__bothZeros)) 
              & (((~ vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U]) 
                  & (IData)(vlSelf->_mc___05Fs1795)) 
                 | ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__bothInfs)) 
                    & (((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__common_ltMags) 
                            | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__common_eqMags))) 
                        & (IData)(vlSelf->_mc___05Fs1795)) 
                       | ((~ vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U]) 
                          & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__common_ltMags)))))));
    vlSelf->_mc___05Fs1816 = vlSelf->_mc___05Fs1809;
    vlSelf->_mc___05Fs1824 = vlSelf->_mc___05Fs1809;
    vlSelf->_mc___05Fs1831 = vlSelf->_mc___05Fs1809;
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_5 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_17) 
           & (IData)(vlSelf->_cp___05Fs9486));
    vlSelf->_mc___05Fs1422 = ((IData)(vlSelf->_mc___05Fs1402) 
                              & (((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_valid_3) 
                                    << 3U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_valid_2) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_valid_1) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_valid_0)))) 
                                  >> (3U & (IData)(
                                                   (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                    >> 0xcU)))) 
                                 & (IData)(vlSelf->_cp___05Fs9486)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_7 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_23) 
           & (IData)(vlSelf->_cp___05Fs9526));
    vlSelf->_mc___05Fs1424 = ((IData)(vlSelf->_mc___05Fs1402) 
                              & (((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_3) 
                                    << 3U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_2) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_1) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_0)))) 
                                  >> (3U & (IData)(
                                                   (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                    >> 0xcU)))) 
                                 & (IData)(vlSelf->_cp___05Fs9526)));
    vlSelf->_mc___05Fs1490 = (1U & ((~ (IData)(vlSelf->_mc___05Fs1489)) 
                                    & (~ (IData)(vlSelf->_mc___05Fs1486))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPageRepl 
        = (0xffU & (((0x3eU & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pageHit) 
                               << 1U)) | (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pageHit) 
                                                >> 5U))) 
                    | ((IData)(vlSelf->_mc___05Fs1486)
                        ? 0U : ((IData)(1U) << (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__nextPageRepl)))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExpQuot_S_div 
        = (0x7ffU & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_expOut) 
                     + ((0x700U & ((- (IData)((1U & 
                                               ((IData)(vlSelf->__VdfgTmp_ha65f3c6d__0) 
                                                >> 8U)))) 
                                   << 8U)) | (0xffU 
                                              & (~ (IData)(vlSelf->__VdfgTmp_ha65f3c6d__0))))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_a_isNaN 
        = (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_expOut))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_a_sig 
        = (((IData)((0U != (7U & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_expOut) 
                                  >> 6U)))) << 0x17U) 
           | (0x7fffffU & ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                            << 3U) | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U] 
                                      >> 0x1dU))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_isSubnormal 
        = ((1U == (7U & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_expOut) 
                         >> 6U))) | (IData)(((0x80U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_expOut))) 
                                             & (2U 
                                                > (0x7fU 
                                                   & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_expOut))))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_isNormal 
        = ((IData)(((0x80U == (0x180U & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_expOut))) 
                    & (2U <= (0x7fU & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_expOut))))) 
           | (2U == (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_expOut) 
                           >> 7U))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_isInf 
        = (IData)((0x180U == (0x1c0U & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_expOut))));
    vlSelf->_mc___05Fs2185 = (1U & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_expOut));
    vlSelf->_mc___05Fs2260 = vlSelf->_mc___05Fs2253;
    vlSelf->_mc___05Fs1818 = vlSelf->_mc___05Fs1811;
    vlSelf->_mc___05Fs1826 = vlSelf->_mc___05Fs1811;
    vlSelf->_mc___05Fs1833 = vlSelf->_mc___05Fs1811;
    vlSelf->_mc___05Fs2256 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__oddSqrt_S)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady));
    vlSelf->_mc___05Fs2257 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__oddSqrt_S));
    vlSelf->_mc___05Fs1813 = ((~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U] 
                                  >> 0x1dU)) & (3U 
                                                == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT___GEN_1)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & ((~ (IData)(vlSelf->_mc___05Fs2230)) 
                 & (~ ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
                       | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z)))));
    vlSelf->_mc___05Fs2863 = (0xfffU == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_78));
    vlSelf->_mc___05Fs2862 = (0x7ffU == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_77));
    vlSelf->_cp___05Fs9574 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_valid_0) 
                              & ((IData)(vlSelf->_cp___05Fs9579) 
                                 & ((IData)(vlSelf->_cp___05Fs9575) 
                                    & (((IData)(vlSelf->_mc___05Fs1400) 
                                        | (0U == (0x1ffU 
                                                  & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_46 
                                                     >> 9U)))) 
                                       & ((IData)(vlSelf->_mc___05Fs1401) 
                                          | (0U == 
                                             (0x1ffU 
                                              & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_46)))))));
    vlSelf->_mc___05Fs2829 = vlSelf->_mc___05Fs2828;
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___io_dmem_req_bits_dv_output 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_v) 
            | ((IData)(vlSelf->_mc___05Fs2828) & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_mpv))) 
           | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_hls));
    vlSelf->_cp___05Fs9825 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___io_singleStep_output)));
    vlSelf->_cp___05Fs9546 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_valid_0) 
                              & ((IData)(vlSelf->_cp___05Fs9551) 
                                 & ((IData)(vlSelf->_cp___05Fs9547) 
                                    & ((IData)(vlSelf->_mc___05Fs1407) 
                                       | (0U == (0x1ffU 
                                                 & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_26))))));
    vlSelf->_cp___05Fs9553 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_valid_0) 
                              & ((IData)(vlSelf->_cp___05Fs9558) 
                                 & ((IData)(vlSelf->_cp___05Fs9554) 
                                    & ((IData)(vlSelf->_mc___05Fs1409) 
                                       | (0U == (0x1ffU 
                                                 & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_29))))));
    vlSelf->_cp___05Fs9560 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_valid_0) 
                              & ((IData)(vlSelf->_cp___05Fs9565) 
                                 & ((IData)(vlSelf->_cp___05Fs9561) 
                                    & ((IData)(vlSelf->_mc___05Fs1411) 
                                       | (0U == (0x1ffU 
                                                 & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_32))))));
    vlSelf->_cp___05Fs9567 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_valid_0) 
                              & ((IData)(vlSelf->_cp___05Fs9572) 
                                 & ((IData)(vlSelf->_cp___05Fs9568) 
                                    & ((IData)(vlSelf->_mc___05Fs1413) 
                                       | (0U == (0x1ffU 
                                                 & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_35))))));
    vlSelf->_mc___05Fs2854 = (IData)(((0x400000U == 
                                       (0x700000U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst)) 
                                      & (0x1ffU == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h4df70065__0))));
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h6f659a34__0 
        = ((0x200U & ((~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                          >> 0x16U)) << 9U)) | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h4df70065__0));
    vlSelf->_mc___05Fs2952 = ((~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                  >> 0x15U)) & (0x3ffU 
                                                == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h64de4201__0)));
    vlSelf->_mc___05Fs2953 = (IData)(((0x200000U == 
                                       (0x300000U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst)) 
                                      & (0x3ffU == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h64de4201__0))));
    vlSelf->_cp___05Fs10602 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_e_q__DOT__empty)));
    if (vlSelf->_mc___05Fs2079) {
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb665f660__0 
            = (0x1ffffffU & (~ vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb2fc1c1b__0));
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___GEN_1 
            = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb2fc1c1b__0;
    } else {
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb665f660__0 = 0x1ffffffU;
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___GEN_1 = 0U;
    }
    vlSelf->_mc___05Fs2803 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_24 
                                            >> 0x26U)));
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
    vlSelf->_mc___05Fs1012 = ((IData)(vlSelf->_mc___05Fs997) 
                              & (((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_0_valid_3) 
                                    << 3U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_0_valid_2) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_0_valid_1) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_0_valid_0)))) 
                                  >> (3U & (IData)(
                                                   (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                    >> 0xcU)))) 
                                 & (IData)(vlSelf->_cp___05Fs8647)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sector_hits_3 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT___GEN_11) 
           & (IData)(vlSelf->_cp___05Fs8707));
    vlSelf->_mc___05Fs1015 = ((IData)(vlSelf->_mc___05Fs997) 
                              & (((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_3_valid_3) 
                                    << 3U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_3_valid_2) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_3_valid_1) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_3_valid_0)))) 
                                  >> (3U & (IData)(
                                                   (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                    >> 0xcU)))) 
                                 & (IData)(vlSelf->_cp___05Fs8707)));
    vlSelf->_mc___05Fs1842 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__excSign)));
    vlSelf->_mc___05Fs1799 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__excSign)));
    vlSelf->_mc___05Fs1798 = ((IData)(vlSelf->_mc___05Fs1797) 
                              == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__excSign));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sector_hits_6 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT___GEN_20) 
           & (IData)(vlSelf->_cp___05Fs8767));
    vlSelf->_mc___05Fs1018 = ((IData)(vlSelf->_mc___05Fs997) 
                              & (((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_6_valid_3) 
                                    << 3U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_6_valid_2) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_6_valid_1) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_6_valid_0)))) 
                                  >> (3U & (IData)(
                                                   (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                    >> 0xcU)))) 
                                 & (IData)(vlSelf->_cp___05Fs8767)));
    vlSelf->_mc___05Fs3011 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___GEN_3)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & ((~ (IData)(vlSelf->_mc___05Fs2291)) 
                 & (~ ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
                       | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z)))));
    vlSelf->_cp___05Fs4441 = vlSelf->_cp___05Fs4426;
    vlSelf->_cp___05Fs4443 = vlSelf->_cp___05Fs4428;
    vlSelf->_cp___05Fs4497 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_49)));
    vlSelf->_cp___05Fs4499 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_50)));
    vlSelf->_cp___05Fs4501 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_51)));
    vlSelf->_cp___05Fs4503 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_52)));
    vlSelf->_cp___05Fs4505 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_53)));
    vlSelf->_cp___05Fs4528 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_75)));
    vlSelf->_cp___05Fs4547 = (1U & (~ vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_84));
    vlSelf->_cp___05Fs4552 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_85)));
    vlSelf->_cp___05Fs4424 = vlSelf->_cp___05Fs4411;
    vlSelf->_cp___05Fs4439 = vlSelf->_cp___05Fs4411;
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_73 
        = (((7U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
            == ((0x17U >= (0x1fU & ((IData)(3U) * (7U 
                                                   & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_56[0U] 
                                                      >> 1U)))))
                 ? (7U & (0x911240U >> (0x1fU & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_56[0U] 
                                                     >> 1U))))))
                 : 0U)) | ((7U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
                           == ((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_56[0U] 
                                                       >> 1U)))))
                                ? (7U & (0x951240U 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_56[0U] 
                                                      >> 1U))))))
                                : 0U)));
    vlSelf->_mc___05Fs536 = vlSelf->_mc___05Fs375;
    vlSelf->_mc___05Fs540 = vlSelf->_mc___05Fs375;
    vlSelf->_mc___05Fs544 = vlSelf->_mc___05Fs375;
    vlSelf->_cp___05Fs4409 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__source_ok_1)));
    vlSelf->_cp___05Fs4452 = vlSelf->_cp___05Fs4413;
    vlSelf->_cp___05Fs4461 = vlSelf->_cp___05Fs4413;
    vlSelf->_cp___05Fs4470 = vlSelf->_cp___05Fs4413;
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h788cf908__0 
        = ((IData)(vlSelf->_mc___05Fs545) & (IData)(vlSelf->_cp___05Fs4407));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_54 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__denied) 
           == (IData)(vlSelf->_cp___05Fs4417));
    vlSelf->_cp___05Fs4430 = vlSelf->_cp___05Fs4415;
    vlSelf->_cp___05Fs4454 = vlSelf->_cp___05Fs4415;
    vlSelf->_cp___05Fs4472 = vlSelf->_cp___05Fs4415;
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_35 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs4417)) 
                 | (IData)(vlSelf->_cp___05Fs4415)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sector_hits_4 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT___GEN_14) 
           & (IData)(vlSelf->_cp___05Fs8727));
    vlSelf->_mc___05Fs1016 = ((IData)(vlSelf->_mc___05Fs997) 
                              & (((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_4_valid_3) 
                                    << 3U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_4_valid_2) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_4_valid_1) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_4_valid_0)))) 
                                  >> (3U & (IData)(
                                                   (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                    >> 0xcU)))) 
                                 & (IData)(vlSelf->_cp___05Fs8727)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sector_hits_1 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT___GEN_5) 
           & (IData)(vlSelf->_cp___05Fs8667));
    vlSelf->_mc___05Fs1013 = ((IData)(vlSelf->_mc___05Fs997) 
                              & (((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_1_valid_3) 
                                    << 3U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_1_valid_2) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_1_valid_1) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_1_valid_0)))) 
                                  >> (3U & (IData)(
                                                   (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                    >> 0xcU)))) 
                                 & (IData)(vlSelf->_cp___05Fs8667)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sector_hits_2 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT___GEN_8) 
           & (IData)(vlSelf->_cp___05Fs8687));
    vlSelf->_mc___05Fs1014 = ((IData)(vlSelf->_mc___05Fs997) 
                              & (((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_2_valid_3) 
                                    << 3U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_2_valid_2) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_2_valid_1) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_2_valid_0)))) 
                                  >> (3U & (IData)(
                                                   (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                    >> 0xcU)))) 
                                 & (IData)(vlSelf->_cp___05Fs8687)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sector_hits_5 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT___GEN_17) 
           & (IData)(vlSelf->_cp___05Fs8747));
    vlSelf->_mc___05Fs1017 = ((IData)(vlSelf->_mc___05Fs997) 
                              & (((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_5_valid_3) 
                                    << 3U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_5_valid_2) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_5_valid_1) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_5_valid_0)))) 
                                  >> (3U & (IData)(
                                                   (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                    >> 0xcU)))) 
                                 & (IData)(vlSelf->_cp___05Fs8747)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sector_hits_7 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT___GEN_23) 
           & (IData)(vlSelf->_cp___05Fs8787));
    vlSelf->_mc___05Fs1019 = ((IData)(vlSelf->_mc___05Fs997) 
                              & (((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_7_valid_3) 
                                    << 3U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_7_valid_2) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_7_valid_1) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sectored_entries_0_7_valid_0)))) 
                                  >> (3U & (IData)(
                                                   (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                    >> 0xcU)))) 
                                 & (IData)(vlSelf->_cp___05Fs8787)));
    vlSelf->_mc___05Fs511 = vlSelf->_mc___05Fs507;
    vlSelf->_cp___05Fs4043 = vlSelf->_cp___05Fs4026;
    vlSelf->_cp___05Fs4047 = vlSelf->_cp___05Fs4030;
    vlSelf->_cp___05Fs4051 = vlSelf->_cp___05Fs4032;
    vlSelf->_cp___05Fs4206 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_38)));
    vlSelf->_cp___05Fs4208 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_39)));
    vlSelf->_cp___05Fs4210 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_40)));
    vlSelf->_cp___05Fs4212 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_41)));
    vlSelf->_cp___05Fs4214 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_42)));
    vlSelf->_cp___05Fs4236 = (1U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_56);
    vlSelf->_cp___05Fs4244 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_65)));
    vlSelf->_cp___05Fs4246 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_66)));
    vlSelf->_cp___05Fs4053 = vlSelf->_cp___05Fs4034;
    vlSelf->_cp___05Fs4068 = vlSelf->_cp___05Fs4034;
    vlSelf->_cp___05Fs4125 = vlSelf->_cp___05Fs4034;
    vlSelf->_cp___05Fs4049 = (1U & (~ (IData)(vlSelf->_cp___05Fs4064)));
    vlSelf->_cp___05Fs4077 = vlSelf->_cp___05Fs4064;
    vlSelf->_cp___05Fs4088 = vlSelf->_cp___05Fs4064;
    vlSelf->_cp___05Fs4028 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_7));
    vlSelf->_cp___05Fs4058 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_11)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_12 
        = (IData)(((0x4180U == (0x7fc0U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                   & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_11)));
    vlSelf->_cp___05Fs4024 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__source_ok)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_16 
        = ((0xdU > (0xfU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U))) & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__source_ok));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc) 
           | (IData)(((0x40U == (0xc0U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_2))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc) 
           | (IData)(((0x40U == (0xc0U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_3))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_1) 
           | (IData)(((0x40U == (0xc0U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_4))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_1) 
           | (IData)(((0x40U == (0xc0U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_5))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__priv_rw_ok 
        = (0x1fffU & (((IData)(vlSelf->_mc___05Fs1026)
                        ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT___GEN_77)
                        : 0U) | ((IData)(vlSelf->_mc___05Fs1027)
                                  ? (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT___GEN_77))
                                  : 0U)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT___GEN_3 
        = ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT___GEN_2) 
             & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_address 
                        >> 2U))) << 3U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT___GEN_2) 
                                            << 2U) 
                                           | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT___GEN_1) 
                                               << 1U) 
                                              | (1U 
                                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch)))));
    vlSelf->_mc___05Fs2593 = (1U & ((~ (IData)(vlSelf->_cp___05Fs9380)) 
                                    | (IData)(vlSelf->_cp___05Fs8638)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_102 
        = (QData)((IData)((0xfU & (((IData)(vlSelf->_mc___05Fs2816)
                                     ? 2U : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)) 
                                   - (IData)(8U)))));
    vlSelf->_cp___05Fs2660 = vlSelf->_cp___05Fs2383;
    vlSelf->_cp___05Fs2672 = vlSelf->_cp___05Fs2395;
    vlSelf->_cp___05Fs2687 = vlSelf->_cp___05Fs2410;
    vlSelf->_cp___05Fs2702 = vlSelf->_cp___05Fs2425;
    vlSelf->_cp___05Fs2711 = vlSelf->_cp___05Fs2434;
    vlSelf->_cp___05Fs2720 = vlSelf->_cp___05Fs2443;
    vlSelf->_cp___05Fs2804 = vlSelf->_cp___05Fs2527;
    vlSelf->_cp___05Fs2474 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_48)));
    vlSelf->_cp___05Fs2476 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_49)));
    vlSelf->_cp___05Fs2478 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_50)));
    vlSelf->_cp___05Fs2480 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_51)));
    vlSelf->_cp___05Fs2482 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_52)));
    vlSelf->_cp___05Fs2505 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_75)));
    vlSelf->_cp___05Fs2524 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_84)));
    vlSelf->_cp___05Fs2529 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_85)));
    vlSelf->_cp___05Fs2751 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_48)));
    vlSelf->_cp___05Fs2753 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_49)));
    vlSelf->_cp___05Fs2755 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_50)));
    vlSelf->_cp___05Fs2757 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_51)));
    vlSelf->_cp___05Fs2759 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_52)));
    vlSelf->_cp___05Fs2782 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_75)));
    vlSelf->_cp___05Fs2801 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_84)));
    vlSelf->_cp___05Fs2806 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_85)));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_73 
        = (((7U & vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
            == ((0x17U >= (0x1fU & ((IData)(3U) * (7U 
                                                   & (IData)(
                                                             (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_55 
                                                              >> 1U))))))
                 ? (7U & (0x911240U >> (0x1fU & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_55 
                                                             >> 1U)))))))
                 : 0U)) | ((7U & vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
                           == ((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_55 
                                                               >> 1U))))))
                                ? (7U & (0x951240U 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & (IData)(
                                                             (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_55 
                                                              >> 1U)))))))
                                : 0U)));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_73 
        = (((7U & vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
            == ((0x17U >= (0x1fU & ((IData)(3U) * (7U 
                                                   & (IData)(
                                                             (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_55 
                                                              >> 1U))))))
                 ? (7U & (0x911240U >> (0x1fU & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_55 
                                                             >> 1U)))))))
                 : 0U)) | ((7U & vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
                           == ((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_55 
                                                               >> 1U))))))
                                ? (7U & (0x951240U 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & (IData)(
                                                             (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_55 
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
    vlSelf->l2_frontend_bus_axi4_0_r_bits_id = ((0xfeU 
                                                 & (((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4frag_auto_in_r_bits_id)
                                                      ? (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT___ram_ext_R0_data)
                                                      : (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue4_BundleMap__DOT___ram_ext_R0_data)) 
                                                    << 1U)) 
                                                | (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4frag_auto_in_r_bits_id));
    vlSelf->_cp___05Fs2671 = vlSelf->_cp___05Fs2394;
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_53 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT__denied) 
           == (IData)(vlSelf->_cp___05Fs2394));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_53 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT__denied) 
           == (IData)(vlSelf->_cp___05Fs2394));
    vlSelf->_cp___05Fs2407 = vlSelf->_cp___05Fs2392;
    vlSelf->_cp___05Fs2431 = vlSelf->_cp___05Fs2392;
    vlSelf->_cp___05Fs2449 = vlSelf->_cp___05Fs2392;
    vlSelf->_cp___05Fs2669 = vlSelf->_cp___05Fs2392;
    vlSelf->_cp___05Fs2684 = vlSelf->_cp___05Fs2392;
    vlSelf->_cp___05Fs2708 = vlSelf->_cp___05Fs2392;
    vlSelf->_cp___05Fs2726 = vlSelf->_cp___05Fs2392;
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_35 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs2394)) 
                 | (IData)(vlSelf->_cp___05Fs2392)));
    vlSelf->_mc___05Fs294 = ((IData)(vlSelf->_cp___05Fs2392) 
                             | (IData)(vlSelf->_cp___05Fs2394));
    vlSelf->_cp___05Fs2661 = vlSelf->_cp___05Fs2384;
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h788cf908__0 
        = ((IData)(vlSelf->_mc___05Fs262) & (IData)(vlSelf->_cp___05Fs2384));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT____VdfgTmp_h788cf908__0 
        = ((IData)(vlSelf->_mc___05Fs275) & (IData)(vlSelf->_cp___05Fs2384));
    vlSelf->l2_frontend_bus_axi4_0_b_bits_id = ((0xfeU 
                                                 & (((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___q_b_deq_q_io_deq_bits_id)
                                                      ? (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT___ram_ext_R0_data)
                                                      : (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT___ram_ext_R0_data)) 
                                                    << 1U)) 
                                                | (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___q_b_deq_q_io_deq_bits_id));
    vlSelf->_mc___05Fs316 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___q_b_deq_q_io_deq_bits_id)
                                    ? ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT___ram_ext_R0_data) 
                                       >> 7U) : ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT___ram_ext_R0_data) 
                                                 >> 7U)));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__b_allow 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___q_b_deq_q_io_deq_bits_id)
             ? (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__b_count_1)
             : (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__b_count_0)) 
           != ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___q_b_deq_q_io_deq_bits_id)
                ? (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__w_count_1)
                : (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__w_count_0)));
    vlSelf->_mc___05Fs258 = vlSelf->_mc___05Fs254;
    vlSelf->_mc___05Fs261 = vlSelf->_mc___05Fs254;
    vlSelf->_mc___05Fs267 = vlSelf->_mc___05Fs254;
    vlSelf->_mc___05Fs271 = vlSelf->_mc___05Fs254;
    vlSelf->_mc___05Fs274 = vlSelf->_mc___05Fs254;
    vlSelf->_mc___05Fs280 = vlSelf->_mc___05Fs254;
    vlSelf->_mc___05Fs295 = vlSelf->_mc___05Fs254;
    vlSelf->_mc___05Fs297 = vlSelf->_mc___05Fs254;
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT____Vcellinp__nodeIn_r_deq_q__io_enq_bits_last 
        = ((1U == (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__d_last_counter)) 
           | (0U == ((IData)(vlSelf->_mc___05Fs254)
                      ? (0x1ffU & (~ (0xffffffU & (
                                                   ((IData)(0xfffU) 
                                                    << 
                                                    (0xfU 
                                                     & (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 5U))) 
                                                   >> 3U))))
                      : 0U)));
    vlSelf->_cp___05Fs2827 = ((IData)(vlSelf->_cp___05Fs2381) 
                              & (IData)(vlSelf->_mc___05Fs254));
    vlSelf->_cp___05Fs2833 = ((~ (IData)(vlSelf->_mc___05Fs254)) 
                              & (IData)(vlSelf->_cp___05Fs2381));
    vlSelf->_cp___05Fs2532 = ((IData)(vlSelf->_mc___05Fs254)
                               ? (IData)(vlSelf->_cp___05Fs2828)
                               : (IData)(vlSelf->_cp___05Fs2834));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__pf 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_pte_v) 
           & (0U != (0x3ffU & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                       >> 0x36U)))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_9 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_pte_v) 
           & (IData)(((0ULL == (0xdeULL & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data)) 
                      & (~ (IData)((0U != (0x3ffU & (IData)(
                                                            (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                             >> 0x36U)))))))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_76 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_pte_v) 
           & (((IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                        >> 1U)) | (IData)((8ULL == 
                                           (0xcULL 
                                            & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data)))) 
              & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                         >> 6U))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____Vcellinp__fq__io_enq_bits_xcpt_ae_inst 
        = ((IData)(vlSelf->_cp___05Fs9653) | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_tlb_resp_ae_inst));
    vlSelf->_cp___05Fs2021 = vlSelf->_cp___05Fs2004;
    vlSelf->_cp___05Fs2025 = vlSelf->_cp___05Fs2008;
    vlSelf->_cp___05Fs2029 = vlSelf->_cp___05Fs2010;
    vlSelf->_cp___05Fs2184 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_44)));
    vlSelf->_cp___05Fs2186 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_45)));
    vlSelf->_cp___05Fs2188 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_46)));
    vlSelf->_cp___05Fs2190 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_47)));
    vlSelf->_cp___05Fs2192 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_48)));
    vlSelf->_cp___05Fs2214 = (1U & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_66));
    vlSelf->_cp___05Fs2222 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_75)));
    vlSelf->_cp___05Fs2224 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_76)));
    vlSelf->_mc___05Fs239 = vlSelf->_mc___05Fs237;
    vlSelf->_mc___05Fs243 = vlSelf->_mc___05Fs237;
    vlSelf->_cp___05Fs1998 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_8)));
    vlSelf->_cp___05Fs2031 = vlSelf->_cp___05Fs2012;
    vlSelf->_cp___05Fs2046 = vlSelf->_cp___05Fs2012;
    vlSelf->_cp___05Fs2103 = vlSelf->_cp___05Fs2012;
    vlSelf->_cp___05Fs2027 = (1U & (~ (IData)(vlSelf->_cp___05Fs2042)));
    vlSelf->_cp___05Fs2055 = vlSelf->_cp___05Fs2042;
    vlSelf->_cp___05Fs2066 = vlSelf->_cp___05Fs2042;
    vlSelf->_cp___05Fs2006 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_2));
    vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_25 
        = ((0xdU > (0xfU & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                            >> 6U))) & ((4U > (0xfU 
                                               & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                  >> 6U))) 
                                        & ((0U == (0xfffffU 
                                                   & ((vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[1U] 
                                                       << 6U) 
                                                      | (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                         >> 0x1aU)))) 
                                           | ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_12) 
                                              | ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_15) 
                                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_16))))));
    ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_13 
        = ((0xdU > (0xfU & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                            >> 6U))) & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_12));
    vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc) 
           | (IData)(((0x40U == (0xc0U & vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U])) 
                      & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__mask_eq_2))));
    vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc) 
           | (IData)(((0x40U == (0xc0U & vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U])) 
                      & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__mask_eq_3))));
    vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc_1) 
           | (IData)(((0x40U == (0xc0U & vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U])) 
                      & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__mask_eq_4))));
    vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc_1) 
           | (IData)(((0x40U == (0xc0U & vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U])) 
                      & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__mask_eq_5))));
    if (vlSelf->_mc___05Fs2449) {
        vlSelf->_mc___05Fs2450 = 1U;
        vlSelf->_cp___05Fs9797 = 1U;
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_4 
            = (0x7ffffffU & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                     >> 0xaU)));
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__invalid_paddr 
            = (0U != (0x1ffffU & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                          >> 0x25U))));
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__invalid_gpa 
            = (0U != (0x7fffU & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                         >> 0x27U))));
    } else {
        vlSelf->_mc___05Fs2450 = 0U;
        vlSelf->_cp___05Fs9797 = 0U;
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_4 
            = (0x7ffffffU & (0xfffffU & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                 >> 0xaU))));
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__invalid_paddr 
            = (0U != (0xffffffU & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                           >> 0x1eU))));
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__invalid_gpa = 0U;
    }
    vlSelf->_cp___05Fs12534 = ((~ (IData)(vlSelf->_cp___05Fs12426)) 
                               & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_36));
    vlSelf->_cp___05Fs8028 = vlSelf->_cp___05Fs10286;
    vlSelf->_cp___05Fs8031 = vlSelf->_cp___05Fs10289;
    vlSelf->_cp___05Fs8041 = vlSelf->_cp___05Fs10299;
    vlSelf->_cp___05Fs8046 = vlSelf->_cp___05Fs10304;
    vlSelf->_cp___05Fs8061 = vlSelf->_cp___05Fs10319;
    vlSelf->_cp___05Fs8074 = vlSelf->_cp___05Fs10332;
    vlSelf->_cp___05Fs8087 = vlSelf->_cp___05Fs10345;
    vlSelf->_cp___05Fs8100 = vlSelf->_cp___05Fs10358;
    vlSelf->_cp___05Fs8113 = vlSelf->_cp___05Fs10371;
    vlSelf->_cp___05Fs8248 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_105)));
    vlSelf->_cp___05Fs8250 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_106)));
    vlSelf->_cp___05Fs8252 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_107)));
    vlSelf->_cp___05Fs8254 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_108)));
    vlSelf->_cp___05Fs8256 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_109)));
    vlSelf->_cp___05Fs10506 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_112)));
    vlSelf->_cp___05Fs10508 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_113)));
    vlSelf->_cp___05Fs10510 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_114)));
    vlSelf->_cp___05Fs10512 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_115)));
    vlSelf->_cp___05Fs10514 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_116)));
    vlSelf->_cp___05Fs10318 = vlSelf->_cp___05Fs10303;
    vlSelf->_cp___05Fs10383 = vlSelf->_cp___05Fs10303;
    vlSelf->_cp___05Fs8045 = vlSelf->_cp___05Fs10303;
    vlSelf->_cp___05Fs8060 = vlSelf->_cp___05Fs10303;
    vlSelf->_cp___05Fs8125 = vlSelf->_cp___05Fs10303;
    vlSelf->_cp___05Fs10329 = vlSelf->_cp___05Fs10314;
    vlSelf->_cp___05Fs10342 = vlSelf->_cp___05Fs10314;
    vlSelf->_cp___05Fs8056 = vlSelf->_cp___05Fs10314;
    vlSelf->_cp___05Fs8071 = vlSelf->_cp___05Fs10314;
    vlSelf->_cp___05Fs8084 = vlSelf->_cp___05Fs10314;
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__legal_source 
        = ((((IData)(vlSelf->_mc___05Fs945) << 1U) 
            | (1U == (3U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_b_q__DOT___ram_ext_R0_data[0U] 
                            >> 9U)))) == (3U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_b_q__DOT___ram_ext_R0_data[0U] 
                                                >> 9U)));
    vlSelf->_cp___05Fs10297 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_54));
    __VdfgTmp_ha89e5ec9__0 = (IData)((((0xc0U == (0x1e0U 
                                                  & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_b_q__DOT___ram_ext_R0_data[0U])) 
                                       & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__address_ok)) 
                                      & (0xdU > (0xfU 
                                                 & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_b_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 5U)))));
    vlSelf->_cp___05Fs10293 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__address_ok)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_16 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_14) 
           | (IData)(((0x20U == (0x60U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_b_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_16))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_17 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_14) 
           | (IData)(((0x20U == (0x60U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_b_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_17))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_18 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_15) 
           | (IData)(((0x20U == (0x60U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_b_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_18))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_19 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_15) 
           | (IData)(((0x20U == (0x60U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_b_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_19))));
    vlSelf->_cp___05Fs8026 = ((IData)(vlSelf->_mc___05Fs944) 
                              & (IData)(vlSelf->_cp___05Fs10284));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_7 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l)) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_6 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l)) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_5 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l)) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_4 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l)) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_3 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l)) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_2 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l)) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_1 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l)) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore 
        = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l)) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->_cp___05Fs8835 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__special_entry_valid_0) 
                              & ((IData)(vlSelf->_cp___05Fs8840) 
                                 & ((IData)(vlSelf->_cp___05Fs8836) 
                                    & (((IData)(vlSelf->_mc___05Fs1010) 
                                        | (0U == (0x1ffU 
                                                  & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT___GEN_46 
                                                     >> 9U)))) 
                                       & ((IData)(vlSelf->_mc___05Fs1011) 
                                          | (0U == 
                                             (0x1ffU 
                                              & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT___GEN_46)))))));
    vlSelf->_cp___05Fs8807 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_valid_0) 
                              & ((IData)(vlSelf->_cp___05Fs8812) 
                                 & ((IData)(vlSelf->_cp___05Fs8808) 
                                    & ((IData)(vlSelf->_mc___05Fs1002) 
                                       | (0U == (0x1ffU 
                                                 & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT___GEN_26))))));
    vlSelf->_cp___05Fs8814 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_valid_0) 
                              & ((IData)(vlSelf->_cp___05Fs8819) 
                                 & ((IData)(vlSelf->_cp___05Fs8815) 
                                    & ((IData)(vlSelf->_mc___05Fs1004) 
                                       | (0U == (0x1ffU 
                                                 & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT___GEN_29))))));
    vlSelf->_cp___05Fs8821 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_valid_0) 
                              & ((IData)(vlSelf->_cp___05Fs8826) 
                                 & ((IData)(vlSelf->_cp___05Fs8822) 
                                    & ((IData)(vlSelf->_mc___05Fs1006) 
                                       | (0U == (0x1ffU 
                                                 & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT___GEN_32))))));
    vlSelf->_cp___05Fs8828 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_valid_0) 
                              & ((IData)(vlSelf->_cp___05Fs8833) 
                                 & ((IData)(vlSelf->_cp___05Fs8829) 
                                    & ((IData)(vlSelf->_mc___05Fs1008) 
                                       | (0U == (0x1ffU 
                                                 & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT___GEN_35))))));
    vlSelf->_mc___05Fs463 = (1U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT___GEN_67));
    ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT___GEN_74 
        = (0x3fU & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT___GEN_67) 
                     >> 1U) | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT___GEN_67)));
    vlSelf->_mc___05Fs455 = (1U & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT___GEN_66));
    ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT___GEN_68 
        = (0x3fU & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT___GEN_66) 
                     >> 1U) | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT___GEN_66)));
    vlSelf->_cp___05Fs2195 = ((IData)(vlSelf->_cp___05Fs2104) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__d_first_counter)));
    ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_67 
        = ((IData)(vlSelf->_cp___05Fs2104) & (IData)(vlSelf->_mc___05Fs246));
    vlSelf->_cp___05Fs1060 = (1U & (~ (IData)(vlSelf->_mc___05Fs251)));
    vlSelf->_cp___05Fs9667 = vlSelf->_cp___05Fs9659;
    vlSelf->_cp___05Fs9677 = vlSelf->_cp___05Fs9659;
    if (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_13) {
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__pte_addr_vpn_idx 
            = (0x1ffU & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_2);
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__pmpHomogeneous_pgMask = 0xfffff000U;
    } else if (vlSelf->_mc___05Fs2452) {
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__pte_addr_vpn_idx 
            = (0x1ffU & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_2 
                         >> 9U));
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__pmpHomogeneous_pgMask = 0xffe00000U;
    } else {
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__pte_addr_vpn_idx 
            = (0x1ffU & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_2 
                         >> 0x12U));
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__pmpHomogeneous_pgMask = 0xc0000000U;
    }
    vlSelf->_cp___05Fs10066 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_mem_busy)));
    vlSelf->_mc___05Fs2991 = ((IData)(vlSelf->_cp___05Fs9966) 
                              & (((0xaffU < (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                             >> 0x14U)) 
                                  & (0xb20U > (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                               >> 0x14U))) 
                                 | ((0xb7fU < (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                               >> 0x14U)) 
                                    & (0xba0U > (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                 >> 0x14U)))));
    vlSelf->_mc___05Fs2994 = vlSelf->_mc___05Fs2813;
    vlSelf->_mc___05Fs2998 = vlSelf->_mc___05Fs2813;
    vlSelf->_mc___05Fs3000 = vlSelf->_mc___05Fs2813;
    vlSelf->_mc___05Fs2995 = vlSelf->_mc___05Fs2814;
    vlSelf->_mc___05Fs2999 = vlSelf->_mc___05Fs2814;
    vlSelf->_mc___05Fs3001 = vlSelf->_mc___05Fs2814;
    vlSelf->_cp___05Fs10009 = ((IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_wdata 
                                        >> 0x3bU)) 
                               & (((~ (IData)(vlSelf->_mc___05Fs2814)) 
                                   | (~ (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_wdata 
                                                 >> 0x3bU)))) 
                                  & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_debug) 
                                     & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_chain)) 
                                        | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode)))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_140 
        = (0xffffffffffffULL & ((((IData)(vlSelf->_mc___05Fs2813)
                                   ? (0x80000000000ULL 
                                      | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode)) 
                                          << 0x2fU) 
                                         | (QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action))))
                                   : 0ULL) | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_wdata 
                                              >> 0xcU)) 
                                & ((IData)(vlSelf->_mc___05Fs2814)
                                    ? (~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_wdata 
                                          >> 0xcU))
                                    : 0xffffffffffffULL)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_85 
        = ((IData)(vlSelf->_mc___05Fs2814) ? (~ vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_wdata)
            : 0xffffffffffffffffULL);
    vlSelf->_mc___05Fs1162 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_5) 
                              | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pma_checker___05F1) 
                                 | ((5U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
                                    | (0x17U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)))));
    vlSelf->_mc___05Fs1161 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_2) 
                              | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pma_checker___05F1));
    vlSelf->_mc___05Fs1299 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_5) 
                              | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pma_checker___05F1));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
        = (0xfffffffU & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_1)
                          ? (0xfffffU & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn))
                          : ((IData)(vlSelf->_mc___05Fs1402)
                              ? vlSelf->__VdfgTmp_h6266296d__0
                              : (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                         >> 0xcU)))));
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hb35d19a9__0 
        = (IData)(((0xa000000U == (0xe000000U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst)) 
                   & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hda0dfd17__0)));
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h1ab2a0df__0 
        = (IData)(((0U == (0xc000000U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst)) 
                   & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hda0dfd17__0)));
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h473a13d8__0 
        = (IData)(((0U == (0x1fe00000U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst)) 
                   & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hb28d4279__0)));
    vlSelf->_mc___05Fs2812 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_31 
                                            >> 0x27U)));
    vlSelf->_mc___05Fs2809 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_29 
                                            >> 0x27U)));
    vlSelf->_mc___05Fs2806 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_27 
                                            >> 0x27U)));
    vlSelf->_mc___05Fs2986 = (0x3fU == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_76));
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h5a282bfc__0 
        = ((0x200U & ((~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                          >> 0x16U)) << 9U)) | ((0x100U 
                                                 & ((~ 
                                                     (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                      >> 0x17U)) 
                                                    << 8U)) 
                                                | ((0x80U 
                                                    & ((~ 
                                                        (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                         >> 0x18U)) 
                                                       << 7U)) 
                                                   | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h1db002f0__0))));
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hafcbd1e5__0 
        = ((0x200U & ((~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                          >> 0x16U)) << 9U)) | ((0x100U 
                                                 & ((~ 
                                                     (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                      >> 0x17U)) 
                                                    << 8U)) 
                                                | ((0x80U 
                                                    & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                       >> 0x11U)) 
                                                   | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h1db002f0__0))));
    vlSelf->_mc___05Fs3260 = vlSelf->_mc___05Fs3259;
    __Vtemp_2[0U] = (IData)(vlSelf->__VdfgTmp_heaf9f40a__0);
    __Vtemp_2[1U] = (IData)((vlSelf->__VdfgTmp_heaf9f40a__0 
                             >> 0x20U));
    __Vtemp_2[2U] = 0U;
    VL_SHIFTL_WWI(84,84,5, __Vtemp_3, __Vtemp_2, (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT____VdfgTmp_h98301597__0));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__shiftedSig[0U] 
        = __Vtemp_3[0U];
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__shiftedSig[1U] 
        = __Vtemp_3[1U];
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__shiftedSig[2U] 
        = (0xfffffU & __Vtemp_3[2U]);
    __Vtemp_5[0U] = (IData)(vlSelf->__VdfgTmp_heaf9f40a__0);
    __Vtemp_5[1U] = (IData)((vlSelf->__VdfgTmp_heaf9f40a__0 
                             >> 0x20U));
    __Vtemp_5[2U] = 0U;
    __Vtemp_5[3U] = 0U;
    VL_SHIFTL_WWI(116,116,6, __Vtemp_6, __Vtemp_5, (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT____VdfgTmp_h982919f3__0));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[0U] 
        = __Vtemp_6[0U];
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[1U] 
        = __Vtemp_6[1U];
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[2U] 
        = __Vtemp_6[2U];
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[3U] 
        = (0xfffffU & __Vtemp_6[3U]);
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
        = (0x3ffffffffffffULL & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_doSubMags)
                                  ? (~ (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN)) 
                                         << 0x18U) 
                                        | (QData)((IData)(
                                                          (0xffffffU 
                                                           & (IData)(
                                                                     (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b 
                                                                      >> 0x18U)))))))
                                  : (((QData)((IData)(
                                                      (3U 
                                                       & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_highAlignedSigC 
                                                          >> 0x18U)))) 
                                      << 0x2fU) | (
                                                   ((QData)((IData)(
                                                                    (0xffffffU 
                                                                     & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN))) 
                                                    << 0x17U) 
                                                   | (QData)((IData)(
                                                                     (0x7fffffU 
                                                                      & (IData)(
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b 
                                                                                >> 0x19U)))))))));
    vlSelf->_mc___05Fs1751 = (1U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN 
                                    >> 2U));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN_1 
        = (((QData)((IData)((3U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN))) 
            << 0x31U) | ((0x1fffffffffffeULL & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b 
                                                << 1U)) 
                         | (QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_bit0AlignedSigC))));
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h3ec344f6__0 
        = (0x222U & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_8) 
                     & ((IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mideleg 
                                 >> 1U)) << 1U)));
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha17969ea__0 
        = (0xffffU & (~ ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_8)) 
                         | (0x222U & ((IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mideleg 
                                               >> 1U)) 
                                      << 1U)))));
    vlSelf->_mc___05Fs116 = ((~ (IData)(vlSelf->_mc___05Fs3401)) 
                             & (IData)(vlSelf->_mc___05Fs117));
    vlSelf->_cp___05Fs10489 = ((IData)(vlSelf->_cp___05Fs10213) 
                               & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__d_first_counter)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_133 
        = ((IData)(vlSelf->_cp___05Fs10213) & (IData)(vlSelf->_mc___05Fs3393));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_157 
        = ((IData)(vlSelf->_cp___05Fs10213) & (IData)(vlSelf->_mc___05Fs3397));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h4313730d__0 
        = ((IData)(vlSelf->_mc___05Fs1266) | (IData)(vlSelf->_mc___05Fs1265));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_79 
        = ((IData)(vlSelf->_mc___05Fs1270) | (IData)(vlSelf->_mc___05Fs1269));
    vlSelf->_cp___05Fs9280 = ((IData)(vlSelf->_mc___05Fs1270) 
                              | ((~ ((IData)(vlSelf->_mc___05Fs1269) 
                                     | ((IData)(vlSelf->_mc___05Fs1268) 
                                        | (IData)(vlSelf->_mc___05Fs1267)))) 
                                 & ((IData)(vlSelf->_mc___05Fs1266) 
                                    | ((~ ((IData)(vlSelf->_mc___05Fs1265) 
                                           | ((IData)(vlSelf->_mc___05Fs1264) 
                                              | (IData)(vlSelf->_mc___05Fs1263)))) 
                                       & (IData)(vlSelf->_mc___05Fs1262)))));
    vlSelf->_cp___05Fs9792 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_67)));
    vlSelf->_cp___05Fs9206 = ((0U != (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__state)) 
                              & (~ ((IData)(vlSelf->_cp___05Fs9760) 
                                    | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_valid 
        = ((IData)(vlSelf->_cp___05Fs9760) | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___io_dmem_req_valid_output));
    vlSelf->_mc___05Fs313 = ((IData)(vlSelf->_cp___05Fs2894) 
                             | (3U != (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size)));
    vlSelf->_mc___05Fs2068 = (0U == (0xffU & (IData)(
                                                     (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                                      >> 0x17U))));
    vlSelf->_mc___05Fs2043 = (0U == (0x7ffU & (IData)(
                                                      (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                                       >> 0x34U))));
    vlSelf->_mc___05Fs2014 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x17U)));
    vlSelf->_mc___05Fs2015 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x18U)));
    vlSelf->_mc___05Fs2016 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x19U)));
    vlSelf->_mc___05Fs2017 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x1aU)));
    vlSelf->_mc___05Fs2018 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x1bU)));
    vlSelf->_mc___05Fs2019 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x1cU)));
    vlSelf->_mc___05Fs2020 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x1dU)));
    vlSelf->_mc___05Fs2021 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x1eU)));
    vlSelf->_mc___05Fs2022 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x1fU)));
    vlSelf->_mc___05Fs2023 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x20U)));
    vlSelf->_mc___05Fs2024 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x21U)));
    vlSelf->_mc___05Fs2025 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x22U)));
    vlSelf->_mc___05Fs2026 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x23U)));
    vlSelf->_mc___05Fs2027 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x24U)));
    vlSelf->_mc___05Fs2028 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x25U)));
    vlSelf->_mc___05Fs2029 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x26U)));
    vlSelf->_mc___05Fs2030 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x27U)));
    vlSelf->_mc___05Fs2031 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x28U)));
    vlSelf->_mc___05Fs2032 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x29U)));
    vlSelf->_mc___05Fs2033 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x2aU)));
    vlSelf->_mc___05Fs2034 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x2bU)));
    vlSelf->_mc___05Fs2035 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x2cU)));
    vlSelf->_mc___05Fs2036 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x2dU)));
    vlSelf->_mc___05Fs2037 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x2eU)));
    vlSelf->_mc___05Fs2038 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x2fU)));
    vlSelf->_mc___05Fs2039 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x30U)));
    vlSelf->_mc___05Fs2040 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x31U)));
    vlSelf->_mc___05Fs2041 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x32U)));
    vlSelf->_mc___05Fs2042 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x33U)));
    vlSelf->_mc___05Fs1992 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 1U)));
    vlSelf->_mc___05Fs1993 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 2U)));
    vlSelf->_mc___05Fs1994 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 3U)));
    vlSelf->_mc___05Fs1995 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 4U)));
    vlSelf->_mc___05Fs1996 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 5U)));
    vlSelf->_mc___05Fs1997 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 6U)));
    vlSelf->_mc___05Fs1998 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 7U)));
    vlSelf->_mc___05Fs1999 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 8U)));
    vlSelf->_mc___05Fs2000 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 9U)));
    vlSelf->_mc___05Fs2001 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0xaU)));
    vlSelf->_mc___05Fs2002 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0xbU)));
    vlSelf->_mc___05Fs2003 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0xcU)));
    vlSelf->_mc___05Fs2004 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0xdU)));
    vlSelf->_mc___05Fs2005 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0xeU)));
    vlSelf->_mc___05Fs2006 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0xfU)));
    vlSelf->_mc___05Fs2007 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x10U)));
    vlSelf->_mc___05Fs2008 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x11U)));
    vlSelf->_mc___05Fs2009 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x12U)));
    vlSelf->_mc___05Fs2010 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x13U)));
    vlSelf->_mc___05Fs2011 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x14U)));
    vlSelf->_mc___05Fs2012 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x15U)));
    vlSelf->_mc___05Fs2013 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x16U)));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_sink 
        = (1U & ((~ (IData)(vlSelf->_mc___05Fs3561)) 
                 & (IData)((vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                            >> 0x22U))));
    vlSelf->_cp___05Fs11881 = ((~ (IData)(vlSelf->_mc___05Fs3561)) 
                               & (IData)(vlSelf->_cp___05Fs12432));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_param 
        = ((IData)(vlSelf->_mc___05Fs3561) ? 0U : (3U 
                                                   & (IData)(
                                                             (vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                              >> 0x26U))));
    vlSelf->_cp___05Fs11877 = ((~ (IData)(vlSelf->_mc___05Fs3561)) 
                               & (IData)(vlSelf->_cp___05Fs12428));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall 
        = ((IData)(vlSelf->_mc___05Fs3560) & ((IData)(vlSelf->_mc___05Fs3561) 
                                              != (1U 
                                                  & (~ (IData)(vlSelf->__VdfgTmp_h68d180b8__0)))));
    vlSelf->_mc___05Fs1740 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_valid) 
                              & (3U == (3U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data)));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN 
        = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4frag_auto_out_ar_bits_id)
                  ? (~ (IData)(vlSelf->_mc___05Fs299))
                  : (~ (IData)(vlSelf->_mc___05Fs298))));
    __Vtemp_8[0U] = 0U;
    __Vtemp_8[1U] = 0U;
    __Vtemp_8[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_9, __Vtemp_8, (0x3fU 
                                                   & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_12[0U] = 0U;
    __Vtemp_12[1U] = 0U;
    __Vtemp_12[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_13, __Vtemp_12, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_16[0U] = 0U;
    __Vtemp_16[1U] = 0U;
    __Vtemp_16[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_17, __Vtemp_16, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_20[0U] = 0U;
    __Vtemp_20[1U] = 0U;
    __Vtemp_20[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_21, __Vtemp_20, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_24[0U] = 0U;
    __Vtemp_24[1U] = 0U;
    __Vtemp_24[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_25, __Vtemp_24, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_28[0U] = 0U;
    __Vtemp_28[1U] = 0U;
    __Vtemp_28[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_29, __Vtemp_28, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_32[0U] = 0U;
    __Vtemp_32[1U] = 0U;
    __Vtemp_32[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_33, __Vtemp_32, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_36[0U] = 0U;
    __Vtemp_36[1U] = 0U;
    __Vtemp_36[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_37, __Vtemp_36, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_40[0U] = 0U;
    __Vtemp_40[1U] = 0U;
    __Vtemp_40[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_41, __Vtemp_40, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_44[0U] = 0U;
    __Vtemp_44[1U] = 0U;
    __Vtemp_44[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_45, __Vtemp_44, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_48[0U] = 0U;
    __Vtemp_48[1U] = 0U;
    __Vtemp_48[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_49, __Vtemp_48, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_52[0U] = 0U;
    __Vtemp_52[1U] = 0U;
    __Vtemp_52[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_53, __Vtemp_52, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_56[0U] = 0U;
    __Vtemp_56[1U] = 0U;
    __Vtemp_56[2U] = 1U;
    if (vlSelf->_cp___05Fs9289) {
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_bits_size = 6U;
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_bits_opcode 
            = (6U | (1U & (~ (IData)(vlSelf->_cp___05Fs9290))));
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__releaseWay 
            = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__metaArb_io_in_2_bits_way_en;
    } else {
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_bits_size 
            = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__probe_bits_size;
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_bits_opcode 
            = (4U | (IData)(vlSelf->_cp___05Fs9288));
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__releaseWay 
            = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_probe_way;
    }
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_57, __Vtemp_56, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_60[0U] = 0U;
    __Vtemp_60[1U] = 0U;
    __Vtemp_60[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_61, __Vtemp_60, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_64[0U] = 0U;
    __Vtemp_64[1U] = 0U;
    __Vtemp_64[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_65, __Vtemp_64, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_68[0U] = 0U;
    __Vtemp_68[1U] = 0U;
    __Vtemp_68[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_69, __Vtemp_68, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_72[0U] = 0U;
    __Vtemp_72[1U] = 0U;
    __Vtemp_72[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_73, __Vtemp_72, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_76[0U] = 0U;
    __Vtemp_76[1U] = 0U;
    __Vtemp_76[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_77, __Vtemp_76, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_80[0U] = 0U;
    __Vtemp_80[1U] = 0U;
    __Vtemp_80[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_81, __Vtemp_80, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_84[0U] = 0U;
    __Vtemp_84[1U] = 0U;
    __Vtemp_84[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_85, __Vtemp_84, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_88[0U] = 0U;
    __Vtemp_88[1U] = 0U;
    __Vtemp_88[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_89, __Vtemp_88, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_92[0U] = 0U;
    __Vtemp_92[1U] = 0U;
    __Vtemp_92[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_93, __Vtemp_92, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_96[0U] = 0U;
    __Vtemp_96[1U] = 0U;
    __Vtemp_96[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_97, __Vtemp_96, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_100[0U] = 0U;
    __Vtemp_100[1U] = 0U;
    __Vtemp_100[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_101, __Vtemp_100, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_104[0U] = 0U;
    __Vtemp_104[1U] = 0U;
    __Vtemp_104[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_105, __Vtemp_104, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_108[0U] = 0U;
    __Vtemp_108[1U] = 0U;
    __Vtemp_108[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_109, __Vtemp_108, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_112[0U] = 0U;
    __Vtemp_112[1U] = 0U;
    __Vtemp_112[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_113, __Vtemp_112, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_116[0U] = 0U;
    __Vtemp_116[1U] = 0U;
    __Vtemp_116[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_117, __Vtemp_116, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_120[0U] = 0U;
    __Vtemp_120[1U] = 0U;
    __Vtemp_120[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_121, __Vtemp_120, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_124[0U] = 0U;
    __Vtemp_124[1U] = 0U;
    __Vtemp_124[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_125, __Vtemp_124, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_128[0U] = 0U;
    __Vtemp_128[1U] = 0U;
    __Vtemp_128[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_129, __Vtemp_128, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_132[0U] = 0U;
    __Vtemp_132[1U] = 0U;
    __Vtemp_132[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_133, __Vtemp_132, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_136[0U] = 0U;
    __Vtemp_136[1U] = 0U;
    __Vtemp_136[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_137, __Vtemp_136, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_140[0U] = 0U;
    __Vtemp_140[1U] = 0U;
    __Vtemp_140[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_141, __Vtemp_140, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_144[0U] = 0U;
    __Vtemp_144[1U] = 0U;
    __Vtemp_144[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_145, __Vtemp_144, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_148[0U] = 0U;
    __Vtemp_148[1U] = 0U;
    __Vtemp_148[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_149, __Vtemp_148, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_152[0U] = 0U;
    __Vtemp_152[1U] = 0U;
    __Vtemp_152[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_153, __Vtemp_152, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_156[0U] = 0U;
    __Vtemp_156[1U] = 0U;
    __Vtemp_156[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_157, __Vtemp_156, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_160[0U] = 0U;
    __Vtemp_160[1U] = 0U;
    __Vtemp_160[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_161, __Vtemp_160, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_164[0U] = 0U;
    __Vtemp_164[1U] = 0U;
    __Vtemp_164[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_165, __Vtemp_164, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_168[0U] = 0U;
    __Vtemp_168[1U] = 0U;
    __Vtemp_168[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_169, __Vtemp_168, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h3152f987__0 
        = ((IData)(vlSelf->_mc___05Fs2168) ? (7ULL 
                                              | ((((IData)(vlSelf->_mc___05Fs2163) 
                                                   | ((IData)(vlSelf->_mc___05Fs2162) 
                                                      | ((IData)(vlSelf->_mc___05Fs2161) 
                                                         | (IData)(vlSelf->_mc___05Fs2160))))
                                                   ? 0x7ffffffffffffULL
                                                   : 
                                                  (((QData)((IData)(
                                                                    (1U 
                                                                     & (__Vtemp_9[0U] 
                                                                        >> 0xdU)))) 
                                                    << 0x32U) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (__Vtemp_13[0U] 
                                                                           >> 0xeU)))) 
                                                       << 0x31U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (__Vtemp_17[0U] 
                                                                              >> 0xfU)))) 
                                                          << 0x30U) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (__Vtemp_21[0U] 
                                                                                >> 0x10U)))) 
                                                             << 0x2fU) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_25[0U] 
                                                                                >> 0x11U)))) 
                                                                << 0x2eU) 
                                                               | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1 
                                                                                >> 0xfU) 
                                                                                | (5U 
                                                                                & ((0xcU 
                                                                                & (__Vtemp_29[0U] 
                                                                                >> 0x11U)) 
                                                                                | (3U 
                                                                                & (__Vtemp_33[0U] 
                                                                                >> 0x15U)))))))) 
                                                                   << 0x2aU) 
                                                                  | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1 
                                                                                >> 7U) 
                                                                                | (0x55U 
                                                                                & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_0)))))) 
                                                                      << 0x22U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_0) 
                                                                                >> 1U)))) 
                                                                         << 0x21U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1 
                                                                                >> 5U) 
                                                                                | (__Vtemp_37[0U] 
                                                                                >> 0x1fU))))) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                ((__Vtemp_41[1U] 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (__Vtemp_45[1U] 
                                                                                << 0x1dU)) 
                                                                                | (((0x38000000U 
                                                                                & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1 
                                                                                << 0x1bU)) 
                                                                                | (0x14000000U 
                                                                                & ((0x30000000U 
                                                                                & (__Vtemp_49[1U] 
                                                                                << 0x19U)) 
                                                                                | (0xc000000U 
                                                                                & (__Vtemp_53[1U] 
                                                                                << 0x15U))))) 
                                                                                | ((0x2000000U 
                                                                                & (__Vtemp_57[1U] 
                                                                                << 0x13U)) 
                                                                                | ((0x1000000U 
                                                                                & (__Vtemp_61[1U] 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (__Vtemp_65[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x400000U 
                                                                                & (__Vtemp_69[1U] 
                                                                                << 0xdU)) 
                                                                                | ((0x200000U 
                                                                                & (__Vtemp_73[1U] 
                                                                                << 0xbU)) 
                                                                                | ((0x100000U 
                                                                                & (__Vtemp_77[1U] 
                                                                                << 9U)) 
                                                                                | ((0x80000U 
                                                                                & (__Vtemp_81[1U] 
                                                                                << 7U)) 
                                                                                | ((0x40000U 
                                                                                & (__Vtemp_85[1U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & (__Vtemp_89[1U] 
                                                                                << 3U)) 
                                                                                | ((0x10000U 
                                                                                & (__Vtemp_93[1U] 
                                                                                << 1U)) 
                                                                                | ((0x8000U 
                                                                                & (__Vtemp_97[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (__Vtemp_101[1U] 
                                                                                >> 3U)) 
                                                                                | ((((0x2000U 
                                                                                & (__Vtemp_105[1U] 
                                                                                >> 5U)) 
                                                                                | (0x800U 
                                                                                & (__Vtemp_109[1U] 
                                                                                >> 9U))) 
                                                                                | (0x1400U 
                                                                                & ((0x3000U 
                                                                                & (__Vtemp_113[1U] 
                                                                                >> 7U)) 
                                                                                | (0xc00U 
                                                                                & (__Vtemp_117[1U] 
                                                                                >> 0xbU))))) 
                                                                                | ((0x200U 
                                                                                & (__Vtemp_121[1U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (__Vtemp_125[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (__Vtemp_129[1U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (__Vtemp_133[1U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (__Vtemp_137[1U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (__Vtemp_141[1U] 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (__Vtemp_145[1U] 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (__Vtemp_149[1U] 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (__Vtemp_153[1U] 
                                                                                >> 0x1dU)) 
                                                                                | (__Vtemp_157[1U] 
                                                                                >> 0x1fU)))))))))))))))))))))))))))))))))))))) 
                                                 << 3U))
            : (QData)((IData)((((IData)(vlSelf->_mc___05Fs2163) 
                                & ((IData)(vlSelf->_mc___05Fs2162) 
                                   & ((IData)(vlSelf->_mc___05Fs2161) 
                                      & (IData)(vlSelf->_mc___05Fs2160))))
                                ? ((4U & (__Vtemp_161[0U] 
                                          << 2U)) | 
                                   ((2U & __Vtemp_165[0U]) 
                                    | (1U & (__Vtemp_169[0U] 
                                             >> 2U))))
                                : 0U))));
    if (vlSelf->_mc___05Fs1782) {
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb129c4ea__0 
            = (1U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_haf133fcb__0 
                     >> 1U));
        ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h595d38b9__0 
            = (0xffffffU & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_haf133fcb__0 
                            >> 1U));
    } else {
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb129c4ea__0 = 0U;
        ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h595d38b9__0 = 0U;
    }
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2 
        = (((IData)(vlSelf->_mc___05Fs1782) & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_haf133fcb__0) 
           | (IData)(vlSelf->_mc___05Fs1786));
    vlSelf->_cp___05Fs9652 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_speculative) 
                              & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_6)) 
                                 & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_custom_0 
                                            >> 3U))));
    vlSelf->_cp___05Fs9346 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq_io_enq_valid_REG) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_valid) 
                                 & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_valid) 
                                    | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_7) 
                                       | ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_tlb_resp_miss)) 
                                          & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_6))))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s2_miss 
        = ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_6) 
               | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s2_hit))) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s2_valid));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
        = (0xfffffffU & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)
                          ? (0xfffffU & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn))
                          : ((IData)(vlSelf->_mc___05Fs997)
                              ? vlSelf->__VdfgTmp_h8f317fca__0
                              : (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                         >> 0xcU)))));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT___io_in_a_ready_output 
        = ((~ (IData)(vlSelf->_mc___05Fs811)) & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT___GEN_2));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_3_io_out_a_valid 
        = ((IData)(vlSelf->_cp___05Fs7546) & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__o_data_q__DOT__empty)));
    vlSelf->_cp___05Fs8233 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_97)));
    vlSelf->_cp___05Fs8235 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_98)));
    vlSelf->_cp___05Fs8237 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_99)));
    vlSelf->_cp___05Fs8239 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_100)));
    vlSelf->_cp___05Fs8241 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_101)));
    vlSelf->_cp___05Fs8290 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_139)));
    vlSelf->_cp___05Fs8314 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_159)));
    vlSelf->_cp___05Fs8327 = (1U & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_167));
    vlSelf->_cp___05Fs8537 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_27)));
    vlSelf->_cp___05Fs8539 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_28)));
    vlSelf->_cp___05Fs8541 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_29)));
    vlSelf->_cp___05Fs8545 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_30)));
    vlSelf->_cp___05Fs8566 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_36)));
    vlSelf->_cp___05Fs8568 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_38)));
    vlSelf->_cp___05Fs8592 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_43)));
    vlSelf->_cp___05Fs10491 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_104)));
    vlSelf->_cp___05Fs10493 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_105)));
    vlSelf->_cp___05Fs10495 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_106)));
    vlSelf->_cp___05Fs10497 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_107)));
    vlSelf->_cp___05Fs10499 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_108)));
    vlSelf->_cp___05Fs10548 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_145)));
    vlSelf->_cp___05Fs10572 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_164)));
    vlSelf->_cp___05Fs10585 = (1U & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_172));
    vlSelf->_cp___05Fs7957 = vlSelf->_cp___05Fs10215;
    vlSelf->_cp___05Fs8446 = vlSelf->_cp___05Fs10215;
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_137 
        = (((7U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
            == ((0x17U >= (0x1fU & ((IData)(3U) * (7U 
                                                   & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_119) 
                                                      >> 1U)))))
                 ? (7U & (0x911240U >> (0x1fU & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_119) 
                                                     >> 1U))))))
                 : 0U)) | ((7U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
                           == ((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_119) 
                                                       >> 1U)))))
                                ? (7U & (0x951240U 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_119) 
                                                      >> 1U))))))
                                : 0U)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_143 
        = (((7U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
            == ((0x17U >= (0x1fU & ((IData)(3U) * (7U 
                                                   & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_126) 
                                                      >> 1U)))))
                 ? (7U & (0x911240U >> (0x1fU & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_126) 
                                                     >> 1U))))))
                 : 0U)) | ((7U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
                           == ((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_126) 
                                                       >> 1U)))))
                                ? (7U & (0x951240U 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_126) 
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
    vlSelf->_cp___05Fs7958 = vlSelf->_cp___05Fs10216;
    vlSelf->_cp___05Fs8447 = vlSelf->_cp___05Fs10216;
    vlSelf->_cp___05Fs9266 = vlSelf->_cp___05Fs10216;
    vlSelf->_cp___05Fs7968 = vlSelf->_cp___05Fs10226;
    vlSelf->_cp___05Fs8457 = vlSelf->_cp___05Fs10226;
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_102 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__denied) 
           == (IData)(vlSelf->_cp___05Fs10226));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_31 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__denied) 
           == (IData)(vlSelf->_cp___05Fs10226));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_109 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__denied) 
           == (IData)(vlSelf->_cp___05Fs10226));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_41 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs10226)) 
                 | (IData)(vlSelf->_cp___05Fs10224)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__source_ok_1 
        = ((0U == (3U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                         >> 9U))) | ((1U == (3U & (
                                                   vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
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
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__beats1 
            = (0x1ffU & (~ (0xffffffU & (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
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
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__beats1 = 0U;
    }
    vlSelf->_cp___05Fs7969 = vlSelf->_cp___05Fs10227;
    vlSelf->_cp___05Fs8458 = vlSelf->_cp___05Fs10227;
    vlSelf->_cp___05Fs8008 = vlSelf->_cp___05Fs10266;
    vlSelf->_cp___05Fs8497 = vlSelf->_cp___05Fs10266;
    vlSelf->_cp___05Fs8562 = (1U & (~ (IData)(vlSelf->_cp___05Fs10266)));
    vlSelf->_cp___05Fs9265 = vlSelf->_cp___05Fs10266;
    vlSelf->_cp___05Fs9261 = ((IData)(vlSelf->_cp___05Fs10266) 
                              | ((IData)(vlSelf->_cp___05Fs10257) 
                                 | (IData)(vlSelf->_cp___05Fs10275)));
    vlSelf->_cp___05Fs9272 = ((IData)(vlSelf->_cp___05Fs10266) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__blockUncachedGrant) 
                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_valid)));
    vlSelf->_cp___05Fs7984 = vlSelf->_cp___05Fs10242;
    vlSelf->_cp___05Fs8473 = vlSelf->_cp___05Fs10242;
    vlSelf->_mc___05Fs1318 = ((IData)(vlSelf->_cp___05Fs10227) 
                              | (IData)(vlSelf->_cp___05Fs10242));
    vlSelf->_cp___05Fs7955 = ((IData)(vlSelf->_mc___05Fs946) 
                              & (IData)(vlSelf->_cp___05Fs10213));
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h4b27d750__0 
        = ((0x200U & ((~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                          >> 0x16U)) << 9U)) | ((0x100U 
                                                 & ((~ 
                                                     (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                      >> 0x17U)) 
                                                    << 8U)) 
                                                | ((0x80U 
                                                    & ((~ 
                                                        (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                         >> 0x18U)) 
                                                       << 7U)) 
                                                   | ((0x40U 
                                                       & ((~ 
                                                           (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                            >> 0x19U)) 
                                                          << 6U)) 
                                                      | ((0x20U 
                                                          & ((~ 
                                                              (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                               >> 0x1aU)) 
                                                             << 5U)) 
                                                         | ((0x10U 
                                                             & ((~ 
                                                                 (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                                  >> 0x1bU)) 
                                                                << 4U)) 
                                                            | ((8U 
                                                                & ((~ 
                                                                    (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                                     >> 0x1cU)) 
                                                                   << 3U)) 
                                                               | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hb29765f9__0))))))));
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hee6be135__0 
        = ((8U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                  >> 0x19U)) | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hb29765f9__0));
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha7eb522c__0 
        = ((0x40U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                     >> 0x13U)) | ((0x20U & ((~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                 >> 0x1aU)) 
                                             << 5U)) 
                                   | ((0x10U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                >> 0x17U)) 
                                      | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hd88ef07d__0))));
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hf5d3cdb7__0 
        = ((0x10U & ((~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                         >> 0x1bU)) << 4U)) | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hd88ef07d__0));
    vlSelf->_mc___05Fs308 = ((IData)(vlSelf->_cp___05Fs2891) 
                             | (3U != (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___deq_q_io_deq_bits_size)));
    vlSelf->_cp___05Fs12790 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT___GEN_35)));
    vlSelf->_cp___05Fs12815 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT___GEN_52)));
    vlSelf->_cp___05Fs12810 = vlSelf->_cp___05Fs12808;
    vlSelf->_cp___05Fs12822 = ((IData)(vlSelf->_cp___05Fs12808) 
                               & ((IData)(vlSelf->_mc___05Fs3609) 
                                  & (IData)(vlSelf->_cp___05Fs12584)));
    vlSelf->_cp___05Fs12813 = vlSelf->_cp___05Fs12804;
    vlSelf->_cp___05Fs12787 = vlSelf->_cp___05Fs12774;
    vlSelf->_cp___05Fs12802 = vlSelf->_cp___05Fs12774;
    vlSelf->_cp___05Fs12803 = vlSelf->_cp___05Fs12774;
    vlSelf->_cp___05Fs12827 = vlSelf->_cp___05Fs12774;
    vlSelf->_cp___05Fs12829 = vlSelf->_cp___05Fs12774;
    vlSelf->_cp___05Fs12849 = vlSelf->_cp___05Fs12774;
    vlSelf->_cp___05Fs13388 = vlSelf->_cp___05Fs12774;
    vlSelf->_cp___05Fs12786 = ((IData)(vlSelf->_mc___05Fs3605) 
                               & (IData)(vlSelf->_cp___05Fs12774));
    vlSelf->_cp___05Fs12801 = ((IData)(vlSelf->_mc___05Fs3607) 
                               & (IData)(vlSelf->_cp___05Fs12774));
    vlSelf->_cp___05Fs12805 = ((IData)(vlSelf->_mc___05Fs3609) 
                               & (IData)(vlSelf->_cp___05Fs12774));
    vlSelf->_cp___05Fs12809 = ((IData)(vlSelf->_mc___05Fs3611) 
                               & (IData)(vlSelf->_cp___05Fs12774));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__ridx 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__ridx_ridx_bin) 
              + (IData)(vlSelf->_cp___05Fs12774)));
    ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_10 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_9) 
           & (IData)(vlSelf->_mc___05Fs3606));
    ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN 
        = ((~ (IData)(vlSelf->_mc___05Fs3606)) & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_9));
    if (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_doSubMags) {
        __Vtemp_177[1U] = (~ (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN) 
                               << 0x15U) | (IData)(
                                                   ((0x1fffffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b[3U])) 
                                                         << 0x2bU) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b[2U])) 
                                                            << 0xbU) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b[1U])) 
                                                              >> 0x15U)))) 
                                                    >> 0x20U))));
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[0U] 
            = (~ (IData)((0x1fffffffffffffULL & (((QData)((IData)(
                                                                  vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b[3U])) 
                                                  << 0x2bU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b[2U])) 
                                                     << 0xbU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b[1U])) 
                                                       >> 0x15U))))));
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[1U] 
            = __Vtemp_177[1U];
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[2U] 
            = (~ (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN) 
                   >> 0xbU) | ((IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN 
                                        >> 0x20U)) 
                               << 0x15U)));
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[3U] 
            = (0xfffU & (~ ((IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN 
                                     >> 0x20U)) >> 0xbU)));
    } else {
        __Vtemp_177[1U] = (((IData)((0x1fffffffffffffULL 
                                     & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN)) 
                            << 0x14U) | (IData)(((0xfffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b[3U])) 
                                                      << 0x2aU) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b[2U])) 
                                                         << 0xaU) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b[1U])) 
                                                           >> 0x16U)))) 
                                                 >> 0x20U)));
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[0U] 
            = (IData)((0xfffffffffffffULL & (((QData)((IData)(
                                                              vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b[3U])) 
                                              << 0x2aU) 
                                             | (((QData)((IData)(
                                                                 vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b[2U])) 
                                                 << 0xaU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b[1U])) 
                                                   >> 0x16U)))));
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[1U] 
            = __Vtemp_177[1U];
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[2U] 
            = (((IData)((0x1fffffffffffffULL & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN)) 
                >> 0xcU) | ((IData)(((0x1fffffffffffffULL 
                                      & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN) 
                                     >> 0x20U)) << 0x14U));
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[3U] 
            = (0xfffU & ((0x600U & ((IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_highAlignedSigC 
                                             >> 0x35U)) 
                                    << 9U)) | ((IData)(
                                                       ((0x1fffffffffffffULL 
                                                         & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN) 
                                                        >> 0x20U)) 
                                               >> 0xcU)));
    }
    vlSelf->_mc___05Fs2103 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN 
                                            >> 2U)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN_1[0U] 
        = ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b[0U] 
            << 1U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_bit0AlignedSigC));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN_1[1U] 
        = ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b[0U] 
            >> 0x1fU) | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b[1U] 
                         << 1U));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN_1[2U] 
        = ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b[1U] 
            >> 0x1fU) | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b[2U] 
                         << 1U));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN_1[3U] 
        = ((0x1800U & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN) 
                       << 0xbU)) | ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b[2U] 
                                     >> 0x1fU) | (0x7feU 
                                                  & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b[3U] 
                                                     << 1U))));
    vlSelf->_mc___05Fs2376 = (0U == (0xffU & (IData)(
                                                     (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                                      >> 0x17U))));
    vlSelf->_mc___05Fs2322 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x17U)));
    vlSelf->_mc___05Fs2323 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x18U)));
    vlSelf->_mc___05Fs2324 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x19U)));
    vlSelf->_mc___05Fs2325 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x1aU)));
    vlSelf->_mc___05Fs2326 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x1bU)));
    vlSelf->_mc___05Fs2327 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x1cU)));
    vlSelf->_mc___05Fs2328 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x1dU)));
    vlSelf->_mc___05Fs2329 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x1eU)));
    vlSelf->_mc___05Fs2331 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x20U)));
    vlSelf->_mc___05Fs2332 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x21U)));
    vlSelf->_mc___05Fs2333 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x22U)));
    vlSelf->_mc___05Fs2334 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x23U)));
    vlSelf->_mc___05Fs2335 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x24U)));
    vlSelf->_mc___05Fs2336 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x25U)));
    vlSelf->_mc___05Fs2337 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x26U)));
    vlSelf->_mc___05Fs2338 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x27U)));
    vlSelf->_mc___05Fs2339 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x28U)));
    vlSelf->_mc___05Fs2340 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x29U)));
    vlSelf->_mc___05Fs2341 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x2aU)));
    vlSelf->_mc___05Fs2342 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x2bU)));
    vlSelf->_mc___05Fs2343 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x2cU)));
    vlSelf->_mc___05Fs2344 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x2dU)));
    vlSelf->_mc___05Fs2345 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x2eU)));
    vlSelf->_mc___05Fs2346 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x2fU)));
    vlSelf->_mc___05Fs2347 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x30U)));
    vlSelf->_mc___05Fs2348 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x31U)));
    vlSelf->_mc___05Fs2349 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x32U)));
    vlSelf->_mc___05Fs2350 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x33U)));
    vlSelf->_mc___05Fs2330 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x1fU)));
    vlSelf->_mc___05Fs2351 = (0U == (0x7ffU & (IData)(
                                                      (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                                       >> 0x34U))));
    vlSelf->_mc___05Fs2300 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 1U)));
    vlSelf->_mc___05Fs2301 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 2U)));
    vlSelf->_mc___05Fs2302 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 3U)));
    vlSelf->_mc___05Fs2303 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 4U)));
    vlSelf->_mc___05Fs2304 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 5U)));
    vlSelf->_mc___05Fs2305 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 6U)));
    vlSelf->_mc___05Fs2306 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 7U)));
    vlSelf->_mc___05Fs2307 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 8U)));
    vlSelf->_mc___05Fs2308 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 9U)));
    vlSelf->_mc___05Fs2309 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0xaU)));
    vlSelf->_mc___05Fs2310 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0xbU)));
    vlSelf->_mc___05Fs2311 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0xcU)));
    vlSelf->_mc___05Fs2312 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0xdU)));
    vlSelf->_mc___05Fs2313 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0xeU)));
    vlSelf->_mc___05Fs2314 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0xfU)));
    vlSelf->_mc___05Fs2315 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x10U)));
    vlSelf->_mc___05Fs2316 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x11U)));
    vlSelf->_mc___05Fs2317 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x12U)));
    vlSelf->_mc___05Fs2318 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x13U)));
    vlSelf->_mc___05Fs2319 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x14U)));
    vlSelf->_mc___05Fs2320 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x15U)));
    vlSelf->_mc___05Fs2321 = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x16U)));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN_3 
        = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4frag_auto_out_aw_bits_id)
                  ? (~ (IData)(vlSelf->_mc___05Fs301))
                  : (~ (IData)(vlSelf->_mc___05Fs300))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_71 
        = (1U & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__full)) 
                 | (IData)(vlSelf->_mc___05Fs547)));
    vlSelf->_cp___05Fs4277 = (1U & (~ (IData)(vlSelf->_mc___05Fs547)));
    vlSelf->_cp___05Fs4495 = ((IData)(vlSelf->_cp___05Fs4404) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_63 
        = ((IData)(vlSelf->_cp___05Fs4404) & (IData)(vlSelf->_mc___05Fs541));
    if (vlSelf->_mc___05Fs2225) {
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb129c4ea__0 
            = (1U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_haf133fcb__0 
                     >> 1U));
        ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h595d38b9__0 
            = (0xffffffU & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_haf133fcb__0 
                            >> 1U));
    } else {
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb129c4ea__0 = 0U;
        ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h595d38b9__0 = 0U;
    }
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2 
        = (((IData)(vlSelf->_mc___05Fs2225) & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_haf133fcb__0) 
           | (IData)(vlSelf->_mc___05Fs2229));
    vlSelf->_cp___05Fs9226 = vlSelf->_mc___05Fs1293;
    vlSelf->_cp___05Fs9279 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_48));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT___io_in_a_ready_output 
        = ((~ (IData)(vlSelf->_mc___05Fs807)) & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT___GEN_2));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_2_io_out_a_valid 
        = ((IData)(vlSelf->_cp___05Fs7529) & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__o_data_q__DOT__empty)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_xcpt 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_xcpt) 
           | ((IData)(vlSelf->_mc___05Fs3333) | ((IData)(vlSelf->_mc___05Fs3332) 
                                                 | ((IData)(vlSelf->_mc___05Fs3331) 
                                                    | ((IData)(vlSelf->_mc___05Fs3330) 
                                                       | ((IData)(vlSelf->_mc___05Fs3329) 
                                                          | ((IData)(vlSelf->_mc___05Fs3328) 
                                                             | ((IData)(vlSelf->_mc___05Fs3327) 
                                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_118) 
                                                                   & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___io_cpu_s2_xcpt_ma_ld_output))))))))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____Vcellinp__csr__io_cause 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_xcpt)
            ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_cause
            : (QData)((IData)(((IData)(vlSelf->_mc___05Fs3333)
                                ? 0xfU : ((IData)(vlSelf->_mc___05Fs3332)
                                           ? 0xdU : 
                                          ((IData)(vlSelf->_mc___05Fs3331)
                                            ? 0x17U
                                            : ((IData)(vlSelf->_mc___05Fs3330)
                                                ? 0x15U
                                                : ((IData)(vlSelf->_mc___05Fs3329)
                                                    ? 7U
                                                    : 
                                                   ((IData)(vlSelf->_mc___05Fs3328)
                                                     ? 5U
                                                     : 
                                                    (4U 
                                                     | ((IData)(vlSelf->_mc___05Fs3327) 
                                                        << 1U)))))))))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_valid_masked 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_valid_no_xcpt) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_not_nacked_in_s1));
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
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_19 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__opcode));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___GEN_13 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__opcode));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_21 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__opcode));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_17 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__opcode));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_21 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__opcode));
    vlSelf->_cp___05Fs11211 = (6U == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode));
    vlSelf->_cp___05Fs11262 = (0U == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode));
    vlSelf->_cp___05Fs11273 = (1U == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode));
    vlSelf->_cp___05Fs11284 = (2U == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode));
    vlSelf->_cp___05Fs11295 = (3U == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode));
    vlSelf->_cp___05Fs11306 = (5U == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode));
    if ((0x17U >= (0x1fU & ((IData)(3U) * (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode))))) {
        vlSelf->__VdfgTmp_h1cdc2194__0 = (7U & (0x951240U 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode)))));
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_bits_opcode 
            = (7U & (0x911240U >> (0x1fU & ((IData)(3U) 
                                            * (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode)))));
    } else {
        vlSelf->__VdfgTmp_h1cdc2194__0 = 0U;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_bits_opcode = 0U;
    }
    vlSelf->_mc___05Fs3497 = (4U == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode));
    if (vlSelf->__VdfgTmp_hbfc32eed__0) {
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_anon_out_1_a_bits_address 
            = (0x7fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->debug_clockeddmi_dmi_req_bits_addr), 2U));
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_address 
            = ((IData)(vlSelf->debug_clockeddmi_dmi_req_bits_addr) 
               << 2U);
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____VdfgTmp_h53dafab2__0 
            = (3U & ((IData)(vlSelf->debug_clockeddmi_dmi_req_bits_addr) 
                     >> 5U));
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____VdfgTmp_h53ca0f32__0 
            = (0xfU & ((IData)(vlSelf->debug_clockeddmi_dmi_req_bits_addr) 
                       >> 1U));
    } else {
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_anon_out_1_a_bits_address = 0x48U;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_address = 0x48U;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____VdfgTmp_h53dafab2__0 = 0U;
        vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____VdfgTmp_h53ca0f32__0 = 9U;
    }
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT____VdfgTmp_hcef7e3f7__0 
        = (1U & ((~ (IData)(vlSelf->__VdfgTmp_hbfc32eed__0)) 
                 | ((IData)(vlSelf->debug_clockeddmi_dmi_req_bits_addr) 
                    >> 1U)));
    ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT___GEN 
        = (0x1fU & (0x11U ^ ((IData)(vlSelf->__VdfgTmp_hbfc32eed__0)
                              ? (IData)(vlSelf->debug_clockeddmi_dmi_req_bits_addr)
                              : 0x12U)));
    ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT____VdfgTmp_h2dd21bce__0 
        = ((IData)(vlSelf->__VdfgTmp_hbfc32eed__0) 
           & ((IData)(vlSelf->debug_clockeddmi_dmi_req_bits_addr) 
              >> 6U));
    __VdfgTmp_hf45803bf__0 = ((IData)(vlSelf->__VdfgTmp_hbfc32eed__0) 
                              & (IData)(vlSelf->debug_clockeddmi_dmi_req_bits_addr));
    vlSelf->_cp___05Fs3166 = (1U & (~ (IData)(vlSelf->_mc___05Fs429)));
    vlSelf->_cp___05Fs3655 = ((IData)(vlSelf->_cp___05Fs3564) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_70 
        = ((IData)(vlSelf->_cp___05Fs3564) & (IData)(vlSelf->_mc___05Fs423));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_14 
        = (0x7fU & (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_13) 
                     >> 8U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_13)));
    vlSelf->_mc___05Fs1551 = vlSelf->_mc___05Fs1523;
    vlSelf->_mc___05Fs1586 = vlSelf->_mc___05Fs1523;
    vlSelf->_mc___05Fs1614 = vlSelf->_mc___05Fs1523;
    vlSelf->_mc___05Fs1643 = vlSelf->_mc___05Fs1523;
    vlSelf->_mc___05Fs1558 = vlSelf->_mc___05Fs1530;
    vlSelf->_mc___05Fs1593 = vlSelf->_mc___05Fs1530;
    vlSelf->_mc___05Fs1621 = vlSelf->_mc___05Fs1530;
    vlSelf->_mc___05Fs1650 = vlSelf->_mc___05Fs1530;
    vlSelf->_mc___05Fs1565 = vlSelf->_mc___05Fs1537;
    vlSelf->_mc___05Fs1600 = vlSelf->_mc___05Fs1537;
    if (vlSelf->_cp___05Fs9760) {
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_size = 3U;
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_dprv = 1U;
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_cmd = 0U;
    } else {
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_size 
            = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_mem_size;
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_dprv 
            = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_hls)
                ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_hstatus_spvp)
                : ((IData)(vlSelf->_mc___05Fs2828) ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_mpp)
                    : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)));
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_cmd 
            = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_mem_cmd;
    }
    vlSelf->_mc___05Fs1628 = vlSelf->_mc___05Fs1537;
    vlSelf->_mc___05Fs1657 = vlSelf->_mc___05Fs1537;
    vlSelf->_mc___05Fs1572 = vlSelf->_mc___05Fs1544;
    vlSelf->_mc___05Fs1607 = vlSelf->_mc___05Fs1544;
    vlSelf->_mc___05Fs1635 = vlSelf->_mc___05Fs1544;
    vlSelf->_mc___05Fs1664 = vlSelf->_mc___05Fs1544;
    vlSelf->_mc___05Fs1552 = vlSelf->_mc___05Fs1524;
    vlSelf->_mc___05Fs1587 = vlSelf->_mc___05Fs1524;
    vlSelf->_mc___05Fs1615 = vlSelf->_mc___05Fs1524;
    vlSelf->_mc___05Fs1644 = vlSelf->_mc___05Fs1524;
    vlSelf->_mc___05Fs1553 = vlSelf->_mc___05Fs1525;
    vlSelf->_mc___05Fs1588 = vlSelf->_mc___05Fs1525;
    vlSelf->_mc___05Fs1616 = vlSelf->_mc___05Fs1525;
    vlSelf->_mc___05Fs1645 = vlSelf->_mc___05Fs1525;
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_1 
        = ((IData)(vlSelf->_mc___05Fs1524) | (IData)(vlSelf->_mc___05Fs1525));
    vlSelf->_mc___05Fs1554 = vlSelf->_mc___05Fs1526;
    vlSelf->_mc___05Fs1589 = vlSelf->_mc___05Fs1526;
    vlSelf->_mc___05Fs1617 = vlSelf->_mc___05Fs1526;
    vlSelf->_mc___05Fs1646 = vlSelf->_mc___05Fs1526;
    vlSelf->_mc___05Fs1555 = vlSelf->_mc___05Fs1527;
    vlSelf->_mc___05Fs1590 = vlSelf->_mc___05Fs1527;
    vlSelf->_mc___05Fs1618 = vlSelf->_mc___05Fs1527;
    vlSelf->_mc___05Fs1647 = vlSelf->_mc___05Fs1527;
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_4 
        = ((IData)(vlSelf->_mc___05Fs1526) | (IData)(vlSelf->_mc___05Fs1527));
    vlSelf->_mc___05Fs1556 = vlSelf->_mc___05Fs1528;
    vlSelf->_mc___05Fs1591 = vlSelf->_mc___05Fs1528;
    vlSelf->_mc___05Fs1619 = vlSelf->_mc___05Fs1528;
    vlSelf->_mc___05Fs1648 = vlSelf->_mc___05Fs1528;
    vlSelf->_mc___05Fs1557 = vlSelf->_mc___05Fs1529;
    vlSelf->_mc___05Fs1592 = vlSelf->_mc___05Fs1529;
    vlSelf->_mc___05Fs1620 = vlSelf->_mc___05Fs1529;
    vlSelf->_mc___05Fs1649 = vlSelf->_mc___05Fs1529;
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_4 
        = ((IData)(vlSelf->_mc___05Fs1528) | (IData)(vlSelf->_mc___05Fs1529));
    vlSelf->_mc___05Fs1559 = vlSelf->_mc___05Fs1531;
    vlSelf->_mc___05Fs1594 = vlSelf->_mc___05Fs1531;
    vlSelf->_mc___05Fs1622 = vlSelf->_mc___05Fs1531;
    vlSelf->_mc___05Fs1651 = vlSelf->_mc___05Fs1531;
    vlSelf->_mc___05Fs1560 = vlSelf->_mc___05Fs1532;
    vlSelf->_mc___05Fs1595 = vlSelf->_mc___05Fs1532;
    vlSelf->_mc___05Fs1623 = vlSelf->_mc___05Fs1532;
    vlSelf->_mc___05Fs1652 = vlSelf->_mc___05Fs1532;
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_7 
        = ((IData)(vlSelf->_mc___05Fs1531) | (IData)(vlSelf->_mc___05Fs1532));
    vlSelf->_mc___05Fs1561 = vlSelf->_mc___05Fs1533;
    vlSelf->_mc___05Fs1596 = vlSelf->_mc___05Fs1533;
    vlSelf->_mc___05Fs1624 = vlSelf->_mc___05Fs1533;
    vlSelf->_mc___05Fs1653 = vlSelf->_mc___05Fs1533;
    vlSelf->_mc___05Fs1562 = vlSelf->_mc___05Fs1534;
    vlSelf->_mc___05Fs1597 = vlSelf->_mc___05Fs1534;
    vlSelf->_mc___05Fs1625 = vlSelf->_mc___05Fs1534;
    vlSelf->_mc___05Fs1654 = vlSelf->_mc___05Fs1534;
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_11 
        = ((IData)(vlSelf->_mc___05Fs1533) | (IData)(vlSelf->_mc___05Fs1534));
    vlSelf->_mc___05Fs1563 = vlSelf->_mc___05Fs1535;
    vlSelf->_mc___05Fs1598 = vlSelf->_mc___05Fs1535;
    vlSelf->_mc___05Fs1626 = vlSelf->_mc___05Fs1535;
    vlSelf->_mc___05Fs1655 = vlSelf->_mc___05Fs1535;
    vlSelf->_mc___05Fs1564 = vlSelf->_mc___05Fs1536;
    vlSelf->_mc___05Fs1599 = vlSelf->_mc___05Fs1536;
    vlSelf->_mc___05Fs1627 = vlSelf->_mc___05Fs1536;
    vlSelf->_mc___05Fs1656 = vlSelf->_mc___05Fs1536;
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_10 
        = ((IData)(vlSelf->_mc___05Fs1535) | (IData)(vlSelf->_mc___05Fs1536));
    vlSelf->_mc___05Fs1566 = vlSelf->_mc___05Fs1538;
    vlSelf->_mc___05Fs1601 = vlSelf->_mc___05Fs1538;
    vlSelf->_mc___05Fs1629 = vlSelf->_mc___05Fs1538;
    vlSelf->_mc___05Fs1658 = vlSelf->_mc___05Fs1538;
    vlSelf->_mc___05Fs1567 = vlSelf->_mc___05Fs1539;
    vlSelf->_mc___05Fs1602 = vlSelf->_mc___05Fs1539;
    vlSelf->_mc___05Fs1630 = vlSelf->_mc___05Fs1539;
    vlSelf->_mc___05Fs1659 = vlSelf->_mc___05Fs1539;
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_14 
        = ((IData)(vlSelf->_mc___05Fs1538) | (IData)(vlSelf->_mc___05Fs1539));
    vlSelf->_mc___05Fs1568 = vlSelf->_mc___05Fs1540;
    vlSelf->_mc___05Fs1603 = vlSelf->_mc___05Fs1540;
    vlSelf->_mc___05Fs1631 = vlSelf->_mc___05Fs1540;
    vlSelf->_mc___05Fs1660 = vlSelf->_mc___05Fs1540;
    vlSelf->_mc___05Fs1569 = vlSelf->_mc___05Fs1541;
    vlSelf->_mc___05Fs1604 = vlSelf->_mc___05Fs1541;
    vlSelf->_mc___05Fs1632 = vlSelf->_mc___05Fs1541;
    vlSelf->_mc___05Fs1661 = vlSelf->_mc___05Fs1541;
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_18 
        = ((IData)(vlSelf->_mc___05Fs1540) | (IData)(vlSelf->_mc___05Fs1541));
    vlSelf->_mc___05Fs1570 = vlSelf->_mc___05Fs1542;
    vlSelf->_mc___05Fs1605 = vlSelf->_mc___05Fs1542;
    vlSelf->_mc___05Fs1633 = vlSelf->_mc___05Fs1542;
    vlSelf->_mc___05Fs1662 = vlSelf->_mc___05Fs1542;
    vlSelf->_mc___05Fs1571 = vlSelf->_mc___05Fs1543;
    vlSelf->_mc___05Fs1606 = vlSelf->_mc___05Fs1543;
    vlSelf->_mc___05Fs1634 = vlSelf->_mc___05Fs1543;
    vlSelf->_mc___05Fs1663 = vlSelf->_mc___05Fs1543;
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_17 
        = ((IData)(vlSelf->_mc___05Fs1542) | (IData)(vlSelf->_mc___05Fs1543));
    vlSelf->_mc___05Fs1573 = vlSelf->_mc___05Fs1545;
    vlSelf->_mc___05Fs1608 = vlSelf->_mc___05Fs1545;
    vlSelf->_mc___05Fs1636 = vlSelf->_mc___05Fs1545;
    vlSelf->_mc___05Fs1665 = vlSelf->_mc___05Fs1545;
    vlSelf->_mc___05Fs1574 = vlSelf->_mc___05Fs1546;
    vlSelf->_mc___05Fs1609 = vlSelf->_mc___05Fs1546;
    vlSelf->_mc___05Fs1637 = vlSelf->_mc___05Fs1546;
    vlSelf->_mc___05Fs1666 = vlSelf->_mc___05Fs1546;
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_20 
        = ((IData)(vlSelf->_mc___05Fs1545) | (IData)(vlSelf->_mc___05Fs1546));
    vlSelf->_mc___05Fs1575 = vlSelf->_mc___05Fs1547;
    vlSelf->_mc___05Fs1610 = vlSelf->_mc___05Fs1547;
    vlSelf->_mc___05Fs1638 = vlSelf->_mc___05Fs1547;
    vlSelf->_mc___05Fs1667 = vlSelf->_mc___05Fs1547;
    vlSelf->_mc___05Fs1576 = vlSelf->_mc___05Fs1548;
    vlSelf->_mc___05Fs1611 = vlSelf->_mc___05Fs1548;
    vlSelf->_mc___05Fs1639 = vlSelf->_mc___05Fs1548;
    vlSelf->_mc___05Fs1668 = vlSelf->_mc___05Fs1548;
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_25 
        = ((IData)(vlSelf->_mc___05Fs1547) | (IData)(vlSelf->_mc___05Fs1548));
    vlSelf->_mc___05Fs1577 = vlSelf->_mc___05Fs1549;
    vlSelf->_mc___05Fs1612 = vlSelf->_mc___05Fs1549;
    vlSelf->_mc___05Fs1640 = vlSelf->_mc___05Fs1549;
    vlSelf->_mc___05Fs1669 = vlSelf->_mc___05Fs1549;
    vlSelf->_mc___05Fs1578 = vlSelf->_mc___05Fs1550;
    vlSelf->_mc___05Fs1613 = vlSelf->_mc___05Fs1550;
    vlSelf->_mc___05Fs1641 = vlSelf->_mc___05Fs1550;
    vlSelf->_mc___05Fs1670 = vlSelf->_mc___05Fs1550;
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___io_resp_bits_cfiType_output 
        = (((IData)(vlSelf->_mc___05Fs1523) ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__cfiType_0)
             : 0U) | (((IData)(vlSelf->_mc___05Fs1524)
                        ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__cfiType_1)
                        : 0U) | (((IData)(vlSelf->_mc___05Fs1525)
                                   ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__cfiType_2)
                                   : 0U) | (((IData)(vlSelf->_mc___05Fs1526)
                                              ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__cfiType_3)
                                              : 0U) 
                                            | (((IData)(vlSelf->_mc___05Fs1527)
                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__cfiType_4)
                                                 : 0U) 
                                               | (((IData)(vlSelf->_mc___05Fs1528)
                                                    ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__cfiType_5)
                                                    : 0U) 
                                                  | (((IData)(vlSelf->_mc___05Fs1529)
                                                       ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__cfiType_6)
                                                       : 0U) 
                                                     | (((IData)(vlSelf->_mc___05Fs1530)
                                                          ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__cfiType_7)
                                                          : 0U) 
                                                        | (((IData)(vlSelf->_mc___05Fs1531)
                                                             ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__cfiType_8)
                                                             : 0U) 
                                                           | (((IData)(vlSelf->_mc___05Fs1532)
                                                                ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__cfiType_9)
                                                                : 0U) 
                                                              | (((IData)(vlSelf->_mc___05Fs1533)
                                                                   ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__cfiType_10)
                                                                   : 0U) 
                                                                 | (((IData)(vlSelf->_mc___05Fs1534)
                                                                      ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__cfiType_11)
                                                                      : 0U) 
                                                                    | (((IData)(vlSelf->_mc___05Fs1535)
                                                                         ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__cfiType_12)
                                                                         : 0U) 
                                                                       | (((IData)(vlSelf->_mc___05Fs1536)
                                                                            ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__cfiType_13)
                                                                            : 0U) 
                                                                          | (((IData)(vlSelf->_mc___05Fs1537)
                                                                               ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__cfiType_14)
                                                                               : 0U) 
                                                                             | (((IData)(vlSelf->_mc___05Fs1538)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__cfiType_15)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1539)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__cfiType_16)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1540)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__cfiType_17)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1541)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__cfiType_18)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1542)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__cfiType_19)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1543)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__cfiType_20)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1544)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__cfiType_21)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1545)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__cfiType_22)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1546)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__cfiType_23)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1547)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__cfiType_24)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1548)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__cfiType_25)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1549)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__cfiType_26)
                                                                                 : 0U) 
                                                                                | ((IData)(vlSelf->_mc___05Fs1550)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__cfiType_27)
                                                                                 : 0U))))))))))))))))))))))))))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___io_resp_bits_bridx_output 
        = (((IData)(vlSelf->_mc___05Fs1523) & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__brIdx_0)) 
           | (((IData)(vlSelf->_mc___05Fs1524) & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__brIdx_1)) 
              | (((IData)(vlSelf->_mc___05Fs1525) & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__brIdx_2)) 
                 | (((IData)(vlSelf->_mc___05Fs1526) 
                     & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__brIdx_3)) 
                    | (((IData)(vlSelf->_mc___05Fs1527) 
                        & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__brIdx_4)) 
                       | (((IData)(vlSelf->_mc___05Fs1528) 
                           & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__brIdx_5)) 
                          | (((IData)(vlSelf->_mc___05Fs1529) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__brIdx_6)) 
                             | (((IData)(vlSelf->_mc___05Fs1530) 
                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__brIdx_7)) 
                                | (((IData)(vlSelf->_mc___05Fs1531) 
                                    & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__brIdx_8)) 
                                   | (((IData)(vlSelf->_mc___05Fs1532) 
                                       & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__brIdx_9)) 
                                      | (((IData)(vlSelf->_mc___05Fs1533) 
                                          & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__brIdx_10)) 
                                         | (((IData)(vlSelf->_mc___05Fs1534) 
                                             & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__brIdx_11)) 
                                            | (((IData)(vlSelf->_mc___05Fs1535) 
                                                & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__brIdx_12)) 
                                               | (((IData)(vlSelf->_mc___05Fs1536) 
                                                   & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__brIdx_13)) 
                                                  | (((IData)(vlSelf->_mc___05Fs1537) 
                                                      & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__brIdx_14)) 
                                                     | (((IData)(vlSelf->_mc___05Fs1538) 
                                                         & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__brIdx_15)) 
                                                        | (((IData)(vlSelf->_mc___05Fs1539) 
                                                            & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__brIdx_16)) 
                                                           | (((IData)(vlSelf->_mc___05Fs1540) 
                                                               & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__brIdx_17)) 
                                                              | (((IData)(vlSelf->_mc___05Fs1541) 
                                                                  & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__brIdx_18)) 
                                                                 | (((IData)(vlSelf->_mc___05Fs1542) 
                                                                     & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__brIdx_19)) 
                                                                    | (((IData)(vlSelf->_mc___05Fs1543) 
                                                                        & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__brIdx_20)) 
                                                                       | (((IData)(vlSelf->_mc___05Fs1544) 
                                                                           & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__brIdx_21)) 
                                                                          | (((IData)(vlSelf->_mc___05Fs1545) 
                                                                              & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__brIdx_22)) 
                                                                             | (((IData)(vlSelf->_mc___05Fs1546) 
                                                                                & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__brIdx_23)) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1547) 
                                                                                & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__brIdx_24)) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1548) 
                                                                                & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__brIdx_25)) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1549) 
                                                                                & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__brIdx_26)) 
                                                                                | ((IData)(vlSelf->_mc___05Fs1550) 
                                                                                & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__brIdx_27)))))))))))))))))))))))))))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_9 
        = (0x7fU & (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pageHit) 
                     << 1U) >> (((IData)(vlSelf->_mc___05Fs1523)
                                  ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPages_0)
                                  : 0U) | (((IData)(vlSelf->_mc___05Fs1524)
                                             ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPages_1)
                                             : 0U) 
                                           | (((IData)(vlSelf->_mc___05Fs1525)
                                                ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPages_2)
                                                : 0U) 
                                              | (((IData)(vlSelf->_mc___05Fs1526)
                                                   ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPages_3)
                                                   : 0U) 
                                                 | (((IData)(vlSelf->_mc___05Fs1527)
                                                      ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPages_4)
                                                      : 0U) 
                                                    | (((IData)(vlSelf->_mc___05Fs1528)
                                                         ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPages_5)
                                                         : 0U) 
                                                       | (((IData)(vlSelf->_mc___05Fs1529)
                                                            ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPages_6)
                                                            : 0U) 
                                                          | (((IData)(vlSelf->_mc___05Fs1530)
                                                               ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPages_7)
                                                               : 0U) 
                                                             | (((IData)(vlSelf->_mc___05Fs1531)
                                                                  ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPages_8)
                                                                  : 0U) 
                                                                | (((IData)(vlSelf->_mc___05Fs1532)
                                                                     ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPages_9)
                                                                     : 0U) 
                                                                   | (((IData)(vlSelf->_mc___05Fs1533)
                                                                        ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPages_10)
                                                                        : 0U) 
                                                                      | (((IData)(vlSelf->_mc___05Fs1534)
                                                                           ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPages_11)
                                                                           : 0U) 
                                                                         | (((IData)(vlSelf->_mc___05Fs1535)
                                                                              ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPages_12)
                                                                              : 0U) 
                                                                            | (((IData)(vlSelf->_mc___05Fs1536)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPages_13)
                                                                                 : 0U) 
                                                                               | (((IData)(vlSelf->_mc___05Fs1537)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPages_14)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1538)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPages_15)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1539)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPages_16)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1540)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPages_17)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1541)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPages_18)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1542)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPages_19)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1543)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPages_20)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1544)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPages_21)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1545)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPages_22)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1546)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPages_23)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1547)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPages_24)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1548)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPages_25)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1549)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPages_26)
                                                                                 : 0U) 
                                                                                | ((IData)(vlSelf->_mc___05Fs1550)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPages_27)
                                                                                 : 0U))))))))))))))))))))))))))))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_23 
        = ((IData)(vlSelf->_mc___05Fs1549) | (IData)(vlSelf->_mc___05Fs1550));
    ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_10 
        = (((IData)(vlSelf->_mc___05Fs1523) ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPages_0)
             : 0U) | (((IData)(vlSelf->_mc___05Fs1524)
                        ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPages_1)
                        : 0U) | (((IData)(vlSelf->_mc___05Fs1525)
                                   ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPages_2)
                                   : 0U) | (((IData)(vlSelf->_mc___05Fs1526)
                                              ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPages_3)
                                              : 0U) 
                                            | (((IData)(vlSelf->_mc___05Fs1527)
                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPages_4)
                                                 : 0U) 
                                               | (((IData)(vlSelf->_mc___05Fs1528)
                                                    ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPages_5)
                                                    : 0U) 
                                                  | (((IData)(vlSelf->_mc___05Fs1529)
                                                       ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPages_6)
                                                       : 0U) 
                                                     | (((IData)(vlSelf->_mc___05Fs1530)
                                                          ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPages_7)
                                                          : 0U) 
                                                        | (((IData)(vlSelf->_mc___05Fs1531)
                                                             ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPages_8)
                                                             : 0U) 
                                                           | (((IData)(vlSelf->_mc___05Fs1532)
                                                                ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPages_9)
                                                                : 0U) 
                                                              | (((IData)(vlSelf->_mc___05Fs1533)
                                                                   ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPages_10)
                                                                   : 0U) 
                                                                 | (((IData)(vlSelf->_mc___05Fs1534)
                                                                      ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPages_11)
                                                                      : 0U) 
                                                                    | (((IData)(vlSelf->_mc___05Fs1535)
                                                                         ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPages_12)
                                                                         : 0U) 
                                                                       | (((IData)(vlSelf->_mc___05Fs1536)
                                                                            ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPages_13)
                                                                            : 0U) 
                                                                          | (((IData)(vlSelf->_mc___05Fs1537)
                                                                               ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPages_14)
                                                                               : 0U) 
                                                                             | (((IData)(vlSelf->_mc___05Fs1538)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPages_15)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1539)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPages_16)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1540)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPages_17)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1541)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPages_18)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1542)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPages_19)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1543)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPages_20)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1544)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPages_21)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1545)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPages_22)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1546)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPages_23)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1547)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPages_24)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1548)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPages_25)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1549)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPages_26)
                                                                                 : 0U) 
                                                                                | ((IData)(vlSelf->_mc___05Fs1550)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPages_27)
                                                                                 : 0U))))))))))))))))))))))))))));
    vlSelf->_mc___05Fs1274 = (0U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_victim_state_state));
    vlSelf->_mc___05Fs1275 = (1U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_victim_state_state));
    vlSelf->_mc___05Fs1276 = (2U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_victim_state_state));
    vlSelf->_mc___05Fs1277 = (3U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_victim_state_state));
    vlSelf->_mc___05Fs1313 = (1U & (~ (IData)(vlSelf->_cp___05Fs9252)));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT___io_in_a_ready_output 
        = ((~ (IData)(vlSelf->_mc___05Fs803)) & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT___GEN_2));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_1_io_out_a_valid 
        = ((IData)(vlSelf->_cp___05Fs7512) & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__o_data_q__DOT__empty)));
    vlSelf->mmio_axi4_0_b_ready = (1U & (~ (IData)(vlSelf->_mc___05Fs188)));
    vlSelf->_cp___05Fs1618 = (1U & (~ ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT__empty) 
                                       | ((((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full) 
                                            << 4U) 
                                           | (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full) 
                                               << 3U) 
                                              | ((4U 
                                                  & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_3__DOT__empty)) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_2__DOT__empty)) 
                                                        << 1U)) 
                                                    | (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full))))) 
                                          >> (0xfU 
                                              & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))));
    vlSelf->_cp___05Fs5003 = vlSelf->_cp___05Fs11051;
    vlSelf->_cp___05Fs5012 = vlSelf->_cp___05Fs11060;
    vlSelf->_cp___05Fs5052 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_44)));
    vlSelf->_cp___05Fs5081 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_65)));
    vlSelf->_cp___05Fs11100 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_35)));
    vlSelf->_cp___05Fs11129 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__monitor__DOT___GEN_56)));
    vlSelf->_cp___05Fs4959 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__drop)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__full));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_d_denied 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_first)
            ? (3U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4index_auto_in_r_bits_resp))
            : (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_denied_r));
    vlSelf->_cp___05Fs2896 = ((IData)(vlSelf->_mc___05Fs314) 
                              & (IData)(vlSelf->_mc___05Fs315));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_32 
        = (1U & ((~ (IData)(vlSelf->_mc___05Fs315)) 
                 | (IData)(vlSelf->_mc___05Fs314)));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__nodeOut_aw_valid 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q_1__DOT___io_deq_valid_output) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_29));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4frag_auto_out_aw_bits_addr 
        = (~ (((~ (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                   >> 3U)) << 3U) | (7U & ((~ ((IData)(7U) 
                                               << (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))) 
                                           | (~ vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1)))));
    vlSelf->_mc___05Fs312 = (0U == ((2U & (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                           >> 0x1eU)) 
                                    | (1U & (~ (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                                >> 0x1eU)))));
    ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_21 
        = (0xffU & ((vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                     >> 3U) | (0xfeU & (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                        >> 2U))));
    vlSelf->_mc___05Fs310 = ((0U == ((0x18U & (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                               >> 0x1bU)) 
                                     | ((4U & (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                               >> 0x19U)) 
                                        | ((2U & (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                                  >> 0x18U)) 
                                           | (1U & 
                                              (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                               >> 0xdU)))))) 
                             | ((0U == ((0xcU & (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                                 >> 0x1cU)) 
                                        | ((2U & (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                                  >> 0x1aU)) 
                                           | (1U & 
                                              (~ (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                                  >> 0x19U)))))) 
                                | ((0U == ((6U & (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                                  >> 0x1dU)) 
                                           | (1U & 
                                              (~ (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                                  >> 0x1bU))))) 
                                   | (2U == (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                             >> 0x1eU)))));
    vlSelf->_mc___05Fs311 = (0U == ((0x18U & (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                              >> 0x1bU)) 
                                    | ((4U & (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                              >> 0x19U)) 
                                       | ((2U & (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                                 >> 0x18U)) 
                                          | (1U & (~ 
                                                   (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr_1 
                                                    >> 0xdU)))))));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT___io_in_a_ready_output 
        = ((~ (IData)(vlSelf->_mc___05Fs799)) & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT___GEN_2));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_io_out_a_valid 
        = ((IData)(vlSelf->_cp___05Fs7495) & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__o_data_q__DOT__empty)));
    ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_19 
        = (0xffU & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len_1)) 
                    | VL_SHIFTL_III(8,8,32, (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len_1)), 1U)));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_16 
        = (0x3fU & (((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len_1) 
                     >> 1U) | ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len_1) 
                               >> 2U)));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4frag_auto_out_ar_bits_addr 
        = (~ (((~ (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                   >> 3U)) << 3U) | (7U & ((~ ((IData)(7U) 
                                               << (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))) 
                                           | (~ vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr)))));
    vlSelf->_mc___05Fs306 = ((0U == ((0x30U & (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                               >> 0x1aU)) 
                                     | ((8U & (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                               >> 0x18U)) 
                                        | ((4U & (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                  >> 0x17U)) 
                                           | ((2U & 
                                               (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                >> 0xfU)) 
                                              | (1U 
                                                 & (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                    >> 0xdU))))))) 
                             | ((0U == ((0x18U & (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                  >> 0x1bU)) 
                                        | ((4U & (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                  >> 0x19U)) 
                                           | ((2U & 
                                               (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                >> 0x18U)) 
                                              | (1U 
                                                 & (~ 
                                                    (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                     >> 0x10U))))))) 
                                | ((0U == ((0x18U & 
                                            (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                             >> 0x1bU)) 
                                           | ((4U & 
                                               (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                >> 0x19U)) 
                                              | ((2U 
                                                  & ((~ 
                                                      (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                       >> 0x19U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                       >> 0x10U)))))) 
                                   | ((0U == ((6U & 
                                               (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                >> 0x1dU)) 
                                              | (1U 
                                                 & (~ 
                                                    (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                     >> 0x1bU))))) 
                                      | ((0U == ((2U 
                                                  & (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                     >> 0x1eU)) 
                                                 | (1U 
                                                    & (~ 
                                                       (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                        >> 0x1eU))))) 
                                         | (2U == (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                   >> 0x1eU)))))));
    vlSelf->_mc___05Fs307 = (0U == ((0x30U & (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                              >> 0x1aU)) 
                                    | ((8U & (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                              >> 0x18U)) 
                                       | ((4U & (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                 >> 0x17U)) 
                                          | ((2U & 
                                              (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                               >> 0xfU)) 
                                             | (1U 
                                                & (~ 
                                                   (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                                    >> 0xdU))))))));
    ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_6 
        = (0xffU & ((vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                     >> 3U) | (0xfeU & (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__addr 
                                        >> 2U))));
    vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_81 
        = (1U & ((~ (IData)(vlSelf->_mc___05Fs250)) 
                 | (IData)(vlSelf->_mc___05Fs264)));
    vlSelf->_cp___05Fs2540 = ((IData)(vlSelf->_cp___05Fs1991) 
                              & (~ (IData)(vlSelf->_mc___05Fs250)));
    vlSelf->_cp___05Fs2181 = ((~ (IData)(vlSelf->_mc___05Fs250)) 
                              & (IData)(vlSelf->_cp___05Fs1991));
    vlSelf->_cp___05Fs987 = ((IData)(vlSelf->_cp___05Fs796) 
                             & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor__DOT__a_first_counter)));
    vlSelf->_cp___05Fs1016 = ((IData)(vlSelf->_cp___05Fs796) 
                              & (IData)(vlSelf->_mc___05Fs129));
    vlSelf->_cp___05Fs1883 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_46)));
    vlSelf->_cp___05Fs1936 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_47 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__size_1));
    vlSelf->_cp___05Fs1797 = (2U >= (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_48 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__source_1));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_79 
        = (0x7ffffU & (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_1 
                       >> (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source)));
    VL_SHIFTR_WWI(152,152,8, __Vtemp_183, vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                   << 3U));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_70 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size) 
           == (0x7fU & (__Vtemp_183[0U] >> 1U)));
    VL_SHIFTR_WWI(152,152,8, __Vtemp_186, vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                   << 3U));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_80 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size) 
           == (0x7fU & (__Vtemp_186[0U] >> 1U)));
    VL_SHIFTR_WWI(76,76,7, __Vtemp_189, vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                   << 2U));
    ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_51[0U] 
        = __Vtemp_189[0U];
    ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_51[1U] 
        = __Vtemp_189[1U];
    ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_51[2U] 
        = (0xfffU & __Vtemp_189[2U]);
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__source_ok_1 
        = ((0U == (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                         >> 3U))) | ((1U == (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                                                   >> 3U))) 
                                     | ((0x10U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source)) 
                                        | ((0x11U == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source)) 
                                           | (0x12U 
                                              == (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source))))));
    vlSelf->_mc___05Fs74 = (1U & (~ ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                                     >> 4U)));
    vlSelf->_mc___05Fs75 = (4U == (7U & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                                         >> 2U)));
    vlSelf->_cp___05Fs3987 = vlSelf->_cp___05Fs3710;
    vlSelf->_cp___05Fs3657 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_56)));
    vlSelf->_cp___05Fs3659 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_57)));
    vlSelf->_cp___05Fs3661 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_58)));
    vlSelf->_cp___05Fs3663 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_59)));
    vlSelf->_cp___05Fs3665 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_60)));
    vlSelf->_cp___05Fs3688 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_82)));
    vlSelf->_cp___05Fs3707 = (1U & (~ vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_91));
    vlSelf->_cp___05Fs3712 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_92)));
    vlSelf->_cp___05Fs3936 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_58)));
    vlSelf->_cp___05Fs3938 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_59)));
    vlSelf->_cp___05Fs3940 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_60)));
    vlSelf->_cp___05Fs3942 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_61)));
    vlSelf->_cp___05Fs3965 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_83)));
    vlSelf->_cp___05Fs3984 = (1U & (~ vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_92));
    vlSelf->_cp___05Fs3989 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__monitor__DOT___GEN_93)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_80 
        = (((7U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
            == ((0x17U >= (0x1fU & ((IData)(3U) * (7U 
                                                   & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_63[0U] 
                                                      >> 1U)))))
                 ? (7U & (0x911240U >> (0x1fU & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_63[0U] 
                                                     >> 1U))))))
                 : 0U)) | ((7U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
                           == ((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_63[0U] 
                                                       >> 1U)))))
                                ? (7U & (0x951240U 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_63[0U] 
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
    vlSelf->_cp___05Fs3569 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__source_ok_1)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h788cf908__0 
        = ((IData)(vlSelf->_mc___05Fs427) & (IData)(vlSelf->_cp___05Fs3567));
    vlSelf->_cp___05Fs3590 = vlSelf->_cp___05Fs3575;
    vlSelf->_cp___05Fs3614 = vlSelf->_cp___05Fs3575;
    vlSelf->_cp___05Fs3632 = vlSelf->_cp___05Fs3575;
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_61 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT__denied) 
           == (IData)(vlSelf->_cp___05Fs3577));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_42 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs3577)) 
                 | (IData)(vlSelf->_cp___05Fs3575)));
    vlSelf->_cp___05Fs3617 = vlSelf->_mc___05Fs496;
    vlSelf->_cp___05Fs4010 = ((IData)(vlSelf->_cp___05Fs4011) 
                              & (IData)(vlSelf->_mc___05Fs496));
    vlSelf->_cp___05Fs4012 = ((IData)(vlSelf->_mc___05Fs495) 
                              & ((IData)(vlSelf->_cp___05Fs3608) 
                                 & (IData)(vlSelf->_cp___05Fs4011)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__d_drop 
        = ((IData)(vlSelf->_mc___05Fs495) & ((IData)(vlSelf->_mc___05Fs496) 
                                             & (IData)(vlSelf->_cp___05Fs4011)));
    __Vtemp_191[0U] = 0U;
    __Vtemp_191[1U] = 0U;
    __Vtemp_191[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_192, __Vtemp_191, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_195[0U] = 0U;
    __Vtemp_195[1U] = 0U;
    __Vtemp_195[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_196, __Vtemp_195, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_199[0U] = 0U;
    __Vtemp_199[1U] = 0U;
    __Vtemp_199[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_200, __Vtemp_199, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_203[0U] = 0U;
    __Vtemp_203[1U] = 0U;
    __Vtemp_203[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_204, __Vtemp_203, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_207[0U] = 0U;
    __Vtemp_207[1U] = 0U;
    __Vtemp_207[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_208, __Vtemp_207, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_211[0U] = 0U;
    __Vtemp_211[1U] = 0U;
    __Vtemp_211[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_212, __Vtemp_211, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_215[0U] = 0U;
    __Vtemp_215[1U] = 0U;
    __Vtemp_215[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_216, __Vtemp_215, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_219[0U] = 0U;
    __Vtemp_219[1U] = 0U;
    __Vtemp_219[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_220, __Vtemp_219, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_223[0U] = 0U;
    __Vtemp_223[1U] = 0U;
    __Vtemp_223[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_224, __Vtemp_223, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_227[0U] = 0U;
    __Vtemp_227[1U] = 0U;
    __Vtemp_227[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_228, __Vtemp_227, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_231[0U] = 0U;
    __Vtemp_231[1U] = 0U;
    __Vtemp_231[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_232, __Vtemp_231, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_235[0U] = 0U;
    __Vtemp_235[1U] = 0U;
    __Vtemp_235[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_236, __Vtemp_235, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_239[0U] = 0U;
    __Vtemp_239[1U] = 0U;
    __Vtemp_239[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_240, __Vtemp_239, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_243[0U] = 0U;
    __Vtemp_243[1U] = 0U;
    __Vtemp_243[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_244, __Vtemp_243, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_247[0U] = 0U;
    __Vtemp_247[1U] = 0U;
    __Vtemp_247[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_248, __Vtemp_247, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_251[0U] = 0U;
    __Vtemp_251[1U] = 0U;
    __Vtemp_251[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_252, __Vtemp_251, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_255[0U] = 0U;
    __Vtemp_255[1U] = 0U;
    __Vtemp_255[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_256, __Vtemp_255, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_259[0U] = 0U;
    __Vtemp_259[1U] = 0U;
    __Vtemp_259[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_260, __Vtemp_259, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_263[0U] = 0U;
    __Vtemp_263[1U] = 0U;
    __Vtemp_263[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_264, __Vtemp_263, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_267[0U] = 0U;
    __Vtemp_267[1U] = 0U;
    __Vtemp_267[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_268, __Vtemp_267, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_271[0U] = 0U;
    __Vtemp_271[1U] = 0U;
    __Vtemp_271[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_272, __Vtemp_271, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_275[0U] = 0U;
    __Vtemp_275[1U] = 0U;
    __Vtemp_275[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_276, __Vtemp_275, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_279[0U] = 0U;
    __Vtemp_279[1U] = 0U;
    __Vtemp_279[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_280, __Vtemp_279, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_283[0U] = 0U;
    __Vtemp_283[1U] = 0U;
    __Vtemp_283[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_284, __Vtemp_283, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_287[0U] = 0U;
    __Vtemp_287[1U] = 0U;
    __Vtemp_287[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_288, __Vtemp_287, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_291[0U] = 0U;
    __Vtemp_291[1U] = 0U;
    __Vtemp_291[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_292, __Vtemp_291, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_295[0U] = 0U;
    __Vtemp_295[1U] = 0U;
    __Vtemp_295[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_296, __Vtemp_295, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_299[0U] = 0U;
    __Vtemp_299[1U] = 0U;
    __Vtemp_299[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_300, __Vtemp_299, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_303[0U] = 0U;
    __Vtemp_303[1U] = 0U;
    __Vtemp_303[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_304, __Vtemp_303, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_307[0U] = 0U;
    __Vtemp_307[1U] = 0U;
    __Vtemp_307[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_308, __Vtemp_307, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_311[0U] = 0U;
    __Vtemp_311[1U] = 0U;
    __Vtemp_311[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_312, __Vtemp_311, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_315[0U] = 0U;
    __Vtemp_315[1U] = 0U;
    __Vtemp_315[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_316, __Vtemp_315, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_319[0U] = 0U;
    __Vtemp_319[1U] = 0U;
    __Vtemp_319[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_320, __Vtemp_319, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_323[0U] = 0U;
    __Vtemp_323[1U] = 0U;
    __Vtemp_323[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_324, __Vtemp_323, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_327[0U] = 0U;
    __Vtemp_327[1U] = 0U;
    __Vtemp_327[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_328, __Vtemp_327, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_331[0U] = 0U;
    __Vtemp_331[1U] = 0U;
    __Vtemp_331[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_332, __Vtemp_331, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_335[0U] = 0U;
    __Vtemp_335[1U] = 0U;
    __Vtemp_335[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_336, __Vtemp_335, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_339[0U] = 0U;
    __Vtemp_339[1U] = 0U;
    __Vtemp_339[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_340, __Vtemp_339, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_343[0U] = 0U;
    __Vtemp_343[1U] = 0U;
    __Vtemp_343[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_344, __Vtemp_343, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_347[0U] = 0U;
    __Vtemp_347[1U] = 0U;
    __Vtemp_347[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_348, __Vtemp_347, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_351[0U] = 0U;
    __Vtemp_351[1U] = 0U;
    __Vtemp_351[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_352, __Vtemp_351, 
                   (0x3fU & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h3152f987__0 
        = ((IData)(vlSelf->_mc___05Fs2285) ? (7ULL 
                                              | ((((IData)(vlSelf->_mc___05Fs2280) 
                                                   | ((IData)(vlSelf->_mc___05Fs2279) 
                                                      | ((IData)(vlSelf->_mc___05Fs2278) 
                                                         | (IData)(vlSelf->_mc___05Fs2277))))
                                                   ? 0x7ffffffffffffULL
                                                   : 
                                                  (((QData)((IData)(
                                                                    (1U 
                                                                     & (__Vtemp_192[0U] 
                                                                        >> 0xdU)))) 
                                                    << 0x32U) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (__Vtemp_196[0U] 
                                                                           >> 0xeU)))) 
                                                       << 0x31U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (__Vtemp_200[0U] 
                                                                              >> 0xfU)))) 
                                                          << 0x30U) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (__Vtemp_204[0U] 
                                                                                >> 0x10U)))) 
                                                             << 0x2fU) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_208[0U] 
                                                                                >> 0x11U)))) 
                                                                << 0x2eU) 
                                                               | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1 
                                                                                >> 0xfU) 
                                                                                | (5U 
                                                                                & ((0xcU 
                                                                                & (__Vtemp_212[0U] 
                                                                                >> 0x11U)) 
                                                                                | (3U 
                                                                                & (__Vtemp_216[0U] 
                                                                                >> 0x15U)))))))) 
                                                                   << 0x2aU) 
                                                                  | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1 
                                                                                >> 7U) 
                                                                                | (0x55U 
                                                                                & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_0)))))) 
                                                                      << 0x22U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_0) 
                                                                                >> 1U)))) 
                                                                         << 0x21U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1 
                                                                                >> 5U) 
                                                                                | (__Vtemp_220[0U] 
                                                                                >> 0x1fU))))) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                ((__Vtemp_224[1U] 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (__Vtemp_228[1U] 
                                                                                << 0x1dU)) 
                                                                                | (((0x38000000U 
                                                                                & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1 
                                                                                << 0x1bU)) 
                                                                                | (0x14000000U 
                                                                                & ((0x30000000U 
                                                                                & (__Vtemp_232[1U] 
                                                                                << 0x19U)) 
                                                                                | (0xc000000U 
                                                                                & (__Vtemp_236[1U] 
                                                                                << 0x15U))))) 
                                                                                | ((0x2000000U 
                                                                                & (__Vtemp_240[1U] 
                                                                                << 0x13U)) 
                                                                                | ((0x1000000U 
                                                                                & (__Vtemp_244[1U] 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (__Vtemp_248[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x400000U 
                                                                                & (__Vtemp_252[1U] 
                                                                                << 0xdU)) 
                                                                                | ((0x200000U 
                                                                                & (__Vtemp_256[1U] 
                                                                                << 0xbU)) 
                                                                                | ((0x100000U 
                                                                                & (__Vtemp_260[1U] 
                                                                                << 9U)) 
                                                                                | ((0x80000U 
                                                                                & (__Vtemp_264[1U] 
                                                                                << 7U)) 
                                                                                | ((0x40000U 
                                                                                & (__Vtemp_268[1U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & (__Vtemp_272[1U] 
                                                                                << 3U)) 
                                                                                | ((0x10000U 
                                                                                & (__Vtemp_276[1U] 
                                                                                << 1U)) 
                                                                                | ((0x8000U 
                                                                                & (__Vtemp_280[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (__Vtemp_284[1U] 
                                                                                >> 3U)) 
                                                                                | ((((0x2000U 
                                                                                & (__Vtemp_288[1U] 
                                                                                >> 5U)) 
                                                                                | (0x800U 
                                                                                & (__Vtemp_292[1U] 
                                                                                >> 9U))) 
                                                                                | (0x1400U 
                                                                                & ((0x3000U 
                                                                                & (__Vtemp_296[1U] 
                                                                                >> 7U)) 
                                                                                | (0xc00U 
                                                                                & (__Vtemp_300[1U] 
                                                                                >> 0xbU))))) 
                                                                                | ((0x200U 
                                                                                & (__Vtemp_304[1U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (__Vtemp_308[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (__Vtemp_312[1U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (__Vtemp_316[1U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (__Vtemp_320[1U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (__Vtemp_324[1U] 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (__Vtemp_328[1U] 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (__Vtemp_332[1U] 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (__Vtemp_336[1U] 
                                                                                >> 0x1dU)) 
                                                                                | (__Vtemp_340[1U] 
                                                                                >> 0x1fU)))))))))))))))))))))))))))))))))))))) 
                                                 << 3U))
            : (QData)((IData)((((IData)(vlSelf->_mc___05Fs2280) 
                                & ((IData)(vlSelf->_mc___05Fs2279) 
                                   & ((IData)(vlSelf->_mc___05Fs2278) 
                                      & (IData)(vlSelf->_mc___05Fs2277))))
                                ? ((4U & (__Vtemp_344[0U] 
                                          << 2U)) | 
                                   ((2U & __Vtemp_348[0U]) 
                                    | (1U & (__Vtemp_352[0U] 
                                             >> 2U))))
                                : 0U))));
    ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_4 
        = (0xffU & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len)) 
                    | VL_SHIFTL_III(8,8,32, (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len)), 1U)));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_1 
        = (0x3fU & (((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len) 
                     >> 1U) | ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len) 
                               >> 2U)));
    vlSelf->_mc___05Fs485 = ((~ (IData)(vlSelf->_mc___05Fs428)) 
                             & (IData)(vlSelf->_mc___05Fs486));
    vlSelf->_cp___05Fs4006 = ((~ (IData)(vlSelf->_mc___05Fs428)) 
                              & (((IData)(vlSelf->_mc___05Fs486) 
                                  | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__state_0)) 
                                 & (IData)(vlSelf->_mc___05Fs483)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__source_i_ready 
        = (1U & ((~ (IData)(vlSelf->_mc___05Fs428)) 
                 & ((IData)(vlSelf->_mc___05Fs486) ? 
                    (~ (IData)(vlSelf->_mc___05Fs483))
                     : (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__state_1))));
    vlSelf->_cp___05Fs3095 = ((IData)(vlSelf->_cp___05Fs2904) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter)));
    vlSelf->_cp___05Fs3124 = ((IData)(vlSelf->_cp___05Fs2904) 
                              & (IData)(vlSelf->_mc___05Fs332));
    vlSelf->_mc___05Fs950 = ((~ (IData)(vlSelf->_mc___05Fs3400)) 
                             & (IData)(vlSelf->_mc___05Fs951));
    vlSelf->_cp___05Fs272 = vlSelf->_cp___05Fs1067;
    vlSelf->_cp___05Fs1443 = ((IData)(vlSelf->_cp___05Fs1067) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__a_first_counter)));
    vlSelf->_cp___05Fs648 = ((IData)(vlSelf->_cp___05Fs1067) 
                             & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__a_first_counter)));
    vlSelf->_cp___05Fs1498 = ((IData)(vlSelf->_cp___05Fs1067) 
                              & (IData)(vlSelf->_mc___05Fs161));
    vlSelf->_cp___05Fs703 = ((IData)(vlSelf->_cp___05Fs1067) 
                             & (IData)(vlSelf->_mc___05Fs37));
    vlSelf->_mc___05Fs1853 = ((~ (IData)(vlSelf->_mc___05Fs2072)) 
                              & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__intValue_res 
                                 >> 0x3fU));
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
    vlSelf->_cp___05Fs650 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_83)));
    vlSelf->_cp___05Fs652 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_84)));
    vlSelf->_cp___05Fs654 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_85)));
    vlSelf->_cp___05Fs656 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_86)));
    vlSelf->_cp___05Fs658 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_87)));
    vlSelf->_cp___05Fs706 = (1U & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_118));
    vlSelf->_cp___05Fs1445 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_83)));
    vlSelf->_cp___05Fs1447 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_84)));
    vlSelf->_cp___05Fs1449 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_85)));
    vlSelf->_cp___05Fs1451 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_86)));
    vlSelf->_cp___05Fs1453 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_87)));
    vlSelf->_cp___05Fs1501 = (1U & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_118));
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
    vlSelf->_cp___05Fs1082 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_5));
    vlSelf->_cp___05Fs1107 = vlSelf->_cp___05Fs1088;
    vlSelf->_cp___05Fs1122 = vlSelf->_cp___05Fs1088;
    vlSelf->_cp___05Fs1179 = vlSelf->_cp___05Fs1088;
    vlSelf->_cp___05Fs293 = vlSelf->_cp___05Fs1088;
    vlSelf->_cp___05Fs312 = vlSelf->_cp___05Fs1088;
    vlSelf->_cp___05Fs327 = vlSelf->_cp___05Fs1088;
    vlSelf->_cp___05Fs384 = vlSelf->_cp___05Fs1088;
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_19 
        = ((0U == (0xfffffU & ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                << 8U) | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0x18U)))) 
           | (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_14));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_24 
        = ((0xdU > (0xfU & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U))) & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_14));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_2 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc) 
           | (IData)(((0x40U == (0xc0U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_2))));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_3 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc) 
           | (IData)(((0x40U == (0xc0U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_3))));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_4 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_1) 
           | (IData)(((0x40U == (0xc0U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_4))));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_5 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_1) 
           | (IData)(((0x40U == (0xc0U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_5))));
    vlSelf->_cp___05Fs1078 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__source_ok)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_9 
        = ((0xdU > (0xfU & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U))) & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__source_ok));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_1_valid 
        = ((IData)(vlSelf->_cp___05Fs1067) & (IData)(vlSelf->_mc___05Fs56));
    vlSelf->_mc___05Fs180 = (1U & (~ (IData)(vlSelf->_mc___05Fs181)));
    vlSelf->_mc___05Fs178 = (1U & (~ (IData)(vlSelf->_mc___05Fs179)));
    ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_18 
        = (0U == (((IData)(vlSelf->_mc___05Fs179) << 2U) 
                  | (3U & (~ ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                               << 0x17U) | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                            >> 9U))))));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_0_valid 
        = ((IData)(vlSelf->_cp___05Fs1067) & (IData)(vlSelf->_mc___05Fs55));
    vlSelf->_cp___05Fs556 = vlSelf->_cp___05Fs1351;
    vlSelf->_cp___05Fs7275 = vlSelf->_cp___05Fs1351;
    vlSelf->_cp___05Fs1484 = ((IData)(vlSelf->_cp___05Fs1351) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__c_first_counter)));
    vlSelf->_cp___05Fs689 = ((IData)(vlSelf->_cp___05Fs1351) 
                             & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__c_first_counter)));
    vlSelf->_cp___05Fs7408 = ((IData)(vlSelf->_cp___05Fs1351) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT__c_first_counter)));
    vlSelf->_cp___05Fs5897 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_37)));
    vlSelf->_cp___05Fs6268 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_37)));
    vlSelf->_cp___05Fs7777 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_37)));
    vlSelf->_cp___05Fs6228 = vlSelf->_cp___05Fs5857;
    vlSelf->_cp___05Fs7737 = vlSelf->_cp___05Fs5857;
    vlSelf->_cp___05Fs6219 = vlSelf->_cp___05Fs5848;
    vlSelf->_cp___05Fs7728 = vlSelf->_cp___05Fs5848;
    vlSelf->_cp___05Fs6188 = vlSelf->_cp___05Fs5817;
    vlSelf->_cp___05Fs7697 = vlSelf->_cp___05Fs5817;
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_40 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__denied) 
           == (IData)(vlSelf->_cp___05Fs5817));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_40 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__denied) 
           == (IData)(vlSelf->_cp___05Fs5817));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_40 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__denied) 
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
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_38 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__size_1));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_38 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__size_1));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_38 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__size_1));
    vlSelf->_cp___05Fs5950 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size));
    vlSelf->_cp___05Fs5811 = (2U >= (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size));
    vlSelf->_cp___05Fs6175 = vlSelf->_cp___05Fs5804;
    vlSelf->_cp___05Fs7684 = vlSelf->_cp___05Fs5804;
    vlSelf->_cp___05Fs5895 = ((IData)(vlSelf->_cp___05Fs5804) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__d_first_counter)));
    vlSelf->_cp___05Fs6266 = ((IData)(vlSelf->_cp___05Fs5804) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter)));
    vlSelf->_cp___05Fs7775 = ((IData)(vlSelf->_cp___05Fs5804) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter)));
    vlSelf->_cp___05Fs5915 = ((IData)(vlSelf->_cp___05Fs5804) 
                              & (IData)(vlSelf->_mc___05Fs694));
    vlSelf->_cp___05Fs6286 = ((IData)(vlSelf->_cp___05Fs5804) 
                              & (IData)(vlSelf->_mc___05Fs739));
    vlSelf->_cp___05Fs7795 = ((IData)(vlSelf->_cp___05Fs5804) 
                              & (IData)(vlSelf->_mc___05Fs896));
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
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_39 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__source_1));
    VL_SHIFTR_WWI(128,128,7, vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_70, vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_1, (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_354, vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_61 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size) 
           == (7U & (__Vtemp_354[0U] >> 1U)));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_355, vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_71 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size) 
           == (7U & (__Vtemp_355[0U] >> 1U)));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_356, vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_61 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size) 
           == (7U & (__Vtemp_356[0U] >> 1U)));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_357, vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_71 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size) 
           == (7U & (__Vtemp_357[0U] >> 1U)));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_358, vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_61 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size) 
           == (7U & (__Vtemp_358[0U] >> 1U)));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_359, vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_71 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size) 
           == (7U & (__Vtemp_359[0U] >> 1U)));
    VL_SHIFTR_WWI(512,512,9, ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_43, vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                   << 2U));
    VL_SHIFTR_WWI(512,512,9, ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_43, vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                   << 2U));
    VL_SHIFTR_WWI(512,512,9, ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_43, vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                   << 2U));
    vlSelf->_mc___05Fs818 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                                   >> 5U));
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
    vlSelf->_cp___05Fs7552 = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                                    >> 6U));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__d_normal_valid 
        = ((1U != (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_source) 
                         >> 5U))) & (IData)(vlSelf->_cp___05Fs5804));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__get_a_mask_acc_2 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__get_a_mask_acc) 
           | ((IData)(vlSelf->_mc___05Fs1338) & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__get_a_mask_eq_2)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__get_a_mask_acc_3 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__get_a_mask_acc) 
           | ((IData)(vlSelf->_mc___05Fs1338) & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__get_a_mask_eq_3)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__get_a_mask_acc_4 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__get_a_mask_acc_1) 
           | ((IData)(vlSelf->_mc___05Fs1338) & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__get_a_mask_eq_4)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__get_a_mask_acc_5 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__get_a_mask_acc_1) 
           | ((IData)(vlSelf->_mc___05Fs1338) & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__get_a_mask_eq_5)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__io_cpu_resp_bits_data_zeroed_1 
        = (0xffffU & ((IData)(vlSelf->_mc___05Fs1335)
                       ? (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__io_cpu_resp_bits_data_zeroed 
                          >> 0x10U) : vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__io_cpu_resp_bits_data_zeroed));
    vlSelf->_mc___05Fs1333 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_signed) 
                              & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__io_cpu_resp_bits_data_zeroed 
                                 >> 0x1fU));
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
    vlSelf->_cp___05Fs7410 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_84)));
    vlSelf->_cp___05Fs7412 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_85)));
    vlSelf->_cp___05Fs7414 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_86)));
    vlSelf->_cp___05Fs7416 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_87)));
    vlSelf->_cp___05Fs7418 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_88)));
    vlSelf->_cp___05Fs7453 = (1U & vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT___GEN_119);
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
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____VdfgTmp_h4c79c061__0 
        = ((IData)(vlSelf->_mc___05Fs794) & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_138));
    vlSelf->_cp___05Fs1790 = (1U & ((IData)(vlSelf->_mc___05Fs218)
                                     ? (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__locked)
                                     : (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT__empty))));
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
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_45 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_38) 
           | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_44));
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
    vlSelf->_cp___05Fs31 = vlSelf->_cp___05Fs14;
    vlSelf->_cp___05Fs809 = vlSelf->_cp___05Fs14;
    vlSelf->_cp___05Fs826 = vlSelf->_cp___05Fs14;
    vlSelf->_cp___05Fs35 = vlSelf->_cp___05Fs18;
    vlSelf->_cp___05Fs813 = vlSelf->_cp___05Fs18;
    vlSelf->_cp___05Fs830 = vlSelf->_cp___05Fs18;
    vlSelf->_cp___05Fs39 = vlSelf->_cp___05Fs20;
    vlSelf->_cp___05Fs815 = vlSelf->_cp___05Fs20;
    vlSelf->_cp___05Fs834 = vlSelf->_cp___05Fs20;
    vlSelf->_cp___05Fs25 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_8)));
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
    vlSelf->_cp___05Fs107 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_2));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_25 
        = ((0xdU > (0xfU & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U))) & ((4U > (0xfU 
                                               & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 6U))) 
                                        & ((0U == (0xfffffU 
                                                   & ((vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                       << 6U) 
                                                      | (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x1aU)))) 
                                           | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_12) 
                                              | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_15) 
                                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_16))))));
    ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_13 
        = ((0xdU > (0xfU & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U))) & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_12));
    vlSelf->_cp___05Fs22 = vlSelf->_cp___05Fs113;
    vlSelf->_cp___05Fs41 = vlSelf->_cp___05Fs113;
    vlSelf->_cp___05Fs56 = vlSelf->_cp___05Fs113;
    vlSelf->_cp___05Fs817 = vlSelf->_cp___05Fs113;
    vlSelf->_cp___05Fs836 = vlSelf->_cp___05Fs113;
    vlSelf->_cp___05Fs851 = vlSelf->_cp___05Fs113;
    vlSelf->_cp___05Fs908 = vlSelf->_cp___05Fs113;
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc) 
           | (IData)(((0x40U == (0xc0U & vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_2))));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc) 
           | (IData)(((0x40U == (0xc0U & vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_3))));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_1) 
           | (IData)(((0x40U == (0xc0U & vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_4))));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_1) 
           | (IData)(((0x40U == (0xc0U & vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_5))));
    vlSelf->_mc___05Fs170 = (1U & (~ (IData)(vlSelf->_mc___05Fs171)));
    ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_17 
        = (0U == (((IData)(vlSelf->_mc___05Fs171) << 2U) 
                  | (3U & (~ ((vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                               << 0x15U) | (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                            >> 0xbU))))));
    vlSelf->_mc___05Fs172 = (1U & (~ (IData)(vlSelf->_mc___05Fs173)));
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
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_dv 
        = ((IData)(vlSelf->_cp___05Fs9760) ? (IData)(vlSelf->_mc___05Fs2449)
            : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___io_dmem_req_bits_dv_output));
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
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_27 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_param) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__param));
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
    vlSelf->_cp___05Fs10628 = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full)
                                ? (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->_cp___05Fs2925));
    vlSelf->_cp___05Fs10915 = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
                                ? (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->_cp___05Fs2925));
    vlSelf->_cp___05Fs12871 = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full)
                                ? (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->_cp___05Fs2925));
    vlSelf->_cp___05Fs13411 = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                                ? (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->_cp___05Fs2925));
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
    VL_SHIFTR_WWI(76,76,7, __Vtemp_361, vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_40[0U] 
        = __Vtemp_361[0U];
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_40[1U] 
        = __Vtemp_361[1U];
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_40[2U] 
        = (0xfffU & __Vtemp_361[2U]);
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
    VL_SHIFTR_WWI(76,76,7, __Vtemp_363, vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_49[0U] 
        = __Vtemp_363[0U];
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_49[1U] 
        = __Vtemp_363[1U];
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_49[2U] 
        = (0xfffU & __Vtemp_363[2U]);
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
    VL_SHIFTR_WWI(76,76,7, __Vtemp_365, vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_50[0U] 
        = __Vtemp_365[0U];
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_50[1U] 
        = __Vtemp_365[1U];
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_50[2U] 
        = (0xfffU & __Vtemp_365[2U]);
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
    __Vtemp_374[3U] = (0x7eU | ((0x1000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                >> 0xbU)) 
                                            << 0xcU)) 
                                | ((0x800U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                  >> 0xbU)) 
                                              << 0xbU)) 
                                   | ((0x400U & ((~ 
                                                  ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                   >> 0xbU)) 
                                                 << 0xaU)) 
                                      | ((0x200U & 
                                          ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
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
                                               | (1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                      >> 0xbU))))))))));
    __Vtemp_386[4U] = ((0x40U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
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
    __Vtemp_393[4U] = ((0x2000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
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
                                                               | __Vtemp_386[4U])))))));
    __Vtemp_400[4U] = ((0x100000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
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
                                                                  | __Vtemp_393[4U])))))));
    __Vtemp_407[4U] = ((0x8000000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
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
                                     | __Vtemp_400[4U])))))));
    __Vtemp_418[5U] = ((0x40U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
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
    __Vtemp_425[5U] = ((0x2000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
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
                                                               | __Vtemp_418[5U])))))));
    __Vtemp_432[5U] = ((0x100000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
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
                                                                  | __Vtemp_425[5U])))))));
    __Vtemp_439[5U] = ((0x8000000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
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
                                     | __Vtemp_432[5U])))))));
    __Vtemp_450[6U] = ((0x40U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
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
    __Vtemp_457[6U] = ((0x2000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
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
                                                               | __Vtemp_450[6U])))))));
    __Vtemp_464[6U] = ((0x100000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
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
                                                                  | __Vtemp_457[6U])))))));
    __Vtemp_471[6U] = ((0x8000000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
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
                                     | __Vtemp_464[6U])))))));
    __Vtemp_482[7U] = ((0x40U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
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
    __Vtemp_489[7U] = ((0x2000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
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
                                                               | __Vtemp_482[7U])))))));
    __Vtemp_496[7U] = ((0x100000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
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
                                                                  | __Vtemp_489[7U])))))));
    __Vtemp_503[7U] = ((0x8000000U & ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
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
                                     | __Vtemp_496[7U])))))));
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
                             | __Vtemp_374[3U])))));
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
                                             | __Vtemp_407[4U]))));
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
                                             | __Vtemp_439[5U]))));
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
                                             | __Vtemp_471[6U]))));
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
                                             | __Vtemp_503[7U]))));
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
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_26 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__opcode));
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
    vlSelf->_mc___05Fs1711 = vlSelf->_mc___05Fs1710;
    vlSelf->_mc___05Fs1677 = vlSelf->_mc___05Fs1676;
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_26 
        = (0x1ffffffffULL & ((IData)(vlSelf->_mc___05Fs1706)
                              ? (((QData)((IData)((
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                                   >> 0xfU)))) 
                                                    << 0x13U) 
                                                   | ((IData)(vlSelf->_mc___05Fs1705)
                                                       ? 
                                                      ((0x78000U 
                                                        & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                           << 0xfU)) 
                                                       | ((0x7800U 
                                                           & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_partial_insn) 
                                                              >> 1U)) 
                                                          | ((0x400U 
                                                              & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                                 << 6U)) 
                                                             | (0x3ffU 
                                                                & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                                   >> 5U)))))
                                                       : 
                                                      ((0x7f800U 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                                          >> 0xfU)))) 
                                                           << 0xbU)) 
                                                       | ((0x400U 
                                                           & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_partial_insn) 
                                                              << 3U)) 
                                                          | ((0x3f0U 
                                                              & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                                 >> 5U)) 
                                                             | (0xfU 
                                                                & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_partial_insn) 
                                                                   >> 8U))))))))) 
                                  << 1U) - 2ULL) : 
                             ((QData)((IData)((((- (IData)((IData)(vlSelf->_mc___05Fs1676))) 
                                                << 0xaU) 
                                               | ((IData)(vlSelf->_mc___05Fs1678)
                                                   ? 
                                                  ((0x380U 
                                                    & ((- (IData)((IData)(vlSelf->_mc___05Fs1676))) 
                                                       << 7U)) 
                                                   | ((0x60U 
                                                       & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data) 
                                                      | ((0x10U 
                                                          & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                             << 2U)) 
                                                         | ((0xcU 
                                                             & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                                >> 8U)) 
                                                            | (3U 
                                                               & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                                  >> 3U))))))
                                                   : 
                                                  ((0x200U 
                                                    & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                       << 1U)) 
                                                   | ((0x180U 
                                                       & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                          >> 2U)) 
                                                      | ((0x40U 
                                                          & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data) 
                                                         | ((0x20U 
                                                             & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                                >> 2U)) 
                                                            | ((0x10U 
                                                                & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                                   << 2U)) 
                                                               | ((8U 
                                                                   & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                                      >> 8U)) 
                                                                  | (7U 
                                                                     & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                                        >> 3U)))))))))))) 
                              << 1U)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rviCall_1 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_29) 
           & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
              >> 7U));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcJALR_1 
        = (IData)(((0x26U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_31)) 
                   & (0U == (0x7c0000U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcJR_1 
        = (IData)(((0x22U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_31)) 
                   & (0U == (0x7c0000U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcBranch_1 
        = ((0x19U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_30)) 
           | (0x1dU == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_30)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcJALR 
        = (IData)(((0x26U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_15)) 
                   & (0U == (0x7cU & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcJR 
        = (IData)(((0x22U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_15)) 
                   & (0U == (0x7cU & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_predictJump 
        = (((IData)(vlSelf->_mc___05Fs1706) & (0x6fU 
                                               == (0x7fU 
                                                   & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_partial_insn)))) 
           | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_valid) 
              & (0x15U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_14))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcBranch 
        = ((0x19U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_14)) 
           | (0x1dU == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_14)));
    __Vtemp_510[0U] = ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_data 
                        << 0x10U) | (0xffffU & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_data));
    __Vtemp_510[1U] = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_data;
    __Vtemp_510[2U] = (IData)((((QData)((IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_data 
                                                 >> 0x10U))) 
                                << 0x30U) | (((QData)((IData)(
                                                              (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_data 
                                                               >> 0x10U))) 
                                              << 0x20U) 
                                             | (((QData)((IData)(
                                                                 (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_data 
                                                                  >> 0x10U))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_data 
                                                                   >> 0x10U)))))));
    __Vtemp_510[3U] = (IData)(((((QData)((IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_data 
                                                  >> 0x10U))) 
                                 << 0x30U) | (((QData)((IData)(
                                                               (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_data 
                                                                >> 0x10U))) 
                                               << 0x20U) 
                                              | (((QData)((IData)(
                                                                  (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_data 
                                                                   >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_data 
                                                                    >> 0x10U)))))) 
                               >> 0x20U));
    __Vtemp_510[4U] = 0U;
    __Vtemp_510[5U] = 0U;
    VL_SHIFTL_WWI(191,191,6, __Vtemp_511, __Vtemp_510, 
                  (0x30U & ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__nBufValid) 
                              - (IData)(2U)) - (1U 
                                                & (IData)(
                                                          (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_pc 
                                                           >> 1U)))) 
                            << 4U)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
        = ((__Vtemp_511[2U] & ((IData)(0xffffffffU) 
                               << ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__nBufValid) 
                                   << 4U))) | ((~ ((IData)(0xffffffffU) 
                                                   << 
                                                   ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__nBufValid) 
                                                    << 4U))) 
                                               & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__buf_data));
    vlSelf->_cp___05Fs10058 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__isHi)) 
                               & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divby0));
    vlSelf->_cp___05Fs10057 = (1U & ((~ (IData)((0U 
                                                 != (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__count)))) 
                                     & (~ ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divby0) 
                                           | (0x3fU 
                                              == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT___GEN_8))))));
    vlSelf->_cp___05Fs8400 = vlSelf->_cp___05Fs8389;
    vlSelf->_cp___05Fs8376 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_7)));
    vlSelf->_mc___05Fs2469 = vlSelf->_mc___05Fs2467;
    vlSelf->_mc___05Fs2494 = vlSelf->_mc___05Fs2492;
    vlSelf->_cp___05Fs11434 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_33)));
    vlSelf->_cp___05Fs12661 = (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT___GEN_14));
    vlSelf->_cp___05Fs12637 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT___GEN_10)));
    vlSelf->_mc___05Fs1108 = vlSelf->_mc___05Fs1106;
    vlSelf->_mc___05Fs1158 = vlSelf->_mc___05Fs1157;
    vlSelf->_mc___05Fs1103 = vlSelf->_mc___05Fs1101;
    vlSelf->_mc___05Fs1156 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pma_checker___05F7__DOT__legal_address) 
                              & (IData)(vlSelf->_mc___05Fs1101));
    vlSelf->_cp___05Fs12564 = vlSelf->_cp___05Fs12562;
    vlSelf->_cp___05Fs12577 = (1U & (~ ((~ (IData)(vlSelf->_cp___05Fs12428)) 
                                        & (IData)(vlSelf->_cp___05Fs12562))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___amoalus_0_io_out 
        = ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__amoalus_0__DOT__wmask 
            & ((IData)(vlSelf->_mc___05Fs1204) ? ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_data 
                                                   & (0xffffffff00000000ULL 
                                                      | (QData)((IData)(
                                                                        (0x7fffffffU 
                                                                         | ((IData)(vlSelf->_mc___05Fs1208) 
                                                                            << 0x1fU)))))) 
                                                  + 
                                                  (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data 
                                                   & (0xffffffff00000000ULL 
                                                      | (QData)((IData)(
                                                                        (0x7fffffffU 
                                                                         | ((IData)(vlSelf->_mc___05Fs1208) 
                                                                            << 0x1fU)))))))
                : ((IData)(vlSelf->_mc___05Fs1203) ? 
                   (((IData)(vlSelf->_mc___05Fs1201)
                      ? (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data 
                         & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_data)
                      : 0ULL) | ((IData)(vlSelf->_mc___05Fs1202)
                                  ? (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data 
                                     ^ vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_data)
                                  : 0ULL)) : ((IData)(vlSelf->_mc___05Fs1200)
                                               ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_data
                                               : vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data)))) 
           | ((~ vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__amoalus_0__DOT__wmask) 
              & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_data));
    vlSelf->_mc___05Fs2408 = vlSelf->_mc___05Fs2402;
    if (vlSelf->_mc___05Fs2405) {
        if (vlSelf->_mc___05Fs2395) {
            vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in3[0U] 
                = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[0U];
            vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in3[1U] 
                = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[1U];
            vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in3[2U] 
                = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[2U];
        } else {
            vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in3[0U] 
                = (IData)((((QData)((IData)(((IData)(vlSelf->_mc___05Fs2402)
                                              ? ((0x800U 
                                                  & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[1U] 
                                                     >> 9U)) 
                                                 | ((0x600U 
                                                     & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[0U] 
                                                        >> 0x14U)) 
                                                    | (0x1ffU 
                                                       & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in3_expOut_commonCase))))
                                              : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in3_expOut_commonCase)))) 
                            << 0x34U) | ((QData)((IData)(
                                                         (0x7fffffU 
                                                          & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[0U]))) 
                                         << 0x1dU)));
            vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in3[1U] 
                = (IData)(((((QData)((IData)(((IData)(vlSelf->_mc___05Fs2402)
                                               ? ((0x800U 
                                                   & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[1U] 
                                                      >> 9U)) 
                                                  | ((0x600U 
                                                      & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[0U] 
                                                         >> 0x14U)) 
                                                     | (0x1ffU 
                                                        & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in3_expOut_commonCase))))
                                               : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in3_expOut_commonCase)))) 
                             << 0x34U) | ((QData)((IData)(
                                                          (0x7fffffU 
                                                           & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[0U]))) 
                                          << 0x1dU)) 
                           >> 0x20U));
            vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in3[2U] 
                = (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[0U] 
                   >> 0x1fU);
        }
    } else {
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in3[0U] = 0U;
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in3[1U] = 0xe0080000U;
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in3[2U] = 0U;
    }
    vlSelf->_cp___05Fs13128 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hb4b0d5dc__0) 
                               & ((~ (IData)(vlSelf->_cp___05Fs13373)) 
                                  & (IData)(vlSelf->_cp___05Fs13374)));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_96 
        = ((IData)(vlSelf->_cp___05Fs13373) | (IData)(vlSelf->_cp___05Fs13374));
    vlSelf->_mc___05Fs3452 = (5U > (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__fanin__DOT__effectivePriority_1));
    vlSelf->_mc___05Fs3454 = (5U > (IData)(vlSelf->ExampleRocketSystem__DOT__plic_domain__DOT__plic__DOT__fanin_1__DOT__effectivePriority_1));
    vlSelf->_mc___05Fs2406 = vlSelf->_mc___05Fs2394;
    if (vlSelf->_mc___05Fs2397) {
        if (vlSelf->_mc___05Fs2395) {
            vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in1[0U] 
                = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R0_data[0U];
            vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in1[1U] 
                = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R0_data[1U];
            vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in1[2U] 
                = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R0_data[2U];
        } else {
            vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in1[0U] 
                = (IData)((((QData)((IData)(((IData)(vlSelf->_mc___05Fs2394)
                                              ? ((0x800U 
                                                  & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R0_data[1U] 
                                                     >> 9U)) 
                                                 | ((0x600U 
                                                     & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R0_data[0U] 
                                                        >> 0x14U)) 
                                                    | (0x1ffU 
                                                       & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in1_expOut_commonCase))))
                                              : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in1_expOut_commonCase)))) 
                            << 0x34U) | ((QData)((IData)(
                                                         (0x7fffffU 
                                                          & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R0_data[0U]))) 
                                         << 0x1dU)));
            vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in1[1U] 
                = (IData)(((((QData)((IData)(((IData)(vlSelf->_mc___05Fs2394)
                                               ? ((0x800U 
                                                   & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R0_data[1U] 
                                                      >> 9U)) 
                                                  | ((0x600U 
                                                      & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R0_data[0U] 
                                                         >> 0x14U)) 
                                                     | (0x1ffU 
                                                        & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in1_expOut_commonCase))))
                                               : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in1_expOut_commonCase)))) 
                             << 0x34U) | ((QData)((IData)(
                                                          (0x7fffffU 
                                                           & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R0_data[0U]))) 
                                          << 0x1dU)) 
                           >> 0x20U));
            vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in1[2U] 
                = (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R0_data[0U] 
                   >> 0x1fU);
        }
    } else {
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in1[0U] = 0U;
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in1[1U] = 0xe0080000U;
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in1[2U] = 0U;
    }
    vlSelf->_mc___05Fs2407 = vlSelf->_mc___05Fs2398;
    if (vlSelf->_mc___05Fs2401) {
        if (vlSelf->_mc___05Fs2395) {
            vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in2[0U] 
                = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R1_data[0U];
            vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in2[1U] 
                = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R1_data[1U];
            vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in2[2U] 
                = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R1_data[2U];
        } else {
            vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in2[0U] 
                = (IData)((((QData)((IData)(((IData)(vlSelf->_mc___05Fs2398)
                                              ? ((0x800U 
                                                  & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R1_data[1U] 
                                                     >> 9U)) 
                                                 | ((0x600U 
                                                     & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R1_data[0U] 
                                                        >> 0x14U)) 
                                                    | (0x1ffU 
                                                       & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in2_expOut_commonCase))))
                                              : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in2_expOut_commonCase)))) 
                            << 0x34U) | ((QData)((IData)(
                                                         (0x7fffffU 
                                                          & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R1_data[0U]))) 
                                         << 0x1dU)));
            vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in2[1U] 
                = (IData)(((((QData)((IData)(((IData)(vlSelf->_mc___05Fs2398)
                                               ? ((0x800U 
                                                   & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R1_data[1U] 
                                                      >> 9U)) 
                                                  | ((0x600U 
                                                      & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R1_data[0U] 
                                                         >> 0x14U)) 
                                                     | (0x1ffU 
                                                        & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in2_expOut_commonCase))))
                                               : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in2_expOut_commonCase)))) 
                             << 0x34U) | ((QData)((IData)(
                                                          (0x7fffffU 
                                                           & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R1_data[0U]))) 
                                          << 0x1dU)) 
                           >> 0x20U));
            vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in2[2U] 
                = (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R1_data[0U] 
                   >> 0x1fU);
        }
    } else {
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in2[0U] = 0U;
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in2[1U] = 0xe0080000U;
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in2[2U] = 0U;
    }
    vlSelf->_mc___05Fs1513 = (1U & (~ ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized) 
                                       >> 4U)));
    vlSelf->_mc___05Fs1509 = (1U & (~ ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized) 
                                       >> 3U)));
    vlSelf->_mc___05Fs1511 = (1U & (~ ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized) 
                                       >> 2U)));
    vlSelf->_mc___05Fs1508 = (1U & (~ ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized) 
                                       >> 1U)));
    vlSelf->_mc___05Fs3217 = (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__loOut 
                              >> 0x1fU);
    vlSelf->_mc___05Fs1748 = ((0U != (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                      >> 0x1dU)) & 
                              ((IData)(vlSelf->_mc___05Fs1745) 
                               | (0x19U > (0x3ffU & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN_0)))));
    __Vtemp_523[0U] = (IData)((0x1fffffffffffffULL 
                               & (- (QData)((IData)(vlSelf->_mc___05Fs1746)))));
    __Vtemp_523[1U] = ((((IData)(vlSelf->_mc___05Fs1746)
                          ? (0x1000000U | ((0x800000U 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != 
                                                           (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                                            >> 0x1dU)))) 
                                               << 0x17U)) 
                                           | (0x7fffffU 
                                              & (~ 
                                                 vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U]))))
                          : (((IData)((0U != (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                              >> 0x1dU))) 
                              << 0x17U) | (0x7fffffU 
                                           & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U]))) 
                        << 0x15U) | (IData)(((0x1fffffffffffffULL 
                                              & (- (QData)((IData)(vlSelf->_mc___05Fs1746)))) 
                                             >> 0x20U)));
    __Vtemp_523[2U] = (((IData)(vlSelf->_mc___05Fs1746)
                         ? (0x1000000U | ((0x800000U 
                                           & ((~ (IData)(
                                                         (0U 
                                                          != 
                                                          (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                                           >> 0x1dU)))) 
                                              << 0x17U)) 
                                          | (0x7fffffU 
                                             & (~ vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U]))))
                         : (((IData)((0U != (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                             >> 0x1dU))) 
                             << 0x17U) | (0x7fffffU 
                                          & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U]))) 
                       >> 0xbU);
    VL_SHIFTRS_WWI(78,78,7, __Vtemp_524, __Vtemp_523, 
                   ((IData)(vlSelf->_mc___05Fs1745)
                     ? 0U : ((IData)(vlSelf->_mc___05Fs1744)
                              ? (0x7fU & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN_0))
                              : 0x4aU)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
        = __Vtemp_524[0U];
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
        = __Vtemp_524[1U];
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
        = (0x3fffU & __Vtemp_524[2U]);
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift 
        = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                           ((IData)(vlSelf->_mc___05Fs1745)
                                             ? 0U : 
                                            ((IData)(vlSelf->_mc___05Fs1744)
                                              ? (0x1fU 
                                                 & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN_0) 
                                                    >> 2U))
                                              : 0x12U))));
    vlSelf->_mc___05Fs2100 = ((0U != (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                      >> 0x1dU)) & 
                              ((IData)(vlSelf->_mc___05Fs2097) 
                               | (0x36U > (0x1fffU 
                                           & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN_0)))));
    __Vtemp_529[0U] = (- (IData)((IData)(vlSelf->_mc___05Fs2098)));
    __Vtemp_529[1U] = (- (IData)((IData)(vlSelf->_mc___05Fs2098)));
    __Vtemp_529[2U] = (- (IData)((IData)(vlSelf->_mc___05Fs2098)));
    __Vtemp_529[3U] = (((IData)(((IData)(vlSelf->_mc___05Fs2098)
                                  ? (0x20000000000000ULL 
                                     | (((QData)((IData)(
                                                         (1U 
                                                          & (~ (IData)(
                                                                       (0U 
                                                                        != 
                                                                        (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                                         >> 0x1dU))))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (~ (((QData)((IData)(
                                                                  vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U])))))))
                                  : (((QData)((IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                        >> 0x1dU)))) 
                                      << 0x34U) | (0xfffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U]))))))) 
                        << 0xfU) | (0x7fffU & (- (IData)((IData)(vlSelf->_mc___05Fs2098)))));
    __Vtemp_529[4U] = (((IData)(((IData)(vlSelf->_mc___05Fs2098)
                                  ? (0x20000000000000ULL 
                                     | (((QData)((IData)(
                                                         (1U 
                                                          & (~ (IData)(
                                                                       (0U 
                                                                        != 
                                                                        (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                                         >> 0x1dU))))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (~ (((QData)((IData)(
                                                                  vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U])))))))
                                  : (((QData)((IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                        >> 0x1dU)))) 
                                      << 0x34U) | (0xfffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U]))))))) 
                        >> 0x11U) | ((IData)((((IData)(vlSelf->_mc___05Fs2098)
                                                ? (0x20000000000000ULL 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                                                >> 0x1dU))))))) 
                                                       << 0x34U) 
                                                      | (0xfffffffffffffULL 
                                                         & (~ 
                                                            (((QData)((IData)(
                                                                              vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U])))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                                      >> 0x1dU)))) 
                                                    << 0x34U) 
                                                   | (0xfffffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U])))))) 
                                              >> 0x20U)) 
                                     << 0xfU));
    __Vtemp_529[5U] = ((IData)((((IData)(vlSelf->_mc___05Fs2098)
                                  ? (0x20000000000000ULL 
                                     | (((QData)((IData)(
                                                         (1U 
                                                          & (~ (IData)(
                                                                       (0U 
                                                                        != 
                                                                        (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                                         >> 0x1dU))))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (~ (((QData)((IData)(
                                                                  vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U])))))))
                                  : (((QData)((IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                        >> 0x1dU)))) 
                                      << 0x34U) | (0xfffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U])))))) 
                                >> 0x20U)) >> 0x11U);
    VL_SHIFTRS_WWI(165,165,8, __Vtemp_530, __Vtemp_529, 
                   ((IData)(vlSelf->_mc___05Fs2097)
                     ? 0U : ((IData)(vlSelf->_mc___05Fs2096)
                              ? (0xffU & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN_0))
                              : 0xa1U)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
        = __Vtemp_530[0U];
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
        = __Vtemp_530[1U];
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
        = __Vtemp_530[2U];
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[3U] 
        = __Vtemp_530[3U];
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[4U] 
        = __Vtemp_530[4U];
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[5U] 
        = (0x1fU & __Vtemp_530[5U]);
    __Vtemp_532[0U] = 0U;
    __Vtemp_532[1U] = 0U;
    __Vtemp_532[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_533, __Vtemp_532, 
                   ((IData)(vlSelf->_mc___05Fs2097)
                     ? 0U : ((IData)(vlSelf->_mc___05Fs2096)
                              ? (0x3fU & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN_0) 
                                          >> 2U)) : 0x28U)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[0U] 
        = __Vtemp_533[0U];
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[1U] 
        = __Vtemp_533[1U];
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[2U] 
        = (1U & __Vtemp_533[2U]);
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & ((~ (IData)(vlSelf->_mc___05Fs2083)) 
                 & (~ ((~ (IData)((0U != (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[1U] 
                                          >> 0x1dU)))) 
                       | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT____Vcellinp__roundAnyRawFNToRecFN__io_in_isInf)))));
    vlSelf->_mc___05Fs1073 = (0xffU == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__r_sectored_repl_addr_valids));
    vlSelf->_mc___05Fs1478 = (0xffU == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_sectored_repl_addr_valids));
    vlSelf->_cp___05Fs12482 = vlSelf->_cp___05Fs12464;
    vlSelf->_cp___05Fs9375 = ((IData)(vlSelf->_cp___05Fs9379) 
                              & ((~ (IData)(vlSelf->_cp___05Fs9380)) 
                                 & (IData)(vlSelf->_cp___05Fs9377)));
    vlSelf->_cp___05Fs9649 = ((IData)(vlSelf->_cp___05Fs9379) 
                              & ((IData)(vlSelf->_cp___05Fs9377) 
                                 & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__recent_progress_counter))));
    vlSelf->_cp___05Fs9776 = vlSelf->_mc___05Fs2606;
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_63 
        = ((IData)(vlSelf->_cp___05Fs9775) & (IData)(vlSelf->_mc___05Fs2606));
    vlSelf->_cp___05Fs4251 = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_57) 
                              & ((IData)(vlSelf->_mc___05Fs512) 
                                 & ((IData)(vlSelf->_cp___05Fs4013) 
                                    & ((~ (IData)(vlSelf->_cp___05Fs4129)) 
                                       & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_61)))));
    vlSelf->_cp___05Fs4237 = ((~ (IData)(vlSelf->_cp___05Fs4129)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_57));
    vlSelf->_mc___05Fs1642 = (1U & (~ (IData)(vlSelf->_cp___05Fs9639)));
    vlSelf->_cp___05Fs12819 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT___GEN_54)));
    vlSelf->_cp___05Fs12642 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT___GEN_12)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_mask_xwr 
        = ((0xf0U & ((((IData)(vlSelf->_mc___05Fs1225)
                        ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_31)
                        : 0U) | (- (IData)((IData)(vlSelf->_mc___05Fs1226)))) 
                     << 4U)) | ((IData)(vlSelf->_mc___05Fs1225)
                                 ? 0U : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_31)));
    vlSelf->_cp___05Fs4185 = vlSelf->_cp___05Fs4167;
    vlSelf->_cp___05Fs4265 = ((IData)(vlSelf->_cp___05Fs4126) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT____VdfgTmp_h788cf908__0));
    vlSelf->_cp___05Fs9350 = vlSelf->_cp___05Fs8611;
    vlSelf->_mc___05Fs2598 = (1U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_69));
    vlSelf->_mc___05Fs2599 = (2U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_69));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___tlb_io_resp_ma_ld 
        = ((IData)(vlSelf->_mc___05Fs1040) & (IData)(vlSelf->_mc___05Fs1042));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___tlb_io_resp_ma_st 
        = ((IData)(vlSelf->_mc___05Fs1040) & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__cmd_write));
    vlSelf->_mc___05Fs1043 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__cmd_write) 
                              | ((5U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
                                 | (0x17U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd))));
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
    vlSelf->_cp___05Fs12545 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_44)));
    vlSelf->_cp___05Fs4231 = vlSelf->_cp___05Fs4203;
    vlSelf->_cp___05Fs4284 = vlSelf->_cp___05Fs4203;
    vlSelf->_cp___05Fs4215 = ((IData)(vlSelf->_mc___05Fs508) 
                              & (IData)(vlSelf->_cp___05Fs4203));
    vlSelf->_cp___05Fs4234 = ((IData)(vlSelf->_cp___05Fs4203) 
                              & (IData)(vlSelf->_mc___05Fs512));
    if (vlSelf->_cp___05Fs4233) {
        vlSelf->_cp___05Fs4242 = vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_61;
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_set_wo_ready 
            = (0x7ffffU & ((IData)(1U) << (0x1fU & 
                                           (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))));
    } else {
        vlSelf->_cp___05Fs4242 = 0U;
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_set_wo_ready = 0U;
    }
    vlSelf->_cp___05Fs1582 = ((IData)(vlSelf->mmio_axi4_0_r_ready) 
                              & (IData)(vlSelf->mmio_axi4_0_r_valid));
    vlSelf->_cp___05Fs1586 = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full) 
                              & ((IData)(vlSelf->_cp___05Fs1583) 
                                 & ((0U == (0xfU & 
                                            vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                    & (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[2U] 
                                       >> 6U))));
    vlSelf->_cp___05Fs1589 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue8_BundleMap__DOT__empty)) 
                              & ((IData)(vlSelf->_cp___05Fs1583) 
                                 & ((1U == (0xfU & 
                                            vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                    & (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[2U] 
                                       >> 6U))));
    vlSelf->_cp___05Fs1592 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue8_BundleMap_1__DOT__empty)) 
                              & ((IData)(vlSelf->_cp___05Fs1583) 
                                 & ((2U == (0xfU & 
                                            vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                    & (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[2U] 
                                       >> 6U))));
    vlSelf->_cp___05Fs1595 = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full) 
                              & ((IData)(vlSelf->_cp___05Fs1583) 
                                 & ((3U == (0xfU & 
                                            vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                    & (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[2U] 
                                       >> 6U))));
    vlSelf->_cp___05Fs1598 = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full) 
                              & ((IData)(vlSelf->_cp___05Fs1583) 
                                 & ((4U == (0xfU & 
                                            vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                    & (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[2U] 
                                       >> 6U))));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT____VdfgTmp_haff43c4e__0 
        = ((IData)(vlSelf->_cp___05Fs1583) & (vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[2U] 
                                              >> 6U));
    vlSelf->_mc___05Fs2865 = (IData)(((0x300000U == 
                                       (0x700000U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst)) 
                                      & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha99b9794__0)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hf39d8696__0 
        = ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
            >> 0x16U) & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha99b9794__0));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h397d90ec__0 
        = ((~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
               >> 0x16U)) & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h1f33329a__0));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h6805e198__0 
        = ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
            >> 0x16U) & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h1f33329a__0));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h62884291__0 
        = ((~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
               >> 0x16U)) & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h59c784f7__0));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h23a9933b__0 
        = ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
            >> 0x16U) & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h59c784f7__0));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h6909e009__0 
        = ((~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
               >> 0x16U)) & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h4f47237f__0));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h5829f283__0 
        = ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
            >> 0x16U) & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h4f47237f__0));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h8c8acf55__0 
        = ((~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
               >> 0x17U)) & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h6c716965__0));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h3c03ebdd__0 
        = ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
            >> 0x17U) & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h6c716965__0));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h7996ab36__0 
        = ((~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
               >> 0x17U)) & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h5f850584__0));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h2f30763c__0 
        = ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
            >> 0x17U) & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h5f850584__0));
    vlSelf->_cp___05Fs9965 = vlSelf->_mc___05Fs3340;
    vlSelf->_cp___05Fs2226 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_77)));
    vlSelf->_cp___05Fs2207 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_57)));
    vlSelf->_cp___05Fs2145 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_38)));
    vlSelf->_cp___05Fs2243 = ((IData)(vlSelf->_cp___05Fs2104) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT____VdfgTmp_h788cf908__0));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__anonIn_d_bits_size 
        = ((IData)(vlSelf->_mc___05Fs607) ? (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dFirst_size)
            : (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dOrig));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_105 
        = ((IData)(vlSelf->_mc___05Fs3314) ? (((QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->_mc___05Fs3313)
                                                                    ? (IData)(
                                                                              (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_wdata 
                                                                               >> 0x27U))
                                                                    : 
                                                                   (~ (IData)(
                                                                              (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_wdata 
                                                                               >> 0x26U))))))) 
                                               << 0x27U) 
                                              | (0x7fffffffffULL 
                                                 & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_wdata))
            : vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_102);
    vlSelf->_cp___05Fs2266 = ((IData)(vlSelf->_cp___05Fs2104) 
                              & (IData)(vlSelf->_cp___05Fs2255));
    vlSelf->_cp___05Fs2194 = ((IData)(vlSelf->_cp___05Fs2255) 
                              & (IData)(vlSelf->_cp___05Fs2104));
    vlSelf->_cp___05Fs2492 = ((~ (IData)(vlSelf->_cp___05Fs2384)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_63));
    vlSelf->_cp___05Fs2769 = ((~ (IData)(vlSelf->_cp___05Fs2384)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_63));
    if (vlSelf->_cp___05Fs2211) {
        vlSelf->_cp___05Fs2220 = vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_72;
        vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__a_set_wo_ready 
            = (0xffffU & ((IData)(1U) << (0xfU & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                  >> 0xaU))));
    } else {
        vlSelf->_cp___05Fs2220 = 0U;
        vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__a_set_wo_ready = 0U;
    }
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__fpu_kill_mem 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_valid) 
           & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___io_nack_mem_output) 
              & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_fp)));
    vlSelf->_cp___05Fs9714 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
                              & ((IData)(vlSelf->_cp___05Fs9754) 
                                 & (0U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_typeTagOut))));
    vlSelf->_cp___05Fs9718 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
                              & ((IData)(vlSelf->_cp___05Fs9754) 
                                 & (1U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_typeTagOut))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_1 
        = ((IData)(vlSelf->_mc___05Fs1418) | (IData)(vlSelf->_mc___05Fs1419));
    __Vtemp_534[0U] = 0U;
    __Vtemp_534[1U] = 0U;
    __Vtemp_534[2U] = 0U;
    __Vtemp_535[0U] = 0xffffffffU;
    __Vtemp_535[1U] = 0xffffffffU;
    __Vtemp_535[2U] = 1U;
    vlSelf->_mc___05Fs2092 = (1U & ((~ ((IData)(vlSelf->_mc___05Fs2095) 
                                        | ((IData)(vlSelf->_mc___05Fs2090) 
                                           == ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT___dcmp_io_lt) 
                                               | (VL_GTS_IWW(65, __Vtemp_534, vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1) 
                                                  & VL_LTS_IWW(65, __Vtemp_535, vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2)))))) 
                                    | (7U == (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in2[1U] 
                                              >> 0x1dU))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_3 
        = ((IData)(vlSelf->_mc___05Fs1421) | (IData)(vlSelf->_mc___05Fs1422));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hi_1 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_7) 
            << 3U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_6) 
                       << 2U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_5) 
                                  << 1U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_4))));
    vlSelf->_cp___05Fs9373 = (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_2) 
                               & (IData)(vlSelf->_cp___05Fs9386)) 
                              | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_1) 
                                 | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_2) 
                                    | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_3) 
                                       | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_4) 
                                          | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_5) 
                                             | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_6) 
                                                | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_7))))))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_84 
        = ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_7) 
             << 2U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_6) 
                        << 1U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_5))) 
           | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_3) 
               << 2U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_2) 
                          << 1U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_1))));
    vlSelf->_cp___05Fs9620 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__r_btb_update_pipe_v) 
                              & ((IData)(vlSelf->_mc___05Fs1488) 
                                 | (IData)(vlSelf->_mc___05Fs1490)));
    vlSelf->_mc___05Fs1491 = ((IData)(vlSelf->_mc___05Fs1488) 
                              & (IData)(vlSelf->_mc___05Fs1490));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPageUpdateOH 
        = ((IData)(vlSelf->_mc___05Fs1487) ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__updatePageHit)
            : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPageRepl));
    vlSelf->_mc___05Fs2183 = VL_LTS_III(11, 0x1bfU, (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExpQuot_S_div));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S 
        = (1U & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)
                  ? ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_a_isNaN) 
                         | ((~ (IData)((0U != (7U & 
                                               ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_expOut) 
                                                >> 6U))))) 
                            | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_isInf)))) 
                     & (~ (IData)(vlSelf->_mc___05Fs1795)))
                  : ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_a_isNaN) 
                         | ((~ (IData)((0U != (7U & 
                                               ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_expOut) 
                                                >> 6U))))) 
                            | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_isInf)))) 
                     & (~ ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_b_isNaN) 
                           | ((~ (IData)((0U != (7U 
                                                 & ((IData)(vlSelf->__VdfgTmp_ha65f3c6d__0) 
                                                    >> 6U))))) 
                              | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_b_isInf)))))));
    vlSelf->_mc___05Fs2191 = vlSelf->_mc___05Fs2185;
    vlSelf->_mc___05Fs2194 = vlSelf->_mc___05Fs2185;
    vlSelf->_mc___05Fs2197 = ((IData)(vlSelf->_mc___05Fs2217) 
                              & (IData)(vlSelf->_mc___05Fs2185));
    vlSelf->_mc___05Fs2198 = ((~ (IData)(vlSelf->_mc___05Fs2185)) 
                              & (IData)(vlSelf->_mc___05Fs2217));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__oddSqrt_S 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_sqrt) 
           & (IData)(vlSelf->_mc___05Fs2185));
    vlSelf->_mc___05Fs2261 = vlSelf->_mc___05Fs2257;
    vlSelf->_mc___05Fs2273 = vlSelf->_mc___05Fs2257;
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___GEN_13 
        = ((0x3fffffffffffffULL & (((IData)(vlSelf->_mc___05Fs2251)
                                     ? VL_SHIFTL_QQI(54,54,32, vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT___GEN_0, 1U)
                                     : 0ULL) | ((QData)((IData)(vlSelf->_mc___05Fs2253)) 
                                                << 0x35U))) 
           | ((IData)(vlSelf->_mc___05Fs2257) ? 0x50000000000000ULL
               : 0ULL));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem 
        = (((IData)(vlSelf->_mc___05Fs2256) ? (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT___GEN 
                                               << 1U)
             : 0ULL) | (((IData)(vlSelf->_mc___05Fs2257)
                          ? (((QData)((IData)((3U & 
                                               ((((IData)(
                                                          (0U 
                                                           != 
                                                           (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                            >> 0x1dU))) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                       >> 0x13U))) 
                                                - (IData)(1U))))) 
                              << 0x36U) | (0x3fffffffffffffULL 
                                           & VL_SHIFTL_QQI(54,54,32, vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT___GEN, 3U)))
                          : 0ULL) | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
                                      ? 0ULL : (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem_Z 
                                                << 1U))));
    vlSelf->_mc___05Fs1820 = vlSelf->_mc___05Fs1813;
    vlSelf->_mc___05Fs1828 = vlSelf->_mc___05Fs1813;
    vlSelf->_mc___05Fs1835 = vlSelf->_mc___05Fs1813;
    vlSelf->_mc___05Fs1812 = (((3U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT___GEN_1)) 
                               & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U] 
                                  >> 0x1dU)) | (IData)(vlSelf->_mc___05Fs1813));
    vlSelf->_cp___05Fs9979 = vlSelf->_mc___05Fs2863;
    vlSelf->_cp___05Fs9978 = vlSelf->_mc___05Fs2862;
    vlSelf->_mc___05Fs1429 = ((IData)(vlSelf->_mc___05Fs1402) 
                              & (IData)(vlSelf->_cp___05Fs9574));
    vlSelf->_cp___05Fs9822 = ((4U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
                              & (IData)(((((0x10400000U 
                                            == (0x1fc00000U 
                                                & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst)) 
                                           & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hb28d4279__0)) 
                                          & (IData)(vlSelf->_cp___05Fs9825)) 
                                         & (IData)(vlSelf->_cp___05Fs9832))));
    vlSelf->_mc___05Fs1425 = ((IData)(vlSelf->_mc___05Fs1402) 
                              & (IData)(vlSelf->_cp___05Fs9546));
    vlSelf->_mc___05Fs1426 = ((IData)(vlSelf->_mc___05Fs1402) 
                              & (IData)(vlSelf->_cp___05Fs9553));
    vlSelf->_mc___05Fs1427 = ((IData)(vlSelf->_mc___05Fs1402) 
                              & (IData)(vlSelf->_cp___05Fs9560));
    vlSelf->_cp___05Fs9374 = ((IData)(vlSelf->_cp___05Fs9546) 
                              | ((IData)(vlSelf->_cp___05Fs9553) 
                                 | ((IData)(vlSelf->_cp___05Fs9560) 
                                    | (IData)(vlSelf->_cp___05Fs9567))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hi_4 
        = (((IData)(vlSelf->_cp___05Fs9567) << 1U) 
           | (IData)(vlSelf->_cp___05Fs9560));
    vlSelf->_mc___05Fs1428 = ((IData)(vlSelf->_mc___05Fs1402) 
                              & (IData)(vlSelf->_cp___05Fs9567));
    vlSelf->_mc___05Fs2988 = ((~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                  >> 0x15U)) & (0x3ffU 
                                                == (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h6f659a34__0)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h27777b5f__0 
        = ((0x400U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                      >> 0xbU)) | (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h6f659a34__0));
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
    vlSelf->_cp___05Fs1803 = ((IData)(vlSelf->_mc___05Fs218)
                               ? (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_d_denied)
                               : (0U != (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data) 
                                               >> 4U))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___GEN_5 
        = ((((IData)((0U != (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[1U] 
                             >> 0x1dU))) << 0x19U) 
            | ((0x1fffffeU & ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[1U] 
                               << 5U) | (0x1eU & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[0U] 
                                                  >> 0x1bU)))) 
               | (0U != (0xfffffffU & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[0U])))) 
           & (1U | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___GEN_1 
                    << 1U)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___GEN_3 
        = ((0x2000000U | vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb665f660__0) 
           & (1U | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___GEN_1 
                    << 1U)));
    vlSelf->_mc___05Fs1806 = vlSelf->_mc___05Fs1799;
    vlSelf->_mc___05Fs1805 = vlSelf->_mc___05Fs1798;
    vlSelf->_cp___05Fs4526 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_73)));
    vlSelf->_cp___05Fs4420 = vlSelf->_cp___05Fs4409;
    vlSelf->_cp___05Fs4435 = vlSelf->_cp___05Fs4409;
    vlSelf->_cp___05Fs4450 = vlSelf->_cp___05Fs4409;
    vlSelf->_cp___05Fs4459 = vlSelf->_cp___05Fs4409;
    vlSelf->_cp___05Fs4468 = vlSelf->_cp___05Fs4409;
    vlSelf->_cp___05Fs4543 = ((IData)(vlSelf->_cp___05Fs4404) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h788cf908__0));
    vlSelf->_cp___05Fs4507 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_54)));
    vlSelf->_cp___05Fs4445 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_35)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__multipleHits_rightOne_1 
        = ((IData)(vlSelf->_mc___05Fs1013) | (IData)(vlSelf->_mc___05Fs1014));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__multipleHits_rightOne_3 
        = ((IData)(vlSelf->_mc___05Fs1016) | (IData)(vlSelf->_mc___05Fs1017));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__hi_1 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sector_hits_7) 
            << 3U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sector_hits_6) 
                       << 2U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sector_hits_5) 
                                  << 1U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sector_hits_4))));
    vlSelf->_cp___05Fs8634 = (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT___GEN_2) 
                               & (IData)(vlSelf->_cp___05Fs8647)) 
                              | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sector_hits_1) 
                                 | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sector_hits_2) 
                                    | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sector_hits_3) 
                                       | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sector_hits_4) 
                                          | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sector_hits_5) 
                                             | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sector_hits_6) 
                                                | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sector_hits_7))))))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT___GEN_92 
        = ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sector_hits_7) 
             << 2U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sector_hits_6) 
                        << 1U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sector_hits_5))) 
           | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sector_hits_3) 
               << 2U) | (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sector_hits_2) 
                          << 1U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__sector_hits_1))));
    vlSelf->_cp___05Fs4045 = vlSelf->_cp___05Fs4028;
    vlSelf->_cp___05Fs4062 = vlSelf->_cp___05Fs4028;
    vlSelf->_cp___05Fs4075 = vlSelf->_cp___05Fs4028;
    vlSelf->_cp___05Fs4086 = vlSelf->_cp___05Fs4028;
    vlSelf->_cp___05Fs4097 = vlSelf->_cp___05Fs4028;
    vlSelf->_cp___05Fs4108 = vlSelf->_cp___05Fs4028;
    vlSelf->_cp___05Fs4119 = vlSelf->_cp___05Fs4028;
    vlSelf->_cp___05Fs4022 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_12)));
    vlSelf->_cp___05Fs4041 = vlSelf->_cp___05Fs4024;
    vlSelf->_cp___05Fs4060 = vlSelf->_cp___05Fs4024;
    vlSelf->_cp___05Fs4073 = vlSelf->_cp___05Fs4024;
    vlSelf->_cp___05Fs4084 = vlSelf->_cp___05Fs4024;
    vlSelf->_cp___05Fs4095 = vlSelf->_cp___05Fs4024;
    vlSelf->_cp___05Fs4106 = vlSelf->_cp___05Fs4024;
    vlSelf->_cp___05Fs4117 = vlSelf->_cp___05Fs4024;
    vlSelf->_cp___05Fs4056 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_16)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_23 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_16) 
           & (IData)(((0x18000000U == (0x18000000U 
                                       & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                      & (4U > (0xfU & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 6U))))));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_19 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_16) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_11));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_5) 
             << 7U) | (0xffff80U & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_5) 
                                     << 7U) & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 8U)))) 
           | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_5) 
                | ((~ (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                       >> 0xfU)) & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_5))) 
               << 6U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_4) 
                           << 5U) | (0x3fffe0U & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_4) 
                                                   << 5U) 
                                                  & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xaU)))) 
                         | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_4) 
                              | ((~ (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 0xfU)) & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_4))) 
                             << 4U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_3) 
                                         << 3U) | (0xffff8U 
                                                   & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_3) 
                                                       << 3U) 
                                                      & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0xcU)))) 
                                       | ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_3) 
                                            | ((~ (
                                                   vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xfU)) 
                                               & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_3))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_2) 
                                             << 1U) 
                                            | (0x3fffeU 
                                               & (((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_2) 
                                                   << 1U) 
                                                  & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xeU)))) 
                                           | ((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_acc_2) 
                                              | ((~ 
                                                  (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xfU)) 
                                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__mask_eq_2))))))))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT___GEN_5 
        = ((0x7ffffffff0ULL & ((~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_address 
                                   >> 4U)) << 4U)) 
           | (QData)((IData)((0xfU & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_address)) 
                                      | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT___GEN_3))))));
    vlSelf->_cp___05Fs2503 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_73)));
    vlSelf->_cp___05Fs2780 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_73)));
    vlSelf->_cp___05Fs2484 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_53)));
    vlSelf->_cp___05Fs2761 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT___GEN_53)));
    vlSelf->_cp___05Fs2422 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_35)));
    if (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__nodeIn_r_deq_q__DOT__full) {
        vlSelf->l2_frontend_bus_axi4_0_r_bits_resp 
            = (3U & ((vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__nodeIn_r_deq_q__DOT__ram[2U] 
                      << 0x1fU) | (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__nodeIn_r_deq_q__DOT__ram[2U] 
                                   >> 1U)));
        vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4yank_auto_in_r_bits_last 
            = (1U & (vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__nodeIn_r_deq_q__DOT__ram[2U] 
                     >> 3U));
    } else {
        vlSelf->l2_frontend_bus_axi4_0_r_bits_resp 
            = (3U & ((IData)(vlSelf->_mc___05Fs294) 
                     << 1U));
        vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4yank_auto_in_r_bits_last 
            = (1U & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT____Vcellinp__nodeIn_r_deq_q__io_enq_bits_last));
    }
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4yank_auto_in_b_bits_resp 
        = (3U & ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__q_b_deq_q__DOT__full)
                  ? ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__q_b_deq_q__DOT__ram) 
                     >> 1U) : ((IData)(vlSelf->_mc___05Fs294) 
                               << 1U)));
    vlSelf->_cp___05Fs2520 = ((IData)(vlSelf->_cp___05Fs2381) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h788cf908__0));
    vlSelf->_cp___05Fs2797 = ((IData)(vlSelf->_cp___05Fs2381) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__monitor__DOT____VdfgTmp_h788cf908__0));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__nodeOut_b_ready 
        = (1U & ((~ (IData)(vlSelf->_mc___05Fs316)) 
                 | (IData)(vlSelf->l2_frontend_bus_axi4_0_b_ready)));
    vlSelf->_cp___05Fs2824 = ((~ ((IData)(vlSelf->_cp___05Fs2828) 
                                  & (IData)(vlSelf->l2_frontend_bus_axi4_0_r_ready))) 
                              & ((IData)(vlSelf->_cp___05Fs2828) 
                                 & (IData)(vlSelf->_cp___05Fs2827)));
    vlSelf->l2_frontend_bus_axi4_0_r_valid = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__nodeIn_r_deq_q__DOT__full) 
                                              | (IData)(vlSelf->_cp___05Fs2827));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__q_b_deq_q__DOT___io_deq_valid_output 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__q_b_deq_q__DOT__full) 
           | (IData)(vlSelf->_cp___05Fs2833));
    vlSelf->_cp___05Fs2809 = vlSelf->_cp___05Fs2532;
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__monitor__DOT___GEN_77 
        = (1U & ((~ (IData)(vlSelf->_cp___05Fs2532)) 
                 | (~ (IData)(vlSelf->_mc___05Fs263))));
    vlSelf->_cp___05Fs2471 = ((IData)(vlSelf->_cp___05Fs2381) 
                              & (IData)(vlSelf->_cp___05Fs2532));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_77 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_76) 
           & (IData)((0x12ULL == (0x12ULL & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_xcpt_ae_inst 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__valid_0)
            ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__elts_0_xcpt_ae_inst)
            : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____Vcellinp__fq__io_enq_bits_xcpt_ae_inst));
    vlSelf->_cp___05Fs2015 = vlSelf->_cp___05Fs1998;
    vlSelf->_cp___05Fs2023 = vlSelf->_cp___05Fs2006;
    vlSelf->_cp___05Fs2040 = vlSelf->_cp___05Fs2006;
    vlSelf->_cp___05Fs2053 = vlSelf->_cp___05Fs2006;
    vlSelf->_cp___05Fs2064 = vlSelf->_cp___05Fs2006;
    vlSelf->_cp___05Fs2075 = vlSelf->_cp___05Fs2006;
    vlSelf->_cp___05Fs2086 = vlSelf->_cp___05Fs2006;
    vlSelf->_cp___05Fs2097 = vlSelf->_cp___05Fs2006;
    vlSelf->_cp___05Fs2071 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_25)));
    vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_29 
        = ((0xdU > (0xfU & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                            >> 6U))) & (IData)(ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_13));
    vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_18 
        = ((IData)(ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_13) 
           | ((7U > (0xfU & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                             >> 6U))) & ((0U == (0xfffffU 
                                                 & ((vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[1U] 
                                                     << 6U) 
                                                    | (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                       >> 0x1aU)))) 
                                         | ((0U == 
                                             ((0xfffeU 
                                               & ((vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[1U] 
                                                   << 2U) 
                                                  | (2U 
                                                     & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                        >> 0x1eU)))) 
                                              | (1U 
                                                 & (~ 
                                                    (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                     >> 0x1eU))))) 
                                            | ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_15) 
                                               | ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_16) 
                                                  | ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_17) 
                                                     | (8U 
                                                        == 
                                                        (0xfU 
                                                         & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[1U] 
                                                            >> 0xaU))))))))));
    vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_21 
        = ((0xdU > (0xfU & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                            >> 6U))) & ((IData)(ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_13) 
                                        | (((7U > (0xfU 
                                                   & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                      >> 6U))) 
                                            & ((0U 
                                                == 
                                                (0xfffffU 
                                                 & ((vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[1U] 
                                                     << 6U) 
                                                    | (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                       >> 0x1aU)))) 
                                               | ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_15) 
                                                  | ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_16) 
                                                     | (8U 
                                                        == 
                                                        (0xfU 
                                                         & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[1U] 
                                                            >> 0xaU))))))) 
                                           | ((9U > 
                                               (0xfU 
                                                & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                   >> 6U))) 
                                              & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_17)))));
    vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc_5) 
             << 7U) | (0x1ffff80U & (((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__mask_eq_5) 
                                      << 7U) & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                >> 7U)))) 
           | ((((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc_5) 
                | ((~ (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                       >> 0xeU)) & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__mask_eq_5))) 
               << 6U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc_4) 
                           << 5U) | (0x7fffe0U & (((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__mask_eq_4) 
                                                   << 5U) 
                                                  & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                     >> 9U)))) 
                         | ((((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc_4) 
                              | ((~ (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                     >> 0xeU)) & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__mask_eq_4))) 
                             << 4U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc_3) 
                                         << 3U) | (0x1ffff8U 
                                                   & (((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__mask_eq_3) 
                                                       << 3U) 
                                                      & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                         >> 0xbU)))) 
                                       | ((((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc_3) 
                                            | ((~ (
                                                   vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                   >> 0xeU)) 
                                               & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__mask_eq_3))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc_2) 
                                             << 1U) 
                                            | (0x7fffeU 
                                               & (((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__mask_eq_2) 
                                                   << 1U) 
                                                  & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                     >> 0xdU)))) 
                                           | ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__mask_acc_2) 
                                              | ((~ 
                                                  (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT____Vcellinp__ram_ext__W0_data[0U] 
                                                   >> 0xeU)) 
                                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT__mask_eq_2))))))))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__ae 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_pte_v) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__invalid_paddr));
    vlSelf->_mc___05Fs2613 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_9) 
                              & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__invalid_paddr)) 
                                 & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__invalid_gpa)) 
                                    & (~ ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__count) 
                                          >> 1U)))));
    vlSelf->_cp___05Fs12536 = vlSelf->_cp___05Fs12534;
    vlSelf->_cp___05Fs10295 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__legal_source)));
    vlSelf->_cp___05Fs10312 = vlSelf->_cp___05Fs10297;
    vlSelf->_cp___05Fs10327 = vlSelf->_cp___05Fs10297;
    vlSelf->_cp___05Fs10340 = vlSelf->_cp___05Fs10297;
    vlSelf->_cp___05Fs10353 = vlSelf->_cp___05Fs10297;
    vlSelf->_cp___05Fs10366 = vlSelf->_cp___05Fs10297;
    vlSelf->_cp___05Fs10379 = vlSelf->_cp___05Fs10297;
    vlSelf->_cp___05Fs8039 = vlSelf->_cp___05Fs10297;
    vlSelf->_cp___05Fs8054 = vlSelf->_cp___05Fs10297;
    vlSelf->_cp___05Fs8069 = vlSelf->_cp___05Fs10297;
    vlSelf->_cp___05Fs8082 = vlSelf->_cp___05Fs10297;
    vlSelf->_cp___05Fs8095 = vlSelf->_cp___05Fs10297;
    vlSelf->_cp___05Fs8108 = vlSelf->_cp___05Fs10297;
    vlSelf->_cp___05Fs8121 = vlSelf->_cp___05Fs10297;
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_57 
        = ((~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_b_q__DOT___ram_ext_R0_data[0U] 
               >> 9U)) & (IData)(__VdfgTmp_ha89e5ec9__0));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_61 
        = (IData)(((0U == (0x600U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_b_q__DOT___ram_ext_R0_data[0U])) 
                   & (IData)(__VdfgTmp_ha89e5ec9__0)));
    vlSelf->_cp___05Fs10308 = vlSelf->_cp___05Fs10293;
    vlSelf->_cp___05Fs10323 = vlSelf->_cp___05Fs10293;
    vlSelf->_cp___05Fs10336 = vlSelf->_cp___05Fs10293;
    vlSelf->_cp___05Fs10349 = vlSelf->_cp___05Fs10293;
    vlSelf->_cp___05Fs10362 = vlSelf->_cp___05Fs10293;
    vlSelf->_cp___05Fs10375 = vlSelf->_cp___05Fs10293;
    vlSelf->_cp___05Fs8035 = vlSelf->_cp___05Fs10293;
    vlSelf->_cp___05Fs8050 = vlSelf->_cp___05Fs10293;
    vlSelf->_cp___05Fs8065 = vlSelf->_cp___05Fs10293;
    vlSelf->_cp___05Fs8078 = vlSelf->_cp___05Fs10293;
    vlSelf->_cp___05Fs8091 = vlSelf->_cp___05Fs10293;
    vlSelf->_cp___05Fs8104 = vlSelf->_cp___05Fs10293;
    vlSelf->_cp___05Fs8117 = vlSelf->_cp___05Fs10293;
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_1 
        = ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_19) 
             << 7U) | (0xfffff80U & (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_19) 
                                      << 7U) & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_b_q__DOT___ram_ext_R0_data[0U] 
                                                >> 4U)))) 
           | ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_19) 
                | ((~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_b_q__DOT___ram_ext_R0_data[0U] 
                       >> 0xbU)) & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_19))) 
               << 6U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_18) 
                           << 5U) | (0x3ffffe0U & (
                                                   ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_18) 
                                                    << 5U) 
                                                   & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_b_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U)))) 
                         | ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_18) 
                              | ((~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_b_q__DOT___ram_ext_R0_data[0U] 
                                     >> 0xbU)) & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_18))) 
                             << 4U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_17) 
                                         << 3U) | (0xfffff8U 
                                                   & (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_17) 
                                                       << 3U) 
                                                      & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_b_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 8U)))) 
                                       | ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_17) 
                                            | ((~ (
                                                   vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_b_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xbU)) 
                                               & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_17))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_16) 
                                             << 1U) 
                                            | (0x3ffffeU 
                                               & (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_16) 
                                                   << 1U) 
                                                  & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_b_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xaU)))) 
                                           | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_16) 
                                              | ((~ 
                                                  (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_b_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xbU)) 
                                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_16))))))))));
    vlSelf->_cp___05Fs8246 = ((IData)(vlSelf->_cp___05Fs8026) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__b_first_counter)));
    vlSelf->_cp___05Fs9153 = ((IData)(vlSelf->_cp___05Fs9283) 
                              | ((IData)(vlSelf->_cp___05Fs8026) 
                                 & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__block_probe_for_core_progress)) 
                                    | ((~ (IData)((0U 
                                                   != 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lrscCount) 
                                                       >> 2U))))) 
                                       & (IData)(vlSelf->_cp___05Fs9228)))));
    vlSelf->_mc___05Fs1024 = ((IData)(vlSelf->_mc___05Fs997) 
                              & (IData)(vlSelf->_cp___05Fs8835));
    vlSelf->_mc___05Fs1020 = ((IData)(vlSelf->_mc___05Fs997) 
                              & (IData)(vlSelf->_cp___05Fs8807));
    vlSelf->_mc___05Fs1021 = ((IData)(vlSelf->_mc___05Fs997) 
                              & (IData)(vlSelf->_cp___05Fs8814));
    vlSelf->_mc___05Fs1022 = ((IData)(vlSelf->_mc___05Fs997) 
                              & (IData)(vlSelf->_cp___05Fs8821));
    vlSelf->_cp___05Fs8635 = ((IData)(vlSelf->_cp___05Fs8807) 
                              | ((IData)(vlSelf->_cp___05Fs8814) 
                                 | ((IData)(vlSelf->_cp___05Fs8821) 
                                    | (IData)(vlSelf->_cp___05Fs8828))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__hi_4 
        = (((IData)(vlSelf->_cp___05Fs8828) << 1U) 
           | (IData)(vlSelf->_cp___05Fs8821));
    vlSelf->_mc___05Fs1023 = ((IData)(vlSelf->_mc___05Fs997) 
                              & (IData)(vlSelf->_cp___05Fs8828));
    vlSelf->_mc___05Fs464 = (1U & (IData)(ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT___GEN_74));
    vlSelf->_mc___05Fs465 = (1U & (((IData)(ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT___GEN_74) 
                                    >> 1U) | (IData)(vlSelf->_mc___05Fs463)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT___GEN_75 
        = (0xfU & (((IData)(ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT___GEN_74) 
                    >> 2U) | (IData)(ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT___GEN_74)));
    vlSelf->_mc___05Fs456 = (1U & (IData)(ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT___GEN_68));
    vlSelf->_mc___05Fs457 = (1U & (((IData)(ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT___GEN_68) 
                                    >> 1U) | (IData)(vlSelf->_mc___05Fs455)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT___GEN_69 
        = (0xfU & (((IData)(ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT___GEN_68) 
                    >> 2U) | (IData)(ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT___GEN_68)));
    vlSelf->_cp___05Fs2229 = ((IData)(ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_67) 
                              & ((IData)(vlSelf->_mc___05Fs244) 
                                 & ((IData)(vlSelf->_cp___05Fs1991) 
                                    & ((~ (IData)(vlSelf->_cp___05Fs2107)) 
                                       & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_72)))));
    vlSelf->_cp___05Fs2215 = ((~ (IData)(vlSelf->_cp___05Fs2107)) 
                              & (IData)(ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_67));
    vlSelf->_cp___05Fs265 = vlSelf->_cp___05Fs1060;
    vlSelf->_mc___05Fs105 = ((IData)(vlSelf->_cp___05Fs1060) 
                             & (IData)(vlSelf->_mc___05Fs106));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT____VdfgTmp_hdc589f0c__0 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn) 
            << 0xcU) | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__pte_addr_vpn_idx) 
                        << 3U));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_35 
        = (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn) 
            << 0xcU) & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__pmpHomogeneous_pgMask);
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_115 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__size_3));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_122 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_bits_size) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__size_3));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_158 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_bits_size) 
           == (0xfU & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                       >> 5U)));
    vlSelf->__VdfgTmp_h86a38631__0 = ((6U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_bits_size)) 
                                      & ((0xdU > (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_bits_size)) 
                                         & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__address_ok_1)));
    vlSelf->_cp___05Fs10395 = (2U >= (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_bits_size));
    vlSelf->__VdfgTmp_h9fd297ad__0 = ((7U > (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_bits_size)) 
                                      & (8U == (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__probe_bits_address 
                                                >> 0x1cU)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_68 
        = (0xfffU & ((~ ((IData)(0xfffU) << (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_bits_size))) 
                     & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__probe_bits_address));
    vlSelf->_cp___05Fs10413 = (6U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_bits_opcode));
    vlSelf->_cp___05Fs10428 = (7U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_bits_opcode));
    vlSelf->_cp___05Fs10441 = (0U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_bits_opcode));
    vlSelf->_cp___05Fs10452 = (1U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_bits_opcode));
    vlSelf->_cp___05Fs10461 = (2U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_bits_opcode));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_113 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_bits_opcode) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__opcode_3));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_120 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_bits_opcode) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__opcode_3));
    vlSelf->_cp___05Fs10389 = (4U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_bits_opcode));
    vlSelf->_cp___05Fs10402 = (5U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_bits_opcode));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_146 
        = (IData)((6U == (6U & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_bits_opcode))));
    vlSelf->_mc___05Fs1323 = (1U & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_bits_opcode));
    vlSelf->_cp___05Fs10007 = ((IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_140 
                                        >> 0x2fU)) 
                               & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_debug));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_cmd_uses_tlb 
        = ((IData)(vlSelf->_mc___05Fs1161) | ((IData)(vlSelf->_mc___05Fs1299) 
                                              | (((5U 
                                                   == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
                                                  & (IData)(vlSelf->_cp___05Fs8646)) 
                                                 | (0x17U 
                                                    == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)))));
    vlSelf->_mc___05Fs1385 = (1U & (~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                       >> 0x13U)));
    vlSelf->_mc___05Fs1398 = ((0U == ((0x30U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                >> 0xeU)) 
                                      | ((8U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                >> 0xcU)) 
                                         | ((4U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                   >> 0xbU)) 
                                            | ((2U 
                                                & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                   >> 3U)) 
                                               | (1U 
                                                  & (~ 
                                                     (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                      >> 1U)))))))) 
                              | ((0U == ((0x18U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                   >> 0xfU)) 
                                         | ((4U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                   >> 0xdU)) 
                                            | ((2U 
                                                & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                   >> 0xcU)) 
                                               | (1U 
                                                  & (~ 
                                                     (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                      >> 4U))))))) 
                                 | (0U == (3U & (2U 
                                                 ^ 
                                                 (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                  >> 0x12U))))));
    vlSelf->_mc___05Fs1386 = (1U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                    >> 0x13U));
    vlSelf->_mc___05Fs1388 = (0U == ((0xcU & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                              >> 0x10U)) 
                                     | ((2U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                               >> 0xeU)) 
                                        | (1U & (~ 
                                                 (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                  >> 4U))))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pma__DOT___GEN_1 
        = (0U == ((6U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                         >> 0x11U)) | (1U & (~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                >> 0xfU)))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__deny_access_to_debug 
        = ((~ ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_1)) 
               & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_debug))) 
           & (0U == vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pma__DOT___GEN_2 
        = (0U == ((2U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                         >> 0x12U)) | (1U & (~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                >> 0x12U)))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pma__DOT__legal_address 
        = ((0U == vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
           | ((0U == ((0xffffffcU & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
                      | (3U & (~ vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn)))) 
              | ((0U == ((0xfffffeU & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                       >> 4U)) | (1U 
                                                  & (~ 
                                                     (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                      >> 4U))))) 
                 | ((0U == ((0xfffc00U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                          >> 4U)) | 
                            (0x3ffU & (0x200U ^ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                 >> 4U))))) 
                    | ((0U == ((0x3ffcU & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                           >> 0xeU)) 
                               | (3U & (~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                           >> 0xeU))))) 
                       | ((0U == ((0x7fcU & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                             >> 0x11U)) 
                                  | (3U & (~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                              >> 0x11U))))) 
                          | (0U == ((0xff0U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                               >> 0x10U)) 
                                    | (0xfU & (8U ^ 
                                               (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                >> 0x10U)))))))))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT____Vcellinp__pmp__io_addr 
        = ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
            << 0xcU) | (0xfffU & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc)));
    vlSelf->_mc___05Fs2969 = (IData)(((0x200000U == 
                                       (0x1e00000U 
                                        & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst)) 
                                      & (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hb35d19a9__0)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hd471c3a2__0 
        = (IData)(((0x1800000U == (0x1800000U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst)) 
                   & (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hb35d19a9__0)));
    vlSelf->_cp___05Fs9843 = ((4U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
                              & (IData)(((0x400000U 
                                          == (0x3c00000U 
                                              & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst)) 
                                         & (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h1ab2a0df__0))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h98580992__0 
        = ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
            >> 0x19U) & (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h1ab2a0df__0));
    vlSelf->_mc___05Fs2818 = ((4U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
                              & ((~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                     >> 0x14U)) & (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h473a13d8__0)));
    vlSelf->_mc___05Fs2817 = ((4U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
                              & ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                  >> 0x14U) & (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h473a13d8__0)));
    vlSelf->_cp___05Fs10026 = vlSelf->_mc___05Fs2986;
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h4b2cbe7b__0 
        = ((0x400U & ((~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                          >> 0x15U)) << 0xaU)) | (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h5a282bfc__0));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h10a885a7__0 
        = ((0x400U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                      >> 0xbU)) | (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h5a282bfc__0));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_75 
        = ((0x400U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                      >> 0xbU)) | (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hafcbd1e5__0));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h96801812__0 
        = ((0x400U & ((~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                          >> 0x15U)) << 0xaU)) | (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hafcbd1e5__0));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT___GEN 
        = ((2U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__shiftedSig[1U] 
                  >> 0x12U)) | (0U != (0x7ffffffffffffULL 
                                       & ((((QData)((IData)(
                                                            vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U]))) 
                                          << (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT____VdfgTmp_h98301597__0)))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT___GEN 
        = ((2U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[1U] 
                  >> 0x12U)) | (0U != (0x7ffffffffffffULL 
                                       & ((((QData)((IData)(
                                                            vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U]))) 
                                          << (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT____VdfgTmp_h982919f3__0)))));
    __Vtemp_537[0U] = (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum);
    __Vtemp_537[1U] = (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
                               >> 0x20U));
    __Vtemp_537[2U] = 0U;
    VL_SHIFTL_WWI(81,81,5, __Vtemp_538, __Vtemp_537, (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_CDom_CAlignDist));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN_0[0U] 
        = __Vtemp_538[0U];
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN_0[1U] 
        = __Vtemp_538[1U];
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN_0[2U] 
        = (0x1ffffU & __Vtemp_538[2U]);
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
        = (0x7ffffffffffffULL & ((IData)(vlSelf->_mc___05Fs1751)
                                  ? (~ vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN_1)
                                  : (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN_1 
                                     + (QData)((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_doSubMags)))));
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
    vlSelf->_cp___05Fs10535 = ((~ (IData)(vlSelf->_cp___05Fs10216)) 
                               & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_133));
    vlSelf->_cp___05Fs10563 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_157) 
                               & (IData)(vlSelf->_cp___05Fs10216));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_11 
        = ((4U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_cmd)) 
           | ((9U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_cmd)) 
              | ((0xaU == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_cmd)) 
                 | ((0xbU == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_cmd)) 
                    | ((8U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_cmd)) 
                       | ((0xcU == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_cmd)) 
                          | ((0xdU == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_cmd)) 
                             | ((0xeU == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_cmd)) 
                                | (0xfU == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_cmd))))))))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_13 
        = ((1U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_cmd)) 
           | (3U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_cmd)));
    vlSelf->_mc___05Fs2069 = ((~ (IData)((0U != (0x7fffffU 
                                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN))))) 
                              & (IData)(vlSelf->_mc___05Fs2068));
    vlSelf->_mc___05Fs2044 = ((~ (IData)((0U != (0xfffffffffffffULL 
                                                 & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN)))) 
                              & (IData)(vlSelf->_mc___05Fs2043));
    vlSelf->_mc___05Fs2046 = vlSelf->_mc___05Fs1992;
    vlSelf->_mc___05Fs2047 = vlSelf->_mc___05Fs1993;
    vlSelf->_mc___05Fs2048 = vlSelf->_mc___05Fs1994;
    vlSelf->_mc___05Fs2049 = vlSelf->_mc___05Fs1995;
    vlSelf->_mc___05Fs2050 = vlSelf->_mc___05Fs1996;
    vlSelf->_mc___05Fs2051 = vlSelf->_mc___05Fs1997;
    vlSelf->_mc___05Fs2052 = vlSelf->_mc___05Fs1998;
    vlSelf->_mc___05Fs2053 = vlSelf->_mc___05Fs1999;
    vlSelf->_mc___05Fs2054 = vlSelf->_mc___05Fs2000;
    vlSelf->_mc___05Fs2055 = vlSelf->_mc___05Fs2001;
    vlSelf->_mc___05Fs2056 = vlSelf->_mc___05Fs2002;
    vlSelf->_mc___05Fs2057 = vlSelf->_mc___05Fs2003;
    vlSelf->_mc___05Fs2058 = vlSelf->_mc___05Fs2004;
    vlSelf->_mc___05Fs2059 = vlSelf->_mc___05Fs2005;
    vlSelf->_mc___05Fs2060 = vlSelf->_mc___05Fs2006;
    vlSelf->_mc___05Fs2061 = vlSelf->_mc___05Fs2007;
    vlSelf->_mc___05Fs2062 = vlSelf->_mc___05Fs2008;
    vlSelf->_mc___05Fs2063 = vlSelf->_mc___05Fs2009;
    vlSelf->_mc___05Fs2064 = vlSelf->_mc___05Fs2010;
    vlSelf->_mc___05Fs2065 = vlSelf->_mc___05Fs2011;
    vlSelf->_mc___05Fs2066 = vlSelf->_mc___05Fs2012;
    vlSelf->_mc___05Fs2067 = vlSelf->_mc___05Fs2013;
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__mux_data_rawIn_adjustedExp_1 
        = (0x1ffU & (((IData)(vlSelf->_mc___05Fs2068)
                       ? (0x1e0U | ((IData)(vlSelf->_mc___05Fs2013)
                                     ? 0x1fU : ((IData)(vlSelf->_mc___05Fs2012)
                                                 ? 0x1eU
                                                 : 
                                                ((IData)(vlSelf->_mc___05Fs2011)
                                                  ? 0x1dU
                                                  : 
                                                 ((IData)(vlSelf->_mc___05Fs2010)
                                                   ? 0x1cU
                                                   : 
                                                  ((IData)(vlSelf->_mc___05Fs2009)
                                                    ? 0x1bU
                                                    : 
                                                   ((IData)(vlSelf->_mc___05Fs2008)
                                                     ? 0x1aU
                                                     : 
                                                    ((IData)(vlSelf->_mc___05Fs2007)
                                                      ? 0x19U
                                                      : 
                                                     ((IData)(vlSelf->_mc___05Fs2006)
                                                       ? 0x18U
                                                       : 
                                                      ((IData)(vlSelf->_mc___05Fs2005)
                                                        ? 0x17U
                                                        : 
                                                       ((IData)(vlSelf->_mc___05Fs2004)
                                                         ? 0x16U
                                                         : 
                                                        ((IData)(vlSelf->_mc___05Fs2003)
                                                          ? 0x15U
                                                          : 
                                                         ((IData)(vlSelf->_mc___05Fs2002)
                                                           ? 0x14U
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs2001)
                                                            ? 0x13U
                                                            : 
                                                           ((IData)(vlSelf->_mc___05Fs2000)
                                                             ? 0x12U
                                                             : 
                                                            ((IData)(vlSelf->_mc___05Fs1999)
                                                              ? 0x11U
                                                              : 
                                                             ((IData)(vlSelf->_mc___05Fs1998)
                                                               ? 0x10U
                                                               : 
                                                              ((IData)(vlSelf->_mc___05Fs1997)
                                                                ? 0xfU
                                                                : 
                                                               ((IData)(vlSelf->_mc___05Fs1996)
                                                                 ? 0xeU
                                                                 : 
                                                                ((IData)(vlSelf->_mc___05Fs1995)
                                                                  ? 0xdU
                                                                  : 
                                                                 ((IData)(vlSelf->_mc___05Fs1994)
                                                                   ? 0xcU
                                                                   : 
                                                                  ((IData)(vlSelf->_mc___05Fs1993)
                                                                    ? 0xbU
                                                                    : 
                                                                   ((IData)(vlSelf->_mc___05Fs1992)
                                                                     ? 0xaU
                                                                     : 9U)))))))))))))))))))))))
                       : (0xffU & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                           >> 0x17U)))) 
                     + (0x80U | ((IData)(vlSelf->_mc___05Fs2068)
                                  ? 2U : 1U))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__mux_data_rawIn_normDist 
        = ((IData)(vlSelf->_mc___05Fs2042) ? 0U : ((IData)(vlSelf->_mc___05Fs2041)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->_mc___05Fs2040)
                                                     ? 2U
                                                     : 
                                                    ((IData)(vlSelf->_mc___05Fs2039)
                                                      ? 3U
                                                      : 
                                                     ((IData)(vlSelf->_mc___05Fs2038)
                                                       ? 4U
                                                       : 
                                                      ((IData)(vlSelf->_mc___05Fs2037)
                                                        ? 5U
                                                        : 
                                                       ((IData)(vlSelf->_mc___05Fs2036)
                                                         ? 6U
                                                         : 
                                                        ((IData)(vlSelf->_mc___05Fs2035)
                                                          ? 7U
                                                          : 
                                                         ((IData)(vlSelf->_mc___05Fs2034)
                                                           ? 8U
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs2033)
                                                            ? 9U
                                                            : 
                                                           ((IData)(vlSelf->_mc___05Fs2032)
                                                             ? 0xaU
                                                             : 
                                                            ((IData)(vlSelf->_mc___05Fs2031)
                                                              ? 0xbU
                                                              : 
                                                             ((IData)(vlSelf->_mc___05Fs2030)
                                                               ? 0xcU
                                                               : 
                                                              ((IData)(vlSelf->_mc___05Fs2029)
                                                                ? 0xdU
                                                                : 
                                                               ((IData)(vlSelf->_mc___05Fs2028)
                                                                 ? 0xeU
                                                                 : 
                                                                ((IData)(vlSelf->_mc___05Fs2027)
                                                                  ? 0xfU
                                                                  : 
                                                                 ((IData)(vlSelf->_mc___05Fs2026)
                                                                   ? 0x10U
                                                                   : 
                                                                  ((IData)(vlSelf->_mc___05Fs2025)
                                                                    ? 0x11U
                                                                    : 
                                                                   ((IData)(vlSelf->_mc___05Fs2024)
                                                                     ? 0x12U
                                                                     : 
                                                                    ((IData)(vlSelf->_mc___05Fs2023)
                                                                      ? 0x13U
                                                                      : 
                                                                     ((IData)(vlSelf->_mc___05Fs2022)
                                                                       ? 0x14U
                                                                       : 
                                                                      ((IData)(vlSelf->_mc___05Fs2021)
                                                                        ? 0x15U
                                                                        : 
                                                                       ((IData)(vlSelf->_mc___05Fs2020)
                                                                         ? 0x16U
                                                                         : 
                                                                        ((IData)(vlSelf->_mc___05Fs2019)
                                                                          ? 0x17U
                                                                          : 
                                                                         ((IData)(vlSelf->_mc___05Fs2018)
                                                                           ? 0x18U
                                                                           : 
                                                                          ((IData)(vlSelf->_mc___05Fs2017)
                                                                            ? 0x19U
                                                                            : 
                                                                           ((IData)(vlSelf->_mc___05Fs2016)
                                                                             ? 0x1aU
                                                                             : 
                                                                            ((IData)(vlSelf->_mc___05Fs2015)
                                                                              ? 0x1bU
                                                                              : 
                                                                             ((IData)(vlSelf->_mc___05Fs2014)
                                                                               ? 0x1cU
                                                                               : 
                                                                              ((IData)(vlSelf->_mc___05Fs2013)
                                                                                ? 0x1dU
                                                                                : 
                                                                               ((IData)(vlSelf->_mc___05Fs2012)
                                                                                 ? 0x1eU
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2011)
                                                                                 ? 0x1fU
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2010)
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2009)
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2008)
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2007)
                                                                                 ? 0x23U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2006)
                                                                                 ? 0x24U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2005)
                                                                                 ? 0x25U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2004)
                                                                                 ? 0x26U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2003)
                                                                                 ? 0x27U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2002)
                                                                                 ? 0x28U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2001)
                                                                                 ? 0x29U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2000)
                                                                                 ? 0x2aU
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs1999)
                                                                                 ? 0x2bU
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs1998)
                                                                                 ? 0x2cU
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs1997)
                                                                                 ? 0x2dU
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs1996)
                                                                                 ? 0x2eU
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs1995)
                                                                                 ? 0x2fU
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs1994)
                                                                                 ? 0x30U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs1993)
                                                                                 ? 0x31U
                                                                                 : 
                                                                                (0x32U 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->_mc___05Fs1992))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__mux_data_rawIn_adjustedExp 
        = (0xfffU & (((IData)(vlSelf->_mc___05Fs2043)
                       ? (0xfc0U | ((IData)(vlSelf->_mc___05Fs2042)
                                     ? 0x3fU : ((IData)(vlSelf->_mc___05Fs2041)
                                                 ? 0x3eU
                                                 : 
                                                ((IData)(vlSelf->_mc___05Fs2040)
                                                  ? 0x3dU
                                                  : 
                                                 ((IData)(vlSelf->_mc___05Fs2039)
                                                   ? 0x3cU
                                                   : 
                                                  ((IData)(vlSelf->_mc___05Fs2038)
                                                    ? 0x3bU
                                                    : 
                                                   ((IData)(vlSelf->_mc___05Fs2037)
                                                     ? 0x3aU
                                                     : 
                                                    ((IData)(vlSelf->_mc___05Fs2036)
                                                      ? 0x39U
                                                      : 
                                                     ((IData)(vlSelf->_mc___05Fs2035)
                                                       ? 0x38U
                                                       : 
                                                      ((IData)(vlSelf->_mc___05Fs2034)
                                                        ? 0x37U
                                                        : 
                                                       ((IData)(vlSelf->_mc___05Fs2033)
                                                         ? 0x36U
                                                         : 
                                                        ((IData)(vlSelf->_mc___05Fs2032)
                                                          ? 0x35U
                                                          : 
                                                         ((IData)(vlSelf->_mc___05Fs2031)
                                                           ? 0x34U
                                                           : 
                                                          ((IData)(vlSelf->_mc___05Fs2030)
                                                            ? 0x33U
                                                            : 
                                                           ((IData)(vlSelf->_mc___05Fs2029)
                                                             ? 0x32U
                                                             : 
                                                            ((IData)(vlSelf->_mc___05Fs2028)
                                                              ? 0x31U
                                                              : 
                                                             ((IData)(vlSelf->_mc___05Fs2027)
                                                               ? 0x30U
                                                               : 
                                                              ((IData)(vlSelf->_mc___05Fs2026)
                                                                ? 0x2fU
                                                                : 
                                                               ((IData)(vlSelf->_mc___05Fs2025)
                                                                 ? 0x2eU
                                                                 : 
                                                                ((IData)(vlSelf->_mc___05Fs2024)
                                                                  ? 0x2dU
                                                                  : 
                                                                 ((IData)(vlSelf->_mc___05Fs2023)
                                                                   ? 0x2cU
                                                                   : 
                                                                  ((IData)(vlSelf->_mc___05Fs2022)
                                                                    ? 0x2bU
                                                                    : 
                                                                   ((IData)(vlSelf->_mc___05Fs2021)
                                                                     ? 0x2aU
                                                                     : 
                                                                    ((IData)(vlSelf->_mc___05Fs2020)
                                                                      ? 0x29U
                                                                      : 
                                                                     ((IData)(vlSelf->_mc___05Fs2019)
                                                                       ? 0x28U
                                                                       : 
                                                                      ((IData)(vlSelf->_mc___05Fs2018)
                                                                        ? 0x27U
                                                                        : 
                                                                       ((IData)(vlSelf->_mc___05Fs2017)
                                                                         ? 0x26U
                                                                         : 
                                                                        ((IData)(vlSelf->_mc___05Fs2016)
                                                                          ? 0x25U
                                                                          : 
                                                                         ((IData)(vlSelf->_mc___05Fs2015)
                                                                           ? 0x24U
                                                                           : 
                                                                          ((IData)(vlSelf->_mc___05Fs2014)
                                                                            ? 0x23U
                                                                            : 
                                                                           ((IData)(vlSelf->_mc___05Fs2013)
                                                                             ? 0x22U
                                                                             : 
                                                                            ((IData)(vlSelf->_mc___05Fs2012)
                                                                              ? 0x21U
                                                                              : 
                                                                             ((IData)(vlSelf->_mc___05Fs2011)
                                                                               ? 0x20U
                                                                               : 
                                                                              ((IData)(vlSelf->_mc___05Fs2010)
                                                                                ? 0x1fU
                                                                                : 
                                                                               ((IData)(vlSelf->_mc___05Fs2009)
                                                                                 ? 0x1eU
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2008)
                                                                                 ? 0x1dU
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2007)
                                                                                 ? 0x1cU
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2006)
                                                                                 ? 0x1bU
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2005)
                                                                                 ? 0x1aU
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2004)
                                                                                 ? 0x19U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2003)
                                                                                 ? 0x18U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2002)
                                                                                 ? 0x17U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2001)
                                                                                 ? 0x16U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs2000)
                                                                                 ? 0x15U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs1999)
                                                                                 ? 0x14U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs1998)
                                                                                 ? 0x13U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs1997)
                                                                                 ? 0x12U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs1996)
                                                                                 ? 0x11U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs1995)
                                                                                 ? 0x10U
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs1994)
                                                                                 ? 0xfU
                                                                                 : 
                                                                                ((IData)(vlSelf->_mc___05Fs1993)
                                                                                 ? 0xeU
                                                                                 : 
                                                                                (0x3fU 
                                                                                & (~ 
                                                                                (0x32U 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->_mc___05Fs1992)))))))))))))))))))))))))))))))))))))))))))))))))))))))))
                       : (0x7ffU & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN 
                                            >> 0x34U)))) 
                     + (0x400U | ((IData)(vlSelf->_mc___05Fs2043)
                                   ? 2U : 1U))));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_30 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_sink) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__sink));
    vlSelf->_cp___05Fs11920 = vlSelf->_cp___05Fs11881;
    vlSelf->_cp___05Fs11929 = vlSelf->_cp___05Fs11881;
    vlSelf->_cp___05Fs11938 = vlSelf->_cp___05Fs11881;
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
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_41 
        = ((IData)(vlSelf->_mc___05Fs1740) ? ((0x7ff80000U 
                                               & ((- (IData)(
                                                             (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                              >> 0x1fU))) 
                                                  << 0x13U)) 
                                              | ((IData)(vlSelf->_mc___05Fs1739)
                                                  ? 
                                                 ((0x7f800U 
                                                   & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                      >> 1U)) 
                                                  | ((0x400U 
                                                      & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                         >> 0xaU)) 
                                                     | (0x3ffU 
                                                        & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                           >> 0x15U))))
                                                  : 
                                                 ((0x7f800U 
                                                   & ((- (IData)(
                                                                 (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                                  >> 0x1fU))) 
                                                      << 0xbU)) 
                                                  | ((0x400U 
                                                      & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                         << 3U)) 
                                                     | ((0x3f0U 
                                                         & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                            >> 0x15U)) 
                                                        | (0xfU 
                                                           & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                              >> 8U)))))))
            : ((0x7ffffc00U & ((- (IData)((IData)(vlSelf->_mc___05Fs1710))) 
                               << 0xaU)) | ((IData)(vlSelf->_mc___05Fs1712)
                                             ? ((0x380U 
                                                 & ((- (IData)((IData)(vlSelf->_mc___05Fs1710))) 
                                                    << 7U)) 
                                                | ((0x60U 
                                                    & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                       >> 0x10U)) 
                                                   | ((0x10U 
                                                       & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                          >> 0xeU)) 
                                                      | ((0xcU 
                                                          & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                             >> 0x18U)) 
                                                         | (3U 
                                                            & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                               >> 0x13U))))))
                                             : ((0x200U 
                                                 & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                    >> 0xfU)) 
                                                | ((0x180U 
                                                    & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                       >> 0x12U)) 
                                                   | ((0x40U 
                                                       & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                          >> 0x10U)) 
                                                      | ((0x20U 
                                                          & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                             >> 0x12U)) 
                                                         | ((0x10U 
                                                             & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                                >> 0xeU)) 
                                                            | ((8U 
                                                                & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                                   >> 0x18U)) 
                                                               | (7U 
                                                                  & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                                     >> 0x13U)))))))))));
    vlSelf->_cp___05Fs9657 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_18) 
                              & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_btb_resp_bits_bridx)) 
                                 & (IData)(vlSelf->_mc___05Fs1740)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_valid_1 
        = (1U & ((~ (IData)(vlSelf->_mc___05Fs1740)) 
                 & (((IData)(3U) << (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_pc 
                                                   >> 1U)))) 
                    >> 1U)));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4yank_auto_out_ar_valid 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q__DOT___io_deq_valid_output) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN));
    if (vlSelf->_mc___05Fs2169) {
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h1ff36051__0 
            = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h3152f987__0 
                             >> 1U)));
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h0863dd5d__0 
            = (0x1fffffffffffffULL & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h3152f987__0 
                                      >> 1U));
    } else {
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h1ff36051__0 = 0U;
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h0863dd5d__0 = 0ULL;
    }
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_3 
        = (((IData)(vlSelf->_mc___05Fs2169) & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h3152f987__0)) 
           | (IData)(vlSelf->_mc___05Fs2173));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h8582494a__0 
        = ((ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h595d38b9__0 
            << 1U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_3 
        = (1U | ((ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h595d38b9__0 
                  << 2U) | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2) 
                            << 1U)));
    vlSelf->_cp___05Fs9673 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__valid_4)) 
                              & (IData)(vlSelf->_cp___05Fs9346));
    vlSelf->_mc___05Fs2723 = ((IData)(vlSelf->_cp___05Fs9346) 
                              | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq__DOT__valid_0));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT___GEN_1 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s2_miss) 
           | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refill_valid));
    vlSelf->_cp___05Fs8331 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s2_miss) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s2_request_refill_REG));
    vlSelf->_mc___05Fs980 = (1U & (~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                                      >> 0x13U)));
    vlSelf->_mc___05Fs993 = ((0U == ((0x30U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                                               >> 0xeU)) 
                                     | ((8U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                                               >> 0xcU)) 
                                        | ((4U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                                                  >> 0xbU)) 
                                           | ((2U & 
                                               (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                                                >> 3U)) 
                                              | (1U 
                                                 & (~ 
                                                    (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                                                     >> 1U)))))))) 
                             | ((0U == ((0x18U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                                                  >> 0xfU)) 
                                        | ((4U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                                                  >> 0xdU)) 
                                           | ((2U & 
                                               (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                                                >> 0xcU)) 
                                              | (1U 
                                                 & (~ 
                                                    (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                                                     >> 4U))))))) 
                                | (0U == (3U & (2U 
                                                ^ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                                                   >> 0x12U))))));
    vlSelf->_mc___05Fs983 = (0U == ((0xcU & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                                             >> 0x10U)) 
                                    | ((2U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                                              >> 0xeU)) 
                                       | (1U & (~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                                                   >> 4U))))));
    vlSelf->_mc___05Fs981 = (1U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                                   >> 0x13U));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__deny_access_to_debug 
        = ((~ ((~ (IData)(vlSelf->_mc___05Fs999)) & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_debug))) 
           & (0U == vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pma__DOT___GEN_2 
        = (0U == ((2U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                         >> 0x12U)) | (1U & (~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                                                >> 0x12U)))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pma__DOT___GEN_1 
        = (0U == ((6U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                         >> 0x11U)) | (1U & (~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                                                >> 0xfU)))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pma__DOT__legal_address 
        = ((0U == vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn) 
           | ((0U == ((0xffffffcU & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn) 
                      | (3U & (~ vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn)))) 
              | ((0U == ((0xfffffeU & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                                       >> 4U)) | (1U 
                                                  & (~ 
                                                     (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                                                      >> 4U))))) 
                 | ((0U == ((0xfffc00U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                                          >> 4U)) | 
                            (0x3ffU & (0x200U ^ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                                                 >> 4U))))) 
                    | ((0U == ((0x3ffcU & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                                           >> 0xeU)) 
                               | (3U & (~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                                           >> 0xeU))))) 
                       | ((0U == ((0x7fcU & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                                             >> 0x11U)) 
                                  | (3U & (~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                                              >> 0x11U))))) 
                          | (0U == ((0xff0U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                                               >> 0x10U)) 
                                    | (0xfU & (8U ^ 
                                               (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                                                >> 0x10U)))))))))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h56959d38__0 
        = ((0x1ffffe00U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__mpu_ppn 
                           << 9U)) | (0x1ffU & (IData)(
                                                       (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                        >> 3U))));
    vlSelf->_cp___05Fs8288 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_137)));
    vlSelf->_cp___05Fs10546 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_143)));
    vlSelf->_cp___05Fs8243 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_102)));
    vlSelf->_cp___05Fs8547 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_31)));
    vlSelf->_cp___05Fs10501 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_109)));
    vlSelf->_cp___05Fs10254 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_41)));
    vlSelf->_cp___05Fs10218 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__source_ok_1)));
    vlSelf->_cp___05Fs8534 = vlSelf->_cp___05Fs8444;
    vlSelf->_cp___05Fs8550 = vlSelf->_cp___05Fs8444;
    vlSelf->_cp___05Fs8578 = vlSelf->_cp___05Fs8444;
    vlSelf->_cp___05Fs8601 = vlSelf->_cp___05Fs8444;
    vlSelf->_cp___05Fs9308 = vlSelf->_cp___05Fs8444;
    vlSelf->_cp___05Fs8535 = ((IData)(vlSelf->_cp___05Fs8444) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__d_first_counter)));
    vlSelf->_cp___05Fs8548 = ((IData)(vlSelf->_mc___05Fs932) 
                              & (IData)(vlSelf->_cp___05Fs8444));
    vlSelf->_cp___05Fs8583 = ((IData)(vlSelf->_cp___05Fs8444) 
                              & ((IData)(vlSelf->_mc___05Fs939) 
                                 & (IData)(vlSelf->_cp___05Fs10216)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT___GEN_33 
        = ((IData)(vlSelf->_cp___05Fs8444) & (IData)(vlSelf->_mc___05Fs936));
    vlSelf->_mc___05Fs1357 = ((IData)(vlSelf->_cp___05Fs8444) 
                              & (IData)(vlSelf->_mc___05Fs1316));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__count 
        = ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__counter) 
               - (IData)(1U))) & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__beats1));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refill_cnt 
        = ((~ ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__counter) 
               - (IData)(1U))) & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__beats1));
    vlSelf->_cp___05Fs9260 = ((1U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__counter)) 
                              | (0U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__beats1)));
    vlSelf->_cp___05Fs9257 = vlSelf->_mc___05Fs1318;
    vlSelf->_cp___05Fs9273 = vlSelf->_cp___05Fs7955;
    vlSelf->_cp___05Fs8231 = ((IData)(vlSelf->_cp___05Fs7955) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_127 
        = ((IData)(vlSelf->_cp___05Fs7955) & (IData)(vlSelf->_mc___05Fs922));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_152 
        = ((IData)(vlSelf->_cp___05Fs7955) & (IData)(vlSelf->_mc___05Fs926));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_112 
        = ((IData)(vlSelf->_cp___05Fs9272) & (IData)(vlSelf->_cp___05Fs7955));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_32 
        = ((0x400U & ((~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                          >> 0x15U)) << 0xaU)) | (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h4b27d750__0));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h03a9387b__0 
        = ((0x400U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                      >> 0xbU)) | (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h4b27d750__0));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_45 
        = ((0x10U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                     >> 0x17U)) | (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hee6be135__0));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h03f6be7f__0 
        = ((0x10U & ((~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                         >> 0x1bU)) << 4U)) | (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hee6be135__0));
    vlSelf->_mc___05Fs2968 = (IData)(((0U == (0x1e00000U 
                                              & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst)) 
                                      & (0x7fU == (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha7eb522c__0))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h0f988652__0 
        = ((0x100U & ((~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                          >> 0x17U)) << 8U)) | ((0x80U 
                                                 & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                    >> 0x11U)) 
                                                | (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha7eb522c__0)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_he6631051__0 
        = ((0x100U & ((~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                          >> 0x17U)) << 8U)) | ((0x80U 
                                                 & ((~ 
                                                     (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                      >> 0x18U)) 
                                                    << 7U)) 
                                                | ((0x40U 
                                                    & ((~ 
                                                        (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                         >> 0x19U)) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                          >> 0x15U)) 
                                                      | (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hf5d3cdb7__0)))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h1b404242__0 
        = ((0x20U & ((~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                         >> 0x1aU)) << 5U)) | (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hf5d3cdb7__0));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT___GEN_51 
        = ((IData)(vlSelf->_cp___05Fs12807) | (IData)(vlSelf->_cp___05Fs12813));
    vlSelf->_cp___05Fs13387 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                               & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__ridx) 
                                  != (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
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
    __Vtemp_540[0U] = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[0U];
    __Vtemp_540[1U] = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[1U];
    __Vtemp_540[2U] = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[2U];
    __Vtemp_540[3U] = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[3U];
    __Vtemp_540[4U] = 0U;
    __Vtemp_540[5U] = 0U;
    VL_SHIFTL_WWI(171,171,6, __Vtemp_541, __Vtemp_540, (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_CDom_CAlignDist));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN_0[0U] 
        = __Vtemp_541[0U];
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN_0[1U] 
        = __Vtemp_541[1U];
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN_0[2U] 
        = __Vtemp_541[2U];
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN_0[3U] 
        = __Vtemp_541[3U];
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN_0[4U] 
        = __Vtemp_541[4U];
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN_0[5U] 
        = (0x7ffU & __Vtemp_541[5U]);
    __Vtemp_544[0U] = vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_doSubMags;
    __Vtemp_544[1U] = 0U;
    __Vtemp_544[2U] = 0U;
    __Vtemp_544[3U] = 0U;
    VL_ADD_W(4, __Vtemp_545, vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN_1, __Vtemp_544);
    if (vlSelf->_mc___05Fs2103) {
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
            = (~ vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN_1[0U]);
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
            = (~ vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN_1[1U]);
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
            = (~ vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN_1[2U]);
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
            = (0x1fffU & (~ vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___GEN_1[3U]));
    } else {
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
            = __Vtemp_545[0U];
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
            = __Vtemp_545[1U];
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
            = __Vtemp_545[2U];
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
            = (0x1fffU & __Vtemp_545[3U]);
    }
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____VdfgTmp_h1c068462__0 
        = ((~ (IData)((0U != (0x7fffffU & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0))))) 
           & (IData)(vlSelf->_mc___05Fs2376));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____VdfgTmp_h093aa888__0 
        = ((~ (IData)((0U != (0xfffffffffffffULL & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0)))) 
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
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wdata_rawIn_normDist_1 = 0U;
    } else {
        vlSelf->_mc___05Fs2375 = 0U;
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wdata_rawIn_normDist_1 
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
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wdata_rawIn_adjustedExp_1 
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
                       : (0xffU & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                           >> 0x17U)))) 
                     + (0x80U | ((IData)(vlSelf->_mc___05Fs2376)
                                  ? 2U : 1U))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wdata_rawIn_normDist 
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
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wdata_rawIn_adjustedExp 
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
                       : (0x7ffU & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
                                            >> 0x34U)))) 
                     + (0x400U | ((IData)(vlSelf->_mc___05Fs2351)
                                   ? 2U : 1U))));
    vlSelf->_cp___05Fs4253 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_71)));
    vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT___GEN 
        = (1U & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last)) 
                 | ((IData)(vlSelf->_cp___05Fs4277) 
                    & ((1U == (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__counter)) 
                       | (0U == ((IData)(vlSelf->_mc___05Fs509)
                                  ? (0x1ffU & (~ (0xffffffU 
                                                  & (((IData)(0xfffU) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[0U] 
                                                          >> 6U))) 
                                                     >> 3U))))
                                  : 0U))))));
    vlSelf->_cp___05Fs4216 = ((IData)(vlSelf->_cp___05Fs4277) 
                              & (IData)(vlSelf->_cp___05Fs4126));
    vlSelf->_cp___05Fs4515 = ((~ (IData)(vlSelf->_cp___05Fs4407)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___GEN_63));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h8582494a__0 
        = ((ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h595d38b9__0 
            << 1U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_3 
        = (1U | ((ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h595d38b9__0 
                  << 2U) | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2) 
                            << 1U)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_flush_valid 
        = ((~ (IData)(vlSelf->_cp___05Fs9279)) & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_flush_valid_pre_tag_ecc));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_117 
        = ((IData)(vlSelf->_cp___05Fs9279) | (IData)(vlSelf->_cp___05Fs9280));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____Vcellinp__csr__io_gva 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_xcpt) 
           & (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__tval_any_addr) 
               & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_v)) 
              | ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_xcpt)) 
                 & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_hls_or_dv))));
    vlSelf->_mc___05Fs3342 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_xcpt) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__tval_any_addr) 
                                 | (2ULL == vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_cause)));
    vlSelf->_mc___05Fs3344 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_xcpt) 
                              & ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_xcpt)) 
                                 & (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___io_cpu_s2_xcpt_gf_ld_output) 
                                     | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___io_cpu_s2_xcpt_gf_st_output)) 
                                    & (0U == (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___io_cpu_s2_xcpt_pf_ld_output) 
                                               << 1U) 
                                              | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___io_cpu_s2_xcpt_pf_st_output))))));
    vlSelf->_cp___05Fs9229 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_valid_masked) 
                              & (0U != (0x1fU & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lrscCount) 
                                                 >> 2U))));
    vlSelf->_mc___05Fs1351 = ((IData)(vlSelf->_cp___05Fs9279) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_valid_masked) 
                                 | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_flush_valid_pre_tag_ecc) 
                                    | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_probe))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_62 
        = ((~ (IData)(vlSelf->_cp___05Fs9279)) & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_valid_masked));
    vlSelf->_cp___05Fs11399 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_19)));
    vlSelf->_cp___05Fs11674 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___GEN_13)));
    vlSelf->_cp___05Fs11952 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_21)));
    vlSelf->_cp___05Fs12225 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_17)));
    vlSelf->_cp___05Fs12503 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_21)));
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
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___GEN_18 
        = ((IData)(vlSelf->_mc___05Fs3497) == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__opcode_1));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___GEN_26 
        = (((IData)(vlSelf->_mc___05Fs3497) == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_opcodes) 
                                                         >> 1U)))))
                                                 ? 
                                                (7U 
                                                 & (0x911240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_opcodes) 
                                                            >> 1U))))))
                                                 : 0U)) 
           | ((IData)(vlSelf->_mc___05Fs3497) == ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_opcodes) 
                                                           >> 1U)))))
                                                   ? 
                                                  (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_opcodes) 
                                                              >> 1U))))))
                                                   : 0U)));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___GEN_25 
        = (((IData)(vlSelf->_mc___05Fs3497) == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_bits_opcode)) 
           | ((IData)(vlSelf->_mc___05Fs3497) == (IData)(vlSelf->__VdfgTmp_h1cdc2194__0)));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_42 
        = (((7U & (IData)((vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                           >> 0x28U))) == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_bits_opcode)) 
           | ((7U & (IData)((vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                             >> 0x28U))) == (IData)(vlSelf->__VdfgTmp_h1cdc2194__0)));
    vlSelf->_mc___05Fs3575 = (1U & (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_bits_opcode));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___GEN_15 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__address) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_anon_out_1_a_bits_address));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_21 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__address) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_address));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_23 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__address) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_address));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_19 
        = (0U == ((((vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__address[0U] 
                     ^ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_address)) 
                    | vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__address[1U]) 
                   | vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__address[2U]) 
                  | vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__address[3U]));
    vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_23 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__address) 
           == (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_address));
    vlSelf->_mc___05Fs3537 = (0U == ((0x7ffffffeU & 
                                      (((IData)(vlSelf->__VdfgTmp_hbfc32eed__0) 
                                        << 1U) & ((IData)(vlSelf->debug_clockeddmi_dmi_req_bits_addr) 
                                                  >> 1U))) 
                                     | (IData)(__VdfgTmp_hf45803bf__0)));
    vlSelf->__VdfgTmp_h86efcae0__0 = ((0xeU & (8U ^ 
                                               (((IData)(vlSelf->__VdfgTmp_hbfc32eed__0)
                                                  ? 
                                                 ((IData)(vlSelf->debug_clockeddmi_dmi_req_bits_addr) 
                                                  >> 2U)
                                                  : 4U) 
                                                << 1U))) 
                                      | (IData)(__VdfgTmp_hf45803bf__0));
    vlSelf->_mc___05Fs3498 = ((0U == ((IData)(vlSelf->__VdfgTmp_hbfc32eed__0)
                                       ? (7U & ((IData)(vlSelf->debug_clockeddmi_dmi_req_bits_addr) 
                                                >> 4U))
                                       : 1U)) | ((0U 
                                                  == 
                                                  (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____VdfgTmp_h53dafab2__0) 
                                                    << 4U) 
                                                   | ((0xeU 
                                                       & ((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT___GEN) 
                                                          >> 1U)) 
                                                      | (1U 
                                                         & (IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT___GEN))))) 
                                                 | ((0U 
                                                     == 
                                                     (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____VdfgTmp_h53dafab2__0) 
                                                       << 4U) 
                                                      | (0xbU 
                                                         ^ (IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____VdfgTmp_h53ca0f32__0)))) 
                                                    | ((0U 
                                                        == 
                                                        (((IData)(vlSelf->ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____VdfgTmp_h53dafab2__0) 
                                                          << 2U) 
                                                         | (3U 
                                                            & (~ 
                                                               ((IData)(vlSelf->__VdfgTmp_hbfc32eed__0)
                                                                 ? 
                                                                ((IData)(vlSelf->debug_clockeddmi_dmi_req_bits_addr) 
                                                                 >> 3U)
                                                                 : 2U))))) 
                                                       | ((0U 
                                                           == 
                                                           (((IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT____VdfgTmp_h2dd21bce__0) 
                                                             << 1U) 
                                                            | (1U 
                                                               & (~ 
                                                                  ((IData)(vlSelf->__VdfgTmp_hbfc32eed__0) 
                                                                   & ((IData)(vlSelf->debug_clockeddmi_dmi_req_bits_addr) 
                                                                      >> 5U)))))) 
                                                          | (IData)(ExampleRocketSystem__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT____VdfgTmp_h2dd21bce__0))))));
    vlSelf->_cp___05Fs3440 = vlSelf->_cp___05Fs3166;
    vlSelf->_mc___05Fs394 = ((IData)(vlSelf->_cp___05Fs3166) 
                             & (IData)(vlSelf->_mc___05Fs395));
    vlSelf->_cp___05Fs3675 = ((~ (IData)(vlSelf->_cp___05Fs3567)) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_70));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_15 
        = (7U & (((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_14) 
                  >> 4U) | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_14)));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_2 
        = ((IData)(vlSelf->_mc___05Fs1523) | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_1));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_5 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_4) 
           | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_4));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_9 
        = ((IData)(vlSelf->_mc___05Fs1530) | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_7));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_11 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_11) 
           | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_10));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_16 
        = ((IData)(vlSelf->_mc___05Fs1537) | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_14));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_18 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_18) 
           | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_17));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_23 
        = ((IData)(vlSelf->_mc___05Fs1544) | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_20));
    vlSelf->_cp___05Fs9621 = (1U & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_9));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_24 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_25) 
           | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_23));
    vlSelf->_mc___05Fs1579 = (1U == (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_10));
    vlSelf->_mc___05Fs1580 = (2U == (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_10));
    vlSelf->_mc___05Fs1581 = (3U == (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_10));
    vlSelf->_mc___05Fs1582 = (4U == (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_10));
    vlSelf->_mc___05Fs1583 = (5U == (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_10));
    vlSelf->_mc___05Fs1584 = (6U == (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_10));
    vlSelf->_mc___05Fs1585 = (7U == (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_10));
    __Vtemp_553[0U] = (IData)((((QData)((IData)(((IData)(vlSelf->_mc___05Fs1481)
                                                  ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pages_1
                                                  : 0U))) 
                                << 0x19U) | (QData)((IData)(
                                                            ((IData)(vlSelf->_mc___05Fs1480)
                                                              ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pages_0
                                                              : 0U)))));
    __Vtemp_553[1U] = ((((IData)(vlSelf->_mc___05Fs1482)
                          ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pages_2
                          : 0U) << 0x12U) | (IData)(
                                                    ((((QData)((IData)(
                                                                       ((IData)(vlSelf->_mc___05Fs1481)
                                                                         ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pages_1
                                                                         : 0U))) 
                                                       << 0x19U) 
                                                      | (QData)((IData)(
                                                                        ((IData)(vlSelf->_mc___05Fs1480)
                                                                          ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pages_0
                                                                          : 0U)))) 
                                                     >> 0x20U)));
    __Vtemp_553[2U] = ((((IData)(vlSelf->_mc___05Fs1483)
                          ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pages_3
                          : 0U) << 0xbU) | (((IData)(vlSelf->_mc___05Fs1482)
                                              ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pages_2
                                              : 0U) 
                                            >> 0xeU));
    __Vtemp_553[3U] = ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pagesMasked_5 
                        << 0x1dU) | ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pagesMasked_4 
                                      << 4U) | (((IData)(vlSelf->_mc___05Fs1483)
                                                  ? vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pages_3
                                                  : 0U) 
                                                >> 0x15U)));
    __Vtemp_553[4U] = ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pagesMasked_4 
                        << 0x16U) | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pagesMasked_5 
                                     >> 3U));
    __Vtemp_553[5U] = ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pagesMasked_5 
                        << 0xfU) | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pagesMasked_4 
                                    >> 0xaU));
    __Vtemp_553[6U] = (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pagesMasked_5 
                       >> 0x11U);
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_12 
        = (((QData)((IData)(((0xc7U >= (0xffU & ((IData)(0x19U) 
                                                 * (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_10))))
                              ? (0x1ffffffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x19U) 
                                                     * (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_10))))
                                                 ? 0U
                                                 : 
                                                (__Vtemp_553[
                                                 (((IData)(0x18U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x19U) 
                                                       * (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_10)))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x19U) 
                                                      * (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_10)))))) 
                                               | (__Vtemp_553[
                                                  (7U 
                                                   & (((IData)(0x19U) 
                                                       * (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_10)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x19U) 
                                                      * (IData)(ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_10))))))
                              : 0U))) << 0xeU) | (QData)((IData)(
                                                                 ((((IData)(vlSelf->_mc___05Fs1523)
                                                                     ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgts_0)
                                                                     : 0U) 
                                                                   | (((IData)(vlSelf->_mc___05Fs1524)
                                                                        ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgts_1)
                                                                        : 0U) 
                                                                      | (((IData)(vlSelf->_mc___05Fs1525)
                                                                           ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgts_2)
                                                                           : 0U) 
                                                                         | (((IData)(vlSelf->_mc___05Fs1526)
                                                                              ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgts_3)
                                                                              : 0U) 
                                                                            | (((IData)(vlSelf->_mc___05Fs1527)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgts_4)
                                                                                 : 0U) 
                                                                               | (((IData)(vlSelf->_mc___05Fs1528)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgts_5)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1529)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgts_6)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1530)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgts_7)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1531)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgts_8)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1532)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgts_9)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1533)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgts_10)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1534)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgts_11)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1535)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgts_12)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1536)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgts_13)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1537)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgts_14)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1538)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgts_15)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1539)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgts_16)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1540)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgts_17)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1541)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgts_18)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1542)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgts_19)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1543)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgts_20)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1544)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgts_21)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1545)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgts_22)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1546)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgts_23)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1547)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgts_24)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1548)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgts_25)
                                                                                 : 0U) 
                                                                                | (((IData)(vlSelf->_mc___05Fs1549)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgts_26)
                                                                                 : 0U) 
                                                                                | ((IData)(vlSelf->_mc___05Fs1550)
                                                                                 ? (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgts_27)
                                                                                 : 0U)))))))))))))))))))))))))))) 
                                                                  << 1U))));
    vlSelf->_cp___05Fs1576 = ((IData)(vlSelf->mmio_axi4_0_b_ready) 
                              & (IData)(vlSelf->mmio_axi4_0_b_valid));
    vlSelf->_cp___05Fs1881 = ((IData)(vlSelf->_cp___05Fs1790) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter)));
    vlSelf->_cp___05Fs1901 = ((IData)(vlSelf->_cp___05Fs1790) 
                              & (IData)(vlSelf->_mc___05Fs223));
    vlSelf->_cp___05Fs5050 = ((IData)(vlSelf->_cp___05Fs4959) 
                              & (0U != (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter)));
    vlSelf->_cp___05Fs5070 = ((IData)(vlSelf->_cp___05Fs4959) 
                              & (IData)(vlSelf->_mc___05Fs600));
    vlSelf->_cp___05Fs1801 = ((IData)(vlSelf->_mc___05Fs218) 
                              & ((0U != (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4index_auto_in_r_bits_resp)) 
                                 | (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_d_denied)));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__nodeOut_w_valid 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__in_w_deq_q__DOT___io_deq_valid_output) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_32));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4yank_auto_out_aw_valid 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__nodeOut_aw_valid) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN_3));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_22 
        = (0xffU & ((IData)(ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_21) 
                    | VL_SHIFTL_III(8,8,32, (IData)(ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_21), 2U)));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_15 
        = (0xffU & ((7U & (- (IData)((IData)(vlSelf->_mc___05Fs310)))) 
                    | (- (IData)((IData)(vlSelf->_mc___05Fs311)))));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_20 
        = (0xffU & ((IData)(ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_19) 
                    | VL_SHIFTL_III(8,8,32, (IData)(ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_19), 2U)));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_17 
        = (0x1fU & ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_16) 
                    | ((0x10U & ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len_1) 
                                 >> 3U)) | (0xfU & 
                                            ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_16) 
                                             >> 2U)))));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_7 
        = (0xffU & ((IData)(ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_6) 
                    | VL_SHIFTL_III(8,8,32, (IData)(ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_6), 2U)));
    vlSelf->_cp___05Fs2231 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__monitor__DOT___GEN_81)));
    vlSelf->_cp___05Fs2209 = vlSelf->_cp___05Fs2181;
    vlSelf->_cp___05Fs2262 = vlSelf->_cp___05Fs2181;
    vlSelf->_cp___05Fs2193 = ((IData)(vlSelf->_mc___05Fs240) 
                              & (IData)(vlSelf->_cp___05Fs2181));
    vlSelf->_cp___05Fs2212 = ((IData)(vlSelf->_cp___05Fs2181) 
                              & (IData)(vlSelf->_mc___05Fs244));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor__DOT__a_set_wo_ready 
        = ((IData)(vlSelf->_cp___05Fs1016) ? (0xffffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (0xfU 
                                                  & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xaU))))
            : 0U);
    vlSelf->_cp___05Fs1887 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_47)));
    vlSelf->_cp___05Fs1810 = vlSelf->_cp___05Fs1797;
    vlSelf->_cp___05Fs1825 = vlSelf->_cp___05Fs1797;
    vlSelf->_cp___05Fs1889 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_48)));
    vlSelf->_cp___05Fs1933 = (1U & (~ vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_79));
    vlSelf->_cp___05Fs1914 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_70)));
    vlSelf->_cp___05Fs1938 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_80)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_68 
        = (((IData)(vlSelf->_mc___05Fs218) == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_51[0U] 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x911240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_51[0U] 
                                                              >> 1U))))))
                                                : 0U)) 
           | ((IData)(vlSelf->_mc___05Fs218) == ((0x17U 
                                                  >= 
                                                  (0x1fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (7U 
                                                       & (ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_51[0U] 
                                                          >> 1U)))))
                                                  ? 
                                                 (7U 
                                                  & (0x951240U 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         * 
                                                         (7U 
                                                          & (ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_51[0U] 
                                                             >> 1U))))))
                                                  : 0U)));
    vlSelf->_cp___05Fs1795 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__source_ok_1)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsDIO_filtered_2_0_valid 
        = ((IData)(vlSelf->_mc___05Fs74) & (IData)(vlSelf->_cp___05Fs1790));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__portsDIO_filtered_2_1_valid 
        = ((IData)(vlSelf->_cp___05Fs1790) & (IData)(vlSelf->_mc___05Fs75));
    vlSelf->_cp___05Fs3686 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_80)));
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
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h788cf908__0));
    vlSelf->_cp___05Fs3667 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_61)));
    vlSelf->_cp___05Fs3605 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__monitor__DOT___GEN_42)));
    if (vlSelf->_cp___05Fs4012) {
        vlSelf->ExampleRocketSystem__DOT___cbus_auto_bus_xing_in_d_bits_data 
            = vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_data;
        vlSelf->_cp___05Fs3852 = ((IData)(vlSelf->_cp___05Fs3577) 
                                  | (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_corrupt));
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__nodeIn_d_bits_opcode = 1U;
    } else {
        vlSelf->ExampleRocketSystem__DOT___cbus_auto_bus_xing_in_d_bits_data 
            = (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                << 0x30U) | (((QData)((IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                              << 0x10U) | ((QData)((IData)(
                                                           vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                           >> 0x10U)));
        vlSelf->_cp___05Fs3852 = vlSelf->_cp___05Fs3575;
        vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__nodeIn_d_bits_opcode 
            = (7U & vlSelf->ExampleRocketSystem__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]);
    }
    vlSelf->_mc___05Fs350 = ((IData)(vlSelf->_cp___05Fs4012) 
                             | (IData)(vlSelf->_mc___05Fs418));
    vlSelf->_cp___05Fs3854 = (((IData)(vlSelf->_cp___05Fs4012) 
                               & (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__cam_d_0_denied)) 
                              | (IData)(vlSelf->_cp___05Fs3577));
    vlSelf->_cp___05Fs3841 = ((~ (IData)(vlSelf->ExampleRocketSystem__DOT__cbus__DOT__atomics__DOT__d_drop)) 
                              & (IData)(vlSelf->_cp___05Fs3564));
    if (vlSelf->_mc___05Fs2286) {
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h1ff36051__0 
            = (1U & (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h3152f987__0 
                             >> 1U)));
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h0863dd5d__0 
            = (0x1fffffffffffffULL & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h3152f987__0 
                                      >> 1U));
    } else {
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h1ff36051__0 = 0U;
        vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h0863dd5d__0 = 0ULL;
    }
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_3 
        = (((IData)(vlSelf->_mc___05Fs2286) & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h3152f987__0)) 
           | (IData)(vlSelf->_mc___05Fs2290));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_5 
        = (0xffU & ((IData)(ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_4) 
                    | VL_SHIFTL_III(8,8,32, (IData)(ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_4), 2U)));
    vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_2 
        = (0x1fU & ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_1) 
                    | ((0x10U & ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__len) 
                                 >> 3U)) | (0xfU & 
                                            ((IData)(vlSelf->ExampleRocketSystem__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___GEN_1) 
                                             >> 2U)))));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__a_set_wo_ready 
        = ((IData)(vlSelf->_cp___05Fs1498) ? (7U & 
                                              ((IData)(1U) 
                                               << (3U 
                                                   & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0xaU))))
            : 0U);
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__a_set_wo_ready 
        = ((IData)(vlSelf->_cp___05Fs703) ? (7U & ((IData)(1U) 
                                                   << 
                                                   (3U 
                                                    & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0xaU))))
            : 0U);
    vlSelf->_mc___05Fs1927 = vlSelf->_mc___05Fs1853;
    vlSelf->__VdfgTmp_h096ab5c3__0 = (((2U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__in_pipe_b_rm)) 
                                       & (IData)(vlSelf->_mc___05Fs1853)) 
                                      | ((~ (IData)(vlSelf->_mc___05Fs1853)) 
                                         & (3U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__in_pipe_b_rm))));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_absIn 
        = ((IData)(vlSelf->_mc___05Fs1853) ? (- vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__intValue_res)
            : vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__intValue_res);
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
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask 
        = ((((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_5) 
             << 7U) | (0x7ffff80U & (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_5) 
                                      << 7U) & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 5U)))) 
           | ((((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_5) 
                | ((~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                       >> 0xcU)) & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_5))) 
               << 6U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_4) 
                           << 5U) | (0x1ffffe0U & (
                                                   ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_4) 
                                                    << 5U) 
                                                   & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 7U)))) 
                         | ((((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_4) 
                              | ((~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 0xcU)) & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_4))) 
                             << 4U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_3) 
                                         << 3U) | (0x7ffff8U 
                                                   & (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_3) 
                                                       << 3U) 
                                                      & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 9U)))) 
                                       | ((((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_3) 
                                            | ((~ (
                                                   vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xcU)) 
                                               & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_3))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_2) 
                                             << 1U) 
                                            | (0x1ffffeU 
                                               & (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_2) 
                                                   << 1U) 
                                                  & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xbU)))) 
                                           | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_acc_2) 
                                              | ((~ 
                                                  (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xcU)) 
                                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__mask_eq_2))))))))));
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
    vlSelf->_cp___05Fs1110 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_9)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_36 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_9) 
           & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_24));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_12 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_9) 
           & (IData)(((0x800U == (0xf00U & vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                      & (7U > (0xfU & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 6U))))));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_32 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_9) 
           & ((4U > (0xfU & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 6U))) & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_19) 
                                         | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_16) 
                                            | (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_17)))));
    vlSelf->_mc___05Fs57 = (0U == (((IData)(vlSelf->_mc___05Fs179) 
                                    << 1U) | (IData)(vlSelf->_mc___05Fs180)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_28 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_9) 
           & ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_24) 
              | (((7U > (0xfU & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                 >> 6U))) & ((0U == 
                                              (0xfffffU 
                                               & ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 8U) 
                                                  | (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x18U)))) 
                                             | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_16) 
                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_17) 
                                                   | (8U 
                                                      == 
                                                      (0xfU 
                                                       & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                          >> 8U))))))) 
                 | ((9U > (0xfU & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                   >> 6U))) & (IData)(ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_18)))));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT____VdfgTmp_hae8d912e__0 
        = ((0U == ((0xfffeU & ((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                << 4U) | (0xeU & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x1cU)))) 
                   | (1U & (~ (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 0x1cU))))) | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_16) 
                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_17) 
                                                   | ((IData)(ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_18) 
                                                      | (8U 
                                                         == 
                                                         (0xfU 
                                                          & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                             >> 8U)))))));
    vlSelf->_cp___05Fs5907 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_40)));
    vlSelf->_cp___05Fs6278 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_40)));
    vlSelf->_cp___05Fs7787 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_40)));
    vlSelf->_cp___05Fs5845 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_23)));
    vlSelf->_cp___05Fs5901 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_38)));
    vlSelf->_cp___05Fs6272 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_38)));
    vlSelf->_cp___05Fs7781 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_38)));
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
    vlSelf->_cp___05Fs7797 = vlSelf->_cp___05Fs7795;
    vlSelf->_cp___05Fs5903 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_39)));
    vlSelf->_cp___05Fs5947 = (1U & (~ vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_70[0U]));
    vlSelf->_cp___05Fs6274 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_39)));
    vlSelf->_cp___05Fs6318 = (1U & (~ vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_70[0U]));
    vlSelf->_cp___05Fs7783 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_39)));
    vlSelf->_cp___05Fs7827 = (1U & (~ vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_70[0U]));
    vlSelf->_cp___05Fs5928 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_61)));
    vlSelf->_cp___05Fs5952 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__picker__DOT__monitor__DOT___GEN_71)));
    vlSelf->_cp___05Fs6299 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_61)));
    vlSelf->_cp___05Fs6323 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___GEN_71)));
    vlSelf->_cp___05Fs7808 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_61)));
    vlSelf->_cp___05Fs7832 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT___GEN_71)));
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
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__d_normal_bits_opcode 
        = ((IData)(vlSelf->_cp___05Fs7552) ? ((IData)(vlSelf->_mc___05Fs682)
                                               ? 5U
                                               : 6U)
            : (IData)(vlSelf->_mc___05Fs682));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0 
        = ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__get_a_mask_acc_5) 
             | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__get_a_mask_eq_5) 
                & (IData)(vlSelf->_mc___05Fs1339))) 
            << 7U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__get_a_mask_acc_5) 
                        | ((~ (IData)(vlSelf->_mc___05Fs1339)) 
                           & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__get_a_mask_eq_5))) 
                       << 6U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__get_a_mask_acc_4) 
                                   | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__get_a_mask_eq_4) 
                                      & (IData)(vlSelf->_mc___05Fs1339))) 
                                  << 5U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__get_a_mask_acc_4) 
                                              | ((~ (IData)(vlSelf->_mc___05Fs1339)) 
                                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__get_a_mask_eq_4))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__get_a_mask_acc_3) 
                                                 | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__get_a_mask_eq_3) 
                                                    & (IData)(vlSelf->_mc___05Fs1339))) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__get_a_mask_acc_3) 
                                                    | ((~ (IData)(vlSelf->_mc___05Fs1339)) 
                                                       & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__get_a_mask_eq_3))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__get_a_mask_acc_2) 
                                                       | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__get_a_mask_eq_2) 
                                                          & (IData)(vlSelf->_mc___05Fs1339))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__get_a_mask_acc_2) 
                                                        | ((~ (IData)(vlSelf->_mc___05Fs1339)) 
                                                           & (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__get_a_mask_eq_2))))))))));
    vlSelf->_mc___05Fs1337 = ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_signed) 
                              & ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__io_cpu_resp_bits_data_zeroed_1) 
                                 >> 0xfU));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h07644e05__0 
        = (0xffU & ((IData)(vlSelf->_mc___05Fs1339)
                     ? ((IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__io_cpu_resp_bits_data_zeroed_1) 
                        >> 8U) : (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__io_cpu_resp_bits_data_zeroed_1)));
    vlSelf->_mc___05Fs1345 = vlSelf->_mc___05Fs1333;
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h3001d884__0 
        = ((IData)(vlSelf->_mc___05Fs1334) ? (- (IData)((IData)(vlSelf->_mc___05Fs1333)))
            : (IData)((vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_data 
                       >> 0x20U)));
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
    vlSelf->_cp___05Fs7450 = ((IData)(vlSelf->_cp___05Fs1351) 
                              & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__monitor__DOT____VdfgTmp_h4c79c061__0));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT____VdfgTmp_h96b65360__0 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_6) 
           & ((0U == (7U & (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                            >> 3U))) | (4U == (7U & 
                                               (vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                                >> 3U)))));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_18 
        = ((IData)(vlSelf->_mc___05Fs847) | ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_io_out_a_valid) 
                                             | ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_1_io_out_a_valid) 
                                                | ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_2_io_out_a_valid) 
                                                   | (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_3_io_out_a_valid)))));
    vlSelf->_mc___05Fs859 = ((IData)(vlSelf->_mc___05Fs853)
                              ? (IData)(vlSelf->_mc___05Fs847)
                              : (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1_0));
    vlSelf->_mc___05Fs848 = ((~ (IData)(vlSelf->_mc___05Fs847)) 
                             & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_io_out_a_valid));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_14 
        = ((IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___TLBroadcastTracker_io_out_a_valid) 
           | (IData)(vlSelf->_mc___05Fs847));
    vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_12 
        = ((IData)(vlSelf->_mc___05Fs834) | (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__d_normal_valid));
    vlSelf->_mc___05Fs840 = ((IData)(vlSelf->_mc___05Fs837)
                              ? (IData)(vlSelf->_mc___05Fs834)
                              : (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_0));
    vlSelf->_mc___05Fs835 = ((~ (IData)(vlSelf->_mc___05Fs834)) 
                             & (IData)(vlSelf->ExampleRocketSystem__DOT__coh_wrapper__DOT__broadcast_1__DOT__d_normal_valid));
    vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_read 
        = ((0U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)) 
           | ((0x10U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)) 
              | ((6U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)) 
                 | ((IData)(vlSelf->_mc___05Fs1340) 
                    | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_45)))));
    vlSelf->_mc___05Fs1315 = (((1U == (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)) 
                               | ((IData)(vlSelf->_mc___05Fs1311) 
                                  | (IData)(vlSelf->_mc___05Fs1340))) 
                              | (IData)(vlSelf->ExampleRocketSystem__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_45));
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
    vlSelf->_cp___05Fs81 = (1U & (~ (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_25)));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_29 
        = ((0xdU > (0xfU & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U))) & (IData)(ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_13));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_5) 
             << 7U) | (0x1ffff80U & (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_5) 
                                      << 7U) & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 7U)))) 
           | ((((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_5) 
                | ((~ (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                       >> 0xeU)) & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_5))) 
               << 6U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_4) 
                           << 5U) | (0x7fffe0U & (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_4) 
                                                   << 5U) 
                                                  & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 9U)))) 
                         | ((((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_4) 
                              | ((~ (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 0xeU)) & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_4))) 
                             << 4U) | ((((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_3) 
                                         << 3U) | (0x1ffff8U 
                                                   & (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_3) 
                                                       << 3U) 
                                                      & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0xbU)))) 
                                       | ((((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_3) 
                                            | ((~ (
                                                   vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xeU)) 
                                               & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_3))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_2) 
                                             << 1U) 
                                            | (0x7fffeU 
                                               & (((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_2) 
                                                   << 1U) 
                                                  & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xdU)))) 
                                           | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_acc_2) 
                                              | ((~ 
                                                  (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xeU)) 
                                                 & (IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__mask_eq_2))))))))));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_18 
        = ((IData)(ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_13) 
           | ((7U > (0xfU & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 6U))) & ((0U == (0xfffffU 
                                                 & ((vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                     << 6U) 
                                                    | (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x1aU)))) 
                                         | ((0U == 
                                             ((0xfffeU 
                                               & ((vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 2U) 
                                                  | (2U 
                                                     & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x1eU)))) 
                                              | (1U 
                                                 & (~ 
                                                    (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x1eU))))) 
                                            | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_15) 
                                               | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_16) 
                                                  | ((IData)(ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_17) 
                                                     | (8U 
                                                        == 
                                                        (0xfU 
                                                         & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                            >> 0xaU))))))))));
    vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_21 
        = ((0xdU > (0xfU & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U))) & ((IData)(ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_13) 
                                        | (((7U > (0xfU 
                                                   & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U))) 
                                            & ((0U 
                                                == 
                                                (0xfffffU 
                                                 & ((vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                     << 6U) 
                                                    | (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x1aU)))) 
                                               | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_15) 
                                                  | ((IData)(vlSelf->ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_16) 
                                                     | (8U 
                                                        == 
                                                        (0xfU 
                                                         & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                            >> 0xaU))))))) 
                                           | ((9U > 
                                               (0xfU 
                                                & (vlSelf->ExampleRocketSystem__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U))) 
                                              & (IData)(ExampleRocketSystem__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_17)))));
}
