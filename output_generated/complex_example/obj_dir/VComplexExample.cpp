// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VComplexExample__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VComplexExample::VComplexExample(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VComplexExample__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_topInA{vlSymsp->TOP.io_topInA}
    , io_topInB{vlSymsp->TOP.io_topInB}
    , io_topSel{vlSymsp->TOP.io_topSel}
    , io_topOut{vlSymsp->TOP.io_topOut}
    , _mux_cond_ComplexExample___05FM___05FComplexExample___05FS___05F_anotherSub_io_in_T{vlSymsp->TOP._mux_cond_ComplexExample___05FM___05FComplexExample___05FS___05F_anotherSub_io_in_T}
    , _mux_cond_ComplexExample___05FM___05FComplexExample___05FS___05F_sub_io_a_T{vlSymsp->TOP._mux_cond_ComplexExample___05FM___05FComplexExample___05FS___05F_sub_io_a_T}
    , _cond_pred_ComplexExample___05FI___05FanotherSub___05FM___05FAnotherSubModule___05FS___05F_T{vlSymsp->TOP._cond_pred_ComplexExample___05FI___05FanotherSub___05FM___05FAnotherSubModule___05FS___05F_T}
    , _cond_pred_ComplexExample___05FI___05Fsub___05FM___05FSubModule___05FS___05F_T{vlSymsp->TOP._cond_pred_ComplexExample___05FI___05Fsub___05FM___05FSubModule___05FS___05F_T}
    , _cond_pred_ComplexExample___05FI___05Fsub___05FM___05FSubModule___05FS___05F_T_1{vlSymsp->TOP._cond_pred_ComplexExample___05FI___05Fsub___05FM___05FSubModule___05FS___05F_T_1}
    , _cond_pred_ComplexExample___05FI___05Fsub___05FM___05FSubModule___05FS___05F_T_2{vlSymsp->TOP._cond_pred_ComplexExample___05FI___05Fsub___05FM___05FSubModule___05FS___05F_T_2}
    , _cond_pred_ComplexExample___05FM___05FComplexExample___05FS___05F_T{vlSymsp->TOP._cond_pred_ComplexExample___05FM___05FComplexExample___05FS___05F_T}
    , _cond_pred_ComplexExample___05FM___05FComplexExample___05FS___05F_T_1{vlSymsp->TOP._cond_pred_ComplexExample___05FM___05FComplexExample___05FS___05F_T_1}
    , _cond_pred_ComplexExample___05FM___05FComplexExample___05FS___05F_T_2{vlSymsp->TOP._cond_pred_ComplexExample___05FM___05FComplexExample___05FS___05F_T_2}
    , _cond_pred_ComplexExample___05FM___05FComplexExample___05FS___05F_T_3{vlSymsp->TOP._cond_pred_ComplexExample___05FM___05FComplexExample___05FS___05F_T_3}
    , _reg_signals_ComplexExample___05FI___05FanotherSub___05FM___05FAnotherSubModule___05FS___05FdelayedIn{vlSymsp->TOP._reg_signals_ComplexExample___05FI___05FanotherSub___05FM___05FAnotherSubModule___05FS___05FdelayedIn}
    , _reg_signals_ComplexExample___05FI___05Fsub___05FM___05FSubModule___05FS___05FstateReg{vlSymsp->TOP._reg_signals_ComplexExample___05FI___05Fsub___05FM___05FSubModule___05FS___05FstateReg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VComplexExample::VComplexExample(const char* _vcname__)
    : VComplexExample(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VComplexExample::~VComplexExample() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VComplexExample___024root___eval_debug_assertions(VComplexExample___024root* vlSelf);
#endif  // VL_DEBUG
void VComplexExample___024root___eval_static(VComplexExample___024root* vlSelf);
void VComplexExample___024root___eval_initial(VComplexExample___024root* vlSelf);
void VComplexExample___024root___eval_settle(VComplexExample___024root* vlSelf);
void VComplexExample___024root___eval(VComplexExample___024root* vlSelf);

void VComplexExample::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VComplexExample::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VComplexExample___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VComplexExample___024root___eval_static(&(vlSymsp->TOP));
        VComplexExample___024root___eval_initial(&(vlSymsp->TOP));
        VComplexExample___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VComplexExample___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VComplexExample::eventsPending() { return false; }

uint64_t VComplexExample::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VComplexExample::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VComplexExample___024root___eval_final(VComplexExample___024root* vlSelf);

VL_ATTR_COLD void VComplexExample::final() {
    VComplexExample___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VComplexExample::hierName() const { return vlSymsp->name(); }
const char* VComplexExample::modelName() const { return "VComplexExample"; }
unsigned VComplexExample::threads() const { return 1; }
void VComplexExample::prepareClone() const { contextp()->prepareClone(); }
void VComplexExample::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VComplexExample::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VComplexExample___024root__trace_decl_types(VerilatedVcd* tracep);

void VComplexExample___024root__trace_init_top(VComplexExample___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VComplexExample___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VComplexExample___024root*>(voidSelf);
    VComplexExample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VComplexExample___024root__trace_decl_types(tracep);
    VComplexExample___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VComplexExample___024root__trace_register(VComplexExample___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VComplexExample::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VComplexExample::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VComplexExample___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
