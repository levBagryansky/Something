// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregfile.h for the primary calling header

#include "Vregfile_regfile.h"
#include "Vregfile__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vregfile_regfile::_sequent__TOP__regfile__1(Vregfile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vregfile_regfile::_sequent__TOP__regfile__1\n"); );
    Vregfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvdim0__regs__v0;
    CData/*0:0*/ __Vdlyvset__regs__v0;
    IData/*31:0*/ __Vdlyvval__regs__v0;
    // Body
    __Vdlyvset__regs__v0 = 0U;
    if (vlTOPp->WE3) {
        __Vdlyvval__regs__v0 = vlTOPp->WD3;
        __Vdlyvset__regs__v0 = 1U;
        __Vdlyvdim0__regs__v0 = vlTOPp->A3;
    }
    if (__Vdlyvset__regs__v0) {
        vlSymsp->TOP__regfile.regs[__Vdlyvdim0__regs__v0] 
            = __Vdlyvval__regs__v0;
    }
}
