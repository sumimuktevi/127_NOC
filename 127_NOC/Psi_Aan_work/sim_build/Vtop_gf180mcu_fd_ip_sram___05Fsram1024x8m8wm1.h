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
        CData/*0:0*/ __Vintraval_h7a1d36d7__0;
        CData/*0:0*/ __Vintraval_h62f7cadf__0;
        CData/*0:0*/ __Vintraval_h707e406a__0;
        CData/*0:0*/ __Vintraval_h6b1b7eb1__0;
        CData/*0:0*/ __Vintraval_h6085e9ef__0;
        CData/*0:0*/ __Vintraval_h0500550d__0;
        CData/*0:0*/ __Vintraval_h7f3b9b22__0;
        CData/*0:0*/ __Vintraval_hff4c6fc9__0;
        CData/*0:0*/ __Vintraval_h2ab1d14e__0;
        CData/*0:0*/ __Vintraval_h003138fc__0;
        CData/*0:0*/ __Vintraval_h5c6d7ae2__0;
        CData/*0:0*/ __Vintraval_h301d6992__0;
        CData/*0:0*/ __Vintraval_hafc6ee60__0;
        CData/*0:0*/ __Vintraval_h71d9f349__0;
        CData/*0:0*/ __Vintraval_hf1aad9c7__0;
        CData/*0:0*/ __Vintraval_ha7f0c6b6__0;
    };
    struct {
        CData/*0:0*/ __Vintraval_hd7be28d6__0;
        CData/*0:0*/ __Vintraval_hc013fd0f__0;
        CData/*0:0*/ __Vintraval_hf1f2d2e0__0;
        CData/*0:0*/ __Vintraval_h382e96f1__0;
        CData/*0:0*/ __Vintraval_h13f24ec1__0;
        CData/*0:0*/ __Vintraval_h0fe4c450__0;
        CData/*0:0*/ __Vintraval_hc2eebe63__0;
        CData/*0:0*/ __Vintraval_hd6d35abc__0;
        CData/*0:0*/ __Vintraval_h6a8a6d0d__0;
        CData/*0:0*/ __Vintraval_had4d342a__0;
        CData/*0:0*/ __Vintraval_ha39d7e3a__0;
        CData/*0:0*/ __Vintraval_hce92758f__0;
        CData/*0:0*/ __Vintraval_hff6ba9df__0;
        CData/*0:0*/ __Vintraval_hc87ba078__0;
        CData/*0:0*/ __Vintraval_h7dad4e14__0;
        CData/*0:0*/ __Vintraval_ha6b7bb38__0;
        CData/*0:0*/ __Vintraval_h61d9e442__0;
        CData/*0:0*/ __Vintraval_h03fcf26e__0;
        CData/*0:0*/ __Vintraval_h352b6075__0;
        CData/*0:0*/ __Vintraval_h4bd09105__0;
        CData/*0:0*/ __Vintraval_haaa6a66f__0;
        CData/*0:0*/ __Vintraval_hdcf85b36__0;
        CData/*0:0*/ __Vintraval_hfbbba5d5__0;
        CData/*0:0*/ __Vintraval_h6a4c4fb2__0;
        CData/*0:0*/ __Vintraval_h1ec27f8b__0;
        CData/*0:0*/ __Vintraval_h87a819b4__0;
        CData/*0:0*/ __Vintraval_h625edd11__0;
        CData/*0:0*/ __Vintraval_h94ae2250__0;
        CData/*0:0*/ __Vintraval_hfa8f34c4__0;
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
