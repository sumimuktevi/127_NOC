// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_GF180MCU_FD_IP_SRAM___05FSRAM2048X8M8WM1_H_
#define VERILATED_VTOP_GF180MCU_FD_IP_SRAM___05FSRAM2048X8M8WM1_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(CLK,0,0);
        VL_IN8(CEN,0,0);
        CData/*0:0*/ cen_flag;
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
        CData/*0:0*/ clk_dly;
        CData/*0:0*/ cen_dly;
        CData/*0:0*/ cen_fell;
        CData/*0:0*/ cen_not_rst;
        VL_IN8(GWEN,0,0);
        VL_IN8(WEN,7,0);
        VL_IN8(D,7,0);
        VL_OUT8(Q,7,0);
        VL_IN8(VDD,0,0);
        VL_IN8(VSS,0,0);
        CData/*7:0*/ qo_reg;
        CData/*0:0*/ write_flag;
        CData/*0:0*/ read_flag;
        CData/*0:0*/ no_st_viol;
        CData/*0:0*/ no_hd_viol;
        CData/*0:0*/ no_ck_viol;
        CData/*0:0*/ write_flag_dly;
        CData/*0:0*/ read_flag_dly;
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
        CData/*0:0*/ __Vintraval_h8990eb3f__0;
        CData/*0:0*/ __Vintraval_h10239b0f__0;
        CData/*0:0*/ __Vintraval_h689f03a8__0;
        CData/*0:0*/ __Vintraval_hd7a2106f__0;
        CData/*0:0*/ __Vintraval_h051f8c34__0;
        CData/*0:0*/ __Vintraval_hc0c3468f__0;
        CData/*0:0*/ __Vintraval_h75f810ed__0;
        CData/*0:0*/ __Vintraval_h97b2fc91__0;
        CData/*0:0*/ __Vintraval_hff82c5ca__0;
        CData/*0:0*/ __Vintraval_hd394d84f__0;
        CData/*0:0*/ __Vintraval_heba01726__0;
        CData/*0:0*/ __Vintraval_h46861c3c__0;
        CData/*0:0*/ __Vintraval_h848bddf7__0;
        CData/*0:0*/ __Vintraval_h0753c133__0;
        CData/*0:0*/ __Vintraval_ha207cc77__0;
        CData/*0:0*/ __Vintraval_hea5ba220__0;
    };
    struct {
        CData/*0:0*/ __Vintraval_h7d47414b__0;
        CData/*0:0*/ __Vintraval_haa6a25cf__0;
        CData/*0:0*/ __Vintraval_h5eda93c8__0;
        CData/*0:0*/ __Vintraval_h02a4be3d__0;
        CData/*0:0*/ __Vintraval_h1f445b8f__0;
        CData/*0:0*/ __Vintraval_hb61cbb2f__0;
        CData/*0:0*/ __Vintraval_h908471a9__0;
        CData/*0:0*/ __Vintraval_hd9bcde74__0;
        CData/*0:0*/ __Vintraval_h57e8b792__0;
        CData/*0:0*/ __Vintraval_he556ac61__0;
        CData/*0:0*/ __Vintraval_hc2afda9c__0;
        CData/*0:0*/ __Vintraval_ha70f65ec__0;
        CData/*0:0*/ __Vintraval_h77976cc3__0;
        CData/*0:0*/ __Vintraval_hc740299a__0;
        CData/*0:0*/ __Vintraval_ha36e4e3e__0;
        CData/*0:0*/ __Vintraval_he99b1d6f__0;
        CData/*0:0*/ __Vintraval_hc691fd93__0;
        CData/*0:0*/ __Vintraval_h3032df0b__0;
        CData/*0:0*/ __Vintraval_h97dc9405__0;
        CData/*0:0*/ __Vintraval_h2abee442__0;
        CData/*0:0*/ __Vintraval_hf52b88cb__0;
        CData/*0:0*/ __Vintraval_h8d022070__0;
        CData/*0:0*/ __Vintraval_h09e0a280__0;
        CData/*0:0*/ __Vintraval_hc4e79ebe__0;
        CData/*0:0*/ __Vintraval_h510c8f23__0;
        CData/*0:0*/ __Vintraval_h744f7693__0;
        CData/*0:0*/ __Vintraval_hda101fb2__0;
        CData/*0:0*/ __Vintraval_hefd6443b__0;
        CData/*0:0*/ __Vintraval_h67a3bccb__0;
        VL_IN16(A,10,0);
        SData/*10:0*/ marked_a;
        IData/*31:0*/ i;
        VlUnpacked<CData/*7:0*/, 2048> mem;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

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
    Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1();
    VL_UNCOPYABLE(Vtop_gf180mcu_fd_ip_sram___05Fsram2048x8m8wm1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
