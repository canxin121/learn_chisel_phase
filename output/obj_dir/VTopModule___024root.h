// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTopModule.h for the primary calling header

#ifndef VERILATED_VTOPMODULE___024ROOT_H_
#define VERILATED_VTOPMODULE___024ROOT_H_  // guard

#include "verilated.h"


class VTopModule__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTopModule___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_sel1,0,0);
    VL_IN8(io_sel2,0,0);
    VL_IN8(io_sel3,0,0);
    VL_OUT8(_mux_cond_topInst___05FmidMod___05Flocal___05Fio_sel2,0,0);
    VL_OUT8(_mux_cond_topInst___05FmidMod___05FlowMod1___05Flocal___05Fio_sel,0,0);
    VL_OUT8(_mux_cond_topInst___05FmidMod___05Flocal___05Fio_sel1,0,0);
    VL_OUT8(_mux_cond_topInst___05Flocal___05Fio_sel1,0,0);
    VL_OUT8(_mux_cond_topInst___05Flocal___05Fio_sel2,0,0);
    VL_OUT8(_mux_cond_topInst___05Flocal___05Fio_sel3,0,0);
    VL_OUT8(_mux_cond_topInst___05FmidMod___05FlowMod2___05Flocal___05Fio_sel,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(io_inA,31,0);
    VL_IN(io_inB,31,0);
    VL_IN(io_inC,31,0);
    VL_IN(io_inD,31,0);
    VL_IN(io_inE,31,0);
    VL_IN(io_inF,31,0);
    VL_OUT(io_out,31,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTopModule__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTopModule___024root(VTopModule__Syms* symsp, const char* v__name);
    ~VTopModule___024root();
    VL_UNCOPYABLE(VTopModule___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
