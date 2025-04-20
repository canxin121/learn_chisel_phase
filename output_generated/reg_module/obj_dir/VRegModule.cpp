// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRegModule__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VRegModule::VRegModule(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VRegModule__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_sel{vlSymsp->TOP.io_sel}
    , io_out{vlSymsp->TOP.io_out}
    , _cond_pred_RegModule___05FI___05Flocal___05FI___05F_T{vlSymsp->TOP._cond_pred_RegModule___05FI___05Flocal___05FI___05F_T}
    , _reg_signals_RegModule___05FI___05Flocal___05FI___05FregA{vlSymsp->TOP._reg_signals_RegModule___05FI___05Flocal___05FI___05FregA}
    , _reg_signals_RegModule___05FI___05Flocal___05FI___05FregB{vlSymsp->TOP._reg_signals_RegModule___05FI___05Flocal___05FI___05FregB}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VRegModule::VRegModule(const char* _vcname__)
    : VRegModule(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VRegModule::~VRegModule() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VRegModule___024root___eval_debug_assertions(VRegModule___024root* vlSelf);
#endif  // VL_DEBUG
void VRegModule___024root___eval_static(VRegModule___024root* vlSelf);
void VRegModule___024root___eval_initial(VRegModule___024root* vlSelf);
void VRegModule___024root___eval_settle(VRegModule___024root* vlSelf);
void VRegModule___024root___eval(VRegModule___024root* vlSelf);

void VRegModule::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRegModule::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRegModule___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VRegModule___024root___eval_static(&(vlSymsp->TOP));
        VRegModule___024root___eval_initial(&(vlSymsp->TOP));
        VRegModule___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VRegModule___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VRegModule::eventsPending() { return false; }

uint64_t VRegModule::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VRegModule::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VRegModule___024root___eval_final(VRegModule___024root* vlSelf);

VL_ATTR_COLD void VRegModule::final() {
    VRegModule___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRegModule::hierName() const { return vlSymsp->name(); }
const char* VRegModule::modelName() const { return "VRegModule"; }
unsigned VRegModule::threads() const { return 1; }
void VRegModule::prepareClone() const { contextp()->prepareClone(); }
void VRegModule::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VRegModule::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VRegModule___024root__trace_decl_types(VerilatedVcd* tracep);

void VRegModule___024root__trace_init_top(VRegModule___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRegModule___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRegModule___024root*>(voidSelf);
    VRegModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VRegModule___024root__trace_decl_types(tracep);
    VRegModule___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VRegModule___024root__trace_register(VRegModule___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRegModule::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VRegModule::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VRegModule___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
