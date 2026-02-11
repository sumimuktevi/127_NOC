// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [1U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
    vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                    ((((vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__south_in 
                                                        != vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t10__DOT__router__DOT__south_in__1) 
                                                       << 3U) 
                                                      | ((vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__east_in 
                                                          != vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t01__DOT__router__DOT__east_in__1) 
                                                         << 2U)) 
                                                     | (((vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__east_in 
                                                          != vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__router__DOT__east_in__1) 
                                                         << 1U) 
                                                        | (vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__south_in 
                                                           != vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__router__DOT__south_in__1)))));
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__router__DOT__south_in__1 
        = vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__south_in;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__router__DOT__east_in__1 
        = vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__east_in;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t01__DOT__router__DOT__east_in__1 
        = vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__east_in;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t10__DOT__router__DOT__south_in__1 
        = vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__south_in;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
        vlSelfRef.__VicoDidInit = 1U;
        vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered
                                         [0U]);
        vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered
                                         [0U]);
        vlSelfRef.__VicoTriggered[0U] = (4ULL | vlSelfRef.__VicoTriggered
                                         [0U]);
        vlSelfRef.__VicoTriggered[0U] = (8ULL | vlSelfRef.__VicoTriggered
                                         [0U]);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_dat_i = vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_dat_i;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_dat_i = vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_dat_i;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_dat_i = vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_dat_i;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_dat_i = vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_dat_i;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__east_in 
        = vlSelfRef.mesh_2x2__DOT__t11__DOT__east_in;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__south_in 
        = vlSelfRef.mesh_2x2__DOT__t11__DOT__south_in;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_ack = vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_ack;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_ack = vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_ack;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_ack = vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_ack;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_ack = vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_ack;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__south_in 
        = vlSelfRef.mesh_2x2__DOT__t01__DOT__south_in;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__west_in 
        = vlSelfRef.mesh_2x2__DOT__t01__DOT__west_in;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__east_in 
        = vlSelfRef.mesh_2x2__DOT__t10__DOT__east_in;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__north_in 
        = vlSelfRef.mesh_2x2__DOT__t10__DOT__north_in;
    vlSelfRef.mesh_2x2__DOT__clk = vlSelfRef.clk;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__north_in 
        = vlSelfRef.mesh_2x2__DOT__t00__DOT__north_in;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__west_in 
        = vlSelfRef.mesh_2x2__DOT__t00__DOT__west_in;
    vlSelfRef.mesh_2x2__DOT__rst = vlSelfRef.rst;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_dat_o = vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.o_wb_dat;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_adr = vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.o_wb_adr;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_we = vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.o_wb_we;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_stb = vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.o_wb_stb;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_dat_o = vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.o_wb_dat;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_adr = vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.o_wb_adr;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_we = vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.o_wb_we;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_stb = vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.o_wb_stb;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_dat_o = vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.o_wb_dat;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_adr = vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.o_wb_adr;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_we = vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.o_wb_we;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_stb = vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.o_wb_stb;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_dat_o = vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.o_wb_dat;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_adr = vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.o_wb_adr;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_we = vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.o_wb_we;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_stb = vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.o_wb_stb;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__clk = vlSelfRef.mesh_2x2__DOT__clk;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__clk = vlSelfRef.mesh_2x2__DOT__clk;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__clk = vlSelfRef.mesh_2x2__DOT__clk;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__clk = vlSelfRef.mesh_2x2__DOT__clk;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__rst = vlSelfRef.mesh_2x2__DOT__rst;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__rst = vlSelfRef.mesh_2x2__DOT__rst;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__rst = vlSelfRef.mesh_2x2__DOT__rst;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__rst = vlSelfRef.mesh_2x2__DOT__rst;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_dat_o 
        = vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_dat_o;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_adr 
        = vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_adr;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_we 
        = vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_we;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_stb 
        = vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_stb;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_dat_o 
        = vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_dat_o;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_adr 
        = vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_adr;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_we 
        = vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_we;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_stb 
        = vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_stb;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_dat_o 
        = vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_dat_o;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_adr 
        = vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_adr;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_we 
        = vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_we;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_stb 
        = vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_stb;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_dat_o 
        = vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_dat_o;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_adr 
        = vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_adr;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_we 
        = vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_we;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_stb 
        = vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_stb;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__clk 
        = vlSelfRef.mesh_2x2__DOT__t00__DOT__clk;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__clk 
        = vlSelfRef.mesh_2x2__DOT__t01__DOT__clk;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__clk 
        = vlSelfRef.mesh_2x2__DOT__t10__DOT__clk;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__clk 
        = vlSelfRef.mesh_2x2__DOT__t11__DOT__clk;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__rst 
        = vlSelfRef.mesh_2x2__DOT__t00__DOT__rst;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__rst 
        = vlSelfRef.mesh_2x2__DOT__t01__DOT__rst;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__rst 
        = vlSelfRef.mesh_2x2__DOT__t10__DOT__rst;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__rst 
        = vlSelfRef.mesh_2x2__DOT__t11__DOT__rst;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__recv_sel 
        = (0x0000000fU & vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_adr);
    vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__is_network_send 
        = ((8U == (vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_adr 
                   >> 0x0000001cU)) & ((IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_stb) 
                                       & (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_we)));
    vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__is_network_recv 
        = ((9U == (vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_adr 
                   >> 0x0000001cU)) & ((~ (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_we)) 
                                       & (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_stb)));
    vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__recv_sel 
        = (0x0000000fU & vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_adr);
    vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__is_network_send 
        = ((8U == (vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_adr 
                   >> 0x0000001cU)) & ((IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_stb) 
                                       & (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_we)));
    vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__is_network_recv 
        = ((9U == (vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_adr 
                   >> 0x0000001cU)) & ((~ (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_we)) 
                                       & (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_stb)));
    vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__recv_sel 
        = (0x0000000fU & vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_adr);
    vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__is_network_send 
        = ((8U == (vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_adr 
                   >> 0x0000001cU)) & ((IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_stb) 
                                       & (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_we)));
    vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__is_network_recv 
        = ((9U == (vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_adr 
                   >> 0x0000001cU)) & ((~ (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_we)) 
                                       & (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_stb)));
    vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__recv_sel 
        = (0x0000000fU & vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_adr);
    vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__is_network_send 
        = ((8U == (vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_adr 
                   >> 0x0000001cU)) & ((IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_stb) 
                                       & (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_we)));
    vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__is_network_recv 
        = ((9U == (vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_adr 
                   >> 0x0000001cU)) & ((~ (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_we)) 
                                       & (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_stb)));
}

void Vtop___024root___ico_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__north_out = 0ULL;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__south_out = 0ULL;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__east_out = 0ULL;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__west_out = 0ULL;
    if (((IData)((vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__inject_flit 
                  >> 0x21U)) & (0U != (3U & (IData)(
                                                    (vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__inject_flit 
                                                     >> 0x1fU)))))) {
        vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__0__flit 
            = vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__inject_flit;
        if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__0__flit 
                            >> 0x1fU))) != (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__my_col))) {
            if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__0__flit 
                                >> 0x1fU))) > (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__my_col))) {
                vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__east_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__0__flit;
            } else {
                vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__west_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__0__flit;
            }
        } else if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__0__flit 
                                   >> 0x20U))) > (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__my_row))) {
            vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__south_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__0__flit;
        } else {
            vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__north_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__0__flit;
        }
    }
    if (((IData)((vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__north_in 
                  >> 0x21U)) & (0U != (3U & (IData)(
                                                    (vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__north_in 
                                                     >> 0x1fU)))))) {
        vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__1__flit 
            = vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__north_in;
        if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__1__flit 
                            >> 0x1fU))) != (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__my_col))) {
            if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__1__flit 
                                >> 0x1fU))) > (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__my_col))) {
                vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__east_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__1__flit;
            } else {
                vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__west_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__1__flit;
            }
        } else if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__1__flit 
                                   >> 0x20U))) > (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__my_row))) {
            vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__south_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__1__flit;
        } else {
            vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__north_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__1__flit;
        }
    }
    if (((IData)((vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__south_in 
                  >> 0x21U)) & (0U != (3U & (IData)(
                                                    (vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__south_in 
                                                     >> 0x1fU)))))) {
        vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__2__flit 
            = vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__south_in;
        if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__2__flit 
                            >> 0x1fU))) != (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__my_col))) {
            if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__2__flit 
                                >> 0x1fU))) > (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__my_col))) {
                vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__east_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__2__flit;
            } else {
                vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__west_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__2__flit;
            }
        } else if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__2__flit 
                                   >> 0x20U))) > (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__my_row))) {
            vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__south_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__2__flit;
        } else {
            vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__north_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__2__flit;
        }
    }
    if (((IData)((vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__east_in 
                  >> 0x21U)) & (0U != (3U & (IData)(
                                                    (vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__east_in 
                                                     >> 0x1fU)))))) {
        vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__3__flit 
            = vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__east_in;
        if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__3__flit 
                            >> 0x1fU))) != (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__my_col))) {
            if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__3__flit 
                                >> 0x1fU))) > (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__my_col))) {
                vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__east_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__3__flit;
            } else {
                vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__west_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__3__flit;
            }
        } else if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__3__flit 
                                   >> 0x20U))) > (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__my_row))) {
            vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__south_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__3__flit;
        } else {
            vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__north_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__3__flit;
        }
    }
    if (((IData)((vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__west_in 
                  >> 0x21U)) & (0U != (3U & (IData)(
                                                    (vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__west_in 
                                                     >> 0x1fU)))))) {
        vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__4__flit 
            = vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__west_in;
        if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__4__flit 
                            >> 0x1fU))) != (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__my_col))) {
            if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__4__flit 
                                >> 0x1fU))) > (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__my_col))) {
                vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__east_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__4__flit;
            } else {
                vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__west_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__4__flit;
            }
        } else if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__4__flit 
                                   >> 0x20U))) > (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__my_row))) {
            vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__south_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__4__flit;
        } else {
            vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__north_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t00__DOT__router__DOT__route_flit__4__flit;
        }
    }
    vlSelfRef.mesh_2x2__DOT__t00__DOT__north_out = vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__north_out;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__west_out = vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__west_out;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__south_out = vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__south_out;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__east_out = vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__east_out;
    vlSelfRef.mesh_2x2__DOT__n00_n01 = vlSelfRef.mesh_2x2__DOT__t00__DOT__south_out;
    vlSelfRef.mesh_2x2__DOT__n00_n10 = vlSelfRef.mesh_2x2__DOT__t00__DOT__east_out;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__north_in = vlSelfRef.mesh_2x2__DOT__n00_n01;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__west_in = vlSelfRef.mesh_2x2__DOT__n00_n10;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__north_in 
        = vlSelfRef.mesh_2x2__DOT__t01__DOT__north_in;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__west_in 
        = vlSelfRef.mesh_2x2__DOT__t10__DOT__west_in;
}

void Vtop___024root___ico_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__north_out = 0ULL;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__south_out = 0ULL;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__east_out = 0ULL;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__west_out = 0ULL;
    if (((IData)((vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__inject_flit 
                  >> 0x21U)) & (1U != (3U & (IData)(
                                                    (vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__inject_flit 
                                                     >> 0x1fU)))))) {
        vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__5__flit 
            = vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__inject_flit;
        if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__5__flit 
                            >> 0x1fU))) != (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__my_col))) {
            if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__5__flit 
                                >> 0x1fU))) > (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__my_col))) {
                vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__east_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__5__flit;
            } else {
                vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__west_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__5__flit;
            }
        } else if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__5__flit 
                                   >> 0x20U))) > (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__my_row))) {
            vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__south_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__5__flit;
        } else {
            vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__north_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__5__flit;
        }
    }
    if (((IData)((vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__north_in 
                  >> 0x21U)) & (1U != (3U & (IData)(
                                                    (vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__north_in 
                                                     >> 0x1fU)))))) {
        vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__6__flit 
            = vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__north_in;
        if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__6__flit 
                            >> 0x1fU))) != (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__my_col))) {
            if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__6__flit 
                                >> 0x1fU))) > (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__my_col))) {
                vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__east_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__6__flit;
            } else {
                vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__west_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__6__flit;
            }
        } else if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__6__flit 
                                   >> 0x20U))) > (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__my_row))) {
            vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__south_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__6__flit;
        } else {
            vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__north_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__6__flit;
        }
    }
    if (((IData)((vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__south_in 
                  >> 0x21U)) & (1U != (3U & (IData)(
                                                    (vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__south_in 
                                                     >> 0x1fU)))))) {
        vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__7__flit 
            = vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__south_in;
        if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__7__flit 
                            >> 0x1fU))) != (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__my_col))) {
            if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__7__flit 
                                >> 0x1fU))) > (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__my_col))) {
                vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__east_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__7__flit;
            } else {
                vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__west_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__7__flit;
            }
        } else if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__7__flit 
                                   >> 0x20U))) > (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__my_row))) {
            vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__south_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__7__flit;
        } else {
            vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__north_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__7__flit;
        }
    }
    if (((IData)((vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__east_in 
                  >> 0x21U)) & (1U != (3U & (IData)(
                                                    (vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__east_in 
                                                     >> 0x1fU)))))) {
        vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__8__flit 
            = vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__east_in;
        if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__8__flit 
                            >> 0x1fU))) != (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__my_col))) {
            if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__8__flit 
                                >> 0x1fU))) > (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__my_col))) {
                vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__east_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__8__flit;
            } else {
                vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__west_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__8__flit;
            }
        } else if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__8__flit 
                                   >> 0x20U))) > (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__my_row))) {
            vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__south_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__8__flit;
        } else {
            vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__north_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__8__flit;
        }
    }
    if (((IData)((vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__west_in 
                  >> 0x21U)) & (1U != (3U & (IData)(
                                                    (vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__west_in 
                                                     >> 0x1fU)))))) {
        vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__9__flit 
            = vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__west_in;
        if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__9__flit 
                            >> 0x1fU))) != (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__my_col))) {
            if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__9__flit 
                                >> 0x1fU))) > (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__my_col))) {
                vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__east_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__9__flit;
            } else {
                vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__west_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__9__flit;
            }
        } else if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__9__flit 
                                   >> 0x20U))) > (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__my_row))) {
            vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__south_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__9__flit;
        } else {
            vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__north_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t01__DOT__router__DOT__route_flit__9__flit;
        }
    }
    vlSelfRef.mesh_2x2__DOT__t01__DOT__south_out = vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__south_out;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__west_out = vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__west_out;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__north_out = vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__north_out;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__east_out = vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__east_out;
    vlSelfRef.mesh_2x2__DOT__n01_n00 = vlSelfRef.mesh_2x2__DOT__t01__DOT__north_out;
    vlSelfRef.mesh_2x2__DOT__n01_n11 = vlSelfRef.mesh_2x2__DOT__t01__DOT__east_out;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__south_in = vlSelfRef.mesh_2x2__DOT__n01_n00;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__west_in = vlSelfRef.mesh_2x2__DOT__n01_n11;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__south_in 
        = vlSelfRef.mesh_2x2__DOT__t00__DOT__south_in;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__west_in 
        = vlSelfRef.mesh_2x2__DOT__t11__DOT__west_in;
}

void Vtop___024root___ico_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__north_out = 0ULL;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__south_out = 0ULL;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__east_out = 0ULL;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__west_out = 0ULL;
    if (((IData)((vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__inject_flit 
                  >> 0x21U)) & (2U != (3U & (IData)(
                                                    (vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__inject_flit 
                                                     >> 0x1fU)))))) {
        vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__10__flit 
            = vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__inject_flit;
        if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__10__flit 
                            >> 0x1fU))) != (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__my_col))) {
            if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__10__flit 
                                >> 0x1fU))) > (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__my_col))) {
                vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__east_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__10__flit;
            } else {
                vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__west_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__10__flit;
            }
        } else if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__10__flit 
                                   >> 0x20U))) > (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__my_row))) {
            vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__south_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__10__flit;
        } else {
            vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__north_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__10__flit;
        }
    }
    if (((IData)((vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__north_in 
                  >> 0x21U)) & (2U != (3U & (IData)(
                                                    (vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__north_in 
                                                     >> 0x1fU)))))) {
        vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__11__flit 
            = vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__north_in;
        if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__11__flit 
                            >> 0x1fU))) != (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__my_col))) {
            if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__11__flit 
                                >> 0x1fU))) > (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__my_col))) {
                vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__east_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__11__flit;
            } else {
                vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__west_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__11__flit;
            }
        } else if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__11__flit 
                                   >> 0x20U))) > (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__my_row))) {
            vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__south_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__11__flit;
        } else {
            vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__north_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__11__flit;
        }
    }
    if (((IData)((vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__south_in 
                  >> 0x21U)) & (2U != (3U & (IData)(
                                                    (vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__south_in 
                                                     >> 0x1fU)))))) {
        vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__12__flit 
            = vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__south_in;
        if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__12__flit 
                            >> 0x1fU))) != (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__my_col))) {
            if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__12__flit 
                                >> 0x1fU))) > (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__my_col))) {
                vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__east_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__12__flit;
            } else {
                vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__west_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__12__flit;
            }
        } else if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__12__flit 
                                   >> 0x20U))) > (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__my_row))) {
            vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__south_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__12__flit;
        } else {
            vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__north_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__12__flit;
        }
    }
    if (((IData)((vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__east_in 
                  >> 0x21U)) & (2U != (3U & (IData)(
                                                    (vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__east_in 
                                                     >> 0x1fU)))))) {
        vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__13__flit 
            = vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__east_in;
        if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__13__flit 
                            >> 0x1fU))) != (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__my_col))) {
            if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__13__flit 
                                >> 0x1fU))) > (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__my_col))) {
                vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__east_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__13__flit;
            } else {
                vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__west_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__13__flit;
            }
        } else if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__13__flit 
                                   >> 0x20U))) > (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__my_row))) {
            vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__south_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__13__flit;
        } else {
            vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__north_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__13__flit;
        }
    }
    if (((IData)((vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__west_in 
                  >> 0x21U)) & (2U != (3U & (IData)(
                                                    (vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__west_in 
                                                     >> 0x1fU)))))) {
        vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__14__flit 
            = vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__west_in;
        if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__14__flit 
                            >> 0x1fU))) != (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__my_col))) {
            if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__14__flit 
                                >> 0x1fU))) > (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__my_col))) {
                vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__east_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__14__flit;
            } else {
                vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__west_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__14__flit;
            }
        } else if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__14__flit 
                                   >> 0x20U))) > (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__my_row))) {
            vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__south_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__14__flit;
        } else {
            vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__north_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t10__DOT__router__DOT__route_flit__14__flit;
        }
    }
    vlSelfRef.mesh_2x2__DOT__t10__DOT__north_out = vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__north_out;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__east_out = vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__east_out;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__west_out = vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__west_out;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__south_out = vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__south_out;
    vlSelfRef.mesh_2x2__DOT__n10_n00 = vlSelfRef.mesh_2x2__DOT__t10__DOT__west_out;
    vlSelfRef.mesh_2x2__DOT__n10_n11 = vlSelfRef.mesh_2x2__DOT__t10__DOT__south_out;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__east_in = vlSelfRef.mesh_2x2__DOT__n10_n00;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__north_in = vlSelfRef.mesh_2x2__DOT__n10_n11;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__east_in 
        = vlSelfRef.mesh_2x2__DOT__t00__DOT__east_in;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__north_in 
        = vlSelfRef.mesh_2x2__DOT__t11__DOT__north_in;
}

void Vtop___024root___ico_comb__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__north_out = 0ULL;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__south_out = 0ULL;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__east_out = 0ULL;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__west_out = 0ULL;
    if (((IData)((vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__inject_flit 
                  >> 0x21U)) & (3U != (3U & (IData)(
                                                    (vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__inject_flit 
                                                     >> 0x1fU)))))) {
        vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__15__flit 
            = vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__inject_flit;
        if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__15__flit 
                            >> 0x1fU))) != (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__my_col))) {
            if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__15__flit 
                                >> 0x1fU))) > (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__my_col))) {
                vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__east_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__15__flit;
            } else {
                vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__west_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__15__flit;
            }
        } else if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__15__flit 
                                   >> 0x20U))) > (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__my_row))) {
            vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__south_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__15__flit;
        } else {
            vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__north_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__15__flit;
        }
    }
    if (((IData)((vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__north_in 
                  >> 0x21U)) & (3U != (3U & (IData)(
                                                    (vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__north_in 
                                                     >> 0x1fU)))))) {
        vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__16__flit 
            = vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__north_in;
        if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__16__flit 
                            >> 0x1fU))) != (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__my_col))) {
            if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__16__flit 
                                >> 0x1fU))) > (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__my_col))) {
                vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__east_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__16__flit;
            } else {
                vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__west_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__16__flit;
            }
        } else if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__16__flit 
                                   >> 0x20U))) > (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__my_row))) {
            vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__south_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__16__flit;
        } else {
            vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__north_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__16__flit;
        }
    }
    if (((IData)((vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__south_in 
                  >> 0x21U)) & (3U != (3U & (IData)(
                                                    (vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__south_in 
                                                     >> 0x1fU)))))) {
        vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__17__flit 
            = vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__south_in;
        if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__17__flit 
                            >> 0x1fU))) != (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__my_col))) {
            if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__17__flit 
                                >> 0x1fU))) > (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__my_col))) {
                vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__east_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__17__flit;
            } else {
                vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__west_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__17__flit;
            }
        } else if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__17__flit 
                                   >> 0x20U))) > (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__my_row))) {
            vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__south_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__17__flit;
        } else {
            vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__north_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__17__flit;
        }
    }
    if (((IData)((vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__east_in 
                  >> 0x21U)) & (3U != (3U & (IData)(
                                                    (vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__east_in 
                                                     >> 0x1fU)))))) {
        vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__18__flit 
            = vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__east_in;
        if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__18__flit 
                            >> 0x1fU))) != (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__my_col))) {
            if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__18__flit 
                                >> 0x1fU))) > (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__my_col))) {
                vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__east_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__18__flit;
            } else {
                vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__west_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__18__flit;
            }
        } else if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__18__flit 
                                   >> 0x20U))) > (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__my_row))) {
            vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__south_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__18__flit;
        } else {
            vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__north_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__18__flit;
        }
    }
    if (((IData)((vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__west_in 
                  >> 0x21U)) & (3U != (3U & (IData)(
                                                    (vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__west_in 
                                                     >> 0x1fU)))))) {
        vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__19__flit 
            = vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__west_in;
        if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__19__flit 
                            >> 0x1fU))) != (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__my_col))) {
            if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__19__flit 
                                >> 0x1fU))) > (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__my_col))) {
                vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__east_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__19__flit;
            } else {
                vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__west_out 
                    = vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__19__flit;
            }
        } else if (((1U & (IData)((vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__19__flit 
                                   >> 0x20U))) > (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__my_row))) {
            vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__south_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__19__flit;
        } else {
            vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__north_out 
                = vlSelfRef.__Vtask_mesh_2x2__DOT__t11__DOT__router__DOT__route_flit__19__flit;
        }
    }
    vlSelfRef.mesh_2x2__DOT__t11__DOT__south_out = vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__south_out;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__east_out = vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__east_out;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__north_out = vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__north_out;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__west_out = vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__west_out;
    vlSelfRef.mesh_2x2__DOT__n11_n10 = vlSelfRef.mesh_2x2__DOT__t11__DOT__north_out;
    vlSelfRef.mesh_2x2__DOT__n11_n01 = vlSelfRef.mesh_2x2__DOT__t11__DOT__west_out;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__south_in = vlSelfRef.mesh_2x2__DOT__n11_n10;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__east_in = vlSelfRef.mesh_2x2__DOT__n11_n01;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__south_in 
        = vlSelfRef.mesh_2x2__DOT__t10__DOT__south_in;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__east_in 
        = vlSelfRef.mesh_2x2__DOT__t01__DOT__east_in;
}

void Vtop_subservient_core___ico_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__0(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___ico_sequent__TOP__mesh_2x2__DOT__t01__DOT__core__0(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___ico_sequent__TOP__mesh_2x2__DOT__t10__DOT__core__0(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___ico_sequent__TOP__mesh_2x2__DOT__t11__DOT__core__0(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___ico_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__1(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___ico_sequent__TOP__mesh_2x2__DOT__t01__DOT__core__1(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___ico_sequent__TOP__mesh_2x2__DOT__t10__DOT__core__1(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___ico_sequent__TOP__mesh_2x2__DOT__t11__DOT__core__1(Vtop_subservient_core* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[1U])) {
        Vtop_subservient_core___ico_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__0((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
        Vtop_subservient_core___ico_sequent__TOP__mesh_2x2__DOT__t01__DOT__core__0((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
        Vtop_subservient_core___ico_sequent__TOP__mesh_2x2__DOT__t10__DOT__core__0((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
        Vtop_subservient_core___ico_sequent__TOP__mesh_2x2__DOT__t11__DOT__core__0((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        Vtop_subservient_core___ico_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__1((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
        Vtop_subservient_core___ico_sequent__TOP__mesh_2x2__DOT__t01__DOT__core__1((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
        Vtop_subservient_core___ico_sequent__TOP__mesh_2x2__DOT__t10__DOT__core__1((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
        Vtop_subservient_core___ico_sequent__TOP__mesh_2x2__DOT__t11__DOT__core__1((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (3ULL 
                                                   & vlSelfRef.__VicoTriggered
                                                   [0U]))) {
        Vtop___024root___ico_comb__TOP__0(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (7ULL 
                                                   & vlSelfRef.__VicoTriggered
                                                   [0U]))) {
        Vtop___024root___ico_comb__TOP__1(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x000000000000000bULL 
                                                   & vlSelfRef.__VicoTriggered
                                                   [0U]))) {
        Vtop___024root___ico_comb__TOP__2(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x000000000000000fULL 
                                                   & vlSelfRef.__VicoTriggered
                                                   [0U]))) {
        Vtop___024root___ico_comb__TOP__3(vlSelf);
    }
}

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (((QData)((IData)(
                                                      (((((((IData)(vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t11__DOT__core__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk__0))) 
                                                           << 3U) 
                                                          | (((IData)(vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.servile__DOT__cpu__DOT__mem_if__DOT__i_clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t11__DOT__core__servile__DOT__cpu__DOT__mem_if__DOT__i_clk__0))) 
                                                             << 2U)) 
                                                         | ((((IData)(vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.servile__DOT__cpu__DOT__alu__DOT__clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t11__DOT__core__servile__DOT__cpu__DOT__alu__DOT__clk__0))) 
                                                             << 1U) 
                                                            | ((IData)(vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.servile__DOT__cpu__DOT__ctrl__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t11__DOT__core__servile__DOT__cpu__DOT__ctrl__DOT__clk__0))))) 
                                                        << 0x00000010U) 
                                                       | ((((((((IData)(vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.servile__DOT__cpu__DOT__bufreg2__DOT__i_clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t11__DOT__core__servile__DOT__cpu__DOT__bufreg2__DOT__i_clk__0))) 
                                                               << 3U) 
                                                              | (((IData)(vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.servile__DOT__cpu__DOT__bufreg__DOT__i_clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t11__DOT__core__servile__DOT__cpu__DOT__bufreg__DOT__i_clk__0))) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.servile__DOT__cpu__DOT__immdec__DOT__i_clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t11__DOT__core__servile__DOT__cpu__DOT__immdec__DOT__i_clk__0))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.servile__DOT__cpu__DOT__decode__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t11__DOT__core__servile__DOT__cpu__DOT__decode__DOT__clk__0))))) 
                                                            << 0x0000000cU) 
                                                           | ((((((IData)(vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.servile__DOT__cpu__DOT__state__DOT__i_clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t11__DOT__core__servile__DOT__cpu__DOT__state__DOT__i_clk__0))) 
                                                                 << 3U) 
                                                                | (((IData)(vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.servile__DOT__rf_ram_if__DOT__i_clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t11__DOT__core__servile__DOT__rf_ram_if__DOT__i_clk__0))) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.rf_mem_if__DOT__i_clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t11__DOT__core__rf_mem_if__DOT__i_clk__0))) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t10__DOT__core__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk__0))))) 
                                                              << 8U)) 
                                                          | (((((((IData)(vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.servile__DOT__cpu__DOT__mem_if__DOT__i_clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t10__DOT__core__servile__DOT__cpu__DOT__mem_if__DOT__i_clk__0))) 
                                                                 << 3U) 
                                                                | (((IData)(vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.servile__DOT__cpu__DOT__alu__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t10__DOT__core__servile__DOT__cpu__DOT__alu__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.servile__DOT__cpu__DOT__ctrl__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t10__DOT__core__servile__DOT__cpu__DOT__ctrl__DOT__clk__0))) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.servile__DOT__cpu__DOT__bufreg2__DOT__i_clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t10__DOT__core__servile__DOT__cpu__DOT__bufreg2__DOT__i_clk__0))))) 
                                                              << 4U) 
                                                             | (((((IData)(vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.servile__DOT__cpu__DOT__bufreg__DOT__i_clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t10__DOT__core__servile__DOT__cpu__DOT__bufreg__DOT__i_clk__0))) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.servile__DOT__cpu__DOT__immdec__DOT__i_clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t10__DOT__core__servile__DOT__cpu__DOT__immdec__DOT__i_clk__0))) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.servile__DOT__cpu__DOT__decode__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t10__DOT__core__servile__DOT__cpu__DOT__decode__DOT__clk__0))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.servile__DOT__cpu__DOT__state__DOT__i_clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t10__DOT__core__servile__DOT__cpu__DOT__state__DOT__i_clk__0)))))))))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       ((((((((((IData)(vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.servile__DOT__rf_ram_if__DOT__i_clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t10__DOT__core__servile__DOT__rf_ram_if__DOT__i_clk__0))) 
                                                               << 3U) 
                                                              | (((IData)(vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.rf_mem_if__DOT__i_clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t10__DOT__core__rf_mem_if__DOT__i_clk__0))) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t01__DOT__core__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk__0))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.servile__DOT__cpu__DOT__mem_if__DOT__i_clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t01__DOT__core__servile__DOT__cpu__DOT__mem_if__DOT__i_clk__0))))) 
                                                            << 0x0000000cU) 
                                                           | ((((((IData)(vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.servile__DOT__cpu__DOT__alu__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t01__DOT__core__servile__DOT__cpu__DOT__alu__DOT__clk__0))) 
                                                                 << 3U) 
                                                                | (((IData)(vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.servile__DOT__cpu__DOT__ctrl__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t01__DOT__core__servile__DOT__cpu__DOT__ctrl__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.servile__DOT__cpu__DOT__bufreg2__DOT__i_clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t01__DOT__core__servile__DOT__cpu__DOT__bufreg2__DOT__i_clk__0))) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.servile__DOT__cpu__DOT__bufreg__DOT__i_clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t01__DOT__core__servile__DOT__cpu__DOT__bufreg__DOT__i_clk__0))))) 
                                                              << 8U)) 
                                                          | (((((((IData)(vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.servile__DOT__cpu__DOT__immdec__DOT__i_clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t01__DOT__core__servile__DOT__cpu__DOT__immdec__DOT__i_clk__0))) 
                                                                 << 3U) 
                                                                | (((IData)(vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.servile__DOT__cpu__DOT__decode__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t01__DOT__core__servile__DOT__cpu__DOT__decode__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.servile__DOT__cpu__DOT__state__DOT__i_clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t01__DOT__core__servile__DOT__cpu__DOT__state__DOT__i_clk__0))) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.servile__DOT__rf_ram_if__DOT__i_clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t01__DOT__core__servile__DOT__rf_ram_if__DOT__i_clk__0))))) 
                                                              << 4U) 
                                                             | (((((IData)(vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.rf_mem_if__DOT__i_clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t01__DOT__core__rf_mem_if__DOT__i_clk__0))) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__core__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk__0))) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.servile__DOT__cpu__DOT__mem_if__DOT__i_clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__core__servile__DOT__cpu__DOT__mem_if__DOT__i_clk__0))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.servile__DOT__cpu__DOT__alu__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__core__servile__DOT__cpu__DOT__alu__DOT__clk__0))))))) 
                                                         << 0x00000010U) 
                                                        | ((((((((IData)(vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.servile__DOT__cpu__DOT__ctrl__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__core__servile__DOT__cpu__DOT__ctrl__DOT__clk__0))) 
                                                                << 3U) 
                                                               | (((IData)(vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.servile__DOT__cpu__DOT__bufreg2__DOT__i_clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__core__servile__DOT__cpu__DOT__bufreg2__DOT__i_clk__0))) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.servile__DOT__cpu__DOT__bufreg__DOT__i_clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__core__servile__DOT__cpu__DOT__bufreg__DOT__i_clk__0))) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.servile__DOT__cpu__DOT__immdec__DOT__i_clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__core__servile__DOT__cpu__DOT__immdec__DOT__i_clk__0))))) 
                                                             << 0x0000000cU) 
                                                            | ((((((IData)(vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.servile__DOT__cpu__DOT__decode__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__core__servile__DOT__cpu__DOT__decode__DOT__clk__0))) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.servile__DOT__cpu__DOT__state__DOT__i_clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__core__servile__DOT__cpu__DOT__state__DOT__i_clk__0))) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.servile__DOT__rf_ram_if__DOT__i_clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__core__servile__DOT__rf_ram_if__DOT__i_clk__0))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.rf_mem_if__DOT__i_clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__core__rf_mem_if__DOT__i_clk__0))))) 
                                                               << 8U)) 
                                                           | (((((((IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t11__DOT__router__DOT__clk__0))) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t10__DOT__router__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t01__DOT__router__DOT__clk__0))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__router__DOT__clk__0))))) 
                                                               << 4U) 
                                                              | ((((vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__south_in 
                                                                    != vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t10__DOT__router__DOT__south_in__2) 
                                                                   << 3U) 
                                                                  | ((vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__east_in 
                                                                      != vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t01__DOT__router__DOT__east_in__2) 
                                                                     << 2U)) 
                                                                 | (((vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__east_in 
                                                                      != vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__router__DOT__east_in__2) 
                                                                     << 1U) 
                                                                    | (vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__south_in 
                                                                       != vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__router__DOT__south_in__2)))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__router__DOT__south_in__2 
        = vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__south_in;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__router__DOT__east_in__2 
        = vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__east_in;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t01__DOT__router__DOT__east_in__2 
        = vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__east_in;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t10__DOT__router__DOT__south_in__2 
        = vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__south_in;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__router__DOT__clk__0 
        = vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t01__DOT__router__DOT__clk__0 
        = vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t10__DOT__router__DOT__clk__0 
        = vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t11__DOT__router__DOT__clk__0 
        = vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__core__rf_mem_if__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.rf_mem_if__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__core__servile__DOT__rf_ram_if__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.servile__DOT__rf_ram_if__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__core__servile__DOT__cpu__DOT__state__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.servile__DOT__cpu__DOT__state__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__core__servile__DOT__cpu__DOT__decode__DOT__clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.servile__DOT__cpu__DOT__decode__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__core__servile__DOT__cpu__DOT__immdec__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.servile__DOT__cpu__DOT__immdec__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__core__servile__DOT__cpu__DOT__bufreg__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.servile__DOT__cpu__DOT__bufreg__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__core__servile__DOT__cpu__DOT__bufreg2__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.servile__DOT__cpu__DOT__bufreg2__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__core__servile__DOT__cpu__DOT__ctrl__DOT__clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.servile__DOT__cpu__DOT__ctrl__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__core__servile__DOT__cpu__DOT__alu__DOT__clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.servile__DOT__cpu__DOT__alu__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__core__servile__DOT__cpu__DOT__mem_if__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.servile__DOT__cpu__DOT__mem_if__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t00__DOT__core__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t01__DOT__core__rf_mem_if__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.rf_mem_if__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t01__DOT__core__servile__DOT__rf_ram_if__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.servile__DOT__rf_ram_if__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t01__DOT__core__servile__DOT__cpu__DOT__state__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.servile__DOT__cpu__DOT__state__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t01__DOT__core__servile__DOT__cpu__DOT__decode__DOT__clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.servile__DOT__cpu__DOT__decode__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t01__DOT__core__servile__DOT__cpu__DOT__immdec__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.servile__DOT__cpu__DOT__immdec__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t01__DOT__core__servile__DOT__cpu__DOT__bufreg__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.servile__DOT__cpu__DOT__bufreg__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t01__DOT__core__servile__DOT__cpu__DOT__bufreg2__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.servile__DOT__cpu__DOT__bufreg2__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t01__DOT__core__servile__DOT__cpu__DOT__ctrl__DOT__clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.servile__DOT__cpu__DOT__ctrl__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t01__DOT__core__servile__DOT__cpu__DOT__alu__DOT__clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.servile__DOT__cpu__DOT__alu__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t01__DOT__core__servile__DOT__cpu__DOT__mem_if__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.servile__DOT__cpu__DOT__mem_if__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t01__DOT__core__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t10__DOT__core__rf_mem_if__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.rf_mem_if__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t10__DOT__core__servile__DOT__rf_ram_if__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.servile__DOT__rf_ram_if__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t10__DOT__core__servile__DOT__cpu__DOT__state__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.servile__DOT__cpu__DOT__state__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t10__DOT__core__servile__DOT__cpu__DOT__decode__DOT__clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.servile__DOT__cpu__DOT__decode__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t10__DOT__core__servile__DOT__cpu__DOT__immdec__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.servile__DOT__cpu__DOT__immdec__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t10__DOT__core__servile__DOT__cpu__DOT__bufreg__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.servile__DOT__cpu__DOT__bufreg__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t10__DOT__core__servile__DOT__cpu__DOT__bufreg2__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.servile__DOT__cpu__DOT__bufreg2__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t10__DOT__core__servile__DOT__cpu__DOT__ctrl__DOT__clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.servile__DOT__cpu__DOT__ctrl__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t10__DOT__core__servile__DOT__cpu__DOT__alu__DOT__clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.servile__DOT__cpu__DOT__alu__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t10__DOT__core__servile__DOT__cpu__DOT__mem_if__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.servile__DOT__cpu__DOT__mem_if__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t10__DOT__core__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t11__DOT__core__rf_mem_if__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.rf_mem_if__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t11__DOT__core__servile__DOT__rf_ram_if__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.servile__DOT__rf_ram_if__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t11__DOT__core__servile__DOT__cpu__DOT__state__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.servile__DOT__cpu__DOT__state__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t11__DOT__core__servile__DOT__cpu__DOT__decode__DOT__clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.servile__DOT__cpu__DOT__decode__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t11__DOT__core__servile__DOT__cpu__DOT__immdec__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.servile__DOT__cpu__DOT__immdec__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t11__DOT__core__servile__DOT__cpu__DOT__bufreg__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.servile__DOT__cpu__DOT__bufreg__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t11__DOT__core__servile__DOT__cpu__DOT__bufreg2__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.servile__DOT__cpu__DOT__bufreg2__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t11__DOT__core__servile__DOT__cpu__DOT__ctrl__DOT__clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.servile__DOT__cpu__DOT__ctrl__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t11__DOT__core__servile__DOT__cpu__DOT__alu__DOT__clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.servile__DOT__cpu__DOT__alu__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t11__DOT__core__servile__DOT__cpu__DOT__mem_if__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.servile__DOT__cpu__DOT__mem_if__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mesh_2x2__DOT__t11__DOT__core__servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk__0 
        = vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered
                                         [0U]);
        vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered
                                         [0U]);
        vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered
                                         [0U]);
        vlSelfRef.__VactTriggered[0U] = (8ULL | vlSelfRef.__VactTriggered
                                         [0U]);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
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

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtop___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtop___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((0x000000000000000bULL & vlSelfRef.__VactTriggered
         [0U])) {
        Vtop___024root___ico_comb__TOP__2(vlSelf);
    }
    if ((0x000000000000000fULL & vlSelfRef.__VactTriggered
         [0U])) {
        Vtop___024root___ico_comb__TOP__3(vlSelf);
    }
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_adr = vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.o_wb_adr;
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_adr = vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.o_wb_adr;
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_adr = vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.o_wb_adr;
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_adr = vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.o_wb_adr;
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_dat_o = vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.o_wb_dat;
}

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_dat_o = vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.o_wb_dat;
}

void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_dat_o = vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.o_wb_dat;
}

void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_dat_o = vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.o_wb_dat;
}

extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h30da34ed_0;
extern const VlUnpacked<IData/*31:0*/, 1024> Vtop__ConstPool__TABLE_hb3acba84_0;

void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_ack 
        = ((~ (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__rst)) 
           & (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_stb));
    __Vtableidx1 = ((((((IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__north_buf) 
                        << 3U) | ((IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__south_buf) 
                                  << 2U)) | (((IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__east_buf) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__west_buf))) 
                     << 6U) | (((IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__recv_sel) 
                                << 2U) | (((IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__is_network_recv) 
                                           << 1U) | (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__rst))));
    if (vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__rst) {
        vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__north_valid = 0U;
        vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__west_valid = 0U;
        vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__south_valid = 0U;
        vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__east_valid = 0U;
        vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__inject_flit = 0ULL;
        vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__north_buf = 0U;
        vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__west_buf = 0U;
        vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__south_buf = 0U;
        vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__east_buf = 0U;
    } else {
        if ((IData)((0x0000000200000000ULL == (0x0000000380000000ULL 
                                               & vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__north_in)))) {
            vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__north_valid = 1U;
            vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__north_buf 
                = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__north_in));
        }
        if ((IData)((0x0000000200000000ULL == (0x0000000380000000ULL 
                                               & vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__west_in)))) {
            vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__west_valid = 1U;
            vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__west_buf 
                = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__west_in));
        }
        if ((IData)((0x0000000200000000ULL == (0x0000000380000000ULL 
                                               & vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__south_in)))) {
            vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__south_valid = 1U;
            vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__south_buf 
                = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__south_in));
        }
        if ((IData)((0x0000000200000000ULL == (0x0000000380000000ULL 
                                               & vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__east_in)))) {
            vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__east_valid = 1U;
            vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__east_buf 
                = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__east_in));
        }
        vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__inject_flit 
            = ((IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__is_network_send)
                ? (((QData)((IData)((2U | (1U & (vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_adr 
                                                 >> 3U))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((0x80000000U 
                                                        & (vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_adr 
                                                           << 0x0000001dU)) 
                                                       | (1U 
                                                          & vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_dat_o)))))
                : 0ULL);
    }
    if (Vtop__ConstPool__TABLE_h30da34ed_0[__Vtableidx1]) {
        vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_dat_i 
            = Vtop__ConstPool__TABLE_hb3acba84_0[__Vtableidx1];
    }
    vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_ack = vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_ack;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_dat_i = vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_dat_i;
}

void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_ack 
        = ((~ (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__rst)) 
           & (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_stb));
    __Vtableidx2 = ((((((IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__north_buf) 
                        << 3U) | ((IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__south_buf) 
                                  << 2U)) | (((IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__east_buf) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__west_buf))) 
                     << 6U) | (((IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__recv_sel) 
                                << 2U) | (((IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__is_network_recv) 
                                           << 1U) | (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__rst))));
    if (vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__rst) {
        vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__south_valid = 0U;
        vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__west_valid = 0U;
        vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__east_valid = 0U;
        vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__north_valid = 0U;
        vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__inject_flit = 0ULL;
        vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__south_buf = 0U;
        vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__west_buf = 0U;
        vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__east_buf = 0U;
        vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__north_buf = 0U;
    } else {
        if ((IData)((0x0000000280000000ULL == (0x0000000380000000ULL 
                                               & vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__south_in)))) {
            vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__south_valid = 1U;
            vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__south_buf 
                = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__south_in));
        }
        if ((IData)((0x0000000280000000ULL == (0x0000000380000000ULL 
                                               & vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__west_in)))) {
            vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__west_valid = 1U;
            vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__west_buf 
                = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__west_in));
        }
        if ((IData)((0x0000000280000000ULL == (0x0000000380000000ULL 
                                               & vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__east_in)))) {
            vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__east_valid = 1U;
            vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__east_buf 
                = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__east_in));
        }
        if ((IData)((0x0000000280000000ULL == (0x0000000380000000ULL 
                                               & vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__north_in)))) {
            vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__north_valid = 1U;
            vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__north_buf 
                = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__north_in));
        }
        vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__inject_flit 
            = ((IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__is_network_send)
                ? (((QData)((IData)((2U | (1U & (vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_adr 
                                                 >> 3U))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((0x80000000U 
                                                        & (vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_adr 
                                                           << 0x0000001dU)) 
                                                       | (1U 
                                                          & vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_dat_o)))))
                : 0ULL);
    }
    if (Vtop__ConstPool__TABLE_h30da34ed_0[__Vtableidx2]) {
        vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_dat_i 
            = Vtop__ConstPool__TABLE_hb3acba84_0[__Vtableidx2];
    }
    vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_ack = vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_ack;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_dat_i = vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_dat_i;
}

void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_ack 
        = ((~ (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__rst)) 
           & (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_stb));
    __Vtableidx3 = ((((((IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__north_buf) 
                        << 3U) | ((IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__south_buf) 
                                  << 2U)) | (((IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__east_buf) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__west_buf))) 
                     << 6U) | (((IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__recv_sel) 
                                << 2U) | (((IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__is_network_recv) 
                                           << 1U) | (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__rst))));
    if (vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__rst) {
        vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__north_valid = 0U;
        vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__east_valid = 0U;
        vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__south_valid = 0U;
        vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__west_valid = 0U;
        vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__inject_flit = 0ULL;
        vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__north_buf = 0U;
        vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__east_buf = 0U;
        vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__south_buf = 0U;
        vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__west_buf = 0U;
    } else {
        if ((IData)((0x0000000300000000ULL == (0x0000000380000000ULL 
                                               & vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__north_in)))) {
            vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__north_valid = 1U;
            vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__north_buf 
                = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__north_in));
        }
        if ((IData)((0x0000000300000000ULL == (0x0000000380000000ULL 
                                               & vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__east_in)))) {
            vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__east_valid = 1U;
            vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__east_buf 
                = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__east_in));
        }
        if ((IData)((0x0000000300000000ULL == (0x0000000380000000ULL 
                                               & vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__south_in)))) {
            vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__south_valid = 1U;
            vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__south_buf 
                = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__south_in));
        }
        if ((IData)((0x0000000300000000ULL == (0x0000000380000000ULL 
                                               & vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__west_in)))) {
            vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__west_valid = 1U;
            vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__west_buf 
                = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__west_in));
        }
        vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__inject_flit 
            = ((IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__is_network_send)
                ? (((QData)((IData)((2U | (1U & (vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_adr 
                                                 >> 3U))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((0x80000000U 
                                                        & (vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_adr 
                                                           << 0x0000001dU)) 
                                                       | (1U 
                                                          & vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_dat_o)))))
                : 0ULL);
    }
    if (Vtop__ConstPool__TABLE_h30da34ed_0[__Vtableidx3]) {
        vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_dat_i 
            = Vtop__ConstPool__TABLE_hb3acba84_0[__Vtableidx3];
    }
    vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_ack = vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_ack;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_dat_i = vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_dat_i;
}

void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_ack 
        = ((~ (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__rst)) 
           & (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_stb));
    __Vtableidx4 = ((((((IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__north_buf) 
                        << 3U) | ((IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__south_buf) 
                                  << 2U)) | (((IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__east_buf) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__west_buf))) 
                     << 6U) | (((IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__recv_sel) 
                                << 2U) | (((IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__is_network_recv) 
                                           << 1U) | (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__rst))));
    if (vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__rst) {
        vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__south_valid = 0U;
        vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__east_valid = 0U;
        vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__north_valid = 0U;
        vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__west_valid = 0U;
        vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__inject_flit = 0ULL;
        vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__south_buf = 0U;
        vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__east_buf = 0U;
        vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__north_buf = 0U;
        vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__west_buf = 0U;
    } else {
        if ((IData)((0x0000000380000000ULL == (0x0000000380000000ULL 
                                               & vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__south_in)))) {
            vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__south_valid = 1U;
            vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__south_buf 
                = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__south_in));
        }
        if ((IData)((0x0000000380000000ULL == (0x0000000380000000ULL 
                                               & vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__east_in)))) {
            vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__east_valid = 1U;
            vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__east_buf 
                = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__east_in));
        }
        if ((IData)((0x0000000380000000ULL == (0x0000000380000000ULL 
                                               & vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__north_in)))) {
            vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__north_valid = 1U;
            vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__north_buf 
                = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__north_in));
        }
        if ((IData)((0x0000000380000000ULL == (0x0000000380000000ULL 
                                               & vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__west_in)))) {
            vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__west_valid = 1U;
            vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__west_buf 
                = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__west_in));
        }
        vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__inject_flit 
            = ((IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__is_network_send)
                ? (((QData)((IData)((2U | (1U & (vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_adr 
                                                 >> 3U))))) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((0x80000000U 
                                                        & (vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_adr 
                                                           << 0x0000001dU)) 
                                                       | (1U 
                                                          & vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_dat_o)))))
                : 0ULL);
    }
    if (Vtop__ConstPool__TABLE_h30da34ed_0[__Vtableidx4]) {
        vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_dat_i 
            = Vtop__ConstPool__TABLE_hb3acba84_0[__Vtableidx4];
    }
    vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_ack = vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_ack;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_dat_i = vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_dat_i;
}

void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_we = vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.o_wb_we;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_we 
        = vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_we;
}

void Vtop___024root___nba_sequent__TOP__13(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_we = vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.o_wb_we;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_we 
        = vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_we;
}

void Vtop___024root___nba_sequent__TOP__14(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__14\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_we = vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.o_wb_we;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_we 
        = vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_we;
}

void Vtop___024root___nba_sequent__TOP__15(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__15\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_we = vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.o_wb_we;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_we 
        = vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_we;
}

void Vtop___024root___nba_sequent__TOP__16(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__16\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_dat_o 
        = vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_dat_o;
}

void Vtop___024root___nba_sequent__TOP__17(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__17\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_adr 
        = vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_adr;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__recv_sel 
        = (0x0000000fU & vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_adr);
}

void Vtop___024root___nba_sequent__TOP__18(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__18\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_dat_o 
        = vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_dat_o;
}

void Vtop___024root___nba_sequent__TOP__19(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__19\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_adr 
        = vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_adr;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__recv_sel 
        = (0x0000000fU & vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_adr);
}

void Vtop___024root___nba_sequent__TOP__20(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__20\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_dat_o 
        = vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_dat_o;
}

void Vtop___024root___nba_sequent__TOP__21(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__21\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_adr 
        = vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_adr;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__recv_sel 
        = (0x0000000fU & vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_adr);
}

void Vtop___024root___nba_sequent__TOP__22(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__22\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_dat_o 
        = vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_dat_o;
}

void Vtop___024root___nba_sequent__TOP__23(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__23\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_adr 
        = vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_adr;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__recv_sel 
        = (0x0000000fU & vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_adr);
}

void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_stb = vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.o_wb_stb;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_stb 
        = vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_stb;
    vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__is_network_send 
        = ((8U == (vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_adr 
                   >> 0x0000001cU)) & ((IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_stb) 
                                       & (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_we)));
    vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__is_network_recv 
        = ((9U == (vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_adr 
                   >> 0x0000001cU)) & ((~ (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_we)) 
                                       & (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_stb)));
}

void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_stb = vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.o_wb_stb;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_stb 
        = vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_stb;
    vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__is_network_send 
        = ((8U == (vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_adr 
                   >> 0x0000001cU)) & ((IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_stb) 
                                       & (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_we)));
    vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__is_network_recv 
        = ((9U == (vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_adr 
                   >> 0x0000001cU)) & ((~ (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_we)) 
                                       & (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_stb)));
}

void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_stb = vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.o_wb_stb;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_stb 
        = vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_stb;
    vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__is_network_send 
        = ((8U == (vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_adr 
                   >> 0x0000001cU)) & ((IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_stb) 
                                       & (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_we)));
    vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__is_network_recv 
        = ((9U == (vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_adr 
                   >> 0x0000001cU)) & ((~ (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_we)) 
                                       & (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_stb)));
}

void Vtop___024root___nba_comb__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_stb = vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.o_wb_stb;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_stb 
        = vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_stb;
    vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__is_network_send 
        = ((8U == (vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_adr 
                   >> 0x0000001cU)) & ((IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_stb) 
                                       & (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_we)));
    vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__is_network_recv 
        = ((9U == (vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_adr 
                   >> 0x0000001cU)) & ((~ (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_we)) 
                                       & (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_stb)));
}

void Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__0(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__1(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__2(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__3(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__4(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__5(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__6(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__7(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__8(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t01__DOT__core__8(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t10__DOT__core__8(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t11__DOT__core__8(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__9(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t01__DOT__core__9(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t10__DOT__core__9(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t11__DOT__core__9(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__10(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__11(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__0(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__1(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__2(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__3(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__4(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__5(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__6(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__12(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__13(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__7(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__8(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__9(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__10(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__11(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__12(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__13(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__14(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t01__DOT__core__9(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t01__DOT__core__10(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t10__DOT__core__9(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t10__DOT__core__10(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t11__DOT__core__9(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t11__DOT__core__10(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__14(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__15(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__16(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__17(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__18(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__19(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__20(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__21(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__22(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__23(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__24(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t01__DOT__core__24(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t10__DOT__core__24(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t11__DOT__core__24(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__25(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__26(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__27(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__28(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__29(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t01__DOT__core__29(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t10__DOT__core__29(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t11__DOT__core__29(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__30(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__31(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__32(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__33(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__34(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__35(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__36(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__37(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__38(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__39(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__40(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__41(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__42(Vtop_subservient_core* vlSelf);
void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__43(Vtop_subservient_core* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vinline__nba_sequent__TOP__8___Vtableidx1;
    __Vinline__nba_sequent__TOP__8___Vtableidx1 = 0;
    SData/*9:0*/ __Vinline__nba_sequent__TOP__9___Vtableidx2;
    __Vinline__nba_sequent__TOP__9___Vtableidx2 = 0;
    SData/*9:0*/ __Vinline__nba_sequent__TOP__10___Vtableidx3;
    __Vinline__nba_sequent__TOP__10___Vtableidx3 = 0;
    SData/*9:0*/ __Vinline__nba_sequent__TOP__11___Vtableidx4;
    __Vinline__nba_sequent__TOP__11___Vtableidx4 = 0;
    // Body
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__0((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000100000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__0((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000080000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__0((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000040000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__0((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000000000008000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__1((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000004000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__1((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000002000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__1((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0001000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__1((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000000000040000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__2((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000020000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__2((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000010000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__2((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0008000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__2((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__3((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000080000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__3((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000040000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__3((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000020000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__3((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000000000002000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__4((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
        vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_adr = vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.o_wb_adr;
    }
    if ((0x0000000001000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__4((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
        vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_adr = vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.o_wb_adr;
    }
    if ((0x0000000800000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__4((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
        vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_adr = vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.o_wb_adr;
    }
    if ((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__4((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
        vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_adr = vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.o_wb_adr;
    }
    if ((0x0000000000004000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__5((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
        vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_dat_o 
            = vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.o_wb_dat;
    }
    if ((0x0000000002000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__5((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
        vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_dat_o 
            = vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.o_wb_dat;
    }
    if ((0x0000001000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__5((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
        vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_dat_o 
            = vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.o_wb_dat;
    }
    if ((0x0000800000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__5((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
        vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_dat_o 
            = vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.o_wb_dat;
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__6((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000200000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__6((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000100000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__6((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000080000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__6((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000000000001000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__7((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000800000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__7((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000400000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__7((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000200000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__7((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_ack 
            = ((~ (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__rst)) 
               & (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_stb));
        __Vinline__nba_sequent__TOP__8___Vtableidx1 
            = ((((((IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__north_buf) 
                   << 3U) | ((IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__south_buf) 
                             << 2U)) | (((IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__east_buf) 
                                         << 1U) | (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__west_buf))) 
                << 6U) | (((IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__recv_sel) 
                           << 2U) | (((IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__is_network_recv) 
                                      << 1U) | (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__rst))));
        if (vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__rst) {
            vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__north_valid = 0U;
            vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__west_valid = 0U;
            vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__south_valid = 0U;
            vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__east_valid = 0U;
            vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__inject_flit = 0ULL;
            vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__north_buf = 0U;
            vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__west_buf = 0U;
            vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__south_buf = 0U;
            vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__east_buf = 0U;
        } else {
            if ((IData)((0x0000000200000000ULL == (0x0000000380000000ULL 
                                                   & vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__north_in)))) {
                vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__north_valid = 1U;
                vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__north_buf 
                    = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__north_in));
            }
            if ((IData)((0x0000000200000000ULL == (0x0000000380000000ULL 
                                                   & vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__west_in)))) {
                vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__west_valid = 1U;
                vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__west_buf 
                    = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__west_in));
            }
            if ((IData)((0x0000000200000000ULL == (0x0000000380000000ULL 
                                                   & vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__south_in)))) {
                vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__south_valid = 1U;
                vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__south_buf 
                    = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__south_in));
            }
            if ((IData)((0x0000000200000000ULL == (0x0000000380000000ULL 
                                                   & vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__east_in)))) {
                vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__east_valid = 1U;
                vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__east_buf 
                    = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__east_in));
            }
            vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__inject_flit 
                = ((IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__is_network_send)
                    ? (((QData)((IData)((2U | (1U & 
                                               (vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_adr 
                                                >> 3U))))) 
                        << 0x00000020U) | (QData)((IData)(
                                                          ((0x80000000U 
                                                            & (vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_adr 
                                                               << 0x0000001dU)) 
                                                           | (1U 
                                                              & vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_dat_o)))))
                    : 0ULL);
        }
        if (Vtop__ConstPool__TABLE_h30da34ed_0[__Vinline__nba_sequent__TOP__8___Vtableidx1]) {
            vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_dat_i 
                = Vtop__ConstPool__TABLE_hb3acba84_0
                [__Vinline__nba_sequent__TOP__8___Vtableidx1];
        }
        vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_ack = vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_ack;
        vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_dat_i 
            = vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_dat_i;
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__8((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_ack 
            = ((~ (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__rst)) 
               & (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_stb));
        __Vinline__nba_sequent__TOP__9___Vtableidx2 
            = ((((((IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__north_buf) 
                   << 3U) | ((IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__south_buf) 
                             << 2U)) | (((IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__east_buf) 
                                         << 1U) | (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__west_buf))) 
                << 6U) | (((IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__recv_sel) 
                           << 2U) | (((IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__is_network_recv) 
                                      << 1U) | (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__rst))));
        if (vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__rst) {
            vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__south_valid = 0U;
            vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__west_valid = 0U;
            vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__east_valid = 0U;
            vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__north_valid = 0U;
            vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__inject_flit = 0ULL;
            vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__south_buf = 0U;
            vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__west_buf = 0U;
            vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__east_buf = 0U;
            vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__north_buf = 0U;
        } else {
            if ((IData)((0x0000000280000000ULL == (0x0000000380000000ULL 
                                                   & vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__south_in)))) {
                vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__south_valid = 1U;
                vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__south_buf 
                    = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__south_in));
            }
            if ((IData)((0x0000000280000000ULL == (0x0000000380000000ULL 
                                                   & vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__west_in)))) {
                vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__west_valid = 1U;
                vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__west_buf 
                    = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__west_in));
            }
            if ((IData)((0x0000000280000000ULL == (0x0000000380000000ULL 
                                                   & vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__east_in)))) {
                vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__east_valid = 1U;
                vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__east_buf 
                    = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__east_in));
            }
            if ((IData)((0x0000000280000000ULL == (0x0000000380000000ULL 
                                                   & vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__north_in)))) {
                vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__north_valid = 1U;
                vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__north_buf 
                    = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__north_in));
            }
            vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__inject_flit 
                = ((IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__is_network_send)
                    ? (((QData)((IData)((2U | (1U & 
                                               (vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_adr 
                                                >> 3U))))) 
                        << 0x00000020U) | (QData)((IData)(
                                                          ((0x80000000U 
                                                            & (vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_adr 
                                                               << 0x0000001dU)) 
                                                           | (1U 
                                                              & vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_dat_o)))))
                    : 0ULL);
        }
        if (Vtop__ConstPool__TABLE_h30da34ed_0[__Vinline__nba_sequent__TOP__9___Vtableidx2]) {
            vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_dat_i 
                = Vtop__ConstPool__TABLE_hb3acba84_0
                [__Vinline__nba_sequent__TOP__9___Vtableidx2];
        }
        vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_ack = vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_ack;
        vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_dat_i 
            = vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_dat_i;
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t01__DOT__core__8((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_ack 
            = ((~ (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__rst)) 
               & (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_stb));
        __Vinline__nba_sequent__TOP__10___Vtableidx3 
            = ((((((IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__north_buf) 
                   << 3U) | ((IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__south_buf) 
                             << 2U)) | (((IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__east_buf) 
                                         << 1U) | (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__west_buf))) 
                << 6U) | (((IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__recv_sel) 
                           << 2U) | (((IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__is_network_recv) 
                                      << 1U) | (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__rst))));
        if (vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__rst) {
            vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__north_valid = 0U;
            vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__east_valid = 0U;
            vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__south_valid = 0U;
            vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__west_valid = 0U;
            vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__inject_flit = 0ULL;
            vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__north_buf = 0U;
            vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__east_buf = 0U;
            vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__south_buf = 0U;
            vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__west_buf = 0U;
        } else {
            if ((IData)((0x0000000300000000ULL == (0x0000000380000000ULL 
                                                   & vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__north_in)))) {
                vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__north_valid = 1U;
                vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__north_buf 
                    = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__north_in));
            }
            if ((IData)((0x0000000300000000ULL == (0x0000000380000000ULL 
                                                   & vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__east_in)))) {
                vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__east_valid = 1U;
                vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__east_buf 
                    = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__east_in));
            }
            if ((IData)((0x0000000300000000ULL == (0x0000000380000000ULL 
                                                   & vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__south_in)))) {
                vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__south_valid = 1U;
                vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__south_buf 
                    = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__south_in));
            }
            if ((IData)((0x0000000300000000ULL == (0x0000000380000000ULL 
                                                   & vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__west_in)))) {
                vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__west_valid = 1U;
                vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__west_buf 
                    = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__west_in));
            }
            vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__inject_flit 
                = ((IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__is_network_send)
                    ? (((QData)((IData)((2U | (1U & 
                                               (vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_adr 
                                                >> 3U))))) 
                        << 0x00000020U) | (QData)((IData)(
                                                          ((0x80000000U 
                                                            & (vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_adr 
                                                               << 0x0000001dU)) 
                                                           | (1U 
                                                              & vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_dat_o)))))
                    : 0ULL);
        }
        if (Vtop__ConstPool__TABLE_h30da34ed_0[__Vinline__nba_sequent__TOP__10___Vtableidx3]) {
            vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_dat_i 
                = Vtop__ConstPool__TABLE_hb3acba84_0
                [__Vinline__nba_sequent__TOP__10___Vtableidx3];
        }
        vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_ack = vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_ack;
        vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_dat_i 
            = vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_dat_i;
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t10__DOT__core__8((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_ack 
            = ((~ (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__rst)) 
               & (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_stb));
        __Vinline__nba_sequent__TOP__11___Vtableidx4 
            = ((((((IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__north_buf) 
                   << 3U) | ((IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__south_buf) 
                             << 2U)) | (((IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__east_buf) 
                                         << 1U) | (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__west_buf))) 
                << 6U) | (((IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__recv_sel) 
                           << 2U) | (((IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__is_network_recv) 
                                      << 1U) | (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__rst))));
        if (vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__rst) {
            vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__south_valid = 0U;
            vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__east_valid = 0U;
            vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__north_valid = 0U;
            vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__west_valid = 0U;
            vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__inject_flit = 0ULL;
            vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__south_buf = 0U;
            vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__east_buf = 0U;
            vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__north_buf = 0U;
            vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__west_buf = 0U;
        } else {
            if ((IData)((0x0000000380000000ULL == (0x0000000380000000ULL 
                                                   & vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__south_in)))) {
                vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__south_valid = 1U;
                vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__south_buf 
                    = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__south_in));
            }
            if ((IData)((0x0000000380000000ULL == (0x0000000380000000ULL 
                                                   & vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__east_in)))) {
                vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__east_valid = 1U;
                vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__east_buf 
                    = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__east_in));
            }
            if ((IData)((0x0000000380000000ULL == (0x0000000380000000ULL 
                                                   & vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__north_in)))) {
                vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__north_valid = 1U;
                vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__north_buf 
                    = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__north_in));
            }
            if ((IData)((0x0000000380000000ULL == (0x0000000380000000ULL 
                                                   & vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__west_in)))) {
                vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__west_valid = 1U;
                vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__west_buf 
                    = (1U & (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__west_in));
            }
            vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__inject_flit 
                = ((IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__is_network_send)
                    ? (((QData)((IData)((2U | (1U & 
                                               (vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_adr 
                                                >> 3U))))) 
                        << 0x00000020U) | (QData)((IData)(
                                                          ((0x80000000U 
                                                            & (vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_adr 
                                                               << 0x0000001dU)) 
                                                           | (1U 
                                                              & vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_dat_o)))))
                    : 0ULL);
        }
        if (Vtop__ConstPool__TABLE_h30da34ed_0[__Vinline__nba_sequent__TOP__11___Vtableidx4]) {
            vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_dat_i 
                = Vtop__ConstPool__TABLE_hb3acba84_0
                [__Vinline__nba_sequent__TOP__11___Vtableidx4];
        }
        vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_ack = vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_ack;
        vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_dat_i 
            = vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_dat_i;
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t11__DOT__core__8((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000000000000800ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__9((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
        vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_we = vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.o_wb_we;
        vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_we 
            = vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_we;
    }
    if ((0x0000000000400000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t01__DOT__core__9((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
        vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_we = vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.o_wb_we;
        vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_we 
            = vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_we;
    }
    if ((0x0000000200000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t10__DOT__core__9((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
        vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_we = vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.o_wb_we;
        vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_we 
            = vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_we;
    }
    if ((0x0000100000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t11__DOT__core__9((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
        vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_we = vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.o_wb_we;
        vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_we 
            = vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_we;
    }
    if ((0x0000000000020000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__10((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000010000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__10((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000008000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__10((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0004000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__10((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000000000010000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__11((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000008000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__11((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000004000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__11((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0002000000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__11((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000000000000300ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__0((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000180000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__0((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x00000000c0000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__0((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000060000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__0((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000000000006000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__1((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000003000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__1((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000001800000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__1((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000c00000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__1((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000000000002400ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__2((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000040400ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__3((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000008400ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__4((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x000000000000a400ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__5((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000000500ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__6((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000001200000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__2((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000020200000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__3((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000004200000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__4((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000005200000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__5((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000000280000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__6((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000900000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__2((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000010100000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__3((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000002100000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__4((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000002900000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__5((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000000140000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__6((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000480000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__2((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0008080000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__3((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0001080000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__4((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0001480000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__5((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x00000a0000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__6((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__12((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__13((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000200000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__12((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000000080000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__13((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000100000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__12((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000000040000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__13((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000080000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__12((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000020000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__13((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000000000004000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_dat_o 
            = vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_dat_o;
    }
    if ((0x0000000000002000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_adr 
            = vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_adr;
        vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__recv_sel 
            = (0x0000000fU & vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_adr);
    }
    if ((0x0000000000000013ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((0x0000000000002110ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__7((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000002000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_dat_o 
            = vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_dat_o;
    }
    if ((0x0000000001000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_adr 
            = vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_adr;
        vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__recv_sel 
            = (0x0000000fU & vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_adr);
    }
    if ((0x0000000001080020ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__7((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000001000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_dat_o 
            = vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_dat_o;
    }
    if ((0x0000000800000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_adr 
            = vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_adr;
        vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__recv_sel 
            = (0x0000000fU & vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_adr);
    }
    if ((0x0000000840000040ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__7((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000800000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_dat_o 
            = vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_dat_o;
    }
    if ((0x0000400000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_adr 
            = vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_adr;
        vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__recv_sel 
            = (0x0000000fU & vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_adr);
    }
    if ((0x0000420000000080ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__7((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000000000001a00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__8((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000000a00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__9((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000002800ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__10((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000000c00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__11((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000040c00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__12((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000008800ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__13((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000001800ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__14((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000d00000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__8((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000000500000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t01__DOT__core__9((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000001400000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t01__DOT__core__10((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000000600000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__11((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000020600000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__12((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000004400000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__13((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000000c00000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__14((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000680000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__8((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000000280000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t10__DOT__core__9((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000000a00000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t10__DOT__core__10((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000000300000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__11((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000010300000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__12((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000002200000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__13((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000000600000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__14((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000340000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__8((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000140000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t11__DOT__core__9((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000500000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t11__DOT__core__10((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000180000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__11((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0008180000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__12((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0001100000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__13((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000300000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__14((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000000000000800ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__14((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000010400ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__15((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000400000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__14((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000008200000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__15((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000200000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__14((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000004100000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__15((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000100000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t00__DOT__core__14((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0002080000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__15((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000000000000b00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__16((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000580000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__16((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x00000002c0000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__16((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000160000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__16((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x000000000000a500ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__17((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000000510ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__18((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000005280000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__17((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000000280020ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__18((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000002940000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__17((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000000140000040ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__18((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x00014a0000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__17((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x00000a0000000080ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__18((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000000000000037ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((0x000000000000005bULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___ico_comb__TOP__2(vlSelf);
    }
    if ((0x0000000000002c00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__19((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
        vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_stb = vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core.o_wb_stb;
        vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_stb 
            = vlSelfRef.mesh_2x2__DOT__t00__DOT__wb_stb;
        vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__is_network_send 
            = ((8U == (vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_adr 
                       >> 0x0000001cU)) & ((IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_stb) 
                                           & (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_we)));
        vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__is_network_recv 
            = ((9U == (vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_adr 
                       >> 0x0000001cU)) & ((~ (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_we)) 
                                           & (IData)(vlSelfRef.mesh_2x2__DOT__t00__DOT__router__DOT__local_wb_stb)));
    }
    if ((0x0000000000026c00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__20((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000002d00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__21((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000042c00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__22((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000041c00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__23((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000001c00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__24((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000001600000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__19((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
        vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_stb = vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core.o_wb_stb;
        vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_stb 
            = vlSelfRef.mesh_2x2__DOT__t01__DOT__wb_stb;
        vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__is_network_send 
            = ((8U == (vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_adr 
                       >> 0x0000001cU)) & ((IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_stb) 
                                           & (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_we)));
        vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__is_network_recv 
            = ((9U == (vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_adr 
                       >> 0x0000001cU)) & ((~ (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_we)) 
                                           & (IData)(vlSelfRef.mesh_2x2__DOT__t01__DOT__router__DOT__local_wb_stb)));
    }
    if ((0x0000000013600000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__20((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000001680000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__21((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000021600000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__22((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000020e00000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__23((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000000e00000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t01__DOT__core__24((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000b00000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__19((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
        vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_stb = vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core.o_wb_stb;
        vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_stb 
            = vlSelfRef.mesh_2x2__DOT__t10__DOT__wb_stb;
        vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__is_network_send 
            = ((8U == (vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_adr 
                       >> 0x0000001cU)) & ((IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_stb) 
                                           & (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_we)));
        vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__is_network_recv 
            = ((9U == (vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_adr 
                       >> 0x0000001cU)) & ((~ (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_we)) 
                                           & (IData)(vlSelfRef.mesh_2x2__DOT__t10__DOT__router__DOT__local_wb_stb)));
    }
    if ((0x0000009b00000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__20((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000000b40000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__21((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000010b00000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__22((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000010700000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__23((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000000700000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t10__DOT__core__24((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000580000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__19((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
        vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_stb = vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core.o_wb_stb;
        vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_stb 
            = vlSelfRef.mesh_2x2__DOT__t11__DOT__wb_stb;
        vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__is_network_send 
            = ((8U == (vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_adr 
                       >> 0x0000001cU)) & ((IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_stb) 
                                           & (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_we)));
        vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__is_network_recv 
            = ((9U == (vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_adr 
                       >> 0x0000001cU)) & ((~ (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_we)) 
                                           & (IData)(vlSelfRef.mesh_2x2__DOT__t11__DOT__router__DOT__local_wb_stb)));
    }
    if ((0x0004d80000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__20((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x00005a0000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__21((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0008580000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__22((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0008380000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__23((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000380000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t11__DOT__core__24((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000000000040f00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__25((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000020780000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__25((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x00000103c0000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__25((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x00081e0000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__25((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x00000000000000ffULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___ico_comb__TOP__3(vlSelf);
    }
    if ((0x0000000000002f00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__26((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000041e00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__27((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000001f00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__28((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000003e00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__29((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000001780000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__26((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000020f00000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__27((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000000f80000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__28((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000001f00000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t01__DOT__core__29((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000bc0000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__26((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000010780000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__27((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x00000007c0000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__28((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000000f80000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t10__DOT__core__29((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x00005e0000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__26((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x00083c0000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__27((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x00003e0000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__28((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x00007c0000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t11__DOT__core__29((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000000000041f00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__30((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000020f80000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__30((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x00000107c0000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__30((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x00083e0000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__30((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000000000006f00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__31((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x000000000004bf00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__32((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000005f00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__33((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000011f00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__34((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000003780000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__31((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000025f80000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__32((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000002f80000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__33((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000008f80000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__34((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000001bc0000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__31((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000012fc0000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__32((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x00000017c0000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__33((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x00000047c0000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__34((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000de0000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__31((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x00097e0000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__32((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000be0000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__33((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x00023e0000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__34((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000000000049f00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__35((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000024f80000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__35((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x00000127c0000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__35((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x00093e0000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__35((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000000000045f00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__36((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000013f00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__37((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000022f80000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__36((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000009f80000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__37((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x00000117c0000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__36((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000004fc0000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__37((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0008be0000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__36((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x00027e0000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__37((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000000000047f00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__38((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000053f00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__39((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000000057f10ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__40((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x0000000023f80000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__38((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000029f80000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__39((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x000000002bf80020ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__40((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000011fc0000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__38((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000014fc0000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__39((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000015fc0000040ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__40((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0008fe0000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__38((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x000a7e0000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__39((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x000afe0000000080ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__40((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0000000000057f00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__41((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x000000000004ff00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__42((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x000000002bf80000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__41((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000000027f80000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__42((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x0000015fc0000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__41((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x0000013fc0000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__42((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x000afe0000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__41((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x0009fe0000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__42((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
    if ((0x000000000007ff00ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__43((&vlSymsp->TOP__mesh_2x2__DOT__t00__DOT__core));
    }
    if ((0x000000003ff80000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__43((&vlSymsp->TOP__mesh_2x2__DOT__t01__DOT__core));
    }
    if ((0x000001ffc0000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__43((&vlSymsp->TOP__mesh_2x2__DOT__t10__DOT__core));
    }
    if ((0x000ffe0000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t00__DOT__core__43((&vlSymsp->TOP__mesh_2x2__DOT__t11__DOT__core));
    }
}

void Vtop___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    Vtop___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("mesh_2x2.v", 19, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vtop___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("mesh_2x2.v", 19, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("mesh_2x2.v", 19, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtop___024root___eval_phase__act(vlSelf));
    } while (Vtop___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
}
#endif  // VL_DEBUG
