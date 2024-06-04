// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregfile.h for the primary calling header

#include "Vregfile_regfile.h"
#include "Vregfile__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vregfile_regfile) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vregfile_regfile::__Vconfigure(Vregfile__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vregfile_regfile::~Vregfile_regfile() {
}

void Vregfile_regfile::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vregfile_regfile::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    WE3 = VL_RAND_RESET_I(1);
    A1 = VL_RAND_RESET_I(5);
    A2 = VL_RAND_RESET_I(5);
    A3 = VL_RAND_RESET_I(5);
    WD3 = VL_RAND_RESET_I(32);
    RD1 = VL_RAND_RESET_I(32);
    RD2 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            regs[__Vi0] = VL_RAND_RESET_I(32);
    }}
}
