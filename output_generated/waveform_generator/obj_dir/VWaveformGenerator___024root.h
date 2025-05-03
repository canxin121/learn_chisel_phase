// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VWaveformGenerator.h for the primary calling header

#ifndef VERILATED_VWAVEFORMGENERATOR___024ROOT_H_
#define VERILATED_VWAVEFORMGENERATOR___024ROOT_H_  // guard

#include "verilated.h"


class VWaveformGenerator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VWaveformGenerator___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_waveType,1,0);
    VL_OUT8(io_output,7,0);
    VL_OUT8(_mux_cond___05Fs0,0,0);
    VL_OUT8(_cond_pred___05Fs0,0,0);
    VL_OUT8(_cond_pred___05Fs1,0,0);
    VL_OUT8(_cond_pred___05Fs2,0,0);
    VL_OUT8(_cond_pred___05Fs3,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(io_freqCtrl,15,0);
    VL_IN16(io_phaseOffset,15,0);
    VL_OUT16(_reg_signals___05Fs0,15,0);
    SData/*15:0*/ WaveformGenerator__DOT__phaseAcc;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VWaveformGenerator__Syms* const vlSymsp;

    // CONSTRUCTORS
    VWaveformGenerator___024root(VWaveformGenerator__Syms* symsp, const char* v__name);
    ~VWaveformGenerator___024root();
    VL_UNCOPYABLE(VWaveformGenerator___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
