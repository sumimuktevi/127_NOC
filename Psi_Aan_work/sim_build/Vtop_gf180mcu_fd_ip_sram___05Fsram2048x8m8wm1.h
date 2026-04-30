// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_GF180MCU_FD_IP_SRAM___05FSRAM2048X8M8WM1_H_
#define VERILATED_VTOP_GF180MCU_FD_IP_SRAM___05FSRAM2048X8M8WM1_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1 final {
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
        CData/*0:0*/ __VdfgRegularize_hf8f4de22_0_0;
        CData/*0:0*/ __Vintraval_hce1525b0__0;
        CData/*0:0*/ __Vintraval_hbc94486e__0;
        CData/*0:0*/ __Vintraval_hc4205410__0;
        CData/*0:0*/ __Vintraval_hcb1d5b1c__0;
        CData/*0:0*/ __Vintraval_h1a5b0571__0;
        CData/*0:0*/ __Vintraval_h9b2b2d0b__0;
        CData/*0:0*/ __Vintraval_h8e14c3a6__0;
        CData/*0:0*/ __Vintraval_h241ff8c0__0;
        CData/*0:0*/ __Vintraval_h93e74c43__0;
        CData/*0:0*/ __Vintraval_h45cdee9e__0;
        CData/*0:0*/ __Vintraval_h0f7a054a__0;
        CData/*0:0*/ __Vintraval_h1e332950__0;
        CData/*0:0*/ __Vintraval_h9144a453__0;
        CData/*0:0*/ __Vintraval_h17c92098__0;
        CData/*0:0*/ __Vintraval_h269cc72f__0;
    };
    struct {
        CData/*0:0*/ __Vintraval_hf8fa4d60__0;
        CData/*0:0*/ __Vintraval_h803ac5c6__0;
        CData/*0:0*/ __Vintraval_h697b6f1e__0;
        CData/*0:0*/ __Vintraval_h840a00e7__0;
        CData/*0:0*/ __Vintraval_h24622a07__0;
        CData/*0:0*/ __Vintraval_hd9ba07c1__0;
        CData/*0:0*/ __Vintraval_he961b791__0;
        CData/*0:0*/ __Vintraval_hc4c561dd__0;
        CData/*0:0*/ __Vintraval_hfa810f6a__0;
        CData/*0:0*/ __Vintraval_h8abc1a09__0;
        CData/*0:0*/ __Vintraval_h7a9b8707__0;
        CData/*0:0*/ __Vintraval_hff1d604c__0;
        CData/*0:0*/ __Vintraval_hf2c18552__0;
        CData/*0:0*/ __Vintraval_hea7837d9__0;
        CData/*0:0*/ __Vintraval_hab13ef0a__0;
        CData/*0:0*/ __Vintraval_h0035904f__0;
        CData/*0:0*/ __Vintraval_h12a900ca__0;
        CData/*0:0*/ __Vintraval_h245f5e37__0;
        CData/*0:0*/ __Vintraval_hb3e0efad__0;
        CData/*0:0*/ __Vintraval_h045eb127__0;
        CData/*0:0*/ __Vintraval_h74eeffde__0;
        CData/*0:0*/ __Vintraval_h67cae598__0;
        CData/*0:0*/ __Vintraval_h06b53db8__0;
        CData/*0:0*/ __Vintraval_hbf793e9d__0;
        CData/*0:0*/ __Vintraval_ha79cea7d__0;
        CData/*0:0*/ __Vintraval_hb8d9ddb0__0;
        CData/*0:0*/ __Vintraval_hb2eba09e__0;
        CData/*0:0*/ __Vintraval_h797042cd__0;
        CData/*0:0*/ __Vintraval_heac334a9__0;
        CData/*0:0*/ __Vintraval_h08a684d4__0;
        VL_IN16(A,10,0);
        SData/*10:0*/ marked_a;
        IData/*31:0*/ i;
        VlUnpacked<CData/*7:0*/, 2048> mem;
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
    Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1() = default;
    ~Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1() = default;
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
