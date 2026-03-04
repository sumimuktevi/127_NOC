// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_GF180MCU_FD_IP_SRAM___05FSRAM1024X8M8WM1_H_
#define VERILATED_VTOP_GF180MCU_FD_IP_SRAM___05FSRAM1024X8M8WM1_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1 final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(CLK,0,0);
        VL_IN8(CEN,0,0);
        VL_IN8(GWEN,0,0);
        VL_IN8(WEN,7,0);
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
        CData/*7:0*/ mem_0;
        CData/*7:0*/ mem_1;
        CData/*7:0*/ mem_2;
        CData/*7:0*/ mem_3;
        CData/*0:0*/ cen_flag_dly;
        VL_OUT8(VDD__out,0,0);
        VL_OUT8(VDD__en,0,0);
        VL_OUT8(VSS__out,0,0);
        VL_OUT8(VSS__en,0,0);
        CData/*0:0*/ __Vintraval_h3b5fcd9c__0;
        CData/*0:0*/ __Vintraval_hb0bd7f62__0;
        CData/*0:0*/ __Vintraval_hed184258__0;
        CData/*0:0*/ __Vintraval_hd9f3b4db__0;
        CData/*0:0*/ __Vintraval_he1cca8ac__0;
        CData/*0:0*/ __Vintraval_h4ae63bf0__0;
        CData/*0:0*/ __Vintraval_h94bd8d15__0;
        CData/*0:0*/ __Vintraval_h9dc1ddd1__0;
        CData/*0:0*/ __Vintraval_h7c35743b__0;
        CData/*0:0*/ __Vintraval_ha28a4b79__0;
        CData/*0:0*/ __Vintraval_h539c1c41__0;
        CData/*0:0*/ __Vintraval_hba51efb5__0;
        CData/*0:0*/ __Vintraval_hc7587398__0;
        CData/*0:0*/ __Vintraval_ha6bb0ae3__0;
        CData/*0:0*/ __Vintraval_h59dc93e4__0;
        CData/*0:0*/ __Vintraval_hf4691aea__0;
    };
    struct {
        CData/*0:0*/ __Vintraval_h6bf62d92__0;
        CData/*0:0*/ __Vintraval_hd4e52b8d__0;
        CData/*0:0*/ __Vintraval_h53e31b1d__0;
        CData/*0:0*/ __Vintraval_h629dff74__0;
        CData/*0:0*/ __Vintraval_h4ada1fc3__0;
        CData/*0:0*/ __Vintraval_h0bab7184__0;
        CData/*0:0*/ __Vintraval_h39f8eaab__0;
        CData/*0:0*/ __Vintraval_h46bf310d__0;
        CData/*0:0*/ __Vintraval_h4fc14d6f__0;
        CData/*0:0*/ __Vintraval_he1793c59__0;
        CData/*0:0*/ __Vintraval_h0526b7c3__0;
        CData/*0:0*/ __Vintraval_h7b582ada__0;
        CData/*0:0*/ __Vintraval_hb7a6c3f7__0;
        CData/*0:0*/ __Vintraval_hbe675abf__0;
        CData/*0:0*/ __Vintraval_h9c51b0a6__0;
        CData/*0:0*/ __Vintraval_ha83ed4ed__0;
        CData/*0:0*/ __Vintraval_h139f9dbd__0;
        CData/*0:0*/ __Vintraval_h639012dc__0;
        CData/*0:0*/ __Vintraval_hb1fe2520__0;
        CData/*0:0*/ __Vintraval_h927e6592__0;
        VL_IN16(A,9,0);
        SData/*9:0*/ marked_a;
        IData/*31:0*/ i;
        VlUnpacked<CData/*7:0*/, 1024> mem;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ Tdly = 0U;
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
    Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1() = default;
    ~Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1() = default;
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
