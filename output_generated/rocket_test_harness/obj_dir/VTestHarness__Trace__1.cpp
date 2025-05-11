// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestHarness__Syms.h"


extern const VlWide<1024>/*32767:0*/ VTestHarness__ConstPool__CONST_h30fff677_0;

void VTestHarness___024root__trace_chg_0_sub_1(VTestHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root__trace_chg_0_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 8957);
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<8>/*255:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<4>/*127:0*/ __Vtemp_21;
    VlWide<8>/*255:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_25;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgSData(oldp+0,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecprogbuf),16);
        bufp->chgCData(oldp+1,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_reserved0),4);
        bufp->chgSData(oldp+2,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTAUTOReg_autoexecdata),12);
        bufp->chgCData(oldp+3,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__COMMANDReg_cmdtype),8);
        bufp->chgIData(oldp+4,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__COMMANDReg_control),24);
        bufp->chgCData(oldp+5,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_0),8);
        bufp->chgCData(oldp+6,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_1),8);
        bufp->chgCData(oldp+7,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_2),8);
        bufp->chgCData(oldp+8,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_3),8);
        bufp->chgCData(oldp+9,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_4),8);
        bufp->chgCData(oldp+10,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_5),8);
        bufp->chgCData(oldp+11,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_6),8);
        bufp->chgCData(oldp+12,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_7),8);
        bufp->chgCData(oldp+13,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_0),8);
        bufp->chgCData(oldp+14,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_1),8);
        bufp->chgCData(oldp+15,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_2),8);
        bufp->chgCData(oldp+16,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_3),8);
        bufp->chgCData(oldp+17,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_4),8);
        bufp->chgCData(oldp+18,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_5),8);
        bufp->chgCData(oldp+19,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_6),8);
        bufp->chgCData(oldp+20,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_7),8);
        bufp->chgCData(oldp+21,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_8),8);
        bufp->chgCData(oldp+22,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_9),8);
        bufp->chgCData(oldp+23,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_10),8);
        bufp->chgCData(oldp+24,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_11),8);
        bufp->chgCData(oldp+25,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_12),8);
        bufp->chgCData(oldp+26,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_13),8);
        bufp->chgCData(oldp+27,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_14),8);
        bufp->chgCData(oldp+28,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_15),8);
        bufp->chgCData(oldp+29,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_16),8);
        bufp->chgCData(oldp+30,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_17),8);
        bufp->chgCData(oldp+31,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_18),8);
        bufp->chgCData(oldp+32,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_19),8);
        bufp->chgCData(oldp+33,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_20),8);
        bufp->chgCData(oldp+34,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_21),8);
        bufp->chgCData(oldp+35,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_22),8);
        bufp->chgCData(oldp+36,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_23),8);
        bufp->chgCData(oldp+37,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_24),8);
        bufp->chgCData(oldp+38,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_25),8);
        bufp->chgCData(oldp+39,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_26),8);
        bufp->chgCData(oldp+40,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_27),8);
        bufp->chgCData(oldp+41,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_28),8);
        bufp->chgCData(oldp+42,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_29),8);
        bufp->chgCData(oldp+43,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_30),8);
        bufp->chgCData(oldp+44,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_31),8);
        bufp->chgCData(oldp+45,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_32),8);
        bufp->chgCData(oldp+46,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_33),8);
        bufp->chgCData(oldp+47,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_34),8);
        bufp->chgCData(oldp+48,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_35),8);
        bufp->chgCData(oldp+49,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_36),8);
        bufp->chgCData(oldp+50,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_37),8);
        bufp->chgCData(oldp+51,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_38),8);
        bufp->chgCData(oldp+52,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_39),8);
        bufp->chgCData(oldp+53,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_40),8);
        bufp->chgCData(oldp+54,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_41),8);
        bufp->chgCData(oldp+55,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_42),8);
        bufp->chgCData(oldp+56,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_43),8);
        bufp->chgCData(oldp+57,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_44),8);
        bufp->chgCData(oldp+58,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_45),8);
        bufp->chgCData(oldp+59,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_46),8);
        bufp->chgCData(oldp+60,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_47),8);
        bufp->chgCData(oldp+61,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_48),8);
        bufp->chgCData(oldp+62,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_49),8);
        bufp->chgCData(oldp+63,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_50),8);
        bufp->chgCData(oldp+64,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_51),8);
        bufp->chgCData(oldp+65,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_52),8);
        bufp->chgCData(oldp+66,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_53),8);
        bufp->chgCData(oldp+67,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_54),8);
        bufp->chgCData(oldp+68,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_55),8);
        bufp->chgCData(oldp+69,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_56),8);
        bufp->chgCData(oldp+70,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_57),8);
        bufp->chgCData(oldp+71,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_58),8);
        bufp->chgCData(oldp+72,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_59),8);
        bufp->chgCData(oldp+73,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_60),8);
        bufp->chgCData(oldp+74,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_61),8);
        bufp->chgCData(oldp+75,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_62),8);
        bufp->chgCData(oldp+76,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_63),8);
        bufp->chgCData(oldp+77,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex),5);
        bufp->chgBit(oldp+78,((4U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex))));
        bufp->chgBit(oldp+79,((5U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex))));
        bufp->chgBit(oldp+80,((0x10U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex))));
        bufp->chgBit(oldp+81,((0x11U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex))));
        bufp->chgBit(oldp+82,((0x12U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex))));
        bufp->chgBit(oldp+83,((0x13U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex))));
        bufp->chgBit(oldp+84,((0x14U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex))));
        bufp->chgBit(oldp+85,((0x15U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex))));
        bufp->chgBit(oldp+86,((0x16U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex))));
        bufp->chgBit(oldp+87,((0x17U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex))));
        bufp->chgBit(oldp+88,((0x18U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex))));
        bufp->chgBit(oldp+89,((0x19U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex))));
        bufp->chgBit(oldp+90,((0x1aU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex))));
        bufp->chgBit(oldp+91,((0x1bU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex))));
        bufp->chgBit(oldp+92,((0x1cU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex))));
        bufp->chgBit(oldp+93,((0x1dU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex))));
        bufp->chgBit(oldp+94,((0x1eU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex))));
        bufp->chgBit(oldp+95,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__goReg));
        bufp->chgIData(oldp+96,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__abstractGeneratedMem_0),32);
        bufp->chgIData(oldp+97,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__abstractGeneratedMem_1),32);
        bufp->chgBit(oldp+98,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__mask_acc));
        bufp->chgBit(oldp+99,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__mask_acc_1));
        bufp->chgCData(oldp+100,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__mask),4);
        bufp->chgBit(oldp+101,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__a_first_counter));
        bufp->chgCData(oldp+102,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+103,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+104,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__size),2);
        bufp->chgBit(oldp+105,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__source));
        bufp->chgSData(oldp+106,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__address),9);
        bufp->chgBit(oldp+107,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__d_first_counter));
        bufp->chgCData(oldp+108,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+109,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+110,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__size_1),2);
        bufp->chgBit(oldp+111,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__source_1));
        bufp->chgBit(oldp+112,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__sink));
        bufp->chgBit(oldp+113,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__denied));
        bufp->chgCData(oldp+114,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__inflight),2);
        bufp->chgCData(oldp+115,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__inflight_opcodes),4);
        bufp->chgCData(oldp+116,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__inflight_sizes),4);
        bufp->chgBit(oldp+117,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__a_first_counter_1));
        bufp->chgBit(oldp+118,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__d_first_counter_1));
        bufp->chgIData(oldp+119,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__watchdog),32);
        bufp->chgCData(oldp+120,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__inflight_1),2);
        bufp->chgCData(oldp+121,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__inflight_opcodes_1),4);
        bufp->chgCData(oldp+122,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__inflight_sizes_1),4);
        bufp->chgBit(oldp+123,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__d_first_counter_2));
        bufp->chgIData(oldp+124,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__watchdog_1),32);
        bufp->chgCData(oldp+125,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__unnamedblk2__DOT__d_sizes_clr),4);
        bufp->chgCData(oldp+126,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__unnamedblk2__DOT__d_sizes_clr_1),4);
        bufp->chgBit(oldp+127,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter));
        bufp->chgCData(oldp+128,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__opcode),3);
        bufp->chgCData(oldp+129,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__param),3);
        bufp->chgCData(oldp+130,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__size),2);
        bufp->chgSData(oldp+131,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__source),9);
        bufp->chgSData(oldp+132,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__address),12);
        bufp->chgBit(oldp+133,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter));
        bufp->chgCData(oldp+134,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__opcode_1),3);
        bufp->chgCData(oldp+135,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__param_1),2);
        bufp->chgCData(oldp+136,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__size_1),2);
        bufp->chgSData(oldp+137,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__source_1),9);
        bufp->chgBit(oldp+138,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__sink));
        bufp->chgBit(oldp+139,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__denied));
        bufp->chgWData(oldp+140,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight),304);
        bufp->chgWData(oldp+150,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes),1216);
        bufp->chgWData(oldp+188,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes),1216);
        bufp->chgBit(oldp+226,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1));
        bufp->chgBit(oldp+227,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_1));
        bufp->chgIData(oldp+228,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__watchdog),32);
        bufp->chgWData(oldp+229,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_1),304);
        bufp->chgWData(oldp+239,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_opcodes_1),1216);
        bufp->chgWData(oldp+277,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1),1216);
        bufp->chgBit(oldp+315,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_counter_2));
        bufp->chgIData(oldp+316,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__watchdog_1),32);
        bufp->chgWData(oldp+317,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__unnamedblk2__DOT__d_sizes_clr),1216);
        bufp->chgWData(oldp+355,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__unnamedblk2__DOT__d_sizes_clr_1),1216);
        bufp->chgSData(oldp+393,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),15);
        bufp->chgCData(oldp+394,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__mem_0_opcode),3);
        bufp->chgCData(oldp+395,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__mem_0_param),2);
        bufp->chgCData(oldp+396,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__mem_0_size),2);
        bufp->chgBit(oldp+397,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__mem_0_source));
        bufp->chgBit(oldp+398,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__mem_0_sink));
        bufp->chgBit(oldp+399,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__mem_0_denied));
        bufp->chgIData(oldp+400,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__mem_0_data),32);
        bufp->chgBit(oldp+401,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__mem_0_corrupt));
        bufp->chgQData(oldp+402,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),55);
        bufp->chgQData(oldp+404,((((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__mem_0_opcode)) 
                                   << 0x28U) | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__mem_0_param)) 
                                                 << 0x26U) 
                                                | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__mem_0_size)) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__mem_0_source)) 
                                                       << 0x23U) 
                                                      | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__mem_0_sink)) 
                                                          << 0x22U) 
                                                         | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__mem_0_denied)) 
                                                             << 0x21U) 
                                                            | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__mem_0_data)) 
                                                                << 1U) 
                                                               | (QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__mem_0_corrupt)))))))))),43);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+406,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hrDebugIntReg_0));
        bufp->chgBit(oldp+407,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+408,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+409,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartIsInResetSync_0_debug_hartReset_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+410,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_ridx_bin));
        bufp->chgBit(oldp+411,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx));
        bufp->chgBit(oldp+412,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__valid_reg));
        bufp->chgBit(oldp+413,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_gray));
        bufp->chgBit(oldp+414,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+415,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+416,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+417,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+418,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+419,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+420,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+421,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+422,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+423,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx_widx_bin));
        bufp->chgBit(oldp+424,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__ready_reg));
        bufp->chgBit(oldp+425,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx_gray));
        bufp->chgBit(oldp+426,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+427,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+428,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+429,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+430,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+431,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+432,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__unnamedblk1__DOT__widx));
        bufp->chgBit(oldp+433,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__ridx_ridx_bin));
        bufp->chgBit(oldp+434,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__ridx));
        bufp->chgBit(oldp+435,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__valid_reg));
        bufp->chgBit(oldp+436,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__ridx_gray));
        bufp->chgBit(oldp+437,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+438,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+439,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+440,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+441,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+442,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+443,(vlSelf->TestHarness__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+444,(vlSelf->TestHarness__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+445,(vlSelf->TestHarness__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+446,(vlSelf->TestHarness__DOT__dut_reset_reg__DOT__reg_0));
        bufp->chgBit(oldp+447,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___io_enq_ready_output));
        bufp->chgBit(oldp+448,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_ridx_bin));
        bufp->chgBit(oldp+449,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__valid_reg));
        bufp->chgBit(oldp+450,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_gray));
        bufp->chgBit(oldp+451,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+452,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+453,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+454,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+455,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+456,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+457,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx_widx_bin));
        bufp->chgBit(oldp+458,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__ready_reg));
        bufp->chgBit(oldp+459,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx_gray));
        bufp->chgBit(oldp+460,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+461,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+462,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+463,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+464,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+465,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+466,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__unnamedblk1__DOT__widx));
        bufp->chgBit(oldp+467,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT___io_enq_ready_output));
        bufp->chgBit(oldp+468,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_resumereq));
        bufp->chgBit(oldp+469,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartreset));
        bufp->chgBit(oldp+470,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ackhavereset));
        bufp->chgBit(oldp+471,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_reserved0));
        bufp->chgBit(oldp+472,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hasel));
        bufp->chgSData(oldp+473,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartsello),10);
        bufp->chgSData(oldp+474,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_hartselhi),10);
        bufp->chgCData(oldp+475,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_reserved1),2);
        bufp->chgBit(oldp+476,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_setresethaltreq));
        bufp->chgBit(oldp+477,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_clrresethaltreq));
        bufp->chgBit(oldp+478,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive));
        bufp->chgBit(oldp+479,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__hrmaskReg_0));
        bufp->chgBit(oldp+480,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0));
        bufp->chgBit(oldp+481,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlValidReg));
        bufp->chgBit(oldp+482,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlResumeReqReg));
        bufp->chgBit(oldp+483,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlAckHaveResetReg));
        bufp->chgBit(oldp+484,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+485,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+486,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+487,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin));
        bufp->chgBit(oldp+488,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ready_reg));
        bufp->chgBit(oldp+489,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_gray));
        bufp->chgBit(oldp+490,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+491,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+492,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+493,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+494,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+495,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+496,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__unnamedblk1__DOT__widx));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+497,((1U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__intsource__DOT__reg_0__DOT__reg_0))));
        bufp->chgBit(oldp+498,((1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__intsource__DOT__reg_0__DOT__reg_0) 
                                      >> 1U))));
        bufp->chgCData(oldp+499,(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__intsource__DOT__reg_0__DOT__reg_0),2);
        bufp->chgBit(oldp+500,((1U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__ibus_intsource__DOT__reg_0__DOT__reg_0))));
        bufp->chgBit(oldp+501,((1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__ibus_intsource__DOT__reg_0__DOT__reg_0) 
                                      >> 1U))));
        bufp->chgCData(oldp+502,(vlSelf->TestHarness__DOT__ldut__DOT__ibus_intsource__DOT__reg_0__DOT__reg_0),2);
        bufp->chgBit(oldp+503,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__intsource__DOT__reg_0__DOT__reg_0));
        bufp->chgBit(oldp+504,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__intsource_1__DOT__reg_0__DOT__reg_0));
        bufp->chgBit(oldp+505,(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__intsource__DOT__reg_0__DOT__reg_0));
        bufp->chgBit(oldp+506,(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__intsource_1__DOT__reg_0__DOT__reg_0));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+507,(vlSelf->TestHarness__DOT__clock_en));
        bufp->chgBit(oldp+508,(vlSelf->TestHarness__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+509,(vlSelf->TestHarness__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+510,(vlSelf->TestHarness__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+511,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+512,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+513,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+514,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+515,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+516,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+517,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+518,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+519,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+520,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+521,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+522,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+523,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+524,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+525,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+526,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+527,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+528,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+529,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+530,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+531,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+532,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+533,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+534,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+535,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+536,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+537,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgBit(oldp+538,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+539,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+540,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+541,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+542,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+543,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+544,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+545,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+546,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+547,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+548,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+549,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+550,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+551,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+552,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+553,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+554,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+555,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+556,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+557,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+558,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+559,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+560,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+561,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+562,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+563,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+564,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgCData(oldp+565,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode),3);
        bufp->chgCData(oldp+566,(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_param),3);
        bufp->chgCData(oldp+567,(vlSelf->TestHarness__DOT__ldut__DOT___bootrom_domain_auto_bootrom_in_d_bits_size),2);
        bufp->chgSData(oldp+568,(vlSelf->TestHarness__DOT__ldut__DOT___bootrom_domain_auto_bootrom_in_d_bits_source),9);
        bufp->chgIData(oldp+569,(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_address),17);
        bufp->chgCData(oldp+570,(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_mask),8);
        bufp->chgBit(oldp+571,((2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___bootrom_domain_auto_bootrom_in_d_bits_size))));
        bufp->chgBit(oldp+572,(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc));
        bufp->chgBit(oldp+573,(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_1));
        bufp->chgBit(oldp+574,((1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___bootrom_domain_auto_bootrom_in_d_bits_size))));
        bufp->chgBit(oldp+575,(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_2));
        bufp->chgBit(oldp+576,(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_2));
        bufp->chgBit(oldp+577,(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_3));
        bufp->chgBit(oldp+578,(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_3));
        bufp->chgBit(oldp+579,(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_4));
        bufp->chgBit(oldp+580,(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_4));
        bufp->chgBit(oldp+581,(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_eq_5));
        bufp->chgBit(oldp+582,(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask_acc_5));
        bufp->chgCData(oldp+583,(vlSelf->TestHarness__DOT__ldut__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__mask),8);
        bufp->chgCData(oldp+584,(vlSelf->TestHarness__DOT__ldut__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size),2);
        bufp->chgSData(oldp+585,(vlSelf->TestHarness__DOT__ldut__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_source),9);
        bufp->chgCData(oldp+586,((3U & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                        >> 9U))),2);
        bufp->chgSData(oldp+587,((0x1ffU & vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U])),9);
        bufp->chgCData(oldp+588,(vlSelf->TestHarness__DOT__ldut__DOT___clint_domain_auto_clint_in_d_bits_size),2);
        bufp->chgSData(oldp+589,(vlSelf->TestHarness__DOT__ldut__DOT___clint_domain_auto_clint_in_d_bits_source),9);
        bufp->chgCData(oldp+590,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode),3);
        bufp->chgCData(oldp+591,(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_param),3);
        bufp->chgSData(oldp+592,(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address),12);
        bufp->chgCData(oldp+593,(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_mask),8);
        bufp->chgQData(oldp+594,((((QData)((IData)(
                                                   vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                                   << 0x2dU) | (((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                                 << 0xdU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                                   >> 0x13U)))),64);
        bufp->chgCData(oldp+596,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode),3);
        bufp->chgCData(oldp+597,(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_param),3);
        bufp->chgCData(oldp+598,(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_size),2);
        bufp->chgSData(oldp+599,(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_source),9);
        bufp->chgIData(oldp+600,(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_address),28);
        bufp->chgCData(oldp+601,(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_mask),8);
        bufp->chgCData(oldp+602,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode),3);
        bufp->chgCData(oldp+603,(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_param),3);
        bufp->chgIData(oldp+604,(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_address),26);
        bufp->chgCData(oldp+605,(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_clint_fragmenter_anon_out_a_bits_mask),8);
        bufp->chgBit(oldp+606,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__anonIn_a_ready));
        bufp->chgCData(oldp+607,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode),3);
        bufp->chgCData(oldp+608,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_param),2);
        bufp->chgCData(oldp+609,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_size),4);
        bufp->chgCData(oldp+610,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source),5);
        bufp->chgBit(oldp+611,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_sink));
        bufp->chgCData(oldp+612,((7U & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])),3);
        bufp->chgCData(oldp+613,((7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                        >> 3U))),3);
        bufp->chgCData(oldp+614,((0xfU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 6U))),4);
        bufp->chgCData(oldp+615,((0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xaU))),5);
        bufp->chgIData(oldp+616,((0xfffffffU & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                 << 0x11U) 
                                                | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xfU)))),28);
        bufp->chgCData(oldp+617,((0xffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                           >> 0xbU))),8);
        bufp->chgWData(oldp+618,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data),116);
        bufp->chgCData(oldp+622,((7U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                        >> 6U))),3);
        bufp->chgIData(oldp+623,((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                  >> 0xfU)),17);
        bufp->chgBit(oldp+624,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output));
        bufp->chgCData(oldp+625,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__anonIn_d_bits_size),3);
        bufp->chgCData(oldp+626,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_source),5);
        bufp->chgCData(oldp+627,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dFirst_size),3);
        bufp->chgCData(oldp+628,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0),3);
        bufp->chgBit(oldp+629,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__source_ok));
        bufp->chgBit(oldp+630,((2U == (3U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U)))));
        bufp->chgBit(oldp+631,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc));
        bufp->chgBit(oldp+632,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1));
        bufp->chgBit(oldp+633,((1U == (3U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U)))));
        bufp->chgBit(oldp+634,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_2));
        bufp->chgBit(oldp+635,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2));
        bufp->chgBit(oldp+636,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_3));
        bufp->chgBit(oldp+637,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3));
        bufp->chgBit(oldp+638,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_4));
        bufp->chgBit(oldp+639,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4));
        bufp->chgBit(oldp+640,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_eq_5));
        bufp->chgBit(oldp+641,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5));
        bufp->chgCData(oldp+642,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask),8);
        bufp->chgBit(oldp+643,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__source_ok_1));
        bufp->chgBit(oldp+644,((0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0))));
        bufp->chgCData(oldp+645,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_size),3);
        bufp->chgIData(oldp+646,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_address),17);
        bufp->chgIData(oldp+647,((0x3ffffffU & ((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                 << 0x11U) 
                                                | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xfU)))),26);
        bufp->chgBit(oldp+648,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output));
        bufp->chgCData(oldp+649,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__anonIn_d_bits_size),3);
        bufp->chgCData(oldp+650,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_source),5);
        bufp->chgCData(oldp+651,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dFirst_size),3);
        bufp->chgBit(oldp+652,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__drop));
        bufp->chgCData(oldp+653,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0),3);
        bufp->chgBit(oldp+654,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__source_ok_1));
        bufp->chgBit(oldp+655,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat));
        bufp->chgCData(oldp+656,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_size),3);
        bufp->chgIData(oldp+657,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address),26);
        bufp->chgSData(oldp+658,((0xfffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xfU))),12);
        bufp->chgBit(oldp+659,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output));
        bufp->chgCData(oldp+660,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__anonIn_d_bits_size),3);
        bufp->chgCData(oldp+661,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_source),5);
        bufp->chgCData(oldp+662,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dFirst_size),3);
        bufp->chgBit(oldp+663,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__drop));
        bufp->chgCData(oldp+664,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0),3);
        bufp->chgBit(oldp+665,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__source_ok_1));
        bufp->chgBit(oldp+666,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat));
        bufp->chgCData(oldp+667,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_size),3);
        bufp->chgSData(oldp+668,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address),12);
        bufp->chgCData(oldp+669,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__anonIn_d_bits_size),3);
        bufp->chgCData(oldp+670,((0x1fU & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[3U] 
                                           >> 4U))),5);
        bufp->chgCData(oldp+671,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dFirst_size),3);
        bufp->chgBit(oldp+672,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__drop));
        bufp->chgCData(oldp+673,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFragnum),3);
        bufp->chgBit(oldp+674,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source_ok_1));
        bufp->chgIData(oldp+675,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_set_wo_ready),19);
        bufp->chgBit(oldp+676,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat));
        bufp->chgCData(oldp+677,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_size),3);
        bufp->chgIData(oldp+678,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_address),28);
        bufp->chgBit(oldp+679,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_a_ready));
        bufp->chgCData(oldp+680,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__a_id),3);
        bufp->chgBit(oldp+681,((0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__a_id))));
        bufp->chgBit(oldp+682,((0U == (3U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xdU)))));
        bufp->chgBit(oldp+683,((1U == (3U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xdU)))));
        bufp->chgBit(oldp+684,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__stall));
        bufp->chgBit(oldp+685,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc));
        bufp->chgBit(oldp+686,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_1));
        bufp->chgBit(oldp+687,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_2));
        bufp->chgBit(oldp+688,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_3));
        bufp->chgBit(oldp+689,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_4));
        bufp->chgBit(oldp+690,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask_acc_5));
        bufp->chgCData(oldp+691,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__mask),8);
        bufp->chgBit(oldp+692,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__fixer__DOT__monitor__DOT__source_ok_1));
        bufp->chgSData(oldp+693,((0x3fffU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xfU))),14);
        bufp->chgCData(oldp+694,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__readys_valid),5);
        bufp->chgCData(oldp+695,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__readys_readys),5);
        bufp->chgBit(oldp+696,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__prefixOR_2));
        bufp->chgBit(oldp+697,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__prefixOR_3));
        bufp->chgIData(oldp+698,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready),19);
        __Vtemp_4[0U] = ((0xe0000000U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                         << 0x12U)) 
                         | (0x1fffffffU & vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]));
        __Vtemp_4[1U] = (((0x1ffc0000U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                          << 0x12U)) 
                          | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                             >> 0xeU)) | (0xe0000000U 
                                          & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                             << 0x12U)));
        __Vtemp_4[2U] = (((0x1ffc0000U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                          << 0x12U)) 
                          | (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                             >> 0xeU)) | (0xe0000000U 
                                          & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                             << 0x12U)));
        __Vtemp_4[3U] = (0x3fU & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                  >> 0xeU));
        bufp->chgWData(oldp+699,(__Vtemp_4),102);
        bufp->chgBit(oldp+703,((vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__time_0 
                                >= vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__pad)));
        bufp->chgBit(oldp+704,(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__out_woready_9));
        bufp->chgBit(oldp+705,(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__out_woready_17));
        bufp->chgBit(oldp+706,((0U == (3U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                             >> 0xeU)))));
        bufp->chgQData(oldp+707,(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__time_0),64);
        bufp->chgQData(oldp+709,(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__pad),64);
        bufp->chgBit(oldp+711,(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__ipi_0));
        bufp->chgBit(oldp+712,((2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___clint_domain_auto_clint_in_d_bits_size))));
        bufp->chgBit(oldp+713,(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc));
        bufp->chgBit(oldp+714,(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_1));
        bufp->chgBit(oldp+715,((1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___clint_domain_auto_clint_in_d_bits_size))));
        bufp->chgBit(oldp+716,(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_2));
        bufp->chgBit(oldp+717,(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_2));
        bufp->chgBit(oldp+718,(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_3));
        bufp->chgBit(oldp+719,(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_3));
        bufp->chgBit(oldp+720,(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_4));
        bufp->chgBit(oldp+721,(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_4));
        bufp->chgBit(oldp+722,(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_eq_5));
        bufp->chgBit(oldp+723,(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask_acc_5));
        bufp->chgCData(oldp+724,(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__mask),8);
        bufp->chgCData(oldp+725,((((vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__time_0 
                                    >= vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__pad) 
                                   << 1U) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__ipi_0))),2);
        bufp->chgBit(oldp+726,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__intnodeOut_0_REG) 
                                > (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__threshold_0))));
        bufp->chgBit(oldp+727,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__intnodeOut_0_REG_1) 
                                > (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__threshold_1))));
        bufp->chgBit(oldp+728,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_woready_8));
        bufp->chgBit(oldp+729,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_woready_11));
        bufp->chgBit(oldp+730,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__completer_0));
        bufp->chgBit(oldp+731,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__completer_1));
        bufp->chgCData(oldp+732,((3U & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[1U] 
                                        >> 0x18U))),2);
        bufp->chgCData(oldp+733,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__priority_0),2);
        bufp->chgCData(oldp+734,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__priority_1),2);
        bufp->chgCData(oldp+735,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__threshold_0),2);
        bufp->chgCData(oldp+736,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__threshold_1),2);
        bufp->chgCData(oldp+737,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__intnodeOut_0_REG),2);
        bufp->chgCData(oldp+738,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__intnodeOut_0_REG_1),2);
        bufp->chgCData(oldp+739,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__claiming),2);
        bufp->chgBit(oldp+740,((1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__claiming))));
        bufp->chgBit(oldp+741,((2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__claiming))));
        bufp->chgCData(oldp+742,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_oindex),5);
        bufp->chgBit(oldp+743,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__claimed));
        bufp->chgCData(oldp+744,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__fanin__DOT__effectivePriority_1),3);
        bufp->chgCData(oldp+745,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__fanin_1__DOT__effectivePriority_1),3);
        bufp->chgBit(oldp+746,((2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_size))));
        bufp->chgBit(oldp+747,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc));
        bufp->chgBit(oldp+748,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_1));
        bufp->chgBit(oldp+749,((1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_size))));
        bufp->chgBit(oldp+750,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_2));
        bufp->chgBit(oldp+751,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_2));
        bufp->chgBit(oldp+752,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_3));
        bufp->chgBit(oldp+753,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_3));
        bufp->chgBit(oldp+754,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_4));
        bufp->chgBit(oldp+755,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_4));
        bufp->chgBit(oldp+756,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_eq_5));
        bufp->chgBit(oldp+757,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask_acc_5));
        bufp->chgCData(oldp+758,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__mask),8);
        bufp->chgWData(oldp+759,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__monitor__DOT__a_set_wo_ready),304);
        bufp->chgIData(oldp+769,((0x7fffffU & (vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_plic_fragmenter_anon_out_a_bits_address 
                                               >> 3U))),23);
        bufp->chgIData(oldp+770,((0x7fffffU & (vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[0U] 
                                               >> 1U))),23);
        bufp->chgQData(oldp+771,((((QData)((IData)(
                                                   vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[2U])) 
                                   << 0x28U) | (((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[1U])) 
                                                 << 8U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[0U])) 
                                                   >> 0x18U)))),64);
        bufp->chgCData(oldp+773,((vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram[2U] 
                                  >> 0x18U)),8);
        bufp->chgWData(oldp+774,(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__out_back_front_q__DOT__ram),107);
        bufp->chgBit(oldp+778,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_818));
        bufp->chgBit(oldp+779,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1146));
        bufp->chgBit(oldp+780,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_111));
        bufp->chgBit(oldp+781,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_442));
        bufp->chgBit(oldp+782,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_722));
        bufp->chgBit(oldp+783,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_1074));
        bufp->chgBit(oldp+784,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_191));
        bufp->chgBit(oldp+785,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_510));
        bufp->chgBit(oldp+786,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_922));
        bufp->chgBit(oldp+787,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_345));
        bufp->chgBit(oldp+788,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_528));
        bufp->chgBit(oldp+789,((2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size))));
        bufp->chgBit(oldp+790,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc));
        bufp->chgBit(oldp+791,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_1));
        bufp->chgBit(oldp+792,((1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size))));
        bufp->chgBit(oldp+793,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_2));
        bufp->chgBit(oldp+794,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_2));
        bufp->chgBit(oldp+795,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_3));
        bufp->chgBit(oldp+796,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_3));
        bufp->chgBit(oldp+797,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_4));
        bufp->chgBit(oldp+798,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_4));
        bufp->chgBit(oldp+799,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_5));
        bufp->chgBit(oldp+800,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_5));
        bufp->chgCData(oldp+801,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask),8);
        bufp->chgSData(oldp+802,((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_resumereq) 
                                   << 0xeU) | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hartsel) 
                                                << 4U) 
                                               | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_ackhavereset) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hasel) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hamask_0) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hrmask_0))))))),15);
        bufp->chgQData(oldp+803,((((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_opcode)) 
                                   << 0x34U) | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_param)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_size)) 
                                                    << 0x2fU) 
                                                   | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_source)) 
                                                       << 0x2eU) 
                                                      | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_address)) 
                                                          << 0x25U) 
                                                         | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_mask)) 
                                                             << 0x21U) 
                                                            | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_data)) 
                                                                << 1U) 
                                                               | (QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_corrupt)))))))))),55);
        bufp->chgCData(oldp+805,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode),3);
        bufp->chgSData(oldp+806,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_address),9);
        bufp->chgIData(oldp+807,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_data),32);
        bufp->chgCData(oldp+808,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_opcode),3);
        bufp->chgCData(oldp+809,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_param),3);
        bufp->chgCData(oldp+810,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_size),2);
        bufp->chgBit(oldp+811,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_source));
        bufp->chgSData(oldp+812,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_address),9);
        bufp->chgCData(oldp+813,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_mask),4);
        bufp->chgIData(oldp+814,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_data),32);
        bufp->chgBit(oldp+815,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_corrupt));
        __Vtemp_5[0U] = vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_address;
        __Vtemp_5[1U] = 0U;
        __Vtemp_5[2U] = 0U;
        __Vtemp_5[3U] = 0U;
        bufp->chgWData(oldp+816,(__Vtemp_5),128);
        bufp->chgCData(oldp+820,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_bits_opcode),3);
        bufp->chgBit(oldp+821,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_resumereq));
        bufp->chgSData(oldp+822,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hartsel),10);
        bufp->chgBit(oldp+823,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_ackhavereset));
        bufp->chgBit(oldp+824,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hasel));
        bufp->chgBit(oldp+825,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hamask_0));
        bufp->chgBit(oldp+826,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hrmask_0));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgBit(oldp+827,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_31));
        bufp->chgBit(oldp+828,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_7));
        bufp->chgBit(oldp+829,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_54));
        bufp->chgBit(oldp+830,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_93));
        bufp->chgBit(oldp+831,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_23));
        bufp->chgBit(oldp+832,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_35));
        bufp->chgBit(oldp+833,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_11));
        bufp->chgBit(oldp+834,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_97));
        bufp->chgBit(oldp+835,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_15));
        bufp->chgBit(oldp+836,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_46));
        bufp->chgBit(oldp+837,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_42));
        bufp->chgBit(oldp+838,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_102));
        bufp->chgBit(oldp+839,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_19));
        bufp->chgBit(oldp+840,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_82));
        bufp->chgBit(oldp+841,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_50));
        bufp->chgBit(oldp+842,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_78));
        bufp->chgBit(oldp+843,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_38));
        bufp->chgBit(oldp+844,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_3));
        bufp->chgBit(oldp+845,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_27));
        bufp->chgBit(oldp+846,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_31));
        bufp->chgBit(oldp+847,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_7));
        bufp->chgBit(oldp+848,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_54));
        bufp->chgBit(oldp+849,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_93));
        bufp->chgBit(oldp+850,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_23));
        bufp->chgBit(oldp+851,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_35));
        bufp->chgBit(oldp+852,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_11));
        bufp->chgBit(oldp+853,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_97));
        bufp->chgBit(oldp+854,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_15));
        bufp->chgBit(oldp+855,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_46));
        bufp->chgBit(oldp+856,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_42));
        bufp->chgBit(oldp+857,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_102));
        bufp->chgBit(oldp+858,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_19));
        bufp->chgBit(oldp+859,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_82));
        bufp->chgBit(oldp+860,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_50));
        bufp->chgBit(oldp+861,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_78));
        bufp->chgBit(oldp+862,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_3));
        bufp->chgBit(oldp+863,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_27));
        bufp->chgIData(oldp+864,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrDataVal),32);
        bufp->chgBit(oldp+865,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSWrEnMaybe));
        bufp->chgBit(oldp+866,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__autoexecprogbufWrEnMaybe));
        bufp->chgBit(oldp+867,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__autoexecdataWrEnMaybe));
        bufp->chgBit(oldp+868,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_0));
        bufp->chgBit(oldp+869,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_4));
        bufp->chgBit(oldp+870,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_0));
        bufp->chgBit(oldp+871,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_4));
        bufp->chgBit(oldp+872,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_8));
        bufp->chgBit(oldp+873,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_12));
        bufp->chgBit(oldp+874,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_16));
        bufp->chgBit(oldp+875,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_20));
        bufp->chgBit(oldp+876,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_24));
        bufp->chgBit(oldp+877,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_28));
        bufp->chgBit(oldp+878,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_32));
        bufp->chgBit(oldp+879,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_36));
        bufp->chgBit(oldp+880,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_40));
        bufp->chgBit(oldp+881,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_44));
        bufp->chgBit(oldp+882,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_48));
        bufp->chgBit(oldp+883,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_52));
        bufp->chgBit(oldp+884,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_56));
        bufp->chgBit(oldp+885,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_60));
        bufp->chgBit(oldp+886,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__autoexec));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
        bufp->chgBit(oldp+887,(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_killd));
        bufp->chgQData(oldp+888,(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__coreMonitorBundle_wrdata),64);
        bufp->chgQData(oldp+890,(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_rs_0),64);
        bufp->chgQData(oldp+892,(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_rs_1),64);
        bufp->chgQData(oldp+894,(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___io_rw_rdata_output),64);
        bufp->chgQData(oldp+896,(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___csr_io_interrupt_cause),64);
        bufp->chgSData(oldp+898,(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__read_mip),16);
        bufp->chgQData(oldp+899,(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__wdata),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xcU])) {
        bufp->chgBit(oldp+901,(vlSelf->TestHarness__DOT__debug_reset));
        bufp->chgBit(oldp+902,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq));
        bufp->chgBit(oldp+903,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset));
        bufp->chgBit(oldp+904,((1U & (~ (IData)(vlSelf->__VdfgTmp_ha6459e1f__0)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xdU])) {
        bufp->chgBit(oldp+905,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__in_0_a_ready));
        bufp->chgBit(oldp+906,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx));
        bufp->chgBit(oldp+907,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT___io_innerCtrl_valid_output));
        bufp->chgBit(oldp+908,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT___io_innerCtrl_bits_resumereq_output));
        bufp->chgBit(oldp+909,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT___io_innerCtrl_bits_ackhavereset_output));
        bufp->chgBit(oldp+910,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__hrmaskNxt_0));
        bufp->chgBit(oldp+911,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_a_ready));
        bufp->chgCData(oldp+912,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_opcode),3);
        bufp->chgCData(oldp+913,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_param),2);
        bufp->chgCData(oldp+914,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_size),2);
        bufp->chgBit(oldp+915,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_sink));
        bufp->chgBit(oldp+916,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__nodeIn_a_ready));
        bufp->chgCData(oldp+917,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__nodeIn_d_bits_opcode),3);
        bufp->chgCData(oldp+918,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__next_flight),2);
        bufp->chgBit(oldp+919,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall));
        bufp->chgBit(oldp+920,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_ready));
        bufp->chgCData(oldp+921,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__readys_valid),2);
        bufp->chgCData(oldp+922,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__readys_readys),2);
        bufp->chgCData(oldp+923,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____Vcellinp__monitor__io_in_d_bits_opcode),3);
        bufp->chgCData(oldp+924,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____Vcellinp__monitor__io_in_d_bits_param),2);
        bufp->chgCData(oldp+925,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____Vcellinp__monitor__io_in_d_bits_size),2);
        bufp->chgBit(oldp+926,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____Vcellinp__monitor__io_in_d_bits_sink));
    }
    bufp->chgBit(oldp+927,(vlSelf->clock));
    bufp->chgBit(oldp+928,(vlSelf->reset));
    bufp->chgBit(oldp+929,(vlSelf->io_success));
    bufp->chgBit(oldp+930,(vlSelf->_cp___05Fs10034));
    bufp->chgBit(oldp+931,(vlSelf->_cp___05Fs11206));
    bufp->chgBit(oldp+932,(vlSelf->_cp___05Fs11319));
    bufp->chgBit(oldp+933,(vlSelf->_cp___05Fs11468));
    bufp->chgCData(oldp+934,(vlSelf->_mc___05Fs3510),2);
    bufp->chgIData(oldp+935,((((IData)(vlSelf->_mc___05Fs3508)
                                ? ((IData)(vlSelf->_mc___05Fs3561)
                                    ? 0U : (IData)(
                                                   (vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                    >> 1U)))
                                : 0U) | ((IData)(vlSelf->_mc___05Fs3509)
                                          ? ((IData)(vlSelf->_mc___05Fs3537)
                                              ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT____VdfgTmp_hcef7e3f7__0)
                                                  ? 0x112380U
                                                  : 
                                                 (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__VdfgTmp_ha6459e1f__0))))
                                              : 0U)
                                          : 0U))),32);
    bufp->chgBit(oldp+936,(vlSelf->TestHarness__DOT__SimDTM__DOT__r_reset));
    bufp->chgBit(oldp+937,(vlSelf->_cp___05Fs12585));
    bufp->chgBit(oldp+938,(vlSelf->_rs___05Fs3699));
    bufp->chgBit(oldp+939,(vlSelf->_rs___05Fs4262));
    bufp->chgBit(oldp+940,(vlSelf->_rs___05Fs3698));
    bufp->chgBit(oldp+941,(vlSelf->_rs___05Fs4112));
    bufp->chgBit(oldp+942,(vlSelf->TestHarness__DOT___gated_clock_debug_clock_gate_out));
    bufp->chgBit(oldp+943,(vlSelf->TestHarness__DOT__gated_clock_debug_clock_gate__DOT__en_latched));
    bufp->chgBit(oldp+944,(vlSelf->_cp___05Fs13736));
    bufp->chgBit(oldp+945,(vlSelf->_cp___05Fs13742));
    bufp->chgBit(oldp+946,(vlSelf->_cp___05Fs13709));
    bufp->chgBit(oldp+947,(vlSelf->_cp___05Fs13730));
    bufp->chgBit(oldp+948,(vlSelf->_cp___05Fs13703));
    bufp->chgBit(oldp+949,(vlSelf->_cp___05Fs13850));
    bufp->chgBit(oldp+950,(vlSelf->_cp___05Fs13856));
    bufp->chgBit(oldp+951,(vlSelf->_cp___05Fs13823));
    bufp->chgBit(oldp+952,(vlSelf->_cp___05Fs13844));
    bufp->chgBit(oldp+953,(vlSelf->_cp___05Fs13817));
    bufp->chgBit(oldp+954,(vlSelf->_cp___05Fs13691));
    bufp->chgBit(oldp+955,(vlSelf->_cp___05Fs13741));
    bufp->chgBit(oldp+956,(vlSelf->_cp___05Fs13697));
    bufp->chgBit(oldp+957,(((IData)(vlSelf->_cp___05Fs5955) 
                            & (IData)(vlSelf->_mc___05Fs682))));
    bufp->chgBit(oldp+958,(vlSelf->_cp___05Fs13805));
    bufp->chgBit(oldp+959,(vlSelf->_cp___05Fs13855));
    bufp->chgBit(oldp+960,((1U & (~ (IData)(vlSelf->_mc___05Fs188)))));
    bufp->chgBit(oldp+961,(vlSelf->_cp___05Fs13811));
    bufp->chgBit(oldp+962,((1U & (~ (IData)(vlSelf->_mc___05Fs190)))));
    bufp->chgBit(oldp+963,(vlSelf->_cp___05Fs2882));
    bufp->chgBit(oldp+964,(vlSelf->_cp___05Fs2888));
    bufp->chgBit(oldp+965,(((IData)(vlSelf->_mc___05Fs316) 
                            & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__nodeIn_b_valid))));
    bufp->chgBit(oldp+966,(vlSelf->_cp___05Fs2876));
    bufp->chgBit(oldp+967,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__nodeIn_r_deq_q__DOT__full) 
                            | (IData)(vlSelf->_cp___05Fs2827))));
    bufp->chgCData(oldp+968,((3U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__nodeIn_r_deq_q__DOT__full)
                                     ? ((vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__nodeIn_r_deq_q__DOT__ram[2U] 
                                         << 0x1fU) 
                                        | (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__nodeIn_r_deq_q__DOT__ram[2U] 
                                           >> 1U)) : 
                                    ((IData)(vlSelf->_mc___05Fs294) 
                                     << 1U)))),2);
    bufp->chgBit(oldp+969,((1U & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT___axi4frag_auto_in_r_bits_id)
                                    ? (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__Memory
                                       [vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__deq_ptr_value] 
                                       >> 7U) : (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__Memory
                                                 [vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__deq_ptr_value] 
                                                 >> 7U)) 
                                  & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__nodeIn_r_deq_q__DOT__full)
                                      ? (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__nodeIn_r_deq_q__DOT__ram[2U] 
                                         >> 3U) : (
                                                   (1U 
                                                    == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__d_last_counter)) 
                                                   | (0U 
                                                      == 
                                                      ((IData)(vlSelf->_mc___05Fs254)
                                                        ? 
                                                       (0x1ffU 
                                                        & (~ 
                                                           (0xffffffU 
                                                            & (((IData)(0xfffU) 
                                                                << 
                                                                (0xfU 
                                                                 & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                                    >> 5U))) 
                                                               >> 3U))))
                                                        : 0U))))))));
    bufp->chgBit(oldp+970,(vlSelf->_cp___05Fs10873));
    bufp->chgBit(oldp+971,(vlSelf->_cp___05Fs13390));
    bufp->chgBit(oldp+972,(vlSelf->_cp___05Fs13411));
    bufp->chgBit(oldp+973,(vlSelf->_cp___05Fs13652));
    bufp->chgQData(oldp+974,(((IData)(vlSelf->_mc___05Fs3681)
                               ? 0ULL : (((QData)((IData)(
                                                          VTestHarness__ConstPool__CONST_h30fff677_0[
                                                          (((IData)(0x3fU) 
                                                            + 
                                                            (0x7fffU 
                                                             & VL_SHIFTL_III(15,15,32, 
                                                                             (0x1ffU 
                                                                              & (vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_address 
                                                                                >> 3U)), 6U))) 
                                                           >> 5U)])) 
                                          << ((0U == 
                                               (0x1fU 
                                                & VL_SHIFTL_III(15,15,32, 
                                                                (0x1ffU 
                                                                 & (vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_address 
                                                                    >> 3U)), 6U)))
                                               ? 0x20U
                                               : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(15,15,32, 
                                                                   (0x1ffU 
                                                                    & (vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_address 
                                                                       >> 3U)), 6U))))) 
                                         | (((0U == 
                                              (0x1fU 
                                               & VL_SHIFTL_III(15,15,32, 
                                                               (0x1ffU 
                                                                & (vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_address 
                                                                   >> 3U)), 6U)))
                                              ? 0ULL
                                              : ((QData)((IData)(
                                                                 VTestHarness__ConstPool__CONST_h30fff677_0[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x7fffU 
                                                                    & VL_SHIFTL_III(15,15,32, 
                                                                                (0x1ffU 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_address 
                                                                                >> 3U)), 6U))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(15,15,32, 
                                                                   (0x1ffU 
                                                                    & (vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_address 
                                                                       >> 3U)), 6U))))) 
                                            | ((QData)((IData)(
                                                               VTestHarness__ConstPool__CONST_h30fff677_0[
                                                               (0x3ffU 
                                                                & (VL_SHIFTL_III(15,15,32, 
                                                                                (0x1ffU 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_address 
                                                                                >> 3U)), 6U) 
                                                                   >> 5U))])) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(15,15,32, 
                                                                   (0x1ffU 
                                                                    & (vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_bootrom_fragmenter_anon_out_a_bits_address 
                                                                       >> 3U)), 6U))))))),64);
    bufp->chgBit(oldp+976,(vlSelf->_cp___05Fs13580));
    bufp->chgBit(oldp+977,(vlSelf->_cp___05Fs13619));
    bufp->chgBit(oldp+978,(vlSelf->_cp___05Fs13112));
    bufp->chgBit(oldp+979,(vlSelf->_cp___05Fs12850));
    bufp->chgCData(oldp+980,(vlSelf->_mc___05Fs3617),3);
    bufp->chgQData(oldp+981,(((IData)(vlSelf->_mc___05Fs3670)
                               ? (((QData)((IData)(
                                                   vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_90[
                                                   (((IData)(0x3fU) 
                                                     + 
                                                     (0x3fffU 
                                                      & VL_SHIFTL_III(14,14,32, 
                                                                      (0xffU 
                                                                       & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address) 
                                                                          >> 3U)), 6U))) 
                                                    >> 5U)])) 
                                   << ((0U == (0x1fU 
                                               & VL_SHIFTL_III(14,14,32, 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address) 
                                                                   >> 3U)), 6U)))
                                        ? 0x20U : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(14,14,32, 
                                                                    (0xffU 
                                                                     & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address) 
                                                                        >> 3U)), 6U))))) 
                                  | (((0U == (0x1fU 
                                              & VL_SHIFTL_III(14,14,32, 
                                                              (0xffU 
                                                               & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address) 
                                                                  >> 3U)), 6U)))
                                       ? 0ULL : ((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_90[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x3fffU 
                                                                    & VL_SHIFTL_III(14,14,32, 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address) 
                                                                                >> 3U)), 6U))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(14,14,32, 
                                                                   (0xffU 
                                                                    & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address) 
                                                                       >> 3U)), 6U))))) 
                                     | ((QData)((IData)(
                                                        vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_90[
                                                        (0x1ffU 
                                                         & (VL_SHIFTL_III(14,14,32, 
                                                                          (0xffU 
                                                                           & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address) 
                                                                              >> 3U)), 6U) 
                                                            >> 5U))])) 
                                        >> (0x1fU & 
                                            VL_SHIFTL_III(14,14,32, 
                                                          (0xffU 
                                                           & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_coupler_to_debug_fragmenter_anon_out_a_bits_address) 
                                                              >> 3U)), 6U)))))
                               : 0ULL)),64);
    bufp->chgBit(oldp+983,(vlSelf->_mc___05Fs3456));
    bufp->chgCData(oldp+984,(vlSelf->_mc___05Fs3443),3);
    bufp->chgQData(oldp+985,(((IData)(vlSelf->_mc___05Fs3482)
                               ? ((IData)(vlSelf->_cp___05Fs11188)
                                   ? ((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__priority_0)) 
                                      << 0x20U) : ((IData)(vlSelf->_cp___05Fs11189)
                                                    ? (QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__priority_1))
                                                    : 
                                                   ((IData)(vlSelf->_cp___05Fs11190)
                                                     ? (QData)((IData)(
                                                                       (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__pending_1) 
                                                                         << 2U) 
                                                                        | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__pending_0) 
                                                                           << 1U))))
                                                     : 
                                                    ((IData)(vlSelf->_cp___05Fs11191)
                                                      ? (QData)((IData)(
                                                                        ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__enables_0_0) 
                                                                         << 1U)))
                                                      : 
                                                     ((IData)(vlSelf->_cp___05Fs11192)
                                                       ? (QData)((IData)(
                                                                         ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__enables_1_0) 
                                                                          << 1U)))
                                                       : 
                                                      ((IData)(vlSelf->_cp___05Fs11193)
                                                        ? 
                                                       (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__maxDevs_0)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__threshold_0)))
                                                        : 
                                                       ((IData)(vlSelf->_cp___05Fs11194)
                                                         ? 
                                                        (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__maxDevs_1)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__threshold_1)))
                                                         : 0ULL)))))))
                               : 0ULL)),64);
    bufp->chgBit(oldp+987,(vlSelf->_cp___05Fs10869));
    bufp->chgBit(oldp+988,(vlSelf->_cp___05Fs10607));
    bufp->chgCData(oldp+989,(vlSelf->_mc___05Fs3407),3);
    __Vtemp_8[0U] = (IData)((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__ipi_0)));
    __Vtemp_8[1U] = (IData)(((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__ipi_0)) 
                             >> 0x20U));
    __Vtemp_8[2U] = (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__pad);
    __Vtemp_8[3U] = (IData)((vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__pad 
                             >> 0x20U));
    __Vtemp_8[4U] = (IData)(vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__time_0);
    __Vtemp_8[5U] = (IData)((vlSelf->TestHarness__DOT__ldut__DOT__clint_domain__DOT__clint__DOT__time_0 
                             >> 0x20U));
    __Vtemp_8[6U] = 0U;
    __Vtemp_8[7U] = 0U;
    bufp->chgQData(oldp+990,(((IData)(vlSelf->_mc___05Fs3439)
                               ? (((QData)((IData)(
                                                   __Vtemp_8[
                                                   (((IData)(0x3fU) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, 
                                                                      (3U 
                                                                       & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                                                          >> 0xeU)), 6U))) 
                                                    >> 5U)])) 
                                   << ((0U == (0x1fU 
                                               & VL_SHIFTL_III(8,8,32, 
                                                               (3U 
                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                                                   >> 0xeU)), 6U)))
                                        ? 0x20U : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(8,8,32, 
                                                                    (3U 
                                                                     & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                                                        >> 0xeU)), 6U))))) 
                                  | (((0U == (0x1fU 
                                              & VL_SHIFTL_III(8,8,32, 
                                                              (3U 
                                                               & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                                                  >> 0xeU)), 6U)))
                                       ? 0ULL : ((QData)((IData)(
                                                                 __Vtemp_8[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0xffU 
                                                                    & VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                                                                >> 0xeU)), 6U))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   (3U 
                                                                    & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                                                       >> 0xeU)), 6U))))) 
                                     | ((QData)((IData)(
                                                        __Vtemp_8[
                                                        (7U 
                                                         & (VL_SHIFTL_III(8,8,32, 
                                                                          (3U 
                                                                           & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                                                              >> 0xeU)), 6U) 
                                                            >> 5U))])) 
                                        >> (0x1fU & 
                                            VL_SHIFTL_III(8,8,32, 
                                                          (3U 
                                                           & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                                              >> 0xeU)), 6U)))))
                               : 0ULL)),64);
    bufp->chgBit(oldp+992,(vlSelf->_cp___05Fs3728));
    bufp->chgBit(oldp+993,(vlSelf->_cp___05Fs3749));
    bufp->chgBit(oldp+994,(vlSelf->_cp___05Fs3992));
    bufp->chgBit(oldp+995,(vlSelf->_cp___05Fs12871));
    bufp->chgBit(oldp+996,(vlSelf->_cp___05Fs10894));
    bufp->chgBit(oldp+997,(vlSelf->_cp___05Fs10915));
    bufp->chgBit(oldp+998,(vlSelf->_cp___05Fs11158));
    bufp->chgBit(oldp+999,(vlSelf->_cp___05Fs10628));
    bufp->chgBit(oldp+1000,(vlSelf->_cp___05Fs3841));
    bufp->chgBit(oldp+1001,(vlSelf->_cp___05Fs3854));
    bufp->chgBit(oldp+1002,(vlSelf->_cp___05Fs3852));
    bufp->chgBit(oldp+1003,((1U & (~ (IData)(vlSelf->_mc___05Fs428)))));
    bufp->chgBit(oldp+1004,(vlSelf->_cp___05Fs3564));
    bufp->chgBit(oldp+1005,(vlSelf->_cp___05Fs3577));
    bufp->chgBit(oldp+1006,(vlSelf->_cp___05Fs3575));
    bufp->chgBit(oldp+1007,(vlSelf->_cp___05Fs3451));
    bufp->chgBit(oldp+1008,(vlSelf->_cp___05Fs3472));
    bufp->chgBit(oldp+1009,(vlSelf->_cp___05Fs3715));
    bufp->chgBit(oldp+1010,(vlSelf->_cp___05Fs4005));
    bufp->chgBit(oldp+1011,(vlSelf->_mc___05Fs483));
    bufp->chgBit(oldp+1012,(vlSelf->_mc___05Fs453));
    bufp->chgBit(oldp+1013,(vlSelf->_mc___05Fs452));
    bufp->chgBit(oldp+1014,(vlSelf->_mc___05Fs480));
    bufp->chgBit(oldp+1015,(vlSelf->_mc___05Fs486));
    bufp->chgBit(oldp+1016,(vlSelf->_mc___05Fs485));
    bufp->chgBit(oldp+1017,(vlSelf->_mc___05Fs484));
    bufp->chgBit(oldp+1018,(vlSelf->_mc___05Fs489));
    bufp->chgBit(oldp+1019,(vlSelf->_mc___05Fs490));
    bufp->chgBit(oldp+1020,(vlSelf->_mc___05Fs495));
    bufp->chgBit(oldp+1021,(vlSelf->_cp___05Fs4011));
    bufp->chgBit(oldp+1022,(vlSelf->_mc___05Fs496));
    bufp->chgBit(oldp+1023,(vlSelf->_cp___05Fs4012));
    bufp->chgBit(oldp+1024,(vlSelf->_mc___05Fs445));
    bufp->chgBit(oldp+1025,(vlSelf->_mc___05Fs447));
    bufp->chgBit(oldp+1026,(vlSelf->_cp___05Fs3844));
    bufp->chgBit(oldp+1027,(vlSelf->_cp___05Fs3957));
    bufp->chgBit(oldp+1028,(vlSelf->_mc___05Fs451));
    bufp->chgBit(oldp+1029,(vlSelf->_cp___05Fs3017));
    bufp->chgBit(oldp+1030,(vlSelf->_cp___05Fs3030));
    bufp->chgQData(oldp+1031,(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT___out_xbar_auto_anon_in_d_bits_data),64);
    bufp->chgBit(oldp+1033,(vlSelf->_cp___05Fs3028));
    bufp->chgBit(oldp+1034,(vlSelf->_cp___05Fs2904));
    bufp->chgBit(oldp+1035,(vlSelf->_cp___05Fs2925));
    bufp->chgBit(oldp+1036,(vlSelf->_cp___05Fs3166));
    bufp->chgBit(oldp+1037,(vlSelf->_mc___05Fs421));
    bufp->chgBit(oldp+1038,(vlSelf->_mc___05Fs423));
    bufp->chgBit(oldp+1039,(vlSelf->_cp___05Fs3567));
    bufp->chgBit(oldp+1040,(vlSelf->_cp___05Fs3680));
    bufp->chgBit(oldp+1041,(vlSelf->_mc___05Fs427));
    bufp->chgBit(oldp+1042,(vlSelf->_mc___05Fs429));
    bufp->chgBit(oldp+1043,(vlSelf->_cp___05Fs3107));
    bufp->chgBit(oldp+1044,(vlSelf->_cp___05Fs3654));
    __Vtemp_10[0U] = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT___out_xbar_auto_anon_in_d_bits_data) 
                       << 0x10U) | (((IData)(vlSelf->_cp___05Fs3030) 
                                     << 0xfU) | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_sink) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_source) 
                                                     << 9U) 
                                                    | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_size) 
                                                        << 5U) 
                                                       | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_param) 
                                                           << 3U) 
                                                          | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__out_xbar__DOT__in_0_d_bits_opcode)))))));
    __Vtemp_10[1U] = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT___out_xbar_auto_anon_in_d_bits_data) 
                       >> 0x10U) | ((IData)((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT___out_xbar_auto_anon_in_d_bits_data 
                                             >> 0x20U)) 
                                    << 0x10U));
    __Vtemp_10[2U] = (((IData)(vlSelf->_cp___05Fs3028) 
                       << 0x10U) | ((IData)((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT___out_xbar_auto_anon_in_d_bits_data 
                                             >> 0x20U)) 
                                    >> 0x10U));
    bufp->chgWData(oldp+1045,(__Vtemp_10),81);
    bufp->chgBit(oldp+1048,(vlSelf->_mc___05Fs428));
    bufp->chgBit(oldp+1049,(vlSelf->_cp___05Fs3641));
    bufp->chgBit(oldp+1050,(vlSelf->_cp___05Fs3094));
    __Vtemp_12[0U] = (IData)((((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT___atomics_auto_out_a_bits_mask)) 
                               << 0x2bU) | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT___atomics_auto_out_a_bits_address)) 
                                             << 0xfU) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT___atomics_auto_out_a_bits_source) 
                                                                << 0xaU) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT___atomics_auto_out_a_bits_size) 
                                                                   << 6U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT___atomics_auto_out_a_bits_param) 
                                                                      << 3U) 
                                                                     | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT___atomics_auto_out_a_bits_opcode)))))))));
    __Vtemp_12[1U] = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT___atomics_auto_out_a_bits_data) 
                       << 0x13U) | (IData)(((((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT___atomics_auto_out_a_bits_mask)) 
                                              << 0x2bU) 
                                             | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT___atomics_auto_out_a_bits_address)) 
                                                 << 0xfU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT___atomics_auto_out_a_bits_source) 
                                                                    << 0xaU) 
                                                                   | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT___atomics_auto_out_a_bits_size) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT___atomics_auto_out_a_bits_param) 
                                                                          << 3U) 
                                                                         | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT___atomics_auto_out_a_bits_opcode)))))))) 
                                            >> 0x20U)));
    __Vtemp_12[2U] = (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT___atomics_auto_out_a_bits_data) 
                       >> 0xdU) | ((IData)((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT___atomics_auto_out_a_bits_data 
                                            >> 0x20U)) 
                                   << 0x13U));
    __Vtemp_12[3U] = (((IData)(vlSelf->_cp___05Fs3472) 
                       << 0x13U) | ((IData)((vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT___atomics_auto_out_a_bits_data 
                                             >> 0x20U)) 
                                    >> 0xdU));
    bufp->chgWData(oldp+1051,(__Vtemp_12),116);
    bufp->chgBit(oldp+1055,(vlSelf->_cp___05Fs5407));
    bufp->chgBit(oldp+1056,(vlSelf->_mc___05Fs671));
    bufp->chgBit(oldp+1057,(vlSelf->_mc___05Fs679));
    bufp->chgBit(oldp+1058,(vlSelf->_cp___05Fs5597));
    bufp->chgBit(oldp+1059,(vlSelf->_mc___05Fs665));
    bufp->chgBit(oldp+1060,(vlSelf->_mc___05Fs666));
    bufp->chgBit(oldp+1061,(vlSelf->_cp___05Fs5636));
    bufp->chgBit(oldp+1062,(vlSelf->_mc___05Fs669));
    bufp->chgBit(oldp+1063,(vlSelf->_mc___05Fs670));
    bufp->chgBit(oldp+1064,(vlSelf->_cp___05Fs4568));
    bufp->chgBit(oldp+1065,(vlSelf->_cp___05Fs4830));
    bufp->chgBit(oldp+1066,(vlSelf->_cp___05Fs4681));
    bufp->chgBit(oldp+1067,(vlSelf->_mc___05Fs572));
    bufp->chgBit(oldp+1068,(vlSelf->_mc___05Fs581));
    bufp->chgBit(oldp+1069,(vlSelf->_mc___05Fs563));
    bufp->chgBit(oldp+1070,(vlSelf->_mc___05Fs565));
    bufp->chgBit(oldp+1071,(vlSelf->_cp___05Fs10723));
    bufp->chgBit(oldp+1072,(vlSelf->_cp___05Fs4797));
    bufp->chgBit(oldp+1073,(vlSelf->_mc___05Fs569));
    bufp->chgBit(oldp+1074,(vlSelf->_mc___05Fs570));
    bufp->chgBit(oldp+1075,(vlSelf->_cp___05Fs5129));
    bufp->chgBit(oldp+1076,(vlSelf->_cp___05Fs5391));
    bufp->chgBit(oldp+1077,(vlSelf->_cp___05Fs5242));
    bufp->chgBit(oldp+1078,(vlSelf->_mc___05Fs642));
    bufp->chgBit(oldp+1079,(vlSelf->_mc___05Fs651));
    bufp->chgBit(oldp+1080,(vlSelf->_mc___05Fs633));
    bufp->chgBit(oldp+1081,(vlSelf->_mc___05Fs635));
    bufp->chgBit(oldp+1082,(vlSelf->_cp___05Fs12966));
    bufp->chgBit(oldp+1083,(vlSelf->_cp___05Fs5358));
    bufp->chgBit(oldp+1084,(vlSelf->_mc___05Fs639));
    bufp->chgBit(oldp+1085,(vlSelf->_mc___05Fs640));
    bufp->chgBit(oldp+1086,(vlSelf->_cp___05Fs4846));
    bufp->chgBit(oldp+1087,(vlSelf->_cp___05Fs5110));
    bufp->chgBit(oldp+1088,(vlSelf->_cp___05Fs4959));
    bufp->chgBit(oldp+1089,(vlSelf->_mc___05Fs607));
    bufp->chgBit(oldp+1090,(vlSelf->_mc___05Fs616));
    bufp->chgBit(oldp+1091,(vlSelf->_mc___05Fs598));
    bufp->chgBit(oldp+1092,(vlSelf->_mc___05Fs600));
    bufp->chgBit(oldp+1093,(vlSelf->_cp___05Fs11010));
    bufp->chgBit(oldp+1094,(vlSelf->_cp___05Fs5075));
    bufp->chgBit(oldp+1095,(vlSelf->_mc___05Fs604));
    bufp->chgBit(oldp+1096,(vlSelf->_mc___05Fs605));
    bufp->chgBit(oldp+1097,(vlSelf->_cp___05Fs3178));
    bufp->chgBit(oldp+1098,(vlSelf->_mc___05Fs345));
    bufp->chgBit(oldp+1099,(vlSelf->_mc___05Fs347));
    bufp->chgBit(oldp+1100,(vlSelf->_mc___05Fs332));
    bufp->chgBit(oldp+1101,(vlSelf->_mc___05Fs334));
    bufp->chgBit(oldp+1102,(vlSelf->_cp___05Fs3020));
    bufp->chgBit(oldp+1103,(vlSelf->_cp___05Fs3133));
    bufp->chgBit(oldp+1104,(vlSelf->_mc___05Fs338));
    bufp->chgBit(oldp+1105,((1U & (~ (IData)(vlSelf->_mc___05Fs546)))));
    bufp->chgBit(oldp+1106,(vlSelf->_cp___05Fs4404));
    bufp->chgBit(oldp+1107,(vlSelf->_cp___05Fs4417));
    bufp->chgBit(oldp+1108,(vlSelf->_cp___05Fs4415));
    bufp->chgBit(oldp+1109,(vlSelf->_cp___05Fs4291));
    bufp->chgBit(oldp+1110,(vlSelf->_cp___05Fs4555));
    bufp->chgBit(oldp+1111,(vlSelf->_mc___05Fs340));
    bufp->chgBit(oldp+1112,(vlSelf->_mc___05Fs342));
    bufp->chgBit(oldp+1113,(vlSelf->_mc___05Fs339));
    bufp->chgBit(oldp+1114,(vlSelf->_mc___05Fs341));
    bufp->chgBit(oldp+1115,(vlSelf->_mc___05Fs395));
    bufp->chgBit(oldp+1116,(vlSelf->_mc___05Fs394));
    bufp->chgBit(oldp+1117,(vlSelf->_mc___05Fs389));
    bufp->chgBit(oldp+1118,(vlSelf->_mc___05Fs390));
    bufp->chgBit(oldp+1119,(vlSelf->_mc___05Fs391));
    bufp->chgBit(oldp+1120,(vlSelf->_mc___05Fs392));
    bufp->chgBit(oldp+1121,(vlSelf->_mc___05Fs393));
    bufp->chgBit(oldp+1122,(vlSelf->_mc___05Fs401));
    bufp->chgBit(oldp+1123,(vlSelf->_mc___05Fs402));
    bufp->chgBit(oldp+1124,(vlSelf->_mc___05Fs403));
    bufp->chgBit(oldp+1125,(vlSelf->_mc___05Fs404));
    bufp->chgBit(oldp+1126,(vlSelf->_mc___05Fs405));
    bufp->chgBit(oldp+1127,(vlSelf->_mc___05Fs366));
    bufp->chgBit(oldp+1128,(vlSelf->_mc___05Fs368));
    bufp->chgBit(oldp+1129,(vlSelf->_cp___05Fs3407));
    bufp->chgBit(oldp+1130,(vlSelf->_mc___05Fs372));
    bufp->chgBit(oldp+1131,(vlSelf->_cp___05Fs4126));
    bufp->chgBit(oldp+1132,(vlSelf->_mc___05Fs509));
    bufp->chgBit(oldp+1133,(vlSelf->_cp___05Fs4013));
    bufp->chgBit(oldp+1134,(vlSelf->_cp___05Fs4034));
    bufp->chgBit(oldp+1135,(vlSelf->_cp___05Fs4277));
    bufp->chgBit(oldp+1136,(vlSelf->_mc___05Fs539));
    bufp->chgBit(oldp+1137,(vlSelf->_mc___05Fs541));
    bufp->chgBit(oldp+1138,(vlSelf->_cp___05Fs4407));
    bufp->chgBit(oldp+1139,(vlSelf->_cp___05Fs4520));
    bufp->chgBit(oldp+1140,(vlSelf->_mc___05Fs545));
    bufp->chgBit(oldp+1141,(vlSelf->_mc___05Fs547));
    bufp->chgBit(oldp+1142,(vlSelf->_cp___05Fs4216));
    bufp->chgBit(oldp+1143,(vlSelf->_cp___05Fs4494));
    __Vtemp_15[0U] = (0x8000U | ((0x3fe0U & (vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[0U] 
                                             >> 1U)) 
                                 | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__da_bits_opcode)));
    __Vtemp_15[1U] = 0U;
    __Vtemp_15[2U] = ((IData)(vlSelf->_mc___05Fs509) 
                      << 0x10U);
    bufp->chgWData(oldp+1144,(__Vtemp_15),81);
    bufp->chgBit(oldp+1147,(vlSelf->_mc___05Fs546));
    bufp->chgBit(oldp+1148,(vlSelf->_cp___05Fs4481));
    bufp->chgBit(oldp+1149,(vlSelf->_cp___05Fs4563));
    bufp->chgBit(oldp+1150,(vlSelf->_mc___05Fs521));
    bufp->chgBit(oldp+1151,(vlSelf->_mc___05Fs523));
    bufp->chgBit(oldp+1152,(vlSelf->_mc___05Fs519));
    bufp->chgBit(oldp+1153,(vlSelf->_cp___05Fs4203));
    bufp->chgBit(oldp+1154,(vlSelf->_cp___05Fs4285));
    bufp->chgBit(oldp+1155,(vlSelf->_mc___05Fs512));
    bufp->chgBit(oldp+1156,(vlSelf->_mc___05Fs514));
    bufp->chgBit(oldp+1157,(vlSelf->_cp___05Fs4129));
    bufp->chgBit(oldp+1158,(vlSelf->_cp___05Fs4242));
    bufp->chgBit(oldp+1159,(vlSelf->_mc___05Fs518));
    bufp->chgBit(oldp+1160,(vlSelf->_rs___05Fs3586));
    bufp->chgBit(oldp+1161,(vlSelf->_cp___05Fs10892));
    bufp->chgBit(oldp+1162,(vlSelf->_cp___05Fs10891));
    bufp->chgBit(oldp+1163,(vlSelf->_cp___05Fs10890));
    bufp->chgBit(oldp+1164,(vlSelf->_cp___05Fs10889));
    bufp->chgBit(oldp+1165,(vlSelf->_cp___05Fs10888));
    bufp->chgBit(oldp+1166,(vlSelf->_cp___05Fs10887));
    bufp->chgBit(oldp+1167,(vlSelf->_cp___05Fs10886));
    bufp->chgBit(oldp+1168,(vlSelf->_cp___05Fs10885));
    bufp->chgBit(oldp+1169,(vlSelf->_cp___05Fs10884));
    bufp->chgBit(oldp+1170,(vlSelf->_cp___05Fs10883));
    bufp->chgBit(oldp+1171,(vlSelf->_cp___05Fs10882));
    bufp->chgBit(oldp+1172,(vlSelf->_cp___05Fs10881));
    bufp->chgBit(oldp+1173,(vlSelf->_cp___05Fs10880));
    bufp->chgBit(oldp+1174,(vlSelf->_cp___05Fs10879));
    bufp->chgBit(oldp+1175,(vlSelf->_cp___05Fs10878));
    bufp->chgBit(oldp+1176,(vlSelf->_cp___05Fs10877));
    bufp->chgBit(oldp+1177,(vlSelf->_mc___05Fs3407));
    bufp->chgBit(oldp+1178,(vlSelf->_cp___05Fs10876));
    bufp->chgBit(oldp+1179,(vlSelf->_cp___05Fs10797));
    bufp->chgBit(oldp+1180,(vlSelf->_cp___05Fs10836));
    bufp->chgCData(oldp+1181,(vlSelf->_rs___05Fs3587),2);
    bufp->chgBit(oldp+1182,(vlSelf->_cp___05Fs5804));
    bufp->chgCData(oldp+1183,(vlSelf->_mc___05Fs682),3);
    bufp->chgBit(oldp+1184,(vlSelf->_cp___05Fs5817));
    bufp->chgBit(oldp+1185,(vlSelf->_cp___05Fs5815));
    bufp->chgBit(oldp+1186,(vlSelf->_cp___05Fs6991));
    bufp->chgQData(oldp+1187,((((IData)(vlSelf->_mc___05Fs92)
                                 ? (((QData)((IData)(
                                                     vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                                     << 0x23U) | (((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                                   << 3U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                                     >> 0x1dU)))
                                 : 0ULL) | ((IData)(vlSelf->_mc___05Fs93)
                                             ? (((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                                                 << 0x2cU) 
                                                | (((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                                    << 0xcU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                                      >> 0x14U)))
                                             : 0ULL))),64);
    bufp->chgBit(oldp+1189,(vlSelf->_cp___05Fs7012));
    bufp->chgBit(oldp+1190,((1U & (~ (IData)(vlSelf->_mc___05Fs3402)))));
    bufp->chgBit(oldp+1191,(vlSelf->_cp___05Fs1351));
    bufp->chgBit(oldp+1192,(vlSelf->_cp___05Fs1368));
    bufp->chgBit(oldp+1193,(vlSelf->_cp___05Fs10602));
    bufp->chgBit(oldp+1194,(vlSelf->_cp___05Fs5691));
    bufp->chgBit(oldp+1195,(((IData)(vlSelf->_mc___05Fs859) 
                             | (((IData)(vlSelf->_mc___05Fs860) 
                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__user_amba_prot_bufferable)) 
                                | (((IData)(vlSelf->_mc___05Fs861) 
                                    & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__user_amba_prot_bufferable)) 
                                   | (((IData)(vlSelf->_mc___05Fs862) 
                                       & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__user_amba_prot_bufferable)) 
                                      | ((IData)(vlSelf->_mc___05Fs863) 
                                         & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__user_amba_prot_bufferable))))))));
    bufp->chgBit(oldp+1196,(((IData)(vlSelf->_mc___05Fs859) 
                             | (((IData)(vlSelf->_mc___05Fs860) 
                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__user_amba_prot_modifiable)) 
                                | (((IData)(vlSelf->_mc___05Fs861) 
                                    & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__user_amba_prot_modifiable)) 
                                   | (((IData)(vlSelf->_mc___05Fs862) 
                                       & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__user_amba_prot_modifiable)) 
                                      | ((IData)(vlSelf->_mc___05Fs863) 
                                         & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__user_amba_prot_modifiable))))))));
    bufp->chgBit(oldp+1197,(((IData)(vlSelf->_mc___05Fs859) 
                             | (((IData)(vlSelf->_mc___05Fs860) 
                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__user_amba_prot_readalloc)) 
                                | (((IData)(vlSelf->_mc___05Fs861) 
                                    & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__user_amba_prot_readalloc)) 
                                   | (((IData)(vlSelf->_mc___05Fs862) 
                                       & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__user_amba_prot_readalloc)) 
                                      | ((IData)(vlSelf->_mc___05Fs863) 
                                         & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__user_amba_prot_readalloc))))))));
    bufp->chgBit(oldp+1198,(((IData)(vlSelf->_mc___05Fs859) 
                             | (((IData)(vlSelf->_mc___05Fs860) 
                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__user_amba_prot_writealloc)) 
                                | (((IData)(vlSelf->_mc___05Fs861) 
                                    & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__user_amba_prot_writealloc)) 
                                   | (((IData)(vlSelf->_mc___05Fs862) 
                                       & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__user_amba_prot_writealloc)) 
                                      | ((IData)(vlSelf->_mc___05Fs863) 
                                         & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__user_amba_prot_writealloc))))))));
    bufp->chgBit(oldp+1199,(((IData)(vlSelf->_mc___05Fs859) 
                             | (((IData)(vlSelf->_mc___05Fs860) 
                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__user_amba_prot_privileged)) 
                                | (((IData)(vlSelf->_mc___05Fs861) 
                                    & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__user_amba_prot_privileged)) 
                                   | (((IData)(vlSelf->_mc___05Fs862) 
                                       & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__user_amba_prot_privileged)) 
                                      | ((IData)(vlSelf->_mc___05Fs863) 
                                         & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__user_amba_prot_privileged))))))));
    bufp->chgBit(oldp+1200,(((IData)(vlSelf->_mc___05Fs859) 
                             | (((IData)(vlSelf->_mc___05Fs860) 
                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__user_amba_prot_secure)) 
                                | (((IData)(vlSelf->_mc___05Fs861) 
                                    & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__user_amba_prot_secure)) 
                                   | (((IData)(vlSelf->_mc___05Fs862) 
                                       & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__user_amba_prot_secure)) 
                                      | ((IData)(vlSelf->_mc___05Fs863) 
                                         & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__user_amba_prot_secure))))))));
    bufp->chgBit(oldp+1201,((((IData)(vlSelf->_mc___05Fs860) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__user_amba_prot_fetch)) 
                             | (((IData)(vlSelf->_mc___05Fs861) 
                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__user_amba_prot_fetch)) 
                                | (((IData)(vlSelf->_mc___05Fs862) 
                                    & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__user_amba_prot_fetch)) 
                                   | ((IData)(vlSelf->_mc___05Fs863) 
                                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__user_amba_prot_fetch)))))));
    bufp->chgBit(oldp+1202,(vlSelf->_cp___05Fs5955));
    bufp->chgBit(oldp+1203,(vlSelf->_cp___05Fs1251));
    bufp->chgCData(oldp+1204,(vlSelf->_rs___05Fs1473),2);
    bufp->chgBit(oldp+1205,(vlSelf->_cp___05Fs7104));
    bufp->chgBit(oldp+1206,(vlSelf->_cp___05Fs7117));
    bufp->chgBit(oldp+1207,(vlSelf->_cp___05Fs7115));
    bufp->chgBit(oldp+1208,(vlSelf->_mc___05Fs894));
    bufp->chgBit(oldp+1209,(vlSelf->_mc___05Fs896));
    bufp->chgBit(oldp+1210,(vlSelf->_cp___05Fs5807));
    bufp->chgBit(oldp+1211,(vlSelf->_cp___05Fs7800));
    bufp->chgBit(oldp+1212,(vlSelf->_mc___05Fs899));
    bufp->chgBit(oldp+1213,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_a_ready) 
                             & ((IData)(vlSelf->_mc___05Fs853) 
                                | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1_0)))));
    bufp->chgBit(oldp+1214,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT___sbus_auto_coupler_to_bus_named_coh_widget_anon_out_d_ready) 
                             & ((IData)(vlSelf->_mc___05Fs837) 
                                | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_0)))));
    bufp->chgBit(oldp+1215,(vlSelf->_mc___05Fs816));
    bufp->chgBit(oldp+1216,(((1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__counter)) 
                             | (0U == ((IData)(vlSelf->_mc___05Fs815)
                                        ? (7U & (~ 
                                                 (0x3ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_d_bits_size)) 
                                                     >> 3U))))
                                        : 0U)))));
    bufp->chgBit(oldp+1217,((1U & ((~ (IData)(vlSelf->_cp___05Fs7552)) 
                                   | (IData)(vlSelf->_mc___05Fs682)))));
    bufp->chgBit(oldp+1218,(vlSelf->_cp___05Fs1356));
    bufp->chgBit(oldp+1219,(vlSelf->_cp___05Fs1369));
    bufp->chgBit(oldp+1220,(vlSelf->_mc___05Fs828));
    bufp->chgBit(oldp+1221,(vlSelf->_mc___05Fs823));
    bufp->chgBit(oldp+1222,(vlSelf->_mc___05Fs824));
    bufp->chgBit(oldp+1223,(vlSelf->_mc___05Fs825));
    bufp->chgBit(oldp+1224,(vlSelf->_mc___05Fs826));
    bufp->chgBit(oldp+1225,(vlSelf->_mc___05Fs830));
    bufp->chgBit(oldp+1226,(vlSelf->_mc___05Fs834));
    bufp->chgBit(oldp+1227,(vlSelf->_mc___05Fs847));
    bufp->chgBit(oldp+1228,(vlSelf->_mc___05Fs837));
    bufp->chgBit(oldp+1229,(vlSelf->_mc___05Fs836));
    bufp->chgBit(oldp+1230,(vlSelf->_mc___05Fs835));
    bufp->chgBit(oldp+1231,(vlSelf->_mc___05Fs840));
    bufp->chgBit(oldp+1232,(vlSelf->_mc___05Fs841));
    bufp->chgBit(oldp+1233,(vlSelf->_mc___05Fs853));
    bufp->chgBit(oldp+1234,(vlSelf->_mc___05Fs852));
    bufp->chgBit(oldp+1235,(vlSelf->_mc___05Fs848));
    bufp->chgBit(oldp+1236,(vlSelf->_mc___05Fs849));
    bufp->chgBit(oldp+1237,(vlSelf->_mc___05Fs850));
    bufp->chgBit(oldp+1238,(vlSelf->_mc___05Fs851));
    bufp->chgBit(oldp+1239,(vlSelf->_mc___05Fs859));
    bufp->chgBit(oldp+1240,(vlSelf->_mc___05Fs860));
    bufp->chgBit(oldp+1241,(vlSelf->_mc___05Fs861));
    bufp->chgBit(oldp+1242,(vlSelf->_mc___05Fs862));
    bufp->chgBit(oldp+1243,(vlSelf->_mc___05Fs863));
    bufp->chgBit(oldp+1244,(vlSelf->_mc___05Fs870));
    bufp->chgBit(oldp+1245,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_a_ready) 
                             & ((IData)(vlSelf->_mc___05Fs853)
                                 ? (~ (IData)(vlSelf->_mc___05Fs847))
                                 : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1_1)))));
    bufp->chgBit(oldp+1246,(vlSelf->_cp___05Fs7486));
    bufp->chgBit(oldp+1247,(vlSelf->_cp___05Fs7496));
    bufp->chgBit(oldp+1248,(vlSelf->_cp___05Fs7487));
    bufp->chgBit(oldp+1249,(vlSelf->_cp___05Fs7490));
    bufp->chgBit(oldp+1250,(((IData)(vlSelf->_mc___05Fs823) 
                             & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT____VdfgTmp_hd997d447__0))));
    bufp->chgCData(oldp+1251,(((IData)(vlSelf->_mc___05Fs802)
                                ? 0U : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__param))),3);
    bufp->chgCData(oldp+1252,(vlSelf->_rs___05Fs1387),3);
    bufp->chgCData(oldp+1253,(((((IData)(vlSelf->_mc___05Fs802)
                                  ? (2U | (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__shared))))
                                  : 0U) << 5U) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker__DOT__source))),7);
    bufp->chgIData(oldp+1254,(vlSelf->_rs___05Fs1396),32);
    bufp->chgBit(oldp+1255,(vlSelf->_rs___05Fs1389));
    bufp->chgBit(oldp+1256,(vlSelf->_rs___05Fs1390));
    bufp->chgBit(oldp+1257,(vlSelf->_rs___05Fs1391));
    bufp->chgBit(oldp+1258,(vlSelf->_rs___05Fs1392));
    bufp->chgBit(oldp+1259,(vlSelf->_rs___05Fs1393));
    bufp->chgBit(oldp+1260,(vlSelf->_rs___05Fs1394));
    bufp->chgBit(oldp+1261,(vlSelf->_rs___05Fs1395));
    bufp->chgCData(oldp+1262,(vlSelf->_rs___05Fs1388),5);
    bufp->chgBit(oldp+1263,(vlSelf->_mc___05Fs802));
    bufp->chgBit(oldp+1264,(((IData)(vlSelf->_cp___05Fs7495) 
                             & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_a_ready) 
                                & ((IData)(vlSelf->_mc___05Fs853)
                                    ? (~ (IData)(vlSelf->_mc___05Fs847))
                                    : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1_1))))));
    bufp->chgBit(oldp+1265,((1U & (~ (IData)(vlSelf->_mc___05Fs799)))));
    bufp->chgBit(oldp+1266,(vlSelf->_mc___05Fs799));
    bufp->chgBit(oldp+1267,(vlSelf->_cp___05Fs7480));
    bufp->chgBit(oldp+1268,(vlSelf->_cp___05Fs7481));
    bufp->chgBit(oldp+1269,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_a_ready) 
                             & ((IData)(vlSelf->_mc___05Fs853)
                                 ? (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_14))
                                 : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1_2)))));
    bufp->chgBit(oldp+1270,(vlSelf->_cp___05Fs7503));
    bufp->chgBit(oldp+1271,(vlSelf->_cp___05Fs7513));
    bufp->chgBit(oldp+1272,(vlSelf->_cp___05Fs7504));
    bufp->chgBit(oldp+1273,(vlSelf->_cp___05Fs7507));
    bufp->chgBit(oldp+1274,(((IData)(vlSelf->_mc___05Fs824) 
                             & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT____VdfgTmp_hd997d447__0))));
    bufp->chgCData(oldp+1275,(((IData)(vlSelf->_mc___05Fs806)
                                ? 0U : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__param))),3);
    bufp->chgCData(oldp+1276,(vlSelf->_rs___05Fs1407),3);
    bufp->chgCData(oldp+1277,(((((IData)(vlSelf->_mc___05Fs806)
                                  ? (2U | (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__shared))))
                                  : 0U) << 5U) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_1__DOT__source))),7);
    bufp->chgIData(oldp+1278,(vlSelf->_rs___05Fs1416),32);
    bufp->chgBit(oldp+1279,(vlSelf->_rs___05Fs1409));
    bufp->chgBit(oldp+1280,(vlSelf->_rs___05Fs1410));
    bufp->chgBit(oldp+1281,(vlSelf->_rs___05Fs1411));
    bufp->chgBit(oldp+1282,(vlSelf->_rs___05Fs1412));
    bufp->chgBit(oldp+1283,(vlSelf->_rs___05Fs1413));
    bufp->chgBit(oldp+1284,(vlSelf->_rs___05Fs1414));
    bufp->chgBit(oldp+1285,(vlSelf->_rs___05Fs1415));
    bufp->chgCData(oldp+1286,(vlSelf->_rs___05Fs1408),5);
    bufp->chgBit(oldp+1287,(vlSelf->_mc___05Fs806));
    bufp->chgBit(oldp+1288,(((IData)(vlSelf->_cp___05Fs7512) 
                             & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_a_ready) 
                                & ((IData)(vlSelf->_mc___05Fs853)
                                    ? (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_14))
                                    : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1_2))))));
    bufp->chgBit(oldp+1289,((1U & (~ (IData)(vlSelf->_mc___05Fs803)))));
    bufp->chgBit(oldp+1290,(vlSelf->_mc___05Fs803));
    bufp->chgBit(oldp+1291,(vlSelf->_cp___05Fs7497));
    bufp->chgBit(oldp+1292,(vlSelf->_cp___05Fs7498));
    bufp->chgBit(oldp+1293,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_a_ready) 
                             & ((IData)(vlSelf->_mc___05Fs853)
                                 ? (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_16))
                                 : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1_3)))));
    bufp->chgBit(oldp+1294,(vlSelf->_cp___05Fs7520));
    bufp->chgBit(oldp+1295,(vlSelf->_cp___05Fs7530));
    bufp->chgBit(oldp+1296,(vlSelf->_cp___05Fs7521));
    bufp->chgBit(oldp+1297,(vlSelf->_cp___05Fs7524));
    bufp->chgBit(oldp+1298,(((IData)(vlSelf->_mc___05Fs825) 
                             & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT____VdfgTmp_hd997d447__0))));
    bufp->chgCData(oldp+1299,(((IData)(vlSelf->_mc___05Fs810)
                                ? 0U : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__param))),3);
    bufp->chgCData(oldp+1300,(vlSelf->_rs___05Fs1427),3);
    bufp->chgCData(oldp+1301,(((((IData)(vlSelf->_mc___05Fs810)
                                  ? (2U | (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__shared))))
                                  : 0U) << 5U) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_2__DOT__source))),7);
    bufp->chgIData(oldp+1302,(vlSelf->_rs___05Fs1436),32);
    bufp->chgBit(oldp+1303,(vlSelf->_rs___05Fs1429));
    bufp->chgBit(oldp+1304,(vlSelf->_rs___05Fs1430));
    bufp->chgBit(oldp+1305,(vlSelf->_rs___05Fs1431));
    bufp->chgBit(oldp+1306,(vlSelf->_rs___05Fs1432));
    bufp->chgBit(oldp+1307,(vlSelf->_rs___05Fs1433));
    bufp->chgBit(oldp+1308,(vlSelf->_rs___05Fs1434));
    bufp->chgBit(oldp+1309,(vlSelf->_rs___05Fs1435));
    bufp->chgCData(oldp+1310,(vlSelf->_rs___05Fs1428),5);
    bufp->chgBit(oldp+1311,(vlSelf->_mc___05Fs810));
    bufp->chgBit(oldp+1312,(((IData)(vlSelf->_cp___05Fs7529) 
                             & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_a_ready) 
                                & ((IData)(vlSelf->_mc___05Fs853)
                                    ? (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_16))
                                    : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1_3))))));
    bufp->chgBit(oldp+1313,((1U & (~ (IData)(vlSelf->_mc___05Fs807)))));
    bufp->chgBit(oldp+1314,(vlSelf->_mc___05Fs807));
    bufp->chgBit(oldp+1315,(vlSelf->_cp___05Fs7514));
    bufp->chgBit(oldp+1316,(vlSelf->_cp___05Fs7515));
    bufp->chgBit(oldp+1317,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_a_ready) 
                             & ((IData)(vlSelf->_mc___05Fs853)
                                 ? (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_15))
                                 : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1_4)))));
    bufp->chgBit(oldp+1318,(vlSelf->_cp___05Fs7537));
    bufp->chgBit(oldp+1319,(vlSelf->_cp___05Fs7547));
    bufp->chgBit(oldp+1320,(vlSelf->_cp___05Fs7538));
    bufp->chgBit(oldp+1321,(vlSelf->_cp___05Fs7541));
    bufp->chgBit(oldp+1322,(((IData)(vlSelf->_mc___05Fs826) 
                             & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT____VdfgTmp_hd997d447__0))));
    bufp->chgCData(oldp+1323,(((IData)(vlSelf->_mc___05Fs814)
                                ? 0U : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__param))),3);
    bufp->chgCData(oldp+1324,(vlSelf->_rs___05Fs1447),3);
    bufp->chgCData(oldp+1325,(((((IData)(vlSelf->_mc___05Fs814)
                                  ? (2U | (1U & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__shared))))
                                  : 0U) << 5U) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__TLBroadcastTracker_3__DOT__source))),7);
    bufp->chgIData(oldp+1326,(vlSelf->_rs___05Fs1456),32);
    bufp->chgBit(oldp+1327,(vlSelf->_rs___05Fs1449));
    bufp->chgBit(oldp+1328,(vlSelf->_rs___05Fs1450));
    bufp->chgBit(oldp+1329,(vlSelf->_rs___05Fs1451));
    bufp->chgBit(oldp+1330,(vlSelf->_rs___05Fs1452));
    bufp->chgBit(oldp+1331,(vlSelf->_rs___05Fs1453));
    bufp->chgBit(oldp+1332,(vlSelf->_rs___05Fs1454));
    bufp->chgBit(oldp+1333,(vlSelf->_rs___05Fs1455));
    bufp->chgCData(oldp+1334,(vlSelf->_rs___05Fs1448),5);
    bufp->chgBit(oldp+1335,(vlSelf->_mc___05Fs814));
    bufp->chgBit(oldp+1336,(((IData)(vlSelf->_cp___05Fs7546) 
                             & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeIn_a_ready) 
                                & ((IData)(vlSelf->_mc___05Fs853)
                                    ? (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_15))
                                    : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT__state_1_4))))));
    bufp->chgBit(oldp+1337,((1U & (~ (IData)(vlSelf->_mc___05Fs811)))));
    bufp->chgBit(oldp+1338,(vlSelf->_mc___05Fs811));
    bufp->chgBit(oldp+1339,(vlSelf->_cp___05Fs7531));
    bufp->chgBit(oldp+1340,(vlSelf->_cp___05Fs7532));
    bufp->chgBit(oldp+1341,(((IData)(vlSelf->_cp___05Fs6991) 
                             & ((IData)(vlSelf->_mc___05Fs870) 
                                & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__coh_wrapper__DOT__broadcast_1__DOT___GEN_26))))));
    bufp->chgBit(oldp+1342,(vlSelf->_mc___05Fs885));
    bufp->chgBit(oldp+1343,(vlSelf->_cp___05Fs10595));
    bufp->chgBit(oldp+1344,(vlSelf->_mc___05Fs790));
    bufp->chgBit(oldp+1345,(vlSelf->_mc___05Fs792));
    bufp->chgBit(oldp+1346,(vlSelf->_cp___05Fs7107));
    bufp->chgBit(oldp+1347,(vlSelf->_cp___05Fs7431));
    bufp->chgBit(oldp+1348,(vlSelf->_mc___05Fs794));
    bufp->chgBit(oldp+1349,(vlSelf->_mc___05Fs796));
    bufp->chgBit(oldp+1350,(vlSelf->_cp___05Fs7459));
    bufp->chgBit(oldp+1351,(vlSelf->_mc___05Fs798));
    bufp->chgBit(oldp+1352,(vlSelf->_cp___05Fs1991));
    bufp->chgBit(oldp+1353,(vlSelf->_cp___05Fs2012));
    bufp->chgBit(oldp+1354,(vlSelf->_cp___05Fs2255));
    bufp->chgBit(oldp+1355,(vlSelf->_cp___05Fs114));
    bufp->chgBit(oldp+1356,(vlSelf->_cp___05Fs127));
    bufp->chgQData(oldp+1357,((((IData)(vlSelf->_mc___05Fs110)
                                 ? vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_bus_xing_in_d_bits_data
                                 : 0ULL) | (((IData)(vlSelf->_mc___05Fs111)
                                              ? vlSelf->TestHarness__DOT__ldut__DOT___coh_wrapper_auto_coherent_jbar_anon_in_d_bits_data
                                              : 0ULL) 
                                            | ((IData)(vlSelf->_mc___05Fs112)
                                                ? vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4index_auto_in_r_bits_data
                                                : 0ULL)))),64);
    bufp->chgBit(oldp+1359,(vlSelf->_cp___05Fs125));
    bufp->chgBit(oldp+1360,((1U & (~ (IData)(vlSelf->_mc___05Fs250)))));
    bufp->chgBit(oldp+1361,(vlSelf->_cp___05Fs2104));
    bufp->chgBit(oldp+1362,(vlSelf->_cp___05Fs2117));
    bufp->chgBit(oldp+1363,(vlSelf->_cp___05Fs2115));
    bufp->chgBit(oldp+1364,(vlSelf->_cp___05Fs796));
    bufp->chgBit(oldp+1365,(vlSelf->_cp___05Fs113));
    bufp->chgBit(oldp+1366,(vlSelf->_cp___05Fs1060));
    bufp->chgBit(oldp+1367,(vlSelf->_mc___05Fs244));
    bufp->chgBit(oldp+1368,(vlSelf->_mc___05Fs246));
    bufp->chgBit(oldp+1369,(vlSelf->_cp___05Fs2107));
    bufp->chgBit(oldp+1370,(vlSelf->_cp___05Fs2220));
    bufp->chgBit(oldp+1371,(vlSelf->_mc___05Fs249));
    bufp->chgBit(oldp+1372,(vlSelf->_mc___05Fs251));
    bufp->chgBit(oldp+1373,(vlSelf->_cp___05Fs1015));
    bufp->chgBit(oldp+1374,(vlSelf->_cp___05Fs2266));
    __Vtemp_17[0U] = (((IData)((((IData)(vlSelf->_mc___05Fs110)
                                  ? vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_bus_xing_in_d_bits_data
                                  : 0ULL) | (((IData)(vlSelf->_mc___05Fs111)
                                               ? vlSelf->TestHarness__DOT__ldut__DOT___coh_wrapper_auto_coherent_jbar_anon_in_d_bits_data
                                               : 0ULL) 
                                             | ((IData)(vlSelf->_mc___05Fs112)
                                                 ? vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4index_auto_in_r_bits_data
                                                 : 0ULL)))) 
                       << 0x10U) | (((IData)(vlSelf->_cp___05Fs127) 
                                     << 0xfU) | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__in_0_d_bits_sink) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__anonIn_d_bits_source) 
                                                     << 9U) 
                                                    | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__in_0_d_bits_size) 
                                                        << 5U) 
                                                       | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__in_0_d_bits_param) 
                                                           << 3U) 
                                                          | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__in_0_d_bits_opcode)))))));
    __Vtemp_17[1U] = (((IData)((((IData)(vlSelf->_mc___05Fs110)
                                  ? vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_bus_xing_in_d_bits_data
                                  : 0ULL) | (((IData)(vlSelf->_mc___05Fs111)
                                               ? vlSelf->TestHarness__DOT__ldut__DOT___coh_wrapper_auto_coherent_jbar_anon_in_d_bits_data
                                               : 0ULL) 
                                             | ((IData)(vlSelf->_mc___05Fs112)
                                                 ? vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4index_auto_in_r_bits_data
                                                 : 0ULL)))) 
                       >> 0x10U) | ((IData)(((((IData)(vlSelf->_mc___05Fs110)
                                                ? vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_bus_xing_in_d_bits_data
                                                : 0ULL) 
                                              | (((IData)(vlSelf->_mc___05Fs111)
                                                   ? vlSelf->TestHarness__DOT__ldut__DOT___coh_wrapper_auto_coherent_jbar_anon_in_d_bits_data
                                                   : 0ULL) 
                                                 | ((IData)(vlSelf->_mc___05Fs112)
                                                     ? vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4index_auto_in_r_bits_data
                                                     : 0ULL))) 
                                             >> 0x20U)) 
                                    << 0x10U));
    __Vtemp_17[2U] = (((IData)(vlSelf->_cp___05Fs125) 
                       << 0x10U) | ((IData)(((((IData)(vlSelf->_mc___05Fs110)
                                                ? vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_bus_xing_in_d_bits_data
                                                : 0ULL) 
                                              | (((IData)(vlSelf->_mc___05Fs111)
                                                   ? vlSelf->TestHarness__DOT__ldut__DOT___coh_wrapper_auto_coherent_jbar_anon_in_d_bits_data
                                                   : 0ULL) 
                                                 | ((IData)(vlSelf->_mc___05Fs112)
                                                     ? vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4index_auto_in_r_bits_data
                                                     : 0ULL))) 
                                             >> 0x20U)) 
                                    >> 0x10U));
    bufp->chgWData(oldp+1375,(__Vtemp_17),81);
    bufp->chgBit(oldp+1378,(vlSelf->_mc___05Fs250));
    bufp->chgBit(oldp+1379,(vlSelf->_cp___05Fs2181));
    bufp->chgBit(oldp+1380,(vlSelf->_cp___05Fs1014));
    bufp->chgBit(oldp+1381,((1U & (~ (IData)(vlSelf->_mc___05Fs316)))));
    bufp->chgBit(oldp+1382,(vlSelf->_cp___05Fs2825));
    bufp->chgBit(oldp+1383,(vlSelf->_cp___05Fs2381));
    bufp->chgBit(oldp+1384,(vlSelf->_cp___05Fs2394));
    bufp->chgBit(oldp+1385,(vlSelf->_cp___05Fs2392));
    bufp->chgBit(oldp+1386,((1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__nodeIn_r_deq_q__DOT__full)
                                    ? (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__nodeIn_r_deq_q__DOT__ram[2U] 
                                       >> 3U) : ((1U 
                                                  == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__d_last_counter)) 
                                                 | (0U 
                                                    == 
                                                    ((IData)(vlSelf->_mc___05Fs254)
                                                      ? 
                                                     (0x1ffU 
                                                      & (~ 
                                                         (0xffffffU 
                                                          & (((IData)(0xfffU) 
                                                              << 
                                                              (0xfU 
                                                               & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 5U))) 
                                                             >> 3U))))
                                                      : 0U)))))));
    bufp->chgBit(oldp+1387,(vlSelf->_cp___05Fs2545));
    bufp->chgBit(oldp+1388,((((IData)(vlSelf->_mc___05Fs292) 
                              & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q__DOT__full) 
                                 & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q__DOT__ram[1U] 
                                    >> 0xfU))) | ((IData)(vlSelf->_mc___05Fs293) 
                                                  & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q_1__DOT__full) 
                                                     & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q_1__DOT__ram[1U] 
                                                        >> 0xfU))))));
    bufp->chgBit(oldp+1389,((((IData)(vlSelf->_mc___05Fs292) 
                              & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q__DOT__full) 
                                 & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q__DOT__ram[1U] 
                                    >> 0x10U))) | ((IData)(vlSelf->_mc___05Fs293) 
                                                   & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q_1__DOT__full) 
                                                      & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q_1__DOT__ram[1U] 
                                                         >> 0x10U))))));
    bufp->chgBit(oldp+1390,((((IData)(vlSelf->_mc___05Fs292) 
                              & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q__DOT__full) 
                                 & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q__DOT__ram[1U] 
                                    >> 0x11U))) | ((IData)(vlSelf->_mc___05Fs293) 
                                                   & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q_1__DOT__full) 
                                                      & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q_1__DOT__ram[1U] 
                                                         >> 0x11U))))));
    bufp->chgBit(oldp+1391,((((IData)(vlSelf->_mc___05Fs292) 
                              & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q__DOT__full) 
                                 & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q__DOT__ram[1U] 
                                    >> 0x12U))) | ((IData)(vlSelf->_mc___05Fs293) 
                                                   & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q_1__DOT__full) 
                                                      & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q_1__DOT__ram[1U] 
                                                         >> 0x12U))))));
    bufp->chgBit(oldp+1392,((((IData)(vlSelf->_mc___05Fs292) 
                              & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q__DOT__full) 
                                 & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q__DOT__ram[1U] 
                                    >> 0x13U))) | ((IData)(vlSelf->_mc___05Fs293) 
                                                   & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q_1__DOT__full) 
                                                      & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q_1__DOT__ram[1U] 
                                                         >> 0x13U))))));
    bufp->chgBit(oldp+1393,((((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q__DOT__full) 
                                  & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q__DOT__ram[1U] 
                                     >> 0x14U))) & (IData)(vlSelf->_mc___05Fs292)) 
                             | ((~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q_1__DOT__full) 
                                    & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q_1__DOT__ram[1U] 
                                       >> 0x14U))) 
                                & (IData)(vlSelf->_mc___05Fs293)))));
    bufp->chgBit(oldp+1394,((((IData)(vlSelf->_mc___05Fs292) 
                              & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q__DOT__full) 
                                 & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q__DOT__ram[1U] 
                                    >> 0x15U))) | ((IData)(vlSelf->_mc___05Fs293) 
                                                   & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q_1__DOT__full) 
                                                      & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__deq_q_1__DOT__ram[1U] 
                                                         >> 0x15U))))));
    bufp->chgQData(oldp+1395,(((IData)(vlSelf->_mc___05Fs293)
                                ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__in_w_deq_q__DOT__full)
                                    ? (((QData)((IData)(
                                                        vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__in_w_deq_q__DOT__ram[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__in_w_deq_q__DOT__ram[0U])))
                                    : 0ULL) : 0ULL)),64);
    bufp->chgBit(oldp+1397,(vlSelf->_cp___05Fs2532));
    bufp->chgBit(oldp+1398,(vlSelf->_mc___05Fs284));
    bufp->chgBit(oldp+1399,(vlSelf->_mc___05Fs285));
    bufp->chgBit(oldp+1400,(vlSelf->_mc___05Fs289));
    bufp->chgBit(oldp+1401,(vlSelf->_mc___05Fs288));
    bufp->chgBit(oldp+1402,(vlSelf->_mc___05Fs286));
    bufp->chgBit(oldp+1403,(vlSelf->_mc___05Fs287));
    bufp->chgBit(oldp+1404,(vlSelf->_mc___05Fs292));
    bufp->chgBit(oldp+1405,(vlSelf->_mc___05Fs293));
    bufp->chgCData(oldp+1406,(((IData)(vlSelf->_mc___05Fs294) 
                               << 1U)),2);
    bufp->chgBit(oldp+1407,(vlSelf->_mc___05Fs296));
    bufp->chgBit(oldp+1408,(vlSelf->_cp___05Fs2827));
    bufp->chgBit(oldp+1409,(((1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__d_last_counter)) 
                             | (0U == ((IData)(vlSelf->_mc___05Fs254)
                                        ? (0x1ffU & 
                                           (~ (0xffffffU 
                                               & (((IData)(0xfffU) 
                                                   << 
                                                   (0xfU 
                                                    & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 5U))) 
                                                  >> 3U))))
                                        : 0U)))));
    bufp->chgBit(oldp+1410,(vlSelf->_cp___05Fs2828));
    bufp->chgBit(oldp+1411,(vlSelf->_cp___05Fs2824));
    bufp->chgBit(oldp+1412,(vlSelf->_cp___05Fs2833));
    bufp->chgBit(oldp+1413,(vlSelf->_cp___05Fs2835));
    bufp->chgBit(oldp+1414,(vlSelf->_cp___05Fs2834));
    bufp->chgBit(oldp+1415,(vlSelf->_cp___05Fs2830));
    bufp->chgBit(oldp+1416,(vlSelf->_cp___05Fs2831));
    bufp->chgBit(oldp+1417,(vlSelf->_cp___05Fs2878));
    bufp->chgBit(oldp+1418,(vlSelf->_cp___05Fs2884));
    bufp->chgBit(oldp+1419,(vlSelf->_cp___05Fs2872));
    bufp->chgBit(oldp+1420,(vlSelf->_mc___05Fs316));
    bufp->chgBit(oldp+1421,(vlSelf->_mc___05Fs302));
    bufp->chgBit(oldp+1422,(vlSelf->_mc___05Fs315));
    bufp->chgBit(oldp+1423,(vlSelf->_mc___05Fs314));
    bufp->chgBit(oldp+1424,(vlSelf->_cp___05Fs2891));
    bufp->chgBit(oldp+1425,(vlSelf->_mc___05Fs308));
    bufp->chgBit(oldp+1426,(vlSelf->_cp___05Fs2894));
    bufp->chgBit(oldp+1427,(vlSelf->_mc___05Fs313));
    bufp->chgBit(oldp+1428,(vlSelf->_cp___05Fs2877));
    bufp->chgBit(oldp+1429,(vlSelf->_cp___05Fs2873));
    bufp->chgBit(oldp+1430,(vlSelf->_cp___05Fs2883));
    bufp->chgBit(oldp+1431,(vlSelf->_mc___05Fs303));
    bufp->chgBit(oldp+1432,(vlSelf->_cp___05Fs2879));
    bufp->chgBit(oldp+1433,(vlSelf->_cp___05Fs2889));
    bufp->chgBit(oldp+1434,(vlSelf->_mc___05Fs304));
    bufp->chgBit(oldp+1435,(vlSelf->_cp___05Fs2885));
    bufp->chgBit(oldp+1436,((1U & (~ (IData)(vlSelf->_mc___05Fs298)))));
    bufp->chgBit(oldp+1437,(vlSelf->_mc___05Fs298));
    bufp->chgBit(oldp+1438,(vlSelf->_cp___05Fs2856));
    bufp->chgBit(oldp+1439,((1U & (~ (IData)(vlSelf->_mc___05Fs299)))));
    bufp->chgBit(oldp+1440,(vlSelf->_mc___05Fs299));
    bufp->chgBit(oldp+1441,(vlSelf->_cp___05Fs2859));
    bufp->chgBit(oldp+1442,(vlSelf->_cp___05Fs2854));
    bufp->chgBit(oldp+1443,((1U & (~ (IData)(vlSelf->_mc___05Fs300)))));
    bufp->chgBit(oldp+1444,(vlSelf->_mc___05Fs300));
    bufp->chgBit(oldp+1445,(vlSelf->_cp___05Fs2862));
    bufp->chgBit(oldp+1446,(vlSelf->_cp___05Fs2863));
    bufp->chgBit(oldp+1447,(vlSelf->_cp___05Fs2855));
    bufp->chgBit(oldp+1448,((1U & (~ (IData)(vlSelf->_mc___05Fs301)))));
    bufp->chgBit(oldp+1449,(vlSelf->_mc___05Fs301));
    bufp->chgBit(oldp+1450,(vlSelf->_cp___05Fs2865));
    bufp->chgBit(oldp+1451,(vlSelf->_cp___05Fs2866));
    bufp->chgBit(oldp+1452,(vlSelf->_cp___05Fs2268));
    bufp->chgBit(oldp+1453,((1U & (~ (IData)(vlSelf->_mc___05Fs263)))));
    bufp->chgBit(oldp+1454,(vlSelf->_mc___05Fs257));
    bufp->chgBit(oldp+1455,(vlSelf->_mc___05Fs259));
    bufp->chgBit(oldp+1456,(vlSelf->_cp___05Fs2384));
    bufp->chgBit(oldp+1457,(vlSelf->_cp___05Fs2497));
    bufp->chgBit(oldp+1458,(vlSelf->_mc___05Fs262));
    bufp->chgBit(oldp+1459,(vlSelf->_mc___05Fs264));
    bufp->chgBit(oldp+1460,(vlSelf->_cp___05Fs2194));
    bufp->chgBit(oldp+1461,(vlSelf->_cp___05Fs2471));
    bufp->chgBit(oldp+1462,(vlSelf->_mc___05Fs263));
    bufp->chgBit(oldp+1463,(vlSelf->_cp___05Fs2458));
    bufp->chgBit(oldp+1464,(vlSelf->_cp___05Fs2540));
    bufp->chgBit(oldp+1465,(vlSelf->_mc___05Fs279));
    bufp->chgBit(oldp+1466,(vlSelf->_mc___05Fs281));
    bufp->chgBit(oldp+1467,(vlSelf->_mc___05Fs270));
    bufp->chgBit(oldp+1468,(vlSelf->_mc___05Fs272));
    bufp->chgBit(oldp+1469,(vlSelf->_cp___05Fs2774));
    bufp->chgBit(oldp+1470,(vlSelf->_mc___05Fs275));
    bufp->chgBit(oldp+1471,(vlSelf->_rs___05Fs0));
    bufp->chgBit(oldp+1472,(vlSelf->_rs___05Fs3));
    bufp->chgCData(oldp+1473,(vlSelf->_rs___05Fs6),2);
    bufp->chgBit(oldp+1474,(vlSelf->_cp___05Fs5685));
    bufp->chgBit(oldp+1475,(vlSelf->_mc___05Fs684));
    bufp->chgBit(oldp+1476,(vlSelf->_cp___05Fs5686));
    bufp->chgBit(oldp+1477,(vlSelf->_mc___05Fs686));
    bufp->chgBit(oldp+1478,(vlSelf->_cp___05Fs5687));
    bufp->chgBit(oldp+1479,(vlSelf->_cp___05Fs5688));
    bufp->chgBit(oldp+1480,(((IData)(vlSelf->_cp___05Fs13736) 
                             & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT____VdfgTmp_h34077eac__0))));
    bufp->chgBit(oldp+1481,(((IData)(vlSelf->_cp___05Fs13730) 
                             & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT____VdfgTmp_hbbc06fed__0))));
    bufp->chgBit(oldp+1482,(((IData)(vlSelf->_cp___05Fs13704) 
                             & ((0U == (0xfU & vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___axi4index_auto_in_r_bits_last)))));
    bufp->chgBit(oldp+1483,((1U & (~ (IData)(vlSelf->_mc___05Fs700)))));
    bufp->chgBit(oldp+1484,(vlSelf->_mc___05Fs700));
    bufp->chgBit(oldp+1485,(vlSelf->_cp___05Fs5962));
    bufp->chgBit(oldp+1486,(vlSelf->_cp___05Fs5963));
    bufp->chgBit(oldp+1487,(((IData)(vlSelf->_cp___05Fs13704) 
                             & ((1U == (0xfU & vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___axi4index_auto_in_r_bits_last)))));
    bufp->chgBit(oldp+1488,((1U & (~ (IData)(vlSelf->_mc___05Fs701)))));
    bufp->chgBit(oldp+1489,(vlSelf->_mc___05Fs701));
    bufp->chgBit(oldp+1490,(vlSelf->_cp___05Fs5965));
    bufp->chgBit(oldp+1491,(vlSelf->_cp___05Fs5966));
    bufp->chgBit(oldp+1492,(((IData)(vlSelf->_cp___05Fs13704) 
                             & ((0xaU == (0xfU & vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___axi4index_auto_in_r_bits_last)))));
    bufp->chgBit(oldp+1493,((1U & (~ (IData)(vlSelf->_mc___05Fs710)))));
    bufp->chgBit(oldp+1494,(vlSelf->_mc___05Fs710));
    bufp->chgBit(oldp+1495,(vlSelf->_cp___05Fs5992));
    bufp->chgBit(oldp+1496,(vlSelf->_cp___05Fs5993));
    bufp->chgBit(oldp+1497,(((IData)(vlSelf->_cp___05Fs13704) 
                             & ((0xbU == (0xfU & vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___axi4index_auto_in_r_bits_last)))));
    bufp->chgBit(oldp+1498,((1U & (~ (IData)(vlSelf->_mc___05Fs711)))));
    bufp->chgBit(oldp+1499,(vlSelf->_mc___05Fs711));
    bufp->chgBit(oldp+1500,(vlSelf->_cp___05Fs5995));
    bufp->chgBit(oldp+1501,(vlSelf->_cp___05Fs5996));
    bufp->chgBit(oldp+1502,(((IData)(vlSelf->_cp___05Fs13704) 
                             & ((0xcU == (0xfU & vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___axi4index_auto_in_r_bits_last)))));
    bufp->chgBit(oldp+1503,((1U & (~ (IData)(vlSelf->_mc___05Fs712)))));
    bufp->chgBit(oldp+1504,(vlSelf->_mc___05Fs712));
    bufp->chgBit(oldp+1505,(vlSelf->_cp___05Fs5998));
    bufp->chgBit(oldp+1506,(vlSelf->_cp___05Fs5999));
    bufp->chgBit(oldp+1507,(((IData)(vlSelf->_cp___05Fs13704) 
                             & ((0xdU == (0xfU & vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___axi4index_auto_in_r_bits_last)))));
    bufp->chgBit(oldp+1508,((1U & (~ (IData)(vlSelf->_mc___05Fs713)))));
    bufp->chgBit(oldp+1509,(vlSelf->_mc___05Fs713));
    bufp->chgBit(oldp+1510,(vlSelf->_cp___05Fs6001));
    bufp->chgBit(oldp+1511,(vlSelf->_cp___05Fs6002));
    bufp->chgBit(oldp+1512,(((IData)(vlSelf->_cp___05Fs13704) 
                             & ((0xeU == (0xfU & vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___axi4index_auto_in_r_bits_last)))));
    bufp->chgBit(oldp+1513,((1U & (~ (IData)(vlSelf->_mc___05Fs714)))));
    bufp->chgBit(oldp+1514,(vlSelf->_mc___05Fs714));
    bufp->chgBit(oldp+1515,(vlSelf->_cp___05Fs6004));
    bufp->chgBit(oldp+1516,(vlSelf->_cp___05Fs6005));
    bufp->chgBit(oldp+1517,(((IData)(vlSelf->_cp___05Fs13704) 
                             & ((0xfU == (0xfU & vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___axi4index_auto_in_r_bits_last)))));
    bufp->chgBit(oldp+1518,((1U & (~ (IData)(vlSelf->_mc___05Fs715)))));
    bufp->chgBit(oldp+1519,(vlSelf->_mc___05Fs715));
    bufp->chgBit(oldp+1520,(vlSelf->_cp___05Fs6007));
    bufp->chgBit(oldp+1521,(vlSelf->_cp___05Fs6008));
    bufp->chgBit(oldp+1522,(((IData)(vlSelf->_cp___05Fs13710) 
                             & (0U == (0xfU & (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))));
    bufp->chgBit(oldp+1523,((1U & (~ (IData)(vlSelf->_mc___05Fs716)))));
    bufp->chgBit(oldp+1524,(vlSelf->_mc___05Fs716));
    bufp->chgBit(oldp+1525,(vlSelf->_cp___05Fs6010));
    bufp->chgBit(oldp+1526,(vlSelf->_cp___05Fs6011));
    bufp->chgBit(oldp+1527,(((IData)(vlSelf->_cp___05Fs13710) 
                             & (1U == (0xfU & (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))));
    bufp->chgBit(oldp+1528,((1U & (~ (IData)(vlSelf->_mc___05Fs717)))));
    bufp->chgBit(oldp+1529,(vlSelf->_mc___05Fs717));
    bufp->chgBit(oldp+1530,(vlSelf->_cp___05Fs6013));
    bufp->chgBit(oldp+1531,(vlSelf->_cp___05Fs6014));
    bufp->chgBit(oldp+1532,(((IData)(vlSelf->_cp___05Fs13710) 
                             & (2U == (0xfU & (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))));
    bufp->chgBit(oldp+1533,((1U & (~ (IData)(vlSelf->_mc___05Fs718)))));
    bufp->chgBit(oldp+1534,(vlSelf->_mc___05Fs718));
    bufp->chgBit(oldp+1535,(vlSelf->_cp___05Fs6016));
    bufp->chgBit(oldp+1536,(vlSelf->_cp___05Fs6017));
    bufp->chgBit(oldp+1537,(((IData)(vlSelf->_cp___05Fs13710) 
                             & (3U == (0xfU & (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))));
    bufp->chgBit(oldp+1538,((1U & (~ (IData)(vlSelf->_mc___05Fs719)))));
    bufp->chgBit(oldp+1539,(vlSelf->_mc___05Fs719));
    bufp->chgBit(oldp+1540,(vlSelf->_cp___05Fs6019));
    bufp->chgBit(oldp+1541,(vlSelf->_cp___05Fs6020));
    bufp->chgBit(oldp+1542,(((IData)(vlSelf->_cp___05Fs13704) 
                             & ((2U == (0xfU & vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___axi4index_auto_in_r_bits_last)))));
    bufp->chgBit(oldp+1543,((1U & (~ (IData)(vlSelf->_mc___05Fs702)))));
    bufp->chgBit(oldp+1544,(vlSelf->_mc___05Fs702));
    bufp->chgBit(oldp+1545,(vlSelf->_cp___05Fs5968));
    bufp->chgBit(oldp+1546,(vlSelf->_cp___05Fs5969));
    bufp->chgBit(oldp+1547,(((IData)(vlSelf->_cp___05Fs13710) 
                             & (4U == (0xfU & (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))));
    bufp->chgBit(oldp+1548,((1U & (~ (IData)(vlSelf->_mc___05Fs720)))));
    bufp->chgBit(oldp+1549,(vlSelf->_mc___05Fs720));
    bufp->chgBit(oldp+1550,(vlSelf->_cp___05Fs6022));
    bufp->chgBit(oldp+1551,(vlSelf->_cp___05Fs6023));
    bufp->chgBit(oldp+1552,(((IData)(vlSelf->_cp___05Fs13710) 
                             & (5U == (0xfU & (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))));
    bufp->chgBit(oldp+1553,((1U & (~ (IData)(vlSelf->_mc___05Fs721)))));
    bufp->chgBit(oldp+1554,(vlSelf->_mc___05Fs721));
    bufp->chgBit(oldp+1555,(vlSelf->_cp___05Fs6025));
    bufp->chgBit(oldp+1556,(vlSelf->_cp___05Fs6026));
    bufp->chgBit(oldp+1557,(((IData)(vlSelf->_cp___05Fs13710) 
                             & (6U == (0xfU & (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))));
    bufp->chgBit(oldp+1558,((1U & (~ (IData)(vlSelf->_mc___05Fs722)))));
    bufp->chgBit(oldp+1559,(vlSelf->_mc___05Fs722));
    bufp->chgBit(oldp+1560,(vlSelf->_cp___05Fs6028));
    bufp->chgBit(oldp+1561,(vlSelf->_cp___05Fs6029));
    bufp->chgBit(oldp+1562,(((IData)(vlSelf->_cp___05Fs13710) 
                             & (7U == (0xfU & (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))));
    bufp->chgBit(oldp+1563,((1U & (~ (IData)(vlSelf->_mc___05Fs723)))));
    bufp->chgBit(oldp+1564,(vlSelf->_mc___05Fs723));
    bufp->chgBit(oldp+1565,(vlSelf->_cp___05Fs6031));
    bufp->chgBit(oldp+1566,(vlSelf->_cp___05Fs6032));
    bufp->chgBit(oldp+1567,(((IData)(vlSelf->_cp___05Fs13710) 
                             & (8U == (0xfU & (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))));
    bufp->chgBit(oldp+1568,((1U & (~ (IData)(vlSelf->_mc___05Fs724)))));
    bufp->chgBit(oldp+1569,(vlSelf->_mc___05Fs724));
    bufp->chgBit(oldp+1570,(vlSelf->_cp___05Fs6034));
    bufp->chgBit(oldp+1571,(vlSelf->_cp___05Fs6035));
    bufp->chgBit(oldp+1572,(((IData)(vlSelf->_cp___05Fs13710) 
                             & (9U == (0xfU & (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))));
    bufp->chgBit(oldp+1573,((1U & (~ (IData)(vlSelf->_mc___05Fs725)))));
    bufp->chgBit(oldp+1574,(vlSelf->_mc___05Fs725));
    bufp->chgBit(oldp+1575,(vlSelf->_cp___05Fs6037));
    bufp->chgBit(oldp+1576,(vlSelf->_cp___05Fs6038));
    bufp->chgBit(oldp+1577,(((IData)(vlSelf->_cp___05Fs13710) 
                             & (0xaU == (0xfU & (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))));
    bufp->chgBit(oldp+1578,((1U & (~ (IData)(vlSelf->_mc___05Fs726)))));
    bufp->chgBit(oldp+1579,(vlSelf->_mc___05Fs726));
    bufp->chgBit(oldp+1580,(vlSelf->_cp___05Fs6040));
    bufp->chgBit(oldp+1581,(vlSelf->_cp___05Fs6041));
    bufp->chgBit(oldp+1582,(((IData)(vlSelf->_cp___05Fs13710) 
                             & (0xbU == (0xfU & (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))));
    bufp->chgBit(oldp+1583,((1U & (~ (IData)(vlSelf->_mc___05Fs727)))));
    bufp->chgBit(oldp+1584,(vlSelf->_mc___05Fs727));
    bufp->chgBit(oldp+1585,(vlSelf->_cp___05Fs6043));
    bufp->chgBit(oldp+1586,(vlSelf->_cp___05Fs6044));
    bufp->chgBit(oldp+1587,(((IData)(vlSelf->_cp___05Fs13710) 
                             & (0xcU == (0xfU & (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))));
    bufp->chgBit(oldp+1588,((1U & (~ (IData)(vlSelf->_mc___05Fs728)))));
    bufp->chgBit(oldp+1589,(vlSelf->_mc___05Fs728));
    bufp->chgBit(oldp+1590,(vlSelf->_cp___05Fs6046));
    bufp->chgBit(oldp+1591,(vlSelf->_cp___05Fs6047));
    bufp->chgBit(oldp+1592,(((IData)(vlSelf->_cp___05Fs13710) 
                             & (0xdU == (0xfU & (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))));
    bufp->chgBit(oldp+1593,((1U & (~ (IData)(vlSelf->_mc___05Fs729)))));
    bufp->chgBit(oldp+1594,(vlSelf->_mc___05Fs729));
    bufp->chgBit(oldp+1595,(vlSelf->_cp___05Fs6049));
    bufp->chgBit(oldp+1596,(vlSelf->_cp___05Fs6050));
    bufp->chgBit(oldp+1597,(((IData)(vlSelf->_cp___05Fs13704) 
                             & ((3U == (0xfU & vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___axi4index_auto_in_r_bits_last)))));
    bufp->chgBit(oldp+1598,((1U & (~ (IData)(vlSelf->_mc___05Fs703)))));
    bufp->chgBit(oldp+1599,(vlSelf->_mc___05Fs703));
    bufp->chgBit(oldp+1600,(vlSelf->_cp___05Fs5971));
    bufp->chgBit(oldp+1601,(vlSelf->_cp___05Fs5972));
    bufp->chgBit(oldp+1602,(((IData)(vlSelf->_cp___05Fs13710) 
                             & (0xeU == (0xfU & (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))));
    bufp->chgBit(oldp+1603,((1U & (~ (IData)(vlSelf->_mc___05Fs730)))));
    bufp->chgBit(oldp+1604,(vlSelf->_mc___05Fs730));
    bufp->chgBit(oldp+1605,(vlSelf->_cp___05Fs6052));
    bufp->chgBit(oldp+1606,(vlSelf->_cp___05Fs6053));
    bufp->chgBit(oldp+1607,(((IData)(vlSelf->_cp___05Fs13710) 
                             & (0xfU == (0xfU & (IData)(vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))));
    bufp->chgBit(oldp+1608,((1U & (~ (IData)(vlSelf->_mc___05Fs731)))));
    bufp->chgBit(oldp+1609,(vlSelf->_mc___05Fs731));
    bufp->chgBit(oldp+1610,(vlSelf->_cp___05Fs6055));
    bufp->chgBit(oldp+1611,(vlSelf->_cp___05Fs6056));
    bufp->chgBit(oldp+1612,(((IData)(vlSelf->_cp___05Fs13704) 
                             & ((4U == (0xfU & vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___axi4index_auto_in_r_bits_last)))));
    bufp->chgBit(oldp+1613,((1U & (~ (IData)(vlSelf->_mc___05Fs704)))));
    bufp->chgBit(oldp+1614,(vlSelf->_mc___05Fs704));
    bufp->chgBit(oldp+1615,(vlSelf->_cp___05Fs5974));
    bufp->chgBit(oldp+1616,(vlSelf->_cp___05Fs5975));
    bufp->chgBit(oldp+1617,(((IData)(vlSelf->_cp___05Fs13704) 
                             & ((5U == (0xfU & vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___axi4index_auto_in_r_bits_last)))));
    bufp->chgBit(oldp+1618,((1U & (~ (IData)(vlSelf->_mc___05Fs705)))));
    bufp->chgBit(oldp+1619,(vlSelf->_mc___05Fs705));
    bufp->chgBit(oldp+1620,(vlSelf->_cp___05Fs5977));
    bufp->chgBit(oldp+1621,(vlSelf->_cp___05Fs5978));
    bufp->chgBit(oldp+1622,(((IData)(vlSelf->_cp___05Fs13704) 
                             & ((6U == (0xfU & vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___axi4index_auto_in_r_bits_last)))));
    bufp->chgBit(oldp+1623,((1U & (~ (IData)(vlSelf->_mc___05Fs706)))));
    bufp->chgBit(oldp+1624,(vlSelf->_mc___05Fs706));
    bufp->chgBit(oldp+1625,(vlSelf->_cp___05Fs5980));
    bufp->chgBit(oldp+1626,(vlSelf->_cp___05Fs5981));
    bufp->chgBit(oldp+1627,(((IData)(vlSelf->_cp___05Fs13704) 
                             & ((7U == (0xfU & vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___axi4index_auto_in_r_bits_last)))));
    bufp->chgBit(oldp+1628,((1U & (~ (IData)(vlSelf->_mc___05Fs707)))));
    bufp->chgBit(oldp+1629,(vlSelf->_mc___05Fs707));
    bufp->chgBit(oldp+1630,(vlSelf->_cp___05Fs5983));
    bufp->chgBit(oldp+1631,(vlSelf->_cp___05Fs5984));
    bufp->chgBit(oldp+1632,(((IData)(vlSelf->_cp___05Fs13704) 
                             & ((8U == (0xfU & vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___axi4index_auto_in_r_bits_last)))));
    bufp->chgBit(oldp+1633,((1U & (~ (IData)(vlSelf->_mc___05Fs708)))));
    bufp->chgBit(oldp+1634,(vlSelf->_mc___05Fs708));
    bufp->chgBit(oldp+1635,(vlSelf->_cp___05Fs5986));
    bufp->chgBit(oldp+1636,(vlSelf->_cp___05Fs5987));
    bufp->chgBit(oldp+1637,(((IData)(vlSelf->_cp___05Fs13704) 
                             & ((9U == (0xfU & vlSelf->TestHarness__DOT__mem__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___axi4index_auto_in_r_bits_last)))));
    bufp->chgBit(oldp+1638,((1U & (~ (IData)(vlSelf->_mc___05Fs709)))));
    bufp->chgBit(oldp+1639,(vlSelf->_mc___05Fs709));
    bufp->chgBit(oldp+1640,(vlSelf->_cp___05Fs5989));
    bufp->chgBit(oldp+1641,(vlSelf->_cp___05Fs5990));
    bufp->chgBit(oldp+1642,(vlSelf->_mc___05Fs746));
    bufp->chgBit(oldp+1643,(vlSelf->_cp___05Fs6342));
    bufp->chgBit(oldp+1644,(vlSelf->_mc___05Fs682));
    bufp->chgBit(oldp+1645,((1U & ((~ (IData)(vlSelf->_mc___05Fs682)) 
                                   | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___axi4index_auto_in_r_bits_last)))));
    bufp->chgBit(oldp+1646,(vlSelf->_cp___05Fs6355));
    bufp->chgBit(oldp+1647,(vlSelf->_cp___05Fs6360));
    bufp->chgBit(oldp+1648,(vlSelf->_cp___05Fs6365));
    bufp->chgBit(oldp+1649,(vlSelf->_cp___05Fs6370));
    bufp->chgBit(oldp+1650,(vlSelf->_cp___05Fs6375));
    bufp->chgBit(oldp+1651,(vlSelf->_cp___05Fs6380));
    bufp->chgBit(oldp+1652,(vlSelf->_cp___05Fs6385));
    bufp->chgBit(oldp+1653,(vlSelf->_cp___05Fs6390));
    bufp->chgBit(oldp+1654,(vlSelf->_cp___05Fs6395));
    bufp->chgBit(oldp+1655,(vlSelf->_cp___05Fs6400));
    bufp->chgBit(oldp+1656,(vlSelf->_cp___05Fs6405));
    bufp->chgBit(oldp+1657,(vlSelf->_cp___05Fs6410));
    bufp->chgBit(oldp+1658,(vlSelf->_cp___05Fs6415));
    bufp->chgBit(oldp+1659,(vlSelf->_cp___05Fs6420));
    bufp->chgBit(oldp+1660,(vlSelf->_cp___05Fs6425));
    bufp->chgBit(oldp+1661,(vlSelf->_cp___05Fs6430));
    bufp->chgBit(oldp+1662,(vlSelf->_cp___05Fs6435));
    bufp->chgBit(oldp+1663,(vlSelf->_cp___05Fs6440));
    bufp->chgBit(oldp+1664,(vlSelf->_cp___05Fs6445));
    bufp->chgBit(oldp+1665,(vlSelf->_cp___05Fs6450));
    bufp->chgBit(oldp+1666,(vlSelf->_cp___05Fs6455));
    bufp->chgBit(oldp+1667,(vlSelf->_cp___05Fs6460));
    bufp->chgBit(oldp+1668,(vlSelf->_cp___05Fs6465));
    bufp->chgBit(oldp+1669,(vlSelf->_cp___05Fs6470));
    bufp->chgBit(oldp+1670,(vlSelf->_cp___05Fs6475));
    bufp->chgBit(oldp+1671,(vlSelf->_cp___05Fs6480));
    bufp->chgBit(oldp+1672,(vlSelf->_cp___05Fs6485));
    bufp->chgBit(oldp+1673,(vlSelf->_cp___05Fs6490));
    bufp->chgBit(oldp+1674,(vlSelf->_cp___05Fs6495));
    bufp->chgBit(oldp+1675,(vlSelf->_cp___05Fs6500));
    bufp->chgBit(oldp+1676,(vlSelf->_cp___05Fs6505));
    bufp->chgBit(oldp+1677,(vlSelf->_cp___05Fs6510));
    bufp->chgBit(oldp+1678,(vlSelf->_cp___05Fs6515));
    bufp->chgBit(oldp+1679,(vlSelf->_cp___05Fs6520));
    bufp->chgBit(oldp+1680,(vlSelf->_cp___05Fs6525));
    bufp->chgBit(oldp+1681,(vlSelf->_cp___05Fs6530));
    bufp->chgBit(oldp+1682,(vlSelf->_cp___05Fs6535));
    bufp->chgBit(oldp+1683,(vlSelf->_cp___05Fs6540));
    bufp->chgBit(oldp+1684,(vlSelf->_cp___05Fs6545));
    bufp->chgBit(oldp+1685,(vlSelf->_cp___05Fs6550));
    bufp->chgBit(oldp+1686,(vlSelf->_cp___05Fs6555));
    bufp->chgBit(oldp+1687,(vlSelf->_cp___05Fs6560));
    bufp->chgBit(oldp+1688,(vlSelf->_cp___05Fs6565));
    bufp->chgBit(oldp+1689,(vlSelf->_cp___05Fs6570));
    bufp->chgBit(oldp+1690,(vlSelf->_cp___05Fs6575));
    bufp->chgBit(oldp+1691,(vlSelf->_cp___05Fs6580));
    bufp->chgBit(oldp+1692,(vlSelf->_cp___05Fs6585));
    bufp->chgBit(oldp+1693,(vlSelf->_cp___05Fs6590));
    bufp->chgBit(oldp+1694,(vlSelf->_cp___05Fs6595));
    bufp->chgBit(oldp+1695,(vlSelf->_cp___05Fs6600));
    bufp->chgBit(oldp+1696,(vlSelf->_cp___05Fs6605));
    bufp->chgBit(oldp+1697,(vlSelf->_cp___05Fs6610));
    bufp->chgBit(oldp+1698,(vlSelf->_cp___05Fs6615));
    bufp->chgBit(oldp+1699,(vlSelf->_cp___05Fs6620));
    bufp->chgBit(oldp+1700,(vlSelf->_cp___05Fs6625));
    bufp->chgBit(oldp+1701,(vlSelf->_cp___05Fs6630));
    bufp->chgBit(oldp+1702,(vlSelf->_cp___05Fs6635));
    bufp->chgBit(oldp+1703,(vlSelf->_cp___05Fs6640));
    bufp->chgBit(oldp+1704,(vlSelf->_cp___05Fs6645));
    bufp->chgBit(oldp+1705,(vlSelf->_cp___05Fs6650));
    bufp->chgBit(oldp+1706,(vlSelf->_cp___05Fs6655));
    bufp->chgBit(oldp+1707,(vlSelf->_cp___05Fs6660));
    bufp->chgBit(oldp+1708,(vlSelf->_cp___05Fs6665));
    bufp->chgBit(oldp+1709,(vlSelf->_cp___05Fs6670));
    bufp->chgBit(oldp+1710,(vlSelf->_cp___05Fs6675));
    bufp->chgBit(oldp+1711,(vlSelf->_cp___05Fs6680));
    bufp->chgBit(oldp+1712,(vlSelf->_cp___05Fs6685));
    bufp->chgBit(oldp+1713,(vlSelf->_cp___05Fs6690));
    bufp->chgBit(oldp+1714,(vlSelf->_cp___05Fs6695));
    bufp->chgBit(oldp+1715,(vlSelf->_cp___05Fs6700));
    bufp->chgBit(oldp+1716,(vlSelf->_cp___05Fs6705));
    bufp->chgBit(oldp+1717,(vlSelf->_cp___05Fs6710));
    bufp->chgBit(oldp+1718,(vlSelf->_cp___05Fs6715));
    bufp->chgBit(oldp+1719,(vlSelf->_cp___05Fs6720));
    bufp->chgBit(oldp+1720,(vlSelf->_cp___05Fs6725));
    bufp->chgBit(oldp+1721,(vlSelf->_cp___05Fs6730));
    bufp->chgBit(oldp+1722,(vlSelf->_cp___05Fs6735));
    bufp->chgBit(oldp+1723,(vlSelf->_cp___05Fs6740));
    bufp->chgBit(oldp+1724,(vlSelf->_cp___05Fs6745));
    bufp->chgBit(oldp+1725,(vlSelf->_cp___05Fs6750));
    bufp->chgBit(oldp+1726,(vlSelf->_cp___05Fs6755));
    bufp->chgBit(oldp+1727,(vlSelf->_cp___05Fs6760));
    bufp->chgBit(oldp+1728,(vlSelf->_cp___05Fs6765));
    bufp->chgBit(oldp+1729,(vlSelf->_cp___05Fs6770));
    bufp->chgBit(oldp+1730,(vlSelf->_cp___05Fs6775));
    bufp->chgBit(oldp+1731,(vlSelf->_cp___05Fs6780));
    bufp->chgBit(oldp+1732,(vlSelf->_cp___05Fs6785));
    bufp->chgBit(oldp+1733,(vlSelf->_cp___05Fs6790));
    bufp->chgBit(oldp+1734,(vlSelf->_cp___05Fs6795));
    bufp->chgBit(oldp+1735,(vlSelf->_cp___05Fs6800));
    bufp->chgBit(oldp+1736,(vlSelf->_cp___05Fs6805));
    bufp->chgBit(oldp+1737,(vlSelf->_cp___05Fs6810));
    bufp->chgBit(oldp+1738,(vlSelf->_cp___05Fs6815));
    bufp->chgBit(oldp+1739,(vlSelf->_cp___05Fs6820));
    bufp->chgBit(oldp+1740,(vlSelf->_cp___05Fs6825));
    bufp->chgBit(oldp+1741,(vlSelf->_cp___05Fs6830));
    bufp->chgBit(oldp+1742,(vlSelf->_cp___05Fs6835));
    bufp->chgBit(oldp+1743,(vlSelf->_cp___05Fs6840));
    bufp->chgBit(oldp+1744,(vlSelf->_cp___05Fs6845));
    bufp->chgBit(oldp+1745,(vlSelf->_cp___05Fs6850));
    bufp->chgBit(oldp+1746,(vlSelf->_cp___05Fs6855));
    bufp->chgBit(oldp+1747,(vlSelf->_cp___05Fs6860));
    bufp->chgBit(oldp+1748,(vlSelf->_cp___05Fs6865));
    bufp->chgBit(oldp+1749,(vlSelf->_cp___05Fs6870));
    bufp->chgBit(oldp+1750,(vlSelf->_cp___05Fs6875));
    bufp->chgBit(oldp+1751,(vlSelf->_cp___05Fs6880));
    bufp->chgBit(oldp+1752,(vlSelf->_cp___05Fs6885));
    bufp->chgBit(oldp+1753,(vlSelf->_cp___05Fs6890));
    bufp->chgBit(oldp+1754,(vlSelf->_cp___05Fs6895));
    bufp->chgBit(oldp+1755,(vlSelf->_cp___05Fs6900));
    bufp->chgBit(oldp+1756,(vlSelf->_cp___05Fs6905));
    bufp->chgBit(oldp+1757,(vlSelf->_cp___05Fs6910));
    bufp->chgBit(oldp+1758,(vlSelf->_cp___05Fs6915));
    bufp->chgBit(oldp+1759,(vlSelf->_cp___05Fs6920));
    bufp->chgBit(oldp+1760,(vlSelf->_cp___05Fs6925));
    bufp->chgBit(oldp+1761,(vlSelf->_cp___05Fs6930));
    bufp->chgBit(oldp+1762,(vlSelf->_cp___05Fs6935));
    bufp->chgBit(oldp+1763,(vlSelf->_cp___05Fs6940));
    bufp->chgBit(oldp+1764,(vlSelf->_cp___05Fs6945));
    bufp->chgBit(oldp+1765,(vlSelf->_cp___05Fs6950));
    bufp->chgBit(oldp+1766,(vlSelf->_cp___05Fs6955));
    bufp->chgBit(oldp+1767,(vlSelf->_cp___05Fs6960));
    bufp->chgBit(oldp+1768,(vlSelf->_cp___05Fs6965));
    bufp->chgBit(oldp+1769,(vlSelf->_cp___05Fs6970));
    bufp->chgBit(oldp+1770,(vlSelf->_cp___05Fs6975));
    bufp->chgBit(oldp+1771,(vlSelf->_cp___05Fs6980));
    bufp->chgBit(oldp+1772,(vlSelf->_cp___05Fs6985));
    bufp->chgBit(oldp+1773,(vlSelf->_cp___05Fs6990));
    bufp->chgBit(oldp+1774,(vlSelf->_mc___05Fs737));
    bufp->chgBit(oldp+1775,(vlSelf->_mc___05Fs739));
    bufp->chgBit(oldp+1776,(vlSelf->_cp___05Fs6291));
    bufp->chgBit(oldp+1777,(vlSelf->_mc___05Fs742));
    bufp->chgBit(oldp+1778,(vlSelf->_cp___05Fs6336));
    bufp->chgBit(oldp+1779,(vlSelf->_cp___05Fs6337));
    bufp->chgBit(oldp+1780,(vlSelf->_cp___05Fs6333));
    bufp->chgBit(oldp+1781,(vlSelf->_cp___05Fs6334));
    bufp->chgBit(oldp+1782,(vlSelf->_mc___05Fs681));
    bufp->chgBit(oldp+1783,(vlSelf->_cp___05Fs6344));
    bufp->chgBit(oldp+1784,(vlSelf->_cp___05Fs6343));
    bufp->chgBit(oldp+1785,(vlSelf->_mc___05Fs747));
    bufp->chgBit(oldp+1786,(vlSelf->_cp___05Fs6339));
    bufp->chgBit(oldp+1787,(vlSelf->_cp___05Fs6340));
    bufp->chgBit(oldp+1788,(vlSelf->_mc___05Fs692));
    bufp->chgBit(oldp+1789,(vlSelf->_mc___05Fs694));
    bufp->chgBit(oldp+1790,(vlSelf->_cp___05Fs5920));
    bufp->chgBit(oldp+1791,(vlSelf->_mc___05Fs697));
    bufp->chgBit(oldp+1792,(vlSelf->_rs___05Fs3632));
    bufp->chgBit(oldp+1793,(vlSelf->_rs___05Fs3631));
    bufp->chgBit(oldp+1794,(vlSelf->_cp___05Fs11194));
    bufp->chgBit(oldp+1795,(vlSelf->_cp___05Fs11193));
    bufp->chgBit(oldp+1796,(vlSelf->_cp___05Fs11192));
    bufp->chgBit(oldp+1797,(vlSelf->_cp___05Fs11191));
    bufp->chgBit(oldp+1798,(vlSelf->_cp___05Fs11189));
    bufp->chgBit(oldp+1799,(vlSelf->_cp___05Fs11188));
    bufp->chgBit(oldp+1800,(vlSelf->_mc___05Fs3457));
    bufp->chgBit(oldp+1801,(vlSelf->_mc___05Fs3458));
    bufp->chgBit(oldp+1802,(vlSelf->_mc___05Fs3480));
    bufp->chgBit(oldp+1803,(vlSelf->_cp___05Fs11178));
    bufp->chgBit(oldp+1804,(vlSelf->_cp___05Fs11179));
    bufp->chgBit(oldp+1805,(vlSelf->_cp___05Fs11180));
    bufp->chgBit(oldp+1806,(vlSelf->_cp___05Fs11183));
    bufp->chgBit(oldp+1807,(vlSelf->_cp___05Fs11186));
    bufp->chgBit(oldp+1808,(vlSelf->_cp___05Fs11187));
    bufp->chgBit(oldp+1809,(vlSelf->_mc___05Fs3482));
    bufp->chgCData(oldp+1810,(((IData)(vlSelf->_mc___05Fs3453)
                                ? (1U & (~ (IData)(vlSelf->_mc___05Fs3452)))
                                : 2U)),2);
    bufp->chgCData(oldp+1811,(((IData)(vlSelf->_mc___05Fs3453)
                                ? ((IData)(vlSelf->_mc___05Fs3452)
                                    ? 0U : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__priority_0))
                                : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__priority_1))),2);
    bufp->chgCData(oldp+1812,(((IData)(vlSelf->_mc___05Fs3455)
                                ? (1U & (~ (IData)(vlSelf->_mc___05Fs3454)))
                                : 2U)),2);
    bufp->chgCData(oldp+1813,(((IData)(vlSelf->_mc___05Fs3455)
                                ? ((IData)(vlSelf->_mc___05Fs3454)
                                    ? 0U : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__priority_0))
                                : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__plic__DOT__priority_1))),2);
    bufp->chgBit(oldp+1814,(vlSelf->_cp___05Fs11166));
    bufp->chgBit(oldp+1815,(vlSelf->_cp___05Fs11168));
    bufp->chgBit(oldp+1816,(vlSelf->_cp___05Fs11084));
    bufp->chgBit(oldp+1817,(vlSelf->_cp___05Fs11097));
    bufp->chgBit(oldp+1818,(vlSelf->_cp___05Fs11123));
    bufp->chgBit(oldp+1819,(vlSelf->_mc___05Fs3443));
    bufp->chgBit(oldp+1820,(vlSelf->_cp___05Fs11170));
    bufp->chgBit(oldp+1821,(vlSelf->_cp___05Fs1067));
    bufp->chgBit(oldp+1822,(vlSelf->_cp___05Fs1088));
    bufp->chgBit(oldp+1823,((1U & (~ (IData)(vlSelf->_mc___05Fs3401)))));
    bufp->chgBit(oldp+1824,(vlSelf->_cp___05Fs1180));
    bufp->chgBit(oldp+1825,(vlSelf->_cp___05Fs1193));
    bufp->chgQData(oldp+1826,((((IData)(vlSelf->_mc___05Fs121)
                                 ? vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_bus_xing_in_d_bits_data
                                 : 0ULL) | (((IData)(vlSelf->_mc___05Fs122)
                                              ? vlSelf->TestHarness__DOT__ldut__DOT___coh_wrapper_auto_coherent_jbar_anon_in_d_bits_data
                                              : 0ULL) 
                                            | ((IData)(vlSelf->_mc___05Fs123)
                                                ? vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4index_auto_in_r_bits_data
                                                : 0ULL)))),64);
    bufp->chgBit(oldp+1828,(vlSelf->_cp___05Fs1191));
    bufp->chgBit(oldp+1829,(vlSelf->_cp___05Fs1677));
    bufp->chgBit(oldp+1830,(((IData)(vlSelf->_mc___05Fs100) 
                             & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                >> 0xeU))));
    bufp->chgBit(oldp+1831,(((IData)(vlSelf->_mc___05Fs100) 
                             & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                >> 0xfU))));
    bufp->chgBit(oldp+1832,(((IData)(vlSelf->_mc___05Fs100) 
                             & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                >> 0x10U))));
    bufp->chgBit(oldp+1833,(((IData)(vlSelf->_mc___05Fs100) 
                             & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                >> 0x11U))));
    bufp->chgBit(oldp+1834,(((IData)(vlSelf->_mc___05Fs100) 
                             & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                >> 0x12U))));
    bufp->chgBit(oldp+1835,(((IData)(vlSelf->_mc___05Fs100) 
                             & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                >> 0x13U))));
    bufp->chgBit(oldp+1836,(((IData)(vlSelf->_mc___05Fs100) 
                             & (vlSelf->TestHarness__DOT__ldut__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                >> 0x14U))));
    bufp->chgBit(oldp+1837,(vlSelf->_cp___05Fs1698));
    bufp->chgBit(oldp+1838,(vlSelf->_cp___05Fs1941));
    bufp->chgBit(oldp+1839,(vlSelf->_cp___05Fs1790));
    bufp->chgCData(oldp+1840,(vlSelf->_mc___05Fs218),3);
    bufp->chgBit(oldp+1841,(vlSelf->_cp___05Fs1803));
    bufp->chgBit(oldp+1842,(vlSelf->_cp___05Fs1801));
    bufp->chgBit(oldp+1843,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__full) 
                             | (IData)(vlSelf->_cp___05Fs1951))));
    bufp->chgBit(oldp+1844,((1U & (((0x10U & ((~ (IData)(vlSelf->_mc___05Fs205)) 
                                              << 4U)) 
                                    | ((8U & ((~ (IData)(vlSelf->_mc___05Fs204)) 
                                              << 3U)) 
                                       | ((4U & ((~ (IData)(vlSelf->_mc___05Fs203)) 
                                                 << 2U)) 
                                          | ((2U & 
                                              ((~ (IData)(vlSelf->_mc___05Fs202)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ (IData)(vlSelf->_mc___05Fs201))))))) 
                                   >> (0xfU & vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])))));
    bufp->chgBit(oldp+1845,((1U & (~ (IData)(vlSelf->_mc___05Fs186)))));
    bufp->chgBit(oldp+1846,(vlSelf->_cp___05Fs1953));
    bufp->chgBit(oldp+1847,((1U & (~ (IData)(vlSelf->_mc___05Fs189)))));
    bufp->chgBit(oldp+1848,(vlSelf->_mc___05Fs188));
    bufp->chgBit(oldp+1849,(vlSelf->_cp___05Fs13824));
    bufp->chgBit(oldp+1850,(vlSelf->_cp___05Fs1577));
    bufp->chgBit(oldp+1851,(vlSelf->_mc___05Fs190));
    bufp->chgBit(oldp+1852,(vlSelf->_cp___05Fs13818));
    bufp->chgBit(oldp+1853,(vlSelf->_cp___05Fs1583));
    bufp->chgBit(oldp+1854,(vlSelf->_mc___05Fs189));
    bufp->chgBit(oldp+1855,(vlSelf->_cp___05Fs1579));
    bufp->chgBit(oldp+1856,(vlSelf->_cp___05Fs13812));
    bufp->chgBit(oldp+1857,(vlSelf->_mc___05Fs186));
    bufp->chgBit(oldp+1858,(vlSelf->_cp___05Fs1570));
    bufp->chgBit(oldp+1859,(vlSelf->_cp___05Fs13806));
    bufp->chgBit(oldp+1860,(vlSelf->_mc___05Fs187));
    bufp->chgBit(oldp+1861,(vlSelf->_cp___05Fs1573));
    bufp->chgBit(oldp+1862,(vlSelf->_cp___05Fs1574));
    bufp->chgBit(oldp+1863,(((IData)(vlSelf->_cp___05Fs1941) 
                             & (IData)(vlSelf->_mc___05Fs218))));
    bufp->chgBit(oldp+1864,(((~ (IData)(vlSelf->_mc___05Fs186)) 
                             & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT____VdfgTmp_h0e512e9a__0))));
    bufp->chgBit(oldp+1865,(((~ (IData)(vlSelf->_mc___05Fs189)) 
                             & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT____VdfgTmp_h72de1387__0))));
    bufp->chgBit(oldp+1866,(vlSelf->_rs___05Fs232));
    bufp->chgBit(oldp+1867,(vlSelf->_cp___05Fs1655));
    bufp->chgBit(oldp+1868,(vlSelf->_cp___05Fs1653));
    bufp->chgBit(oldp+1869,(vlSelf->_cp___05Fs1651));
    bufp->chgBit(oldp+1870,(vlSelf->_cp___05Fs1649));
    bufp->chgBit(oldp+1871,(vlSelf->_cp___05Fs1647));
    bufp->chgBit(oldp+1872,(vlSelf->_cp___05Fs1645));
    bufp->chgBit(oldp+1873,(vlSelf->_cp___05Fs1643));
    bufp->chgBit(oldp+1874,(vlSelf->_cp___05Fs1641));
    bufp->chgBit(oldp+1875,(vlSelf->_cp___05Fs1639));
    bufp->chgBit(oldp+1876,(vlSelf->_cp___05Fs1637));
    bufp->chgBit(oldp+1877,(vlSelf->_cp___05Fs1635));
    bufp->chgBit(oldp+1878,((1U & (~ (IData)(vlSelf->_mc___05Fs201)))));
    bufp->chgBit(oldp+1879,(vlSelf->_mc___05Fs201));
    bufp->chgBit(oldp+1880,(vlSelf->_cp___05Fs1619));
    bufp->chgBit(oldp+1881,(vlSelf->_cp___05Fs1620));
    bufp->chgBit(oldp+1882,((1U & (~ (IData)(vlSelf->_mc___05Fs202)))));
    bufp->chgBit(oldp+1883,(vlSelf->_mc___05Fs202));
    bufp->chgBit(oldp+1884,(vlSelf->_cp___05Fs1622));
    bufp->chgBit(oldp+1885,(vlSelf->_cp___05Fs1623));
    bufp->chgBit(oldp+1886,((1U & (~ (IData)(vlSelf->_mc___05Fs203)))));
    bufp->chgBit(oldp+1887,(vlSelf->_mc___05Fs203));
    bufp->chgBit(oldp+1888,(vlSelf->_cp___05Fs1625));
    bufp->chgBit(oldp+1889,(vlSelf->_cp___05Fs1626));
    bufp->chgBit(oldp+1890,((1U & (~ (IData)(vlSelf->_mc___05Fs204)))));
    bufp->chgBit(oldp+1891,(vlSelf->_mc___05Fs204));
    bufp->chgBit(oldp+1892,(vlSelf->_cp___05Fs1628));
    bufp->chgBit(oldp+1893,(vlSelf->_cp___05Fs1629));
    bufp->chgBit(oldp+1894,((1U & (~ (IData)(vlSelf->_mc___05Fs205)))));
    bufp->chgBit(oldp+1895,(vlSelf->_mc___05Fs205));
    bufp->chgBit(oldp+1896,(vlSelf->_cp___05Fs1631));
    bufp->chgBit(oldp+1897,(vlSelf->_cp___05Fs1632));
    bufp->chgBit(oldp+1898,(((IData)(vlSelf->_cp___05Fs1583) 
                             & ((0U == (0xfU & vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                & (vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[2U] 
                                   >> 6U)))));
    bufp->chgBit(oldp+1899,(vlSelf->_mc___05Fs191));
    bufp->chgBit(oldp+1900,(vlSelf->_cp___05Fs1585));
    bufp->chgBit(oldp+1901,(vlSelf->_cp___05Fs1586));
    bufp->chgBit(oldp+1902,(((IData)(vlSelf->_cp___05Fs1583) 
                             & ((3U == (0xfU & vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                & (vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[2U] 
                                   >> 6U)))));
    bufp->chgBit(oldp+1903,(vlSelf->_mc___05Fs194));
    bufp->chgBit(oldp+1904,(vlSelf->_cp___05Fs1594));
    bufp->chgBit(oldp+1905,(vlSelf->_cp___05Fs1595));
    bufp->chgBit(oldp+1906,(((IData)(vlSelf->_cp___05Fs1583) 
                             & ((4U == (0xfU & vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                & (vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[2U] 
                                   >> 6U)))));
    bufp->chgBit(oldp+1907,(vlSelf->_mc___05Fs195));
    bufp->chgBit(oldp+1908,(vlSelf->_cp___05Fs1597));
    bufp->chgBit(oldp+1909,(vlSelf->_cp___05Fs1598));
    bufp->chgBit(oldp+1910,(((IData)(vlSelf->_cp___05Fs1577) 
                             & (0U == (0xfU & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))));
    bufp->chgBit(oldp+1911,(vlSelf->_mc___05Fs196));
    bufp->chgBit(oldp+1912,(vlSelf->_cp___05Fs1600));
    bufp->chgBit(oldp+1913,(vlSelf->_cp___05Fs1601));
    bufp->chgBit(oldp+1914,(((IData)(vlSelf->_cp___05Fs1577) 
                             & (3U == (0xfU & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))));
    bufp->chgBit(oldp+1915,(vlSelf->_mc___05Fs199));
    bufp->chgBit(oldp+1916,(vlSelf->_cp___05Fs1609));
    bufp->chgBit(oldp+1917,(vlSelf->_cp___05Fs1610));
    bufp->chgBit(oldp+1918,(((IData)(vlSelf->_cp___05Fs1577) 
                             & (4U == (0xfU & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))));
    bufp->chgBit(oldp+1919,(vlSelf->_mc___05Fs200));
    bufp->chgBit(oldp+1920,(vlSelf->_cp___05Fs1612));
    bufp->chgBit(oldp+1921,(vlSelf->_cp___05Fs1613));
    bufp->chgBit(oldp+1922,(((IData)(vlSelf->_cp___05Fs1583) 
                             & ((1U == (0xfU & vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                & (vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[2U] 
                                   >> 6U)))));
    bufp->chgBit(oldp+1923,((1U & (~ (IData)(vlSelf->_mc___05Fs192)))));
    bufp->chgBit(oldp+1924,(vlSelf->_mc___05Fs192));
    bufp->chgBit(oldp+1925,(vlSelf->_cp___05Fs1588));
    bufp->chgBit(oldp+1926,(vlSelf->_cp___05Fs1589));
    bufp->chgBit(oldp+1927,(((IData)(vlSelf->_cp___05Fs1583) 
                             & ((2U == (0xfU & vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[0U])) 
                                & (vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_r_deq_q__DOT___ram_ext_R0_data[2U] 
                                   >> 6U)))));
    bufp->chgBit(oldp+1928,((1U & (~ (IData)(vlSelf->_mc___05Fs193)))));
    bufp->chgBit(oldp+1929,(vlSelf->_mc___05Fs193));
    bufp->chgBit(oldp+1930,(vlSelf->_cp___05Fs1591));
    bufp->chgBit(oldp+1931,(vlSelf->_cp___05Fs1592));
    bufp->chgBit(oldp+1932,(((IData)(vlSelf->_cp___05Fs1577) 
                             & (1U == (0xfU & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))));
    bufp->chgBit(oldp+1933,((1U & (~ (IData)(vlSelf->_mc___05Fs197)))));
    bufp->chgBit(oldp+1934,(vlSelf->_mc___05Fs197));
    bufp->chgBit(oldp+1935,(vlSelf->_cp___05Fs1603));
    bufp->chgBit(oldp+1936,(vlSelf->_cp___05Fs1604));
    bufp->chgBit(oldp+1937,(((IData)(vlSelf->_cp___05Fs1577) 
                             & (2U == (0xfU & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__nodeIn_b_deq_q__DOT___ram_ext_R0_data))))));
    bufp->chgBit(oldp+1938,((1U & (~ (IData)(vlSelf->_mc___05Fs198)))));
    bufp->chgBit(oldp+1939,(vlSelf->_mc___05Fs198));
    bufp->chgBit(oldp+1940,(vlSelf->_cp___05Fs1606));
    bufp->chgBit(oldp+1941,(vlSelf->_cp___05Fs1607));
    bufp->chgBit(oldp+1942,(vlSelf->_mc___05Fs231));
    bufp->chgBit(oldp+1943,(vlSelf->_cp___05Fs1957));
    bufp->chgBit(oldp+1944,(vlSelf->_mc___05Fs218));
    bufp->chgBit(oldp+1945,((1U & ((~ (IData)(vlSelf->_mc___05Fs218)) 
                                   | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__anonIn_r_bits_last)))));
    bufp->chgBit(oldp+1946,(vlSelf->_cp___05Fs1970));
    bufp->chgBit(oldp+1947,(vlSelf->_cp___05Fs1975));
    bufp->chgBit(oldp+1948,(vlSelf->_cp___05Fs1980));
    bufp->chgBit(oldp+1949,(vlSelf->_cp___05Fs1985));
    bufp->chgBit(oldp+1950,(vlSelf->_cp___05Fs1990));
    bufp->chgBit(oldp+1951,(vlSelf->_mc___05Fs221));
    bufp->chgBit(oldp+1952,(vlSelf->_mc___05Fs223));
    bufp->chgBit(oldp+1953,(vlSelf->_cp___05Fs1793));
    bufp->chgBit(oldp+1954,(vlSelf->_cp___05Fs1906));
    bufp->chgBit(oldp+1955,(vlSelf->_mc___05Fs227));
    bufp->chgBit(oldp+1956,(vlSelf->_cp___05Fs1951));
    bufp->chgBit(oldp+1957,(vlSelf->_cp___05Fs1952));
    bufp->chgBit(oldp+1958,(vlSelf->_cp___05Fs1948));
    bufp->chgBit(oldp+1959,(vlSelf->_cp___05Fs1949));
    bufp->chgBit(oldp+1960,(vlSelf->_mc___05Fs216));
    bufp->chgBit(oldp+1961,(vlSelf->_cp___05Fs1959));
    bufp->chgBit(oldp+1962,(vlSelf->_cp___05Fs1958));
    bufp->chgBit(oldp+1963,(vlSelf->_mc___05Fs232));
    bufp->chgBit(oldp+1964,(vlSelf->_cp___05Fs1954));
    bufp->chgBit(oldp+1965,(vlSelf->_cp___05Fs1955));
    bufp->chgBit(oldp+1966,(vlSelf->_cp___05Fs1));
    bufp->chgBit(oldp+1967,(vlSelf->_mc___05Fs175));
    bufp->chgBit(oldp+1968,(vlSelf->_mc___05Fs177));
    bufp->chgBit(oldp+1969,(vlSelf->_mc___05Fs183));
    bufp->chgBit(oldp+1970,(vlSelf->_mc___05Fs185));
    bufp->chgBit(oldp+1971,(vlSelf->_mc___05Fs129));
    bufp->chgBit(oldp+1972,(vlSelf->_mc___05Fs131));
    bufp->chgBit(oldp+1973,(vlSelf->_cp___05Fs117));
    bufp->chgBit(oldp+1974,(vlSelf->_cp___05Fs1025));
    bufp->chgBit(oldp+1975,(vlSelf->_mc___05Fs134));
    bufp->chgBit(oldp+1976,(vlSelf->_mc___05Fs161));
    bufp->chgBit(oldp+1977,(vlSelf->_mc___05Fs163));
    bufp->chgBit(oldp+1978,(vlSelf->_cp___05Fs1183));
    bufp->chgBit(oldp+1979,(vlSelf->_cp___05Fs1507));
    bufp->chgBit(oldp+1980,(vlSelf->_mc___05Fs165));
    bufp->chgBit(oldp+1981,(vlSelf->_mc___05Fs167));
    bufp->chgBit(oldp+1982,(vlSelf->_cp___05Fs1535));
    bufp->chgBit(oldp+1983,(vlSelf->_mc___05Fs169));
    bufp->chgBit(oldp+1984,((1U & ((IData)(vlSelf->_mc___05Fs117)
                                    ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_4) 
                                       >> 2U) : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__state_4_2)))));
    bufp->chgBit(oldp+1985,((1U & ((IData)(vlSelf->_mc___05Fs117)
                                    ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_4) 
                                       >> 1U) : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__state_4_1)))));
    bufp->chgBit(oldp+1986,((1U & ((IData)(vlSelf->_mc___05Fs117)
                                    ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_4)
                                    : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__state_4_0)))));
    bufp->chgBit(oldp+1987,((1U & ((IData)(vlSelf->_mc___05Fs106)
                                    ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_3) 
                                       >> 2U) : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__state_3_2)))));
    bufp->chgBit(oldp+1988,((1U & ((IData)(vlSelf->_mc___05Fs106)
                                    ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_3) 
                                       >> 1U) : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__state_3_1)))));
    bufp->chgBit(oldp+1989,((1U & ((IData)(vlSelf->_mc___05Fs106)
                                    ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_3)
                                    : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__state_3_0)))));
    bufp->chgBit(oldp+1990,((1U & ((IData)(vlSelf->_mc___05Fs97)
                                    ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_2) 
                                       >> 1U) : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__state_2_1)))));
    bufp->chgBit(oldp+1991,((1U & ((IData)(vlSelf->_mc___05Fs97)
                                    ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_2)
                                    : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__state_2_0)))));
    bufp->chgBit(oldp+1992,((1U & ((IData)(vlSelf->_mc___05Fs89)
                                    ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_1) 
                                       >> 1U) : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__state_1_1)))));
    bufp->chgBit(oldp+1993,((1U & ((IData)(vlSelf->_mc___05Fs89)
                                    ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_1)
                                    : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__state_1_0)))));
    bufp->chgBit(oldp+1994,((1U & ((IData)(vlSelf->_mc___05Fs81)
                                    ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys) 
                                       >> 1U) : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__state_1)))));
    bufp->chgBit(oldp+1995,((1U & ((IData)(vlSelf->_mc___05Fs81)
                                    ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys)
                                    : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__state_0)))));
    bufp->chgBit(oldp+1996,(vlSelf->_mc___05Fs52));
    bufp->chgBit(oldp+1997,(vlSelf->_mc___05Fs53));
    bufp->chgBit(oldp+1998,(vlSelf->_mc___05Fs54));
    bufp->chgBit(oldp+1999,(vlSelf->_mc___05Fs55));
    bufp->chgBit(oldp+2000,(vlSelf->_mc___05Fs56));
    bufp->chgBit(oldp+2001,(vlSelf->_mc___05Fs57));
    bufp->chgBit(oldp+2002,(vlSelf->_mc___05Fs71));
    bufp->chgBit(oldp+2003,(vlSelf->_mc___05Fs73));
    bufp->chgBit(oldp+2004,(vlSelf->_mc___05Fs75));
    bufp->chgBit(oldp+2005,(vlSelf->_mc___05Fs81));
    bufp->chgBit(oldp+2006,(vlSelf->_mc___05Fs80));
    bufp->chgBit(oldp+2007,(vlSelf->_mc___05Fs78));
    bufp->chgBit(oldp+2008,(vlSelf->_mc___05Fs79));
    bufp->chgBit(oldp+2009,(vlSelf->_mc___05Fs84));
    bufp->chgBit(oldp+2010,(vlSelf->_mc___05Fs85));
    bufp->chgBit(oldp+2011,(vlSelf->_mc___05Fs89));
    bufp->chgBit(oldp+2012,(vlSelf->_mc___05Fs88));
    bufp->chgBit(oldp+2013,(vlSelf->_mc___05Fs86));
    bufp->chgBit(oldp+2014,(vlSelf->_mc___05Fs87));
    bufp->chgBit(oldp+2015,(vlSelf->_mc___05Fs92));
    bufp->chgBit(oldp+2016,(vlSelf->_mc___05Fs93));
    bufp->chgBit(oldp+2017,(vlSelf->_mc___05Fs97));
    bufp->chgBit(oldp+2018,(vlSelf->_mc___05Fs96));
    bufp->chgBit(oldp+2019,(vlSelf->_mc___05Fs94));
    bufp->chgBit(oldp+2020,(vlSelf->_mc___05Fs95));
    bufp->chgBit(oldp+2021,(vlSelf->_mc___05Fs100));
    bufp->chgBit(oldp+2022,(vlSelf->_mc___05Fs101));
    bufp->chgBit(oldp+2023,(vlSelf->_mc___05Fs106));
    bufp->chgBit(oldp+2024,(vlSelf->_mc___05Fs105));
    bufp->chgBit(oldp+2025,(vlSelf->_mc___05Fs102));
    bufp->chgBit(oldp+2026,(vlSelf->_mc___05Fs103));
    bufp->chgBit(oldp+2027,(vlSelf->_mc___05Fs104));
    bufp->chgBit(oldp+2028,(vlSelf->_mc___05Fs110));
    bufp->chgBit(oldp+2029,(vlSelf->_mc___05Fs111));
    bufp->chgBit(oldp+2030,(vlSelf->_mc___05Fs112));
    bufp->chgBit(oldp+2031,(vlSelf->_mc___05Fs117));
    bufp->chgBit(oldp+2032,(vlSelf->_mc___05Fs116));
    bufp->chgBit(oldp+2033,(vlSelf->_mc___05Fs113));
    bufp->chgBit(oldp+2034,(vlSelf->_mc___05Fs114));
    bufp->chgBit(oldp+2035,(vlSelf->_mc___05Fs115));
    bufp->chgBit(oldp+2036,(vlSelf->_mc___05Fs121));
    bufp->chgBit(oldp+2037,(vlSelf->_mc___05Fs122));
    bufp->chgBit(oldp+2038,(vlSelf->_mc___05Fs123));
    bufp->chgBit(oldp+2039,(vlSelf->_mc___05Fs5));
    bufp->chgBit(oldp+2040,(vlSelf->_mc___05Fs7));
    bufp->chgBit(oldp+2041,(vlSelf->_cp___05Fs230));
    bufp->chgBit(oldp+2042,(vlSelf->_mc___05Fs10));
    bufp->chgBit(oldp+2043,(vlSelf->_mc___05Fs37));
    bufp->chgBit(oldp+2044,(vlSelf->_mc___05Fs39));
    bufp->chgBit(oldp+2045,(vlSelf->_cp___05Fs712));
    bufp->chgBit(oldp+2046,(vlSelf->_mc___05Fs41));
    bufp->chgBit(oldp+2047,(vlSelf->_mc___05Fs43));
    bufp->chgBit(oldp+2048,(vlSelf->_cp___05Fs740));
    bufp->chgBit(oldp+2049,(vlSelf->_mc___05Fs45));
    bufp->chgBit(oldp+2050,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hrDebugIntReg_0) 
                             | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__debugIntRegs_0))));
    bufp->chgBit(oldp+2051,(vlSelf->_cp___05Fs10100));
    bufp->chgQData(oldp+2052,(((IData)(vlSelf->_mc___05Fs954)
                                ? (((IData)(vlSelf->_cp___05Fs9252) 
                                    & ((IData)(vlSelf->_mc___05Fs1315) 
                                       & ((IData)(vlSelf->_mc___05Fs1311) 
                                          | ((IData)(vlSelf->_mc___05Fs1310) 
                                             | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h1fd10179__0)))))
                                    ? vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data
                                    : 0ULL) : 0ULL)),64);
    bufp->chgBit(oldp+2054,(((IData)(vlSelf->_mc___05Fs944) 
                             & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_b_ready))));
    bufp->chgBit(oldp+2055,(vlSelf->_cp___05Fs10384));
    bufp->chgIData(oldp+2056,(vlSelf->_rs___05Fs1855),32);
    bufp->chgQData(oldp+2057,(vlSelf->_rs___05Fs1992),64);
    bufp->chgBit(oldp+2059,(vlSelf->_cp___05Fs10472));
    bufp->chgBit(oldp+2060,((1U & (~ (IData)(vlSelf->_mc___05Fs3400)))));
    bufp->chgBit(oldp+2061,(vlSelf->_cp___05Fs10284));
    bufp->chgBit(oldp+2062,(vlSelf->_cp___05Fs10303));
    bufp->chgBit(oldp+2063,((1U & (~ (IData)(vlSelf->_mc___05Fs3403)))));
    bufp->chgBit(oldp+2064,(vlSelf->_cp___05Fs10213));
    bufp->chgBit(oldp+2065,(vlSelf->_cp___05Fs10226));
    bufp->chgBit(oldp+2066,(vlSelf->_cp___05Fs10224));
    bufp->chgBit(oldp+2067,((1U & (~ (IData)(vlSelf->_mc___05Fs3404)))));
    bufp->chgBit(oldp+2068,(vlSelf->_cp___05Fs10503));
    bufp->chgBit(oldp+2069,(vlSelf->_mc___05Fs3391));
    bufp->chgBit(oldp+2070,(vlSelf->_mc___05Fs3393));
    bufp->chgBit(oldp+2071,(vlSelf->_cp___05Fs10216));
    bufp->chgBit(oldp+2072,(vlSelf->_cp___05Fs10540));
    bufp->chgBit(oldp+2073,(vlSelf->_mc___05Fs3395));
    bufp->chgBit(oldp+2074,(vlSelf->_mc___05Fs3397));
    bufp->chgBit(oldp+2075,(vlSelf->_cp___05Fs10568));
    bufp->chgBit(oldp+2076,(vlSelf->_mc___05Fs3399));
    bufp->chgBit(oldp+2077,(vlSelf->_mc___05Fs3402));
    bufp->chgBit(oldp+2078,(vlSelf->_mc___05Fs3401));
    bufp->chgBit(oldp+2079,(vlSelf->_cp___05Fs10592));
    bufp->chgBit(oldp+2080,(vlSelf->_cp___05Fs10488));
    __Vtemp_19[0U] = (((IData)((((IData)(vlSelf->_mc___05Fs121)
                                  ? vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_bus_xing_in_d_bits_data
                                  : 0ULL) | (((IData)(vlSelf->_mc___05Fs122)
                                               ? vlSelf->TestHarness__DOT__ldut__DOT___coh_wrapper_auto_coherent_jbar_anon_in_d_bits_data
                                               : 0ULL) 
                                             | ((IData)(vlSelf->_mc___05Fs123)
                                                 ? vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4index_auto_in_r_bits_data
                                                 : 0ULL)))) 
                       << 0xeU) | (((IData)(vlSelf->_cp___05Fs1193) 
                                    << 0xdU) | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_bits_sink) 
                                                 << 0xbU) 
                                                | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__anonIn_1_d_bits_source) 
                                                    << 9U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_bits_size) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_bits_param) 
                                                          << 3U) 
                                                         | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__system_bus_xbar__DOT__in_1_d_bits_opcode)))))));
    __Vtemp_19[1U] = (((IData)((((IData)(vlSelf->_mc___05Fs121)
                                  ? vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_bus_xing_in_d_bits_data
                                  : 0ULL) | (((IData)(vlSelf->_mc___05Fs122)
                                               ? vlSelf->TestHarness__DOT__ldut__DOT___coh_wrapper_auto_coherent_jbar_anon_in_d_bits_data
                                               : 0ULL) 
                                             | ((IData)(vlSelf->_mc___05Fs123)
                                                 ? vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4index_auto_in_r_bits_data
                                                 : 0ULL)))) 
                       >> 0x12U) | ((IData)(((((IData)(vlSelf->_mc___05Fs121)
                                                ? vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_bus_xing_in_d_bits_data
                                                : 0ULL) 
                                              | (((IData)(vlSelf->_mc___05Fs122)
                                                   ? vlSelf->TestHarness__DOT__ldut__DOT___coh_wrapper_auto_coherent_jbar_anon_in_d_bits_data
                                                   : 0ULL) 
                                                 | ((IData)(vlSelf->_mc___05Fs123)
                                                     ? vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4index_auto_in_r_bits_data
                                                     : 0ULL))) 
                                             >> 0x20U)) 
                                    << 0xeU));
    __Vtemp_19[2U] = (((IData)(vlSelf->_cp___05Fs1191) 
                       << 0xeU) | ((IData)(((((IData)(vlSelf->_mc___05Fs121)
                                               ? vlSelf->TestHarness__DOT__ldut__DOT___cbus_auto_bus_xing_in_d_bits_data
                                               : 0ULL) 
                                             | (((IData)(vlSelf->_mc___05Fs122)
                                                  ? vlSelf->TestHarness__DOT__ldut__DOT___coh_wrapper_auto_coherent_jbar_anon_in_d_bits_data
                                                  : 0ULL) 
                                                | ((IData)(vlSelf->_mc___05Fs123)
                                                    ? vlSelf->TestHarness__DOT__ldut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4index_auto_in_r_bits_data
                                                    : 0ULL))) 
                                            >> 0x20U)) 
                                   >> 0x12U));
    bufp->chgWData(oldp+2081,(__Vtemp_19),79);
    bufp->chgBit(oldp+2084,(vlSelf->_mc___05Fs3400));
    bufp->chgBit(oldp+2085,(vlSelf->_cp___05Fs10475));
    bufp->chgBit(oldp+2086,(vlSelf->_cp___05Fs10590));
    __Vtemp_21[0U] = (IData)((((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_mask)) 
                               << 0x2cU) | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)) 
                                             << 0xcU) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_source) 
                                                                << 0xaU) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size) 
                                                                   << 6U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_param) 
                                                                      << 3U) 
                                                                     | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_opcode)))))))));
    __Vtemp_21[1U] = (((IData)(((IData)(vlSelf->_mc___05Fs954)
                                 ? (((IData)(vlSelf->_cp___05Fs9252) 
                                     & ((IData)(vlSelf->_mc___05Fs1315) 
                                        & ((IData)(vlSelf->_mc___05Fs1311) 
                                           | ((IData)(vlSelf->_mc___05Fs1310) 
                                              | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h1fd10179__0)))))
                                     ? vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data
                                     : 0ULL) : 0ULL)) 
                       << 0x14U) | (IData)(((((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_mask)) 
                                              << 0x2cU) 
                                             | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_source) 
                                                                    << 0xaU) 
                                                                   | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_param) 
                                                                          << 3U) 
                                                                         | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_opcode)))))))) 
                                            >> 0x20U)));
    __Vtemp_21[2U] = (((IData)(((IData)(vlSelf->_mc___05Fs954)
                                 ? (((IData)(vlSelf->_cp___05Fs9252) 
                                     & ((IData)(vlSelf->_mc___05Fs1315) 
                                        & ((IData)(vlSelf->_mc___05Fs1311) 
                                           | ((IData)(vlSelf->_mc___05Fs1310) 
                                              | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h1fd10179__0)))))
                                     ? vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data
                                     : 0ULL) : 0ULL)) 
                       >> 0xcU) | ((IData)((((IData)(vlSelf->_mc___05Fs954)
                                              ? (((IData)(vlSelf->_cp___05Fs9252) 
                                                  & ((IData)(vlSelf->_mc___05Fs1315) 
                                                     & ((IData)(vlSelf->_mc___05Fs1311) 
                                                        | ((IData)(vlSelf->_mc___05Fs1310) 
                                                           | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h1fd10179__0)))))
                                                  ? vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data
                                                  : 0ULL)
                                              : 0ULL) 
                                            >> 0x20U)) 
                                   << 0x14U));
    __Vtemp_21[3U] = ((IData)((((IData)(vlSelf->_mc___05Fs954)
                                 ? (((IData)(vlSelf->_cp___05Fs9252) 
                                     & ((IData)(vlSelf->_mc___05Fs1315) 
                                        & ((IData)(vlSelf->_mc___05Fs1311) 
                                           | ((IData)(vlSelf->_mc___05Fs1310) 
                                              | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h1fd10179__0)))))
                                     ? vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data
                                     : 0ULL) : 0ULL) 
                               >> 0x20U)) >> 0xcU);
    bufp->chgWData(oldp+2087,(__Vtemp_21),117);
    bufp->chgBit(oldp+2091,(vlSelf->_mc___05Fs3403));
    bufp->chgBit(oldp+2092,(vlSelf->_cp___05Fs10516));
    bufp->chgBit(oldp+2093,(vlSelf->_cp___05Fs10599));
    bufp->chgBit(oldp+2094,(vlSelf->_mc___05Fs3404));
    bufp->chgBit(oldp+2095,(vlSelf->_cp___05Fs10586));
    bufp->chgBit(oldp+2096,(vlSelf->_mc___05Fs2800));
    bufp->chgBit(oldp+2097,(vlSelf->_rs___05Fs3498));
    bufp->chgBit(oldp+2098,(vlSelf->_mc___05Fs2723));
    bufp->chgBit(oldp+2099,(vlSelf->_mc___05Fs2722));
    bufp->chgBit(oldp+2100,(vlSelf->_mc___05Fs2728));
    bufp->chgBit(oldp+2101,(vlSelf->_rs___05Fs2556));
    bufp->chgQData(oldp+2102,(vlSelf->_rs___05Fs2557),40);
    bufp->chgBit(oldp+2104,(vlSelf->_rs___05Fs2558));
    bufp->chgCData(oldp+2105,(vlSelf->_rs___05Fs1925),2);
    bufp->chgBit(oldp+2106,(vlSelf->_cp___05Fs9294));
    bufp->chgBit(oldp+2107,(vlSelf->_cp___05Fs9293));
    bufp->chgBit(oldp+2108,(vlSelf->_cp___05Fs9786));
    bufp->chgQData(oldp+2109,(vlSelf->_rs___05Fs1937),40);
    bufp->chgBit(oldp+2111,(vlSelf->_rs___05Fs1938));
    bufp->chgBit(oldp+2112,((((1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__io_cpu_perf_release_counter)) 
                              | (0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__beats1_1))) 
                             & (IData)(vlSelf->_cp___05Fs10516))));
    bufp->chgBit(oldp+2113,(vlSelf->_mc___05Fs3340));
    bufp->chgCData(oldp+2114,((0x1fU & (((IData)(vlSelf->_mc___05Fs2441)
                                          ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wb_toint_exc)
                                          : 0U) | (
                                                   ((IData)(vlSelf->_mc___05Fs2425)
                                                     ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_flags)
                                                     : 0U) 
                                                   | ((IData)(vlSelf->_mc___05Fs2442)
                                                       ? 
                                                      ((0x13U 
                                                        >= 
                                                        (0x1fU 
                                                         & ((IData)(5U) 
                                                            * (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_0_pipeid))))
                                                        ? 
                                                       ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__io_out_pipe_b_exc) 
                                                          << 0xfU) 
                                                         | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_invalidExc_pipe_b) 
                                                              << 0xeU) 
                                                             | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                                 << 0xcU) 
                                                                | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                                     & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                                        | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                                                           & ((1U 
                                                                               != 
                                                                               (3U 
                                                                                & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp) 
                                                                                >> 8U))) 
                                                                              & ((~ 
                                                                                ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_detectTininess_pipe_b) 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->_mc___05Fs1786)
                                                                                 ? 
                                                                                ((IData)(vlSelf->_mc___05Fs1782) 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_haf133fcb__0 
                                                                                >> 2U))
                                                                                 : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb129c4ea__0))) 
                                                                                & (((IData)(vlSelf->_mc___05Fs1786)
                                                                                 ? 
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                                >> 0x18U)) 
                                                                                & ((0U 
                                                                                != vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_5) 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_7) 
                                                                                & ((IData)(vlSelf->_mc___05Fs1786)
                                                                                 ? 
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                                                                >> 2U)
                                                                                 : 
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                                                                >> 1U))) 
                                                                                | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                                                & (((IData)(vlSelf->_mc___05Fs1786) 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                                                                >> 2U)) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig)))))))))) 
                                                                                & ((IData)(vlSelf->_mc___05Fs1786)
                                                                                 ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb129c4ea__0)
                                                                                 : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))))) 
                                                                    << 0xbU) 
                                                                   | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                                       | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                                          & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                                             | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))) 
                                                                      << 0xaU)))) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__io_out_pipe_b_exc) 
                                                                << 5U) 
                                                               | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__io_out_pipe_b_exc)))) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(5U) 
                                                            * (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_0_pipeid))))
                                                        : 0U)
                                                       : 0U))))),5);
    bufp->chgQData(oldp+2115,(((IData)(vlSelf->_mc___05Fs1839)
                                ? vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__toint
                                : (((QData)((IData)(
                                                    (- (IData)((IData)(vlSelf->_mc___05Fs1838))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__toint))))),64);
    bufp->chgBit(oldp+2117,((1U & (~ (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_wflags) 
                                       & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_valid)) 
                                      | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_wflags) 
                                          & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_reg_valid)) 
                                         | ((IData)(vlSelf->_mc___05Fs2441) 
                                            | ((0U 
                                                != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wen)) 
                                               | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_inFlight)))))))));
    bufp->chgBit(oldp+2118,(vlSelf->_cp___05Fs9729));
    bufp->chgBit(oldp+2119,(vlSelf->_cp___05Fs9732));
    bufp->chgBit(oldp+2120,(vlSelf->_cp___05Fs9735));
    bufp->chgBit(oldp+2121,(vlSelf->_mc___05Fs3349));
    bufp->chgBit(oldp+2122,(vlSelf->_rs___05Fs3325));
    bufp->chgBit(oldp+2123,(vlSelf->_mc___05Fs1675));
    bufp->chgBit(oldp+2124,(vlSelf->_mc___05Fs1479));
    bufp->chgBit(oldp+2125,(vlSelf->_cp___05Fs9385));
    bufp->chgBit(oldp+2126,(vlSelf->_cp___05Fs9396));
    bufp->chgBit(oldp+2127,(vlSelf->_mc___05Fs1365));
    bufp->chgCData(oldp+2128,(vlSelf->_rs___05Fs3436),2);
    bufp->chgBit(oldp+2129,(vlSelf->_rs___05Fs3437));
    bufp->chgCData(oldp+2130,(vlSelf->_rs___05Fs3438),2);
    bufp->chgBit(oldp+2131,(vlSelf->_rs___05Fs3439));
    bufp->chgQData(oldp+2132,(vlSelf->_rs___05Fs3440),39);
    bufp->chgCData(oldp+2134,(vlSelf->_rs___05Fs3441),5);
    bufp->chgCData(oldp+2135,(vlSelf->_rs___05Fs3442),8);
    bufp->chgBit(oldp+2136,(vlSelf->_rs___05Fs3443));
    bufp->chgCData(oldp+2137,(((IData)(vlSelf->_mc___05Fs3354)
                                ? 2U : ((IData)(vlSelf->_mc___05Fs3353)
                                         ? 3U : (IData)(vlSelf->_mc___05Fs3352)))),2);
    bufp->chgBit(oldp+2138,(vlSelf->_cp___05Fs9635));
    bufp->chgBit(oldp+2139,(vlSelf->_cp___05Fs9636));
    bufp->chgBit(oldp+2140,(vlSelf->_rs___05Fs3460));
    bufp->chgBit(oldp+2141,(vlSelf->_cp___05Fs9638));
    bufp->chgBit(oldp+2142,(vlSelf->_cp___05Fs9650));
    bufp->chgQData(oldp+2143,((((QData)((IData)((1U 
                                                 & ((IData)(vlSelf->_mc___05Fs3356)
                                                     ? (IData)(
                                                               (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___io_adder_out_output 
                                                                >> 0x27U))
                                                     : 
                                                    (~ (IData)(
                                                               (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___io_adder_out_output 
                                                                >> 0x26U))))))) 
                                << 0x27U) | (0x7fffffffffULL 
                                             & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT___io_adder_out_output))),40);
    bufp->chgCData(oldp+2145,(vlSelf->_rs___05Fs3340),5);
    bufp->chgCData(oldp+2146,(vlSelf->_rs___05Fs3427),2);
    bufp->chgCData(oldp+2147,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_hls)
                                ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_hstatus_spvp)
                                : ((IData)(vlSelf->_mc___05Fs2828)
                                    ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_mpp)
                                    : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)))),2);
    bufp->chgCData(oldp+2148,(vlSelf->_rs___05Fs3291),4);
    bufp->chgQData(oldp+2149,(vlSelf->_rs___05Fs3293),44);
    bufp->chgBit(oldp+2151,(vlSelf->_mc___05Fs2819));
    bufp->chgCData(oldp+2152,(vlSelf->_rs___05Fs3007),2);
    bufp->chgBit(oldp+2153,(vlSelf->_mc___05Fs1029));
    bufp->chgBit(oldp+2154,(vlSelf->_rs___05Fs3023));
    bufp->chgBit(oldp+2155,(vlSelf->_rs___05Fs3102));
    bufp->chgCData(oldp+2156,(vlSelf->_rs___05Fs3104),2);
    bufp->chgBit(oldp+2157,(vlSelf->_rs___05Fs3105));
    bufp->chgBit(oldp+2158,(vlSelf->_rs___05Fs3106));
    bufp->chgBit(oldp+2159,(vlSelf->_rs___05Fs3107));
    bufp->chgIData(oldp+2160,(vlSelf->_rs___05Fs3108),30);
    bufp->chgBit(oldp+2161,(vlSelf->_rs___05Fs3109));
    bufp->chgCData(oldp+2162,(vlSelf->_rs___05Fs3111),2);
    bufp->chgBit(oldp+2163,(vlSelf->_rs___05Fs3112));
    bufp->chgBit(oldp+2164,(vlSelf->_rs___05Fs3113));
    bufp->chgBit(oldp+2165,(vlSelf->_rs___05Fs3114));
    bufp->chgIData(oldp+2166,(vlSelf->_rs___05Fs3115),30);
    bufp->chgBit(oldp+2167,(vlSelf->_rs___05Fs3116));
    bufp->chgCData(oldp+2168,(vlSelf->_rs___05Fs3118),2);
    bufp->chgBit(oldp+2169,(vlSelf->_rs___05Fs3119));
    bufp->chgBit(oldp+2170,(vlSelf->_rs___05Fs3120));
    bufp->chgBit(oldp+2171,(vlSelf->_rs___05Fs3121));
    bufp->chgIData(oldp+2172,(vlSelf->_rs___05Fs3122),30);
    bufp->chgBit(oldp+2173,(vlSelf->_rs___05Fs3123));
    bufp->chgCData(oldp+2174,(vlSelf->_rs___05Fs3125),2);
    bufp->chgBit(oldp+2175,(vlSelf->_rs___05Fs3126));
    bufp->chgBit(oldp+2176,(vlSelf->_rs___05Fs3127));
    bufp->chgBit(oldp+2177,(vlSelf->_rs___05Fs3128));
    bufp->chgIData(oldp+2178,(vlSelf->_rs___05Fs3129),30);
    bufp->chgBit(oldp+2179,(vlSelf->_rs___05Fs3130));
    bufp->chgCData(oldp+2180,(vlSelf->_rs___05Fs3132),2);
    bufp->chgBit(oldp+2181,(vlSelf->_rs___05Fs3133));
    bufp->chgBit(oldp+2182,(vlSelf->_rs___05Fs3134));
    bufp->chgBit(oldp+2183,(vlSelf->_rs___05Fs3135));
    bufp->chgIData(oldp+2184,(vlSelf->_rs___05Fs3136),30);
    bufp->chgBit(oldp+2185,(vlSelf->_rs___05Fs3137));
    bufp->chgCData(oldp+2186,(vlSelf->_rs___05Fs3139),2);
    bufp->chgBit(oldp+2187,(vlSelf->_rs___05Fs3140));
    bufp->chgBit(oldp+2188,(vlSelf->_rs___05Fs3141));
    bufp->chgBit(oldp+2189,(vlSelf->_rs___05Fs3142));
    bufp->chgIData(oldp+2190,(vlSelf->_rs___05Fs3143),30);
    bufp->chgBit(oldp+2191,(vlSelf->_rs___05Fs3144));
    bufp->chgCData(oldp+2192,(vlSelf->_rs___05Fs3146),2);
    bufp->chgBit(oldp+2193,(vlSelf->_rs___05Fs3147));
    bufp->chgBit(oldp+2194,(vlSelf->_rs___05Fs3148));
    bufp->chgBit(oldp+2195,(vlSelf->_rs___05Fs3149));
    bufp->chgIData(oldp+2196,(vlSelf->_rs___05Fs3150),30);
    bufp->chgBit(oldp+2197,(vlSelf->_rs___05Fs3151));
    bufp->chgCData(oldp+2198,(vlSelf->_rs___05Fs3153),2);
    bufp->chgBit(oldp+2199,(vlSelf->_rs___05Fs3154));
    bufp->chgBit(oldp+2200,(vlSelf->_rs___05Fs3155));
    bufp->chgBit(oldp+2201,(vlSelf->_rs___05Fs3156));
    bufp->chgIData(oldp+2202,(vlSelf->_rs___05Fs3157),30);
    bufp->chgQData(oldp+2203,(vlSelf->_rs___05Fs3305),64);
    bufp->chgCData(oldp+2205,(vlSelf->_rs___05Fs3296),3);
    bufp->chgBit(oldp+2206,(vlSelf->_cp___05Fs9722));
    bufp->chgBit(oldp+2207,(vlSelf->_cp___05Fs9721));
    bufp->chgBit(oldp+2208,(vlSelf->_rs___05Fs3294));
    bufp->chgBit(oldp+2209,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_valid) 
                             & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_xcpt)) 
                                & ((IData)(vlSelf->_cp___05Fs9638) 
                                   | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_sfence))))));
    bufp->chgBit(oldp+2210,(vlSelf->_mc___05Fs3234));
    bufp->chgBit(oldp+2211,(vlSelf->_mc___05Fs3236));
    bufp->chgBit(oldp+2212,(vlSelf->_cp___05Fs10069));
    bufp->chgBit(oldp+2213,(vlSelf->_cp___05Fs10070));
    bufp->chgBit(oldp+2214,(vlSelf->_mc___05Fs3278));
    bufp->chgBit(oldp+2215,(vlSelf->_mc___05Fs3277));
    bufp->chgBit(oldp+2216,(vlSelf->_mc___05Fs3281));
    bufp->chgBit(oldp+2217,(vlSelf->_mc___05Fs3280));
    bufp->chgBit(oldp+2218,(vlSelf->_mc___05Fs3316));
    bufp->chgBit(oldp+2219,(vlSelf->_cp___05Fs10083));
    bufp->chgBit(oldp+2220,(vlSelf->_mc___05Fs3323));
    bufp->chgBit(oldp+2221,(vlSelf->_mc___05Fs3335));
    bufp->chgBit(oldp+2222,(vlSelf->_cp___05Fs10086));
    bufp->chgBit(oldp+2223,(vlSelf->_mc___05Fs3342));
    bufp->chgBit(oldp+2224,(vlSelf->_mc___05Fs3343));
    bufp->chgBit(oldp+2225,(vlSelf->_mc___05Fs3344));
    bufp->chgBit(oldp+2226,(vlSelf->_cp___05Fs10097));
    bufp->chgBit(oldp+2227,(vlSelf->_mc___05Fs3360));
    bufp->chgQData(oldp+2228,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_alu_dw)
                                ? vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT__out
                                : (((QData)((IData)(
                                                    (- (IData)((IData)(vlSelf->_mc___05Fs3109))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT__out))))),64);
    bufp->chgBit(oldp+2230,(vlSelf->_mc___05Fs3102));
    bufp->chgBit(oldp+2231,(vlSelf->_rs___05Fs3062));
    bufp->chgBit(oldp+2232,(vlSelf->_rs___05Fs3063));
    bufp->chgCData(oldp+2233,(vlSelf->_rs___05Fs3065),2);
    bufp->chgBit(oldp+2234,(vlSelf->_rs___05Fs3066));
    bufp->chgBit(oldp+2235,(vlSelf->_rs___05Fs3068));
    bufp->chgBit(oldp+2236,(vlSelf->_rs___05Fs3069));
    bufp->chgBit(oldp+2237,(vlSelf->_rs___05Fs3070));
    bufp->chgBit(oldp+2238,(vlSelf->_rs___05Fs3071));
    bufp->chgBit(oldp+2239,(vlSelf->_rs___05Fs3072));
    bufp->chgQData(oldp+2240,(vlSelf->_rs___05Fs3073),39);
    bufp->chgBit(oldp+2242,(vlSelf->_mc___05Fs3243));
    bufp->chgBit(oldp+2243,(((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action)) 
                             & (IData)(vlSelf->_cp___05Fs10045))));
    bufp->chgBit(oldp+2244,(((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action)) 
                             & (IData)(vlSelf->_cp___05Fs10046))));
    bufp->chgBit(oldp+2245,(vlSelf->_mc___05Fs3244));
    bufp->chgBit(oldp+2246,(((IData)(vlSelf->_cp___05Fs10045) 
                             & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action))));
    bufp->chgBit(oldp+2247,(((IData)(vlSelf->_cp___05Fs10046) 
                             & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action))));
    bufp->chgBit(oldp+2248,(vlSelf->_cp___05Fs10045));
    bufp->chgBit(oldp+2249,(vlSelf->_cp___05Fs10046));
    bufp->chgBit(oldp+2250,(vlSelf->_cp___05Fs10047));
    bufp->chgBit(oldp+2251,((0xfU & ((IData)(vlSelf->_cp___05Fs9832) 
                                     & ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_m) 
                                          << 3U) | 
                                         (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_s) 
                                           << 1U) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_u))) 
                                        >> (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv))))));
    bufp->chgCData(oldp+2252,((0x1fU & ((((IData)(vlSelf->_mc___05Fs2441)
                                           ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wb_toint_exc)
                                           : 0U) | 
                                         (((IData)(vlSelf->_mc___05Fs2425)
                                            ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_flags)
                                            : 0U) | 
                                          ((IData)(vlSelf->_mc___05Fs2442)
                                            ? ((0x13U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_0_pipeid))))
                                                ? (
                                                   (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__io_out_pipe_b_exc) 
                                                     << 0xfU) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_invalidExc_pipe_b) 
                                                         << 0xeU) 
                                                        | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                            << 0xcU) 
                                                           | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                                & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                                   | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                                                      & ((1U 
                                                                          != 
                                                                          (3U 
                                                                           & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp) 
                                                                              >> 8U))) 
                                                                         & ((~ 
                                                                             ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_detectTininess_pipe_b) 
                                                                              & ((~ 
                                                                                ((IData)(vlSelf->_mc___05Fs1786)
                                                                                 ? 
                                                                                ((IData)(vlSelf->_mc___05Fs1782) 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_haf133fcb__0 
                                                                                >> 2U))
                                                                                 : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb129c4ea__0))) 
                                                                                & (((IData)(vlSelf->_mc___05Fs1786)
                                                                                 ? 
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                                >> 0x18U)) 
                                                                                & ((0U 
                                                                                != vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_5) 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_7) 
                                                                                & ((IData)(vlSelf->_mc___05Fs1786)
                                                                                 ? 
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                                                                >> 2U)
                                                                                 : 
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                                                                >> 1U))) 
                                                                                | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                                                & (((IData)(vlSelf->_mc___05Fs1786) 
                                                                                & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                                                                >> 2U)) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig)))))))))) 
                                                                            & ((IData)(vlSelf->_mc___05Fs1786)
                                                                                ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb129c4ea__0)
                                                                                : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))))) 
                                                               << 0xbU) 
                                                              | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                                     & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                                        | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))) 
                                                                 << 0xaU)))) 
                                                       | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__io_out_pipe_b_exc) 
                                                           << 5U) 
                                                          | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__io_out_pipe_b_exc)))) 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(5U) 
                                                       * (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_0_pipeid))))
                                                : 0U)
                                            : 0U))) 
                                        & (- (IData)((IData)(vlSelf->_mc___05Fs3340)))))),5);
    bufp->chgIData(oldp+2253,(((((IData)(vlSelf->_mc___05Fs3339)
                                  ? (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                     >> 0x10U) : 0U) 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_raw_inst))),32);
    bufp->chgBit(oldp+2254,((1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_98) 
                                   | ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__csr_exists)) 
                                      | (((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__allow_sfence_vma)) 
                                          & ((0x180U 
                                              == (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                  >> 0x14U)) 
                                             | (0x680U 
                                                == 
                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                                                 >> 0x14U)))) 
                                         | (((~ ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv) 
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
                                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___io_decode_0_fp_illegal_output))))))))));
    bufp->chgBit(oldp+2255,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_98) 
                             | (((~ ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_tw)) 
                                     | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv) 
                                        >> 1U))) & 
                                 (0x3ffU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_88))) 
                                | (((~ ((~ ((IData)(vlSelf->_cp___05Fs9839) 
                                            & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_tsr))) 
                                        | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv) 
                                           >> 1U))) 
                                    & (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_90))) 
                                   | (((0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_90)) 
                                       & (IData)(((0x48000000U 
                                                   == 
                                                   (0x48000000U 
                                                    & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                                  & (IData)(vlSelf->_cp___05Fs9832)))) 
                                      | ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__allow_sfence_vma)) 
                                         & (0x1ffffU 
                                            == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_89))))))));
    bufp->chgBit(oldp+2256,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_v) 
                             & (((~ (IData)(vlSelf->_mc___05Fs1432)) 
                                 & (0x3ffU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_88))) 
                                | (((0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_90)) 
                                    & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h9cf01ff6__0)) 
                                   | ((~ (IData)(vlSelf->_mc___05Fs1432)) 
                                      & (0x1ffffU == vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_89)))))));
    bufp->chgCData(oldp+2257,(((IData)(vlSelf->_mc___05Fs2828)
                                ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_mpp)
                                : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv))),2);
    bufp->chgBit(oldp+2258,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_v) 
                             | ((IData)(vlSelf->_mc___05Fs2828) 
                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_mpv)))));
    bufp->chgBit(oldp+2259,(vlSelf->_mc___05Fs2815));
    bufp->chgBit(oldp+2260,(vlSelf->_rs___05Fs3232));
    bufp->chgQData(oldp+2261,((0xffffffffffULL & ((IData)(vlSelf->_cp___05Fs9837)
                                                   ? 
                                                  ((0x20000000U 
                                                    & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst)
                                                    ? 
                                                   ((IData)(vlSelf->_cp___05Fs9840)
                                                     ? vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_29
                                                     : vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_27)
                                                    : 
                                                   ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_v)
                                                     ? 
                                                    (~ 
                                                     ((0xfffffffffcULL 
                                                       & ((~ 
                                                           (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_vsepc 
                                                            >> 2U)) 
                                                          << 2U)) 
                                                      | (QData)((IData)(
                                                                        (3U 
                                                                         & (1U 
                                                                            | ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_vsepc)) 
                                                                               | (2U 
                                                                                & ((~ (IData)(vlSelf->_mc___05Fs2805)) 
                                                                                << 1U)))))))))
                                                     : vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_31))
                                                   : 
                                                  ((IData)(vlSelf->_mc___05Fs2827)
                                                    ? (QData)((IData)(
                                                                      ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_debug)
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
                                                                          (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_110 
                                                                           >> 8U))) 
                                                          << 6U) 
                                                         | (QData)((IData)(
                                                                           (0x3fU 
                                                                            & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__cause)))))
                                                         : 
                                                        (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_110 
                                                         >> 2U)) 
                                                       << 2U)))))),40);
    bufp->chgBit(oldp+2263,(vlSelf->_mc___05Fs3245));
    bufp->chgBit(oldp+2264,(vlSelf->_cp___05Fs10098));
    bufp->chgQData(oldp+2265,(vlSelf->_rs___05Fs3469),40);
    bufp->chgBit(oldp+2267,(vlSelf->_cp___05Fs9830));
    bufp->chgCData(oldp+2268,(((IData)(vlSelf->_cp___05Fs9837)
                                ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__ret_prv)
                                : ((IData)(vlSelf->_cp___05Fs9830)
                                    ? ((IData)(vlSelf->_mc___05Fs2827)
                                        ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_debug)
                                            ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)
                                            : 3U) : 
                                       (1U | (2U & 
                                              ((~ (IData)(vlSelf->_mc___05Fs2823)) 
                                               << 1U))))
                                    : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)))),2);
    bufp->chgBit(oldp+2269,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__plic_domain__DOT__intsource_1__DOT__reg_0__DOT__reg_0) 
                             | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mip_seip))));
    bufp->chgBit(oldp+2270,(vlSelf->_mc___05Fs2818));
    bufp->chgBit(oldp+2271,(vlSelf->_mc___05Fs2817));
    bufp->chgBit(oldp+2272,(vlSelf->_cp___05Fs9837));
    bufp->chgBit(oldp+2273,(vlSelf->_cp___05Fs9843));
    bufp->chgBit(oldp+2274,(vlSelf->_mc___05Fs2831));
    bufp->chgBit(oldp+2275,(vlSelf->_mc___05Fs2830));
    bufp->chgBit(oldp+2276,(vlSelf->_mc___05Fs2827));
    bufp->chgBit(oldp+2277,(vlSelf->_mc___05Fs2823));
    bufp->chgBit(oldp+2278,(vlSelf->_mc___05Fs2824));
    bufp->chgBit(oldp+2279,(vlSelf->_cp___05Fs10007));
    bufp->chgBit(oldp+2280,((1U & ((~ (IData)(vlSelf->_cp___05Fs10085)) 
                                   & (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_wxd))))));
    bufp->chgBit(oldp+2281,(vlSelf->_cp___05Fs10062));
    bufp->chgQData(oldp+2282,((((QData)((IData)(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__req_dw)
                                                  ? (IData)(
                                                            (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__result 
                                                             >> 0x20U))
                                                  : 
                                                 (- (IData)((IData)(vlSelf->_mc___05Fs3217)))))) 
                                << 0x20U) | (QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__loOut)))),64);
    bufp->chgCData(oldp+2284,(vlSelf->_rs___05Fs3315),5);
    bufp->chgBit(oldp+2285,(vlSelf->_mc___05Fs3111));
    bufp->chgBit(oldp+2286,(vlSelf->_mc___05Fs3113));
    bufp->chgBit(oldp+2287,(vlSelf->_mc___05Fs3115));
    bufp->chgBit(oldp+2288,(vlSelf->_cp___05Fs10057));
    bufp->chgBit(oldp+2289,(vlSelf->_cp___05Fs9805));
    bufp->chgCData(oldp+2290,(((IData)(vlSelf->_cp___05Fs9810)
                                ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__buf_btb_cfiType)
                                : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_btb_cfiType))),2);
    bufp->chgBit(oldp+2291,(((IData)(vlSelf->_cp___05Fs9810)
                              ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__buf_btb_taken)
                              : (IData)(vlSelf->_mc___05Fs2722))));
    bufp->chgCData(oldp+2292,(((IData)(vlSelf->_cp___05Fs9810)
                                ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__buf_btb_mask)
                                : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_btb_mask))),2);
    bufp->chgBit(oldp+2293,(((IData)(vlSelf->_cp___05Fs9810)
                              ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__buf_btb_bridx)
                              : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_btb_bridx))));
    bufp->chgQData(oldp+2294,(((IData)(vlSelf->_cp___05Fs9810)
                                ? vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__buf_btb_target
                                : vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_btb_target)),39);
    bufp->chgCData(oldp+2296,(((IData)(vlSelf->_cp___05Fs9810)
                                ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__buf_btb_entry)
                                : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_btb_entry))),5);
    bufp->chgCData(oldp+2297,(((IData)(vlSelf->_cp___05Fs9810)
                                ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__buf_btb_bht_history)
                                : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_btb_bht_history))),8);
    bufp->chgBit(oldp+2298,(((IData)(vlSelf->_cp___05Fs9810)
                              ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__buf_btb_bht_value)
                              : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_btb_bht_value))));
    bufp->chgBit(oldp+2299,(vlSelf->_mc___05Fs3242));
    bufp->chgBit(oldp+2300,(vlSelf->_mc___05Fs3241));
    bufp->chgBit(oldp+2301,(vlSelf->_mc___05Fs3240));
    bufp->chgBit(oldp+2302,(vlSelf->_mc___05Fs3239));
    bufp->chgBit(oldp+2303,(vlSelf->_mc___05Fs3238));
    bufp->chgBit(oldp+2304,(vlSelf->_mc___05Fs3237));
    bufp->chgBit(oldp+2305,(vlSelf->_mc___05Fs2732));
    bufp->chgBit(oldp+2306,(vlSelf->_cp___05Fs9811));
    bufp->chgCData(oldp+2307,(((IData)(vlSelf->_mc___05Fs2619)
                                ? 3U : 0x1fU)),7);
    bufp->chgQData(oldp+2308,(((IData)(vlSelf->_cp___05Fs10062)
                                ? (((QData)((IData)(
                                                    ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__req_dw)
                                                      ? (IData)(
                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__result 
                                                                 >> 0x20U))
                                                      : 
                                                     (- (IData)((IData)(vlSelf->_mc___05Fs3217)))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__loOut)))
                                : 0ULL)),64);
    bufp->chgCData(oldp+2310,(((IData)(vlSelf->_cp___05Fs10062)
                                ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__req_tag)
                                : 0U)),5);
    bufp->chgBit(oldp+2311,(vlSelf->_cp___05Fs8026));
    bufp->chgBit(oldp+2312,(vlSelf->_cp___05Fs7955));
    bufp->chgCData(oldp+2313,(((IData)(vlSelf->_cp___05Fs9760)
                                ? 0U : (1U | ((0x7cU 
                                               & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_inst 
                                                  >> 5U)) 
                                              | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_fp) 
                                                 << 1U))))),7);
    bufp->chgBit(oldp+2314,((1U & ((~ (IData)(vlSelf->_cp___05Fs9760)) 
                                   & (~ ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_hls)
                                          ? (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_inst 
                                             >> 0x14U)
                                          : (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_inst 
                                             >> 0xeU)))))));
    bufp->chgBit(oldp+2315,(vlSelf->_cp___05Fs9760));
    bufp->chgBit(oldp+2316,((1U & ((~ (IData)(vlSelf->_cp___05Fs9760)) 
                                   & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_111)) 
                                      | ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_fp)) 
                                         & (0U == (0xf80U 
                                                   & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_inst))))))));
    bufp->chgBit(oldp+2317,(vlSelf->_cp___05Fs8640));
    bufp->chgBit(oldp+2318,(vlSelf->_mc___05Fs998));
    bufp->chgBit(oldp+2319,(vlSelf->_rs___05Fs2895));
    bufp->chgBit(oldp+2320,(vlSelf->_rs___05Fs2896));
    bufp->chgBit(oldp+2321,(vlSelf->_rs___05Fs2897));
    bufp->chgBit(oldp+2322,(vlSelf->_cp___05Fs9783));
    bufp->chgBit(oldp+2323,(vlSelf->_rs___05Fs2899));
    bufp->chgBit(oldp+2324,(vlSelf->_rs___05Fs2900));
    bufp->chgBit(oldp+2325,(vlSelf->_rs___05Fs2901));
    bufp->chgQData(oldp+2326,(vlSelf->_rs___05Fs2909),44);
    bufp->chgBit(oldp+2328,(vlSelf->_rs___05Fs2911));
    bufp->chgBit(oldp+2329,(vlSelf->_rs___05Fs2912));
    bufp->chgBit(oldp+2330,(vlSelf->_rs___05Fs2913));
    bufp->chgBit(oldp+2331,(vlSelf->_rs___05Fs2914));
    bufp->chgBit(oldp+2332,(vlSelf->_rs___05Fs2915));
    bufp->chgBit(oldp+2333,(vlSelf->_rs___05Fs2916));
    bufp->chgBit(oldp+2334,(vlSelf->_rs___05Fs2917));
    bufp->chgBit(oldp+2335,(vlSelf->_rs___05Fs2918));
    bufp->chgBit(oldp+2336,(vlSelf->_rs___05Fs2904));
    bufp->chgBit(oldp+2337,(vlSelf->_cp___05Fs7842));
    bufp->chgQData(oldp+2338,((((IData)(vlSelf->_cp___05Fs9252) 
                                & ((IData)(vlSelf->_mc___05Fs1315) 
                                   & ((IData)(vlSelf->_mc___05Fs1311) 
                                      | ((IData)(vlSelf->_mc___05Fs1310) 
                                         | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h1fd10179__0)))))
                                ? vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data
                                : 0ULL)),64);
    bufp->chgBit(oldp+2340,(vlSelf->_rs___05Fs1854));
    bufp->chgBit(oldp+2341,(vlSelf->_mc___05Fs2596));
    bufp->chgCData(oldp+2342,(vlSelf->_rs___05Fs1923),7);
    bufp->chgCData(oldp+2343,(vlSelf->_rs___05Fs1924),5);
    bufp->chgBit(oldp+2344,(vlSelf->_rs___05Fs1926));
    bufp->chgCData(oldp+2345,(vlSelf->_rs___05Fs1927),2);
    bufp->chgBit(oldp+2346,(vlSelf->_rs___05Fs1928));
    bufp->chgCData(oldp+2347,(vlSelf->_rs___05Fs1934),8);
    bufp->chgQData(oldp+2348,(vlSelf->_rs___05Fs2004),64);
    bufp->chgBit(oldp+2350,(vlSelf->_cp___05Fs8638));
    bufp->chgIData(oldp+2351,(vlSelf->_rs___05Fs1682),27);
    bufp->chgBit(oldp+2352,(vlSelf->_rs___05Fs1691));
    bufp->chgBit(oldp+2353,(vlSelf->_rs___05Fs1689));
    bufp->chgBit(oldp+2354,(vlSelf->_rs___05Fs1690));
    bufp->chgIData(oldp+2355,(((((IData)(vlSelf->_cp___05Fs9289)
                                  ? 0U : ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_79)
                                           ? 2U : ((IData)(vlSelf->_mc___05Fs1268)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->_mc___05Fs1267)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h4313730d__0) 
                                                     | (IData)(vlSelf->_mc___05Fs1264)))))) 
                                << 0x14U) | (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__probe_bits_address 
                                             >> 0xcU))),22);
    bufp->chgBit(oldp+2356,(vlSelf->_cp___05Fs9155));
    bufp->chgBit(oldp+2357,(vlSelf->_cp___05Fs9194));
    bufp->chgCData(oldp+2358,((0x3fU & ((IData)(vlSelf->_cp___05Fs9283)
                                         ? (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__probe_bits_address 
                                            >> 6U) : 
                                        ((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_b_q__DOT___ram_ext_R0_data[0U] 
                                          << 0xfU) 
                                         | (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_b_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0x11U))))),6);
    bufp->chgBit(oldp+2359,(vlSelf->_cp___05Fs9153));
    bufp->chgBit(oldp+2360,((1U & ((~ (IData)(vlSelf->_cp___05Fs9272)) 
                                   | (~ (IData)(vlSelf->_cp___05Fs7955))))));
    bufp->chgBit(oldp+2361,(vlSelf->_cp___05Fs9195));
    bufp->chgIData(oldp+2362,(((((IData)(vlSelf->_mc___05Fs1322)
                                  ? 3U : (((IData)(vlSelf->_mc___05Fs1321) 
                                           | (IData)(vlSelf->_mc___05Fs1320))
                                           ? 2U : (IData)(vlSelf->_mc___05Fs1319))) 
                                << 0x14U) | (0xfffffU 
                                             & (IData)(
                                                       (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                                        >> 0xcU))))),22);
    bufp->chgBit(oldp+2363,(vlSelf->_cp___05Fs9156));
    bufp->chgBit(oldp+2364,(vlSelf->_cp___05Fs9196));
    bufp->chgIData(oldp+2365,(((((IData)(vlSelf->_mc___05Fs1293)
                                  ? 0U : (3U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_correctable_errors_r)
                                                 ? 
                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r 
                                                 >> 0x14U)
                                                 : 
                                                ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_correctable_errors_r_1)
                                                  ? 
                                                 (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r_1 
                                                  >> 0x14U)
                                                  : 
                                                 ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_correctable_errors_r_2)
                                                   ? 
                                                  (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r_2 
                                                   >> 0x14U)
                                                   : 
                                                  (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r_3 
                                                   >> 0x14U)))))) 
                                << 0x14U) | (0xfffffU 
                                             & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_correctable_errors_r)
                                                 ? vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r
                                                 : 
                                                ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_correctable_errors_r_1)
                                                  ? vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r_1
                                                  : 
                                                 ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_correctable_errors_r_2)
                                                   ? vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r_2
                                                   : vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r_3)))))),22);
    bufp->chgCData(oldp+2366,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_uncorrectable_errors) 
                               | ((IData)(vlSelf->_mc___05Fs1293)
                                   ? 0U : ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_correctable_errors_r)
                                            ? 1U : 
                                           ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_correctable_errors_r_1)
                                             ? 2U : 
                                            ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_correctable_errors_r_2)
                                              ? 4U : 
                                             ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_correctable_errors_r_3) 
                                              << 3U))))))),4);
    bufp->chgBit(oldp+2367,(vlSelf->_mc___05Fs1351));
    bufp->chgBit(oldp+2368,(vlSelf->_cp___05Fs9157));
    bufp->chgBit(oldp+2369,(vlSelf->_cp___05Fs9199));
    bufp->chgBit(oldp+2370,(vlSelf->_cp___05Fs9209));
    bufp->chgBit(oldp+2371,(vlSelf->_mc___05Fs1164));
    bufp->chgBit(oldp+2372,(vlSelf->_mc___05Fs1165));
    bufp->chgBit(oldp+2373,(vlSelf->_mc___05Fs1163));
    bufp->chgBit(oldp+2374,(vlSelf->_cp___05Fs8918));
    bufp->chgBit(oldp+2375,(vlSelf->_cp___05Fs8919));
    bufp->chgBit(oldp+2376,(vlSelf->_cp___05Fs8920));
    bufp->chgBit(oldp+2377,(vlSelf->_cp___05Fs8921));
    bufp->chgBit(oldp+2378,(vlSelf->_cp___05Fs8923));
    bufp->chgBit(oldp+2379,(vlSelf->_cp___05Fs9198));
    bufp->chgBit(oldp+2380,(vlSelf->_cp___05Fs9222));
    bufp->chgBit(oldp+2381,(vlSelf->_mc___05Fs1161));
    bufp->chgBit(oldp+2382,(vlSelf->_mc___05Fs1299));
    bufp->chgBit(oldp+2383,(vlSelf->_mc___05Fs1218));
    bufp->chgBit(oldp+2384,(vlSelf->_mc___05Fs1340));
    bufp->chgBit(oldp+2385,(vlSelf->_mc___05Fs1315));
    bufp->chgBit(oldp+2386,(vlSelf->_cp___05Fs9219));
    bufp->chgBit(oldp+2387,(vlSelf->_cp___05Fs9220));
    bufp->chgBit(oldp+2388,(vlSelf->_mc___05Fs1231));
    bufp->chgBit(oldp+2389,(vlSelf->_mc___05Fs1295));
    bufp->chgBit(oldp+2390,(vlSelf->_mc___05Fs1254));
    bufp->chgBit(oldp+2391,(vlSelf->_cp___05Fs9296));
    bufp->chgBit(oldp+2392,(vlSelf->_cp___05Fs9252));
    bufp->chgBit(oldp+2393,(vlSelf->_cp___05Fs9275));
    bufp->chgBit(oldp+2394,(vlSelf->_cp___05Fs9280));
    bufp->chgBit(oldp+2395,(vlSelf->_mc___05Fs1277));
    bufp->chgBit(oldp+2396,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_valid_likely) 
                             & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_valid) 
                                & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_valid) 
                                    & (IData)(vlSelf->_mc___05Fs1299)) 
                                   | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_rmw))))));
    bufp->chgBit(oldp+2397,(vlSelf->_cp___05Fs9240));
    bufp->chgBit(oldp+2398,(vlSelf->_mc___05Fs1334));
    bufp->chgBit(oldp+2399,(vlSelf->_mc___05Fs1338));
    bufp->chgCData(oldp+2400,(((IData)(vlSelf->_mc___05Fs1309)
                                ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0)
                                : ((IData)(vlSelf->_mc___05Fs1308)
                                    ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0)
                                    : ((IData)(vlSelf->_mc___05Fs1307)
                                        ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0)
                                        : ((IData)(vlSelf->_mc___05Fs1306)
                                            ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0)
                                            : ((IData)(vlSelf->_mc___05Fs1305)
                                                ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0)
                                                : ((IData)(vlSelf->_mc___05Fs1304)
                                                    ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0)
                                                    : 
                                                   ((IData)(vlSelf->_mc___05Fs1303)
                                                     ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0)
                                                     : 
                                                    ((IData)(vlSelf->_mc___05Fs1302)
                                                      ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0)
                                                      : 
                                                     ((IData)(vlSelf->_mc___05Fs1301)
                                                       ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_hf7daac28__0)
                                                       : 0U)))))))))),8);
    bufp->chgBit(oldp+2401,(vlSelf->_cp___05Fs9260));
    bufp->chgBit(oldp+2402,(vlSelf->_cp___05Fs10266));
    bufp->chgBit(oldp+2403,(vlSelf->_cp___05Fs9261));
    bufp->chgBit(oldp+2404,(vlSelf->_cp___05Fs10242));
    bufp->chgBit(oldp+2405,(vlSelf->_mc___05Fs1318));
    bufp->chgBit(oldp+2406,(vlSelf->_mc___05Fs1324));
    bufp->chgBit(oldp+2407,(vlSelf->_mc___05Fs1328));
    bufp->chgBit(oldp+2408,(vlSelf->_mc___05Fs1325));
    bufp->chgCData(oldp+2409,(((IData)(vlSelf->_mc___05Fs1340)
                                ? 0U : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h07644e05__0))),8);
    bufp->chgBit(oldp+2410,(vlSelf->_cp___05Fs9299));
    bufp->chgBit(oldp+2411,(vlSelf->_mc___05Fs1348));
    bufp->chgBit(oldp+2412,(vlSelf->_mc___05Fs1350));
    bufp->chgBit(oldp+2413,(vlSelf->_mc___05Fs1204));
    bufp->chgBit(oldp+2414,(vlSelf->_mc___05Fs1201));
    bufp->chgBit(oldp+2415,(vlSelf->_mc___05Fs1202));
    bufp->chgQData(oldp+2416,((0xffffffff00000000ULL 
                               | (QData)((IData)((0x7fffffffU 
                                                  | ((IData)(vlSelf->_mc___05Fs1208) 
                                                     << 0x1fU)))))),64);
    bufp->chgBit(oldp+2418,(vlSelf->_mc___05Fs1199));
    bufp->chgQData(oldp+2419,(((IData)(vlSelf->_cp___05Fs9196)
                                ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_valid)
                                    ? (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_7)) 
                                        << 0x38U) | 
                                       (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_6)) 
                                         << 0x30U) 
                                        | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_5)) 
                                            << 0x28U) 
                                           | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_4)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_3) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_2) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_1) 
                                                                        << 8U) 
                                                                       | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r))))))))))
                                    : vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data)
                                : (((QData)((IData)(
                                                    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                    << 0x32U) | (((QData)((IData)(
                                                                  vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                  << 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                    >> 0xeU))))),64);
    bufp->chgCData(oldp+2421,(((IData)(vlSelf->_cp___05Fs9196)
                                ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dataArb_io_in_0_bits_eccMask)
                                : 0xffU)),8);
    bufp->chgBit(oldp+2422,(vlSelf->_cp___05Fs9193));
    bufp->chgBit(oldp+2423,(vlSelf->_cp___05Fs9160));
    bufp->chgBit(oldp+2424,(vlSelf->_cp___05Fs9161));
    bufp->chgBit(oldp+2425,(vlSelf->_cp___05Fs9162));
    bufp->chgBit(oldp+2426,(vlSelf->_cp___05Fs9163));
    bufp->chgBit(oldp+2427,(vlSelf->_cp___05Fs9164));
    bufp->chgBit(oldp+2428,(vlSelf->_cp___05Fs9165));
    bufp->chgBit(oldp+2429,(vlSelf->_cp___05Fs9166));
    bufp->chgBit(oldp+2430,(vlSelf->_cp___05Fs9167));
    bufp->chgBit(oldp+2431,(vlSelf->_cp___05Fs9168));
    bufp->chgBit(oldp+2432,(vlSelf->_cp___05Fs9169));
    bufp->chgBit(oldp+2433,(vlSelf->_cp___05Fs9170));
    bufp->chgBit(oldp+2434,(vlSelf->_cp___05Fs9171));
    bufp->chgBit(oldp+2435,(vlSelf->_cp___05Fs9172));
    bufp->chgBit(oldp+2436,(vlSelf->_cp___05Fs9173));
    bufp->chgBit(oldp+2437,(vlSelf->_cp___05Fs9174));
    bufp->chgBit(oldp+2438,(vlSelf->_cp___05Fs9175));
    bufp->chgBit(oldp+2439,(vlSelf->_cp___05Fs9176));
    bufp->chgBit(oldp+2440,(vlSelf->_cp___05Fs9177));
    bufp->chgBit(oldp+2441,(vlSelf->_cp___05Fs9178));
    bufp->chgBit(oldp+2442,(vlSelf->_cp___05Fs9179));
    bufp->chgBit(oldp+2443,(vlSelf->_cp___05Fs9180));
    bufp->chgBit(oldp+2444,(vlSelf->_cp___05Fs9181));
    bufp->chgBit(oldp+2445,(vlSelf->_cp___05Fs9182));
    bufp->chgBit(oldp+2446,(vlSelf->_cp___05Fs9183));
    bufp->chgBit(oldp+2447,(vlSelf->_cp___05Fs9184));
    bufp->chgBit(oldp+2448,(vlSelf->_cp___05Fs9185));
    bufp->chgBit(oldp+2449,(vlSelf->_cp___05Fs9186));
    bufp->chgBit(oldp+2450,(vlSelf->_cp___05Fs9187));
    bufp->chgBit(oldp+2451,(vlSelf->_cp___05Fs9188));
    bufp->chgBit(oldp+2452,(vlSelf->_cp___05Fs9189));
    bufp->chgBit(oldp+2453,(vlSelf->_cp___05Fs9190));
    bufp->chgBit(oldp+2454,(vlSelf->_cp___05Fs9191));
    bufp->chgBit(oldp+2455,(vlSelf->_cp___05Fs9192));
    __Vtemp_22[0U] = (IData)(((IData)(vlSelf->_cp___05Fs9196)
                               ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_valid)
                                   ? (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_7)) 
                                       << 0x38U) | 
                                      (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_6)) 
                                        << 0x30U) | 
                                       (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_5)) 
                                         << 0x28U) 
                                        | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_4)) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_3) 
                                                               << 0x18U) 
                                                              | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_2) 
                                                                  << 0x10U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_1) 
                                                                     << 8U) 
                                                                    | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r))))))))))
                                   : vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data)
                               : (((QData)((IData)(
                                                   vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                   << 0x32U) | (((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                 << 0x12U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                   >> 0xeU)))));
    __Vtemp_22[1U] = (IData)((((IData)(vlSelf->_cp___05Fs9196)
                                ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_valid)
                                    ? (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_7)) 
                                        << 0x38U) | 
                                       (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_6)) 
                                         << 0x30U) 
                                        | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_5)) 
                                            << 0x28U) 
                                           | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_4)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_3) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_2) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_1) 
                                                                        << 8U) 
                                                                       | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r))))))))))
                                    : vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data)
                                : (((QData)((IData)(
                                                    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                    << 0x32U) | (((QData)((IData)(
                                                                  vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                  << 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                    >> 0xeU)))) 
                              >> 0x20U));
    __Vtemp_22[2U] = (IData)(((IData)(vlSelf->_cp___05Fs9196)
                               ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_valid)
                                   ? (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_7)) 
                                       << 0x38U) | 
                                      (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_6)) 
                                        << 0x30U) | 
                                       (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_5)) 
                                         << 0x28U) 
                                        | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_4)) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_3) 
                                                               << 0x18U) 
                                                              | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_2) 
                                                                  << 0x10U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_1) 
                                                                     << 8U) 
                                                                    | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r))))))))))
                                   : vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data)
                               : (((QData)((IData)(
                                                   vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                   << 0x32U) | (((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                 << 0x12U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                   >> 0xeU)))));
    __Vtemp_22[3U] = (IData)((((IData)(vlSelf->_cp___05Fs9196)
                                ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_valid)
                                    ? (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_7)) 
                                        << 0x38U) | 
                                       (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_6)) 
                                         << 0x30U) 
                                        | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_5)) 
                                            << 0x28U) 
                                           | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_4)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_3) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_2) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_1) 
                                                                        << 8U) 
                                                                       | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r))))))))))
                                    : vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data)
                                : (((QData)((IData)(
                                                    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                    << 0x32U) | (((QData)((IData)(
                                                                  vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                  << 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                    >> 0xeU)))) 
                              >> 0x20U));
    __Vtemp_22[4U] = (IData)(((IData)(vlSelf->_cp___05Fs9196)
                               ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_valid)
                                   ? (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_7)) 
                                       << 0x38U) | 
                                      (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_6)) 
                                        << 0x30U) | 
                                       (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_5)) 
                                         << 0x28U) 
                                        | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_4)) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_3) 
                                                               << 0x18U) 
                                                              | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_2) 
                                                                  << 0x10U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_1) 
                                                                     << 8U) 
                                                                    | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r))))))))))
                                   : vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data)
                               : (((QData)((IData)(
                                                   vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                   << 0x32U) | (((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                 << 0x12U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                   >> 0xeU)))));
    __Vtemp_22[5U] = (IData)((((IData)(vlSelf->_cp___05Fs9196)
                                ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_valid)
                                    ? (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_7)) 
                                        << 0x38U) | 
                                       (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_6)) 
                                         << 0x30U) 
                                        | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_5)) 
                                            << 0x28U) 
                                           | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_4)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_3) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_2) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_1) 
                                                                        << 8U) 
                                                                       | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r))))))))))
                                    : vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data)
                                : (((QData)((IData)(
                                                    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                    << 0x32U) | (((QData)((IData)(
                                                                  vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                  << 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                    >> 0xeU)))) 
                              >> 0x20U));
    __Vtemp_22[6U] = (IData)(((IData)(vlSelf->_cp___05Fs9196)
                               ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_valid)
                                   ? (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_7)) 
                                       << 0x38U) | 
                                      (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_6)) 
                                        << 0x30U) | 
                                       (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_5)) 
                                         << 0x28U) 
                                        | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_4)) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_3) 
                                                               << 0x18U) 
                                                              | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_2) 
                                                                  << 0x10U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_1) 
                                                                     << 8U) 
                                                                    | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r))))))))))
                                   : vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data)
                               : (((QData)((IData)(
                                                   vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                   << 0x32U) | (((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                 << 0x12U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                   >> 0xeU)))));
    __Vtemp_22[7U] = (IData)((((IData)(vlSelf->_cp___05Fs9196)
                                ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_valid)
                                    ? (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_7)) 
                                        << 0x38U) | 
                                       (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_6)) 
                                         << 0x30U) 
                                        | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_5)) 
                                            << 0x28U) 
                                           | (((QData)((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_4)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_3) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_2) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_1) 
                                                                        << 8U) 
                                                                       | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r))))))))))
                                    : vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data)
                                : (((QData)((IData)(
                                                    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                    << 0x32U) | (((QData)((IData)(
                                                                  vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                  << 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                    >> 0xeU)))) 
                              >> 0x20U));
    bufp->chgWData(oldp+2456,(__Vtemp_22),256);
    bufp->chgBit(oldp+2464,(vlSelf->_cp___05Fs9151));
    bufp->chgBit(oldp+2465,(vlSelf->_rs___05Fs1832));
    bufp->chgBit(oldp+2466,(vlSelf->_rs___05Fs1833));
    bufp->chgBit(oldp+2467,(vlSelf->_rs___05Fs1834));
    bufp->chgBit(oldp+2468,(vlSelf->_rs___05Fs1835));
    bufp->chgBit(oldp+2469,(vlSelf->_rs___05Fs1836));
    bufp->chgBit(oldp+2470,(vlSelf->_rs___05Fs1837));
    bufp->chgBit(oldp+2471,(vlSelf->_rs___05Fs1838));
    bufp->chgBit(oldp+2472,(vlSelf->_rs___05Fs1839));
    bufp->chgBit(oldp+2473,(vlSelf->_rs___05Fs1840));
    bufp->chgBit(oldp+2474,(vlSelf->_rs___05Fs1841));
    bufp->chgBit(oldp+2475,(vlSelf->_rs___05Fs1842));
    bufp->chgBit(oldp+2476,(vlSelf->_rs___05Fs1843));
    bufp->chgBit(oldp+2477,(vlSelf->_rs___05Fs1844));
    bufp->chgBit(oldp+2478,(vlSelf->_rs___05Fs1845));
    bufp->chgBit(oldp+2479,(vlSelf->_rs___05Fs1846));
    bufp->chgBit(oldp+2480,(vlSelf->_rs___05Fs1847));
    bufp->chgBit(oldp+2481,(vlSelf->_mc___05Fs1155));
    bufp->chgBit(oldp+2482,(vlSelf->_mc___05Fs1156));
    bufp->chgBit(oldp+2483,(vlSelf->_mc___05Fs1157));
    bufp->chgBit(oldp+2484,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pma_checker___05F7__DOT__legal_address) 
                             & (IData)(vlSelf->_mc___05Fs1109))));
    bufp->chgBit(oldp+2485,(vlSelf->_mc___05Fs1154));
    bufp->chgBit(oldp+2486,(vlSelf->_mc___05Fs1151));
    bufp->chgBit(oldp+2487,(vlSelf->_mc___05Fs1075));
    bufp->chgBit(oldp+2488,(vlSelf->_mc___05Fs1074));
    bufp->chgBit(oldp+2489,(vlSelf->_cp___05Fs8646));
    bufp->chgBit(oldp+2490,(vlSelf->_mc___05Fs1223));
    bufp->chgCData(oldp+2491,(vlSelf->_rs___05Fs1876),2);
    bufp->chgCData(oldp+2492,(vlSelf->_rs___05Fs1877),5);
    bufp->chgBit(oldp+2493,(vlSelf->_mc___05Fs997));
    bufp->chgBit(oldp+2494,(vlSelf->_cp___05Fs8613));
    bufp->chgBit(oldp+2495,(vlSelf->_mc___05Fs1010));
    bufp->chgCData(oldp+2496,(((IData)(vlSelf->_mc___05Fs999)
                                ? 1U : (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_debug) 
                                         << 2U) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_prv)))),3);
    bufp->chgBit(oldp+2497,(vlSelf->_mc___05Fs1032));
    bufp->chgBit(oldp+2498,(vlSelf->_mc___05Fs1033));
    bufp->chgBit(oldp+2499,(vlSelf->_mc___05Fs1034));
    bufp->chgBit(oldp+2500,(vlSelf->_mc___05Fs1002));
    bufp->chgBit(oldp+2501,(vlSelf->_mc___05Fs1004));
    bufp->chgBit(oldp+2502,(vlSelf->_cp___05Fs8814));
    bufp->chgBit(oldp+2503,(vlSelf->_mc___05Fs1006));
    bufp->chgBit(oldp+2504,(vlSelf->_cp___05Fs8821));
    bufp->chgBit(oldp+2505,(vlSelf->_mc___05Fs1008));
    bufp->chgBit(oldp+2506,(vlSelf->_cp___05Fs8828));
    bufp->chgBit(oldp+2507,(vlSelf->_mc___05Fs1012));
    bufp->chgBit(oldp+2508,(vlSelf->_mc___05Fs1013));
    bufp->chgBit(oldp+2509,(vlSelf->_mc___05Fs1014));
    bufp->chgBit(oldp+2510,(vlSelf->_mc___05Fs1015));
    bufp->chgBit(oldp+2511,(vlSelf->_mc___05Fs1016));
    bufp->chgBit(oldp+2512,(vlSelf->_mc___05Fs1017));
    bufp->chgBit(oldp+2513,(vlSelf->_mc___05Fs1018));
    bufp->chgBit(oldp+2514,(vlSelf->_mc___05Fs1019));
    bufp->chgBit(oldp+2515,(vlSelf->_mc___05Fs1020));
    bufp->chgBit(oldp+2516,(vlSelf->_mc___05Fs1021));
    bufp->chgBit(oldp+2517,(vlSelf->_mc___05Fs1022));
    bufp->chgBit(oldp+2518,(vlSelf->_mc___05Fs1023));
    bufp->chgBit(oldp+2519,(vlSelf->_mc___05Fs1024));
    bufp->chgBit(oldp+2520,(vlSelf->_mc___05Fs1041));
    bufp->chgBit(oldp+2521,(vlSelf->_mc___05Fs1045));
    bufp->chgBit(oldp+2522,(vlSelf->_mc___05Fs1046));
    bufp->chgBit(oldp+2523,(vlSelf->_mc___05Fs1044));
    bufp->chgBit(oldp+2524,(vlSelf->_mc___05Fs1042));
    bufp->chgBit(oldp+2525,(vlSelf->_mc___05Fs1043));
    bufp->chgBit(oldp+2526,(vlSelf->_mc___05Fs1036));
    bufp->chgBit(oldp+2527,(vlSelf->_mc___05Fs1037));
    bufp->chgBit(oldp+2528,(vlSelf->_mc___05Fs1038));
    bufp->chgBit(oldp+2529,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pma__DOT__legal_address) 
                             & (IData)(vlSelf->_mc___05Fs990))));
    bufp->chgBit(oldp+2530,(vlSelf->_mc___05Fs1035));
    bufp->chgCData(oldp+2531,(((IData)(vlSelf->_mc___05Fs999)
                                ? 1U : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_prv))),2);
    bufp->chgBit(oldp+2532,(((IData)(vlSelf->_mc___05Fs979)
                              ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_7) 
                                 & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_r) 
                                    | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_7)))
                              : ((IData)(vlSelf->_mc___05Fs976)
                                  ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_6) 
                                     & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_r) 
                                        | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_6)))
                                  : ((IData)(vlSelf->_mc___05Fs973)
                                      ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_5) 
                                         & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_r) 
                                            | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_5)))
                                      : ((IData)(vlSelf->_mc___05Fs970)
                                          ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_4) 
                                             & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_r) 
                                                | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_4)))
                                          : ((IData)(vlSelf->_mc___05Fs967)
                                              ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_3) 
                                                 & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_r) 
                                                    | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_3)))
                                              : ((IData)(vlSelf->_mc___05Fs964)
                                                  ? 
                                                 ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_2) 
                                                  & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_r) 
                                                     | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_2)))
                                                  : 
                                                 ((IData)(vlSelf->_mc___05Fs961)
                                                   ? 
                                                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_1) 
                                                   & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_r) 
                                                      | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_1)))
                                                   : 
                                                  ((IData)(vlSelf->_mc___05Fs958)
                                                    ? 
                                                   ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned) 
                                                    & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_r) 
                                                       | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore)))
                                                    : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0)))))))))));
    bufp->chgBit(oldp+2533,(((IData)(vlSelf->_mc___05Fs979)
                              ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_7) 
                                 & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_w) 
                                    | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_7)))
                              : ((IData)(vlSelf->_mc___05Fs976)
                                  ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_6) 
                                     & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_w) 
                                        | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_6)))
                                  : ((IData)(vlSelf->_mc___05Fs973)
                                      ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_5) 
                                         & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_w) 
                                            | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_5)))
                                      : ((IData)(vlSelf->_mc___05Fs970)
                                          ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_4) 
                                             & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_w) 
                                                | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_4)))
                                          : ((IData)(vlSelf->_mc___05Fs967)
                                              ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_3) 
                                                 & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_w) 
                                                    | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_3)))
                                              : ((IData)(vlSelf->_mc___05Fs964)
                                                  ? 
                                                 ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_2) 
                                                  & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_w) 
                                                     | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_2)))
                                                  : 
                                                 ((IData)(vlSelf->_mc___05Fs961)
                                                   ? 
                                                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_1) 
                                                   & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_w) 
                                                      | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_1)))
                                                   : 
                                                  ((IData)(vlSelf->_mc___05Fs958)
                                                    ? 
                                                   ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned) 
                                                    & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_w) 
                                                       | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore)))
                                                    : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0)))))))))));
    bufp->chgBit(oldp+2534,(((IData)(vlSelf->_mc___05Fs979)
                              ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_7) 
                                 & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_x) 
                                    | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_7)))
                              : ((IData)(vlSelf->_mc___05Fs976)
                                  ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_6) 
                                     & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_x) 
                                        | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_6)))
                                  : ((IData)(vlSelf->_mc___05Fs973)
                                      ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_5) 
                                         & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_x) 
                                            | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_5)))
                                      : ((IData)(vlSelf->_mc___05Fs970)
                                          ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_4) 
                                             & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_x) 
                                                | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_4)))
                                          : ((IData)(vlSelf->_mc___05Fs967)
                                              ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_3) 
                                                 & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_x) 
                                                    | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_3)))
                                              : ((IData)(vlSelf->_mc___05Fs964)
                                                  ? 
                                                 ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_2) 
                                                  & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_x) 
                                                     | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_2)))
                                                  : 
                                                 ((IData)(vlSelf->_mc___05Fs961)
                                                   ? 
                                                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned_1) 
                                                   & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_x) 
                                                      | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore_1)))
                                                   : 
                                                  ((IData)(vlSelf->_mc___05Fs958)
                                                    ? 
                                                   ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_aligned) 
                                                    & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_x) 
                                                       | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT__res_ignore)))
                                                    : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0)))))))))));
    bufp->chgBit(oldp+2535,(vlSelf->_mc___05Fs958));
    bufp->chgBit(oldp+2536,(vlSelf->_mc___05Fs961));
    bufp->chgBit(oldp+2537,(vlSelf->_mc___05Fs964));
    bufp->chgBit(oldp+2538,(vlSelf->_mc___05Fs967));
    bufp->chgBit(oldp+2539,(vlSelf->_mc___05Fs970));
    bufp->chgBit(oldp+2540,(vlSelf->_mc___05Fs973));
    bufp->chgBit(oldp+2541,(vlSelf->_mc___05Fs976));
    bufp->chgBit(oldp+2542,(vlSelf->_mc___05Fs979));
    bufp->chgBit(oldp+2543,(vlSelf->_mc___05Fs2449));
    bufp->chgBit(oldp+2544,(vlSelf->_cp___05Fs9801));
    bufp->chgBit(oldp+2545,(vlSelf->_mc___05Fs2425));
    bufp->chgBit(oldp+2546,(vlSelf->_cp___05Fs9758));
    bufp->chgBit(oldp+2547,(vlSelf->_mc___05Fs2351));
    bufp->chgBit(oldp+2548,(vlSelf->_mc___05Fs2376));
    bufp->chgBit(oldp+2549,((1U & ((~ (IData)(vlSelf->_mc___05Fs2379)) 
                                   | ((1U & (IData)(
                                                    (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_8 
                                                     >> 0x3cU))) 
                                      == (0xfffffU 
                                          == (0xfffffU 
                                              & (IData)(
                                                        (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_8 
                                                         >> 0x20U)))))))));
    bufp->chgBit(oldp+2550,(vlSelf->_cp___05Fs9742));
    bufp->chgBit(oldp+2551,(vlSelf->_mc___05Fs2430));
    bufp->chgBit(oldp+2552,((1U & ((~ (IData)(vlSelf->_mc___05Fs2440)) 
                                   | ((1U & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wdata_1[1U] 
                                             >> 0x1cU)) 
                                      == (0xfffffU 
                                          == (0xfffffU 
                                              & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wdata_1[1U])))))));
    bufp->chgBit(oldp+2553,(vlSelf->_mc___05Fs2441));
    bufp->chgBit(oldp+2554,(vlSelf->_cp___05Fs9754));
    bufp->chgBit(oldp+2555,(vlSelf->_cp___05Fs9709));
    bufp->chgWData(oldp+2556,(vlSelf->_rs___05Fs2771),65);
    bufp->chgCData(oldp+2559,(vlSelf->_rs___05Fs2772),5);
    bufp->chgCData(oldp+2560,((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_invalidExc_pipe_b) 
                                << 4U) | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (VL_GTS_III(14, 0x3ceU, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                                   & ((1U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp) 
                                                           >> 0xbU))) 
                                                      & ((~ 
                                                          ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_detectTininess_pipe_b) 
                                                           & ((~ 
                                                               ((IData)(vlSelf->_mc___05Fs2173)
                                                                 ? 
                                                                ((IData)(vlSelf->_mc___05Fs2169) 
                                                                 & (IData)(
                                                                           (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h3152f987__0 
                                                                            >> 2U)))
                                                                 : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h1ff36051__0))) 
                                                              & (((IData)(vlSelf->_mc___05Fs2173)
                                                                   ? (IData)(
                                                                             (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                              >> 0x36U))
                                                                   : (IData)(
                                                                             (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                              >> 0x35U))) 
                                                                 & ((0U 
                                                                     != vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_6) 
                                                                    & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_8) 
                                                                        & ((IData)(vlSelf->_mc___05Fs2173)
                                                                            ? (IData)(
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                                                                >> 2U))
                                                                            : (IData)(
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                                                                >> 1U)))) 
                                                                       | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                                          & (((IData)(vlSelf->_mc___05Fs2173) 
                                                                              & (IData)(
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                                                                >> 2U))) 
                                                                             | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig))))))))))) 
                                                         & ((IData)(vlSelf->_mc___05Fs2173)
                                                             ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h1ff36051__0)
                                                             : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_3))))))) 
                                            << 1U) 
                                           | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                              | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                 & (VL_GTS_III(14, 0x3ceU, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                    | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))))))),5);
    bufp->chgBit(oldp+2561,(vlSelf->_cp___05Fs9712));
    bufp->chgBit(oldp+2562,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
                             | ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_CIsDominant)) 
                                & (IData)(vlSelf->_mc___05Fs2158)))));
    bufp->chgBit(oldp+2563,((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
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
                                                    ? 
                                                   (2U 
                                                    == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundingMode_stage0_pipe_b))
                                                    : 
                                                   ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_signProd) 
                                                    ^ (IData)(vlSelf->_mc___05Fs2103))))))))))));
    bufp->chgBit(oldp+2564,(vlSelf->_mc___05Fs2158));
    bufp->chgSData(oldp+2565,((0x1fffU & ((IData)(vlSelf->_mc___05Fs2100)
                                           ? (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                              >> 0x14U)
                                           : ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN) 
                                              - (IData)(0x35U))))),13);
    bufp->chgBit(oldp+2566,(vlSelf->_mc___05Fs2098));
    bufp->chgBit(oldp+2567,(vlSelf->_mc___05Fs2100));
    bufp->chgCData(oldp+2568,(((IData)(vlSelf->_mc___05Fs2097)
                                ? 0U : ((IData)(vlSelf->_mc___05Fs2096)
                                         ? (0x3fU & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN_0))
                                         : 0x21U))),6);
    bufp->chgBit(oldp+2569,(((IData)(vlSelf->_mc___05Fs2098)
                              ? ((~ (IData)((0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN_2)))) 
                                 & (7U == (7U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])))
                              : ((0U != (7U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                 | (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN_2))))));
    bufp->chgBit(oldp+2570,(vlSelf->_mc___05Fs2097));
    bufp->chgCData(oldp+2571,(((IData)(vlSelf->_mc___05Fs2097)
                                ? 0U : ((IData)(vlSelf->_mc___05Fs2096)
                                         ? (0xffU & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN_0))
                                         : 0xa1U))),8);
    bufp->chgBit(oldp+2572,(vlSelf->_mc___05Fs2172));
    bufp->chgBit(oldp+2573,(vlSelf->_mc___05Fs2174));
    bufp->chgBit(oldp+2574,(vlSelf->_rs___05Fs2734));
    bufp->chgBit(oldp+2575,(vlSelf->_mc___05Fs2176));
    bufp->chgBit(oldp+2576,(vlSelf->_mc___05Fs2177));
    bufp->chgBit(oldp+2577,(vlSelf->_mc___05Fs2178));
    bufp->chgBit(oldp+2578,(((IData)(vlSelf->_cp___05Fs9754) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_typeTagOut)))));
    bufp->chgQData(oldp+2579,((((QData)((IData)(vlSelf->_mc___05Fs1795)) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_expOut) 
                                                              << 0x17U) 
                                                             | (0x7fffffU 
                                                                & ((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                                    << 3U) 
                                                                   | (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U] 
                                                                      >> 0x1dU)))))))),33);
    bufp->chgCData(oldp+2581,(vlSelf->_rs___05Fs2643),3);
    bufp->chgBit(oldp+2582,(vlSelf->_rs___05Fs2774));
    bufp->chgQData(oldp+2583,((((QData)((IData)(((~ (IData)(vlSelf->_mc___05Fs2230)) 
                                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z)))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
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
                                                                     (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                      >> 1U)
                                                                      : vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)) 
                                                                   | (- (IData)((IData)(vlSelf->_mc___05Fs2233)))))))))),33);
    bufp->chgCData(oldp+2585,((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT___divSqrtRecFNToRaw_io_invalidExc) 
                                << 4U) | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT___divSqrtRecFNToRaw_io_infiniteExc) 
                                           << 3U) | 
                                          (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                                      & ((1U 
                                                          != 
                                                          (3U 
                                                           & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z) 
                                                              >> 8U))) 
                                                         & ((~ 
                                                             ((~ 
                                                               ((IData)(vlSelf->_mc___05Fs2229)
                                                                 ? 
                                                                ((IData)(vlSelf->_mc___05Fs2225) 
                                                                 & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_haf133fcb__0 
                                                                    >> 2U))
                                                                 : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb129c4ea__0))) 
                                                              & (((IData)(vlSelf->_mc___05Fs2229)
                                                                   ? 
                                                                  (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                   >> 0x19U)
                                                                   : 
                                                                  (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                   >> 0x18U)) 
                                                                 & ((0U 
                                                                     != vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_5) 
                                                                    & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_7) 
                                                                        & ((IData)(vlSelf->_mc___05Fs2229)
                                                                            ? 
                                                                           (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
                                                                            >> 1U)
                                                                            : vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z)) 
                                                                       | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                                          & (((IData)(vlSelf->_mc___05Fs2229) 
                                                                              & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
                                                                                >> 1U)) 
                                                                             | (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
                                                                                | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notZeroRem_Z))))))))) 
                                                            & ((IData)(vlSelf->_mc___05Fs2229)
                                                                ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb129c4ea__0)
                                                                : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))))) 
                                               << 1U) 
                                              | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                 | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                    & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                       | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))))))),5);
    bufp->chgCData(oldp+2586,(vlSelf->_rs___05Fs2784),3);
    bufp->chgBit(oldp+2587,(vlSelf->_rs___05Fs2778));
    bufp->chgBit(oldp+2588,(vlSelf->_rs___05Fs2779));
    bufp->chgBit(oldp+2589,(vlSelf->_rs___05Fs2780));
    bufp->chgBit(oldp+2590,(vlSelf->_rs___05Fs2781));
    bufp->chgSData(oldp+2591,(vlSelf->_rs___05Fs2782),10);
    bufp->chgBit(oldp+2592,(vlSelf->_mc___05Fs1795));
    bufp->chgBit(oldp+2593,(vlSelf->_cp___05Fs9714));
    bufp->chgBit(oldp+2594,(vlSelf->_mc___05Fs2186));
    bufp->chgBit(oldp+2595,(vlSelf->_mc___05Fs2189));
    bufp->chgBit(oldp+2596,(vlSelf->_mc___05Fs2210));
    bufp->chgBit(oldp+2597,(vlSelf->_mc___05Fs2228));
    bufp->chgBit(oldp+2598,(vlSelf->_mc___05Fs2230));
    bufp->chgBit(oldp+2599,(vlSelf->_mc___05Fs2232));
    bufp->chgBit(oldp+2600,(vlSelf->_mc___05Fs2233));
    bufp->chgBit(oldp+2601,(vlSelf->_mc___05Fs2234));
    bufp->chgBit(oldp+2602,(((IData)(vlSelf->_cp___05Fs9754) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_typeTagOut)))));
    bufp->chgWData(oldp+2603,(vlSelf->_rs___05Fs2647),65);
    bufp->chgWData(oldp+2606,(vlSelf->_rs___05Fs2648),65);
    bufp->chgBit(oldp+2609,(vlSelf->_rs___05Fs2789));
    __Vtemp_23[0U] = (IData)((((QData)((IData)(vlSelf->__VdfgTmp_h49c9d6f3__0)) 
                               << 0x34U) | (0xfffffffffffffULL 
                                            & (((IData)(vlSelf->_mc___05Fs2296)
                                                 ? 
                                                ((QData)((IData)(vlSelf->_mc___05Fs2291)) 
                                                 << 0x33U)
                                                 : 
                                                ((IData)(vlSelf->_mc___05Fs2290)
                                                  ? 
                                                 (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                  >> 1U)
                                                  : vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)) 
                                               | (- (QData)((IData)(vlSelf->_mc___05Fs2294)))))));
    __Vtemp_23[1U] = (IData)(((((QData)((IData)(vlSelf->__VdfgTmp_h49c9d6f3__0)) 
                                << 0x34U) | (0xfffffffffffffULL 
                                             & (((IData)(vlSelf->_mc___05Fs2296)
                                                  ? 
                                                 ((QData)((IData)(vlSelf->_mc___05Fs2291)) 
                                                  << 0x33U)
                                                  : 
                                                 ((IData)(vlSelf->_mc___05Fs2290)
                                                   ? 
                                                  (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                   >> 1U)
                                                   : vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)) 
                                                | (- (QData)((IData)(vlSelf->_mc___05Fs2294)))))) 
                              >> 0x20U));
    __Vtemp_23[2U] = ((~ (IData)(vlSelf->_mc___05Fs2291)) 
                      & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z));
    bufp->chgWData(oldp+2610,(__Vtemp_23),65);
    bufp->chgCData(oldp+2613,((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT___divSqrtRecFNToRaw_io_invalidExc) 
                                << 4U) | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT___divSqrtRecFNToRaw_io_infiniteExc) 
                                           << 3U) | 
                                          (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                & (VL_GTS_III(14, 0x3ceU, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                                      & ((1U 
                                                          != 
                                                          (3U 
                                                           & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z) 
                                                              >> 0xbU))) 
                                                         & ((~ 
                                                             ((~ 
                                                               ((IData)(vlSelf->_mc___05Fs2290)
                                                                 ? 
                                                                ((IData)(vlSelf->_mc___05Fs2286) 
                                                                 & (IData)(
                                                                           (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h3152f987__0 
                                                                            >> 2U)))
                                                                 : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h1ff36051__0))) 
                                                              & (((IData)(vlSelf->_mc___05Fs2290)
                                                                   ? (IData)(
                                                                             (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                              >> 0x36U))
                                                                   : (IData)(
                                                                             (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                              >> 0x35U))) 
                                                                 & ((0U 
                                                                     != vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_6) 
                                                                    & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_8) 
                                                                        & ((IData)(vlSelf->_mc___05Fs2290)
                                                                            ? (IData)(
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
                                                                                >> 1U))
                                                                            : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z))) 
                                                                       | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                                          & (((IData)(vlSelf->_mc___05Fs2290) 
                                                                              & (IData)(
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
                                                                                >> 1U))) 
                                                                             | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notZeroRem_Z))))))))) 
                                                            & ((IData)(vlSelf->_mc___05Fs2290)
                                                                ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h1ff36051__0)
                                                                : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_3))))))) 
                                               << 1U) 
                                              | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                 | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                    & (VL_GTS_III(14, 0x3ceU, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                       | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))))))))),5);
    bufp->chgCData(oldp+2614,(vlSelf->_rs___05Fs2799),3);
    bufp->chgBit(oldp+2615,(vlSelf->_rs___05Fs2793));
    bufp->chgBit(oldp+2616,(vlSelf->_rs___05Fs2794));
    bufp->chgBit(oldp+2617,(vlSelf->_rs___05Fs2795));
    bufp->chgBit(oldp+2618,(vlSelf->_rs___05Fs2796));
    bufp->chgSData(oldp+2619,(vlSelf->_rs___05Fs2797),13);
    bufp->chgBit(oldp+2620,(vlSelf->_mc___05Fs1810));
    bufp->chgBit(oldp+2621,((1U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__rawA_isNaN) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                   >> 0x1dU)))) 
                                      | (IData)(vlSelf->_mc___05Fs1810))))));
    bufp->chgBit(oldp+2622,(vlSelf->_cp___05Fs9718));
    bufp->chgBit(oldp+2623,(vlSelf->_mc___05Fs2241));
    bufp->chgBit(oldp+2624,(vlSelf->_mc___05Fs2244));
    bufp->chgBit(oldp+2625,(vlSelf->_mc___05Fs2265));
    bufp->chgBit(oldp+2626,(vlSelf->_mc___05Fs2289));
    bufp->chgBit(oldp+2627,(vlSelf->_mc___05Fs2291));
    bufp->chgBit(oldp+2628,(vlSelf->_mc___05Fs2293));
    bufp->chgBit(oldp+2629,(vlSelf->_mc___05Fs2294));
    bufp->chgBit(oldp+2630,(vlSelf->_mc___05Fs2295));
    bufp->chgBit(oldp+2631,(vlSelf->_cp___05Fs9731));
    bufp->chgBit(oldp+2632,(vlSelf->_cp___05Fs9733));
    bufp->chgBit(oldp+2633,(((IData)(vlSelf->_cp___05Fs9731) 
                             | ((0x7fffU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_19)) 
                                | ((0x7fffU == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___GEN_20)) 
                                   | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT____VdfgTmp_h12421854__0))))));
    bufp->chgBit(oldp+2634,(((IData)(vlSelf->_cp___05Fs9735) 
                             | ((IData)(((0x53U == 
                                          (0xc00007fU 
                                           & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                                         & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____VdfgTmp_h00b2f4b4__0))) 
                                | (IData)(vlSelf->_cp___05Fs9733)))));
    bufp->chgBit(oldp+2635,(vlSelf->_cp___05Fs9691));
    bufp->chgBit(oldp+2636,(vlSelf->_rs___05Fs2650));
    bufp->chgCData(oldp+2637,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_wflags)
                                ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_ren2)
                                    ? (0x10U & ((((~ 
                                                   (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                    >> 0x13U)) 
                                                  & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__rawA_isNaN)) 
                                                 | (((~ 
                                                      (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                       >> 0x13U)) 
                                                     & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__rawB_isNaN)) 
                                                    | ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__ordered)) 
                                                       & (~ 
                                                          ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm) 
                                                           >> 1U))))) 
                                                << 4U))
                                    : ((2U & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_typ))
                                        ? ((((IData)(vlSelf->_mc___05Fs1809) 
                                             | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__common_overflow)) 
                                            << 4U) 
                                           | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT____VdfgTmp_hf60e2de1__0))
                                        : (((IData)(vlSelf->_cp___05Fs9696) 
                                            << 4U) 
                                           | ((~ (IData)(vlSelf->_cp___05Fs9696)) 
                                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT____VdfgTmp_hf60e2de1__0)))))
                                : 0U)),5);
    bufp->chgBit(oldp+2638,(vlSelf->_mc___05Fs1839));
    bufp->chgBit(oldp+2639,(vlSelf->_mc___05Fs1808));
    bufp->chgBit(oldp+2640,(vlSelf->_mc___05Fs1813));
    bufp->chgBit(oldp+2641,(vlSelf->_mc___05Fs1811));
    bufp->chgBit(oldp+2642,(vlSelf->_cp___05Fs9696));
    bufp->chgBit(oldp+2643,(vlSelf->_mc___05Fs1797));
    bufp->chgCData(oldp+2644,((((IData)(vlSelf->_mc___05Fs1809) 
                                << 2U) | ((((~ (IData)(vlSelf->_mc___05Fs1809)) 
                                            & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__common_overflow)) 
                                           << 1U) | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT____VdfgTmp_hf60e2de1__0)))),3);
    bufp->chgQData(oldp+2645,(((- (QData)((IData)(vlSelf->_mc___05Fs1795))) 
                               ^ (((QData)((IData)(
                                                   vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[3U])) 
                                   << 0x2cU) | (((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[2U])) 
                                                 << 0xcU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[1U])) 
                                                   >> 0x14U))))),64);
    bufp->chgBit(oldp+2647,(vlSelf->_mc___05Fs1809));
    bufp->chgBit(oldp+2648,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__ordered) 
                             & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__bothZeros) 
                                | (((IData)(vlSelf->_mc___05Fs1795) 
                                    == (1U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U])) 
                                   & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__bothInfs) 
                                      | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT__common_eqMags)))))));
    bufp->chgCData(oldp+2649,((((IData)(vlSelf->_mc___05Fs1809) 
                                << 2U) | ((((~ (IData)(vlSelf->_mc___05Fs1809)) 
                                            & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__common_overflow)) 
                                           << 1U) | 
                                          ((~ (IData)(vlSelf->_mc___05Fs1809)) 
                                           & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__common_overflow)) 
                                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__common_inexact)))))),3);
    bufp->chgBit(oldp+2650,(vlSelf->_cp___05Fs9701));
    bufp->chgWData(oldp+2651,(vlSelf->_rs___05Fs2701),65);
    bufp->chgCData(oldp+2654,(vlSelf->_rs___05Fs2702),5);
    bufp->chgBit(oldp+2655,(vlSelf->_mc___05Fs2093));
    bufp->chgBit(oldp+2656,(vlSelf->_mc___05Fs2092));
    bufp->chgQData(oldp+2657,((((QData)((IData)(((~ (IData)(vlSelf->_mc___05Fs2083)) 
                                                 & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[2U]))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
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
                                                                     : vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__roundedSig) 
                                                                   | (- (IData)((IData)(vlSelf->_mc___05Fs2086)))))))))),33);
    bufp->chgCData(oldp+2659,((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT____Vcellinp__roundAnyRawFNToRecFN__io_invalidExc) 
                                << 4U) | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (VL_GTS_III(15, 0x6bU, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                                   & (VL_GTS_III(6, 1U, 
                                                                 (0x3fU 
                                                                  & (((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[1U] 
                                                                       >> 0x14U) 
                                                                      - (IData)(0x700U)) 
                                                                     >> 8U))) 
                                                      & ((~ 
                                                          ((~ 
                                                            ((IData)(vlSelf->_mc___05Fs2079) 
                                                             & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb2fc1c1b__0 
                                                                >> 1U))) 
                                                           & ((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                               >> 0x18U) 
                                                              & ((0U 
                                                                  != vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___GEN_4) 
                                                                 & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___GEN_6) 
                                                                     & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[0U] 
                                                                        >> 0x1cU)) 
                                                                    | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                                       & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fffffffU 
                                                                                & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[0U]))))))))) 
                                                         & ((IData)(vlSelf->_mc___05Fs2079) 
                                                            & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb2fc1c1b__0)))))) 
                                            << 1U) 
                                           | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                              | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                 & (VL_GTS_III(15, 0x6bU, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                    | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))))))),5);
    bufp->chgBit(oldp+2660,(vlSelf->_mc___05Fs2082));
    bufp->chgBit(oldp+2661,(vlSelf->_mc___05Fs2083));
    bufp->chgBit(oldp+2662,(vlSelf->_mc___05Fs2085));
    bufp->chgBit(oldp+2663,(vlSelf->_mc___05Fs2086));
    bufp->chgBit(oldp+2664,(vlSelf->_mc___05Fs2087));
    bufp->chgBit(oldp+2665,(vlSelf->_cp___05Fs9697));
    bufp->chgWData(oldp+2666,(vlSelf->_rs___05Fs2673),65);
    bufp->chgCData(oldp+2669,(vlSelf->_rs___05Fs2674),5);
    bufp->chgBit(oldp+2670,(vlSelf->_mc___05Fs2043));
    bufp->chgBit(oldp+2671,(vlSelf->_mc___05Fs2044));
    bufp->chgBit(oldp+2672,(vlSelf->_mc___05Fs2045));
    bufp->chgBit(oldp+2673,(vlSelf->_mc___05Fs2068));
    bufp->chgCData(oldp+2674,(((IData)(vlSelf->_mc___05Fs2013)
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
    bufp->chgBit(oldp+2675,(vlSelf->_mc___05Fs2069));
    bufp->chgBit(oldp+2676,(vlSelf->_mc___05Fs2070));
    bufp->chgBit(oldp+2677,((1U & (~ (IData)(vlSelf->_mc___05Fs2072)))));
    bufp->chgQData(oldp+2678,((((QData)((IData)(vlSelf->_mc___05Fs1853)) 
                                << 0x20U) | (QData)((IData)(
                                                            (((((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___GEN[1U] 
                                                                 >> 0x1fU)
                                                                 ? 0x1ffU
                                                                 : 0x3fU) 
                                                               & ((IData)(0x80U) 
                                                                  + 
                                                                  ((0x80U 
                                                                    | (IData)(vlSelf->__VdfgTmp_h4129a944__0)) 
                                                                   + 
                                                                   (3U 
                                                                    & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                       >> 0x18U))))) 
                                                              << 0x17U) 
                                                             | ((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___GEN[1U] 
                                                                 >> 0x1fU)
                                                                 ? 
                                                                (0x7fffffU 
                                                                 & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)
                                                                 : 0U)))))),33);
    bufp->chgBit(oldp+2680,(vlSelf->_mc___05Fs1853));
    bufp->chgBit(oldp+2681,(vlSelf->_mc___05Fs1847));
    bufp->chgBit(oldp+2682,(vlSelf->_mc___05Fs1845));
    bufp->chgBit(oldp+2683,(vlSelf->_mc___05Fs1919));
    bufp->chgBit(oldp+2684,(vlSelf->_cp___05Fs9747));
    bufp->chgBit(oldp+2685,(vlSelf->_cp___05Fs9688));
    __Vtemp_24[0U] = (IData)(((((QData)((IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[0U] 
                                                 >> 0x1fU))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x80000000U 
                                                              & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[1U] 
                                                                 << 0xbU)) 
                                                             | (0x7fffffffU 
                                                                & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[0U]))))) 
                              | ((IData)(vlSelf->_mc___05Fs2393)
                                  ? 0ULL : 0xe0400000ULL)));
    __Vtemp_24[1U] = (IData)((((((QData)((IData)((vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[0U] 
                                                  >> 0x1fU))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[1U] 
                                                                  << 0xbU)) 
                                                              | (0x7fffffffU 
                                                                 & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[0U]))))) 
                               | ((IData)(vlSelf->_mc___05Fs2393)
                                   ? 0ULL : 0xe0400000ULL)) 
                              >> 0x20U));
    __Vtemp_24[2U] = 0U;
    bufp->chgWData(oldp+2686,(__Vtemp_24),65);
    __Vtemp_25[0U] = (IData)((((QData)((IData)(((~ (IData)(vlSelf->_mc___05Fs1787)) 
                                                & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sign)))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
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
                                                                    (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                     >> 1U)
                                                                     : vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)) 
                                                                  | (- (IData)((IData)(vlSelf->_mc___05Fs1790))))))))));
    __Vtemp_25[1U] = (IData)(((((QData)((IData)(((~ (IData)(vlSelf->_mc___05Fs1787)) 
                                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sign)))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
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
                                                                     (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                      >> 1U)
                                                                      : vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)) 
                                                                   | (- (IData)((IData)(vlSelf->_mc___05Fs1790))))))))) 
                              >> 0x20U));
    __Vtemp_25[2U] = 0U;
    bufp->chgWData(oldp+2689,(__Vtemp_25),65);
    bufp->chgCData(oldp+2692,((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_invalidExc_pipe_b) 
                                << 4U) | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                             & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound) 
                                                   & ((1U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp) 
                                                           >> 8U))) 
                                                      & ((~ 
                                                          ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_detectTininess_pipe_b) 
                                                           & ((~ 
                                                               ((IData)(vlSelf->_mc___05Fs1786)
                                                                 ? 
                                                                ((IData)(vlSelf->_mc___05Fs1782) 
                                                                 & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_haf133fcb__0 
                                                                    >> 2U))
                                                                 : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb129c4ea__0))) 
                                                              & (((IData)(vlSelf->_mc___05Fs1786)
                                                                   ? 
                                                                  (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                   >> 0x19U)
                                                                   : 
                                                                  (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                   >> 0x18U)) 
                                                                 & ((0U 
                                                                     != vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_5) 
                                                                    & (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_7) 
                                                                        & ((IData)(vlSelf->_mc___05Fs1786)
                                                                            ? 
                                                                           (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                                                            >> 2U)
                                                                            : 
                                                                           (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                                                            >> 1U))) 
                                                                       | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                                          & (((IData)(vlSelf->_mc___05Fs1786) 
                                                                              & (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                                                                                >> 2U)) 
                                                                             | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig)))))))))) 
                                                         & ((IData)(vlSelf->_mc___05Fs1786)
                                                             ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hb129c4ea__0)
                                                             : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))))) 
                                            << 1U) 
                                           | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                              | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                 & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
                                                    | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))))))),5);
    bufp->chgQData(oldp+2693,((((QData)((IData)(((~ (IData)(vlSelf->_mc___05Fs1787)) 
                                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sign)))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
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
                                                                     (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                                      >> 1U)
                                                                      : vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)) 
                                                                   | (- (IData)((IData)(vlSelf->_mc___05Fs1790)))))))))),33);
    bufp->chgBit(oldp+2695,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
                             | ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_CIsDominant)) 
                                & (IData)(vlSelf->_mc___05Fs1777)))));
    bufp->chgBit(oldp+2696,((((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                              & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_signProd)) 
                             | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isInfC) 
                                 & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__opSignC)) 
                                | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
                                    & ((2U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundingMode_stage0_pipe_b)) 
                                       & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_signProd) 
                                          & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__opSignC)))) 
                                   | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
                                       & ((2U == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundingMode_stage0_pipe_b)) 
                                          & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_signProd) 
                                             | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__opSignC)))) 
                                      | ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfOut)) 
                                         & ((~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros)) 
                                            & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_CIsDominant)
                                                ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__opSignC)
                                                : ((IData)(vlSelf->_mc___05Fs1777)
                                                    ? 
                                                   (2U 
                                                    == (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundingMode_stage0_pipe_b))
                                                    : 
                                                   ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_signProd) 
                                                    ^ (IData)(vlSelf->_mc___05Fs1751))))))))))));
    bufp->chgBit(oldp+2697,(vlSelf->_mc___05Fs1777));
    bufp->chgSData(oldp+2698,((0x3ffU & ((IData)(vlSelf->_mc___05Fs1748)
                                          ? (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                             >> 0x17U)
                                          : ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN) 
                                             - (IData)(0x18U))))),10);
    bufp->chgBit(oldp+2699,(vlSelf->_mc___05Fs1746));
    bufp->chgBit(oldp+2700,(vlSelf->_mc___05Fs1748));
    bufp->chgCData(oldp+2701,(((IData)(vlSelf->_mc___05Fs1745)
                                ? 0U : ((IData)(vlSelf->_mc___05Fs1744)
                                         ? (0x1fU & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN_0))
                                         : 0xaU))),5);
    bufp->chgBit(oldp+2702,(((IData)(vlSelf->_mc___05Fs1746)
                              ? ((~ (IData)((0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN_2)))) 
                                 & (7U == (7U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])))
                              : ((0U != (7U & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                 | (0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN_2))))));
    bufp->chgBit(oldp+2703,(vlSelf->_mc___05Fs1745));
    bufp->chgCData(oldp+2704,(((IData)(vlSelf->_mc___05Fs1745)
                                ? 0U : ((IData)(vlSelf->_mc___05Fs1744)
                                         ? (0x7fU & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN_0))
                                         : 0x4aU))),7);
    bufp->chgBit(oldp+2705,(vlSelf->_mc___05Fs1785));
    bufp->chgBit(oldp+2706,(vlSelf->_mc___05Fs1787));
    bufp->chgBit(oldp+2707,(vlSelf->_rs___05Fs2590));
    bufp->chgBit(oldp+2708,(vlSelf->_mc___05Fs1789));
    bufp->chgBit(oldp+2709,(vlSelf->_mc___05Fs1790));
    bufp->chgBit(oldp+2710,(vlSelf->_mc___05Fs1791));
    bufp->chgBit(oldp+2711,(vlSelf->_cp___05Fs8444));
    bufp->chgBit(oldp+2712,(vlSelf->_cp___05Fs9379));
    bufp->chgBit(oldp+2713,(vlSelf->_mc___05Fs1403));
    bufp->chgBit(oldp+2714,(vlSelf->_cp___05Fs8331));
    bufp->chgBit(oldp+2715,(vlSelf->_cp___05Fs9377));
    bufp->chgBit(oldp+2716,((1U & (~ (IData)(vlSelf->_cp___05Fs9380)))));
    bufp->chgIData(oldp+2717,(vlSelf->_rs___05Fs2283),27);
    bufp->chgBit(oldp+2718,(vlSelf->_rs___05Fs2292));
    bufp->chgBit(oldp+2719,(vlSelf->_rs___05Fs2290));
    bufp->chgBit(oldp+2720,(vlSelf->_rs___05Fs2291));
    bufp->chgBit(oldp+2721,(vlSelf->_cp___05Fs9682));
    bufp->chgBit(oldp+2722,((((IData)(vlSelf->_cp___05Fs9666) 
                              & (IData)(vlSelf->_cp___05Fs9672)) 
                             | (IData)(vlSelf->_cp___05Fs9664))));
    bufp->chgBit(oldp+2723,(vlSelf->_mc___05Fs1674));
    bufp->chgBit(oldp+2724,(vlSelf->_cp___05Fs9655));
    bufp->chgBit(oldp+2725,(vlSelf->_mc___05Fs1706));
    bufp->chgBit(oldp+2726,(vlSelf->_mc___05Fs1740));
    bufp->chgBit(oldp+2727,(vlSelf->_cp___05Fs9675));
    bufp->chgBit(oldp+2728,(vlSelf->_cp___05Fs9678));
    bufp->chgBit(oldp+2729,(vlSelf->_cp___05Fs9619));
    bufp->chgBit(oldp+2730,(((IData)(vlSelf->_cp___05Fs9656) 
                             | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_cfi))));
    bufp->chgQData(oldp+2731,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___core_io_imem_btb_update_valid)
                                ? vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___io_imem_btb_update_bits_br_pc_output
                                : ((0x7ffffffffcULL 
                                    & vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_pc) 
                                   | (QData)((IData)(
                                                     ((IData)(vlSelf->_cp___05Fs9666) 
                                                      << 1U)))))),39);
    bufp->chgCData(oldp+2733,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___core_io_imem_btb_update_valid)
                                ? ((IData)(vlSelf->_mc___05Fs3354)
                                    ? 2U : ((IData)(vlSelf->_mc___05Fs3353)
                                             ? 3U : (IData)(vlSelf->_mc___05Fs3352)))
                                : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_0))),2);
    bufp->chgBit(oldp+2734,(vlSelf->_cp___05Fs9634));
    bufp->chgBit(oldp+2735,(vlSelf->_cp___05Fs9641));
    bufp->chgBit(oldp+2736,(vlSelf->_cp___05Fs9631));
    bufp->chgBit(oldp+2737,(vlSelf->_cp___05Fs9621));
    bufp->chgBit(oldp+2738,(vlSelf->_mc___05Fs1642));
    bufp->chgCData(oldp+2739,(vlSelf->_rs___05Fs2503),8);
    bufp->chgBit(oldp+2740,(vlSelf->_cp___05Fs9645));
    bufp->chgBit(oldp+2741,(vlSelf->_mc___05Fs1506));
    bufp->chgBit(oldp+2742,(vlSelf->_mc___05Fs1489));
    bufp->chgBit(oldp+2743,(vlSelf->_mc___05Fs1490));
    bufp->chgBit(oldp+2744,(vlSelf->_mc___05Fs1491));
    bufp->chgBit(oldp+2745,(vlSelf->_cp___05Fs9633));
    bufp->chgBit(oldp+2746,(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____Vcellinp__fq__reset));
    bufp->chgBit(oldp+2747,(vlSelf->_cp___05Fs9346));
    bufp->chgBit(oldp+2748,(vlSelf->_cp___05Fs9341));
    bufp->chgBit(oldp+2749,(vlSelf->_cp___05Fs9342));
    bufp->chgBit(oldp+2750,(vlSelf->_cp___05Fs9343));
    bufp->chgBit(oldp+2751,(vlSelf->_cp___05Fs9344));
    bufp->chgBit(oldp+2752,(vlSelf->_cp___05Fs9345));
    bufp->chgBit(oldp+2753,(((IData)(vlSelf->_cp___05Fs9682) 
                             | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___tlb_io_resp_miss) 
                                | (IData)(vlSelf->_mc___05Fs1674)))));
    bufp->chgBit(oldp+2754,(vlSelf->_rs___05Fs2087));
    bufp->chgBit(oldp+2755,(vlSelf->_cp___05Fs9333));
    bufp->chgBit(oldp+2756,(vlSelf->_cp___05Fs9321));
    bufp->chgBit(oldp+2757,(vlSelf->_cp___05Fs9326));
    bufp->chgBit(oldp+2758,(vlSelf->_cp___05Fs9315));
    bufp->chgBit(oldp+2759,(vlSelf->_cp___05Fs9314));
    bufp->chgBit(oldp+2760,(vlSelf->_cp___05Fs9313));
    bufp->chgBit(oldp+2761,(vlSelf->_cp___05Fs9311));
    bufp->chgBit(oldp+2762,(vlSelf->_cp___05Fs9305));
    bufp->chgBit(oldp+2763,(vlSelf->_mc___05Fs1357));
    bufp->chgBit(oldp+2764,(vlSelf->_mc___05Fs1354));
    bufp->chgBit(oldp+2765,(vlSelf->_cp___05Fs9312));
    bufp->chgBit(oldp+2766,(vlSelf->_cp___05Fs9318));
    bufp->chgBit(oldp+2767,(vlSelf->_cp___05Fs8521));
    bufp->chgBit(oldp+2768,(vlSelf->_rs___05Fs2039));
    bufp->chgBit(oldp+2769,(vlSelf->_rs___05Fs2040));
    bufp->chgBit(oldp+2770,(vlSelf->_rs___05Fs2041));
    bufp->chgBit(oldp+2771,(vlSelf->_rs___05Fs2042));
    bufp->chgBit(oldp+2772,(vlSelf->_rs___05Fs2043));
    bufp->chgBit(oldp+2773,(vlSelf->_rs___05Fs2044));
    bufp->chgBit(oldp+2774,(vlSelf->_rs___05Fs2045));
    bufp->chgBit(oldp+2775,(vlSelf->_rs___05Fs2046));
    bufp->chgBit(oldp+2776,(vlSelf->_rs___05Fs2047));
    bufp->chgBit(oldp+2777,(vlSelf->_rs___05Fs2048));
    bufp->chgBit(oldp+2778,(vlSelf->_rs___05Fs2049));
    bufp->chgBit(oldp+2779,(vlSelf->_rs___05Fs2050));
    bufp->chgBit(oldp+2780,(vlSelf->_rs___05Fs2051));
    bufp->chgBit(oldp+2781,(vlSelf->_rs___05Fs2052));
    bufp->chgBit(oldp+2782,(vlSelf->_rs___05Fs2053));
    bufp->chgBit(oldp+2783,(vlSelf->_rs___05Fs2054));
    bufp->chgBit(oldp+2784,(vlSelf->_cp___05Fs9380));
    bufp->chgBit(oldp+2785,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__bad_va) 
                             | (0U != ((((~ ((((IData)(vlSelf->_mc___05Fs1431)
                                                ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_77)
                                                : 0U) 
                                              | ((IData)(vlSelf->_mc___05Fs1432)
                                                  ? 
                                                 (~ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_77))
                                                  : 0U)) 
                                             & (((0x1000U 
                                                  & ((IData)(
                                                             (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                                                              >> 0xcU)) 
                                                     << 0xcU)) 
                                                 | ((0x800U 
                                                     & ((IData)(
                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                                                 >> 0xcU)) 
                                                        << 0xbU)) 
                                                    | ((0x400U 
                                                        & ((IData)(
                                                                   (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                                                    >> 0xcU)) 
                                                           << 0xaU)) 
                                                       | ((0x200U 
                                                           & ((IData)(
                                                                      (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                                                       >> 0xcU)) 
                                                              << 9U)) 
                                                          | ((0x100U 
                                                              & ((IData)(
                                                                         (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                                                          >> 0xcU)) 
                                                                 << 8U)) 
                                                             | ((0x80U 
                                                                 & ((IData)(
                                                                            (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_75 
                                                                             >> 0xcU)) 
                                                                    << 7U)) 
                                                                | ((0x40U 
                                                                    & ((IData)(
                                                                               (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_73 
                                                                                >> 0xcU)) 
                                                                       << 6U)) 
                                                                   | ((0x20U 
                                                                       & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_71 
                                                                                >> 0xcU)) 
                                                                          << 5U)) 
                                                                      | ((0x10U 
                                                                          & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_69 
                                                                                >> 0xcU)) 
                                                                             << 4U)) 
                                                                         | ((8U 
                                                                             & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_67 
                                                                                >> 0xcU)) 
                                                                                << 3U)) 
                                                                            | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_65 
                                                                                >> 0xcU)) 
                                                                                << 2U)) 
                                                                               | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_63 
                                                                                >> 0xcU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_61 
                                                                                >> 0xcU))))))))))))))) 
                                                | ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_mxr)
                                                    ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_78)
                                                    : 0U)))) 
                                         & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_80)) 
                                        | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_81)) 
                                       & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_h9a79f180__0))))));
    bufp->chgBit(oldp+2786,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__bad_va) 
                             | (0U != ((((~ (((- (IData)((IData)(vlSelf->_mc___05Fs1432))) 
                                              ^ (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_77)) 
                                             & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_78))) 
                                         & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_80)) 
                                        | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_81)) 
                                       & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_h9a79f180__0))))));
    bufp->chgBit(oldp+2787,((0U != ((~ (((0x3000U & 
                                          ((- (IData)((IData)(vlSelf->_mc___05Fs1439))) 
                                           << 0xcU)) 
                                         | ((0x800U 
                                             & ((IData)(
                                                        (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                                         >> 7U)) 
                                                << 0xbU)) 
                                            | ((0x400U 
                                                & ((IData)(
                                                           (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                                            >> 7U)) 
                                                   << 0xaU)) 
                                               | ((0x200U 
                                                   & ((IData)(
                                                              (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                                               >> 7U)) 
                                                      << 9U)) 
                                                  | ((0x100U 
                                                      & ((IData)(
                                                                 (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                                                  >> 7U)) 
                                                         << 8U)) 
                                                     | ((0x80U 
                                                         & ((IData)(
                                                                    (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_75 
                                                                     >> 7U)) 
                                                            << 7U)) 
                                                        | ((0x40U 
                                                            & ((IData)(
                                                                       (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_73 
                                                                        >> 7U)) 
                                                               << 6U)) 
                                                           | ((0x20U 
                                                               & ((IData)(
                                                                          (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_71 
                                                                           >> 7U)) 
                                                                  << 5U)) 
                                                              | ((0x10U 
                                                                  & ((IData)(
                                                                             (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_69 
                                                                              >> 7U)) 
                                                                     << 4U)) 
                                                                 | ((8U 
                                                                     & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_67 
                                                                                >> 7U)) 
                                                                        << 3U)) 
                                                                    | ((4U 
                                                                        & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_65 
                                                                                >> 7U)) 
                                                                           << 2U)) 
                                                                       | ((2U 
                                                                           & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_63 
                                                                                >> 7U)) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & (IData)(
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_61 
                                                                                >> 7U))))))))))))))) 
                                        & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_79))) 
                                    & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hits)))));
    bufp->chgBit(oldp+2788,(vlSelf->_mc___05Fs1445));
    bufp->chgBit(oldp+2789,((0U != (((0x3000U & ((- (IData)((IData)(vlSelf->_mc___05Fs1441))) 
                                                 << 0xcU)) 
                                     | ((0x800U & ((IData)(
                                                           (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                                            >> 1U)) 
                                                   << 0xbU)) 
                                        | ((0x400U 
                                            & ((IData)(
                                                       (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                                        >> 1U)) 
                                               << 0xaU)) 
                                           | ((0x200U 
                                               & ((IData)(
                                                          (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                                           >> 1U)) 
                                                  << 9U)) 
                                              | ((0x100U 
                                                  & ((IData)(
                                                             (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                                              >> 1U)) 
                                                     << 8U)) 
                                                 | ((0x80U 
                                                     & ((IData)(
                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_75 
                                                                 >> 1U)) 
                                                        << 7U)) 
                                                    | ((0x40U 
                                                        & ((IData)(
                                                                   (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_73 
                                                                    >> 1U)) 
                                                           << 6U)) 
                                                       | ((0x20U 
                                                           & ((IData)(
                                                                      (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_71 
                                                                       >> 1U)) 
                                                              << 5U)) 
                                                          | ((0x10U 
                                                              & ((IData)(
                                                                         (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_69 
                                                                          >> 1U)) 
                                                                 << 4U)) 
                                                             | ((8U 
                                                                 & ((IData)(
                                                                            (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_67 
                                                                             >> 1U)) 
                                                                    << 3U)) 
                                                                | ((4U 
                                                                    & ((IData)(
                                                                               (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_65 
                                                                                >> 1U)) 
                                                                       << 2U)) 
                                                                   | ((2U 
                                                                       & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_63 
                                                                                >> 1U)) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_61 
                                                                                >> 1U))))))))))))))) 
                                    & (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hits)))));
    bufp->chgBit(oldp+2790,(vlSelf->_cp___05Fs9352));
    bufp->chgBit(oldp+2791,(vlSelf->_mc___05Fs1400));
    bufp->chgBit(oldp+2792,(vlSelf->_mc___05Fs1437));
    bufp->chgBit(oldp+2793,(vlSelf->_mc___05Fs1438));
    bufp->chgBit(oldp+2794,(vlSelf->_mc___05Fs1439));
    bufp->chgBit(oldp+2795,(vlSelf->_mc___05Fs1407));
    bufp->chgBit(oldp+2796,(vlSelf->_mc___05Fs1409));
    bufp->chgBit(oldp+2797,(vlSelf->_cp___05Fs9553));
    bufp->chgBit(oldp+2798,(vlSelf->_mc___05Fs1411));
    bufp->chgBit(oldp+2799,(vlSelf->_cp___05Fs9560));
    bufp->chgBit(oldp+2800,(vlSelf->_mc___05Fs1413));
    bufp->chgBit(oldp+2801,(vlSelf->_cp___05Fs9567));
    bufp->chgBit(oldp+2802,(vlSelf->_mc___05Fs1417));
    bufp->chgBit(oldp+2803,(vlSelf->_mc___05Fs1418));
    bufp->chgBit(oldp+2804,(vlSelf->_mc___05Fs1419));
    bufp->chgBit(oldp+2805,(vlSelf->_mc___05Fs1420));
    bufp->chgBit(oldp+2806,(vlSelf->_mc___05Fs1421));
    bufp->chgBit(oldp+2807,(vlSelf->_mc___05Fs1422));
    bufp->chgBit(oldp+2808,(vlSelf->_mc___05Fs1423));
    bufp->chgBit(oldp+2809,(vlSelf->_mc___05Fs1424));
    bufp->chgBit(oldp+2810,(vlSelf->_mc___05Fs1425));
    bufp->chgBit(oldp+2811,(vlSelf->_mc___05Fs1426));
    bufp->chgBit(oldp+2812,(vlSelf->_mc___05Fs1427));
    bufp->chgBit(oldp+2813,(vlSelf->_mc___05Fs1428));
    bufp->chgBit(oldp+2814,(vlSelf->_mc___05Fs1429));
    bufp->chgBit(oldp+2815,(vlSelf->_mc___05Fs1441));
    bufp->chgBit(oldp+2816,(vlSelf->_mc___05Fs1442));
    bufp->chgBit(oldp+2817,(vlSelf->_mc___05Fs1443));
    bufp->chgBit(oldp+2818,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pma__DOT__legal_address) 
                             & (IData)(vlSelf->_mc___05Fs1395))));
    bufp->chgBit(oldp+2819,(vlSelf->_mc___05Fs1440));
    bufp->chgBit(oldp+2820,(((IData)(vlSelf->_mc___05Fs1384)
                              ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_r) 
                                 | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_7))
                              : ((IData)(vlSelf->_mc___05Fs1382)
                                  ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_r) 
                                     | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_6))
                                  : ((IData)(vlSelf->_mc___05Fs1380)
                                      ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_r) 
                                         | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_5))
                                      : ((IData)(vlSelf->_mc___05Fs1378)
                                          ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_r) 
                                             | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_4))
                                          : ((IData)(vlSelf->_mc___05Fs1376)
                                              ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_r) 
                                                 | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_3))
                                              : ((IData)(vlSelf->_mc___05Fs1374)
                                                  ? 
                                                 ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_r) 
                                                  | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_2))
                                                  : 
                                                 ((IData)(vlSelf->_mc___05Fs1372)
                                                   ? 
                                                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_r) 
                                                   | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_1))
                                                   : 
                                                  ((IData)(vlSelf->_mc___05Fs1370)
                                                    ? 
                                                   ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_r) 
                                                    | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore))
                                                    : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0)))))))))));
    bufp->chgBit(oldp+2821,(((IData)(vlSelf->_mc___05Fs1384)
                              ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_w) 
                                 | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_7))
                              : ((IData)(vlSelf->_mc___05Fs1382)
                                  ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_w) 
                                     | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_6))
                                  : ((IData)(vlSelf->_mc___05Fs1380)
                                      ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_w) 
                                         | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_5))
                                      : ((IData)(vlSelf->_mc___05Fs1378)
                                          ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_w) 
                                             | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_4))
                                          : ((IData)(vlSelf->_mc___05Fs1376)
                                              ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_w) 
                                                 | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_3))
                                              : ((IData)(vlSelf->_mc___05Fs1374)
                                                  ? 
                                                 ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_w) 
                                                  | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_2))
                                                  : 
                                                 ((IData)(vlSelf->_mc___05Fs1372)
                                                   ? 
                                                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_w) 
                                                   | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_1))
                                                   : 
                                                  ((IData)(vlSelf->_mc___05Fs1370)
                                                    ? 
                                                   ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_w) 
                                                    | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore))
                                                    : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0)))))))))));
    bufp->chgBit(oldp+2822,(((IData)(vlSelf->_mc___05Fs1384)
                              ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_x) 
                                 | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_7))
                              : ((IData)(vlSelf->_mc___05Fs1382)
                                  ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_x) 
                                     | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_6))
                                  : ((IData)(vlSelf->_mc___05Fs1380)
                                      ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_x) 
                                         | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_5))
                                      : ((IData)(vlSelf->_mc___05Fs1378)
                                          ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_x) 
                                             | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_4))
                                          : ((IData)(vlSelf->_mc___05Fs1376)
                                              ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_x) 
                                                 | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_3))
                                              : ((IData)(vlSelf->_mc___05Fs1374)
                                                  ? 
                                                 ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_x) 
                                                  | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_2))
                                                  : 
                                                 ((IData)(vlSelf->_mc___05Fs1372)
                                                   ? 
                                                  ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_x) 
                                                   | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_1))
                                                   : 
                                                  ((IData)(vlSelf->_mc___05Fs1370)
                                                    ? 
                                                   ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_x) 
                                                    | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore))
                                                    : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0)))))))))));
    bufp->chgBit(oldp+2823,(vlSelf->_mc___05Fs1370));
    bufp->chgBit(oldp+2824,(vlSelf->_mc___05Fs1372));
    bufp->chgBit(oldp+2825,(vlSelf->_mc___05Fs1374));
    bufp->chgBit(oldp+2826,(vlSelf->_mc___05Fs1376));
    bufp->chgBit(oldp+2827,(vlSelf->_mc___05Fs1378));
    bufp->chgBit(oldp+2828,(vlSelf->_mc___05Fs1380));
    bufp->chgBit(oldp+2829,(vlSelf->_mc___05Fs1382));
    bufp->chgBit(oldp+2830,(vlSelf->_mc___05Fs1384));
    bufp->chgBit(oldp+2831,(vlSelf->_mc___05Fs2609));
    bufp->chgBit(oldp+2832,(vlSelf->_cp___05Fs9789));
    bufp->chgBit(oldp+2833,(vlSelf->_mc___05Fs2613));
    bufp->chgBit(oldp+2834,(vlSelf->_cp___05Fs9782));
    bufp->chgBit(oldp+2835,(((IData)(vlSelf->_cp___05Fs8638) 
                             | (IData)(vlSelf->_cp___05Fs9377))));
    bufp->chgBit(oldp+2836,(vlSelf->_mc___05Fs2593));
    bufp->chgBit(oldp+2837,(vlSelf->_mc___05Fs2446));
    bufp->chgBit(oldp+2838,(vlSelf->_mc___05Fs2594));
    bufp->chgBit(oldp+2839,((1U & (~ (IData)(vlSelf->_cp___05Fs8638)))));
    bufp->chgSData(oldp+2840,(((IData)(vlSelf->_mc___05Fs2610)
                                ? 0U : (0x3ffU & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_74)
                                                   ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_reserved_for_future)
                                                   : 
                                                  ((IData)(vlSelf->_mc___05Fs2604)
                                                    ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_reserved_for_future)
                                                    : (IData)(
                                                              (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                               >> 0x36U))))))),10);
    bufp->chgCData(oldp+2841,(((IData)(vlSelf->_mc___05Fs2610)
                                ? 0U : (3U & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_74)
                                               ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_reserved_for_software)
                                               : ((IData)(vlSelf->_mc___05Fs2604)
                                                   ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_reserved_for_software)
                                                   : (IData)(
                                                             (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                              >> 8U))))))),2);
    bufp->chgBit(oldp+2842,((1U & ((~ (IData)(vlSelf->_mc___05Fs2610)) 
                                   & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_74)
                                       ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_d)
                                       : ((IData)(vlSelf->_mc___05Fs2604)
                                           ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_d)
                                           : (IData)(
                                                     (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                      >> 7U))))))));
    bufp->chgBit(oldp+2843,((1U & ((~ (IData)(vlSelf->_mc___05Fs2610)) 
                                   & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_74)
                                       ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_a)
                                       : ((IData)(vlSelf->_mc___05Fs2604)
                                           ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_a)
                                           : (IData)(
                                                     (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                      >> 6U))))))));
    bufp->chgBit(oldp+2844,((1U & ((~ (IData)(vlSelf->_mc___05Fs2610)) 
                                   & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_74)
                                       ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_g)
                                       : ((IData)(vlSelf->_mc___05Fs2604)
                                           ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_g)
                                           : (IData)(
                                                     (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                      >> 5U))))))));
    bufp->chgBit(oldp+2845,((1U & ((~ (IData)(vlSelf->_mc___05Fs2610)) 
                                   & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_74)
                                       ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_u)
                                       : ((IData)(vlSelf->_mc___05Fs2604)
                                           ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_u)
                                           : (IData)(
                                                     (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                      >> 4U))))))));
    bufp->chgBit(oldp+2846,((1U & ((~ (IData)(vlSelf->_mc___05Fs2610)) 
                                   & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_74)
                                       ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_x)
                                       : ((IData)(vlSelf->_mc___05Fs2604)
                                           ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_x)
                                           : (IData)(
                                                     (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                      >> 3U))))))));
    bufp->chgBit(oldp+2847,((1U & ((~ (IData)(vlSelf->_mc___05Fs2610)) 
                                   & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_74)
                                       ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_w)
                                       : ((IData)(vlSelf->_mc___05Fs2604)
                                           ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_w)
                                           : (IData)(
                                                     (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                      >> 2U))))))));
    bufp->chgBit(oldp+2848,((1U & ((~ (IData)(vlSelf->_mc___05Fs2610)) 
                                   & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_74)
                                       ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_r)
                                       : ((IData)(vlSelf->_mc___05Fs2604)
                                           ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_r)
                                           : (IData)(
                                                     (vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                      >> 1U))))))));
    bufp->chgBit(oldp+2849,(((~ (IData)(vlSelf->_mc___05Fs2610)) 
                             & ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_74)
                                 ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_v)
                                 : ((IData)(vlSelf->_mc___05Fs2604)
                                     ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_v)
                                     : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_pte_v))))));
    bufp->chgCData(oldp+2850,(((IData)(vlSelf->_cp___05Fs9801)
                                ? 1U : ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_valid)
                                         ? (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_79)
                                         : ((0U != (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state))
                                             ? ((IData)(vlSelf->_cp___05Fs9779)
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
                                             : ((IData)(vlSelf->_mc___05Fs2606)
                                                 ? (IData)(vlSelf->_mc___05Fs2593)
                                                 : (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state)))))),3);
    bufp->chgBit(oldp+2851,(vlSelf->_mc___05Fs947));
    bufp->chgBit(oldp+2852,(vlSelf->_mc___05Fs951));
    bufp->chgBit(oldp+2853,(vlSelf->_mc___05Fs950));
    bufp->chgBit(oldp+2854,(vlSelf->_mc___05Fs948));
    bufp->chgBit(oldp+2855,(vlSelf->_mc___05Fs949));
    bufp->chgBit(oldp+2856,(vlSelf->_mc___05Fs954));
    bufp->chgBit(oldp+2857,(vlSelf->_mc___05Fs955));
    bufp->chgBit(oldp+2858,(vlSelf->_cp___05Fs8245));
    bufp->chgBit(oldp+2859,(vlSelf->_mc___05Fs920));
    bufp->chgBit(oldp+2860,(vlSelf->_mc___05Fs922));
    bufp->chgBit(oldp+2861,(vlSelf->_cp___05Fs8282));
    bufp->chgBit(oldp+2862,(vlSelf->_mc___05Fs924));
    bufp->chgBit(oldp+2863,(vlSelf->_mc___05Fs926));
    bufp->chgBit(oldp+2864,(vlSelf->_cp___05Fs8310));
    bufp->chgBit(oldp+2865,(vlSelf->_mc___05Fs928));
    bufp->chgBit(oldp+2866,(vlSelf->_mc___05Fs934));
    bufp->chgBit(oldp+2867,(vlSelf->_mc___05Fs936));
    bufp->chgBit(oldp+2868,(vlSelf->_cp___05Fs8551));
    bufp->chgBit(oldp+2869,(vlSelf->_cp___05Fs8552));
    bufp->chgBit(oldp+2870,(vlSelf->_cp___05Fs8555));
    bufp->chgBit(oldp+2871,(vlSelf->_mc___05Fs939));
    bufp->chgBit(oldp+2872,(vlSelf->_cp___05Fs8583));
    bufp->chgBit(oldp+2873,(vlSelf->_rs___05Fs3556));
    bufp->chgBit(oldp+2874,(vlSelf->_rs___05Fs3557));
    bufp->chgBit(oldp+2875,(vlSelf->_rs___05Fs3558));
    bufp->chgCData(oldp+2876,(vlSelf->_rs___05Fs3814),3);
    bufp->chgCData(oldp+2877,(vlSelf->_rs___05Fs3815),3);
    bufp->chgCData(oldp+2878,(vlSelf->_rs___05Fs3816),2);
    bufp->chgBit(oldp+2879,(vlSelf->_rs___05Fs3817));
    bufp->chgSData(oldp+2880,(vlSelf->_rs___05Fs3818),9);
    bufp->chgCData(oldp+2881,(vlSelf->_rs___05Fs3819),4);
    bufp->chgIData(oldp+2882,(vlSelf->_rs___05Fs3820),32);
    bufp->chgBit(oldp+2883,(vlSelf->_rs___05Fs3821));
    bufp->chgBit(oldp+2884,(vlSelf->_rs___05Fs3824));
    bufp->chgBit(oldp+2885,(vlSelf->_rs___05Fs3805));
    bufp->chgBit(oldp+2886,(vlSelf->_cp___05Fs11207));
    bufp->chgBit(oldp+2887,(vlSelf->_rs___05Fs3843));
    bufp->chgBit(oldp+2888,(vlSelf->_rs___05Fs3832));
    bufp->chgBit(oldp+2889,(vlSelf->_rs___05Fs3862));
    bufp->chgSData(oldp+2890,(vlSelf->_rs___05Fs3863),10);
    bufp->chgBit(oldp+2891,(vlSelf->_rs___05Fs3864));
    bufp->chgBit(oldp+2892,(vlSelf->_rs___05Fs3865));
    bufp->chgBit(oldp+2893,(vlSelf->_rs___05Fs3866));
    bufp->chgBit(oldp+2894,(vlSelf->_rs___05Fs3867));
    bufp->chgBit(oldp+2895,(vlSelf->_rs___05Fs3870));
    bufp->chgBit(oldp+2896,(vlSelf->_rs___05Fs3853));
    bufp->chgBit(oldp+2897,(vlSelf->_rs___05Fs4037));
    bufp->chgBit(oldp+2898,(vlSelf->_rs___05Fs4026));
    bufp->chgCData(oldp+2899,(vlSelf->_rs___05Fs4053),3);
    bufp->chgCData(oldp+2900,(vlSelf->_rs___05Fs4054),2);
    bufp->chgCData(oldp+2901,(vlSelf->_rs___05Fs4055),2);
    bufp->chgBit(oldp+2902,(vlSelf->_rs___05Fs4056));
    bufp->chgBit(oldp+2903,(vlSelf->_rs___05Fs4057));
    bufp->chgBit(oldp+2904,(vlSelf->_rs___05Fs4058));
    bufp->chgIData(oldp+2905,(vlSelf->_rs___05Fs4059),32);
    bufp->chgBit(oldp+2906,(vlSelf->_rs___05Fs4060));
    bufp->chgBit(oldp+2907,(vlSelf->_rs___05Fs4063));
    bufp->chgBit(oldp+2908,(vlSelf->_rs___05Fs4044));
    bufp->chgBit(oldp+2909,(vlSelf->_rs___05Fs4085));
    bufp->chgBit(oldp+2910,(vlSelf->_rs___05Fs4074));
    bufp->chgBit(oldp+2911,(vlSelf->_rs___05Fs3929));
    bufp->chgBit(oldp+2912,(vlSelf->_cp___05Fs12584));
    bufp->chgBit(oldp+2913,(vlSelf->_cp___05Fs12595));
    bufp->chgBit(oldp+2914,(vlSelf->_cp___05Fs12605));
    bufp->chgBit(oldp+2915,(vlSelf->_cp___05Fs12846));
    bufp->chgBit(oldp+2916,(vlSelf->_rs___05Fs4064));
    bufp->chgBit(oldp+2917,(vlSelf->_cp___05Fs13118));
    bufp->chgCData(oldp+2918,(vlSelf->_mc___05Fs3606),3);
    bufp->chgIData(oldp+2919,(((IData)(vlSelf->_mc___05Fs3642)
                                ? (((0U == (0x1fU & 
                                            VL_SHIFTL_III(10,10,32, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex), 5U)))
                                     ? 0U : (vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[
                                             (((IData)(0x1fU) 
                                               + (0x3ffU 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex), 5U))))) 
                                   | (vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_12[
                                      (0x1fU & (VL_SHIFTL_III(10,10,32, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex), 5U) 
                                                >> 5U))] 
                                      >> (0x1fU & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex), 5U))))
                                : 0U)),32);
    bufp->chgBit(oldp+2920,(vlSelf->_cp___05Fs13212));
    bufp->chgBit(oldp+2921,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_102) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+2922,(vlSelf->_cp___05Fs13211));
    bufp->chgBit(oldp+2923,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_102) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+2924,(vlSelf->_cp___05Fs13210));
    bufp->chgBit(oldp+2925,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_102) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+2926,(vlSelf->_cp___05Fs13209));
    bufp->chgBit(oldp+2927,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_102) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+2928,(vlSelf->_cp___05Fs13208));
    bufp->chgBit(oldp+2929,(vlSelf->_cp___05Fs13207));
    bufp->chgBit(oldp+2930,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_97) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+2931,(vlSelf->_cp___05Fs13206));
    bufp->chgBit(oldp+2932,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_97) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+2933,(vlSelf->_cp___05Fs13205));
    bufp->chgBit(oldp+2934,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_97) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+2935,(vlSelf->_cp___05Fs13204));
    bufp->chgBit(oldp+2936,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_97) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+2937,(vlSelf->_cp___05Fs13203));
    bufp->chgBit(oldp+2938,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_93) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+2939,(vlSelf->_cp___05Fs13202));
    bufp->chgBit(oldp+2940,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_93) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+2941,(vlSelf->_cp___05Fs13201));
    bufp->chgBit(oldp+2942,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_93) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+2943,(vlSelf->_cp___05Fs13200));
    bufp->chgBit(oldp+2944,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_93) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+2945,(vlSelf->_cp___05Fs13199));
    bufp->chgBit(oldp+2946,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_82) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+2947,(vlSelf->_cp___05Fs13198));
    bufp->chgBit(oldp+2948,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_82) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+2949,(vlSelf->_cp___05Fs13197));
    bufp->chgBit(oldp+2950,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_82) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+2951,(vlSelf->_cp___05Fs13196));
    bufp->chgBit(oldp+2952,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_82) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+2953,(vlSelf->_cp___05Fs13195));
    bufp->chgBit(oldp+2954,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_78) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+2955,(vlSelf->_cp___05Fs13194));
    bufp->chgBit(oldp+2956,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_78) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+2957,(vlSelf->_cp___05Fs13193));
    bufp->chgBit(oldp+2958,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_78) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+2959,(vlSelf->_cp___05Fs13192));
    bufp->chgBit(oldp+2960,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_78) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+2961,(vlSelf->_cp___05Fs13191));
    bufp->chgBit(oldp+2962,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_54) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+2963,(vlSelf->_cp___05Fs13190));
    bufp->chgBit(oldp+2964,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_54) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+2965,(vlSelf->_cp___05Fs13189));
    bufp->chgBit(oldp+2966,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_54) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+2967,(vlSelf->_cp___05Fs13188));
    bufp->chgBit(oldp+2968,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_54) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+2969,(vlSelf->_cp___05Fs13187));
    bufp->chgBit(oldp+2970,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_50) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+2971,(vlSelf->_cp___05Fs13186));
    bufp->chgBit(oldp+2972,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_50) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+2973,(vlSelf->_cp___05Fs13185));
    bufp->chgBit(oldp+2974,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_50) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+2975,(vlSelf->_cp___05Fs13184));
    bufp->chgBit(oldp+2976,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_50) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+2977,(vlSelf->_cp___05Fs13183));
    bufp->chgBit(oldp+2978,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_46) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+2979,(vlSelf->_cp___05Fs13182));
    bufp->chgBit(oldp+2980,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_46) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+2981,(vlSelf->_cp___05Fs13181));
    bufp->chgBit(oldp+2982,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_46) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+2983,(vlSelf->_cp___05Fs13180));
    bufp->chgBit(oldp+2984,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_46) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+2985,(vlSelf->_cp___05Fs13179));
    bufp->chgBit(oldp+2986,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_42) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+2987,(vlSelf->_cp___05Fs13178));
    bufp->chgBit(oldp+2988,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_42) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+2989,(vlSelf->_cp___05Fs13177));
    bufp->chgBit(oldp+2990,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_42) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+2991,(vlSelf->_cp___05Fs13176));
    bufp->chgBit(oldp+2992,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_42) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+2993,(vlSelf->_cp___05Fs13175));
    bufp->chgBit(oldp+2994,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_35) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+2995,(vlSelf->_cp___05Fs13174));
    bufp->chgBit(oldp+2996,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_35) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+2997,(vlSelf->_cp___05Fs13173));
    bufp->chgBit(oldp+2998,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_35) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+2999,(vlSelf->_cp___05Fs13172));
    bufp->chgBit(oldp+3000,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_35) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+3001,(vlSelf->_cp___05Fs13171));
    bufp->chgBit(oldp+3002,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_31) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+3003,(vlSelf->_cp___05Fs13170));
    bufp->chgBit(oldp+3004,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_31) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+3005,(vlSelf->_cp___05Fs13169));
    bufp->chgBit(oldp+3006,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_31) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+3007,(vlSelf->_cp___05Fs13168));
    bufp->chgBit(oldp+3008,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_31) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+3009,(vlSelf->_cp___05Fs13167));
    bufp->chgBit(oldp+3010,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_27) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+3011,(vlSelf->_cp___05Fs13166));
    bufp->chgBit(oldp+3012,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_27) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+3013,(vlSelf->_cp___05Fs13165));
    bufp->chgBit(oldp+3014,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_27) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+3015,(vlSelf->_cp___05Fs13164));
    bufp->chgBit(oldp+3016,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_27) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+3017,(vlSelf->_cp___05Fs13163));
    bufp->chgBit(oldp+3018,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_23) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+3019,(vlSelf->_cp___05Fs13162));
    bufp->chgBit(oldp+3020,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_23) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+3021,(vlSelf->_cp___05Fs13161));
    bufp->chgBit(oldp+3022,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_23) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+3023,(vlSelf->_cp___05Fs13160));
    bufp->chgBit(oldp+3024,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_23) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+3025,(vlSelf->_cp___05Fs13159));
    bufp->chgBit(oldp+3026,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_19) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+3027,(vlSelf->_cp___05Fs13158));
    bufp->chgBit(oldp+3028,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_19) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+3029,(vlSelf->_cp___05Fs13157));
    bufp->chgBit(oldp+3030,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_19) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+3031,(vlSelf->_cp___05Fs13156));
    bufp->chgBit(oldp+3032,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_19) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+3033,(vlSelf->_cp___05Fs13155));
    bufp->chgBit(oldp+3034,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_15) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+3035,(vlSelf->_cp___05Fs13154));
    bufp->chgBit(oldp+3036,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_15) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+3037,(vlSelf->_cp___05Fs13153));
    bufp->chgBit(oldp+3038,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_15) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+3039,(vlSelf->_cp___05Fs13152));
    bufp->chgBit(oldp+3040,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_15) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+3041,(vlSelf->_cp___05Fs13151));
    bufp->chgBit(oldp+3042,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_11) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+3043,(vlSelf->_cp___05Fs13150));
    bufp->chgBit(oldp+3044,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_11) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+3045,(vlSelf->_cp___05Fs13149));
    bufp->chgBit(oldp+3046,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_11) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+3047,(vlSelf->_cp___05Fs13148));
    bufp->chgBit(oldp+3048,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_11) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+3049,(vlSelf->_cp___05Fs13147));
    bufp->chgBit(oldp+3050,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_7) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+3051,(vlSelf->_cp___05Fs13146));
    bufp->chgBit(oldp+3052,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_7) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+3053,(vlSelf->_cp___05Fs13145));
    bufp->chgBit(oldp+3054,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_7) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+3055,(vlSelf->_cp___05Fs13144));
    bufp->chgBit(oldp+3056,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_7) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+3057,(vlSelf->_cp___05Fs13143));
    bufp->chgBit(oldp+3058,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_3) 
                             & (IData)(vlSelf->_mc___05Fs3630))));
    bufp->chgBit(oldp+3059,(vlSelf->_cp___05Fs13142));
    bufp->chgBit(oldp+3060,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_3) 
                             & (IData)(vlSelf->_mc___05Fs3629))));
    bufp->chgBit(oldp+3061,(vlSelf->_cp___05Fs13141));
    bufp->chgBit(oldp+3062,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_3) 
                             & (IData)(vlSelf->_mc___05Fs3628))));
    bufp->chgBit(oldp+3063,(vlSelf->_cp___05Fs13140));
    bufp->chgBit(oldp+3064,(((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_3) 
                             & (IData)(vlSelf->_mc___05Fs3627))));
    bufp->chgBit(oldp+3065,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartHalted));
    bufp->chgBit(oldp+3066,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hrmaskReg_0));
    bufp->chgBit(oldp+3067,(vlSelf->_cp___05Fs13139));
    bufp->chgBit(oldp+3068,(vlSelf->_cp___05Fs13129));
    bufp->chgBit(oldp+3069,(vlSelf->_cp___05Fs13135));
    bufp->chgBit(oldp+3070,(vlSelf->_mc___05Fs3606));
    bufp->chgBit(oldp+3071,(vlSelf->_mc___05Fs3617));
    bufp->chgBit(oldp+3072,(vlSelf->_cp___05Fs13292));
    bufp->chgBit(oldp+3073,(vlSelf->_cp___05Fs13293));
    bufp->chgBit(oldp+3074,(vlSelf->_cp___05Fs13294));
    bufp->chgBit(oldp+3075,(vlSelf->_cp___05Fs13295));
    bufp->chgBit(oldp+3076,(vlSelf->_cp___05Fs13296));
    bufp->chgBit(oldp+3077,(vlSelf->_cp___05Fs13297));
    bufp->chgBit(oldp+3078,(vlSelf->_cp___05Fs13298));
    bufp->chgBit(oldp+3079,(vlSelf->_cp___05Fs13299));
    bufp->chgBit(oldp+3080,(vlSelf->_cp___05Fs13300));
    bufp->chgBit(oldp+3081,(vlSelf->_cp___05Fs13301));
    bufp->chgBit(oldp+3082,(vlSelf->_cp___05Fs13302));
    bufp->chgBit(oldp+3083,(vlSelf->_cp___05Fs13303));
    bufp->chgBit(oldp+3084,(vlSelf->_cp___05Fs13304));
    bufp->chgBit(oldp+3085,(vlSelf->_cp___05Fs13305));
    bufp->chgBit(oldp+3086,(vlSelf->_cp___05Fs13306));
    bufp->chgBit(oldp+3087,(vlSelf->_cp___05Fs13307));
    bufp->chgBit(oldp+3088,(vlSelf->_cp___05Fs13138));
    bufp->chgBit(oldp+3089,(vlSelf->_cp___05Fs13377));
    bufp->chgBit(oldp+3090,(vlSelf->_cp___05Fs13308));
    bufp->chgBit(oldp+3091,(vlSelf->_cp___05Fs13309));
    bufp->chgBit(oldp+3092,(vlSelf->_cp___05Fs13310));
    bufp->chgBit(oldp+3093,(vlSelf->_cp___05Fs13311));
    bufp->chgBit(oldp+3094,(vlSelf->_cp___05Fs13312));
    bufp->chgBit(oldp+3095,(vlSelf->_cp___05Fs13313));
    bufp->chgBit(oldp+3096,(vlSelf->_cp___05Fs13314));
    bufp->chgBit(oldp+3097,(vlSelf->_cp___05Fs13315));
    bufp->chgBit(oldp+3098,(vlSelf->_cp___05Fs13316));
    bufp->chgBit(oldp+3099,(vlSelf->_cp___05Fs13317));
    bufp->chgBit(oldp+3100,(vlSelf->_cp___05Fs13318));
    bufp->chgBit(oldp+3101,(vlSelf->_cp___05Fs13319));
    bufp->chgBit(oldp+3102,(vlSelf->_cp___05Fs13320));
    bufp->chgBit(oldp+3103,(vlSelf->_cp___05Fs13321));
    bufp->chgBit(oldp+3104,(vlSelf->_cp___05Fs13322));
    bufp->chgBit(oldp+3105,(vlSelf->_cp___05Fs13323));
    bufp->chgBit(oldp+3106,(vlSelf->_cp___05Fs13137));
    bufp->chgBit(oldp+3107,(vlSelf->_cp___05Fs13287));
    bufp->chgBit(oldp+3108,(vlSelf->_cp___05Fs13324));
    bufp->chgBit(oldp+3109,(vlSelf->_cp___05Fs13325));
    bufp->chgBit(oldp+3110,(vlSelf->_cp___05Fs13326));
    bufp->chgBit(oldp+3111,(vlSelf->_cp___05Fs13327));
    bufp->chgBit(oldp+3112,(vlSelf->_cp___05Fs13328));
    bufp->chgBit(oldp+3113,(vlSelf->_cp___05Fs13329));
    bufp->chgBit(oldp+3114,(vlSelf->_cp___05Fs13330));
    bufp->chgBit(oldp+3115,(vlSelf->_cp___05Fs13331));
    bufp->chgBit(oldp+3116,(vlSelf->_cp___05Fs13332));
    bufp->chgBit(oldp+3117,(vlSelf->_cp___05Fs13333));
    bufp->chgBit(oldp+3118,(vlSelf->_cp___05Fs13334));
    bufp->chgBit(oldp+3119,(vlSelf->_cp___05Fs13335));
    bufp->chgBit(oldp+3120,(vlSelf->_cp___05Fs13336));
    bufp->chgBit(oldp+3121,(vlSelf->_cp___05Fs13337));
    bufp->chgBit(oldp+3122,(vlSelf->_cp___05Fs13338));
    bufp->chgBit(oldp+3123,(vlSelf->_cp___05Fs13339));
    bufp->chgBit(oldp+3124,(vlSelf->_cp___05Fs13340));
    bufp->chgBit(oldp+3125,(vlSelf->_cp___05Fs13341));
    bufp->chgBit(oldp+3126,(vlSelf->_cp___05Fs13342));
    bufp->chgBit(oldp+3127,(vlSelf->_cp___05Fs13343));
    bufp->chgBit(oldp+3128,(vlSelf->_cp___05Fs13344));
    bufp->chgBit(oldp+3129,(vlSelf->_cp___05Fs13345));
    bufp->chgBit(oldp+3130,(vlSelf->_cp___05Fs13346));
    bufp->chgBit(oldp+3131,(vlSelf->_cp___05Fs13347));
    bufp->chgBit(oldp+3132,(vlSelf->_cp___05Fs13348));
    bufp->chgBit(oldp+3133,(vlSelf->_cp___05Fs13349));
    bufp->chgBit(oldp+3134,(vlSelf->_cp___05Fs13350));
    bufp->chgBit(oldp+3135,(vlSelf->_cp___05Fs13351));
    bufp->chgBit(oldp+3136,(vlSelf->_cp___05Fs13352));
    bufp->chgBit(oldp+3137,(vlSelf->_cp___05Fs13353));
    bufp->chgBit(oldp+3138,(vlSelf->_cp___05Fs13354));
    bufp->chgBit(oldp+3139,(vlSelf->_cp___05Fs13355));
    bufp->chgBit(oldp+3140,(vlSelf->_cp___05Fs13356));
    bufp->chgBit(oldp+3141,(vlSelf->_cp___05Fs13357));
    bufp->chgBit(oldp+3142,(vlSelf->_cp___05Fs13358));
    bufp->chgBit(oldp+3143,(vlSelf->_cp___05Fs13359));
    bufp->chgBit(oldp+3144,(vlSelf->_cp___05Fs13360));
    bufp->chgBit(oldp+3145,(vlSelf->_cp___05Fs13361));
    bufp->chgBit(oldp+3146,(vlSelf->_cp___05Fs13362));
    bufp->chgBit(oldp+3147,(vlSelf->_cp___05Fs13363));
    bufp->chgBit(oldp+3148,(vlSelf->_cp___05Fs13125));
    bufp->chgBit(oldp+3149,(vlSelf->_cp___05Fs13365));
    bufp->chgBit(oldp+3150,(vlSelf->_cp___05Fs13370));
    bufp->chgBit(oldp+3151,(vlSelf->_cp___05Fs13373));
    bufp->chgBit(oldp+3152,(vlSelf->_cp___05Fs13374));
    bufp->chgBit(oldp+3153,(vlSelf->_cp___05Fs13127));
    bufp->chgBit(oldp+3154,(vlSelf->_cp___05Fs13128));
    bufp->chgBit(oldp+3155,(vlSelf->_cp___05Fs13286));
    bufp->chgBit(oldp+3156,(vlSelf->_cp___05Fs13126));
    bufp->chgBit(oldp+3157,(vlSelf->_rs___05Fs3921));
    bufp->chgBit(oldp+3158,(vlSelf->_cp___05Fs12774));
    bufp->chgBit(oldp+3159,(vlSelf->_cp___05Fs12700));
    bufp->chgBit(oldp+3160,(vlSelf->_cp___05Fs12813));
    bufp->chgBit(oldp+3161,(vlSelf->_cp___05Fs13040));
    bufp->chgBit(oldp+3162,(vlSelf->_cp___05Fs13079));
    bufp->chgBit(oldp+3163,(vlSelf->_cp___05Fs13389));
    bufp->chgSData(oldp+3164,(vlSelf->_rs___05Fs4070),15);
    bufp->chgBit(oldp+3165,(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___GEN_0));
    bufp->chgBit(oldp+3166,(vlSelf->_rs___05Fs4071));
    bufp->chgBit(oldp+3167,(vlSelf->_rs___05Fs4077));
    bufp->chgBit(oldp+3168,(vlSelf->_rs___05Fs4080));
    bufp->chgBit(oldp+3169,(vlSelf->_rs___05Fs4067));
    bufp->chgBit(oldp+3170,(vlSelf->_rs___05Fs4038));
    bufp->chgBit(oldp+3171,(vlSelf->_rs___05Fs4047));
    bufp->chgBit(oldp+3172,(vlSelf->_rs___05Fs4050));
    bufp->chgBit(oldp+3173,(vlSelf->_rs___05Fs4041));
    bufp->chgBit(oldp+3174,(vlSelf->_cp___05Fs13387));
    bufp->chgQData(oldp+3175,(vlSelf->_rs___05Fs4022),55);
    bufp->chgBit(oldp+3177,(vlSelf->_rs___05Fs4023));
    bufp->chgBit(oldp+3178,(vlSelf->_rs___05Fs4029));
    bufp->chgBit(oldp+3179,(vlSelf->_rs___05Fs4032));
    bufp->chgBit(oldp+3180,(vlSelf->_rs___05Fs4019));
    bufp->chgBit(oldp+3181,(vlSelf->_cp___05Fs12310));
    bufp->chgBit(oldp+3182,(vlSelf->_cp___05Fs12574));
    bufp->chgBit(oldp+3183,(vlSelf->_cp___05Fs12423));
    bufp->chgBit(oldp+3184,(vlSelf->_cp___05Fs12428));
    bufp->chgBit(oldp+3185,(vlSelf->_cp___05Fs12436));
    bufp->chgBit(oldp+3186,(vlSelf->_cp___05Fs12434));
    bufp->chgBit(oldp+3187,(vlSelf->_cp___05Fs12500));
    bufp->chgBit(oldp+3188,(vlSelf->_cp___05Fs12513));
    bufp->chgBit(oldp+3189,(vlSelf->_cp___05Fs12530));
    bufp->chgBit(oldp+3190,(vlSelf->_cp___05Fs12531));
    bufp->chgBit(oldp+3191,(vlSelf->_cp___05Fs12426));
    bufp->chgBit(oldp+3192,(vlSelf->_cp___05Fs12539));
    bufp->chgBit(oldp+3193,(vlSelf->_cp___05Fs12582));
    bufp->chgQData(oldp+3194,(vlSelf->_rs___05Fs3828),43);
    bufp->chgBit(oldp+3196,(vlSelf->_rs___05Fs3829));
    bufp->chgBit(oldp+3197,(vlSelf->_rs___05Fs3835));
    bufp->chgBit(oldp+3198,(vlSelf->_rs___05Fs3838));
    bufp->chgBit(oldp+3199,(vlSelf->_rs___05Fs3825));
    bufp->chgBit(oldp+3200,(vlSelf->_rs___05Fs3799));
    bufp->chgBit(oldp+3201,(vlSelf->_rs___05Fs3808));
    bufp->chgBit(oldp+3202,(vlSelf->_rs___05Fs3811));
    bufp->chgBit(oldp+3203,(vlSelf->_rs___05Fs3802));
    bufp->chgBit(oldp+3204,(vlSelf->_cp___05Fs11481));
    bufp->chgBit(oldp+3205,(vlSelf->_cp___05Fs11743));
    bufp->chgBit(oldp+3206,(vlSelf->_rs___05Fs3844));
    bufp->chgCData(oldp+3207,(vlSelf->_mc___05Fs3497),3);
    bufp->chgIData(oldp+3208,(((IData)(vlSelf->_mc___05Fs3537)
                                ? ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT____VdfgTmp_hcef7e3f7__0)
                                    ? 0x112380U : (
                                                   ((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq) 
                                                    << 0x1fU) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__VdfgTmp_ha6459e1f__0))))
                                : 0U)),32);
    bufp->chgSData(oldp+3209,(vlSelf->_rs___05Fs3693),10);
    bufp->chgBit(oldp+3210,(vlSelf->_cp___05Fs11748));
    bufp->chgBit(oldp+3211,(((IData)(vlSelf->_cp___05Fs11479) 
                             & (vlSelf->TestHarness__DOT__SimDTM__DOT__debug_req_bits_data_reg 
                                >> 3U))));
    bufp->chgBit(oldp+3212,(((IData)(vlSelf->_cp___05Fs11479) 
                             & (vlSelf->TestHarness__DOT__SimDTM__DOT__debug_req_bits_data_reg 
                                >> 2U))));
    bufp->chgBit(oldp+3213,(vlSelf->_mc___05Fs3497));
    bufp->chgBit(oldp+3214,(vlSelf->_cp___05Fs11671));
    bufp->chgBit(oldp+3215,(vlSelf->_cp___05Fs11702));
    bufp->chgBit(oldp+3216,(vlSelf->_cp___05Fs11597));
    bufp->chgBit(oldp+3217,(vlSelf->_cp___05Fs11706));
    bufp->chgBit(oldp+3218,(vlSelf->_cp___05Fs11332));
    bufp->chgBit(oldp+3219,(vlSelf->_cp___05Fs11330));
    bufp->chgBit(oldp+3220,(vlSelf->_cp___05Fs11759));
    bufp->chgBit(oldp+3221,(vlSelf->_cp___05Fs12021));
    bufp->chgBit(oldp+3222,(vlSelf->_cp___05Fs11872));
    bufp->chgBit(oldp+3223,(vlSelf->_cp___05Fs11885));
    bufp->chgIData(oldp+3224,(((IData)(vlSelf->_mc___05Fs3561)
                                ? 0U : (IData)((vlSelf->TestHarness__DOT__ldut__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                >> 1U)))),32);
    bufp->chgBit(oldp+3225,(vlSelf->_cp___05Fs11883));
    bufp->chgBit(oldp+3226,(vlSelf->_cp___05Fs12145));
    bufp->chgCData(oldp+3227,(((IData)(vlSelf->_mc___05Fs3589) 
                               << 1U)),2);
    bufp->chgBit(oldp+3228,(vlSelf->_mc___05Fs3589));
    bufp->chgBit(oldp+3229,(vlSelf->_mc___05Fs3564));
    bufp->chgBit(oldp+3230,(vlSelf->_cp___05Fs12032));
    bufp->chgBit(oldp+3231,(vlSelf->_cp___05Fs12294));
    bufp->chgBit(oldp+3232,(vlSelf->_mc___05Fs3561));
    bufp->chgBit(oldp+3233,(vlSelf->_cp___05Fs11949));
    bufp->chgBit(oldp+3234,(vlSelf->_cp___05Fs11962));
    bufp->chgBit(oldp+3235,(vlSelf->_cp___05Fs11877));
    bufp->chgBit(oldp+3236,(vlSelf->_cp___05Fs11980));
    bufp->chgBit(oldp+3237,(vlSelf->_cp___05Fs11875));
    bufp->chgBit(oldp+3238,(vlSelf->_cp___05Fs11988));
    bufp->chgBit(oldp+3239,(vlSelf->_mc___05Fs3583));
    bufp->chgBit(oldp+3240,(vlSelf->_cp___05Fs12222));
    bufp->chgBit(oldp+3241,(vlSelf->_cp___05Fs12299));
    bufp->chgBit(oldp+3242,(vlSelf->_mc___05Fs3584));
    bufp->chgBit(oldp+3243,(vlSelf->_cp___05Fs12235));
    bufp->chgBit(oldp+3244,(vlSelf->_cp___05Fs12253));
    bufp->chgBit(oldp+3245,(vlSelf->_cp___05Fs12148));
    bufp->chgBit(oldp+3246,(vlSelf->_cp___05Fs12257));
    bufp->chgBit(oldp+3247,(vlSelf->_cp___05Fs12283));
    bufp->chgBit(oldp+3248,(vlSelf->_mc___05Fs3498));
    bufp->chgBit(oldp+3249,(vlSelf->_mc___05Fs3499));
    bufp->chgBit(oldp+3250,(vlSelf->_mc___05Fs3504));
    bufp->chgBit(oldp+3251,(vlSelf->_mc___05Fs3502));
    bufp->chgBit(oldp+3252,(vlSelf->_mc___05Fs3503));
    bufp->chgBit(oldp+3253,(vlSelf->_mc___05Fs3508));
    bufp->chgBit(oldp+3254,(vlSelf->_mc___05Fs3509));
    bufp->chgBit(oldp+3255,(vlSelf->_cp___05Fs11396));
    bufp->chgBit(oldp+3256,(vlSelf->_cp___05Fs11409));
    bufp->chgBit(oldp+3257,(vlSelf->_cp___05Fs11427));
    bufp->chgBit(oldp+3258,(vlSelf->_cp___05Fs11322));
    bufp->chgBit(oldp+3259,(vlSelf->_cp___05Fs11431));
    bufp->chgBit(oldp+3260,(vlSelf->_cp___05Fs11457));
    bufp->chgBit(oldp+3261,(vlSelf->_rs___05Fs3847));
    bufp->chgBit(oldp+3262,(vlSelf->_rs___05Fs3856));
    bufp->chgBit(oldp+3263,(vlSelf->_rs___05Fs3859));
    bufp->chgBit(oldp+3264,(vlSelf->_rs___05Fs3850));
    bufp->chgBit(oldp+3265,((1U & ((~ (IData)(vlSelf->_mc___05Fs3705)) 
                                   | (IData)(vlSelf->TestHarness__DOT__ldut__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_b_ready)))));
    bufp->chgBit(oldp+3266,(vlSelf->_rs___05Fs4113));
    bufp->chgCData(oldp+3267,(vlSelf->_rs___05Fs4114),4);
    bufp->chgBit(oldp+3268,(vlSelf->_rs___05Fs4115));
    bufp->chgBit(oldp+3269,((1U & ((~ (IData)(vlSelf->TestHarness__DOT__mem__DOT__srams__DOT__r_full)) 
                                   | (~ (IData)(vlSelf->_mc___05Fs3695))))));
    bufp->chgBit(oldp+3270,(vlSelf->_rs___05Fs4118));
    bufp->chgCData(oldp+3271,(vlSelf->_rs___05Fs4119),4);
    bufp->chgBit(oldp+3272,(vlSelf->_rs___05Fs4120));
    bufp->chgBit(oldp+3273,((1U & (~ (IData)(vlSelf->_mc___05Fs3691)))));
    bufp->chgBit(oldp+3274,((1U & (~ (IData)(vlSelf->_mc___05Fs3692)))));
    bufp->chgBit(oldp+3275,(vlSelf->_mc___05Fs3705));
    bufp->chgBit(oldp+3276,((1U & (~ (IData)(vlSelf->_mc___05Fs3694)))));
    bufp->chgBit(oldp+3277,((1U & (~ (IData)(vlSelf->_mc___05Fs3693)))));
    bufp->chgBit(oldp+3278,((1U & (~ (IData)(vlSelf->_mc___05Fs3695)))));
    bufp->chgBit(oldp+3279,(vlSelf->_mc___05Fs3693));
    bufp->chgBit(oldp+3280,(vlSelf->_cp___05Fs13658));
    bufp->chgBit(oldp+3281,(vlSelf->_cp___05Fs13718));
    bufp->chgBit(oldp+3282,(vlSelf->_mc___05Fs3695));
    bufp->chgBit(oldp+3283,(vlSelf->_cp___05Fs13670));
    bufp->chgBit(oldp+3284,(vlSelf->_cp___05Fs13704));
    bufp->chgBit(oldp+3285,(vlSelf->_mc___05Fs3694));
    bufp->chgBit(oldp+3286,(vlSelf->_cp___05Fs13720));
    bufp->chgBit(oldp+3287,(vlSelf->_cp___05Fs13671));
    bufp->chgBit(oldp+3288,(vlSelf->_mc___05Fs3691));
    bufp->chgBit(oldp+3289,(vlSelf->_cp___05Fs13711));
    bufp->chgBit(oldp+3290,(vlSelf->_cp___05Fs13659));
    bufp->chgBit(oldp+3291,(vlSelf->_mc___05Fs3692));
    bufp->chgBit(oldp+3292,(vlSelf->_cp___05Fs13714));
    bufp->chgBit(oldp+3293,(vlSelf->_cp___05Fs13715));
    bufp->chgBit(oldp+3294,(vlSelf->_mc___05Fs3704));
    bufp->chgBit(oldp+3295,(vlSelf->_mc___05Fs3703));
    bufp->chgBit(oldp+3296,(vlSelf->_cp___05Fs13745));
    bufp->chgBit(oldp+3297,(vlSelf->_cp___05Fs13748));
    bufp->chgBit(oldp+3298,(vlSelf->_cp___05Fs13731));
    bufp->chgBit(oldp+3299,(vlSelf->_cp___05Fs13726));
    bufp->chgBit(oldp+3300,(vlSelf->_cp___05Fs13727));
    bufp->chgBit(oldp+3301,(vlSelf->_cp___05Fs13737));
    bufp->chgBit(oldp+3302,(vlSelf->_cp___05Fs13732));
    bufp->chgBit(oldp+3303,(vlSelf->_cp___05Fs13733));
    bufp->chgBit(oldp+3304,(vlSelf->_cp___05Fs13743));
    bufp->chgBit(oldp+3305,(vlSelf->_cp___05Fs13738));
    bufp->chgBit(oldp+3306,(vlSelf->_cp___05Fs13739));
    bufp->chgBit(oldp+3307,(vlSelf->_cp___05Fs13661));
    bufp->chgBit(oldp+3308,((1U & ((~ (IData)(vlSelf->_mc___05Fs3729)) 
                                   | (~ (IData)(vlSelf->_mc___05Fs188))))));
    bufp->chgBit(oldp+3309,(vlSelf->_rs___05Fs4186));
    bufp->chgCData(oldp+3310,(vlSelf->_rs___05Fs4187),4);
    bufp->chgBit(oldp+3311,(vlSelf->_rs___05Fs4188));
    bufp->chgBit(oldp+3312,((1U & ((~ (IData)(vlSelf->TestHarness__DOT__mmio_mem__DOT__srams__DOT__r_full)) 
                                   | (~ (IData)(vlSelf->_mc___05Fs3719))))));
    bufp->chgBit(oldp+3313,(vlSelf->_rs___05Fs4191));
    bufp->chgCData(oldp+3314,(vlSelf->_rs___05Fs4192),4);
    bufp->chgBit(oldp+3315,(vlSelf->_rs___05Fs4193));
    bufp->chgBit(oldp+3316,((1U & (~ (IData)(vlSelf->_mc___05Fs3715)))));
    bufp->chgBit(oldp+3317,((1U & (~ (IData)(vlSelf->_mc___05Fs3716)))));
    bufp->chgBit(oldp+3318,(vlSelf->_mc___05Fs3729));
    bufp->chgBit(oldp+3319,((1U & (~ (IData)(vlSelf->_mc___05Fs3718)))));
    bufp->chgBit(oldp+3320,((1U & (~ (IData)(vlSelf->_mc___05Fs3717)))));
    bufp->chgBit(oldp+3321,((1U & (~ (IData)(vlSelf->_mc___05Fs3719)))));
    bufp->chgBit(oldp+3322,(vlSelf->_mc___05Fs3717));
    bufp->chgBit(oldp+3323,(vlSelf->_cp___05Fs13772));
    bufp->chgBit(oldp+3324,(vlSelf->_cp___05Fs13832));
    bufp->chgBit(oldp+3325,(vlSelf->_mc___05Fs3719));
    bufp->chgBit(oldp+3326,(vlSelf->_cp___05Fs13784));
    bufp->chgBit(oldp+3327,(vlSelf->_cp___05Fs13838));
    bufp->chgBit(oldp+3328,(vlSelf->_mc___05Fs3718));
    bufp->chgBit(oldp+3329,(vlSelf->_cp___05Fs13834));
    bufp->chgBit(oldp+3330,(vlSelf->_cp___05Fs13785));
    bufp->chgBit(oldp+3331,(vlSelf->_mc___05Fs3715));
    bufp->chgBit(oldp+3332,(vlSelf->_cp___05Fs13825));
    bufp->chgBit(oldp+3333,(vlSelf->_cp___05Fs13773));
    bufp->chgBit(oldp+3334,(vlSelf->_mc___05Fs3716));
    bufp->chgBit(oldp+3335,(vlSelf->_cp___05Fs13828));
    bufp->chgBit(oldp+3336,(vlSelf->_cp___05Fs13829));
    bufp->chgBit(oldp+3337,(vlSelf->_mc___05Fs3728));
    bufp->chgBit(oldp+3338,(vlSelf->_mc___05Fs3727));
    bufp->chgBit(oldp+3339,(vlSelf->_cp___05Fs13859));
    bufp->chgBit(oldp+3340,(vlSelf->_cp___05Fs13862));
    bufp->chgBit(oldp+3341,(vlSelf->_cp___05Fs13845));
    bufp->chgBit(oldp+3342,(vlSelf->_cp___05Fs13840));
    bufp->chgBit(oldp+3343,(vlSelf->_cp___05Fs13841));
    bufp->chgBit(oldp+3344,(vlSelf->_cp___05Fs13851));
    bufp->chgBit(oldp+3345,(vlSelf->_cp___05Fs13846));
    bufp->chgBit(oldp+3346,(vlSelf->_cp___05Fs13847));
    bufp->chgBit(oldp+3347,(vlSelf->_cp___05Fs13857));
    bufp->chgBit(oldp+3348,(vlSelf->_cp___05Fs13852));
    bufp->chgBit(oldp+3349,(vlSelf->_cp___05Fs13853));
    bufp->chgBit(oldp+3350,(vlSelf->_cp___05Fs13775));
}

void VTestHarness___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root__trace_cleanup\n"); );
    // Init
    VTestHarness___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestHarness___024root*>(voidSelf);
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
}
