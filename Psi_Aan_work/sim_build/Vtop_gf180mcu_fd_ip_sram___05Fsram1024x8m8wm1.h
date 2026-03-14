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
        CData/*0:0*/ __VdfgRegularize_hefcf2c13_0_0;
        CData/*0:0*/ __Vintraval_h64540f0b__0;
        CData/*0:0*/ __Vintraval_hba1301e0__0;
        CData/*0:0*/ __Vintraval_h169f2855__0;
        CData/*0:0*/ __Vintraval_h0bef7dc4__0;
        CData/*0:0*/ __Vintraval_h3d1b3f67__0;
        CData/*0:0*/ __Vintraval_h1fe51221__0;
        CData/*0:0*/ __Vintraval_h976e9f20__0;
        CData/*0:0*/ __Vintraval_h68841747__0;
        CData/*0:0*/ __Vintraval_he2a906ee__0;
        CData/*0:0*/ __Vintraval_haade853a__0;
        CData/*0:0*/ __Vintraval_h0cabcd0c__0;
        CData/*0:0*/ __Vintraval_h47a52208__0;
        CData/*0:0*/ __Vintraval_h003c33fa__0;
        CData/*0:0*/ __Vintraval_hb1cf9cfa__0;
        CData/*0:0*/ __Vintraval_h781c88d5__0;
    };
    struct {
        CData/*0:0*/ __Vintraval_h26f19c29__0;
        CData/*0:0*/ __Vintraval_h5f126466__0;
        CData/*0:0*/ __Vintraval_h5f05108d__0;
        CData/*0:0*/ __Vintraval_hf76e55d2__0;
        CData/*0:0*/ __Vintraval_hdf9c3958__0;
        CData/*0:0*/ __Vintraval_h57734d2b__0;
        CData/*0:0*/ __Vintraval_hda17ec5b__0;
        CData/*0:0*/ __Vintraval_h3837dd26__0;
        CData/*0:0*/ __Vintraval_h236a0ccc__0;
        CData/*0:0*/ __Vintraval_h4aea692e__0;
        CData/*0:0*/ __Vintraval_h4af255d8__0;
        CData/*0:0*/ __Vintraval_h8ec64077__0;
        CData/*0:0*/ __Vintraval_h64a81f5b__0;
        CData/*0:0*/ __Vintraval_had27ea80__0;
        CData/*0:0*/ __Vintraval_hbe394d53__0;
        CData/*0:0*/ __Vintraval_h7030be43__0;
        CData/*0:0*/ __Vintraval_hb630eeb0__0;
        CData/*0:0*/ __Vintraval_hb4f6411e__0;
        CData/*0:0*/ __Vintraval_h37258438__0;
        CData/*0:0*/ __Vintraval_ha7a83374__0;
        CData/*0:0*/ __Vintraval_h8476eee8__0;
        CData/*0:0*/ __Vintraval_h10902c28__0;
        CData/*0:0*/ __Vintraval_hadda94fa__0;
        CData/*0:0*/ __Vintraval_h22ab7d8d__0;
        CData/*0:0*/ __Vintraval_hf419bd6d__0;
        CData/*0:0*/ __Vintraval_h50e3d920__0;
        CData/*0:0*/ __Vintraval_hdb474428__0;
        CData/*0:0*/ __Vintraval_h7a705ca3__0;
        CData/*0:0*/ __Vintraval_h782598e2__0;
        CData/*0:0*/ __Vintraval_he6d15efd__0;
        VL_IN16(A,9,0);
        SData/*9:0*/ marked_a;
        IData/*31:0*/ i;
        VlUnpacked<CData/*7:0*/, 1024> mem;
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
    Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1() = default;
    ~Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1() = default;
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
