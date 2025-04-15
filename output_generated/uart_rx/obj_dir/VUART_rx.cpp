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
    , _cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T{vlSymsp->TOP._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T}
    , _cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_1{vlSymsp->TOP._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_1}
    , _cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_10{vlSymsp->TOP._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_10}
    , _cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_11{vlSymsp->TOP._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_11}
    , _cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_2{vlSymsp->TOP._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_2}
    , _cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_3{vlSymsp->TOP._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_3}
    , _cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_4{vlSymsp->TOP._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_4}
    , _cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_5{vlSymsp->TOP._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_5}
    , _cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_6{vlSymsp->TOP._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_6}
    , _cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_8{vlSymsp->TOP._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_8}
    , _cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_9{vlSymsp->TOP._cond_pred_UART_rx___05FI___05Flocal___05FI___05F_T_9}
    , _reg_signals_UART_rx___05FI___05Flocal___05FI___05FbitCnterReg{vlSymsp->TOP._reg_signals_UART_rx___05FI___05Flocal___05FI___05FbitCnterReg}
    , _reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_0{vlSymsp->TOP._reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_0}
    , _reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_1{vlSymsp->TOP._reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_1}
    , _reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_2{vlSymsp->TOP._reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_2}
    , _reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_3{vlSymsp->TOP._reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_3}
    , _reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_4{vlSymsp->TOP._reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_4}
    , _reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_5{vlSymsp->TOP._reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_5}
    , _reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_6{vlSymsp->TOP._reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_6}
    , _reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_7{vlSymsp->TOP._reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutDataReg_7}
    , _reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutRxDoneReg{vlSymsp->TOP._reg_signals_UART_rx___05FI___05Flocal___05FI___05FoutRxDoneReg}
    , _reg_signals_UART_rx___05FI___05Flocal___05FI___05FserialDataReg{vlSymsp->TOP._reg_signals_UART_rx___05FI___05Flocal___05FI___05FserialDataReg}
    , _reg_signals_UART_rx___05FI___05Flocal___05FI___05FserialDataReg_REG{vlSymsp->TOP._reg_signals_UART_rx___05FI___05Flocal___05FI___05FserialDataReg_REG}
    , _reg_signals_UART_rx___05FI___05Flocal___05FI___05FstateReg{vlSymsp->TOP._reg_signals_UART_rx___05FI___05Flocal___05FI___05FstateReg}
    , _reg_signals_UART_rx___05FI___05Flocal___05FI___05FclkCnterReg{vlSymsp->TOP._reg_signals_UART_rx___05FI___05Flocal___05FI___05FclkCnterReg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
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
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
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

VL_ATTR_COLD void VUART_rx::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VUART_rx::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VUART_rx___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
