// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VUART_rx__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VUART_rx::VUART_rx(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VUART_rx__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_i_serial_data{vlSymsp->TOP.io_i_serial_data}
    , io_o_rx_done{vlSymsp->TOP.io_o_rx_done}
    , io_o_data{vlSymsp->TOP.io_o_data}
    , _cp___05Fs0{vlSymsp->TOP._cp___05Fs0}
    , _cp___05Fs1{vlSymsp->TOP._cp___05Fs1}
    , _cp___05Fs10{vlSymsp->TOP._cp___05Fs10}
    , _cp___05Fs2{vlSymsp->TOP._cp___05Fs2}
    , _cp___05Fs3{vlSymsp->TOP._cp___05Fs3}
    , _cp___05Fs4{vlSymsp->TOP._cp___05Fs4}
    , _cp___05Fs5{vlSymsp->TOP._cp___05Fs5}
    , _cp___05Fs6{vlSymsp->TOP._cp___05Fs6}
    , _cp___05Fs7{vlSymsp->TOP._cp___05Fs7}
    , _cp___05Fs8{vlSymsp->TOP._cp___05Fs8}
    , _cp___05Fs9{vlSymsp->TOP._cp___05Fs9}
    , _rs___05Fs1{vlSymsp->TOP._rs___05Fs1}
    , _rs___05Fs10{vlSymsp->TOP._rs___05Fs10}
    , _rs___05Fs11{vlSymsp->TOP._rs___05Fs11}
    , _rs___05Fs12{vlSymsp->TOP._rs___05Fs12}
    , _rs___05Fs13{vlSymsp->TOP._rs___05Fs13}
    , _rs___05Fs2{vlSymsp->TOP._rs___05Fs2}
    , _rs___05Fs3{vlSymsp->TOP._rs___05Fs3}
    , _rs___05Fs4{vlSymsp->TOP._rs___05Fs4}
    , _rs___05Fs5{vlSymsp->TOP._rs___05Fs5}
    , _rs___05Fs6{vlSymsp->TOP._rs___05Fs6}
    , _rs___05Fs7{vlSymsp->TOP._rs___05Fs7}
    , _rs___05Fs8{vlSymsp->TOP._rs___05Fs8}
    , _rs___05Fs9{vlSymsp->TOP._rs___05Fs9}
    , _rs___05Fs0{vlSymsp->TOP._rs___05Fs0}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VUART_rx::VUART_rx(const char* _vcname__)
    : VUART_rx(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VUART_rx::~VUART_rx() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VUART_rx___024root___eval_debug_assertions(VUART_rx___024root* vlSelf);
#endif  // VL_DEBUG
void VUART_rx___024root___eval_static(VUART_rx___024root* vlSelf);
void VUART_rx___024root___eval_initial(VUART_rx___024root* vlSelf);
void VUART_rx___024root___eval_settle(VUART_rx___024root* vlSelf);
void VUART_rx___024root___eval(VUART_rx___024root* vlSelf);

void VUART_rx::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VUART_rx::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VUART_rx___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VUART_rx___024root___eval_static(&(vlSymsp->TOP));
        VUART_rx___024root___eval_initial(&(vlSymsp->TOP));
        VUART_rx___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VUART_rx___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VUART_rx::eventsPending() { return false; }

uint64_t VUART_rx::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VUART_rx::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VUART_rx___024root___eval_final(VUART_rx___024root* vlSelf);

VL_ATTR_COLD void VUART_rx::final() {
    VUART_rx___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VUART_rx::hierName() const { return vlSymsp->name(); }
const char* VUART_rx::modelName() const { return "VUART_rx"; }
unsigned VUART_rx::threads() const { return 1; }
void VUART_rx::prepareClone() const { contextp()->prepareClone(); }
void VUART_rx::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VUART_rx::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VUART_rx___024root__trace_decl_types(VerilatedVcd* tracep);

void VUART_rx___024root__trace_init_top(VUART_rx___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VUART_rx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VUART_rx___024root*>(voidSelf);
    VUART_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VUART_rx___024root__trace_decl_types(tracep);
    VUART_rx___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VUART_rx___024root__trace_register(VUART_rx___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VUART_rx::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VUART_rx::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VUART_rx___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
