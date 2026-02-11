// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_subservient_core___ico_sequent__TOP__mesh_2x2__DOT__t11__DOT__core__1(Vtop_subservient_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core___ico_sequent__TOP__mesh_2x2__DOT__t11__DOT__core__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i_wb_rdt = vlSymsp->TOP.mesh_2x2__DOT__t11__DOT__wb_dat_i;
    vlSelfRef.i_wb_ack = vlSymsp->TOP.mesh_2x2__DOT__t11__DOT__wb_ack;
    vlSelfRef.i_clk = vlSymsp->TOP.mesh_2x2__DOT__t11__DOT__clk;
    vlSelfRef.i_rst = vlSymsp->TOP.mesh_2x2__DOT__t11__DOT__rst;
    vlSelfRef.servile__DOT__i_wb_ext_rdt = vlSelfRef.i_wb_rdt;
    vlSelfRef.servile__DOT__i_wb_ext_ack = vlSelfRef.i_wb_ack;
    vlSelfRef.rf_mem_if__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.servile__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.rf_mem_if__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_rdt 
        = vlSelfRef.servile__DOT__i_wb_ext_rdt;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_ack 
        = vlSelfRef.servile__DOT__i_wb_ext_ack;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__mux__DOT__i_clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__cpu__DOT__clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__mux__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__ext)
            ? vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_rdt
            : vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_rdt);
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_clk 
        = vlSelfRef.servile__DOT__cpu__DOT__clk;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__clk 
        = vlSelfRef.servile__DOT__cpu__DOT__clk;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_clk 
        = vlSelfRef.servile__DOT__cpu__DOT__clk;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_clk 
        = vlSelfRef.servile__DOT__cpu__DOT__clk;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_clk 
        = vlSelfRef.servile__DOT__cpu__DOT__clk;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__clk 
        = vlSelfRef.servile__DOT__cpu__DOT__clk;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__clk 
        = vlSelfRef.servile__DOT__cpu__DOT__clk;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_clk 
        = vlSelfRef.servile__DOT__cpu__DOT__clk;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk 
        = vlSelfRef.servile__DOT__cpu__DOT__clk;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_rst 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rst 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rst 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rst;
    vlSelfRef.servile__DOT__wb_dbus_rdt = vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rst)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__ibus_cyc));
    vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt = vlSelfRef.servile__DOT__wb_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_cyc = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__o_ibus_cyc = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_cyc;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_dat 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt;
    vlSelfRef.servile__DOT__wb_ibus_stb = vlSelfRef.servile__DOT__cpu__DOT__o_ibus_cyc;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb 
        = vlSelfRef.servile__DOT__wb_ibus_stb;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_adr 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)
            ? vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_adr
            : vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_adr);
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_we 
        = ((~ (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_we));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack 
        = ((~ (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_stb 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_stb) 
           | (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb));
    vlSelfRef.servile__DOT__o_wb_mem_adr = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_adr;
    vlSelfRef.servile__DOT__o_wb_mem_we = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_we;
    vlSelfRef.servile__DOT__wb_ibus_ack = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack;
    vlSelfRef.servile__DOT__wb_dmem_ack = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack;
    vlSelfRef.servile__DOT__o_wb_mem_stb = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_stb;
    vlSelfRef.wb_mem_adr = vlSelfRef.servile__DOT__o_wb_mem_adr;
    vlSelfRef.wb_mem_we = vlSelfRef.servile__DOT__o_wb_mem_we;
    vlSelfRef.servile__DOT__cpu__DOT__i_ibus_ack = vlSelfRef.servile__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_ack 
        = vlSelfRef.servile__DOT__wb_dmem_ack;
    vlSelfRef.wb_mem_stb = vlSelfRef.servile__DOT__o_wb_mem_stb;
    vlSelfRef.rf_mem_if__DOT__i_wb_adr = (0x0000007fU 
                                          & (vlSelfRef.wb_mem_adr 
                                             >> 2U));
    vlSelfRef.rf_mem_if__DOT__i_wb_we = vlSelfRef.wb_mem_we;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack = vlSelfRef.servile__DOT__cpu__DOT__i_ibus_ack;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_ack 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_ack) 
           | ((IData)(vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_ack) 
              | (IData)(vlSelfRef.servile__DOT__mux__DOT__sim_ack)));
    vlSelfRef.rf_mem_if__DOT__i_wb_stb = vlSelfRef.wb_mem_stb;
    vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h04f68ef0_0_0 
        = (((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_adr) 
            << 2U) | (IData)(vlSelfRef.rf_mem_if__DOT__bsel));
    vlSelfRef.rf_mem_if__DOT__wb_we = ((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_we) 
                                       & ((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_sel) 
                                          >> (IData)(vlSelfRef.rf_mem_if__DOT__bsel)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_en 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_wb_en 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trig_irq 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ibus_ack 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__wb_dbus_ack = vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_ack;
    vlSelfRef.rf_mem_if__DOT__wb_en = ((~ ((IData)(vlSelfRef.rf_mem_if__DOT__i_wen) 
                                           | (IData)(vlSelfRef.rf_mem_if__DOT__o_wb_ack))) 
                                       & (IData)(vlSelfRef.rf_mem_if__DOT__i_wb_stb));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ibus_ack) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)));
    vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack = vlSelfRef.servile__DOT__wb_dbus_ack;
    if (vlSelfRef.rf_mem_if__DOT__wb_en) {
        vlSelfRef.rf_mem_if__DOT__o_sram_waddr = vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h04f68ef0_0_0;
        vlSelfRef.rf_mem_if__DOT__o_sram_wen = vlSelfRef.rf_mem_if__DOT__wb_we;
        vlSelfRef.rf_mem_if__DOT__o_sram_raddr = vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h04f68ef0_0_0;
        vlSelfRef.rf_mem_if__DOT__o_sram_ren = (1U 
                                                & (~ (IData)(vlSelfRef.rf_mem_if__DOT__i_wb_we)));
        vlSelfRef.rf_mem_if__DOT__o_sram_wdata = (0x000000ffU 
                                                  & (vlSelfRef.rf_mem_if__DOT__i_wb_dat 
                                                     >> 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.rf_mem_if__DOT__bsel), 3U))));
    } else {
        vlSelfRef.rf_mem_if__DOT__o_sram_waddr = vlSelfRef.rf_mem_if__DOT__rf_waddr;
        vlSelfRef.rf_mem_if__DOT__o_sram_wen = vlSelfRef.rf_mem_if__DOT__i_wen;
        vlSelfRef.rf_mem_if__DOT__o_sram_raddr = vlSelfRef.rf_mem_if__DOT__rf_raddr;
        vlSelfRef.rf_mem_if__DOT__o_sram_ren = (1U 
                                                & (IData)(vlSelfRef.rf_mem_if__DOT__i_ren));
        vlSelfRef.rf_mem_if__DOT__o_sram_wdata = (0x000000ffU 
                                                  & (IData)(vlSelfRef.rf_mem_if__DOT__i_wdata));
    }
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_ack = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_ack 
        = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.o_sram_waddr = vlSelfRef.rf_mem_if__DOT__o_sram_waddr;
    vlSelfRef.o_sram_wen = vlSelfRef.rf_mem_if__DOT__o_sram_wen;
    vlSelfRef.o_sram_raddr = vlSelfRef.rf_mem_if__DOT__o_sram_raddr;
    vlSelfRef.o_sram_ren = vlSelfRef.rf_mem_if__DOT__o_sram_ren;
    vlSelfRef.o_sram_wdata = vlSelfRef.rf_mem_if__DOT__o_sram_wdata;
    vlSelfRef.servile__DOT__rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_load 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right)
                ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                   & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
                      | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h53222178_0_2)))
                : (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_ack) 
              | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                  & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)) 
                     & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
                 | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en) 
                    & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))))));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rreq 
        = vlSelfRef.servile__DOT__rf_rreq;
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq 
        = vlSelfRef.servile__DOT__rf_wreq;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready 
        = ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq) 
           | (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rgnt));
    vlSelfRef.servile__DOT__rf_ready = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready;
    vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready = vlSelfRef.servile__DOT__rf_ready;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rf_ready 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready;
}

void Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t11__DOT__core__8(Vtop_subservient_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t11__DOT__core__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i_wb_ack = vlSymsp->TOP.mesh_2x2__DOT__t11__DOT__wb_ack;
    vlSelfRef.i_wb_rdt = vlSymsp->TOP.mesh_2x2__DOT__t11__DOT__wb_dat_i;
    vlSelfRef.servile__DOT__i_wb_ext_ack = vlSelfRef.i_wb_ack;
    vlSelfRef.servile__DOT__i_wb_ext_rdt = vlSelfRef.i_wb_rdt;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_ack 
        = vlSelfRef.servile__DOT__i_wb_ext_ack;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_rdt 
        = vlSelfRef.servile__DOT__i_wb_ext_rdt;
}

extern const VlUnpacked<CData/*3:0*/, 128> Vtop__ConstPool__TABLE_ha7a8b8b4_0;

void Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t11__DOT__core__9(Vtop_subservient_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core___nba_sequent__TOP__mesh_2x2__DOT__t11__DOT__core__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h9cf67656_0_8;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h9cf67656_0_8 = 0;
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h9cf67656_0_9;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h9cf67656_0_9 = 0;
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h9cf67656_0_16;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h9cf67656_0_16 = 0;
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h9cf67656_0_17;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h9cf67656_0_17 = 0;
    CData/*0:0*/ servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h9cf67656_0_18;
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h9cf67656_0_18 = 0;
    CData/*6:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    if (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_en) {
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__imm25 
            = (1U & (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x17U));
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op22 
            = (1U & (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x14U));
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__imm30 
            = (1U & (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x1cU));
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op26 
            = (1U & (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x18U));
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20 
            = (1U & (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x12U));
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21 
            = (1U & (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x13U));
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3 
            = (7U & (vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
                     >> 0x0aU));
        vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode 
            = (0x0000001fU & vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt);
    }
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_sh_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__imm30;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ebreak 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_addr 
        = ((((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20) 
             & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op26)) 
            << 1U) | (1U & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op26)) 
                            | (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_valid 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20) 
           | ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21)) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op26)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ext_funct3 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_source 
        = (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_d_sel 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                 >> 2U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_signed 
        = (1U & (~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                    >> 2U)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_bool_op 
        = (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bne_or_bge 
        = (1U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_eq 
        = (0U == (3U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                        >> 1U)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel 
        = ((4U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3)) 
           | (((1U == (3U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                             >> 1U))) << 1U) | (0U 
                                                == (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig 
        = (1U & (~ (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                     >> 1U) & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                               | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                                  >> 2U)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_word 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_half 
        = (1U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_sh_right 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                 >> 2U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en 
        = (1U & ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                     >> 4U)) | (IData)((1U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_imm_en 
        = (1U & (~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                    >> 2U)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_clr_lsb 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
            >> 4U) & ((0U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
                      | (3U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mtval_pc 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 4U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_mem_en 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mdu_op) 
           | (0U == (5U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_cond_branch 
        = (1U & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_alu_en 
        = (IData)(((4U == (0x15U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
                   & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mdu_op))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_cmd 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 3U));
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h9cf67656_0_8 
        = (IData)((0x11U == (0x11U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h9cf67656_0_16 
        = (IData)((5U == (5U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_dbus_en 
        = (IData)((0U == (0x14U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_sub 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                  >> 1U) | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                            | ((((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                 >> 3U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__imm30)) 
                               | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                  >> 4U)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_branch_op 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 4U));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_shift_op 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                  >> 2U) & ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
                                >> 1U)) & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mdu_op)))));
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h9cf67656_0_18 
        = (IData)((0U == (0x11U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_op_b_source 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                 >> 3U));
    __Vtableidx8 = (((0U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
                     << 6U) | ((0x00000020U & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)) 
                                               << 5U)) 
                               | (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl 
        = Vtop__ConstPool__TABLE_ha7a8b8b4_0[__Vtableidx8];
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h9cf67656_0_9 
        = (IData)((0x14U == (0x14U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_sh_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_sh_signed;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ebreak 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ebreak;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_addr 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_addr;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ext_funct3 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ext_funct3;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_source 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_source;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_d_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_d_sel;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_signed;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_bool_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_bool_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bne_or_bge 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bne_or_bge;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_eq 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_eq;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_rd_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_sig 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_word 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_word;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_half 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_half;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_sh_right 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_rs1_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_imm_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_clr_lsb 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_bufreg_clr_lsb;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mtval_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mtval_pc;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_mem_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_mem_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_cond_branch 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_cond_branch;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_alu_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_alu_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_cmd 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mem_cmd;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_jal_or_jalr 
        = servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h9cf67656_0_8;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_op 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                  >> 2U) | ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                >> 2U)) & ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h9cf67656_0_8) 
                                           | (IData)(
                                                     (0U 
                                                      == 
                                                      (9U 
                                                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))))))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_utype 
        = ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
               >> 4U)) & (IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h9cf67656_0_16));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_dbus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_dbus_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_sub 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_alu_sub;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_branch_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_branch_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_two_stage_op 
        = (1U & ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                     >> 2U)) | ((IData)(((1U == (3U 
                                                 & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3))) 
                                         & (IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h9cf67656_0_18))) 
                                | ((IData)(((2U == 
                                             (6U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3))) 
                                            & (IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h9cf67656_0_18))) 
                                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_mdu_op)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_op_b_source 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_op_b_source;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_immdec_ctrl 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_pc_rel 
        = ((0U == (7U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
           | ((3U == (3U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode))) 
              | (((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h9cf67656_0_9) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20)) 
                 | (0U == (3U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                 >> 3U))))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_mret 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h9cf67656_0_9) 
           & ((~ (0U != (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3))) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h9cf67656_0_9) 
           & (0U != (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_e_op 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h9cf67656_0_9) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21)) 
              & (~ (0U != (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_imm_en 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h9cf67656_0_9) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__funct3) 
              >> 2U));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_sh_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_sh_signed;
    vlSelfRef.servile__DOT__cpu__DOT__ebreak = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ebreak;
    vlSelfRef.servile__DOT__cpu__DOT__csr_addr = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_addr;
    vlSelfRef.servile__DOT__cpu__DOT__o_ext_funct3 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ext_funct3;
    vlSelfRef.servile__DOT__cpu__DOT__csr_source = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_source;
    vlSelfRef.servile__DOT__cpu__DOT__csr_d_sel = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_d_sel;
    vlSelfRef.servile__DOT__cpu__DOT__mem_signed = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_signed;
    vlSelfRef.servile__DOT__cpu__DOT__alu_bool_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_bool_op;
    vlSelfRef.servile__DOT__cpu__DOT__bne_or_bge = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bne_or_bge;
    vlSelfRef.servile__DOT__cpu__DOT__alu_cmp_eq = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_eq;
    vlSelfRef.servile__DOT__cpu__DOT__alu_rd_sel = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_rd_sel;
    vlSelfRef.servile__DOT__cpu__DOT__alu_cmp_sig = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_sig;
    vlSelfRef.servile__DOT__cpu__DOT__mem_word = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_word;
    vlSelfRef.servile__DOT__cpu__DOT__mem_half = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_half;
    vlSelfRef.servile__DOT__cpu__DOT__sh_right = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_rs1_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_rs1_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_imm_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_clr_lsb 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_bufreg_clr_lsb;
    vlSelfRef.servile__DOT__cpu__DOT__mtval_pc = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mtval_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rd_mem_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_mem_en;
    vlSelfRef.servile__DOT__cpu__DOT__cond_branch = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_cond_branch;
    vlSelfRef.servile__DOT__cpu__DOT__rd_alu_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_alu_en;
    vlSelfRef.servile__DOT__cpu__DOT__o_dbus_we = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_mem_cmd;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_jal_or_jalr 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_jal_or_jalr;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_utype 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_utype;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_dbus_en;
    vlSelfRef.servile__DOT__cpu__DOT__alu_sub = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_alu_sub;
    vlSelfRef.servile__DOT__cpu__DOT__branch_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_branch_op;
    vlSelfRef.servile__DOT__cpu__DOT__shift_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_two_stage_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_two_stage_op;
    vlSelfRef.servile__DOT__cpu__DOT__op_b_sel = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_op_b_source;
    vlSelfRef.servile__DOT__cpu__DOT__immdec_ctrl = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_immdec_ctrl;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_pc_rel 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_pc_rel;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_mret 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_ctrl_mret;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20)) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op21)));
    servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h9cf67656_0_17 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op26)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_en 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_op) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__csr_valid));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_e_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_e_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_immdec_en 
        = ((((IData)((1U != (0x1dU & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)))) 
             << 3U) | (((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h9cf67656_0_9) 
                        | (8U != (9U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode)))) 
                       << 2U)) | ((((1U == (3U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__opcode) 
                                                  >> 1U))) 
                                    | ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h9cf67656_0_16) 
                                       | (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_imm_en))) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_op)))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_imm_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_sh_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_sh_signed;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_ebreak 
        = vlSelfRef.servile__DOT__cpu__DOT__ebreak;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_addr 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_addr;
    vlSelfRef.servile__DOT__mdu_op = vlSelfRef.servile__DOT__cpu__DOT__o_ext_funct3;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_source;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_d_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_d_sel;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_signed 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_signed;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_bool_op;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge 
        = vlSelfRef.servile__DOT__cpu__DOT__bne_or_bge;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_cmp_eq;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu_rd_sel) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_rd_sel;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_cmp_sig;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_word 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_word;
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_half 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_half;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_right_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_sh_right 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_right;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_rs1_en 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_rs1_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_imm_en;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_clr_lsb 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_clr_lsb;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mem_op 
        = (1U & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__mtval_pc)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__mtval_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_mem_en;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_cond_branch 
        = vlSelfRef.servile__DOT__cpu__DOT__cond_branch;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_alu_en;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_alu_en;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mem_cmd 
        = vlSelfRef.servile__DOT__cpu__DOT__o_dbus_we;
    vlSelfRef.servile__DOT__wb_dbus_we = vlSelfRef.servile__DOT__cpu__DOT__o_dbus_we;
    vlSelfRef.servile__DOT__cpu__DOT__jal_or_jalr = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_jal_or_jalr;
    vlSelfRef.servile__DOT__cpu__DOT__rd_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_op;
    vlSelfRef.servile__DOT__cpu__DOT__utype = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_utype;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_en;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op 
        = vlSelfRef.servile__DOT__cpu__DOT__branch_op;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_shift_op 
        = vlSelfRef.servile__DOT__cpu__DOT__shift_op;
    vlSelfRef.servile__DOT__cpu__DOT__two_stage_op 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_two_stage_op;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel 
        = vlSelfRef.servile__DOT__cpu__DOT__op_b_sel;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_ctrl 
        = vlSelfRef.servile__DOT__cpu__DOT__immdec_ctrl;
    vlSelfRef.servile__DOT__cpu__DOT__pc_rel = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_pc_rel;
    vlSelfRef.servile__DOT__cpu__DOT__mret = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_ctrl_mret;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_rd_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mcause_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mie_en 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h9cf67656_0_17) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20)) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op22)));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en 
        = ((IData)(servile__DOT__cpu__DOT__decode__DOT____VdfgRegularize_h9cf67656_0_17) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op22)) 
              & (~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__op20))));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__e_op = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_e_op;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_immdec_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_immdec_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_imm_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_imm_en;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_we = vlSelfRef.servile__DOT__wb_dbus_we;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr 
        = vlSelfRef.servile__DOT__cpu__DOT__jal_or_jalr;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rd_op 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_op;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype 
        = vlSelfRef.servile__DOT__cpu__DOT__utype;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_two_stage_op 
        = vlSelfRef.servile__DOT__cpu__DOT__two_stage_op;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_pc_rel 
        = vlSelfRef.servile__DOT__cpu__DOT__pc_rel;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mret 
        = vlSelfRef.servile__DOT__cpu__DOT__mret;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mret 
        = vlSelfRef.servile__DOT__cpu__DOT__mret;
    vlSelfRef.servile__DOT__cpu__DOT__rd_csr_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_rd_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_mcause_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mcause_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mie_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mie_en;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mstatus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_e_op 
        = vlSelfRef.servile__DOT__cpu__DOT__e_op;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_e_op 
        = vlSelfRef.servile__DOT__cpu__DOT__e_op;
    vlSelfRef.servile__DOT__cpu__DOT__immdec_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_immdec_en;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_csr_imm_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_imm_en;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_we = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_we;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_we = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_we;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__rd_csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_mcause_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_mie_en = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mie_en;
    vlSelfRef.servile__DOT__cpu__DOT__csr_mstatus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__o_csr_mstatus_en;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_en;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_immdec_en 
        = vlSelfRef.servile__DOT__cpu__DOT__immdec_en;
    vlSelfRef.servile__DOT__o_wb_ext_we = vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_we;
    vlSelfRef.servile__DOT__wb_dmem_we = vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_we;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mie_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_mie_en;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_mstatus_en;
    vlSelfRef.o_wb_we = vlSelfRef.servile__DOT__o_wb_ext_we;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_we 
        = vlSelfRef.servile__DOT__wb_dmem_we;
}

void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t11__DOT__core__9(Vtop_subservient_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t11__DOT__core__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__rs1_sx 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_3 = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_rs1) 
                                                & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_rs1_en));
}

extern const VlUnpacked<CData/*3:0*/, 16> Vtop__ConstPool__TABLE_h0ab4ebb5_0;

void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t11__DOT__core__10(Vtop_subservient_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t11__DOT__core__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    __Vtableidx7 = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_half) 
                     << 3U) | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_word) 
                                << 2U) | (IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_lsb)));
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__o_wb_sel 
        = Vtop__ConstPool__TABLE_h0ab4ebb5_0[__Vtableidx7];
    vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__o_misalign 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_lsb) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_half) 
               | (IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_word))) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_lsb) 
               >> 1U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__i_word)));
    vlSelfRef.servile__DOT__cpu__DOT__o_dbus_sel = vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__o_wb_sel;
    vlSelfRef.servile__DOT__cpu__DOT__mem_misalign 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_if__DOT__o_misalign;
    vlSelfRef.servile__DOT__wb_dbus_sel = vlSelfRef.servile__DOT__cpu__DOT__o_dbus_sel;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_mem_misalign 
        = vlSelfRef.servile__DOT__cpu__DOT__mem_misalign;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_sel 
        = vlSelfRef.servile__DOT__wb_dbus_sel;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_sel 
        = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_sel;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_sel 
        = vlSelfRef.servile__DOT__mux__DOT__i_wb_cpu_sel;
    vlSelfRef.servile__DOT__o_wb_ext_sel = vlSelfRef.servile__DOT__mux__DOT__o_wb_ext_sel;
    vlSelfRef.servile__DOT__wb_dmem_sel = vlSelfRef.servile__DOT__mux__DOT__o_wb_mem_sel;
    vlSelfRef.o_wb_sel = vlSelfRef.servile__DOT__o_wb_ext_sel;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_sel 
        = vlSelfRef.servile__DOT__wb_dmem_sel;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_sel 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_sel;
    vlSelfRef.servile__DOT__o_wb_mem_sel = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_sel;
    vlSelfRef.wb_mem_sel = vlSelfRef.servile__DOT__o_wb_mem_sel;
    vlSelfRef.rf_mem_if__DOT__i_wb_sel = vlSelfRef.wb_mem_sel;
}

void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t11__DOT__core__24(Vtop_subservient_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t11__DOT__core__24\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__o_imm 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_cnt_done)
                  ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__signbit)
                  : ((1U & (IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_ctrl))
                      ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm11_7)
                      : (IData)(vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm24_20))));
    vlSelfRef.servile__DOT__cpu__DOT__imm = vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__o_imm;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_imm 
        = vlSelfRef.servile__DOT__cpu__DOT__imm;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_imm 
        = vlSelfRef.servile__DOT__cpu__DOT__imm;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_imm 
        = vlSelfRef.servile__DOT__cpu__DOT__imm;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_4 = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_imm) 
                                                & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__clr_lsb)) 
                                                   & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_imm_en)));
}

void Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t11__DOT__core__29(Vtop_subservient_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core___nba_comb__TOP__mesh_2x2__DOT__t11__DOT__core__29\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__c 
        = (1U & (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3) 
                  + ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__c_r))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__q 
        = (1U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3) 
                 + ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__c_r))));
}
