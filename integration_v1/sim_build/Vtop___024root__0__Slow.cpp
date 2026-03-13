// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__CLK__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_fell__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_fell;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__clk__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__rst__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_clk__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_clk__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_clk__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__clk__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_clk__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_clk__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_clk__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__clk__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__clk__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_clk__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_not_rst__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_not_rst;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__clk_dly__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__clk_dly;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckh__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckh;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckl__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckl;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tcyc__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tcyc;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tah__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tah;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tas__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tas;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tch__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tch;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tcs__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tcs;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tdh__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tdh;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tds__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tds;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twh__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twh;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twih__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twih;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twis__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twis;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tws__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tws;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__clk__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__CEN__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__CEN;
    vlSelfRef.__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_flag__0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_flag;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mdu_ready = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mdu_rd = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__sig_en = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__halt_en = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__sim_ack = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__iscomp = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_mdu_valid = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mdu_op = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tcyc = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckh = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckl = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tcs = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tas = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tds = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tws = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twis = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tch = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tah = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tdh = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twh = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twih = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__marked_a = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__qo_reg = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__clk_dly = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__write_flag_dly = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__read_flag_dly = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_dly = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_fell = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_not_rst = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000400U, vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__i)) {
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__mem[(0x000003ffU 
                                                                            & vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__i)] = 0U;
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__i 
            = ((IData)(1U) + vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__i);
    }
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__i_timer_irq = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__WEN = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__north_in = 0ULL;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__south_in = 0ULL;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__east_in = 0ULL;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__west_in = 0ULL;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__ne_in = 0ULL;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__nw_in = 0ULL;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__se_in = 0ULL;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sw_in = 0ULL;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__VDD = 0U;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__VSS = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("noc/blinker_tile_wrapper.v", 4, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtop___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*3:0*/, 128> Vtop__ConstPool__TABLE_ha7a8b8b4_0;
extern const VlUnpacked<CData/*3:0*/, 16> Vtop__ConstPool__TABLE_h0ab4ebb5_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_8;
    blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_8 = 0;
    CData/*0:0*/ blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_9;
    blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_9 = 0;
    CData/*0:0*/ blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_16;
    blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_16 = 0;
    CData/*0:0*/ blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_17;
    blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_17 = 0;
    CData/*0:0*/ blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_18;
    blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_18 = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__mem_0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
        [0U];
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__mem_1 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
        [1U];
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__mem_2 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
        [2U];
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__mem_3 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
        [3U];
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_ext_rd 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mdu_rd;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__no_ck_viol 
        = (1U & (~ ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tcyc) 
                    | ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckh) 
                       | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckl)))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__north_out 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__n_out;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__south_out 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__s_out;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__east_out 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__e_out;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__west_out 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__w_out;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__ne_out 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__ne_out;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__nw_out 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__nw_out;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__se_out 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__se_out;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sw_out 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__sw_out;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_ext_ready 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mdu_ready;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_mdu_valid 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_mdu_valid;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__no_st_viol 
        = (1U & (~ ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tcs) 
                    | ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tas) 
                       | ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tds) 
                          | ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twis) 
                             | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tws)))))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__no_hd_viol 
        = (1U & (~ ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tch) 
                    | ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tah) 
                       | ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tdh) 
                          | ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twh) 
                             | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twih)))))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_ext_rs1 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__we 
        = (0x000000ffU & (~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__WEN)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ebreak 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op20;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ext_funct3 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bufreg_sh_signed 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__imm30;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_timer_irq 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__i_timer_irq;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__jump 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_jump;
    vlSelfRef.blinker_tile_wrapper__DOT__boot_data 
        = vlSelfRef.boot_data;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_ren 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rgate) 
           & (0U == (6U & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rcnt))));
    vlSelfRef.blinker_tile_wrapper__DOT__boot_addr 
        = vlSelfRef.boot_addr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en 
        = (1U & ((~ ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                     >> 4U)) | (IData)((1U == (3U & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bufreg_imm_en 
        = (1U & (~ ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                    >> 2U)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__wb_dat_r2c 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_dat_i;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bufreg_clr_lsb 
        = (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
            >> 4U) & ((0U == (3U & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))) 
                      | (3U == (3U & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode)))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mtval_pc 
        = (1U & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 4U));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_mem_en 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mdu_op) 
           | (0U == (5U & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_source 
        = (3U & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_csr_imm 
        = (1U & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm19_12_20) 
                 >> 4U));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_d_sel 
        = (1U & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                 >> 2U));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mem_signed 
        = (1U & (~ ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                    >> 2U)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wcnt 
        = (0x0000001fU & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rcnt) 
                          - (IData)(4U)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__e_in 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__east_in;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__n_in 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__north_in;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__ne_in 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__ne_in;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__nw_in 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__nw_in;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__s_in 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__south_in;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__se_in 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__se_in;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__sw_in 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sw_in;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__w_in 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__west_in;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_bool_op 
        = (3U & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rtrig0 
        = (1U == (7U & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rcnt)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mdu_op 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mdu_op;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r_w 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r;
    vlSelfRef.blinker_tile_wrapper__DOT__clk = vlSelfRef.clk;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_iscomp 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__iscomp;
    vlSelfRef.blinker_tile_wrapper__DOT__boot_wen = vlSelfRef.boot_wen;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_mem_bytecnt 
        = (3U & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt) 
                 >> 1U));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bne_or_bge 
        = (1U & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_cond_branch 
        = (1U & (~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_rs1_addr 
        = (0x0000001fU & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm19_12_20) 
                          >> 4U));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_alu_en 
        = (IData)(((4U == (0x15U & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))) 
                   & (~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mdu_op))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_rs2_addr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm24_20;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_eq 
        = (0U == (3U & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                        >> 1U)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt0to3 
        = (0U == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel 
        = ((4U & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3)) 
           | (((1U == (3U & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                             >> 1U))) << 1U) | (0U 
                                                == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_rd_addr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm11_7;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt12to31 
        = (IData)((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt) 
                    >> 2U) | (3U == (3U & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt)))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_adr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_ibus_adr;
    blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_8 
        = (IData)((0x11U == (0x11U & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_ack 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_wb_ack;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mem_cmd 
        = (1U & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 3U));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_dat 
        = (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
            << 0x00000018U) | vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dlo);
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_addr 
        = ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op20) 
             & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op26)) 
            << 1U) | (1U & ((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op26)) 
                            | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op21))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc 
        = (1U & vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_ibus_adr);
    blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_16 
        = (IData)((5U == (5U & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig 
        = (1U & (~ (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                     >> 1U) & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                               | ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                                  >> 2U)))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_sub 
        = (1U & (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                  >> 1U) | ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                            | ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                 >> 3U) & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__imm30)) 
                               | ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                  >> 4U)))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wtrig0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rtrig1;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__csr_valid 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op20) 
           | ((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op21)) 
              & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op26)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT____VdfgRegularize_h6c257bca_0_0 
        = (1U & (~ ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__halt_en) 
                    | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__sig_en))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_branch_op 
        = (1U & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 4U));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wtrig1 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__gen_wtrig_ratio_neq_2__DOT__wtrig0_r;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_dbus_en 
        = (IData)((0U == (0x14U & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_rdata0 
        = (1U & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rdata0));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_dbus_adr 
        = (0xfffffffcU & vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data);
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_sh_right 
        = (1U & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                 >> 2U));
    vlSelfRef.blinker_tile_wrapper__DOT__rst = vlSelfRef.rst;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_shift_op 
        = (1U & (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                  >> 2U) & ((~ ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                                >> 1U)) & (~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mdu_op)))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mem_word 
        = (1U & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
                 >> 1U));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mem_half 
        = (1U & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__misalign_trap_sync 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__gen_csr__DOT__misalign_trap_sync_r;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_lsb 
        = (3U & vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data);
    vlSelfRef.blinker_tile_wrapper__DOT__boot_mode 
        = vlSelfRef.boot_mode;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_en 
        = (0U != (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb));
    blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_18 
        = (IData)((0U == (0x11U & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_op_b_source 
        = (1U & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 3U));
    __Vtableidx2 = (((0U == (3U & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))) 
                     << 6U) | ((0x00000020U & ((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode)) 
                                               << 5U)) 
                               | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl 
        = Vtop__ConstPool__TABLE_ha7a8b8b4_0[__Vtableidx2];
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__Q 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__qo_reg;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__new_irq 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_new_irq;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__cnt_r 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb;
    blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_9 
        = (IData)((0x14U == (0x14U & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.blinker_tile_wrapper__DOT__north_out 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__north_out;
    vlSelfRef.blinker_tile_wrapper__DOT__south_out 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__south_out;
    vlSelfRef.blinker_tile_wrapper__DOT__east_out = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__east_out;
    vlSelfRef.blinker_tile_wrapper__DOT__west_out = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__west_out;
    vlSelfRef.blinker_tile_wrapper__DOT__ne_out = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__ne_out;
    vlSelfRef.blinker_tile_wrapper__DOT__nw_out = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__nw_out;
    vlSelfRef.blinker_tile_wrapper__DOT__se_out = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__se_out;
    vlSelfRef.blinker_tile_wrapper__DOT__sw_out = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sw_out;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_mdu_ready 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_ext_ready;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mdu_valid 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_mdu_valid;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ext_rs1 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_ext_rs1;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ebreak 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ebreak;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ext_funct3 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ext_funct3;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bufreg_sh_signed 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bufreg_sh_signed;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_timer_irq 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_timer_irq;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_jump 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__jump;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__boot_data 
        = vlSelfRef.blinker_tile_wrapper__DOT__boot_data;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_ren 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_ren;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__boot_addr 
        = vlSelfRef.blinker_tile_wrapper__DOT__boot_addr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bufreg_rs1_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bufreg_imm_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bufreg_imm_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__i_wb_rdt 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__wb_dat_r2c;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bufreg_clr_lsb 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bufreg_clr_lsb;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mtval_pc 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mtval_pc;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_rd_mem_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_mem_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_source 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_source;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_imm 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_csr_imm;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_d_sel 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_d_sel;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mem_signed 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mem_signed;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_n = 0ULL;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_s = 0ULL;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_e = 0ULL;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_w = 0ULL;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne = 0ULL;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw = 0ULL;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_se = 0ULL;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw = 0ULL;
    if ((1U & (IData)((vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__inject_flit 
                       >> 0x21U)))) {
        vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit 
            = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__inject_flit;
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row 
            = (3U & (IData)((vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit 
                             >> 0x1fU)));
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col 
            = (3U & (IData)((vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit 
                             >> 0x1dU)));
        if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
              == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
             & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_s 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_n 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_e 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_w 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit;
        }
    }
    if ((1U & (IData)((vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__n_in 
                       >> 0x21U)))) {
        vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit 
            = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__n_in;
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row 
            = (3U & (IData)((vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit 
                             >> 0x1fU)));
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col 
            = (3U & (IData)((vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit 
                             >> 0x1dU)));
        if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
              == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
             & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_s 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_n 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_e 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_w 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit;
        }
    }
    if ((1U & (IData)((vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__s_in 
                       >> 0x21U)))) {
        vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit 
            = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__s_in;
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row 
            = (3U & (IData)((vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit 
                             >> 0x1fU)));
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col 
            = (3U & (IData)((vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit 
                             >> 0x1dU)));
        if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
              == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
             & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_s 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_n 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_e 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_w 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit;
        }
    }
    if ((1U & (IData)((vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__e_in 
                       >> 0x21U)))) {
        vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit 
            = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__e_in;
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row 
            = (3U & (IData)((vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit 
                             >> 0x1fU)));
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col 
            = (3U & (IData)((vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit 
                             >> 0x1dU)));
        if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
              == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
             & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_s 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_n 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_e 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_w 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit;
        }
    }
    if ((1U & (IData)((vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__w_in 
                       >> 0x21U)))) {
        vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit 
            = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__w_in;
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row 
            = (3U & (IData)((vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit 
                             >> 0x1fU)));
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col 
            = (3U & (IData)((vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit 
                             >> 0x1dU)));
        if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
              == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
             & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_s 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_n 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_e 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_w 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit;
        }
    }
    if ((1U & (IData)((vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__ne_in 
                       >> 0x21U)))) {
        vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit 
            = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__ne_in;
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row 
            = (3U & (IData)((vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit 
                             >> 0x1fU)));
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col 
            = (3U & (IData)((vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit 
                             >> 0x1dU)));
        if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
              == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
             & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_s 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_n 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_e 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_w 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit;
        }
    }
    if ((1U & (IData)((vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__nw_in 
                       >> 0x21U)))) {
        vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit 
            = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__nw_in;
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row 
            = (3U & (IData)((vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit 
                             >> 0x1fU)));
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col 
            = (3U & (IData)((vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit 
                             >> 0x1dU)));
        if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
              == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
             & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_s 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_n 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_e 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_w 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit;
        }
    }
    if ((1U & (IData)((vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__se_in 
                       >> 0x21U)))) {
        vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit 
            = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__se_in;
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row 
            = (3U & (IData)((vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit 
                             >> 0x1fU)));
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col 
            = (3U & (IData)((vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit 
                             >> 0x1dU)));
        if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
              == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
             & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_s 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_n 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_e 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_w 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit;
        }
    }
    if ((1U & (IData)((vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__sw_in 
                       >> 0x21U)))) {
        vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit 
            = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__sw_in;
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row 
            = (3U & (IData)((vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit 
                             >> 0x1fU)));
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col 
            = (3U & (IData)((vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit 
                             >> 0x1dU)));
        if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
              == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
             & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_se 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit;
        } else if ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                     < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row)) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                       < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col)))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_s 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row) 
                    < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_n 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    > (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_e 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit;
        } else if (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col) 
                    < (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col))) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_w 
                = vlSelfRef.__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit;
        }
    }
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_bool_op 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_bool_op;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mdu_op 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mdu_op;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__clk 
        = vlSelfRef.blinker_tile_wrapper__DOT__clk;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__boot_wen 
        = vlSelfRef.blinker_tile_wrapper__DOT__boot_wen;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_bytecnt 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_mem_bytecnt;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bne_or_bge 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bne_or_bge;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_cond_branch 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_cond_branch;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs1_addr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_rs1_addr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_rd_alu_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_alu_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs2_addr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_rs2_addr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_eq 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_eq;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt0to3 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt0to3;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_rd_sel 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_addr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_rd_addr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt12to31 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt12to31;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mepc 
        = (1U & vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_adr);
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ibus_adr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_adr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ctrl_jal_or_jalr 
        = blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_8;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_op 
        = (1U & (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                  >> 2U) | ((~ ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                >> 2U)) & ((IData)(blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_8) 
                                           | (IData)(
                                                     (0U 
                                                      == 
                                                      (9U 
                                                       & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))))))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_mem_ack 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_ack;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mem_cmd 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mem_cmd;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_dat 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_dat;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_addr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_addr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ctrl_utype 
        = ((~ ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
               >> 4U)) & (IData)(blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_16));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_sig 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_sub 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_sub;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_branch_op 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_branch_op;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_wen 
        = (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wen0_r) 
            & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wtrig0)) 
           | ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wen1_r) 
              & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wtrig1)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_dbus_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_dbus_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rdata0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_rdata0;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_adr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_dbus_adr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_sh_right 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_sh_right;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__rst 
        = vlSelfRef.blinker_tile_wrapper__DOT__rst;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_shift_op 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_shift_op;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mem_word 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mem_word;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mem_half 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mem_half;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__lsb 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_lsb;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__boot_mode 
        = vlSelfRef.blinker_tile_wrapper__DOT__boot_mode;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h9b9aabfb_0_2 
        = ((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_en)) 
           & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__init_done));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_two_stage_op 
        = (1U & ((~ ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                     >> 2U)) | ((IData)(((1U == (3U 
                                                 & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3))) 
                                         & (IData)(blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_18))) 
                                | ((IData)(((2U == 
                                             (6U & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3))) 
                                            & (IData)(blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_18))) 
                                   | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mdu_op)))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_op_b_source 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_op_b_source;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_immdec_ctrl 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_rdata 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__Q;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_new_irq 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__new_irq;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt7 
        = ((1U == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 3U));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt2 
        = ((0U == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 2U));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt1 
        = ((0U == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 1U));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt3 
        = ((0U == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 3U));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt11 
        = ((2U == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 3U));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt12 
        = ((3U == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__cnt_r));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt0 
        = ((0U == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__cnt_r));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_done 
        = ((7U == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__cnt_r) 
              >> 3U));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ctrl_pc_rel 
        = ((0U == (7U & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))) 
           | ((3U == (3U & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode))) 
              | (((IData)(blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_9) 
                  & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op20)) 
                 | (0U == (3U & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                 >> 3U))))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ctrl_mret 
        = ((IData)(blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_9) 
           & ((~ (0U != (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3))) 
              & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op21)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__csr_op 
        = ((IData)(blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_9) 
           & (0U != (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_e_op 
        = ((IData)(blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_9) 
           & ((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op21)) 
              & (~ (0U != (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3)))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_imm_en 
        = ((IData)(blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_9) 
           & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3) 
              >> 2U));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mdu_rs1 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ext_rs1;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ebreak 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ebreak;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ext_funct3 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ext_funct3;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_sh_signed 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bufreg_sh_signed;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mtip 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_timer_irq;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_ren 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_ren;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_rs1_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bufreg_rs1_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_imm_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bufreg_imm_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_ext_rdt 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__i_wb_rdt;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_clr_lsb 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bufreg_clr_lsb;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mtval_pc 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mtval_pc;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_mem_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_rd_mem_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_source 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_source;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_imm 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_imm;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_d_sel 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_d_sel;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_signed 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mem_signed;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_bool_op 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_bool_op;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_mdu_op 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mdu_op;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_mdu_op 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mdu_op;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_mdu_op 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mdu_op;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__clk 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__clk;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__CLK 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__clk;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__i_clk 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__clk;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_bytecnt;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_bytecnt 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_bytecnt;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bne_or_bge 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bne_or_bge;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cond_branch 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_cond_branch;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rs1_raddr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs1_addr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_alu_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_rd_alu_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rs2_raddr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs2_addr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_cmp_eq 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_eq;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt0to3 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt0to3;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_rd_sel 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_rd_sel;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_waddr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_addr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt12to31 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt12to31;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_adr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ibus_adr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ctrl_jal_or_jalr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ctrl_jal_or_jalr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_rd_op 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_op;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_mem_ack 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_mem_ack;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_we 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mem_cmd;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_shamt 
        = (7U & (vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_dat 
                 >> 0x00000018U));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ext_rs2 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_dat;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_dat 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_dat;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_addr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_addr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ctrl_utype 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ctrl_utype;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_cmp_sig 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_sig;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_sub 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_sub;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__branch_op 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_branch_op;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_wdata 
        = (0x000000ffU & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wtrig1)
                           ? (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wdata1_r)
                           : (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wdata0_r)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_wdata 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_wdata;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_wen 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_wen;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__dbus_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_dbus_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rdata0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rdata0;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_adr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_adr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__sh_right 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_sh_right;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__rst 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__rst;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__shift_op 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_shift_op;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_word 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mem_word;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_half 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mem_half;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_ctrl_misalign 
        = (1U & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__lsb) 
                 >> 1U));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__lsb;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_lsb 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__lsb;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__cpu_sram_init_pulse 
        = ((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__boot_mode)) 
           & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__boot_mode_q));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__i_rst 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__boot_mode) 
           | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__rst));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_cnt_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_cnt_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_two_stage_op 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_two_stage_op;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__op_b_sel 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_op_b_source;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec_ctrl 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_immdec_ctrl;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__i_sram_rdata 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_rdata;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt7 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt7;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt2 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt2;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt1 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt1;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt3 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt3;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt11 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt11;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt12 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt12;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt0;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_done 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_done;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ctrl_pc_rel 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ctrl_pc_rel;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ctrl_mret 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ctrl_mret;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_csr_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__csr_op;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__csr_op) 
           & ((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op20)) 
              & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op21)));
    blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_17 
        = ((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op26)) 
           & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__csr_op));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_en 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__csr_op) 
           & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__csr_valid));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_e_op 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_e_op;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_immdec_en 
        = ((((IData)((1U != (0x1dU & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode)))) 
             << 3U) | (((IData)(blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_9) 
                        | (8U != (9U & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode)))) 
                       << 2U)) | ((((1U == (3U & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                                  >> 1U))) 
                                    | ((IData)(blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_16) 
                                       | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_imm_en))) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_op)))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_imm_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_imm_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_ebreak 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ebreak;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mdu_op 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ext_funct3;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_sh_signed 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_sh_signed;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__timer_irq 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mtip) 
           & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mie_mtie) 
              & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_ren 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_ren;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_rs1_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_rs1_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_imm_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_imm_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_ext_rdt 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_ext_rdt;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_clr_lsb 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_clr_lsb;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mem_op 
        = (1U & (~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mtval_pc)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mtval_pc;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_mem_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_source;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_d_sel 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_d_sel;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_signed 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_signed;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_bool_op 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_bool_op;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__clk_dly 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__CLK;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_clk 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__i_clk;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_clk 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__i_clk;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bne_or_bge;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_cond_branch 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cond_branch;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rreg0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rs1_raddr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_alu_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_alu_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_cmp_eq;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1 
        = (1U & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_rd_sel) 
                 >> 1U));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rd_sel 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_rd_sel;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_adr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_adr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__jal_or_jalr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ctrl_jal_or_jalr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_op 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_rd_op;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mem_cmd 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_we;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_we 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_we;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mdu_rs2 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ext_rs2;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_dat 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_dat;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_addr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_addr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__utype 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ctrl_utype;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_cmp_sig;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_sub 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_sub;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_branch_op 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__branch_op;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_wdata 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_wdata;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_wen 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_wen;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_dbus_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__dbus_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rdata0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rdata0;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_adr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_adr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_right_shift_op 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__sh_right;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_right 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__sh_right;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_sh_right 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__sh_right;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_shift_op 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__shift_op;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_shift_op 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__shift_op;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_shift_op 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__shift_op;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_word 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_word;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_half 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_half;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__byte_valid 
        = (1U & ((IData)((0U == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb))) 
                 | ((IData)((0U == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt))) 
                    | (((~ ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt) 
                            >> 1U)) & (~ ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb) 
                                          >> 1U))) 
                       | (((~ ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt) 
                               >> 1U)) & (~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb))) 
                          | ((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt)) 
                             & (~ ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb) 
                                   >> 1U))))))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_q 
        = (((3U == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb)) 
            & (vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_dat 
               >> 0x00000018U)) | (((2U == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb)) 
                                    & (vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_dat 
                                       >> 0x00000010U)) 
                                   | (((1U == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb)) 
                                       & (vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_dat 
                                          >> 8U)) | 
                                      ((0U == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb)) 
                                       & vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_dat))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_rst 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__i_rst;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_rst 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__i_rst;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__two_stage_op 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_two_stage_op;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__op_b_sel;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_ctrl 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec_ctrl;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_sram_rdata 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__i_sram_rdata;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_cnt7 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt7;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt7 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt7;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt2 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt2;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_cnt1 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt1;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt1;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt3 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt3;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt11 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt11;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt12 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt12;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_cnt0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt0;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt0;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cnt0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt0;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_cnt_done 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_done;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt_done 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_done;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_cnt_done 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_done;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_cnt_done 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_done;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__pc_rel 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ctrl_pc_rel;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mret 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ctrl_mret;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_rd_csr_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_csr_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_mcause_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_mie_en 
        = ((IData)(blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_17) 
           & ((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op20)) 
              & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op22)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en 
        = ((IData)(blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h16ce0fb9_0_17) 
           & ((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op22)) 
              & (~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op20))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__e_op 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_e_op;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_immdec_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_immdec_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_imm_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_imm_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_clk 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_clk;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_clk 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_clk;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__clk 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_clk;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rreg0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rreg0;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__jal_or_jalr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rd_op 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_op;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_we 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_we;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_dat 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_dat;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_dat 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_dat;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_utype 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__utype;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wdata 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_wdata;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wen 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_wen;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rs1 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rdata0;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_adr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_adr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_adr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_adr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__ext 
        = (0U != (vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_adr 
                  >> 0x0000001eU));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__dat_valid 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_mdu_op) 
           | ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_word) 
              | ((0U == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_bytecnt)) 
                 | ((~ ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_bytecnt) 
                        >> 1U)) & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_half)))));
    __Vtableidx1 = (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_half) 
                     << 3U) | (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_word) 
                                << 2U) | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_lsb)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__o_wb_sel 
        = Vtop__ConstPool__TABLE_h0ab4ebb5_0[__Vtableidx1];
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__o_misalign 
        = (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_lsb) 
            & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_half) 
               | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_word))) 
           | (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_lsb) 
               >> 1U) & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_word)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2_q 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_q;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_active 
        = (1U & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__boot_mode)
                  ? (~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__boot_wen))
                  : (~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__cpu_sram_init_pulse))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__CEN 
        = (1U & (~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_active)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_rst 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_rst;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rst 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_rst;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rst 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_rst;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_two_stage_op 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__two_stage_op;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_wb_rdt 
        = (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_sram_rdata) 
            << 0x00000018U) | vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_rdt);
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_rdata 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__regzero)
            ? 0U : (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_sram_rdata));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__plus_4 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_iscomp)
            ? (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1)
            : (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt2));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus 
        = (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt3) 
            & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie)) 
           | ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt11) 
              | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt12)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__clr_lsb 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_clr_lsb) 
           & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_cnt0));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_slt 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__cmp_r) 
           & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cnt0));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause 
        = (1U & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt0to3)
                  ? (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0)
                  : ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt_done) 
                     & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause31))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_pc_rel 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__pc_rel;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mret 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mret;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mret 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mret;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_csr_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_rd_csr_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_mcause_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_mcause_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_mie_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_mie_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_mstatus_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_e_op 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__e_op;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_e_op 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__e_op;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_immdec_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_csr_imm_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_imm_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_clk 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__clk;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__clk 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__clk;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_clk 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__clk;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_clk 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__clk;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_clk 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__clk;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__clk 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__clk;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__clk 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__clk;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_clk 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__clk;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__clk;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rreg0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rreg0;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_we 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_we;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_we 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_we;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_dat 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_dat;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_dat 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_dat;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs1 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rs1;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_adr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_adr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_adr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_adr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_sel 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__o_wb_sel;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_misalign 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__o_misalign;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_bufreg2_q 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2_q;
    if (((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__CEN)) 
         & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_dly))) {
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_fell = 1U;
    }
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_rst 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rst;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rst 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rst;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rst 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rst;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_init 
        = ((~ ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_new_irq) 
               | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__init_done))) 
           & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_two_stage_op));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_rdt 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_wb_rdt;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_rdata 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_rdata;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy 
        = (1U & (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc) 
                  + ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__plus_4) 
                     + (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r_w))) 
                 >> 1U));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4 
        = (1U & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc) 
                 + ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r_w) 
                    + (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__plus_4))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_a 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_pc_rel) 
           & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_csr_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_mcause_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_mie_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_mie_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_mstatus_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_mstatus_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_e_op) 
           | ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_new_irq) 
              | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__misalign_trap_sync)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_immdec_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__signbit 
        = ((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_csr_imm_en)) 
           & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm31));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rreg0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rreg0;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_we 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_we;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_we 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_we;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_dat 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_dat;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_dat 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_dat;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_rs1 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs1;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rs1 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs1;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rs1 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs1;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_adr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_adr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_adr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_adr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_sel 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_sel;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_mem_misalign 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_misalign;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__o_rd 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__dat_valid)
            ? (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_bufreg2_q)
            : ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_signed) 
               & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__signbit)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT____VdfgRegularize_hefcf2c13_0_0 
        = ((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__CEN)) 
           & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_fell));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc 
        = ((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rst)) 
           & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__ibus_cyc));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_pc_en 
        = ((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_init)) 
           & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_en));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_rd_en 
        = ((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_init)) 
           & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rd_op));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_done) 
           & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_init));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__init 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_init;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_mem_rdt 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_rdt;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_rf_rdata 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_rdata;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mie_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_mie_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_mstatus_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__trap 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_imm 
        = (1U & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_cnt_done)
                  ? (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__signbit)
                  : ((1U & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_ctrl))
                      ? (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm11_7)
                      : (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm24_20))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_we 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_we;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_we 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_we;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__wb_dat_c2r 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_dat;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_dat 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_dat;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_rs1) 
                                                & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_rs1_en));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_d_sel)
            ? (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_imm)
            : (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rs1));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__rs1_sx 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig) 
           & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rs1));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__wb_adr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_adr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_sel 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_sel;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_dbus_cyc 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h9b9aabfb_0_2) 
           & ((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_mem_misalign)) 
              & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_dbus_en)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_rd 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__o_rd;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_flag 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT____VdfgRegularize_hefcf2c13_0_0;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_cyc 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl_pc_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_pc_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_rd_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_init 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__init;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_init 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__init;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_mem_rdt 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_mem_rdt;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rdata 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_rf_rdata;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trap 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__trap;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_trap 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mret) 
           | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__trap));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__trap;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__imm 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_imm;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__wb_we 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_we;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_dat_o 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__wb_dat_c2r;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_dat 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_dat;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_adr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__wb_adr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_sel 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_sel;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_sel 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_sel;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_cyc 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_dbus_cyc;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mem_rd 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_rd;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ibus_cyc 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_cyc;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_pc_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl_pc_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_wen 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_en;
    if (vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_shift_op) {
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__shift_en 
            = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_en) 
               & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_init) 
                  & (0U == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt))));
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en 
            = (1U & ((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_init)) 
                     | ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_cnt_done) 
                        & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_sh_right))));
    } else {
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__shift_en 
            = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__byte_valid) 
               & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_en));
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en = 0U;
    }
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_rdata1 
        = (1U & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rtrig1)
                  ? (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rdata)
                  : (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rdata1)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wen1 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_cnt_en) 
           & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
              | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2 
        = (1U & (~ ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap) 
                    | ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
                       | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mret)))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_imm 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__imm;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_imm 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__imm;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_imm 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__imm;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_we 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__wb_we;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_dat 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_dat;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_sel 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_sel;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_sel 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_sel;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_stb 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_cyc;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_stb 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ibus_cyc;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__rd_wen 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_wen) 
           & (0U != (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_waddr)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_rdt 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_rdt 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rdata1 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_rdata1;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wen1 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wen1;
    if (vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap) {
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wreg0 = 0x23U;
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wreg0 
            = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wreg0;
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wreg1 = 0x22U;
    } else {
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wreg0 
            = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_waddr;
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wreg0 
            = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wreg0;
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wreg1 
            = (0x00000020U | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_addr));
    }
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wreg1 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wreg1;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rreg1 
        = ((0x00000020U & ((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2)) 
                           << 5U)) | ((0x0000001cU 
                                       & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rs2_raddr) 
                                          & ((- (IData)((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2))) 
                                             << 2U))) 
                                      | (3U & ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mret) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap)) 
                                               | (((- (IData)((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en))) 
                                                   & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_addr)) 
                                                  | ((- (IData)((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2))) 
                                                     & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rs2_raddr)))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_imm) 
                                                & ((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__clr_lsb)) 
                                                   & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_imm_en)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_dat 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_dat;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_sel 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_sel;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_sel 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_sel;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_stb 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_stb;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_stb;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wen0 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_cnt_en) 
           & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap) 
              | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__rd_wen)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_ibus_rdt 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_rdt;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_mem_rdt 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_rdt;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rdata1 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rdata1;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wen1 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wen1;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wreg0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wreg0;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wreg1 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wreg1;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rreg1 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rreg1;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__c 
        = (1U & (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                  + ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                     + (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__c_r))) 
                 >> 1U));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__q 
        = (1U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                 + ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                    + (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__c_r))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_sel 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_sel;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_stb 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_stb) 
           & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT____VdfgRegularize_h6c257bca_0_0) 
              & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__ext)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_stb 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_stb) 
           & ((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__ext)) 
              & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT____VdfgRegularize_h6c257bca_0_0)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb) 
           & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack 
        = ((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_we 
        = ((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_we));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_adr 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)
            ? vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_adr
            : vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_adr);
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wen0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wen0;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_rdt 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_ibus_rdt;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_cpu_rdt 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__ext)
            ? vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_ext_rdt
            : vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_mem_rdt);
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rdata1;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wen1 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wen1;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreg0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wreg0;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreg1 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wreg1;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wreg 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wtrig1)
            ? (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreg1)
            : (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreg0));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rreg1 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rreg1;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_sel 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_sel;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_stb 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_stb;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_stb 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_stb;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_ack 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_ack 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_we 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_we;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_adr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_adr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wen0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wen0;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_wb_rdt 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_rdt;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_rdt 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_cpu_rdt;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_csr 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
           & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rs2 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rreg1 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rreg1;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_sel 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_sel;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_stb 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_stb;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_stb 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_stb;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_ibus_ack 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_ack;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_mem_ack 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_ack;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_we 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_we;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_adr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_adr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wen0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wen0;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
        = (vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_wb_rdt 
           >> 2U);
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_wb_rdt 
        = (vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_wb_rdt 
           >> 7U);
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_dbus_rdt 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_rdt;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_pc 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_csr_out 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_csr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs2 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rs2;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_waddr 
        = (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wreg) 
            << 2U) | (3U & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wcnt) 
                            >> 3U)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rreg 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rtrig0)
            ? (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rreg1)
            : (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rreg0));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_sel 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_sel;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__wb_stb 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_stb;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_stb 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_stb) 
           | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_ack 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_ibus_ack;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_we 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_we;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_adr 
        = (0x000000ffU & (vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_adr 
                          >> 2U));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__dbus_rdt 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_dbus_rdt;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_pc;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_csr_out;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs2;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_waddr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_waddr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_raddr 
        = (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rreg) 
            << 2U) | (3U & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rcnt) 
                            >> 3U)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_stb 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__wb_stb;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_stb 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_stb;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__i_wb_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_wb_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trig_irq 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_ibus_ack 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_we 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_we) 
           & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_sel) 
              >> (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT____VdfgRegularize_h1e204405_0_0 
        = (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_adr) 
            << 2U) | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_dat 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__dbus_rdt;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out 
        = (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en) 
            & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
               & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus))) 
           | ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out) 
              | ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en) 
                 & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
                    & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause)))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel)
            ? (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2)
            : (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_imm));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_waddr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_waddr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_raddr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_raddr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_ack 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_stb;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_stb 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_stb;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in 
        = ((1U == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
            ? (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)
            : ((2U == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                ? ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out) 
                   | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d))
                : ((3U == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                    ? ((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)) 
                       & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out))
                    : ((0U == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source)) 
                       & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out)))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next 
        = (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
            << 7U) | ((0x00000040U & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                      >> 1U)) | (0x0000003fU 
                                                 & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                                    - (IData)(1U)))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__op_b 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_waddr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_waddr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_raddr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_raddr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__wb_ack 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_ack;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_stb 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_stb;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_rd 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en)
            ? (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next)
            : (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
                << 7U) | (0x0000007fU & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                         >> 1U))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_op_b 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__op_b;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__rf_waddr 
        = (0x000003ffU & (~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_waddr)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_raddr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_raddr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__i_wb_ack 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__wb_ack;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_en 
        = ((~ ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wen) 
               | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_wb_ack))) 
           & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_stb));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_in 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_rd;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done 
        = (1U & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt) 
                 >> 5U));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_bool 
        = (((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_bool_op)) 
            & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
               ^ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rs1))) 
           | (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_bool_op) 
               >> 1U) & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
                         & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rs1))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__op_b_sx 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig) 
           & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_op_b));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_b 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
           ^ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_sub));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__rf_raddr 
        = (0x000003ffU & (~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_raddr)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_ext_ack 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__i_wb_ack;
    if (vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_en) {
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_ren 
            = (1U & (~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_we)));
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_wdata 
            = (0x000000ffU & (vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_dat 
                              >> (0x0000001fU & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel), 3U))));
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_waddr 
            = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT____VdfgRegularize_h1e204405_0_0;
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_wen 
            = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_we;
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_raddr 
            = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT____VdfgRegularize_h1e204405_0_0;
    } else {
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_ren 
            = (1U & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_ren));
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_wdata 
            = (0x000000ffU & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wdata));
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_waddr 
            = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__rf_waddr;
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_wen 
            = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wen;
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_raddr 
            = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__rf_raddr;
    }
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_in;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__sh_done 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy 
        = (1U & (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                  + ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_b) 
                     + (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy_r))) 
                 >> 1U));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_add 
        = (1U & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                 + ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_b) 
                    + (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy_r))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_ext_ack 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_ext_ack;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_ren 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_ren;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_wdata 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_wdata;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_waddr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_waddr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_wen 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_wen;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_done 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__sh_done;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_lt 
        = (1U & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__rs1_sx) 
                 + ((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__op_b_sx)) 
                    + (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_eq 
        = ((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_add)) 
           & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__cmp_r) 
              | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cnt0)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_raddr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_raddr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_cpu_ack 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_ext_ack) 
           | ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_mem_ack) 
              | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__sim_ack)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_ren 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_ren;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_wdata 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_wdata;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_waddr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_waddr;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_wen 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_wen;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mepc)
            : (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wdata1 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_bufreg_en 
        = (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_en) 
            & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_init) 
               | (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                   | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap)) 
                  & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_two_stage_op)))) 
           | ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
              & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__init_done) 
                 & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                    | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_right)))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__o_cmp 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq)
            ? (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_eq)
            : (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_lt));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_raddr 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_raddr;
    if (vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__boot_mode) {
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__final_d 
            = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__boot_data;
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_write 
            = (1U & (~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__boot_wen)));
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__final_a 
            = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__boot_addr;
    } else {
        vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__final_d 
            = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_wdata;
        if (vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_wen) {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_write = 1U;
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__final_a 
                = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_waddr;
        } else {
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_write = 0U;
            vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__final_a 
                = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_raddr;
        }
    }
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_ack 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_cpu_ack;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wdata1 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wdata1;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_bufreg_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_cmp 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__o_cmp;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_dbus_ack 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_ack;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__D 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__final_d;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__GWEN 
        = (1U & (~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_write)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wdata1 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wdata1;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_en 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_en;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_alu_cmp 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_cmp;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__A 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__final_a;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__dbus_ack 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_dbus_ack 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cd4 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__D) 
           & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__we));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__read_flag 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT____VdfgRegularize_hefcf2c13_0_0) 
           & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__GWEN));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__write_flag 
        = ((~ ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__GWEN) 
               | (0x000000ffU == (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__WEN)))) 
           & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT____VdfgRegularize_hefcf2c13_0_0));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_q 
        = (vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data 
           & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_en));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__take_branch 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
           & ((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_cond_branch)) 
              | ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_alu_cmp) 
                 ^ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cd2 
        = (vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__mem
           [vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__A] 
           & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__WEN));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_load 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__dbus_ack;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_q 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_q;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__trap_pending 
        = (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_ctrl_misalign) 
            & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__take_branch)) 
           | ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_dbus_en) 
              & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_mem_misalign)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cd5 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cd2) 
           | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cd4));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_buf 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_buf 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_rreq 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_ibus_ack) 
           | ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init) 
              & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__trap_pending)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_wreq 
        = (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
            & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_right)
                ? ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                   & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init) 
                      | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h9b9aabfb_0_2)))
                : (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init))) 
           | ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_dbus_ack) 
              | (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                  & ((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__trap_pending)) 
                     & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init))) 
                 | ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en) 
                    & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1) 
                       & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init))))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__o_rd 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_buf) 
           | (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
               & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_add)) 
              | ((((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                   >> 1U) & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_slt)) 
                 | (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                     >> 2U) & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_bool)))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_b 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_utype)
            ? ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt12to31) 
               & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_imm))
            : (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_buf));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rf_rreq 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_rreq;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rf_wreq 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_wreq;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_rd 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__o_rd;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy 
        = (1U & (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                  + ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                     + (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))) 
                 >> 1U));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset 
        = (1U & ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                 + ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                    + (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_rreq 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rf_rreq;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_wreq 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rf_wreq;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_rd;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned 
        = ((~ (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0)) 
           & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rreq 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_rreq;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreq 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_wreq;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__new_pc 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_trap)
            ? ((~ ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0) 
                   | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1))) 
               & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc))
            : ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_jump)
                ? (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                : (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_rd 
        = (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_utype) 
            & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)) 
           | ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr) 
              & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_ready 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreq) 
           | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rgnt));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bad_pc 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl_rd 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_rd;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ready 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_ready;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bad_pc;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl_rd;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rf_ready 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ready;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc)
            ? (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc)
            : (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd 
        = (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd) 
            & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en)) 
           | (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd) 
               & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en)) 
              | (((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mem_rd) 
                  & (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en)) 
                 | (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd))));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0 
        = ((IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval)
            : (IData)(vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd));
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rf_ready 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rf_ready;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wdata0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wdata0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wdata0;
    vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wdata0 
        = vlSelfRef.blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wdata0;
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge blinker_tile_wrapper.dut.sram_inst.CLK)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge blinker_tile_wrapper.dut.sram_inst.cen_fell)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge blinker_tile_wrapper.dut.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge blinker_tile_wrapper.dut.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge blinker_tile_wrapper.dut.core_inst.rf_mem_if.i_clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(posedge blinker_tile_wrapper.dut.core_inst.servile.rf_ram_if.i_clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge blinker_tile_wrapper.dut.core_inst.servile.cpu.state.i_clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(posedge blinker_tile_wrapper.dut.core_inst.servile.cpu.decode.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @(posedge blinker_tile_wrapper.dut.core_inst.servile.cpu.immdec.i_clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @(posedge blinker_tile_wrapper.dut.core_inst.servile.cpu.bufreg.i_clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @(posedge blinker_tile_wrapper.dut.core_inst.servile.cpu.bufreg2.i_clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @(posedge blinker_tile_wrapper.dut.core_inst.servile.cpu.ctrl.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 12 is active: @(posedge blinker_tile_wrapper.dut.core_inst.servile.cpu.alu.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 13 is active: @(posedge blinker_tile_wrapper.dut.core_inst.servile.cpu.mem_if.i_clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 14 is active: @(posedge blinker_tile_wrapper.dut.core_inst.servile.cpu.gen_csr.csr.i_clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 15 is active: @(posedge blinker_tile_wrapper.dut.sram_inst.cen_not_rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000010U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 16 is active: @(posedge blinker_tile_wrapper.dut.sram_inst.clk_dly)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000011U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 17 is active: @(posedge blinker_tile_wrapper.dut.sram_inst.ntf_Tckh)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000012U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 18 is active: @(posedge blinker_tile_wrapper.dut.sram_inst.ntf_Tckl)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000013U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 19 is active: @(posedge blinker_tile_wrapper.dut.sram_inst.ntf_Tcyc)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000014U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 20 is active: @(posedge blinker_tile_wrapper.dut.sram_inst.ntf_tah)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000015U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 21 is active: @(posedge blinker_tile_wrapper.dut.sram_inst.ntf_tas)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000016U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 22 is active: @(posedge blinker_tile_wrapper.dut.sram_inst.ntf_tch)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000017U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 23 is active: @(posedge blinker_tile_wrapper.dut.sram_inst.ntf_tcs)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000018U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 24 is active: @(posedge blinker_tile_wrapper.dut.sram_inst.ntf_tdh)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000019U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 25 is active: @(posedge blinker_tile_wrapper.dut.sram_inst.ntf_tds)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 26 is active: @(posedge blinker_tile_wrapper.dut.sram_inst.ntf_twh)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 27 is active: @(posedge blinker_tile_wrapper.dut.sram_inst.ntf_twih)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 28 is active: @(posedge blinker_tile_wrapper.dut.sram_inst.ntf_twis)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 29 is active: @(posedge blinker_tile_wrapper.dut.sram_inst.ntf_tws)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 30 is active: @(posedge blinker_tile_wrapper.dut.router_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 31 is active: @( blinker_tile_wrapper.dut.sram_inst.CEN)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000020U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 32 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000021U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 33 is active: @( blinker_tile_wrapper.dut.sram_inst.cen_flag)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000022U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 34 is active: @( blinker_tile_wrapper.dut.sram_inst.CLK)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000023U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 35 is active: @(negedge blinker_tile_wrapper.dut.sram_inst.clk_dly)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->boot_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4927412752011101329ull);
    vlSelf->boot_addr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9120769706750108796ull);
    vlSelf->boot_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7087014953342129229ull);
    vlSelf->boot_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 275308433265976504ull);
    vlSelf->blinker_tile_wrapper__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11934201010600304097ull);
    vlSelf->blinker_tile_wrapper__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16046909634762193968ull);
    vlSelf->blinker_tile_wrapper__DOT__boot_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15976272897069543853ull);
    vlSelf->blinker_tile_wrapper__DOT__boot_addr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9420187411629401906ull);
    vlSelf->blinker_tile_wrapper__DOT__boot_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4503949013879667340ull);
    vlSelf->blinker_tile_wrapper__DOT__boot_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7833687690445722898ull);
    vlSelf->blinker_tile_wrapper__DOT__north_out = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 9355248852918238431ull);
    vlSelf->blinker_tile_wrapper__DOT__south_out = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 4280023113206634769ull);
    vlSelf->blinker_tile_wrapper__DOT__east_out = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 7367110356913149701ull);
    vlSelf->blinker_tile_wrapper__DOT__west_out = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 2116610525425268410ull);
    vlSelf->blinker_tile_wrapper__DOT__ne_out = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 7836316167628382118ull);
    vlSelf->blinker_tile_wrapper__DOT__nw_out = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 9121738293994890261ull);
    vlSelf->blinker_tile_wrapper__DOT__se_out = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 14152351689458505323ull);
    vlSelf->blinker_tile_wrapper__DOT__sw_out = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 6977562163109940704ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14541925913805614609ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11440809934209863700ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__boot_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9959023821119029845ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__boot_addr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14587131545152142289ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__boot_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1788969250344595835ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__boot_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8109553912556328321ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__north_in = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 15433906827836222872ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__south_in = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 1755782122841018004ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__east_in = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 1745917011057367143ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__west_in = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 18320447063303225117ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__north_out = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 752145517177384258ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__south_out = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 13508409616979424302ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__east_out = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 18129610599335998872ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__west_out = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 11565758872728845423ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__ne_in = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 15480323419845715023ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__nw_in = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 18251557286522583190ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__se_in = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 13882908804005503744ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sw_in = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 2286358817003843159ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__ne_out = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 18070813257394000280ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__nw_out = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 14670197677196087979ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__se_out = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 5947664566912185468ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sw_out = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 6487195496511342827ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__wb_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7511734718727294079ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__wb_dat_c2r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8807663578208419101ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__wb_dat_r2c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9550021191318721076ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__wb_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14195676661844239841ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__wb_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2484522033357399605ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__wb_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1346267049677820276ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__wb_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1435486632773099574ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_waddr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1260767116236459992ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_raddr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7104873399750823158ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13880130897388939948ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_rdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9267108394016886292ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13921190134163669640ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9177885312912850850ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__boot_mode_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7256073076787602252ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__cpu_sram_init_pulse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17544868927721070461ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__final_a = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15493245157144394378ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__final_d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10575510715030682356ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10541549971714049173ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4475578575898762002ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__i_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17208233805424933893ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__i_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2630169817502612183ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__i_timer_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17681300338655263805ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_waddr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3793081954582177479ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17735014620241256268ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16744163865785946053ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_raddr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8067752119593387336ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__i_sram_rdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 412918476929866886ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__o_sram_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1606495705649293191ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7706000214994312340ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13391108529486726336ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13377646582456373079ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 782811558087756742ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__o_wb_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11053042918580605052ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__i_wb_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16529328337045515268ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__i_wb_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3574434900993014039ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5233314190881336319ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7512443483852563315ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5083690588674324479ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2023987560405271757ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16403615757416964244ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3276298796477627595ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__wb_mem_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15380999515450080847ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_waddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9259596518059491484ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3525163154355057344ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9774186821900248011ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_raddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14045411129409763208ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_rdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13569876094340664912ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15388136903091584217ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11038280853168575819ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12190567013567809575ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_waddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16841493701456473888ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8821553146266114770ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12535036741936846018ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_raddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6803405134086017856ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_rdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6256968507995414020ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9061235954401642761ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_waddr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12540405871312074195ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6225593996635478425ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5575460110208071775ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_raddr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9264302059054037402ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_sram_rdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6980506589233842652ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_sram_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 910701945872970178ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_adr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17242479693783130562ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1650450354424791751ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1412982715130678774ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9452130192612657847ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_wb_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1363043292824494429ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_wb_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6248645306482402005ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__o_wb_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16403998219899912165ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__bsel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12726220614494751385ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3842869801404379231ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 857107612940968078ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__rf_waddr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7501776763310077056ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__rf_raddr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10900356061999050580ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__wb_rdt = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9387228587956544786ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__regzero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6099059174623839773ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT____VdfgRegularize_h1e204405_0_0 = 0;
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2837548239408902319ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15887924640849074782ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_timer_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14625374835344870100ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7150754947074859872ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16173958631538075331ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9293530034597636490ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15753597366259098782ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_mem_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17301439816542410492ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_mem_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2191895162920812611ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_mem_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 452898660106376796ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8316161932334253756ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2908218078631227920ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 984159511668222363ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14693290386387945616ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_wb_ext_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9820887613943552219ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_ext_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11410075201328418155ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_wb_ext_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12798203858284242507ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_waddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13310551872179950093ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16905137833575288516ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7492597127129766512ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_raddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3276590019279073604ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__i_rf_rdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4950187891485320902ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__o_rf_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17912435840430183455ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6313442093750607368ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1414000316037226946ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14190134412345429877ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_ibus_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13600158783912813772ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14597694350525262986ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15302574341010266283ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4385926864711058719ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12620398063186510810ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3124298941329289715ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6913488320227476207ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dbus_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9747999261339256161ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 541192499666120778ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15364475104612682669ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1388089980054787469ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9247984206054972135ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4366636891083083934ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 763535042368106903ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wb_dmem_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6888187523897115834ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_wreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12259941695386310294ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_rreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9135375634166177575ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wreg0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16703797275734524322ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wreg1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12726012957338226543ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wen0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13219112324622853504ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wen1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12657871917925400794ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wdata0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14171080735230942544ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__wdata1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10637517953440054037ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rreg0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2926022236276284131ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rreg1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17422674393880919963ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8556194215183472201ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rdata0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1465779903305854178ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rdata1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7154210786661429281ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mdu_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15342362889438367166ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mdu_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13585001614983337902ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mdu_op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5107773323903253046ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mdu_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1899354364960147033ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mdu_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18020043935465448475ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mdu_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11731110921083224967ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12461483047840864279ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11475732046054217669ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12290855747037126276ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8192745748616295267ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7079580377436859467ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12433768469070061131ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_cpu_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10859349283045949809ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_cpu_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7181591405554123864ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_cpu_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 702028342032137967ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 186259689056614373ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1948583053690087302ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15953894538351335719ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18314511692529227232ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_mem_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12824569823062294780ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_mem_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 809504626098773415ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_mem_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4165232267502567561ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12971034373401717628ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8971876903729613441ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3704361115944895388ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12763798084925335022ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__o_wb_ext_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3953960312487310289ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_ext_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9044944455932127089ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__i_wb_ext_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15123284570004860528ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__sig_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11368050053686068610ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__halt_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12909057665537219156ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__sim_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14455687822269705979ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT__ext = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6289573109962841611ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__mux__DOT____VdfgRegularize_h6c257bca_0_0 = 0;
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5842107019914766839ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4809717969212836968ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4677457709500974404ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10561355591117288842ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_dbus_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17375753752266523272ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18032922631363175388ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 818774113148215154ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10394932329590716606ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1205102621691046797ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 560800648878212297ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6804084450905933683ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 579807720682837235ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18268052169929652785ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4047272446466619295ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2907594203663234925ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__o_wb_mem_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8459808342419142930ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_mem_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17182732429935790503ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__arbiter__DOT__i_wb_mem_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7627479131475845474ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18193075912724869800ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14488037079934952492ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12218947213318006608ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11486304075127274824ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15725961148408085503ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreg0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8315205393314753506ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wreg1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3856009154599858663ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wen0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12803626570979830696ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wen1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6656196422418730854ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wdata0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16774889408310978823ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_wdata1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11070589889837392763ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rreg0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11395999302216317596ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rreg1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13243249451244906168ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_rdata0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4517746729627244153ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_rdata1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3049633075531833357ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_waddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10251138353098932207ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5120696157253557809ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16970761897929287044ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_raddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4829602278304602584ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__o_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4310902727660861118ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_rdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12936108226087603762ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rgnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10329158699092045005ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rcnt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15493763359021456492ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rtrig1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3088402278316930572ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wcnt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12985260239587785042ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wdata0_r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15500229621422781250ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wdata1_r = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13337956282604300173ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wen0_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2241142454808845016ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wen1_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4130144551975067506ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wtrig0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3654163757999418663ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wtrig1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13069900478803447981ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__wreg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6230969561036806841ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rtrig0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7811661310404698240ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rreg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12052837997343787688ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rdata0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3155305763053164203ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rdata1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16397725724220148619ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rgate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14579192920394961561ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__rreq_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6194557770741387631ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__gen_wtrig_ratio_neq_2__DOT__wtrig0_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8485690659748722337ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9617177407063005893ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6753172115839754942ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_timer_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18417599267284581994ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rf_rreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1955404891359951852ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rf_wreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11118787299881631006ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rf_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3028272833125008805ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wreg0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17420255708724428052ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wreg1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 920383581032920433ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wen0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16541647324879558446ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wen1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5206451985261332887ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wdata0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13397686531914698661ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_wdata1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9500393776038139803ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rreg0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13141822029127171760ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_rreg1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4453789951541000211ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rdata0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12612520564207812417ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_rdata1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13117544713066311703ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ibus_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4665034091227398395ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ibus_cyc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14579855523590503402ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_ibus_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11846711985752613471ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_ibus_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 775287123414240134ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8655262789021426347ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16322045601673859790ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 267048814973337878ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13482314331232177969ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_dbus_cyc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10000890549443028793ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_dbus_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11086040956145098992ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_dbus_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15828371017540768668ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ext_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8165010895955748557ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_ext_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14742180724258253053ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_ext_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10629781006009975729ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ext_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13217559056898329013ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_ext_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 985551045250702241ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__o_mdu_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16184110451075069812ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1063989638469590834ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs1_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14106862868353295766ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs2_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9222949393875258833ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec_ctrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18408615710353019016ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec_en = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 648715775082612049ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__sh_right = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16761575380411599120ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bne_or_bge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11221780047179354018ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cond_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10546792056089823640ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__two_stage_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12675917119084064403ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__e_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5861626153879290593ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ebreak = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18249198065674456763ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__branch_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18372784134643867395ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__shift_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2807030918726721253ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17495704091901252469ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mdu_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4963276012897257122ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_alu_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10990971417491614358ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_csr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13644277417272701720ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_mem_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2458413615919621998ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9524444349455111370ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7162943668165707726ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2065221719061802488ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2503643840537471796ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mtval_pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 997129029959719325ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl_pc_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8679872437977117253ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9008501140222978660ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__jal_or_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8666521695177466979ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__utype = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5670619058175135ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9956164301692860636ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__imm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3103182128346659892ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17088414229950204133ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__pc_rel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1065801921243661307ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__iscomp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2262977998857251112ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17557190115189316671ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17662530359044209645ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt0to3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4698974821000053206ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt12to31 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1463194431393688955ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5412431593688255469ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4131644346122883868ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11083237949588316088ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4868909859261451923ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8356062743671235924ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16781054159431484242ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13457564492043966918ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__cnt_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12451855448823344630ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11902850438471154087ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_sh_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16583502209057633888ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_rs1_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12728781529016494010ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_imm_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1011947105021110679ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_clr_lsb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1781536951887612751ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8927388170707188842ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18348329967612027697ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__dbus_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5468669479172752929ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__dbus_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6886926499659953153ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7046921913668931561ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_bool_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16026628007630914966ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_cmp_eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11114994409188268299ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_cmp_sig = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18105089354268355540ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_cmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4906784528900595441ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu_rd_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9534980044244862074ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15136098446238199287ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rs2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14239219754030273958ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15944260118393217930ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__op_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7460259504957530771ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__op_b_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8504279627028587271ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17305182380229613510ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16569456804105226461ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_half = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14734729859697292449ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_bytecnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12025159590082420866ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__sh_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18131527527599549245ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_misalign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16451250753981446717ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bad_pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1521162894784542368ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_mstatus_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2414699234651649437ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_mie_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2765460459545788914ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_mcause_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12389716337334327061ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_source = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18225481604365730262ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_imm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4077732855396576269ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_d_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5762285128756638989ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3877848699272205236ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_addr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6322107102532558259ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17956744345148777230ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_imm_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10024986635062525918ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__csr_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13213563395025980979ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_csr_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3434419869420801752ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__dbus_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5895994767836790385ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__new_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11374934563812417468ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__lsb = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16930188929065933769ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__i_wb_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3171039862846133693ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12924254122552906077ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_cyc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3249605124633630845ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7659812894228239654ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__wb_ibus_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4870573196532868920ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10042833229709582013ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11050031559603463163ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_new_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2315705212989241629ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_alu_cmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7274878074874872440ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13943092041407448979ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11292364666712447528ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt0to3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 536531723228922847ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt12to31 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7546059641582747212ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16853147481779946437ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10420915916231049609ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5331880751332495565ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10860315673524143052ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9506446748225409729ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15390932170689808874ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1524175789061759023ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13782623396069983063ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_bufreg_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14537471628284038017ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_pc_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14056065165427301676ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6593156834951952923ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4815396922158082788ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_ctrl_misalign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17383349860691074652ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1248311461625844241ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_mem_bytecnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9858047223898028118ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_mem_misalign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14358726392541915423ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5771403435068287627ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_cond_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9546390944795144585ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_dbus_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15484212521134399212ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_two_stage_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7678596475852807496ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_branch_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6644593880156482071ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_shift_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12854187987055264952ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_sh_right = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14376920960139898871ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10141381017933498024ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4100309963797080218ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_e_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12827028813827999076ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rd_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14329434961904752376ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_mdu_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11591126008399053054ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_mdu_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11000436073925453069ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_mdu_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12686029823711420191ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_dbus_cyc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2160782235970281297ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_dbus_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14950097455402455271ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5907606633732068325ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_ibus_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15600390577227099314ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_rreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3419247533906305035ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_wreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 777629465439029246ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_rf_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2255199340024730302ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_rf_rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11487577730873963374ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__init_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9325627940888003631ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__misalign_trap_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4014687590075118999ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__o_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16364019220412898502ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__cnt_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16742576028436191502ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__ibus_cyc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12721611991229095827ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__take_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2949875872268799509ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__last_init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6958070229999820996ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__trap_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7246051757409594721ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13412898903564236310ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__gen_csr__DOT__misalign_trap_sync_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14249861363171521222ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h9b9aabfb_0_2 = 0;
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5313766497476414124ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 13252094713571476998ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__i_wb_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 114602750624855360ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_sh_right = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1264411561879618019ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bne_or_bge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 223387008493399845ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_cond_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17757539739013469557ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_e_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5879467546452804858ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ebreak = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15377056005906363366ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_branch_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15631806688231749485ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_shift_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13399380820555844167ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_rd_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9032572246531618481ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_two_stage_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3379368844447168888ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_dbus_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4183830683652098715ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mdu_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7486972324591840836ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ext_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12801354878817756224ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bufreg_rs1_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14315532994012465243ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bufreg_imm_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4732043620292354603ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bufreg_clr_lsb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11848691993796075247ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_bufreg_sh_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6531236137236084872ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ctrl_jal_or_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7247426743030983096ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ctrl_utype = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11305783992915650387ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ctrl_pc_rel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17070944767961333472ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_ctrl_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6266255636723492161ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2900564256197963452ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_bool_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18102775362244524231ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2106304938664011658ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_sig = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1320754486676074126ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_alu_rd_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2802134747222990313ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mem_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4302149901459407701ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mem_word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16161488319427356608ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mem_half = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18344636669483942395ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mem_cmd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17745874924329584960ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15908830102551334886ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_addr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12442705809244137498ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_mstatus_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6101324859226129125ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_mie_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12642374089560769420ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_mcause_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10894132440786767826ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_source = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4339582228377956609ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_d_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12870526075171789394ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_csr_imm_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8288960828191570730ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_mtval_pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13792114763610697258ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_immdec_ctrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17302054247099245902ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_immdec_en = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10991263840764522778ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_op_b_source = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12955752059601952384ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_rd_mem_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3283236208196391365ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_rd_csr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1842861701505743730ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__o_rd_alu_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6807774624627102323ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__opcode = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10545062275904018580ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13496904237684295853ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op20 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15765795075760762546ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op21 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15724423278059248345ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12123865159843300251ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__op26 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14039861336392187521ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__imm25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15085598520859433832ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__imm30 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10197387289135745012ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mdu_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11404330546793284962ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_two_stage_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2933833120499896556ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_shift_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13771035903511003997ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_branch_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9630728985237166398ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_dbus_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13680928225696554166ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mtval_pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9168139984349652078ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mem_word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16112631390843481692ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_alu_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6496471382605547962ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_mem_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15768385276082431483ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ext_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9950351904341199856ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7164133527138534329ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bufreg_imm_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18237619674766594031ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bufreg_clr_lsb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14895448835048730245ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_cond_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10235095073035044439ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ctrl_utype = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3579846525472649514ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ctrl_jal_or_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3465276246010067251ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ctrl_pc_rel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15686471795824848621ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 875360729927590160ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_sh_right = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5333381985348907251ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bne_or_bge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14354190379365536611ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__csr_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6442500497049815028ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ebreak = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10416934878554922256ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_ctrl_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16534990998018378934ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_e_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1113223013197702654ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_bufreg_sh_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13789010111851424739ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17803668863360733272ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__csr_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9829399165469848766ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_rd_csr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3575272184091654010ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14607953489534380274ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9391730879511355455ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_mie_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4427892615402853289ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16224808627850660216ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_source = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8953846927895228032ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_d_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18333778497269861448ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_imm_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18190202851048919272ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_csr_addr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17642898316356644462ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17471158610942874588ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13662301298502826141ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mem_cmd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8596245326204535095ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mem_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13983970154180430474ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_mem_half = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4816581211736376834ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_bool_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18054782618839726664ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17483767216749197157ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_immdec_en = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7365252658246118574ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7653218380289242165ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__co_op_b_source = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13547616334403299375ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9942008376084070677ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_cnt_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17852118924445800062ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_cnt_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 169478589845611346ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_immdec_en = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10320120488993701060ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_csr_imm_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14734034516186117465ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_ctrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3837161336048490188ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5551624423770686003ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_rs1_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 653140308019367972ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_rs2_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17311154684593213228ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_csr_imm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8475633053044154988ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__o_imm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13955450912230853670ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_wb_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16199494009399623462ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_wb_rdt = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 562613932176314335ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm31 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14227704848675081129ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm19_12_20 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16188486585934830272ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17680950691084390639ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm30_25 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16586383444495340389ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm24_20 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13347905754591232043ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm11_7 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15437086957282597094ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__signbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2103759953851005680ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3305330057084325968ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_cnt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9088191268197330729ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_cnt1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13880532515877629293ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_cnt_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10873329607045784377ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6635288608146009725ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12526899541257022205ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_mdu_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11109097763333449551ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_lsb = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14653023648022404739ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_rs1_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6299860149363993727ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_imm_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13755555565328815000ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_clr_lsb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5541690555582443896ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_shift_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8803382048969506502ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_right_shift_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5938435092154512436ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_shamt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 670194895105994792ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_sh_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16824552622497646385ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_rs1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1443736065993784354ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_imm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12130095398818245669ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4188554680948126210ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_dbus_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 627754448474595778ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__o_ext_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3041174428822497865ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__c = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17524044737462644472ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18188330117658157700ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__c_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12240171349193826090ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9910549708949308940ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__clr_lsb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17515576091498473374ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10676377948657566016ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16565750291912385414ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5754184401011436086ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_cnt7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8584161330290391360ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_cnt_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16489595146652208364ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_sh_right = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9609277775194015430ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2794412323479120273ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13778315783839019551ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14749911463965768602ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3188384470632369595ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_shift_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8194183551272905616ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1432141949534096291ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_imm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17832833161959457334ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12609642581139146419ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18224062319921375777ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__o_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1472749555142052724ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15789531260234132572ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 638405413978216884ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dhi = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15190288872412629518ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dlo = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11780707253963459622ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__byte_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3926818534779822901ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__shift_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12923930637880807801ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2039014016774782906ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8875092832802623041ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17763359915371093867ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16442835468514309430ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17995759652866451732ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_pc_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2023307526934203386ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt12to31 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8195410199408769808ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10888355179712213459ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6971345473765192638ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_cnt2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14693624800409877563ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9083945321037559447ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4866228399505258358ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_utype = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9634551377992380807ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_pc_rel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3922880538782480980ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16284085159818433192ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_iscomp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16823503177012885315ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_imm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5165649377555884509ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_buf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5830998377637086773ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3580417076893638800ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8801615103852116479ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10245495000518671903ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__o_ibus_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15843957990925845698ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17936036060206293812ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7631071901116711219ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7007093180361277508ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 139320024486166746ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5315077395886451439ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9802716435150077226ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15484871456800661626ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8568387687450728132ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15587223168976055948ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__plus_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9468876276441755396ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3233964015811640838ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__new_pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11314032718306573109ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9505819978993320082ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__offset_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7700764200854716417ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7957801754099879590ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3646785443831286626ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cnt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9351814007754325704ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__o_cmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8112082262782751733ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15360776310663625496ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_bool_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2571331605349269462ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4699962215475794414ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2117197170651750013ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rd_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12653393390314316006ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_rs1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12209424214573534822ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_op_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13496973266209120105ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__i_buf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7055137955149647761ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__o_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5825042017472934070ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_add = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12523536270167234702ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_slt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2936105052396131955ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__cmp_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4456622218535338713ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9911092633408432677ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_cy_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7030389386137709447ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__rs1_sx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7377174926839245879ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__op_b_sx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10214906572035118713ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__add_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14923236192432545095ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_lt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9294577459141849630ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18277590048844950120ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__result_bool = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15196992995192343643ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_cnt_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9701699336703108985ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wreg0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 669479229868262491ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wreg1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5365167818180097934ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wen0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17520634203668817226ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wen1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 183257291483450050ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10405685678055420261ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1907760525368063514ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rreg0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14343112743586965992ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rreg1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15290018481062655638ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rdata0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2126518641524301015ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12090398624537519117ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 499625982231742232ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1951508110883434630ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mepc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1166959135249097118ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12050707201378588896ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15836215397905728266ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13351990768665929104ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7960958039073822498ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13906944491953651611ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_addr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10934119350489877922ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9275210270269554238ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_csr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4350715773126269530ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5160096888293173373ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_waddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18381100682255763355ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5531015826340268034ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5685696488482471841ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9173674262535843960ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7901964526492731930ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14915051510021484000ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_mem_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1749279107536697139ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6372114485855463011ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rs1_raddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14419371205335833935ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rs1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18281137414834549985ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__i_rs2_raddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4527624068998696565ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__o_rs2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4310213214767275478ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__rd_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1364318029649959202ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9461276132977136470ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11878458820365334053ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15749927343000475496ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12047677502453493328ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_bytecnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11792344888479968269ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_lsb = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3381333955130417205ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__o_misalign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14743075183832636519ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12558821436176957870ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2444860723208572589ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_half = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14340638694268797213ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_mdu_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14099012717132190456ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_bufreg2_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11796723266182567617ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__o_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5613804912440738209ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__o_wb_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5575869509743664918ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__signbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10252891700971109914ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__dat_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15503058627662110027ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9836157553556759274ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5535834189385177961ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trig_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14443718218052122139ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14844302152831924977ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt0to3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15268761904394024981ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14253780672869753645ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1232883578951965743ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7835099432280848032ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15038572836211037993ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15461376940856478680ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mem_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12783002799341345649ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mtip = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4297359977948718407ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10727924635681455689ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_new_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15324809774469113258ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_e_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16612001058292898842ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_ebreak = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9986582470069154305ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mem_cmd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15871053718012284497ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2925927765136935259ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mie_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11029376477002568218ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6124926563672613264ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4467380927502142680ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15696046083984387197ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_d_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5818171362052019756ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 827575346018611085ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14352178414624775235ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_imm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11074595116518296581ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rs1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5674932092109424889ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17822709615989220085ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16133269485847304240ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mpie = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10673734651245024375ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mie_mtie = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4604168493023904234ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause31 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6418297575374662114ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5813788715246208575ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2871434490584300378ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11092864751938098880ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6447380704318100553ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__timer_irq_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7756077894331719184ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13311843536999722334ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9235446417300481288ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__timer_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16228982125806875298ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7678819191476062116ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__CEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5462243107876283337ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__GWEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9378597939894761415ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__WEN = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3249112999363968577ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__A = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3040457522246584984ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__D = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13445316545477127062ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__Q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17086326874460080937ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__VDD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1390732206554956859ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__VSS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4132029739164814110ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12434702035960661667ull);
    }
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__qo_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1428963008603768939ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6016405109890544733ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__write_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16663156490115725874ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__read_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15141698113813525943ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tcyc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6083258542045592362ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17694172126906507753ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2059242471923802421ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tcs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17537733761520970084ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tas = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16842918530765438046ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tds = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17354270457221603356ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tws = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17651341948408871057ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twis = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14091668269704407217ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4883292682006443063ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tah = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3782708845197310994ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tdh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5480585892217462330ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5202188319061805004ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twih = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4303476665765659359ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__no_st_viol = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1759029820486428674ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__no_hd_viol = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9728455288046690211ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__no_ck_viol = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14337585247451459443ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__clk_dly = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6885506951914051147ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__write_flag_dly = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11157012908437834813ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__read_flag_dly = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17821733720322178183ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_dly = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12173784714109983850ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_fell = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9270992007905092317ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_not_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14373033804085357844ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__we = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11059585309848781386ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cd2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10115145235955629004ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cd4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1860459779634732126ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cd5 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 381801399184111092ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cdx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16263132332287940602ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__marked_a = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8355490656205689974ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3030968253454332656ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__mem_0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9641212123927677833ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__mem_1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11911391285264275380ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__mem_2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2503699466656715758ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__mem_3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17704560315264993345ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_flag_dly = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7257660709641197263ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT____VdfgRegularize_hefcf2c13_0_0 = 0;
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11037196745213010604ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15756595725072770786ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6694959149096213531ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_dat_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2308394819226319374ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_dat_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6730467307935487911ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6320975027181338688ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1600738193180106633ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__local_wb_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7733197832151039616ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__n_out = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 9748138091424789402ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__s_out = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 2818403898903416840ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__e_out = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 16432905098254549514ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__w_out = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 5907477578041364031ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__ne_out = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 6326971275927331945ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__nw_out = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 9894837438162807174ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__se_out = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 10955922973929796903ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__sw_out = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 15318519086281575875ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__n_in = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 238686931566693833ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__s_in = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 11481476457842099723ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__e_in = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 13296455654256161751ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__w_in = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 7377430168348819065ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__ne_in = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 10828529428243442452ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__nw_in = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 11530356085721871119ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__se_in = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 14751163994212730260ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__sw_in = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 12446062482139381674ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_row = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5741398556842044657ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__my_col = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7445600033923036695ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__inject_flit = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 15200993746205539803ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_n = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 10273409031444604562ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_s = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 13395152958693508129ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_e = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 15800089888284172800ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_w = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 4801131528783791190ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_ne = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 10646828206256113678ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_nw = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 8213693277759255678ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_se = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 1541258007195264684ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__next_sw = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 1193261847393530551ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_row = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 977145624195062964ull);
    vlSelf->blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__Vstatic__tgt_col = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11893774424688137227ull);
    vlSelf->__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__0__flit = 0;
    vlSelf->__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__1__flit = 0;
    vlSelf->__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__2__flit = 0;
    vlSelf->__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__3__flit = 0;
    vlSelf->__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__4__flit = 0;
    vlSelf->__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__5__flit = 0;
    vlSelf->__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__6__flit = 0;
    vlSelf->__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__7__flit = 0;
    vlSelf->__Vtask_blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__route_flit_comb__8__flit = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_0 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_1 = 0;
    vlSelf->__Vintraval_hee16dd31__0 = 0;
    vlSelf->__Vintraval_he1935e6a__0 = 0;
    vlSelf->__Vintraval_hc239cda4__0 = 0;
    vlSelf->__Vintraval_h3d2ee225__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__CLK__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_fell__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__rf_mem_if__DOT__i_clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__rf_ram_if__DOT__i_clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__state__DOT__i_clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__decode__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__immdec__DOT__i_clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg__DOT__i_clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__bufreg2__DOT__i_clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__ctrl__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__alu__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__mem_if__DOT__i_clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__core_inst__DOT__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_not_rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__clk_dly__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckh__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tckl__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_Tcyc__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tah__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tas__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tch__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tcs__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tdh__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tds__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twh__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twih__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_twis__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__ntf_tws__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__router_inst__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__CEN__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__blinker_tile_wrapper__DOT__dut__DOT__sram_inst__DOT__cen_flag__0 = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
