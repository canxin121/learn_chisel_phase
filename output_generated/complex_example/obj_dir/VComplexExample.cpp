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
    , _mc___05Fs0{vlSymsp->TOP._mc___05Fs0}
    , _mc___05Fs1{vlSymsp->TOP._mc___05Fs1}
    , _cp___05Fs0{vlSymsp->TOP._cp___05Fs0}
    , _cp___05Fs1{vlSymsp->TOP._cp___05Fs1}
    , _cp___05Fs2{vlSymsp->TOP._cp___05Fs2}
    , _cp___05Fs3{vlSymsp->TOP._cp___05Fs3}
    , _cp___05Fs4{vlSymsp->TOP._cp___05Fs4}
    , _cp___05Fs5{vlSymsp->TOP._cp___05Fs5}
    , _cp___05Fs6{vlSymsp->TOP._cp___05Fs6}
    , _cp___05Fs7{vlSymsp->TOP._cp___05Fs7}
    , _rs___05Fs0{vlSymsp->TOP._rs___05Fs0}
    , _rs___05Fs1{vlSymsp->TOP._rs___05Fs1}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
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
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
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

VL_ATTR_COLD void VComplexExample::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VComplexExample::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VComplexExample___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
