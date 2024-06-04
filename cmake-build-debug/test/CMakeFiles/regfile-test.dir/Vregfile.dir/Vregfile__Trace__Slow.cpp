// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vregfile__Syms.h"


//======================

void Vregfile::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vregfile::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vregfile__Syms* __restrict vlSymsp = static_cast<Vregfile__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vregfile::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vregfile::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vregfile__Syms* __restrict vlSymsp = static_cast<Vregfile__Syms*>(userp);
    Vregfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vregfile::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vregfile__Syms* __restrict vlSymsp = static_cast<Vregfile__Syms*>(userp);
    Vregfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"WE3", false,-1);
        tracep->declBus(c+3,"A1", false,-1, 4,0);
        tracep->declBus(c+4,"A2", false,-1, 4,0);
        tracep->declBus(c+5,"A3", false,-1, 4,0);
        tracep->declBus(c+6,"WD3", false,-1, 31,0);
        tracep->declBus(c+7,"RD1", false,-1, 31,0);
        tracep->declBus(c+8,"RD2", false,-1, 31,0);
        tracep->declBit(c+1,"regfile clk", false,-1);
        tracep->declBit(c+2,"regfile WE3", false,-1);
        tracep->declBus(c+3,"regfile A1", false,-1, 4,0);
        tracep->declBus(c+4,"regfile A2", false,-1, 4,0);
        tracep->declBus(c+5,"regfile A3", false,-1, 4,0);
        tracep->declBus(c+6,"regfile WD3", false,-1, 31,0);
        tracep->declBus(c+9,"regfile RD1", false,-1, 31,0);
        tracep->declBus(c+10,"regfile RD2", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+11+i*1,"regfile regs", true,(i+0), 31,0);}}
    }
}

void Vregfile::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vregfile::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vregfile__Syms* __restrict vlSymsp = static_cast<Vregfile__Syms*>(userp);
    Vregfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vregfile::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vregfile__Syms* __restrict vlSymsp = static_cast<Vregfile__Syms*>(userp);
    Vregfile* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->WE3));
        tracep->fullCData(oldp+3,(vlTOPp->A1),5);
        tracep->fullCData(oldp+4,(vlTOPp->A2),5);
        tracep->fullCData(oldp+5,(vlTOPp->A3),5);
        tracep->fullIData(oldp+6,(vlTOPp->WD3),32);
        tracep->fullIData(oldp+7,(vlTOPp->RD1),32);
        tracep->fullIData(oldp+8,(vlTOPp->RD2),32);
        tracep->fullIData(oldp+9,(((0U != (IData)(vlTOPp->A1))
                                    ? vlSymsp->TOP__regfile.regs
                                   [vlTOPp->A1] : 0U)),32);
        tracep->fullIData(oldp+10,(((0U != (IData)(vlTOPp->A2))
                                     ? vlSymsp->TOP__regfile.regs
                                    [vlTOPp->A2] : 0U)),32);
        tracep->fullIData(oldp+11,(vlSymsp->TOP__regfile.regs[0]),32);
        tracep->fullIData(oldp+12,(vlSymsp->TOP__regfile.regs[1]),32);
        tracep->fullIData(oldp+13,(vlSymsp->TOP__regfile.regs[2]),32);
        tracep->fullIData(oldp+14,(vlSymsp->TOP__regfile.regs[3]),32);
        tracep->fullIData(oldp+15,(vlSymsp->TOP__regfile.regs[4]),32);
        tracep->fullIData(oldp+16,(vlSymsp->TOP__regfile.regs[5]),32);
        tracep->fullIData(oldp+17,(vlSymsp->TOP__regfile.regs[6]),32);
        tracep->fullIData(oldp+18,(vlSymsp->TOP__regfile.regs[7]),32);
        tracep->fullIData(oldp+19,(vlSymsp->TOP__regfile.regs[8]),32);
        tracep->fullIData(oldp+20,(vlSymsp->TOP__regfile.regs[9]),32);
        tracep->fullIData(oldp+21,(vlSymsp->TOP__regfile.regs[10]),32);
        tracep->fullIData(oldp+22,(vlSymsp->TOP__regfile.regs[11]),32);
        tracep->fullIData(oldp+23,(vlSymsp->TOP__regfile.regs[12]),32);
        tracep->fullIData(oldp+24,(vlSymsp->TOP__regfile.regs[13]),32);
        tracep->fullIData(oldp+25,(vlSymsp->TOP__regfile.regs[14]),32);
        tracep->fullIData(oldp+26,(vlSymsp->TOP__regfile.regs[15]),32);
        tracep->fullIData(oldp+27,(vlSymsp->TOP__regfile.regs[16]),32);
        tracep->fullIData(oldp+28,(vlSymsp->TOP__regfile.regs[17]),32);
        tracep->fullIData(oldp+29,(vlSymsp->TOP__regfile.regs[18]),32);
        tracep->fullIData(oldp+30,(vlSymsp->TOP__regfile.regs[19]),32);
        tracep->fullIData(oldp+31,(vlSymsp->TOP__regfile.regs[20]),32);
        tracep->fullIData(oldp+32,(vlSymsp->TOP__regfile.regs[21]),32);
        tracep->fullIData(oldp+33,(vlSymsp->TOP__regfile.regs[22]),32);
        tracep->fullIData(oldp+34,(vlSymsp->TOP__regfile.regs[23]),32);
        tracep->fullIData(oldp+35,(vlSymsp->TOP__regfile.regs[24]),32);
        tracep->fullIData(oldp+36,(vlSymsp->TOP__regfile.regs[25]),32);
        tracep->fullIData(oldp+37,(vlSymsp->TOP__regfile.regs[26]),32);
        tracep->fullIData(oldp+38,(vlSymsp->TOP__regfile.regs[27]),32);
        tracep->fullIData(oldp+39,(vlSymsp->TOP__regfile.regs[28]),32);
        tracep->fullIData(oldp+40,(vlSymsp->TOP__regfile.regs[29]),32);
        tracep->fullIData(oldp+41,(vlSymsp->TOP__regfile.regs[30]),32);
        tracep->fullIData(oldp+42,(vlSymsp->TOP__regfile.regs[31]),32);
    }
}
