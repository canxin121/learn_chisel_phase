// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VROCKETALU_H_
#define VERILATED_VROCKETALU_H_  // guard

#include "verilated.h"

class VRocketALU__Syms;
class VRocketALU___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VRocketALU VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VRocketALU__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&io_dw,0,0);
    VL_IN8(&io_fn,4,0);
    VL_OUT8(&io_cmp_out,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_bext_mask_T_1,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_in2_inv_T,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_io_cmp_out_T_2,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_io_out_T_1,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_logic_T_14,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_logic_T_6,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_1,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_10,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_13,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_16,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_19,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_22,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_4,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_orcb_T_7,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_out_T,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_out_T_2,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_1,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_10,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_11,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_12,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_13,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_14,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_15,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_16,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_17,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_18,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_19,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_20,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_21,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_22,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_23,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_24,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_25,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_26,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_27,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_28,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_29,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_30,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_31,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_32,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_33,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_34,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_35,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_36,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_37,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_38,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_39,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_40,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_41,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_42,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_43,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_44,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_45,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_46,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_47,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_48,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_49,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_5,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_50,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_51,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_52,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_53,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_54,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_55,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_56,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_57,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_58,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_59,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_6,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_60,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_61,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_62,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_63,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_64,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_65,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_66,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_67,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_68,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_69,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_7,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_8,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_popc_in_T_9,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rot_shamt_T,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rotin_T,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rotout_T,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_rotout_T_2,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shin_T_7,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shin_hi_32_T_3,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shin_hi_T,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shout_T_4,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_shout_T_6,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_slt_T_2,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_slt_T_4,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_tz_in_T_116,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_tz_in_T_118,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_tz_in_T_120,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_12,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_14,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_16,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_18,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_20,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_3,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05F_unary_T_8,0,0);
    VL_OUT8(&_mux_cond_RocketALU___05FM___05FRocketALU___05FS___05Fio___05Fs___05Fcmp_out,0,0);
    VL_OUT8(&_cond_pred_RocketALU___05FM___05FRocketALU___05FS___05F_T_1,0,0);
    VL_IN64(&io_in2,63,0);
    VL_IN64(&io_in1,63,0);
    VL_OUT64(&io_out,63,0);
    VL_OUT64(&io_adder_out,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VRocketALU___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VRocketALU(VerilatedContext* contextp, const char* name = "TOP");
    explicit VRocketALU(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VRocketALU();
  private:
    VL_UNCOPYABLE(VRocketALU);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
