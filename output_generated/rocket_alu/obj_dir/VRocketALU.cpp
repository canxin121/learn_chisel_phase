// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRocketALU__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VRocketALU::VRocketALU(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VRocketALU__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_dw{vlSymsp->TOP.io_dw}
    , io_fn{vlSymsp->TOP.io_fn}
    , io_cmp_out{vlSymsp->TOP.io_cmp_out}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_bext_mask_T_1{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_bext_mask_T_1}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_in2_inv_T{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_in2_inv_T}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_io_cmp_out_T_2{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_io_cmp_out_T_2}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_io_out_T_1{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_io_out_T_1}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_logic_T_14{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_logic_T_14}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_logic_T_6{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_logic_T_6}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_1{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_1}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_10{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_10}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_13{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_13}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_16{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_16}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_19{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_19}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_22{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_22}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_4{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_4}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_7{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_7}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_out_T{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_out_T}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_out_T_2{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_out_T_2}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_1{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_1}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_10{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_10}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_11{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_11}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_12{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_12}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_13{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_13}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_14{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_14}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_15{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_15}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_16{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_16}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_17{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_17}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_18{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_18}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_19{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_19}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_20{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_20}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_21{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_21}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_22{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_22}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_23{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_23}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_24{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_24}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_25{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_25}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_26{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_26}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_27{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_27}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_28{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_28}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_29{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_29}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_30{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_30}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_31{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_31}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_32{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_32}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_33{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_33}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_34{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_34}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_35{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_35}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_36{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_36}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_37{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_37}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_38{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_38}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_39{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_39}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_40{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_40}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_41{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_41}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_42{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_42}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_43{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_43}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_44{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_44}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_45{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_45}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_46{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_46}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_47{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_47}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_48{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_48}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_49{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_49}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_5{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_5}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_50{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_50}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_51{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_51}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_52{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_52}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_53{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_53}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_54{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_54}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_55{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_55}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_56{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_56}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_57{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_57}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_58{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_58}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_59{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_59}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_6{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_6}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_60{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_60}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_61{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_61}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_62{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_62}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_63{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_63}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_64{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_64}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_65{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_65}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_66{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_66}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_67{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_67}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_68{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_68}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_69{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_69}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_7{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_7}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_8{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_8}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_9{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_9}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rot_shamt_T{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rot_shamt_T}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rotin_T{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rotin_T}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rotout_T{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rotout_T}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rotout_T_2{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rotout_T_2}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shin_T_7{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shin_T_7}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shin_hi_32_T_3{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shin_hi_32_T_3}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shin_hi_T{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shin_hi_T}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shout_T_4{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shout_T_4}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shout_T_6{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shout_T_6}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_slt_T_2{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_slt_T_2}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_slt_T_4{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_slt_T_4}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_tz_in_T_116{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_tz_in_T_116}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_tz_in_T_118{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_tz_in_T_118}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_tz_in_T_120{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_tz_in_T_120}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_12{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_12}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_14{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_14}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_16{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_16}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_18{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_18}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_20{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_20}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_3{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_3}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_8{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_8}
    , _mux_cond_RocketALU___05FM___05FRocketALU___05FS___05Fio___05Fs___05Fcmp_out{vlSymsp->TOP._mux_cond_RocketALU___05FM___05FRocketALU___05FS___05Fio___05Fs___05Fcmp_out}
    , _cond_pred_RocketALU___05FM___05FRocketALU___05FS___05F_T_1{vlSymsp->TOP._cond_pred_RocketALU___05FM___05FRocketALU___05FS___05F_T_1}
    , io_in2{vlSymsp->TOP.io_in2}
    , io_in1{vlSymsp->TOP.io_in1}
    , io_out{vlSymsp->TOP.io_out}
    , io_adder_out{vlSymsp->TOP.io_adder_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VRocketALU::VRocketALU(const char* _vcname__)
    : VRocketALU(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VRocketALU::~VRocketALU() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VRocketALU___024root___eval_debug_assertions(VRocketALU___024root* vlSelf);
#endif  // VL_DEBUG
void VRocketALU___024root___eval_static(VRocketALU___024root* vlSelf);
void VRocketALU___024root___eval_initial(VRocketALU___024root* vlSelf);
void VRocketALU___024root___eval_settle(VRocketALU___024root* vlSelf);
void VRocketALU___024root___eval(VRocketALU___024root* vlSelf);

void VRocketALU::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRocketALU::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRocketALU___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VRocketALU___024root___eval_static(&(vlSymsp->TOP));
        VRocketALU___024root___eval_initial(&(vlSymsp->TOP));
        VRocketALU___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VRocketALU___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VRocketALU::eventsPending() { return false; }

uint64_t VRocketALU::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VRocketALU::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VRocketALU___024root___eval_final(VRocketALU___024root* vlSelf);

VL_ATTR_COLD void VRocketALU::final() {
    VRocketALU___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRocketALU::hierName() const { return vlSymsp->name(); }
const char* VRocketALU::modelName() const { return "VRocketALU"; }
unsigned VRocketALU::threads() const { return 1; }
void VRocketALU::prepareClone() const { contextp()->prepareClone(); }
void VRocketALU::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VRocketALU::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VRocketALU___024root__trace_decl_types(VerilatedVcd* tracep);

void VRocketALU___024root__trace_init_top(VRocketALU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRocketALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRocketALU___024root*>(voidSelf);
    VRocketALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VRocketALU___024root__trace_decl_types(tracep);
    VRocketALU___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VRocketALU___024root__trace_register(VRocketALU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRocketALU::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VRocketALU::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VRocketALU___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
