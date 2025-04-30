// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRocketALU.h for the primary calling header

#ifndef VERILATED_VROCKETALU___024ROOT_H_
#define VERILATED_VROCKETALU___024ROOT_H_  // guard

#include "verilated.h"


class VRocketALU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRocketALU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(io_dw,0,0);
        VL_IN8(io_fn,4,0);
        VL_OUT8(io_cmp_out,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_bext_mask_T_1,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_in2_inv_T,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_io_cmp_out_T_2,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_io_out_T_1,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_logic_T_14,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_logic_T_6,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_1,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_10,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_13,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_16,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_19,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_22,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_4,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_7,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_out_T,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_out_T_2,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_1,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_10,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_11,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_12,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_13,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_14,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_15,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_16,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_17,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_18,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_19,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_20,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_21,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_22,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_23,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_24,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_25,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_26,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_27,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_28,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_29,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_30,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_31,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_32,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_33,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_34,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_35,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_36,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_37,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_38,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_39,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_40,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_41,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_42,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_43,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_44,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_45,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_46,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_47,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_48,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_49,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_5,0,0);
    };
    struct {
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_50,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_51,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_52,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_53,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_54,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_55,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_56,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_57,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_58,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_59,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_6,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_60,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_61,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_62,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_63,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_64,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_65,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_66,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_67,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_68,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_69,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_7,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_8,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_9,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rot_shamt_T,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rotin_T,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rotout_T,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rotout_T_2,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shin_T_7,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shin_hi_32_T_3,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shin_hi_T,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shout_T_4,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shout_T_6,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_slt_T_2,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_slt_T_4,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_tz_in_T_116,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_tz_in_T_118,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_tz_in_T_120,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_12,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_14,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_16,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_18,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_20,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_3,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_8,0,0);
        VL_OUT8(_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05Fio___05Fs___05Fcmp_out,0,0);
        VL_OUT8(_cond_pred_RocketALU___05FM___05FRocketALU___05FS___05F_T_1,0,0);
        CData/*0:0*/ RocketALU__DOT__slt;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ RocketALU__DOT__shin_hi;
        IData/*31:0*/ __VactIterCount;
        VL_IN64(io_in2,63,0);
        VL_IN64(io_in1,63,0);
        VL_OUT64(io_out,63,0);
        VL_OUT64(io_adder_out,63,0);
        QData/*63:0*/ RocketALU__DOT__in2_inv;
        QData/*63:0*/ RocketALU__DOT__in1_xor_in2;
        QData/*63:0*/ RocketALU__DOT__shin;
        QData/*63:0*/ RocketALU__DOT__out;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VRocketALU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRocketALU___024root(VRocketALU__Syms* symsp, const char* v__name);
    ~VRocketALU___024root();
    VL_UNCOPYABLE(VRocketALU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
