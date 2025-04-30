// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VComplexExample.h for the primary calling header

#ifndef VERILATED_VCOMPLEXEXAMPLE___024ROOT_H_
#define VERILATED_VCOMPLEXEXAMPLE___024ROOT_H_  // guard

#include "verilated.h"


class VComplexExample__Syms;

class alignas(VL_CACHE_LINE_BYTES) VComplexExample___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_topInA,7,0);
    VL_IN8(io_topInB,7,0);
    VL_IN8(io_topSel,1,0);
    VL_OUT8(io_topOut,7,0);
    VL_OUT8(_mux_cond_ComplexExample___05FM___05FComplexExample___05FS___05F_anotherSub_io_in_T,0,0);
    VL_OUT8(_mux_cond_ComplexExample___05FM___05FComplexExample___05FS___05F_sub_io_a_T,0,0);
    VL_OUT8(_cond_pred_ComplexExample___05FI___05FanotherSub___05FM___05FAnotherSubModule___05FS___05F_T,0,0);
    VL_OUT8(_cond_pred_ComplexExample___05FI___05Fsub___05FM___05FSubModule___05FS___05F_T,0,0);
    VL_OUT8(_cond_pred_ComplexExample___05FI___05Fsub___05FM___05FSubModule___05FS___05F_T_1,0,0);
    VL_OUT8(_cond_pred_ComplexExample___05FI___05Fsub___05FM___05FSubModule___05FS___05F_T_2,0,0);
    VL_OUT8(_cond_pred_ComplexExample___05FM___05FComplexExample___05FS___05F_T,0,0);
    VL_OUT8(_cond_pred_ComplexExample___05FM___05FComplexExample___05FS___05F_T_1,0,0);
    VL_OUT8(_cond_pred_ComplexExample___05FM___05FComplexExample___05FS___05F_T_2,0,0);
    VL_OUT8(_cond_pred_ComplexExample___05FM___05FComplexExample___05FS___05F_T_3,0,0);
    VL_OUT8(_reg_signals_ComplexExample___05FI___05FanotherSub___05FM___05FAnotherSubModule___05FS___05FdelayedIn,7,0);
    VL_OUT8(_reg_signals_ComplexExample___05FI___05Fsub___05FM___05FSubModule___05FS___05FstateReg,7,0);
    CData/*7:0*/ ComplexExample__DOT___sub_io_out;
    CData/*7:0*/ ComplexExample__DOT____Vcellinp__sub__io_b;
    CData/*7:0*/ ComplexExample__DOT____Vcellinp__sub__io_a;
    CData/*7:0*/ ComplexExample__DOT____Vcellinp__anotherSub__io_in;
    CData/*7:0*/ ComplexExample__DOT__sub__DOT__stateReg;
    IData/*31:0*/ ComplexExample__DOT__sub__DOT__unnamedblk1__DOT___GEN_0;
    CData/*7:0*/ ComplexExample__DOT__anotherSub__DOT__delayedIn;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VComplexExample__Syms* const vlSymsp;

    // CONSTRUCTORS
    VComplexExample___024root(VComplexExample__Syms* symsp, const char* v__name);
    ~VComplexExample___024root();
    VL_UNCOPYABLE(VComplexExample___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
