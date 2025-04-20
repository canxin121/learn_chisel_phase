// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRegModule.h for the primary calling header

#ifndef VERILATED_VREGMODULE___024ROOT_H_
#define VERILATED_VREGMODULE___024ROOT_H_  // guard

#include "verilated.h"


class VRegModule__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRegModule___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_sel,0,0);
    VL_OUT8(io_out,7,0);
    VL_OUT8(_cond_pred_RegModule___05FI___05Flocal___05FI___05F_T,0,0);
    VL_OUT8(_reg_signals_RegModule___05FI___05Flocal___05FI___05FregA,7,0);
    VL_OUT8(_reg_signals_RegModule___05FI___05Flocal___05FI___05FregB,7,0);
    CData/*7:0*/ RegModule__DOT__regA;
    CData/*7:0*/ RegModule__DOT__regB;
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
    VRegModule__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRegModule___024root(VRegModule__Syms* symsp, const char* v__name);
    ~VRegModule___024root();
    VL_UNCOPYABLE(VRegModule___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
