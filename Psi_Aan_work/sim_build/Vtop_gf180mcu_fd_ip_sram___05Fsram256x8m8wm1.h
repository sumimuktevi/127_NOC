// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_GF180MCU_FD_IP_SRAM___05FSRAM256X8M8WM1_H_
#define VERILATED_VTOP_GF180MCU_FD_IP_SRAM___05FSRAM256X8M8WM1_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1 final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(CLK,0,0);
        VL_IN8(CEN,0,0);
        VL_IN8(GWEN,0,0);
        VL_IN8(WEN,7,0);
        VL_IN8(A,7,0);
        VL_IN8(D,7,0);
        VL_OUT8(Q,7,0);
        VL_IN8(VDD,0,0);
        VL_IN8(VSS,0,0);
        CData/*7:0*/ qo_reg;
        CData/*0:0*/ cen_flag;
        CData/*0:0*/ write_flag;
        CData/*0:0*/ read_flag;
        CData/*0:0*/ ntf_Tcyc;
        CData/*0:0*/ ntf_Tckh;
        CData/*0:0*/ ntf_Tckl;
        CData/*0:0*/ ntf_tcs;
        CData/*0:0*/ ntf_tas;
        CData/*0:0*/ ntf_tds;
        CData/*0:0*/ ntf_tws;
        CData/*0:0*/ ntf_twis;
        CData/*0:0*/ ntf_tch;
        CData/*0:0*/ ntf_tah;
        CData/*0:0*/ ntf_tdh;
        CData/*0:0*/ ntf_twh;
        CData/*0:0*/ ntf_twih;
        CData/*0:0*/ no_st_viol;
        CData/*0:0*/ no_hd_viol;
        CData/*0:0*/ no_ck_viol;
        CData/*0:0*/ clk_dly;
        CData/*0:0*/ write_flag_dly;
        CData/*0:0*/ read_flag_dly;
        CData/*0:0*/ cen_dly;
        CData/*0:0*/ cen_fell;
        CData/*0:0*/ cen_not_rst;
        CData/*7:0*/ we;
        CData/*7:0*/ cd2;
        CData/*7:0*/ cd4;
        CData/*7:0*/ cd5;
        CData/*7:0*/ cdx;
        CData/*7:0*/ marked_a;
        CData/*7:0*/ mem_0;
        CData/*7:0*/ mem_1;
        CData/*7:0*/ mem_2;
        CData/*7:0*/ mem_3;
        CData/*0:0*/ cen_flag_dly;
        VL_OUT8(VDD__out,0,0);
        VL_OUT8(VDD__en,0,0);
        VL_OUT8(VSS__out,0,0);
        VL_OUT8(VSS__en,0,0);
        CData/*0:0*/ __Vintraval_h4a4d3f7b__0;
        CData/*0:0*/ __Vintraval_h4d714d85__0;
        CData/*0:0*/ __Vintraval_h6b973a35__0;
        CData/*0:0*/ __Vintraval_hbcd67620__0;
        CData/*0:0*/ __Vintraval_h9466889c__0;
        CData/*0:0*/ __Vintraval_h541ac64a__0;
        CData/*0:0*/ __Vintraval_h879c5562__0;
        CData/*0:0*/ __Vintraval_hb7d4ebc7__0;
        CData/*0:0*/ __Vintraval_h51c4c12f__0;
        CData/*0:0*/ __Vintraval_hf5aefd35__0;
        CData/*0:0*/ __Vintraval_h2faa2e1a__0;
        CData/*0:0*/ __Vintraval_he489fecc__0;
        CData/*0:0*/ __Vintraval_h63825e78__0;
        CData/*0:0*/ __Vintraval_ha0f027f6__0;
    };
    struct {
        CData/*0:0*/ __Vintraval_h666cf47e__0;
        CData/*0:0*/ __Vintraval_h6ac41722__0;
        CData/*0:0*/ __Vintraval_ha6788667__0;
        CData/*0:0*/ __Vintraval_hdc9caaa4__0;
        CData/*0:0*/ __Vintraval_h5244c191__0;
        CData/*0:0*/ __Vintraval_hd0aef126__0;
        CData/*0:0*/ __Vintraval_h885468c1__0;
        CData/*0:0*/ __Vintraval_h0116e17d__0;
        CData/*0:0*/ __Vintraval_ha98f660b__0;
        CData/*0:0*/ __Vintraval_h51a33acb__0;
        CData/*0:0*/ __Vintraval_hbcfa50b2__0;
        CData/*0:0*/ __Vintraval_h6d404c11__0;
        CData/*0:0*/ __Vintraval_h2d9a9f11__0;
        CData/*0:0*/ __Vintraval_hb2e8b799__0;
        CData/*0:0*/ __Vintraval_h09bb12df__0;
        CData/*0:0*/ __Vintraval_h355f200c__0;
        CData/*0:0*/ __Vintraval_h1f73d33f__0;
        CData/*0:0*/ __Vintraval_h9e519176__0;
        CData/*0:0*/ __Vintraval_h26c4758a__0;
        CData/*0:0*/ __Vintraval_hba6ecb0a__0;
        CData/*0:0*/ __Vintraval_hfc5dce8d__0;
        CData/*0:0*/ __Vintraval_hbcb89e4d__0;
        CData/*0:0*/ __Vintraval_hf43d5b83__0;
        CData/*0:0*/ __Vintraval_h83ccec8f__0;
        CData/*0:0*/ __Vintraval_h6bf6a020__0;
        CData/*0:0*/ __Vintraval_h93440f20__0;
        CData/*0:0*/ __Vintraval_hdc1ad977__0;
        CData/*0:0*/ __Vintraval_hb7048b63__0;
        CData/*0:0*/ __Vintraval_h97aca2db__0;
        CData/*0:0*/ __Vintraval_h15649a68__0;
        CData/*0:0*/ __Vintraval_h484c2083__0;
        IData/*31:0*/ i;
        VlUnpacked<CData/*7:0*/, 256> mem;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ Tdly = 0x00000064U;
    static constexpr IData/*31:0*/ Tcyc = 0x0000d930U;
    static constexpr IData/*31:0*/ Tckh = 0x000061a8U;
    static constexpr IData/*31:0*/ Tckl = 0x000061a8U;
    static constexpr IData/*31:0*/ tcs = 0x00001388U;
    static constexpr IData/*31:0*/ tas = 0x00001388U;
    static constexpr IData/*31:0*/ tds = 0x00001388U;
    static constexpr IData/*31:0*/ tws = 0x00001388U;
    static constexpr IData/*31:0*/ twis = 0x00001388U;
    static constexpr IData/*31:0*/ tch = 0x00002710U;
    static constexpr IData/*31:0*/ tah = 0x00002710U;
    static constexpr IData/*31:0*/ tdh = 0x00002710U;
    static constexpr IData/*31:0*/ twh = 0x00002710U;
    static constexpr IData/*31:0*/ twih = 0x00002710U;
    static constexpr IData/*31:0*/ ta = 0x0000afc8U;

    // CONSTRUCTORS
    Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1() = default;
    ~Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1() = default;
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_gf180mcu_fd_ip_sram___05Fsram256x8m8wm1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
