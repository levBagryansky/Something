// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregfile.h for the primary calling header

#ifndef _VREGFILE_REGFILE_H_
#define _VREGFILE_REGFILE_H_  // guard

#include "verilated.h"
#include "Vregfile__Dpi.h"

//==========

class Vregfile__Syms;
class Vregfile_VerilatedVcd;


//----------

VL_MODULE(Vregfile_regfile) {
  public:
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(WE3,0,0);
    VL_IN8(A1,4,0);
    VL_IN8(A2,4,0);
    VL_IN8(A3,4,0);
    VL_IN(WD3,31,0);
    VL_OUT(RD1,31,0);
    VL_OUT(RD2,31,0);
    
    // LOCAL SIGNALS
    IData/*31:0*/ regs[32];
    
    // INTERNAL VARIABLES
  private:
    Vregfile__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vregfile_regfile);  ///< Copying not allowed
  public:
    Vregfile_regfile(const char* name = "TOP");
    ~Vregfile_regfile();
    
    // INTERNAL METHODS
    void __Vconfigure(Vregfile__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__regfile__1(Vregfile__Syms* __restrict vlSymsp);
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
