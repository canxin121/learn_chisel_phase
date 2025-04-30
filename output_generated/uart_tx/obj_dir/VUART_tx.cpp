// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VUART_tx__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VUART_tx::VUART_tx(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VUART_tx__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_i_tx_trig{vlSymsp->TOP.io_i_tx_trig}
    , io_i_data{vlSymsp->TOP.io_i_data}
    , io_o_tx_busy{vlSymsp->TOP.io_o_tx_busy}
    , io_o_tx_done{vlSymsp->TOP.io_o_tx_done}
    , io_o_serial_data{vlSymsp->TOP.io_o_serial_data}
    , _cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T{vlSymsp->TOP._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T}
    , _cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_1{vlSymsp->TOP._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_1}
    , _cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_2{vlSymsp->TOP._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_2}
    , _cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_3{vlSymsp->TOP._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_3}
    , _cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_4{vlSymsp->TOP._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_4}
    , _cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_5{vlSymsp->TOP._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_5}
    , _cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_6{vlSymsp->TOP._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_6}
    , _cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_7{vlSymsp->TOP._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_7}
    , _cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_8{vlSymsp->TOP._cond_pred_UART_tx___05FI___05Flocal___05FI___05F_T_8}
    , _reg_signals_UART_tx___05FI___05Flocal___05FI___05FbitCnterReg{vlSymsp->TOP._reg_signals_UART_tx___05FI___05Flocal___05FI___05FbitCnterReg}
    , _reg_signals_UART_tx___05FI___05Flocal___05FI___05FclkCnterReg{vlSymsp->TOP._reg_signals_UART_tx___05FI___05Flocal___05FI___05FclkCnterReg}
    , _reg_signals_UART_tx___05FI___05Flocal___05FI___05FinDataReg{vlSymsp->TOP._reg_signals_UART_tx___05FI___05Flocal___05FI___05FinDataReg}
    , _reg_signals_UART_tx___05FI___05Flocal___05FI___05FoutDataReg{vlSymsp->TOP._reg_signals_UART_tx___05FI___05Flocal___05FI___05FoutDataReg}
    , _reg_signals_UART_tx___05FI___05Flocal___05FI___05FoutTxBusyReg{vlSymsp->TOP._reg_signals_UART_tx___05FI___05Flocal___05FI___05FoutTxBusyReg}
    , _reg_signals_UART_tx___05FI___05Flocal___05FI___05FoutTxDoneReg{vlSymsp->TOP._reg_signals_UART_tx___05FI___05Flocal___05FI___05FoutTxDoneReg}
    , _reg_signals_UART_tx___05FI___05Flocal___05FI___05FstateReg{vlSymsp->TOP._reg_signals_UART_tx___05FI___05Flocal___05FI___05FstateReg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VUART_tx::VUART_tx(const char* _vcname__)
    : VUART_tx(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VUART_tx::~VUART_tx() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VUART_tx___024root___eval_debug_assertions(VUART_tx___024root* vlSelf);
#endif  // VL_DEBUG
void VUART_tx___024root___eval_static(VUART_tx___024root* vlSelf);
void VUART_tx___024root___eval_initial(VUART_tx___024root* vlSelf);
void VUART_tx___024root___eval_settle(VUART_tx___024root* vlSelf);
void VUART_tx___024root___eval(VUART_tx___024root* vlSelf);

void VUART_tx::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VUART_tx::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VUART_tx___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VUART_tx___024root___eval_static(&(vlSymsp->TOP));
        VUART_tx___024root___eval_initial(&(vlSymsp->TOP));
        VUART_tx___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VUART_tx___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VUART_tx::eventsPending() { return false; }

uint64_t VUART_tx::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VUART_tx::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VUART_tx___024root___eval_final(VUART_tx___024root* vlSelf);

VL_ATTR_COLD void VUART_tx::final() {
    VUART_tx___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VUART_tx::hierName() const { return vlSymsp->name(); }
const char* VUART_tx::modelName() const { return "VUART_tx"; }
unsigned VUART_tx::threads() const { return 1; }
void VUART_tx::prepareClone() const { contextp()->prepareClone(); }
void VUART_tx::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VUART_tx::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VUART_tx___024root__trace_decl_types(VerilatedVcd* tracep);

void VUART_tx___024root__trace_init_top(VUART_tx___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VUART_tx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VUART_tx___024root*>(voidSelf);
    VUART_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VUART_tx___024root__trace_decl_types(tracep);
    VUART_tx___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VUART_tx___024root__trace_register(VUART_tx___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VUART_tx::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VUART_tx::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VUART_tx___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
