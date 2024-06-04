// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vregfile__Syms.h"


void Vregfile::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vregfile__Syms* __restrict vlSymsp = static_cast<Vregfile__Syms*>(userp);
    Vregfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vregfile::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vregfile__Syms* __restrict vlSymsp = static_cast<Vregfile__Syms*>(userp);
    Vregfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->WE3));
        tracep->chgCData(oldp+2,(vlTOPp->A1),5);
        tracep->chgCData(oldp+3,(vlTOPp->A2),5);
        tracep->chgCData(oldp+4,(vlTOPp->A3),5);
        tracep->chgIData(oldp+5,(vlTOPp->WD3),32);
        tracep->chgIData(oldp+6,(vlTOPp->RD1),32);
        tracep->chgIData(oldp+7,(vlTOPp->RD2),32);
        tracep->chgIData(oldp+8,(((0U != (IData)(vlTOPp->A1))
                                   ? vlSymsp->TOP__regfile.regs
                                  [vlTOPp->A1] : 0U)),32);
        tracep->chgIData(oldp+9,(((0U != (IData)(vlTOPp->A2))
                                   ? vlSymsp->TOP__regfile.regs
                                  [vlTOPp->A2] : 0U)),32);
        tracep->chgIData(oldp+10,(vlSymsp->TOP__regfile.regs[0]),32);
        tracep->chgIData(oldp+11,(vlSymsp->TOP__regfile.regs[1]),32);
        tracep->chgIData(oldp+12,(vlSymsp->TOP__regfile.regs[2]),32);
        tracep->chgIData(oldp+13,(vlSymsp->TOP__regfile.regs[3]),32);
        tracep->chgIData(oldp+14,(vlSymsp->TOP__regfile.regs[4]),32);
        tracep->chgIData(oldp+15,(vlSymsp->TOP__regfile.regs[5]),32);
        tracep->chgIData(oldp+16,(vlSymsp->TOP__regfile.regs[6]),32);
        tracep->chgIData(oldp+17,(vlSymsp->TOP__regfile.regs[7]),32);
        tracep->chgIData(oldp+18,(vlSymsp->TOP__regfile.regs[8]),32);
        tracep->chgIData(oldp+19,(vlSymsp->TOP__regfile.regs[9]),32);
        tracep->chgIData(oldp+20,(vlSymsp->TOP__regfile.regs[10]),32);
        tracep->chgIData(oldp+21,(vlSymsp->TOP__regfile.regs[11]),32);
        tracep->chgIData(oldp+22,(vlSymsp->TOP__regfile.regs[12]),32);
        tracep->chgIData(oldp+23,(vlSymsp->TOP__regfile.regs[13]),32);
        tracep->chgIData(oldp+24,(vlSymsp->TOP__regfile.regs[14]),32);
        tracep->chgIData(oldp+25,(vlSymsp->TOP__regfile.regs[15]),32);
        tracep->chgIData(oldp+26,(vlSymsp->TOP__regfile.regs[16]),32);
        tracep->chgIData(oldp+27,(vlSymsp->TOP__regfile.regs[17]),32);
        tracep->chgIData(oldp+28,(vlSymsp->TOP__regfile.regs[18]),32);
        tracep->chgIData(oldp+29,(vlSymsp->TOP__regfile.regs[19]),32);
        tracep->chgIData(oldp+30,(vlSymsp->TOP__regfile.regs[20]),32);
        tracep->chgIData(oldp+31,(vlSymsp->TOP__regfile.regs[21]),32);
        tracep->chgIData(oldp+32,(vlSymsp->TOP__regfile.regs[22]),32);
        tracep->chgIData(oldp+33,(vlSymsp->TOP__regfile.regs[23]),32);
        tracep->chgIData(oldp+34,(vlSymsp->TOP__regfile.regs[24]),32);
        tracep->chgIData(oldp+35,(vlSymsp->TOP__regfile.regs[25]),32);
        tracep->chgIData(oldp+36,(vlSymsp->TOP__regfile.regs[26]),32);
        tracep->chgIData(oldp+37,(vlSymsp->TOP__regfile.regs[27]),32);
        tracep->chgIData(oldp+38,(vlSymsp->TOP__regfile.regs[28]),32);
        tracep->chgIData(oldp+39,(vlSymsp->TOP__regfile.regs[29]),32);
        tracep->chgIData(oldp+40,(vlSymsp->TOP__regfile.regs[30]),32);
        tracep->chgIData(oldp+41,(vlSymsp->TOP__regfile.regs[31]),32);
    }
}

void Vregfile::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vregfile__Syms* __restrict vlSymsp = static_cast<Vregfile__Syms*>(userp);
    Vregfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
