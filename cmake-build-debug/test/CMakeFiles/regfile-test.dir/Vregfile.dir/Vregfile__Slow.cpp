// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregfile.h for the primary calling header

#include "Vregfile.h"
#include "Vregfile__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vregfile) {
    Vregfile__Syms* __restrict vlSymsp = __VlSymsp = new Vregfile__Syms(this, name());
    Vregfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(regfile, Vregfile_regfile);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vregfile::__Vconfigure(Vregfile__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vregfile::~Vregfile() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vregfile::_eval_initial(Vregfile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile::_eval_initial\n"); );
    Vregfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vregfile::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile::final\n"); );
    // Variables
    Vregfile__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vregfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vregfile::_eval_settle(Vregfile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile::_eval_settle\n"); );
    Vregfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
}

void Vregfile::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    WE3 = VL_RAND_RESET_I(1);
    A1 = VL_RAND_RESET_I(5);
    A2 = VL_RAND_RESET_I(5);
    A3 = VL_RAND_RESET_I(5);
    WD3 = VL_RAND_RESET_I(32);
    RD1 = VL_RAND_RESET_I(32);
    RD2 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
