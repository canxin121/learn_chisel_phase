// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VExampleRocketSystem__pch.h"
#include "VExampleRocketSystem.h"
#include "VExampleRocketSystem___024root.h"

// FUNCTIONS
VExampleRocketSystem__Syms::~VExampleRocketSystem__Syms()
{
}

VExampleRocketSystem__Syms::VExampleRocketSystem__Syms(VerilatedContext* contextp, const char* namep, VExampleRocketSystem* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_ExampleRocketSystem__bootrom_domain__bootrom__monitor.configure(this, name(), "ExampleRocketSystem.bootrom_domain.bootrom.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__bootrom_domain__bootrom__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.bootrom_domain.bootrom.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__cbus__atomics.configure(this, name(), "ExampleRocketSystem.cbus.atomics", "atomics", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__cbus__atomics__monitor.configure(this, name(), "ExampleRocketSystem.cbus.atomics.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__cbus__atomics__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.cbus.atomics.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__cbus__buffer__monitor.configure(this, name(), "ExampleRocketSystem.cbus.buffer.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__cbus__buffer__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.cbus.buffer.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__cbus__coupler_to_bootrom__fragmenter.configure(this, name(), "ExampleRocketSystem.cbus.coupler_to_bootrom.fragmenter", "fragmenter", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__cbus__coupler_to_bootrom__fragmenter__monitor.configure(this, name(), "ExampleRocketSystem.cbus.coupler_to_bootrom.fragmenter.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__cbus__coupler_to_bootrom__fragmenter__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.cbus.coupler_to_bootrom.fragmenter.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__cbus__coupler_to_clint__fragmenter.configure(this, name(), "ExampleRocketSystem.cbus.coupler_to_clint.fragmenter", "fragmenter", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__cbus__coupler_to_clint__fragmenter__monitor.configure(this, name(), "ExampleRocketSystem.cbus.coupler_to_clint.fragmenter.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__cbus__coupler_to_clint__fragmenter__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.cbus.coupler_to_clint.fragmenter.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__cbus__coupler_to_debug__fragmenter.configure(this, name(), "ExampleRocketSystem.cbus.coupler_to_debug.fragmenter", "fragmenter", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__cbus__coupler_to_debug__fragmenter__monitor.configure(this, name(), "ExampleRocketSystem.cbus.coupler_to_debug.fragmenter.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__cbus__coupler_to_debug__fragmenter__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.cbus.coupler_to_debug.fragmenter.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__cbus__coupler_to_plic__fragmenter.configure(this, name(), "ExampleRocketSystem.cbus.coupler_to_plic.fragmenter", "fragmenter", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__cbus__coupler_to_plic__fragmenter__monitor.configure(this, name(), "ExampleRocketSystem.cbus.coupler_to_plic.fragmenter.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__cbus__coupler_to_plic__fragmenter__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.cbus.coupler_to_plic.fragmenter.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__cbus__fixer__monitor.configure(this, name(), "ExampleRocketSystem.cbus.fixer.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__cbus__fixer__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.cbus.fixer.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__cbus__out_xbar.configure(this, name(), "ExampleRocketSystem.cbus.out_xbar", "out_xbar", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__cbus__out_xbar__monitor.configure(this, name(), "ExampleRocketSystem.cbus.out_xbar.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__cbus__out_xbar__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.cbus.out_xbar.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__cbus__wrapped_error_device__buffer__monitor.configure(this, name(), "ExampleRocketSystem.cbus.wrapped_error_device.buffer.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__cbus__wrapped_error_device__buffer__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.cbus.wrapped_error_device.buffer.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__cbus__wrapped_error_device__error__monitor.configure(this, name(), "ExampleRocketSystem.cbus.wrapped_error_device.error.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__cbus__wrapped_error_device__error__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.cbus.wrapped_error_device.error.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__clint_domain__clint__monitor.configure(this, name(), "ExampleRocketSystem.clint_domain.clint.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__clint_domain__clint__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.clint_domain.clint.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__coh_wrapper__binder__monitor.configure(this, name(), "ExampleRocketSystem.coh_wrapper.binder.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__coh_wrapper__binder__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.coh_wrapper.binder.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__coh_wrapper__broadcast_1.configure(this, name(), "ExampleRocketSystem.coh_wrapper.broadcast_1", "broadcast_1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__coh_wrapper__broadcast_1__TLBroadcastTracker.configure(this, name(), "ExampleRocketSystem.coh_wrapper.broadcast_1.TLBroadcastTracker", "TLBroadcastTracker", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__coh_wrapper__broadcast_1__TLBroadcastTracker_1.configure(this, name(), "ExampleRocketSystem.coh_wrapper.broadcast_1.TLBroadcastTracker_1", "TLBroadcastTracker_1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__coh_wrapper__broadcast_1__TLBroadcastTracker_2.configure(this, name(), "ExampleRocketSystem.coh_wrapper.broadcast_1.TLBroadcastTracker_2", "TLBroadcastTracker_2", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__coh_wrapper__broadcast_1__TLBroadcastTracker_3.configure(this, name(), "ExampleRocketSystem.coh_wrapper.broadcast_1.TLBroadcastTracker_3", "TLBroadcastTracker_3", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__coh_wrapper__broadcast_1__monitor.configure(this, name(), "ExampleRocketSystem.coh_wrapper.broadcast_1.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__coh_wrapper__broadcast_1__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.coh_wrapper.broadcast_1.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__fbus_buffer__monitor.configure(this, name(), "ExampleRocketSystem.fbus_buffer.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__fbus_buffer__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.fbus_buffer.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__fbus_coupler_from_port_named_slave_port_axi4__axi42tl.configure(this, name(), "ExampleRocketSystem.fbus_coupler_from_port_named_slave_port_axi4.axi42tl", "axi42tl", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__fbus_coupler_from_port_named_slave_port_axi4__axi4frag.configure(this, name(), "ExampleRocketSystem.fbus_coupler_from_port_named_slave_port_axi4.axi4frag", "axi4frag", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__fbus_coupler_from_port_named_slave_port_axi4__axi4yank.configure(this, name(), "ExampleRocketSystem.fbus_coupler_from_port_named_slave_port_axi4.axi4yank", "axi4yank", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__fbus_coupler_from_port_named_slave_port_axi4__buffer__monitor.configure(this, name(), "ExampleRocketSystem.fbus_coupler_from_port_named_slave_port_axi4.buffer.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__fbus_coupler_from_port_named_slave_port_axi4__buffer__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.fbus_coupler_from_port_named_slave_port_axi4.buffer.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__fbus_coupler_from_port_named_slave_port_axi4__fixer__monitor.configure(this, name(), "ExampleRocketSystem.fbus_coupler_from_port_named_slave_port_axi4.fixer.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__fbus_coupler_from_port_named_slave_port_axi4__fixer__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.fbus_coupler_from_port_named_slave_port_axi4.fixer.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__mbus__coupler_to_memory_controller_port_named_axi4__axi4yank.configure(this, name(), "ExampleRocketSystem.mbus.coupler_to_memory_controller_port_named_axi4.axi4yank", "axi4yank", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__mbus__coupler_to_memory_controller_port_named_axi4__tl2axi4.configure(this, name(), "ExampleRocketSystem.mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4", "tl2axi4", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__mbus__coupler_to_memory_controller_port_named_axi4__tl2axi4__monitor.configure(this, name(), "ExampleRocketSystem.mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__mbus__coupler_to_memory_controller_port_named_axi4__tl2axi4__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__mbus__picker__monitor.configure(this, name(), "ExampleRocketSystem.mbus.picker.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__mbus__picker__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.mbus.picker.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__plic_domain__plic.configure(this, name(), "ExampleRocketSystem.plic_domain.plic", "plic", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__plic_domain__plic__monitor.configure(this, name(), "ExampleRocketSystem.plic_domain.plic.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__plic_domain__plic__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.plic_domain.plic.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__sbus__coupler_to_port_named_mmio_port_axi4__axi4deint.configure(this, name(), "ExampleRocketSystem.sbus.coupler_to_port_named_mmio_port_axi4.axi4deint", "axi4deint", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__sbus__coupler_to_port_named_mmio_port_axi4__axi4yank.configure(this, name(), "ExampleRocketSystem.sbus.coupler_to_port_named_mmio_port_axi4.axi4yank", "axi4yank", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__sbus__coupler_to_port_named_mmio_port_axi4__tl2axi4.configure(this, name(), "ExampleRocketSystem.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4", "tl2axi4", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__sbus__coupler_to_port_named_mmio_port_axi4__tl2axi4__monitor.configure(this, name(), "ExampleRocketSystem.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__sbus__coupler_to_port_named_mmio_port_axi4__tl2axi4__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__sbus__fixer__monitor.configure(this, name(), "ExampleRocketSystem.sbus.fixer.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__sbus__fixer__monitor_1.configure(this, name(), "ExampleRocketSystem.sbus.fixer.monitor_1", "monitor_1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__sbus__fixer__monitor_1__unnamedblk1.configure(this, name(), "ExampleRocketSystem.sbus.fixer.monitor_1.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__sbus__fixer__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.sbus.fixer.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__sbus__system_bus_xbar.configure(this, name(), "ExampleRocketSystem.sbus.system_bus_xbar", "system_bus_xbar", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__sbus__system_bus_xbar__monitor.configure(this, name(), "ExampleRocketSystem.sbus.system_bus_xbar.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__sbus__system_bus_xbar__monitor_1.configure(this, name(), "ExampleRocketSystem.sbus.system_bus_xbar.monitor_1", "monitor_1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__sbus__system_bus_xbar__monitor_1__unnamedblk1.configure(this, name(), "ExampleRocketSystem.sbus.system_bus_xbar.monitor_1.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__sbus__system_bus_xbar__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.sbus.system_bus_xbar.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tile_prci_domain__buffer__monitor.configure(this, name(), "ExampleRocketSystem.tile_prci_domain.buffer.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tile_prci_domain__buffer__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.tile_prci_domain.buffer.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tile_prci_domain__element_reset_domain_rockettile__core.configure(this, name(), "ExampleRocketSystem.tile_prci_domain.element_reset_domain_rockettile.core", "core", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tile_prci_domain__element_reset_domain_rockettile__core__PlusArgTimeout.configure(this, name(), "ExampleRocketSystem.tile_prci_domain.element_reset_domain_rockettile.core.PlusArgTimeout", "PlusArgTimeout", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tile_prci_domain__element_reset_domain_rockettile__core__csr.configure(this, name(), "ExampleRocketSystem.tile_prci_domain.element_reset_domain_rockettile.core.csr", "csr", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tile_prci_domain__element_reset_domain_rockettile__core__ibuf.configure(this, name(), "ExampleRocketSystem.tile_prci_domain.element_reset_domain_rockettile.core.ibuf", "ibuf", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tile_prci_domain__element_reset_domain_rockettile__dcache.configure(this, name(), "ExampleRocketSystem.tile_prci_domain.element_reset_domain_rockettile.dcache", "dcache", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tile_prci_domain__element_reset_domain_rockettile__dcache__unnamedblk1.configure(this, name(), "ExampleRocketSystem.tile_prci_domain.element_reset_domain_rockettile.dcache.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tile_prci_domain__element_reset_domain_rockettile__fpuOpt.configure(this, name(), "ExampleRocketSystem.tile_prci_domain.element_reset_domain_rockettile.fpuOpt", "fpuOpt", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tile_prci_domain__element_reset_domain_rockettile__frontend.configure(this, name(), "ExampleRocketSystem.tile_prci_domain.element_reset_domain_rockettile.frontend", "frontend", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tile_prci_domain__element_reset_domain_rockettile__frontend__icache.configure(this, name(), "ExampleRocketSystem.tile_prci_domain.element_reset_domain_rockettile.frontend.icache", "icache", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tile_prci_domain__element_reset_domain_rockettile__frontend__tlb.configure(this, name(), "ExampleRocketSystem.tile_prci_domain.element_reset_domain_rockettile.frontend.tlb", "tlb", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tile_prci_domain__element_reset_domain_rockettile__ptw.configure(this, name(), "ExampleRocketSystem.tile_prci_domain.element_reset_domain_rockettile.ptw", "ptw", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tile_prci_domain__element_reset_domain_rockettile__tlMasterXbar.configure(this, name(), "ExampleRocketSystem.tile_prci_domain.element_reset_domain_rockettile.tlMasterXbar", "tlMasterXbar", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tile_prci_domain__element_reset_domain_rockettile__tlMasterXbar__monitor.configure(this, name(), "ExampleRocketSystem.tile_prci_domain.element_reset_domain_rockettile.tlMasterXbar.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tile_prci_domain__element_reset_domain_rockettile__tlMasterXbar__monitor_1.configure(this, name(), "ExampleRocketSystem.tile_prci_domain.element_reset_domain_rockettile.tlMasterXbar.monitor_1", "monitor_1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tile_prci_domain__element_reset_domain_rockettile__tlMasterXbar__monitor_1__unnamedblk1.configure(this, name(), "ExampleRocketSystem.tile_prci_domain.element_reset_domain_rockettile.tlMasterXbar.monitor_1.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tile_prci_domain__element_reset_domain_rockettile__tlMasterXbar__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.tile_prci_domain.element_reset_domain_rockettile.tlMasterXbar.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tlDM__dmInner__dmInner.configure(this, name(), "ExampleRocketSystem.tlDM.dmInner.dmInner", "dmInner", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tlDM__dmInner__dmInner__monitor.configure(this, name(), "ExampleRocketSystem.tlDM.dmInner.dmInner.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tlDM__dmInner__dmInner__monitor_1.configure(this, name(), "ExampleRocketSystem.tlDM.dmInner.dmInner.monitor_1", "monitor_1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tlDM__dmInner__dmInner__monitor_1__unnamedblk1.configure(this, name(), "ExampleRocketSystem.tlDM.dmInner.dmInner.monitor_1.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tlDM__dmInner__dmInner__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.tlDM.dmInner.dmInner.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tlDM__dmInner__dmInner__unnamedblk1.configure(this, name(), "ExampleRocketSystem.tlDM.dmInner.dmInner.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tlDM__dmOuter__asource__monitor.configure(this, name(), "ExampleRocketSystem.tlDM.dmOuter.asource.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tlDM__dmOuter__asource__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.tlDM.dmOuter.asource.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tlDM__dmOuter__dmOuter__monitor.configure(this, name(), "ExampleRocketSystem.tlDM.dmOuter.dmOuter.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tlDM__dmOuter__dmOuter__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.tlDM.dmOuter.dmOuter.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tlDM__dmOuter__dmiBypass__bar__monitor.configure(this, name(), "ExampleRocketSystem.tlDM.dmOuter.dmiBypass.bar.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tlDM__dmOuter__dmiBypass__bar__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.tlDM.dmOuter.dmiBypass.bar.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tlDM__dmOuter__dmiBypass__error.configure(this, name(), "ExampleRocketSystem.tlDM.dmOuter.dmiBypass.error", "error", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tlDM__dmOuter__dmiBypass__error__monitor.configure(this, name(), "ExampleRocketSystem.tlDM.dmOuter.dmiBypass.error.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tlDM__dmOuter__dmiBypass__error__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.tlDM.dmOuter.dmiBypass.error.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tlDM__dmOuter__dmiXbar.configure(this, name(), "ExampleRocketSystem.tlDM.dmOuter.dmiXbar", "dmiXbar", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tlDM__dmOuter__dmiXbar__monitor.configure(this, name(), "ExampleRocketSystem.tlDM.dmOuter.dmiXbar.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ExampleRocketSystem__tlDM__dmOuter__dmiXbar__monitor__unnamedblk1.configure(this, name(), "ExampleRocketSystem.tlDM.dmOuter.dmiXbar.monitor.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
}
