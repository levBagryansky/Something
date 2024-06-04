// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vregfile__Syms.h"
#include "Vregfile.h"
#include "Vregfile_regfile.h"



// FUNCTIONS
Vregfile__Syms::Vregfile__Syms(Vregfile* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__regfile(Verilated::catName(topp->name(), "regfile"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->regfile = &TOP__regfile;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__regfile.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_regfile.configure(this, name(), "regfile", "regfile", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_regfile.varInsert(__Vfinal,"regs", &(TOP__regfile.regs), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,31,0);
    }
}
