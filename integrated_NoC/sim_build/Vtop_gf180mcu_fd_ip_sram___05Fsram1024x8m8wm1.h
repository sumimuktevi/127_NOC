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
        CData/*0:0*/ CLK;
        CData/*0:0*/ CEN;
        CData/*0:0*/ GWEN;
        CData/*7:0*/ WEN;
        CData/*7:0*/ D;
        CData/*7:0*/ Q;
        CData/*0:0*/ VDD;
        CData/*0:0*/ VSS;
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
        CData/*0:0*/ VDD__out;
        CData/*0:0*/ VDD__en;
        CData/*0:0*/ VSS__out;
        CData/*0:0*/ VSS__en;
        CData/*0:0*/ __VdfgRegularize_hefcf2c13_0_0;
        CData/*0:0*/ __Vintraval_h41852b86__0;
        CData/*0:0*/ __Vintraval_h79309687__0;
        CData/*0:0*/ __Vintraval_h40a745c8__0;
        CData/*0:0*/ __Vintraval_h25bf2e72__0;
        CData/*0:0*/ __Vintraval_hb10a1ac2__0;
        CData/*0:0*/ __Vintraval_hf3959421__0;
        CData/*0:0*/ __Vintraval_h66f6d907__0;
        CData/*0:0*/ __Vintraval_h64df0bc8__0;
        CData/*0:0*/ __Vintraval_h1d014f68__0;
        CData/*0:0*/ __Vintraval_h18c44b11__0;
        CData/*0:0*/ __Vintraval_h2b3c50b3__0;
        CData/*0:0*/ __Vintraval_hb8f6b2c0__0;
        CData/*0:0*/ __Vintraval_hf747e08f__0;
        CData/*0:0*/ __Vintraval_hc371d31b__0;
        CData/*0:0*/ __Vintraval_h809e2306__0;
    };
    struct {
        CData/*0:0*/ __Vintraval_hf5b6492b__0;
        CData/*0:0*/ __Vintraval_h74583a2b__0;
        CData/*0:0*/ __Vintraval_h9dbf14fe__0;
        CData/*0:0*/ __Vintraval_h18e0dfb9__0;
        CData/*0:0*/ __Vintraval_h2938094b__0;
        CData/*0:0*/ __Vintraval_hf71e1088__0;
        CData/*0:0*/ __Vintraval_hf4d78089__0;
        CData/*0:0*/ __Vintraval_h67974164__0;
        CData/*0:0*/ __Vintraval_he4ef2e27__0;
        CData/*0:0*/ __Vintraval_h01043a23__0;
        CData/*0:0*/ __Vintraval_he991c22f__0;
        CData/*0:0*/ __Vintraval_h7005a6ef__0;
        CData/*0:0*/ __Vintraval_hbbff48ac__0;
        CData/*0:0*/ __Vintraval_h92249f97__0;
        CData/*0:0*/ __Vintraval_h382ba90e__0;
        CData/*0:0*/ __Vintraval_h5a23a508__0;
        CData/*0:0*/ __Vintraval_h0360147b__0;
        CData/*0:0*/ __Vintraval_h8b9042de__0;
        CData/*0:0*/ __Vintraval_h30ca2840__0;
        CData/*0:0*/ __Vintraval_h316ba6b7__0;
        CData/*0:0*/ __Vintraval_h42515529__0;
        CData/*0:0*/ __Vintraval_h2077df6d__0;
        CData/*0:0*/ __Vintraval_hc425221e__0;
        CData/*0:0*/ __Vintraval_h4ade8445__0;
        CData/*0:0*/ __Vintraval_h35b14be4__0;
        CData/*0:0*/ __Vintraval_hf0f3cff7__0;
        CData/*0:0*/ __Vintraval_hcd52bc78__0;
        CData/*0:0*/ __Vintraval_hba3bcfaa__0;
        CData/*0:0*/ __Vintraval_hf2722b37__0;
        CData/*0:0*/ __Vintraval_h65bd71ba__0;
        SData/*9:0*/ A;
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
    Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1();
    ~Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_gf180mcu_fd_ip_sram___05Fsram1024x8m8wm1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
