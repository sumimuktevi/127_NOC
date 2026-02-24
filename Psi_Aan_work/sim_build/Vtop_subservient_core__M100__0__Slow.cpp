// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop_subservient_core__M100___stl_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst__1(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___stl_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i_wb_rdt = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__wb_dat_r2c;
    vlSelfRef.i_wb_ack = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__wb_ack;
    vlSelfRef.i_sram_rdata = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_rdata;
    vlSelfRef.i_clk = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.i_rst = ((IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__boot_mode) 
                       | (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__rst));
    vlSelfRef.servile__DOT__i_wb_ext_rdt = vlSelfRef.i_wb_rdt;
    vlSelfRef.servile__DOT__i_wb_ext_ack = vlSelfRef.i_wb_ack;
    vlSelfRef.rf_mem_if__DOT__i_sram_rdata = vlSelfRef.i_sram_rdata;
    vlSelfRef.rf_mem_if__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.servile__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.rf_mem_if__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_rdt 
        = vlSelfRef.servile__DOT__i_wb_ext_rdt;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_ack 
        = vlSelfRef.servile__DOT__i_wb_ext_ack;
    vlSelfRef.rf_mem_if__DOT__o_wb_rdt = (((IData)(vlSelfRef.rf_mem_if__DOT__i_sram_rdata) 
                                           << 0x00000018U) 
                                          | vlSelfRef.rf_mem_if__DOT__wb_rdt);
    vlSelfRef.rf_mem_if__DOT__o_rdata = ((IData)(vlSelfRef.rf_mem_if__DOT__regzero)
                                          ? 0U : (IData)(vlSelfRef.rf_mem_if__DOT__i_sram_rdata));
    vlSelfRef.servile__DOT__mux__DOT__i_clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__cpu__DOT__clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__mux__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.wb_mem_rdt = vlSelfRef.rf_mem_if__DOT__o_wb_rdt;
    vlSelfRef.rf_rdata = vlSelfRef.rf_mem_if__DOT__o_rdata;
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
    vlSelfRef.servile__DOT__i_wb_mem_rdt = vlSelfRef.wb_mem_rdt;
    vlSelfRef.servile__DOT__i_rf_rdata = vlSelfRef.rf_rdata;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rst)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__ibus_cyc));
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt 
        = vlSelfRef.servile__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rdata 
        = vlSelfRef.servile__DOT__i_rf_rdata;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_cyc = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata1 
        = (1U & ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rtrig1)
                  ? (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rdata)
                  : (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rdata1)));
    vlSelfRef.servile__DOT__cpu__DOT__o_ibus_cyc = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_cyc;
    vlSelfRef.servile__DOT__wb_ibus_rdt = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt;
    vlSelfRef.servile__DOT__wb_dmem_rdt = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt;
    vlSelfRef.servile__DOT__rdata1 = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata1;
    vlSelfRef.servile__DOT__wb_ibus_stb = vlSelfRef.servile__DOT__cpu__DOT__o_ibus_cyc;
    vlSelfRef.servile__DOT__cpu__DOT__i_ibus_rdt = vlSelfRef.servile__DOT__wb_ibus_rdt;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_rdt 
        = vlSelfRef.servile__DOT__wb_dmem_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__i_rdata1 = vlSelfRef.servile__DOT__rdata1;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb 
        = vlSelfRef.servile__DOT__wb_ibus_stb;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_rdt = vlSelfRef.servile__DOT__cpu__DOT__i_ibus_rdt;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__ext)
            ? vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_rdt
            : vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_rdt);
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rdata1;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack 
        = ((~ (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_adr 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)
            ? vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_adr
            : vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_adr);
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_we 
        = ((~ (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_we));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_stb 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_stb) 
           | (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb));
    vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_rdt;
    vlSelfRef.servile__DOT__wb_dbus_rdt = vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs2 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.servile__DOT__wb_ibus_ack = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack;
    vlSelfRef.servile__DOT__wb_dmem_ack = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack;
    vlSelfRef.servile__DOT__o_wb_mem_adr = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_adr;
    vlSelfRef.servile__DOT__o_wb_mem_we = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_we;
    vlSelfRef.servile__DOT__o_wb_mem_stb = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
        = (vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt 
           >> 2U);
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_wb_rdt 
        = (vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt 
           >> 7U);
    vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt = vlSelfRef.servile__DOT__wb_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__csr_pc = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_csr_out = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr;
    vlSelfRef.servile__DOT__cpu__DOT__rs2 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs2;
    vlSelfRef.servile__DOT__cpu__DOT__i_ibus_ack = vlSelfRef.servile__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_ack 
        = vlSelfRef.servile__DOT__wb_dmem_ack;
    vlSelfRef.wb_mem_adr = vlSelfRef.servile__DOT__o_wb_mem_adr;
    vlSelfRef.wb_mem_we = vlSelfRef.servile__DOT__o_wb_mem_we;
    vlSelfRef.wb_mem_stb = vlSelfRef.servile__DOT__o_wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_pc;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_csr_out;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2 
        = vlSelfRef.servile__DOT__cpu__DOT__rs2;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack = vlSelfRef.servile__DOT__cpu__DOT__i_ibus_ack;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_ack 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_ack) 
           | ((IData)(vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_ack) 
              | (IData)(vlSelfRef.servile__DOT__mux__DOT__sim_ack)));
    vlSelfRef.rf_mem_if__DOT__i_wb_adr = (0x0000003fU 
                                          & (vlSelfRef.wb_mem_adr 
                                             >> 2U));
    vlSelfRef.rf_mem_if__DOT__i_wb_we = vlSelfRef.wb_mem_we;
    vlSelfRef.rf_mem_if__DOT__i_wb_stb = vlSelfRef.wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_dat 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out) 
              | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en) 
                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
                    & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause)))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_imm));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_en 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_wb_en 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trig_irq 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ibus_ack 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__wb_dbus_ack = vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_ack;
    vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0 
        = (((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_adr) 
            << 2U) | (IData)(vlSelfRef.rf_mem_if__DOT__bsel));
    vlSelfRef.rf_mem_if__DOT__wb_we = ((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_we) 
                                       & ((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_sel) 
                                          >> (IData)(vlSelfRef.rf_mem_if__DOT__bsel)));
    vlSelfRef.rf_mem_if__DOT__wb_en = ((~ ((IData)(vlSelfRef.rf_mem_if__DOT__i_wen) 
                                           | (IData)(vlSelfRef.rf_mem_if__DOT__o_wb_ack))) 
                                       & (IData)(vlSelfRef.rf_mem_if__DOT__i_wb_stb));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in 
        = ((1U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)
            : ((2U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d))
                : ((3U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                    ? ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out))
                    : ((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source)) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out)))));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q 
        = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
            << 7U) | ((0x00000040U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                      >> 1U)) | (0x0000003fU 
                                                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                                    - (IData)(1U)))));
    vlSelfRef.servile__DOT__cpu__DOT__op_b = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b;
    vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack = vlSelfRef.servile__DOT__wb_dbus_ack;
    if (vlSelfRef.rf_mem_if__DOT__wb_en) {
        vlSelfRef.rf_mem_if__DOT__o_sram_wdata = (0x000000ffU 
                                                  & (vlSelfRef.rf_mem_if__DOT__i_wb_dat 
                                                     >> 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.rf_mem_if__DOT__bsel), 3U))));
        vlSelfRef.rf_mem_if__DOT__o_sram_waddr = vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0;
        vlSelfRef.rf_mem_if__DOT__o_sram_raddr = vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0;
        vlSelfRef.rf_mem_if__DOT__o_sram_ren = (1U 
                                                & (~ (IData)(vlSelfRef.rf_mem_if__DOT__i_wb_we)));
        vlSelfRef.rf_mem_if__DOT__o_sram_wen = vlSelfRef.rf_mem_if__DOT__wb_we;
    } else {
        vlSelfRef.rf_mem_if__DOT__o_sram_wdata = (0x000000ffU 
                                                  & (IData)(vlSelfRef.rf_mem_if__DOT__i_wdata));
        vlSelfRef.rf_mem_if__DOT__o_sram_waddr = vlSelfRef.rf_mem_if__DOT__rf_waddr;
        vlSelfRef.rf_mem_if__DOT__o_sram_raddr = vlSelfRef.rf_mem_if__DOT__rf_raddr;
        vlSelfRef.rf_mem_if__DOT__o_sram_ren = (1U 
                                                & (IData)(vlSelfRef.rf_mem_if__DOT__i_ren));
        vlSelfRef.rf_mem_if__DOT__o_sram_wen = vlSelfRef.rf_mem_if__DOT__i_wen;
    }
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in 
        = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__csr_rd = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next)
            : (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
                << 7U) | (0x0000007fU & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                         >> 1U))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b 
        = vlSelfRef.servile__DOT__cpu__DOT__op_b;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_ack = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_ack 
        = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.o_sram_wdata = vlSelfRef.rf_mem_if__DOT__o_sram_wdata;
    vlSelfRef.o_sram_waddr = vlSelfRef.rf_mem_if__DOT__o_sram_waddr;
    vlSelfRef.o_sram_raddr = vlSelfRef.rf_mem_if__DOT__o_sram_raddr;
    vlSelfRef.o_sram_ren = vlSelfRef.rf_mem_if__DOT__o_sram_ren;
    vlSelfRef.o_sram_wen = vlSelfRef.rf_mem_if__DOT__o_sram_wen;
    vlSelfRef.servile__DOT__cpu__DOT__csr_in = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_rd;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt) 
                 >> 5U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_bool 
        = (((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op)) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
               ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1))) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op) 
               >> 1U) & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
                         & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__op_b_sx 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
           ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_sub));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_load 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__sh_done = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy_r))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy_r))));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_done;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_lt 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__rs1_sx) 
                 + ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__op_b_sx)) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_eq 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add)) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__cmp_r) 
              | (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cnt0)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mepc)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr));
    vlSelfRef.servile__DOT__cpu__DOT__o_wdata1 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_bufreg_en 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt_en) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_init) 
               | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap)) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_two_stage_op)))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
              & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__init_done) 
                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                    | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right)))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_cmp 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_eq)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_lt));
    vlSelfRef.servile__DOT__wdata1 = vlSelfRef.servile__DOT__cpu__DOT__o_wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_en = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_bufreg_en;
    vlSelfRef.servile__DOT__cpu__DOT__alu_cmp = vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_cmp;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wdata1 
        = vlSelfRef.servile__DOT__wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_en 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_en;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_cmp 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_cmp;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_q 
        = (vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__data 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_en));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__take_branch 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_cond_branch)) 
              | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_cmp) 
                 ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_q = vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ctrl_misalign) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__take_branch)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_en) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_mem_misalign)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_buf 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_buf 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ibus_ack) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right)
                ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                   & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
                      | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h2f4d1f67_0_2)))
                : (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_ack) 
              | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                  & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)) 
                     & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
                 | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en) 
                    & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_rd 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_buf) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add)) 
              | ((((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                   >> 1U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_slt)) 
                 | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                     >> 2U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_bool)))));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype)
            ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt12to31) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_imm))
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_buf));
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__alu_rd = vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))));
    vlSelfRef.servile__DOT__rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rreq 
        = vlSelfRef.servile__DOT__rf_rreq;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq 
        = vlSelfRef.servile__DOT__rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__new_pc 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_trap)
            ? ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1))) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc))
            : ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jump)
                ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_rd 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready 
        = ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq) 
           | (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rgnt));
    vlSelfRef.servile__DOT__cpu__DOT__bad_pc = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl_rd = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_rd;
    vlSelfRef.servile__DOT__rf_ready = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__bad_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl_rd;
    vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready = vlSelfRef.servile__DOT__rf_ready;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en)) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en)) 
              | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mem_rd) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en)) 
                 | (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd))));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rf_ready 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready;
    vlSelfRef.servile__DOT__cpu__DOT__o_wdata0 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0;
    vlSelfRef.servile__DOT__wdata0 = vlSelfRef.servile__DOT__cpu__DOT__o_wdata0;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wdata0 
        = vlSelfRef.servile__DOT__wdata0;
}

VL_ATTR_COLD void Vtop_subservient_core__M100___stl_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst__1(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___stl_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i_wb_rdt = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__wb_dat_r2c;
    vlSelfRef.i_wb_ack = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__wb_ack;
    vlSelfRef.i_sram_rdata = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_rdata;
    vlSelfRef.i_clk = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.i_rst = ((IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__boot_mode) 
                       | (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__rst));
    vlSelfRef.servile__DOT__i_wb_ext_rdt = vlSelfRef.i_wb_rdt;
    vlSelfRef.servile__DOT__i_wb_ext_ack = vlSelfRef.i_wb_ack;
    vlSelfRef.rf_mem_if__DOT__i_sram_rdata = vlSelfRef.i_sram_rdata;
    vlSelfRef.rf_mem_if__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.servile__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.rf_mem_if__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_rdt 
        = vlSelfRef.servile__DOT__i_wb_ext_rdt;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_ack 
        = vlSelfRef.servile__DOT__i_wb_ext_ack;
    vlSelfRef.rf_mem_if__DOT__o_wb_rdt = (((IData)(vlSelfRef.rf_mem_if__DOT__i_sram_rdata) 
                                           << 0x00000018U) 
                                          | vlSelfRef.rf_mem_if__DOT__wb_rdt);
    vlSelfRef.rf_mem_if__DOT__o_rdata = ((IData)(vlSelfRef.rf_mem_if__DOT__regzero)
                                          ? 0U : (IData)(vlSelfRef.rf_mem_if__DOT__i_sram_rdata));
    vlSelfRef.servile__DOT__mux__DOT__i_clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__cpu__DOT__clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__mux__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.wb_mem_rdt = vlSelfRef.rf_mem_if__DOT__o_wb_rdt;
    vlSelfRef.rf_rdata = vlSelfRef.rf_mem_if__DOT__o_rdata;
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
    vlSelfRef.servile__DOT__i_wb_mem_rdt = vlSelfRef.wb_mem_rdt;
    vlSelfRef.servile__DOT__i_rf_rdata = vlSelfRef.rf_rdata;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rst)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__ibus_cyc));
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt 
        = vlSelfRef.servile__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rdata 
        = vlSelfRef.servile__DOT__i_rf_rdata;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_cyc = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata1 
        = (1U & ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rtrig1)
                  ? (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rdata)
                  : (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rdata1)));
    vlSelfRef.servile__DOT__cpu__DOT__o_ibus_cyc = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_cyc;
    vlSelfRef.servile__DOT__wb_ibus_rdt = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt;
    vlSelfRef.servile__DOT__wb_dmem_rdt = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt;
    vlSelfRef.servile__DOT__rdata1 = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata1;
    vlSelfRef.servile__DOT__wb_ibus_stb = vlSelfRef.servile__DOT__cpu__DOT__o_ibus_cyc;
    vlSelfRef.servile__DOT__cpu__DOT__i_ibus_rdt = vlSelfRef.servile__DOT__wb_ibus_rdt;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_rdt 
        = vlSelfRef.servile__DOT__wb_dmem_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__i_rdata1 = vlSelfRef.servile__DOT__rdata1;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb 
        = vlSelfRef.servile__DOT__wb_ibus_stb;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_rdt = vlSelfRef.servile__DOT__cpu__DOT__i_ibus_rdt;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__ext)
            ? vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_rdt
            : vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_rdt);
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rdata1;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack 
        = ((~ (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_adr 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)
            ? vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_adr
            : vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_adr);
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_we 
        = ((~ (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_we));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_stb 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_stb) 
           | (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb));
    vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_rdt;
    vlSelfRef.servile__DOT__wb_dbus_rdt = vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs2 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.servile__DOT__wb_ibus_ack = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack;
    vlSelfRef.servile__DOT__wb_dmem_ack = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack;
    vlSelfRef.servile__DOT__o_wb_mem_adr = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_adr;
    vlSelfRef.servile__DOT__o_wb_mem_we = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_we;
    vlSelfRef.servile__DOT__o_wb_mem_stb = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
        = (vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt 
           >> 2U);
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_wb_rdt 
        = (vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt 
           >> 7U);
    vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt = vlSelfRef.servile__DOT__wb_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__csr_pc = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_csr_out = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr;
    vlSelfRef.servile__DOT__cpu__DOT__rs2 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs2;
    vlSelfRef.servile__DOT__cpu__DOT__i_ibus_ack = vlSelfRef.servile__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_ack 
        = vlSelfRef.servile__DOT__wb_dmem_ack;
    vlSelfRef.wb_mem_adr = vlSelfRef.servile__DOT__o_wb_mem_adr;
    vlSelfRef.wb_mem_we = vlSelfRef.servile__DOT__o_wb_mem_we;
    vlSelfRef.wb_mem_stb = vlSelfRef.servile__DOT__o_wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_pc;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_csr_out;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2 
        = vlSelfRef.servile__DOT__cpu__DOT__rs2;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack = vlSelfRef.servile__DOT__cpu__DOT__i_ibus_ack;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_ack 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_ack) 
           | ((IData)(vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_ack) 
              | (IData)(vlSelfRef.servile__DOT__mux__DOT__sim_ack)));
    vlSelfRef.rf_mem_if__DOT__i_wb_adr = (0x0000003fU 
                                          & (vlSelfRef.wb_mem_adr 
                                             >> 2U));
    vlSelfRef.rf_mem_if__DOT__i_wb_we = vlSelfRef.wb_mem_we;
    vlSelfRef.rf_mem_if__DOT__i_wb_stb = vlSelfRef.wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_dat 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out) 
              | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en) 
                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
                    & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause)))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_imm));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_en 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_wb_en 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trig_irq 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ibus_ack 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__wb_dbus_ack = vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_ack;
    vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0 
        = (((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_adr) 
            << 2U) | (IData)(vlSelfRef.rf_mem_if__DOT__bsel));
    vlSelfRef.rf_mem_if__DOT__wb_we = ((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_we) 
                                       & ((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_sel) 
                                          >> (IData)(vlSelfRef.rf_mem_if__DOT__bsel)));
    vlSelfRef.rf_mem_if__DOT__wb_en = ((~ ((IData)(vlSelfRef.rf_mem_if__DOT__i_wen) 
                                           | (IData)(vlSelfRef.rf_mem_if__DOT__o_wb_ack))) 
                                       & (IData)(vlSelfRef.rf_mem_if__DOT__i_wb_stb));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in 
        = ((1U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)
            : ((2U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d))
                : ((3U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                    ? ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out))
                    : ((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source)) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out)))));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q 
        = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
            << 7U) | ((0x00000040U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                      >> 1U)) | (0x0000003fU 
                                                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                                    - (IData)(1U)))));
    vlSelfRef.servile__DOT__cpu__DOT__op_b = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b;
    vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack = vlSelfRef.servile__DOT__wb_dbus_ack;
    if (vlSelfRef.rf_mem_if__DOT__wb_en) {
        vlSelfRef.rf_mem_if__DOT__o_sram_wdata = (0x000000ffU 
                                                  & (vlSelfRef.rf_mem_if__DOT__i_wb_dat 
                                                     >> 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.rf_mem_if__DOT__bsel), 3U))));
        vlSelfRef.rf_mem_if__DOT__o_sram_waddr = vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0;
        vlSelfRef.rf_mem_if__DOT__o_sram_raddr = vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0;
        vlSelfRef.rf_mem_if__DOT__o_sram_ren = (1U 
                                                & (~ (IData)(vlSelfRef.rf_mem_if__DOT__i_wb_we)));
        vlSelfRef.rf_mem_if__DOT__o_sram_wen = vlSelfRef.rf_mem_if__DOT__wb_we;
    } else {
        vlSelfRef.rf_mem_if__DOT__o_sram_wdata = (0x000000ffU 
                                                  & (IData)(vlSelfRef.rf_mem_if__DOT__i_wdata));
        vlSelfRef.rf_mem_if__DOT__o_sram_waddr = vlSelfRef.rf_mem_if__DOT__rf_waddr;
        vlSelfRef.rf_mem_if__DOT__o_sram_raddr = vlSelfRef.rf_mem_if__DOT__rf_raddr;
        vlSelfRef.rf_mem_if__DOT__o_sram_ren = (1U 
                                                & (IData)(vlSelfRef.rf_mem_if__DOT__i_ren));
        vlSelfRef.rf_mem_if__DOT__o_sram_wen = vlSelfRef.rf_mem_if__DOT__i_wen;
    }
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in 
        = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__csr_rd = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next)
            : (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
                << 7U) | (0x0000007fU & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                         >> 1U))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b 
        = vlSelfRef.servile__DOT__cpu__DOT__op_b;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_ack = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_ack 
        = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.o_sram_wdata = vlSelfRef.rf_mem_if__DOT__o_sram_wdata;
    vlSelfRef.o_sram_waddr = vlSelfRef.rf_mem_if__DOT__o_sram_waddr;
    vlSelfRef.o_sram_raddr = vlSelfRef.rf_mem_if__DOT__o_sram_raddr;
    vlSelfRef.o_sram_ren = vlSelfRef.rf_mem_if__DOT__o_sram_ren;
    vlSelfRef.o_sram_wen = vlSelfRef.rf_mem_if__DOT__o_sram_wen;
    vlSelfRef.servile__DOT__cpu__DOT__csr_in = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_rd;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt) 
                 >> 5U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_bool 
        = (((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op)) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
               ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1))) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op) 
               >> 1U) & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
                         & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__op_b_sx 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
           ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_sub));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_load 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__sh_done = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy_r))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy_r))));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_done;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_lt 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__rs1_sx) 
                 + ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__op_b_sx)) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_eq 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add)) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__cmp_r) 
              | (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cnt0)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mepc)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr));
    vlSelfRef.servile__DOT__cpu__DOT__o_wdata1 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_bufreg_en 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt_en) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_init) 
               | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap)) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_two_stage_op)))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
              & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__init_done) 
                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                    | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right)))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_cmp 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_eq)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_lt));
    vlSelfRef.servile__DOT__wdata1 = vlSelfRef.servile__DOT__cpu__DOT__o_wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_en = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_bufreg_en;
    vlSelfRef.servile__DOT__cpu__DOT__alu_cmp = vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_cmp;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wdata1 
        = vlSelfRef.servile__DOT__wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_en 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_en;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_cmp 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_cmp;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_q 
        = (vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__data 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_en));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__take_branch 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_cond_branch)) 
              | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_cmp) 
                 ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_q = vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ctrl_misalign) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__take_branch)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_en) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_mem_misalign)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_buf 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_buf 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ibus_ack) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right)
                ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                   & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
                      | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h2f4d1f67_0_2)))
                : (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_ack) 
              | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                  & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)) 
                     & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
                 | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en) 
                    & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_rd 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_buf) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add)) 
              | ((((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                   >> 1U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_slt)) 
                 | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                     >> 2U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_bool)))));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype)
            ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt12to31) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_imm))
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_buf));
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__alu_rd = vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))));
    vlSelfRef.servile__DOT__rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rreq 
        = vlSelfRef.servile__DOT__rf_rreq;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq 
        = vlSelfRef.servile__DOT__rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__new_pc 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_trap)
            ? ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1))) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc))
            : ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jump)
                ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_rd 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready 
        = ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq) 
           | (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rgnt));
    vlSelfRef.servile__DOT__cpu__DOT__bad_pc = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl_rd = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_rd;
    vlSelfRef.servile__DOT__rf_ready = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__bad_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl_rd;
    vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready = vlSelfRef.servile__DOT__rf_ready;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en)) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en)) 
              | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mem_rd) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en)) 
                 | (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd))));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rf_ready 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready;
    vlSelfRef.servile__DOT__cpu__DOT__o_wdata0 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0;
    vlSelfRef.servile__DOT__wdata0 = vlSelfRef.servile__DOT__cpu__DOT__o_wdata0;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wdata0 
        = vlSelfRef.servile__DOT__wdata0;
}

VL_ATTR_COLD void Vtop_subservient_core__M100___stl_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst__1(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___stl_sequent__TOP__mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i_wb_rdt = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__wb_dat_r2c;
    vlSelfRef.i_wb_ack = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__wb_ack;
    vlSelfRef.i_sram_rdata = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_rdata;
    vlSelfRef.i_clk = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.i_rst = ((IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__boot_mode) 
                       | (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__rst));
    vlSelfRef.servile__DOT__i_wb_ext_rdt = vlSelfRef.i_wb_rdt;
    vlSelfRef.servile__DOT__i_wb_ext_ack = vlSelfRef.i_wb_ack;
    vlSelfRef.rf_mem_if__DOT__i_sram_rdata = vlSelfRef.i_sram_rdata;
    vlSelfRef.rf_mem_if__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.servile__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.rf_mem_if__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_rdt 
        = vlSelfRef.servile__DOT__i_wb_ext_rdt;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_ack 
        = vlSelfRef.servile__DOT__i_wb_ext_ack;
    vlSelfRef.rf_mem_if__DOT__o_wb_rdt = (((IData)(vlSelfRef.rf_mem_if__DOT__i_sram_rdata) 
                                           << 0x00000018U) 
                                          | vlSelfRef.rf_mem_if__DOT__wb_rdt);
    vlSelfRef.rf_mem_if__DOT__o_rdata = ((IData)(vlSelfRef.rf_mem_if__DOT__regzero)
                                          ? 0U : (IData)(vlSelfRef.rf_mem_if__DOT__i_sram_rdata));
    vlSelfRef.servile__DOT__mux__DOT__i_clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__cpu__DOT__clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__mux__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.wb_mem_rdt = vlSelfRef.rf_mem_if__DOT__o_wb_rdt;
    vlSelfRef.rf_rdata = vlSelfRef.rf_mem_if__DOT__o_rdata;
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
    vlSelfRef.servile__DOT__i_wb_mem_rdt = vlSelfRef.wb_mem_rdt;
    vlSelfRef.servile__DOT__i_rf_rdata = vlSelfRef.rf_rdata;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rst)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__ibus_cyc));
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt 
        = vlSelfRef.servile__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rdata 
        = vlSelfRef.servile__DOT__i_rf_rdata;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_cyc = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata1 
        = (1U & ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rtrig1)
                  ? (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rdata)
                  : (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rdata1)));
    vlSelfRef.servile__DOT__cpu__DOT__o_ibus_cyc = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_cyc;
    vlSelfRef.servile__DOT__wb_ibus_rdt = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt;
    vlSelfRef.servile__DOT__wb_dmem_rdt = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt;
    vlSelfRef.servile__DOT__rdata1 = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata1;
    vlSelfRef.servile__DOT__wb_ibus_stb = vlSelfRef.servile__DOT__cpu__DOT__o_ibus_cyc;
    vlSelfRef.servile__DOT__cpu__DOT__i_ibus_rdt = vlSelfRef.servile__DOT__wb_ibus_rdt;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_rdt 
        = vlSelfRef.servile__DOT__wb_dmem_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__i_rdata1 = vlSelfRef.servile__DOT__rdata1;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb 
        = vlSelfRef.servile__DOT__wb_ibus_stb;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_rdt = vlSelfRef.servile__DOT__cpu__DOT__i_ibus_rdt;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__ext)
            ? vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_rdt
            : vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_rdt);
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rdata1;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack 
        = ((~ (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_adr 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)
            ? vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_adr
            : vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_adr);
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_we 
        = ((~ (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_we));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_stb 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_stb) 
           | (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb));
    vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_rdt;
    vlSelfRef.servile__DOT__wb_dbus_rdt = vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs2 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.servile__DOT__wb_ibus_ack = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack;
    vlSelfRef.servile__DOT__wb_dmem_ack = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack;
    vlSelfRef.servile__DOT__o_wb_mem_adr = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_adr;
    vlSelfRef.servile__DOT__o_wb_mem_we = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_we;
    vlSelfRef.servile__DOT__o_wb_mem_stb = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
        = (vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt 
           >> 2U);
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_wb_rdt 
        = (vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt 
           >> 7U);
    vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt = vlSelfRef.servile__DOT__wb_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__csr_pc = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_csr_out = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr;
    vlSelfRef.servile__DOT__cpu__DOT__rs2 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs2;
    vlSelfRef.servile__DOT__cpu__DOT__i_ibus_ack = vlSelfRef.servile__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_ack 
        = vlSelfRef.servile__DOT__wb_dmem_ack;
    vlSelfRef.wb_mem_adr = vlSelfRef.servile__DOT__o_wb_mem_adr;
    vlSelfRef.wb_mem_we = vlSelfRef.servile__DOT__o_wb_mem_we;
    vlSelfRef.wb_mem_stb = vlSelfRef.servile__DOT__o_wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_pc;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_csr_out;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2 
        = vlSelfRef.servile__DOT__cpu__DOT__rs2;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack = vlSelfRef.servile__DOT__cpu__DOT__i_ibus_ack;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_ack 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_ack) 
           | ((IData)(vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_ack) 
              | (IData)(vlSelfRef.servile__DOT__mux__DOT__sim_ack)));
    vlSelfRef.rf_mem_if__DOT__i_wb_adr = (0x0000003fU 
                                          & (vlSelfRef.wb_mem_adr 
                                             >> 2U));
    vlSelfRef.rf_mem_if__DOT__i_wb_we = vlSelfRef.wb_mem_we;
    vlSelfRef.rf_mem_if__DOT__i_wb_stb = vlSelfRef.wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_dat 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out) 
              | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en) 
                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
                    & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause)))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_imm));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_en 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_wb_en 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trig_irq 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ibus_ack 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__wb_dbus_ack = vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_ack;
    vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0 
        = (((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_adr) 
            << 2U) | (IData)(vlSelfRef.rf_mem_if__DOT__bsel));
    vlSelfRef.rf_mem_if__DOT__wb_we = ((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_we) 
                                       & ((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_sel) 
                                          >> (IData)(vlSelfRef.rf_mem_if__DOT__bsel)));
    vlSelfRef.rf_mem_if__DOT__wb_en = ((~ ((IData)(vlSelfRef.rf_mem_if__DOT__i_wen) 
                                           | (IData)(vlSelfRef.rf_mem_if__DOT__o_wb_ack))) 
                                       & (IData)(vlSelfRef.rf_mem_if__DOT__i_wb_stb));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in 
        = ((1U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)
            : ((2U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d))
                : ((3U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                    ? ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out))
                    : ((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source)) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out)))));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q 
        = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
            << 7U) | ((0x00000040U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                      >> 1U)) | (0x0000003fU 
                                                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                                    - (IData)(1U)))));
    vlSelfRef.servile__DOT__cpu__DOT__op_b = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b;
    vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack = vlSelfRef.servile__DOT__wb_dbus_ack;
    if (vlSelfRef.rf_mem_if__DOT__wb_en) {
        vlSelfRef.rf_mem_if__DOT__o_sram_wdata = (0x000000ffU 
                                                  & (vlSelfRef.rf_mem_if__DOT__i_wb_dat 
                                                     >> 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.rf_mem_if__DOT__bsel), 3U))));
        vlSelfRef.rf_mem_if__DOT__o_sram_waddr = vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0;
        vlSelfRef.rf_mem_if__DOT__o_sram_raddr = vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0;
        vlSelfRef.rf_mem_if__DOT__o_sram_ren = (1U 
                                                & (~ (IData)(vlSelfRef.rf_mem_if__DOT__i_wb_we)));
        vlSelfRef.rf_mem_if__DOT__o_sram_wen = vlSelfRef.rf_mem_if__DOT__wb_we;
    } else {
        vlSelfRef.rf_mem_if__DOT__o_sram_wdata = (0x000000ffU 
                                                  & (IData)(vlSelfRef.rf_mem_if__DOT__i_wdata));
        vlSelfRef.rf_mem_if__DOT__o_sram_waddr = vlSelfRef.rf_mem_if__DOT__rf_waddr;
        vlSelfRef.rf_mem_if__DOT__o_sram_raddr = vlSelfRef.rf_mem_if__DOT__rf_raddr;
        vlSelfRef.rf_mem_if__DOT__o_sram_ren = (1U 
                                                & (IData)(vlSelfRef.rf_mem_if__DOT__i_ren));
        vlSelfRef.rf_mem_if__DOT__o_sram_wen = vlSelfRef.rf_mem_if__DOT__i_wen;
    }
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in 
        = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__csr_rd = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next)
            : (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
                << 7U) | (0x0000007fU & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                         >> 1U))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b 
        = vlSelfRef.servile__DOT__cpu__DOT__op_b;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_ack = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_ack 
        = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.o_sram_wdata = vlSelfRef.rf_mem_if__DOT__o_sram_wdata;
    vlSelfRef.o_sram_waddr = vlSelfRef.rf_mem_if__DOT__o_sram_waddr;
    vlSelfRef.o_sram_raddr = vlSelfRef.rf_mem_if__DOT__o_sram_raddr;
    vlSelfRef.o_sram_ren = vlSelfRef.rf_mem_if__DOT__o_sram_ren;
    vlSelfRef.o_sram_wen = vlSelfRef.rf_mem_if__DOT__o_sram_wen;
    vlSelfRef.servile__DOT__cpu__DOT__csr_in = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_rd;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt) 
                 >> 5U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_bool 
        = (((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op)) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
               ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1))) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op) 
               >> 1U) & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
                         & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__op_b_sx 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
           ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_sub));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_load 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__sh_done = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy_r))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy_r))));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_done;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_lt 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__rs1_sx) 
                 + ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__op_b_sx)) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_eq 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add)) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__cmp_r) 
              | (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cnt0)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mepc)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr));
    vlSelfRef.servile__DOT__cpu__DOT__o_wdata1 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_bufreg_en 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt_en) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_init) 
               | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap)) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_two_stage_op)))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
              & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__init_done) 
                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                    | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right)))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_cmp 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_eq)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_lt));
    vlSelfRef.servile__DOT__wdata1 = vlSelfRef.servile__DOT__cpu__DOT__o_wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_en = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_bufreg_en;
    vlSelfRef.servile__DOT__cpu__DOT__alu_cmp = vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_cmp;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wdata1 
        = vlSelfRef.servile__DOT__wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_en 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_en;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_cmp 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_cmp;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_q 
        = (vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__data 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_en));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__take_branch 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_cond_branch)) 
              | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_cmp) 
                 ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_q = vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ctrl_misalign) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__take_branch)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_en) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_mem_misalign)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_buf 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_buf 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ibus_ack) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right)
                ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                   & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
                      | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h2f4d1f67_0_2)))
                : (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_ack) 
              | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                  & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)) 
                     & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
                 | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en) 
                    & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_rd 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_buf) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add)) 
              | ((((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                   >> 1U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_slt)) 
                 | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                     >> 2U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_bool)))));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype)
            ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt12to31) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_imm))
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_buf));
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__alu_rd = vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))));
    vlSelfRef.servile__DOT__rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rreq 
        = vlSelfRef.servile__DOT__rf_rreq;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq 
        = vlSelfRef.servile__DOT__rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__new_pc 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_trap)
            ? ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1))) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc))
            : ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jump)
                ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_rd 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready 
        = ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq) 
           | (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rgnt));
    vlSelfRef.servile__DOT__cpu__DOT__bad_pc = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl_rd = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_rd;
    vlSelfRef.servile__DOT__rf_ready = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__bad_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl_rd;
    vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready = vlSelfRef.servile__DOT__rf_ready;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en)) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en)) 
              | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mem_rd) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en)) 
                 | (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd))));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rf_ready 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready;
    vlSelfRef.servile__DOT__cpu__DOT__o_wdata0 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0;
    vlSelfRef.servile__DOT__wdata0 = vlSelfRef.servile__DOT__cpu__DOT__o_wdata0;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wdata0 
        = vlSelfRef.servile__DOT__wdata0;
}

VL_ATTR_COLD void Vtop_subservient_core__M100___stl_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst__1(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___stl_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i_wb_rdt = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__wb_dat_r2c;
    vlSelfRef.i_wb_ack = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__wb_ack;
    vlSelfRef.i_sram_rdata = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_rdata;
    vlSelfRef.i_clk = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.i_rst = ((IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__boot_mode) 
                       | (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__rst));
    vlSelfRef.servile__DOT__i_wb_ext_rdt = vlSelfRef.i_wb_rdt;
    vlSelfRef.servile__DOT__i_wb_ext_ack = vlSelfRef.i_wb_ack;
    vlSelfRef.rf_mem_if__DOT__i_sram_rdata = vlSelfRef.i_sram_rdata;
    vlSelfRef.rf_mem_if__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.servile__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.rf_mem_if__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_rdt 
        = vlSelfRef.servile__DOT__i_wb_ext_rdt;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_ack 
        = vlSelfRef.servile__DOT__i_wb_ext_ack;
    vlSelfRef.rf_mem_if__DOT__o_wb_rdt = (((IData)(vlSelfRef.rf_mem_if__DOT__i_sram_rdata) 
                                           << 0x00000018U) 
                                          | vlSelfRef.rf_mem_if__DOT__wb_rdt);
    vlSelfRef.rf_mem_if__DOT__o_rdata = ((IData)(vlSelfRef.rf_mem_if__DOT__regzero)
                                          ? 0U : (IData)(vlSelfRef.rf_mem_if__DOT__i_sram_rdata));
    vlSelfRef.servile__DOT__mux__DOT__i_clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__cpu__DOT__clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__mux__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.wb_mem_rdt = vlSelfRef.rf_mem_if__DOT__o_wb_rdt;
    vlSelfRef.rf_rdata = vlSelfRef.rf_mem_if__DOT__o_rdata;
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
    vlSelfRef.servile__DOT__i_wb_mem_rdt = vlSelfRef.wb_mem_rdt;
    vlSelfRef.servile__DOT__i_rf_rdata = vlSelfRef.rf_rdata;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rst)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__ibus_cyc));
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt 
        = vlSelfRef.servile__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rdata 
        = vlSelfRef.servile__DOT__i_rf_rdata;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_cyc = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata1 
        = (1U & ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rtrig1)
                  ? (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rdata)
                  : (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rdata1)));
    vlSelfRef.servile__DOT__cpu__DOT__o_ibus_cyc = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_cyc;
    vlSelfRef.servile__DOT__wb_ibus_rdt = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt;
    vlSelfRef.servile__DOT__wb_dmem_rdt = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt;
    vlSelfRef.servile__DOT__rdata1 = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata1;
    vlSelfRef.servile__DOT__wb_ibus_stb = vlSelfRef.servile__DOT__cpu__DOT__o_ibus_cyc;
    vlSelfRef.servile__DOT__cpu__DOT__i_ibus_rdt = vlSelfRef.servile__DOT__wb_ibus_rdt;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_rdt 
        = vlSelfRef.servile__DOT__wb_dmem_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__i_rdata1 = vlSelfRef.servile__DOT__rdata1;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb 
        = vlSelfRef.servile__DOT__wb_ibus_stb;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_rdt = vlSelfRef.servile__DOT__cpu__DOT__i_ibus_rdt;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__ext)
            ? vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_rdt
            : vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_rdt);
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rdata1;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack 
        = ((~ (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_adr 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)
            ? vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_adr
            : vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_adr);
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_we 
        = ((~ (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_we));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_stb 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_stb) 
           | (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb));
    vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_rdt;
    vlSelfRef.servile__DOT__wb_dbus_rdt = vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs2 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.servile__DOT__wb_ibus_ack = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack;
    vlSelfRef.servile__DOT__wb_dmem_ack = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack;
    vlSelfRef.servile__DOT__o_wb_mem_adr = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_adr;
    vlSelfRef.servile__DOT__o_wb_mem_we = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_we;
    vlSelfRef.servile__DOT__o_wb_mem_stb = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
        = (vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt 
           >> 2U);
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_wb_rdt 
        = (vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt 
           >> 7U);
    vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt = vlSelfRef.servile__DOT__wb_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__csr_pc = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_csr_out = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr;
    vlSelfRef.servile__DOT__cpu__DOT__rs2 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs2;
    vlSelfRef.servile__DOT__cpu__DOT__i_ibus_ack = vlSelfRef.servile__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_ack 
        = vlSelfRef.servile__DOT__wb_dmem_ack;
    vlSelfRef.wb_mem_adr = vlSelfRef.servile__DOT__o_wb_mem_adr;
    vlSelfRef.wb_mem_we = vlSelfRef.servile__DOT__o_wb_mem_we;
    vlSelfRef.wb_mem_stb = vlSelfRef.servile__DOT__o_wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_pc;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_csr_out;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2 
        = vlSelfRef.servile__DOT__cpu__DOT__rs2;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack = vlSelfRef.servile__DOT__cpu__DOT__i_ibus_ack;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_ack 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_ack) 
           | ((IData)(vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_ack) 
              | (IData)(vlSelfRef.servile__DOT__mux__DOT__sim_ack)));
    vlSelfRef.rf_mem_if__DOT__i_wb_adr = (0x0000003fU 
                                          & (vlSelfRef.wb_mem_adr 
                                             >> 2U));
    vlSelfRef.rf_mem_if__DOT__i_wb_we = vlSelfRef.wb_mem_we;
    vlSelfRef.rf_mem_if__DOT__i_wb_stb = vlSelfRef.wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_dat 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out) 
              | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en) 
                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
                    & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause)))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_imm));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_en 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_wb_en 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trig_irq 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ibus_ack 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__wb_dbus_ack = vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_ack;
    vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0 
        = (((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_adr) 
            << 2U) | (IData)(vlSelfRef.rf_mem_if__DOT__bsel));
    vlSelfRef.rf_mem_if__DOT__wb_we = ((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_we) 
                                       & ((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_sel) 
                                          >> (IData)(vlSelfRef.rf_mem_if__DOT__bsel)));
    vlSelfRef.rf_mem_if__DOT__wb_en = ((~ ((IData)(vlSelfRef.rf_mem_if__DOT__i_wen) 
                                           | (IData)(vlSelfRef.rf_mem_if__DOT__o_wb_ack))) 
                                       & (IData)(vlSelfRef.rf_mem_if__DOT__i_wb_stb));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in 
        = ((1U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)
            : ((2U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d))
                : ((3U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                    ? ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out))
                    : ((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source)) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out)))));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q 
        = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
            << 7U) | ((0x00000040U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                      >> 1U)) | (0x0000003fU 
                                                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                                    - (IData)(1U)))));
    vlSelfRef.servile__DOT__cpu__DOT__op_b = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b;
    vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack = vlSelfRef.servile__DOT__wb_dbus_ack;
    if (vlSelfRef.rf_mem_if__DOT__wb_en) {
        vlSelfRef.rf_mem_if__DOT__o_sram_wdata = (0x000000ffU 
                                                  & (vlSelfRef.rf_mem_if__DOT__i_wb_dat 
                                                     >> 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.rf_mem_if__DOT__bsel), 3U))));
        vlSelfRef.rf_mem_if__DOT__o_sram_waddr = vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0;
        vlSelfRef.rf_mem_if__DOT__o_sram_raddr = vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0;
        vlSelfRef.rf_mem_if__DOT__o_sram_ren = (1U 
                                                & (~ (IData)(vlSelfRef.rf_mem_if__DOT__i_wb_we)));
        vlSelfRef.rf_mem_if__DOT__o_sram_wen = vlSelfRef.rf_mem_if__DOT__wb_we;
    } else {
        vlSelfRef.rf_mem_if__DOT__o_sram_wdata = (0x000000ffU 
                                                  & (IData)(vlSelfRef.rf_mem_if__DOT__i_wdata));
        vlSelfRef.rf_mem_if__DOT__o_sram_waddr = vlSelfRef.rf_mem_if__DOT__rf_waddr;
        vlSelfRef.rf_mem_if__DOT__o_sram_raddr = vlSelfRef.rf_mem_if__DOT__rf_raddr;
        vlSelfRef.rf_mem_if__DOT__o_sram_ren = (1U 
                                                & (IData)(vlSelfRef.rf_mem_if__DOT__i_ren));
        vlSelfRef.rf_mem_if__DOT__o_sram_wen = vlSelfRef.rf_mem_if__DOT__i_wen;
    }
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in 
        = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__csr_rd = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next)
            : (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
                << 7U) | (0x0000007fU & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                         >> 1U))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b 
        = vlSelfRef.servile__DOT__cpu__DOT__op_b;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_ack = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_ack 
        = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.o_sram_wdata = vlSelfRef.rf_mem_if__DOT__o_sram_wdata;
    vlSelfRef.o_sram_waddr = vlSelfRef.rf_mem_if__DOT__o_sram_waddr;
    vlSelfRef.o_sram_raddr = vlSelfRef.rf_mem_if__DOT__o_sram_raddr;
    vlSelfRef.o_sram_ren = vlSelfRef.rf_mem_if__DOT__o_sram_ren;
    vlSelfRef.o_sram_wen = vlSelfRef.rf_mem_if__DOT__o_sram_wen;
    vlSelfRef.servile__DOT__cpu__DOT__csr_in = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_rd;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt) 
                 >> 5U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_bool 
        = (((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op)) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
               ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1))) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op) 
               >> 1U) & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
                         & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__op_b_sx 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
           ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_sub));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_load 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__sh_done = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy_r))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy_r))));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_done;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_lt 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__rs1_sx) 
                 + ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__op_b_sx)) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_eq 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add)) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__cmp_r) 
              | (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cnt0)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mepc)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr));
    vlSelfRef.servile__DOT__cpu__DOT__o_wdata1 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_bufreg_en 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt_en) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_init) 
               | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap)) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_two_stage_op)))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
              & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__init_done) 
                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                    | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right)))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_cmp 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_eq)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_lt));
    vlSelfRef.servile__DOT__wdata1 = vlSelfRef.servile__DOT__cpu__DOT__o_wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_en = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_bufreg_en;
    vlSelfRef.servile__DOT__cpu__DOT__alu_cmp = vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_cmp;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wdata1 
        = vlSelfRef.servile__DOT__wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_en 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_en;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_cmp 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_cmp;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_q 
        = (vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__data 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_en));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__take_branch 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_cond_branch)) 
              | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_cmp) 
                 ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_q = vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ctrl_misalign) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__take_branch)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_en) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_mem_misalign)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_buf 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_buf 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ibus_ack) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right)
                ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                   & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
                      | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h2f4d1f67_0_2)))
                : (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_ack) 
              | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                  & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)) 
                     & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
                 | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en) 
                    & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_rd 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_buf) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add)) 
              | ((((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                   >> 1U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_slt)) 
                 | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                     >> 2U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_bool)))));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype)
            ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt12to31) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_imm))
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_buf));
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__alu_rd = vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))));
    vlSelfRef.servile__DOT__rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rreq 
        = vlSelfRef.servile__DOT__rf_rreq;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq 
        = vlSelfRef.servile__DOT__rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__new_pc 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_trap)
            ? ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1))) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc))
            : ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jump)
                ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_rd 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready 
        = ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq) 
           | (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rgnt));
    vlSelfRef.servile__DOT__cpu__DOT__bad_pc = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl_rd = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_rd;
    vlSelfRef.servile__DOT__rf_ready = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__bad_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl_rd;
    vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready = vlSelfRef.servile__DOT__rf_ready;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en)) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en)) 
              | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mem_rd) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en)) 
                 | (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd))));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rf_ready 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready;
    vlSelfRef.servile__DOT__cpu__DOT__o_wdata0 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0;
    vlSelfRef.servile__DOT__wdata0 = vlSelfRef.servile__DOT__cpu__DOT__o_wdata0;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wdata0 
        = vlSelfRef.servile__DOT__wdata0;
}

VL_ATTR_COLD void Vtop_subservient_core__M100___stl_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst__1(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___stl_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i_wb_rdt = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__wb_dat_r2c;
    vlSelfRef.i_wb_ack = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__wb_ack;
    vlSelfRef.i_sram_rdata = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_rdata;
    vlSelfRef.i_clk = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.i_rst = ((IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__boot_mode) 
                       | (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__rst));
    vlSelfRef.servile__DOT__i_wb_ext_rdt = vlSelfRef.i_wb_rdt;
    vlSelfRef.servile__DOT__i_wb_ext_ack = vlSelfRef.i_wb_ack;
    vlSelfRef.rf_mem_if__DOT__i_sram_rdata = vlSelfRef.i_sram_rdata;
    vlSelfRef.rf_mem_if__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.servile__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.rf_mem_if__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_rdt 
        = vlSelfRef.servile__DOT__i_wb_ext_rdt;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_ack 
        = vlSelfRef.servile__DOT__i_wb_ext_ack;
    vlSelfRef.rf_mem_if__DOT__o_wb_rdt = (((IData)(vlSelfRef.rf_mem_if__DOT__i_sram_rdata) 
                                           << 0x00000018U) 
                                          | vlSelfRef.rf_mem_if__DOT__wb_rdt);
    vlSelfRef.rf_mem_if__DOT__o_rdata = ((IData)(vlSelfRef.rf_mem_if__DOT__regzero)
                                          ? 0U : (IData)(vlSelfRef.rf_mem_if__DOT__i_sram_rdata));
    vlSelfRef.servile__DOT__mux__DOT__i_clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__cpu__DOT__clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__mux__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.wb_mem_rdt = vlSelfRef.rf_mem_if__DOT__o_wb_rdt;
    vlSelfRef.rf_rdata = vlSelfRef.rf_mem_if__DOT__o_rdata;
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
    vlSelfRef.servile__DOT__i_wb_mem_rdt = vlSelfRef.wb_mem_rdt;
    vlSelfRef.servile__DOT__i_rf_rdata = vlSelfRef.rf_rdata;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rst)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__ibus_cyc));
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt 
        = vlSelfRef.servile__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rdata 
        = vlSelfRef.servile__DOT__i_rf_rdata;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_cyc = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata1 
        = (1U & ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rtrig1)
                  ? (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rdata)
                  : (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rdata1)));
    vlSelfRef.servile__DOT__cpu__DOT__o_ibus_cyc = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_cyc;
    vlSelfRef.servile__DOT__wb_ibus_rdt = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt;
    vlSelfRef.servile__DOT__wb_dmem_rdt = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt;
    vlSelfRef.servile__DOT__rdata1 = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata1;
    vlSelfRef.servile__DOT__wb_ibus_stb = vlSelfRef.servile__DOT__cpu__DOT__o_ibus_cyc;
    vlSelfRef.servile__DOT__cpu__DOT__i_ibus_rdt = vlSelfRef.servile__DOT__wb_ibus_rdt;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_rdt 
        = vlSelfRef.servile__DOT__wb_dmem_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__i_rdata1 = vlSelfRef.servile__DOT__rdata1;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb 
        = vlSelfRef.servile__DOT__wb_ibus_stb;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_rdt = vlSelfRef.servile__DOT__cpu__DOT__i_ibus_rdt;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__ext)
            ? vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_rdt
            : vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_rdt);
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rdata1;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack 
        = ((~ (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_adr 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)
            ? vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_adr
            : vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_adr);
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_we 
        = ((~ (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_we));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_stb 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_stb) 
           | (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb));
    vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_rdt;
    vlSelfRef.servile__DOT__wb_dbus_rdt = vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs2 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.servile__DOT__wb_ibus_ack = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack;
    vlSelfRef.servile__DOT__wb_dmem_ack = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack;
    vlSelfRef.servile__DOT__o_wb_mem_adr = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_adr;
    vlSelfRef.servile__DOT__o_wb_mem_we = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_we;
    vlSelfRef.servile__DOT__o_wb_mem_stb = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
        = (vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt 
           >> 2U);
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_wb_rdt 
        = (vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt 
           >> 7U);
    vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt = vlSelfRef.servile__DOT__wb_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__csr_pc = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_csr_out = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr;
    vlSelfRef.servile__DOT__cpu__DOT__rs2 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs2;
    vlSelfRef.servile__DOT__cpu__DOT__i_ibus_ack = vlSelfRef.servile__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_ack 
        = vlSelfRef.servile__DOT__wb_dmem_ack;
    vlSelfRef.wb_mem_adr = vlSelfRef.servile__DOT__o_wb_mem_adr;
    vlSelfRef.wb_mem_we = vlSelfRef.servile__DOT__o_wb_mem_we;
    vlSelfRef.wb_mem_stb = vlSelfRef.servile__DOT__o_wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_pc;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_csr_out;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2 
        = vlSelfRef.servile__DOT__cpu__DOT__rs2;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack = vlSelfRef.servile__DOT__cpu__DOT__i_ibus_ack;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_ack 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_ack) 
           | ((IData)(vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_ack) 
              | (IData)(vlSelfRef.servile__DOT__mux__DOT__sim_ack)));
    vlSelfRef.rf_mem_if__DOT__i_wb_adr = (0x0000003fU 
                                          & (vlSelfRef.wb_mem_adr 
                                             >> 2U));
    vlSelfRef.rf_mem_if__DOT__i_wb_we = vlSelfRef.wb_mem_we;
    vlSelfRef.rf_mem_if__DOT__i_wb_stb = vlSelfRef.wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_dat 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out) 
              | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en) 
                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
                    & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause)))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_imm));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_en 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_wb_en 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trig_irq 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ibus_ack 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__wb_dbus_ack = vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_ack;
    vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0 
        = (((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_adr) 
            << 2U) | (IData)(vlSelfRef.rf_mem_if__DOT__bsel));
    vlSelfRef.rf_mem_if__DOT__wb_we = ((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_we) 
                                       & ((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_sel) 
                                          >> (IData)(vlSelfRef.rf_mem_if__DOT__bsel)));
    vlSelfRef.rf_mem_if__DOT__wb_en = ((~ ((IData)(vlSelfRef.rf_mem_if__DOT__i_wen) 
                                           | (IData)(vlSelfRef.rf_mem_if__DOT__o_wb_ack))) 
                                       & (IData)(vlSelfRef.rf_mem_if__DOT__i_wb_stb));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in 
        = ((1U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)
            : ((2U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d))
                : ((3U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                    ? ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out))
                    : ((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source)) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out)))));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q 
        = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
            << 7U) | ((0x00000040U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                      >> 1U)) | (0x0000003fU 
                                                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                                    - (IData)(1U)))));
    vlSelfRef.servile__DOT__cpu__DOT__op_b = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b;
    vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack = vlSelfRef.servile__DOT__wb_dbus_ack;
    if (vlSelfRef.rf_mem_if__DOT__wb_en) {
        vlSelfRef.rf_mem_if__DOT__o_sram_wdata = (0x000000ffU 
                                                  & (vlSelfRef.rf_mem_if__DOT__i_wb_dat 
                                                     >> 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.rf_mem_if__DOT__bsel), 3U))));
        vlSelfRef.rf_mem_if__DOT__o_sram_waddr = vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0;
        vlSelfRef.rf_mem_if__DOT__o_sram_raddr = vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0;
        vlSelfRef.rf_mem_if__DOT__o_sram_ren = (1U 
                                                & (~ (IData)(vlSelfRef.rf_mem_if__DOT__i_wb_we)));
        vlSelfRef.rf_mem_if__DOT__o_sram_wen = vlSelfRef.rf_mem_if__DOT__wb_we;
    } else {
        vlSelfRef.rf_mem_if__DOT__o_sram_wdata = (0x000000ffU 
                                                  & (IData)(vlSelfRef.rf_mem_if__DOT__i_wdata));
        vlSelfRef.rf_mem_if__DOT__o_sram_waddr = vlSelfRef.rf_mem_if__DOT__rf_waddr;
        vlSelfRef.rf_mem_if__DOT__o_sram_raddr = vlSelfRef.rf_mem_if__DOT__rf_raddr;
        vlSelfRef.rf_mem_if__DOT__o_sram_ren = (1U 
                                                & (IData)(vlSelfRef.rf_mem_if__DOT__i_ren));
        vlSelfRef.rf_mem_if__DOT__o_sram_wen = vlSelfRef.rf_mem_if__DOT__i_wen;
    }
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in 
        = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__csr_rd = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next)
            : (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
                << 7U) | (0x0000007fU & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                         >> 1U))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b 
        = vlSelfRef.servile__DOT__cpu__DOT__op_b;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_ack = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_ack 
        = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.o_sram_wdata = vlSelfRef.rf_mem_if__DOT__o_sram_wdata;
    vlSelfRef.o_sram_waddr = vlSelfRef.rf_mem_if__DOT__o_sram_waddr;
    vlSelfRef.o_sram_raddr = vlSelfRef.rf_mem_if__DOT__o_sram_raddr;
    vlSelfRef.o_sram_ren = vlSelfRef.rf_mem_if__DOT__o_sram_ren;
    vlSelfRef.o_sram_wen = vlSelfRef.rf_mem_if__DOT__o_sram_wen;
    vlSelfRef.servile__DOT__cpu__DOT__csr_in = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_rd;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt) 
                 >> 5U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_bool 
        = (((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op)) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
               ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1))) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op) 
               >> 1U) & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
                         & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__op_b_sx 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
           ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_sub));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_load 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__sh_done = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy_r))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy_r))));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_done;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_lt 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__rs1_sx) 
                 + ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__op_b_sx)) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_eq 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add)) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__cmp_r) 
              | (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cnt0)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mepc)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr));
    vlSelfRef.servile__DOT__cpu__DOT__o_wdata1 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_bufreg_en 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt_en) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_init) 
               | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap)) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_two_stage_op)))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
              & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__init_done) 
                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                    | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right)))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_cmp 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_eq)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_lt));
    vlSelfRef.servile__DOT__wdata1 = vlSelfRef.servile__DOT__cpu__DOT__o_wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_en = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_bufreg_en;
    vlSelfRef.servile__DOT__cpu__DOT__alu_cmp = vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_cmp;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wdata1 
        = vlSelfRef.servile__DOT__wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_en 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_en;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_cmp 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_cmp;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_q 
        = (vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__data 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_en));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__take_branch 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_cond_branch)) 
              | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_cmp) 
                 ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_q = vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ctrl_misalign) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__take_branch)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_en) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_mem_misalign)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_buf 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_buf 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ibus_ack) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right)
                ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                   & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
                      | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h2f4d1f67_0_2)))
                : (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_ack) 
              | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                  & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)) 
                     & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
                 | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en) 
                    & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_rd 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_buf) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add)) 
              | ((((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                   >> 1U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_slt)) 
                 | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                     >> 2U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_bool)))));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype)
            ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt12to31) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_imm))
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_buf));
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__alu_rd = vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))));
    vlSelfRef.servile__DOT__rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rreq 
        = vlSelfRef.servile__DOT__rf_rreq;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq 
        = vlSelfRef.servile__DOT__rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__new_pc 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_trap)
            ? ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1))) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc))
            : ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jump)
                ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_rd 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready 
        = ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq) 
           | (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rgnt));
    vlSelfRef.servile__DOT__cpu__DOT__bad_pc = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl_rd = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_rd;
    vlSelfRef.servile__DOT__rf_ready = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__bad_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl_rd;
    vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready = vlSelfRef.servile__DOT__rf_ready;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en)) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en)) 
              | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mem_rd) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en)) 
                 | (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd))));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rf_ready 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready;
    vlSelfRef.servile__DOT__cpu__DOT__o_wdata0 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0;
    vlSelfRef.servile__DOT__wdata0 = vlSelfRef.servile__DOT__cpu__DOT__o_wdata0;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wdata0 
        = vlSelfRef.servile__DOT__wdata0;
}

VL_ATTR_COLD void Vtop_subservient_core__M100___stl_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst__1(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___stl_sequent__TOP__mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i_wb_rdt = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__wb_dat_r2c;
    vlSelfRef.i_wb_ack = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__wb_ack;
    vlSelfRef.i_sram_rdata = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_rdata;
    vlSelfRef.i_clk = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.i_rst = ((IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__boot_mode) 
                       | (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__rst));
    vlSelfRef.servile__DOT__i_wb_ext_rdt = vlSelfRef.i_wb_rdt;
    vlSelfRef.servile__DOT__i_wb_ext_ack = vlSelfRef.i_wb_ack;
    vlSelfRef.rf_mem_if__DOT__i_sram_rdata = vlSelfRef.i_sram_rdata;
    vlSelfRef.rf_mem_if__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.servile__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.rf_mem_if__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_rdt 
        = vlSelfRef.servile__DOT__i_wb_ext_rdt;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_ack 
        = vlSelfRef.servile__DOT__i_wb_ext_ack;
    vlSelfRef.rf_mem_if__DOT__o_wb_rdt = (((IData)(vlSelfRef.rf_mem_if__DOT__i_sram_rdata) 
                                           << 0x00000018U) 
                                          | vlSelfRef.rf_mem_if__DOT__wb_rdt);
    vlSelfRef.rf_mem_if__DOT__o_rdata = ((IData)(vlSelfRef.rf_mem_if__DOT__regzero)
                                          ? 0U : (IData)(vlSelfRef.rf_mem_if__DOT__i_sram_rdata));
    vlSelfRef.servile__DOT__mux__DOT__i_clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__cpu__DOT__clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__mux__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.wb_mem_rdt = vlSelfRef.rf_mem_if__DOT__o_wb_rdt;
    vlSelfRef.rf_rdata = vlSelfRef.rf_mem_if__DOT__o_rdata;
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
    vlSelfRef.servile__DOT__i_wb_mem_rdt = vlSelfRef.wb_mem_rdt;
    vlSelfRef.servile__DOT__i_rf_rdata = vlSelfRef.rf_rdata;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rst)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__ibus_cyc));
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt 
        = vlSelfRef.servile__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rdata 
        = vlSelfRef.servile__DOT__i_rf_rdata;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_cyc = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata1 
        = (1U & ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rtrig1)
                  ? (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rdata)
                  : (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rdata1)));
    vlSelfRef.servile__DOT__cpu__DOT__o_ibus_cyc = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_cyc;
    vlSelfRef.servile__DOT__wb_ibus_rdt = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt;
    vlSelfRef.servile__DOT__wb_dmem_rdt = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt;
    vlSelfRef.servile__DOT__rdata1 = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata1;
    vlSelfRef.servile__DOT__wb_ibus_stb = vlSelfRef.servile__DOT__cpu__DOT__o_ibus_cyc;
    vlSelfRef.servile__DOT__cpu__DOT__i_ibus_rdt = vlSelfRef.servile__DOT__wb_ibus_rdt;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_rdt 
        = vlSelfRef.servile__DOT__wb_dmem_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__i_rdata1 = vlSelfRef.servile__DOT__rdata1;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb 
        = vlSelfRef.servile__DOT__wb_ibus_stb;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_rdt = vlSelfRef.servile__DOT__cpu__DOT__i_ibus_rdt;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__ext)
            ? vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_rdt
            : vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_rdt);
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rdata1;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack 
        = ((~ (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_adr 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)
            ? vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_adr
            : vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_adr);
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_we 
        = ((~ (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_we));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_stb 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_stb) 
           | (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb));
    vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_rdt;
    vlSelfRef.servile__DOT__wb_dbus_rdt = vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs2 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.servile__DOT__wb_ibus_ack = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack;
    vlSelfRef.servile__DOT__wb_dmem_ack = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack;
    vlSelfRef.servile__DOT__o_wb_mem_adr = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_adr;
    vlSelfRef.servile__DOT__o_wb_mem_we = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_we;
    vlSelfRef.servile__DOT__o_wb_mem_stb = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
        = (vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt 
           >> 2U);
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_wb_rdt 
        = (vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt 
           >> 7U);
    vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt = vlSelfRef.servile__DOT__wb_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__csr_pc = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_csr_out = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr;
    vlSelfRef.servile__DOT__cpu__DOT__rs2 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs2;
    vlSelfRef.servile__DOT__cpu__DOT__i_ibus_ack = vlSelfRef.servile__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_ack 
        = vlSelfRef.servile__DOT__wb_dmem_ack;
    vlSelfRef.wb_mem_adr = vlSelfRef.servile__DOT__o_wb_mem_adr;
    vlSelfRef.wb_mem_we = vlSelfRef.servile__DOT__o_wb_mem_we;
    vlSelfRef.wb_mem_stb = vlSelfRef.servile__DOT__o_wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_pc;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_csr_out;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2 
        = vlSelfRef.servile__DOT__cpu__DOT__rs2;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack = vlSelfRef.servile__DOT__cpu__DOT__i_ibus_ack;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_ack 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_ack) 
           | ((IData)(vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_ack) 
              | (IData)(vlSelfRef.servile__DOT__mux__DOT__sim_ack)));
    vlSelfRef.rf_mem_if__DOT__i_wb_adr = (0x0000003fU 
                                          & (vlSelfRef.wb_mem_adr 
                                             >> 2U));
    vlSelfRef.rf_mem_if__DOT__i_wb_we = vlSelfRef.wb_mem_we;
    vlSelfRef.rf_mem_if__DOT__i_wb_stb = vlSelfRef.wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_dat 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out) 
              | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en) 
                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
                    & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause)))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_imm));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_en 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_wb_en 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trig_irq 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ibus_ack 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__wb_dbus_ack = vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_ack;
    vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0 
        = (((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_adr) 
            << 2U) | (IData)(vlSelfRef.rf_mem_if__DOT__bsel));
    vlSelfRef.rf_mem_if__DOT__wb_we = ((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_we) 
                                       & ((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_sel) 
                                          >> (IData)(vlSelfRef.rf_mem_if__DOT__bsel)));
    vlSelfRef.rf_mem_if__DOT__wb_en = ((~ ((IData)(vlSelfRef.rf_mem_if__DOT__i_wen) 
                                           | (IData)(vlSelfRef.rf_mem_if__DOT__o_wb_ack))) 
                                       & (IData)(vlSelfRef.rf_mem_if__DOT__i_wb_stb));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in 
        = ((1U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)
            : ((2U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d))
                : ((3U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                    ? ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out))
                    : ((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source)) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out)))));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q 
        = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
            << 7U) | ((0x00000040U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                      >> 1U)) | (0x0000003fU 
                                                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                                    - (IData)(1U)))));
    vlSelfRef.servile__DOT__cpu__DOT__op_b = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b;
    vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack = vlSelfRef.servile__DOT__wb_dbus_ack;
    if (vlSelfRef.rf_mem_if__DOT__wb_en) {
        vlSelfRef.rf_mem_if__DOT__o_sram_wdata = (0x000000ffU 
                                                  & (vlSelfRef.rf_mem_if__DOT__i_wb_dat 
                                                     >> 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.rf_mem_if__DOT__bsel), 3U))));
        vlSelfRef.rf_mem_if__DOT__o_sram_waddr = vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0;
        vlSelfRef.rf_mem_if__DOT__o_sram_raddr = vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0;
        vlSelfRef.rf_mem_if__DOT__o_sram_ren = (1U 
                                                & (~ (IData)(vlSelfRef.rf_mem_if__DOT__i_wb_we)));
        vlSelfRef.rf_mem_if__DOT__o_sram_wen = vlSelfRef.rf_mem_if__DOT__wb_we;
    } else {
        vlSelfRef.rf_mem_if__DOT__o_sram_wdata = (0x000000ffU 
                                                  & (IData)(vlSelfRef.rf_mem_if__DOT__i_wdata));
        vlSelfRef.rf_mem_if__DOT__o_sram_waddr = vlSelfRef.rf_mem_if__DOT__rf_waddr;
        vlSelfRef.rf_mem_if__DOT__o_sram_raddr = vlSelfRef.rf_mem_if__DOT__rf_raddr;
        vlSelfRef.rf_mem_if__DOT__o_sram_ren = (1U 
                                                & (IData)(vlSelfRef.rf_mem_if__DOT__i_ren));
        vlSelfRef.rf_mem_if__DOT__o_sram_wen = vlSelfRef.rf_mem_if__DOT__i_wen;
    }
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in 
        = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__csr_rd = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next)
            : (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
                << 7U) | (0x0000007fU & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                         >> 1U))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b 
        = vlSelfRef.servile__DOT__cpu__DOT__op_b;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_ack = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_ack 
        = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.o_sram_wdata = vlSelfRef.rf_mem_if__DOT__o_sram_wdata;
    vlSelfRef.o_sram_waddr = vlSelfRef.rf_mem_if__DOT__o_sram_waddr;
    vlSelfRef.o_sram_raddr = vlSelfRef.rf_mem_if__DOT__o_sram_raddr;
    vlSelfRef.o_sram_ren = vlSelfRef.rf_mem_if__DOT__o_sram_ren;
    vlSelfRef.o_sram_wen = vlSelfRef.rf_mem_if__DOT__o_sram_wen;
    vlSelfRef.servile__DOT__cpu__DOT__csr_in = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_rd;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt) 
                 >> 5U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_bool 
        = (((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op)) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
               ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1))) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op) 
               >> 1U) & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
                         & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__op_b_sx 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
           ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_sub));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_load 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__sh_done = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy_r))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy_r))));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_done;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_lt 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__rs1_sx) 
                 + ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__op_b_sx)) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_eq 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add)) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__cmp_r) 
              | (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cnt0)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mepc)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr));
    vlSelfRef.servile__DOT__cpu__DOT__o_wdata1 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_bufreg_en 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt_en) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_init) 
               | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap)) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_two_stage_op)))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
              & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__init_done) 
                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                    | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right)))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_cmp 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_eq)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_lt));
    vlSelfRef.servile__DOT__wdata1 = vlSelfRef.servile__DOT__cpu__DOT__o_wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_en = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_bufreg_en;
    vlSelfRef.servile__DOT__cpu__DOT__alu_cmp = vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_cmp;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wdata1 
        = vlSelfRef.servile__DOT__wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_en 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_en;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_cmp 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_cmp;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_q 
        = (vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__data 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_en));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__take_branch 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_cond_branch)) 
              | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_cmp) 
                 ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_q = vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ctrl_misalign) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__take_branch)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_en) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_mem_misalign)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_buf 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_buf 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ibus_ack) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right)
                ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                   & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
                      | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h2f4d1f67_0_2)))
                : (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_ack) 
              | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                  & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)) 
                     & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
                 | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en) 
                    & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_rd 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_buf) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add)) 
              | ((((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                   >> 1U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_slt)) 
                 | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                     >> 2U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_bool)))));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype)
            ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt12to31) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_imm))
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_buf));
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__alu_rd = vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))));
    vlSelfRef.servile__DOT__rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rreq 
        = vlSelfRef.servile__DOT__rf_rreq;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq 
        = vlSelfRef.servile__DOT__rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__new_pc 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_trap)
            ? ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1))) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc))
            : ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jump)
                ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_rd 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready 
        = ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq) 
           | (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rgnt));
    vlSelfRef.servile__DOT__cpu__DOT__bad_pc = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl_rd = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_rd;
    vlSelfRef.servile__DOT__rf_ready = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__bad_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl_rd;
    vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready = vlSelfRef.servile__DOT__rf_ready;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en)) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en)) 
              | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mem_rd) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en)) 
                 | (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd))));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rf_ready 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready;
    vlSelfRef.servile__DOT__cpu__DOT__o_wdata0 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0;
    vlSelfRef.servile__DOT__wdata0 = vlSelfRef.servile__DOT__cpu__DOT__o_wdata0;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wdata0 
        = vlSelfRef.servile__DOT__wdata0;
}

VL_ATTR_COLD void Vtop_subservient_core__M100___stl_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst__1(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___stl_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__core_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i_wb_rdt = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__wb_dat_r2c;
    vlSelfRef.i_wb_ack = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__wb_ack;
    vlSelfRef.i_sram_rdata = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_rdata;
    vlSelfRef.i_clk = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.i_rst = ((IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__boot_mode) 
                       | (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__rst));
    vlSelfRef.servile__DOT__i_wb_ext_rdt = vlSelfRef.i_wb_rdt;
    vlSelfRef.servile__DOT__i_wb_ext_ack = vlSelfRef.i_wb_ack;
    vlSelfRef.rf_mem_if__DOT__i_sram_rdata = vlSelfRef.i_sram_rdata;
    vlSelfRef.rf_mem_if__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.servile__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.rf_mem_if__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_rdt 
        = vlSelfRef.servile__DOT__i_wb_ext_rdt;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_ack 
        = vlSelfRef.servile__DOT__i_wb_ext_ack;
    vlSelfRef.rf_mem_if__DOT__o_wb_rdt = (((IData)(vlSelfRef.rf_mem_if__DOT__i_sram_rdata) 
                                           << 0x00000018U) 
                                          | vlSelfRef.rf_mem_if__DOT__wb_rdt);
    vlSelfRef.rf_mem_if__DOT__o_rdata = ((IData)(vlSelfRef.rf_mem_if__DOT__regzero)
                                          ? 0U : (IData)(vlSelfRef.rf_mem_if__DOT__i_sram_rdata));
    vlSelfRef.servile__DOT__mux__DOT__i_clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__cpu__DOT__clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__mux__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.wb_mem_rdt = vlSelfRef.rf_mem_if__DOT__o_wb_rdt;
    vlSelfRef.rf_rdata = vlSelfRef.rf_mem_if__DOT__o_rdata;
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
    vlSelfRef.servile__DOT__i_wb_mem_rdt = vlSelfRef.wb_mem_rdt;
    vlSelfRef.servile__DOT__i_rf_rdata = vlSelfRef.rf_rdata;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rst)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__ibus_cyc));
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt 
        = vlSelfRef.servile__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rdata 
        = vlSelfRef.servile__DOT__i_rf_rdata;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_cyc = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata1 
        = (1U & ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rtrig1)
                  ? (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rdata)
                  : (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rdata1)));
    vlSelfRef.servile__DOT__cpu__DOT__o_ibus_cyc = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_cyc;
    vlSelfRef.servile__DOT__wb_ibus_rdt = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt;
    vlSelfRef.servile__DOT__wb_dmem_rdt = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt;
    vlSelfRef.servile__DOT__rdata1 = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata1;
    vlSelfRef.servile__DOT__wb_ibus_stb = vlSelfRef.servile__DOT__cpu__DOT__o_ibus_cyc;
    vlSelfRef.servile__DOT__cpu__DOT__i_ibus_rdt = vlSelfRef.servile__DOT__wb_ibus_rdt;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_rdt 
        = vlSelfRef.servile__DOT__wb_dmem_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__i_rdata1 = vlSelfRef.servile__DOT__rdata1;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb 
        = vlSelfRef.servile__DOT__wb_ibus_stb;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_rdt = vlSelfRef.servile__DOT__cpu__DOT__i_ibus_rdt;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__ext)
            ? vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_rdt
            : vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_rdt);
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rdata1;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack 
        = ((~ (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_adr 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)
            ? vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_adr
            : vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_adr);
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_we 
        = ((~ (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_we));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_stb 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_stb) 
           | (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb));
    vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_rdt;
    vlSelfRef.servile__DOT__wb_dbus_rdt = vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs2 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.servile__DOT__wb_ibus_ack = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack;
    vlSelfRef.servile__DOT__wb_dmem_ack = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack;
    vlSelfRef.servile__DOT__o_wb_mem_adr = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_adr;
    vlSelfRef.servile__DOT__o_wb_mem_we = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_we;
    vlSelfRef.servile__DOT__o_wb_mem_stb = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
        = (vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt 
           >> 2U);
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_wb_rdt 
        = (vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt 
           >> 7U);
    vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt = vlSelfRef.servile__DOT__wb_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__csr_pc = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_csr_out = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr;
    vlSelfRef.servile__DOT__cpu__DOT__rs2 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs2;
    vlSelfRef.servile__DOT__cpu__DOT__i_ibus_ack = vlSelfRef.servile__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_ack 
        = vlSelfRef.servile__DOT__wb_dmem_ack;
    vlSelfRef.wb_mem_adr = vlSelfRef.servile__DOT__o_wb_mem_adr;
    vlSelfRef.wb_mem_we = vlSelfRef.servile__DOT__o_wb_mem_we;
    vlSelfRef.wb_mem_stb = vlSelfRef.servile__DOT__o_wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_pc;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_csr_out;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2 
        = vlSelfRef.servile__DOT__cpu__DOT__rs2;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack = vlSelfRef.servile__DOT__cpu__DOT__i_ibus_ack;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_ack 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_ack) 
           | ((IData)(vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_ack) 
              | (IData)(vlSelfRef.servile__DOT__mux__DOT__sim_ack)));
    vlSelfRef.rf_mem_if__DOT__i_wb_adr = (0x0000003fU 
                                          & (vlSelfRef.wb_mem_adr 
                                             >> 2U));
    vlSelfRef.rf_mem_if__DOT__i_wb_we = vlSelfRef.wb_mem_we;
    vlSelfRef.rf_mem_if__DOT__i_wb_stb = vlSelfRef.wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_dat 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out) 
              | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en) 
                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
                    & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause)))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_imm));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_en 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_wb_en 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trig_irq 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ibus_ack 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__wb_dbus_ack = vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_ack;
    vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0 
        = (((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_adr) 
            << 2U) | (IData)(vlSelfRef.rf_mem_if__DOT__bsel));
    vlSelfRef.rf_mem_if__DOT__wb_we = ((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_we) 
                                       & ((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_sel) 
                                          >> (IData)(vlSelfRef.rf_mem_if__DOT__bsel)));
    vlSelfRef.rf_mem_if__DOT__wb_en = ((~ ((IData)(vlSelfRef.rf_mem_if__DOT__i_wen) 
                                           | (IData)(vlSelfRef.rf_mem_if__DOT__o_wb_ack))) 
                                       & (IData)(vlSelfRef.rf_mem_if__DOT__i_wb_stb));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in 
        = ((1U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)
            : ((2U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d))
                : ((3U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                    ? ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out))
                    : ((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source)) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out)))));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q 
        = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
            << 7U) | ((0x00000040U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                      >> 1U)) | (0x0000003fU 
                                                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                                    - (IData)(1U)))));
    vlSelfRef.servile__DOT__cpu__DOT__op_b = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b;
    vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack = vlSelfRef.servile__DOT__wb_dbus_ack;
    if (vlSelfRef.rf_mem_if__DOT__wb_en) {
        vlSelfRef.rf_mem_if__DOT__o_sram_wdata = (0x000000ffU 
                                                  & (vlSelfRef.rf_mem_if__DOT__i_wb_dat 
                                                     >> 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.rf_mem_if__DOT__bsel), 3U))));
        vlSelfRef.rf_mem_if__DOT__o_sram_waddr = vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0;
        vlSelfRef.rf_mem_if__DOT__o_sram_raddr = vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0;
        vlSelfRef.rf_mem_if__DOT__o_sram_ren = (1U 
                                                & (~ (IData)(vlSelfRef.rf_mem_if__DOT__i_wb_we)));
        vlSelfRef.rf_mem_if__DOT__o_sram_wen = vlSelfRef.rf_mem_if__DOT__wb_we;
    } else {
        vlSelfRef.rf_mem_if__DOT__o_sram_wdata = (0x000000ffU 
                                                  & (IData)(vlSelfRef.rf_mem_if__DOT__i_wdata));
        vlSelfRef.rf_mem_if__DOT__o_sram_waddr = vlSelfRef.rf_mem_if__DOT__rf_waddr;
        vlSelfRef.rf_mem_if__DOT__o_sram_raddr = vlSelfRef.rf_mem_if__DOT__rf_raddr;
        vlSelfRef.rf_mem_if__DOT__o_sram_ren = (1U 
                                                & (IData)(vlSelfRef.rf_mem_if__DOT__i_ren));
        vlSelfRef.rf_mem_if__DOT__o_sram_wen = vlSelfRef.rf_mem_if__DOT__i_wen;
    }
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in 
        = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__csr_rd = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next)
            : (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
                << 7U) | (0x0000007fU & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                         >> 1U))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b 
        = vlSelfRef.servile__DOT__cpu__DOT__op_b;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_ack = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_ack 
        = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.o_sram_wdata = vlSelfRef.rf_mem_if__DOT__o_sram_wdata;
    vlSelfRef.o_sram_waddr = vlSelfRef.rf_mem_if__DOT__o_sram_waddr;
    vlSelfRef.o_sram_raddr = vlSelfRef.rf_mem_if__DOT__o_sram_raddr;
    vlSelfRef.o_sram_ren = vlSelfRef.rf_mem_if__DOT__o_sram_ren;
    vlSelfRef.o_sram_wen = vlSelfRef.rf_mem_if__DOT__o_sram_wen;
    vlSelfRef.servile__DOT__cpu__DOT__csr_in = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_rd;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt) 
                 >> 5U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_bool 
        = (((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op)) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
               ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1))) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op) 
               >> 1U) & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
                         & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__op_b_sx 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
           ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_sub));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_load 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__sh_done = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy_r))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy_r))));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_done;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_lt 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__rs1_sx) 
                 + ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__op_b_sx)) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_eq 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add)) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__cmp_r) 
              | (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cnt0)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mepc)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr));
    vlSelfRef.servile__DOT__cpu__DOT__o_wdata1 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_bufreg_en 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt_en) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_init) 
               | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap)) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_two_stage_op)))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
              & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__init_done) 
                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                    | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right)))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_cmp 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_eq)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_lt));
    vlSelfRef.servile__DOT__wdata1 = vlSelfRef.servile__DOT__cpu__DOT__o_wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_en = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_bufreg_en;
    vlSelfRef.servile__DOT__cpu__DOT__alu_cmp = vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_cmp;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wdata1 
        = vlSelfRef.servile__DOT__wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_en 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_en;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_cmp 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_cmp;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_q 
        = (vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__data 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_en));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__take_branch 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_cond_branch)) 
              | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_cmp) 
                 ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_q = vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ctrl_misalign) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__take_branch)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_en) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_mem_misalign)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_buf 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_buf 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ibus_ack) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right)
                ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                   & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
                      | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h2f4d1f67_0_2)))
                : (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_ack) 
              | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                  & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)) 
                     & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
                 | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en) 
                    & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_rd 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_buf) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add)) 
              | ((((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                   >> 1U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_slt)) 
                 | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                     >> 2U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_bool)))));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype)
            ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt12to31) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_imm))
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_buf));
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__alu_rd = vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))));
    vlSelfRef.servile__DOT__rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rreq 
        = vlSelfRef.servile__DOT__rf_rreq;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq 
        = vlSelfRef.servile__DOT__rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__new_pc 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_trap)
            ? ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1))) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc))
            : ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jump)
                ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_rd 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready 
        = ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq) 
           | (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rgnt));
    vlSelfRef.servile__DOT__cpu__DOT__bad_pc = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl_rd = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_rd;
    vlSelfRef.servile__DOT__rf_ready = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__bad_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl_rd;
    vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready = vlSelfRef.servile__DOT__rf_ready;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en)) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en)) 
              | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mem_rd) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en)) 
                 | (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd))));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rf_ready 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready;
    vlSelfRef.servile__DOT__cpu__DOT__o_wdata0 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0;
    vlSelfRef.servile__DOT__wdata0 = vlSelfRef.servile__DOT__cpu__DOT__o_wdata0;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wdata0 
        = vlSelfRef.servile__DOT__wdata0;
}

VL_ATTR_COLD void Vtop_subservient_core__M100___stl_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst__1(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___stl_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__core_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i_wb_rdt = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__wb_dat_r2c;
    vlSelfRef.i_wb_ack = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__wb_ack;
    vlSelfRef.i_sram_rdata = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_rdata;
    vlSelfRef.i_clk = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.i_rst = ((IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__boot_mode) 
                       | (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__rst));
    vlSelfRef.servile__DOT__i_wb_ext_rdt = vlSelfRef.i_wb_rdt;
    vlSelfRef.servile__DOT__i_wb_ext_ack = vlSelfRef.i_wb_ack;
    vlSelfRef.rf_mem_if__DOT__i_sram_rdata = vlSelfRef.i_sram_rdata;
    vlSelfRef.rf_mem_if__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.servile__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.rf_mem_if__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_rdt 
        = vlSelfRef.servile__DOT__i_wb_ext_rdt;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_ack 
        = vlSelfRef.servile__DOT__i_wb_ext_ack;
    vlSelfRef.rf_mem_if__DOT__o_wb_rdt = (((IData)(vlSelfRef.rf_mem_if__DOT__i_sram_rdata) 
                                           << 0x00000018U) 
                                          | vlSelfRef.rf_mem_if__DOT__wb_rdt);
    vlSelfRef.rf_mem_if__DOT__o_rdata = ((IData)(vlSelfRef.rf_mem_if__DOT__regzero)
                                          ? 0U : (IData)(vlSelfRef.rf_mem_if__DOT__i_sram_rdata));
    vlSelfRef.servile__DOT__mux__DOT__i_clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__cpu__DOT__clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__mux__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.wb_mem_rdt = vlSelfRef.rf_mem_if__DOT__o_wb_rdt;
    vlSelfRef.rf_rdata = vlSelfRef.rf_mem_if__DOT__o_rdata;
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
    vlSelfRef.servile__DOT__i_wb_mem_rdt = vlSelfRef.wb_mem_rdt;
    vlSelfRef.servile__DOT__i_rf_rdata = vlSelfRef.rf_rdata;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rst)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__ibus_cyc));
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt 
        = vlSelfRef.servile__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rdata 
        = vlSelfRef.servile__DOT__i_rf_rdata;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_cyc = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata1 
        = (1U & ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rtrig1)
                  ? (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rdata)
                  : (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rdata1)));
    vlSelfRef.servile__DOT__cpu__DOT__o_ibus_cyc = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_cyc;
    vlSelfRef.servile__DOT__wb_ibus_rdt = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt;
    vlSelfRef.servile__DOT__wb_dmem_rdt = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt;
    vlSelfRef.servile__DOT__rdata1 = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata1;
    vlSelfRef.servile__DOT__wb_ibus_stb = vlSelfRef.servile__DOT__cpu__DOT__o_ibus_cyc;
    vlSelfRef.servile__DOT__cpu__DOT__i_ibus_rdt = vlSelfRef.servile__DOT__wb_ibus_rdt;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_rdt 
        = vlSelfRef.servile__DOT__wb_dmem_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__i_rdata1 = vlSelfRef.servile__DOT__rdata1;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb 
        = vlSelfRef.servile__DOT__wb_ibus_stb;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_rdt = vlSelfRef.servile__DOT__cpu__DOT__i_ibus_rdt;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__ext)
            ? vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_rdt
            : vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_rdt);
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rdata1;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack 
        = ((~ (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_adr 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)
            ? vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_adr
            : vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_adr);
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_we 
        = ((~ (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_we));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_stb 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_stb) 
           | (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb));
    vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_rdt;
    vlSelfRef.servile__DOT__wb_dbus_rdt = vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs2 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.servile__DOT__wb_ibus_ack = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack;
    vlSelfRef.servile__DOT__wb_dmem_ack = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack;
    vlSelfRef.servile__DOT__o_wb_mem_adr = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_adr;
    vlSelfRef.servile__DOT__o_wb_mem_we = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_we;
    vlSelfRef.servile__DOT__o_wb_mem_stb = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
        = (vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt 
           >> 2U);
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_wb_rdt 
        = (vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt 
           >> 7U);
    vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt = vlSelfRef.servile__DOT__wb_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__csr_pc = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_csr_out = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr;
    vlSelfRef.servile__DOT__cpu__DOT__rs2 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs2;
    vlSelfRef.servile__DOT__cpu__DOT__i_ibus_ack = vlSelfRef.servile__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_ack 
        = vlSelfRef.servile__DOT__wb_dmem_ack;
    vlSelfRef.wb_mem_adr = vlSelfRef.servile__DOT__o_wb_mem_adr;
    vlSelfRef.wb_mem_we = vlSelfRef.servile__DOT__o_wb_mem_we;
    vlSelfRef.wb_mem_stb = vlSelfRef.servile__DOT__o_wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_pc;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_csr_out;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2 
        = vlSelfRef.servile__DOT__cpu__DOT__rs2;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack = vlSelfRef.servile__DOT__cpu__DOT__i_ibus_ack;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_ack 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_ack) 
           | ((IData)(vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_ack) 
              | (IData)(vlSelfRef.servile__DOT__mux__DOT__sim_ack)));
    vlSelfRef.rf_mem_if__DOT__i_wb_adr = (0x0000003fU 
                                          & (vlSelfRef.wb_mem_adr 
                                             >> 2U));
    vlSelfRef.rf_mem_if__DOT__i_wb_we = vlSelfRef.wb_mem_we;
    vlSelfRef.rf_mem_if__DOT__i_wb_stb = vlSelfRef.wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_dat 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out) 
              | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en) 
                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
                    & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause)))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_imm));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_en 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_wb_en 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trig_irq 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ibus_ack 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__wb_dbus_ack = vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_ack;
    vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0 
        = (((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_adr) 
            << 2U) | (IData)(vlSelfRef.rf_mem_if__DOT__bsel));
    vlSelfRef.rf_mem_if__DOT__wb_we = ((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_we) 
                                       & ((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_sel) 
                                          >> (IData)(vlSelfRef.rf_mem_if__DOT__bsel)));
    vlSelfRef.rf_mem_if__DOT__wb_en = ((~ ((IData)(vlSelfRef.rf_mem_if__DOT__i_wen) 
                                           | (IData)(vlSelfRef.rf_mem_if__DOT__o_wb_ack))) 
                                       & (IData)(vlSelfRef.rf_mem_if__DOT__i_wb_stb));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in 
        = ((1U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)
            : ((2U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d))
                : ((3U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                    ? ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out))
                    : ((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source)) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out)))));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q 
        = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
            << 7U) | ((0x00000040U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                      >> 1U)) | (0x0000003fU 
                                                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                                    - (IData)(1U)))));
    vlSelfRef.servile__DOT__cpu__DOT__op_b = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b;
    vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack = vlSelfRef.servile__DOT__wb_dbus_ack;
    if (vlSelfRef.rf_mem_if__DOT__wb_en) {
        vlSelfRef.rf_mem_if__DOT__o_sram_wdata = (0x000000ffU 
                                                  & (vlSelfRef.rf_mem_if__DOT__i_wb_dat 
                                                     >> 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.rf_mem_if__DOT__bsel), 3U))));
        vlSelfRef.rf_mem_if__DOT__o_sram_waddr = vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0;
        vlSelfRef.rf_mem_if__DOT__o_sram_raddr = vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0;
        vlSelfRef.rf_mem_if__DOT__o_sram_ren = (1U 
                                                & (~ (IData)(vlSelfRef.rf_mem_if__DOT__i_wb_we)));
        vlSelfRef.rf_mem_if__DOT__o_sram_wen = vlSelfRef.rf_mem_if__DOT__wb_we;
    } else {
        vlSelfRef.rf_mem_if__DOT__o_sram_wdata = (0x000000ffU 
                                                  & (IData)(vlSelfRef.rf_mem_if__DOT__i_wdata));
        vlSelfRef.rf_mem_if__DOT__o_sram_waddr = vlSelfRef.rf_mem_if__DOT__rf_waddr;
        vlSelfRef.rf_mem_if__DOT__o_sram_raddr = vlSelfRef.rf_mem_if__DOT__rf_raddr;
        vlSelfRef.rf_mem_if__DOT__o_sram_ren = (1U 
                                                & (IData)(vlSelfRef.rf_mem_if__DOT__i_ren));
        vlSelfRef.rf_mem_if__DOT__o_sram_wen = vlSelfRef.rf_mem_if__DOT__i_wen;
    }
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in 
        = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__csr_rd = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next)
            : (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
                << 7U) | (0x0000007fU & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                         >> 1U))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b 
        = vlSelfRef.servile__DOT__cpu__DOT__op_b;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_ack = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_ack 
        = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.o_sram_wdata = vlSelfRef.rf_mem_if__DOT__o_sram_wdata;
    vlSelfRef.o_sram_waddr = vlSelfRef.rf_mem_if__DOT__o_sram_waddr;
    vlSelfRef.o_sram_raddr = vlSelfRef.rf_mem_if__DOT__o_sram_raddr;
    vlSelfRef.o_sram_ren = vlSelfRef.rf_mem_if__DOT__o_sram_ren;
    vlSelfRef.o_sram_wen = vlSelfRef.rf_mem_if__DOT__o_sram_wen;
    vlSelfRef.servile__DOT__cpu__DOT__csr_in = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_rd;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt) 
                 >> 5U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_bool 
        = (((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op)) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
               ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1))) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op) 
               >> 1U) & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
                         & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__op_b_sx 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
           ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_sub));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_load 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__sh_done = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy_r))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy_r))));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_done;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_lt 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__rs1_sx) 
                 + ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__op_b_sx)) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_eq 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add)) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__cmp_r) 
              | (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cnt0)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mepc)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr));
    vlSelfRef.servile__DOT__cpu__DOT__o_wdata1 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_bufreg_en 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt_en) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_init) 
               | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap)) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_two_stage_op)))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
              & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__init_done) 
                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                    | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right)))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_cmp 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_eq)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_lt));
    vlSelfRef.servile__DOT__wdata1 = vlSelfRef.servile__DOT__cpu__DOT__o_wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_en = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_bufreg_en;
    vlSelfRef.servile__DOT__cpu__DOT__alu_cmp = vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_cmp;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wdata1 
        = vlSelfRef.servile__DOT__wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_en 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_en;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_cmp 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_cmp;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_q 
        = (vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__data 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_en));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__take_branch 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_cond_branch)) 
              | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_cmp) 
                 ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_q = vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ctrl_misalign) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__take_branch)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_en) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_mem_misalign)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_buf 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_buf 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ibus_ack) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right)
                ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                   & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
                      | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h2f4d1f67_0_2)))
                : (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_ack) 
              | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                  & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)) 
                     & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
                 | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en) 
                    & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_rd 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_buf) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add)) 
              | ((((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                   >> 1U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_slt)) 
                 | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                     >> 2U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_bool)))));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype)
            ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt12to31) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_imm))
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_buf));
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__alu_rd = vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))));
    vlSelfRef.servile__DOT__rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rreq 
        = vlSelfRef.servile__DOT__rf_rreq;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq 
        = vlSelfRef.servile__DOT__rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__new_pc 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_trap)
            ? ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1))) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc))
            : ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jump)
                ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_rd 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready 
        = ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq) 
           | (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rgnt));
    vlSelfRef.servile__DOT__cpu__DOT__bad_pc = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl_rd = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_rd;
    vlSelfRef.servile__DOT__rf_ready = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__bad_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl_rd;
    vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready = vlSelfRef.servile__DOT__rf_ready;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en)) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en)) 
              | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mem_rd) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en)) 
                 | (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd))));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rf_ready 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready;
    vlSelfRef.servile__DOT__cpu__DOT__o_wdata0 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0;
    vlSelfRef.servile__DOT__wdata0 = vlSelfRef.servile__DOT__cpu__DOT__o_wdata0;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wdata0 
        = vlSelfRef.servile__DOT__wdata0;
}

VL_ATTR_COLD void Vtop_subservient_core__M100___stl_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst__1(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___stl_sequent__TOP__mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__core_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i_wb_rdt = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__wb_dat_r2c;
    vlSelfRef.i_wb_ack = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__wb_ack;
    vlSelfRef.i_sram_rdata = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__sram_rdata;
    vlSelfRef.i_clk = vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__clk;
    vlSelfRef.i_rst = ((IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__boot_mode) 
                       | (IData)(vlSymsp->TOP.mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__rst));
    vlSelfRef.servile__DOT__i_wb_ext_rdt = vlSelfRef.i_wb_rdt;
    vlSelfRef.servile__DOT__i_wb_ext_ack = vlSelfRef.i_wb_ack;
    vlSelfRef.rf_mem_if__DOT__i_sram_rdata = vlSelfRef.i_sram_rdata;
    vlSelfRef.rf_mem_if__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.servile__DOT__i_clk = vlSelfRef.i_clk;
    vlSelfRef.rf_mem_if__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__i_rst = vlSelfRef.i_rst;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_rdt 
        = vlSelfRef.servile__DOT__i_wb_ext_rdt;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_ack 
        = vlSelfRef.servile__DOT__i_wb_ext_ack;
    vlSelfRef.rf_mem_if__DOT__o_wb_rdt = (((IData)(vlSelfRef.rf_mem_if__DOT__i_sram_rdata) 
                                           << 0x00000018U) 
                                          | vlSelfRef.rf_mem_if__DOT__wb_rdt);
    vlSelfRef.rf_mem_if__DOT__o_rdata = ((IData)(vlSelfRef.rf_mem_if__DOT__regzero)
                                          ? 0U : (IData)(vlSelfRef.rf_mem_if__DOT__i_sram_rdata));
    vlSelfRef.servile__DOT__mux__DOT__i_clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__cpu__DOT__clk = vlSelfRef.servile__DOT__i_clk;
    vlSelfRef.servile__DOT__mux__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.servile__DOT__cpu__DOT__i_rst = vlSelfRef.servile__DOT__i_rst;
    vlSelfRef.wb_mem_rdt = vlSelfRef.rf_mem_if__DOT__o_wb_rdt;
    vlSelfRef.rf_rdata = vlSelfRef.rf_mem_if__DOT__o_rdata;
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
    vlSelfRef.servile__DOT__i_wb_mem_rdt = vlSelfRef.wb_mem_rdt;
    vlSelfRef.servile__DOT__i_rf_rdata = vlSelfRef.rf_rdata;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rst)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__ibus_cyc));
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt 
        = vlSelfRef.servile__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rdata 
        = vlSelfRef.servile__DOT__i_rf_rdata;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_cyc = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt 
        = vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_rdt;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata1 
        = (1U & ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rtrig1)
                  ? (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rdata)
                  : (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rdata1)));
    vlSelfRef.servile__DOT__cpu__DOT__o_ibus_cyc = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_cyc;
    vlSelfRef.servile__DOT__wb_ibus_rdt = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt;
    vlSelfRef.servile__DOT__wb_dmem_rdt = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt;
    vlSelfRef.servile__DOT__rdata1 = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_rdata1;
    vlSelfRef.servile__DOT__wb_ibus_stb = vlSelfRef.servile__DOT__cpu__DOT__o_ibus_cyc;
    vlSelfRef.servile__DOT__cpu__DOT__i_ibus_rdt = vlSelfRef.servile__DOT__wb_ibus_rdt;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_rdt 
        = vlSelfRef.servile__DOT__wb_dmem_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__i_rdata1 = vlSelfRef.servile__DOT__rdata1;
    vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb 
        = vlSelfRef.servile__DOT__wb_ibus_stb;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_rdt = vlSelfRef.servile__DOT__cpu__DOT__i_ibus_rdt;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__ext)
            ? vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_rdt
            : vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_rdt);
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rdata1;
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack 
        = ((~ (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_mem_ack));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_adr 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)
            ? vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_adr
            : vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_adr);
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_we 
        = ((~ (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb)) 
           & (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_we));
    vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_stb 
        = ((IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_dbus_stb) 
           | (IData)(vlSelfRef.servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb));
    vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_rdt;
    vlSelfRef.servile__DOT__wb_dbus_rdt = vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs2 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1;
    vlSelfRef.servile__DOT__wb_ibus_ack = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack;
    vlSelfRef.servile__DOT__wb_dmem_ack = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack;
    vlSelfRef.servile__DOT__o_wb_mem_adr = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_adr;
    vlSelfRef.servile__DOT__o_wb_mem_we = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_we;
    vlSelfRef.servile__DOT__o_wb_mem_stb = vlSelfRef.servile__DOT__arbiter__DOT__o_wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt 
        = (vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt 
           >> 2U);
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_wb_rdt 
        = (vlSelfRef.servile__DOT__cpu__DOT__i_wb_rdt 
           >> 7U);
    vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt = vlSelfRef.servile__DOT__wb_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__csr_pc = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_csr_out = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_csr;
    vlSelfRef.servile__DOT__cpu__DOT__rs2 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_rs2;
    vlSelfRef.servile__DOT__cpu__DOT__i_ibus_ack = vlSelfRef.servile__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_ack 
        = vlSelfRef.servile__DOT__wb_dmem_ack;
    vlSelfRef.wb_mem_adr = vlSelfRef.servile__DOT__o_wb_mem_adr;
    vlSelfRef.wb_mem_we = vlSelfRef.servile__DOT__o_wb_mem_we;
    vlSelfRef.wb_mem_stb = vlSelfRef.servile__DOT__o_wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_pc;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out 
        = vlSelfRef.servile__DOT__cpu__DOT__rf_csr_out;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2 
        = vlSelfRef.servile__DOT__cpu__DOT__rs2;
    vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack = vlSelfRef.servile__DOT__cpu__DOT__i_ibus_ack;
    vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_ack 
        = ((IData)(vlSelfRef.servile__DOT__mux__DOT__i_wb_ext_ack) 
           | ((IData)(vlSelfRef.servile__DOT__mux__DOT__i_wb_mem_ack) 
              | (IData)(vlSelfRef.servile__DOT__mux__DOT__sim_ack)));
    vlSelfRef.rf_mem_if__DOT__i_wb_adr = (0x0000003fU 
                                          & (vlSelfRef.wb_mem_adr 
                                             >> 2U));
    vlSelfRef.rf_mem_if__DOT__i_wb_we = vlSelfRef.wb_mem_we;
    vlSelfRef.rf_mem_if__DOT__i_wb_stb = vlSelfRef.wb_mem_stb;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_dat 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_rdt;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out) 
              | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en) 
                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en) 
                    & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause)))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_imm));
    vlSelfRef.servile__DOT__cpu__DOT__decode__DOT__i_wb_en 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__immdec__DOT__i_wb_en 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trig_irq 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ibus_ack 
        = vlSelfRef.servile__DOT__cpu__DOT__wb_ibus_ack;
    vlSelfRef.servile__DOT__wb_dbus_ack = vlSelfRef.servile__DOT__mux__DOT__o_wb_cpu_ack;
    vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0 
        = (((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_adr) 
            << 2U) | (IData)(vlSelfRef.rf_mem_if__DOT__bsel));
    vlSelfRef.rf_mem_if__DOT__wb_we = ((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_we) 
                                       & ((IData)(vlSelfRef.rf_mem_if__DOT__i_wb_sel) 
                                          >> (IData)(vlSelfRef.rf_mem_if__DOT__bsel)));
    vlSelfRef.rf_mem_if__DOT__wb_en = ((~ ((IData)(vlSelfRef.rf_mem_if__DOT__i_wen) 
                                           | (IData)(vlSelfRef.rf_mem_if__DOT__o_wb_ack))) 
                                       & (IData)(vlSelfRef.rf_mem_if__DOT__i_wb_stb));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in 
        = ((1U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)
            : ((2U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d))
                : ((3U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source))
                    ? ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d)) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out))
                    : ((0U == (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source)) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out)))));
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q 
        = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
            << 7U) | ((0x00000040U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                      >> 1U)) | (0x0000003fU 
                                                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                                    - (IData)(1U)))));
    vlSelfRef.servile__DOT__cpu__DOT__op_b = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b;
    vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack = vlSelfRef.servile__DOT__wb_dbus_ack;
    if (vlSelfRef.rf_mem_if__DOT__wb_en) {
        vlSelfRef.rf_mem_if__DOT__o_sram_wdata = (0x000000ffU 
                                                  & (vlSelfRef.rf_mem_if__DOT__i_wb_dat 
                                                     >> 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.rf_mem_if__DOT__bsel), 3U))));
        vlSelfRef.rf_mem_if__DOT__o_sram_waddr = vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0;
        vlSelfRef.rf_mem_if__DOT__o_sram_raddr = vlSelfRef.rf_mem_if__DOT____VdfgRegularize_h18019837_0_0;
        vlSelfRef.rf_mem_if__DOT__o_sram_ren = (1U 
                                                & (~ (IData)(vlSelfRef.rf_mem_if__DOT__i_wb_we)));
        vlSelfRef.rf_mem_if__DOT__o_sram_wen = vlSelfRef.rf_mem_if__DOT__wb_we;
    } else {
        vlSelfRef.rf_mem_if__DOT__o_sram_wdata = (0x000000ffU 
                                                  & (IData)(vlSelfRef.rf_mem_if__DOT__i_wdata));
        vlSelfRef.rf_mem_if__DOT__o_sram_waddr = vlSelfRef.rf_mem_if__DOT__rf_waddr;
        vlSelfRef.rf_mem_if__DOT__o_sram_raddr = vlSelfRef.rf_mem_if__DOT__rf_raddr;
        vlSelfRef.rf_mem_if__DOT__o_sram_ren = (1U 
                                                & (IData)(vlSelfRef.rf_mem_if__DOT__i_ren));
        vlSelfRef.rf_mem_if__DOT__o_sram_wen = vlSelfRef.rf_mem_if__DOT__i_wen;
    }
    vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in 
        = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__csr_rd = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next)
            : (((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b) 
                << 7U) | (0x0000007fU & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dhi) 
                                         >> 1U))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b 
        = vlSelfRef.servile__DOT__cpu__DOT__op_b;
    vlSelfRef.servile__DOT__cpu__DOT__dbus_ack = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_ack 
        = vlSelfRef.servile__DOT__cpu__DOT__i_dbus_ack;
    vlSelfRef.o_sram_wdata = vlSelfRef.rf_mem_if__DOT__o_sram_wdata;
    vlSelfRef.o_sram_waddr = vlSelfRef.rf_mem_if__DOT__o_sram_waddr;
    vlSelfRef.o_sram_raddr = vlSelfRef.rf_mem_if__DOT__o_sram_raddr;
    vlSelfRef.o_sram_ren = vlSelfRef.rf_mem_if__DOT__o_sram_ren;
    vlSelfRef.o_sram_wen = vlSelfRef.rf_mem_if__DOT__o_sram_wen;
    vlSelfRef.servile__DOT__cpu__DOT__csr_in = vlSelfRef.servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_rd;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt) 
                 >> 5U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_bool 
        = (((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op)) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
               ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1))) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_bool_op) 
               >> 1U) & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
                         & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__op_b_sx 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_op_b) 
           ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_sub));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__i_load 
        = vlSelfRef.servile__DOT__cpu__DOT__dbus_ack;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr 
        = vlSelfRef.servile__DOT__cpu__DOT__csr_in;
    vlSelfRef.servile__DOT__cpu__DOT__sh_done = vlSelfRef.servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy_r))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rs1) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_b) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy_r))));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done 
        = vlSelfRef.servile__DOT__cpu__DOT__sh_done;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_lt 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__rs1_sx) 
                 + ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__op_b_sx)) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__add_cy))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_eq 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add)) 
           & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__cmp_r) 
              | (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cnt0)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mepc)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr));
    vlSelfRef.servile__DOT__cpu__DOT__o_wdata1 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_bufreg_en 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_cnt_en) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_init) 
               | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap)) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_two_stage_op)))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
              & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__init_done) 
                 & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                    | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right)))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_cmp 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_eq)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_lt));
    vlSelfRef.servile__DOT__wdata1 = vlSelfRef.servile__DOT__cpu__DOT__o_wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_en = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_bufreg_en;
    vlSelfRef.servile__DOT__cpu__DOT__alu_cmp = vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_cmp;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wdata1 
        = vlSelfRef.servile__DOT__wdata1;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_en 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_en;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_cmp 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_cmp;
    vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_q 
        = (vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__data 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__i_en));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__take_branch 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
           & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_cond_branch)) 
              | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_cmp) 
                 ^ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge))));
    vlSelfRef.servile__DOT__cpu__DOT__bufreg_q = vlSelfRef.servile__DOT__cpu__DOT__bufreg__DOT__o_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ctrl_misalign) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__take_branch)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_en) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_mem_misalign)));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_buf 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_buf 
        = vlSelfRef.servile__DOT__cpu__DOT__bufreg_q;
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_ibus_ack) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_shift_op) 
            & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_right)
                ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_sh_done) 
                   & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init) 
                      | (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h2f4d1f67_0_2)))
                : (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_dbus_ack) 
              | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_branch_op) 
                  & ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__trap_pending)) 
                     & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))) 
                 | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en) 
                    & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1) 
                       & (IData)(vlSelfRef.servile__DOT__cpu__DOT__state__DOT__last_init))))));
    vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_rd 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_buf) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_add)) 
              | ((((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                   >> 1U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_slt)) 
                 | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__i_rd_sel) 
                     >> 2U) & (IData)(vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__result_bool)))));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype)
            ? ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt12to31) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_imm))
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_buf));
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__state__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__alu_rd = vlSelfRef.servile__DOT__cpu__DOT__alu__DOT__o_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy 
        = (1U & (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                  + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                     + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))) 
                 >> 1U));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset 
        = (1U & ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                 + ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__offset_b) 
                    + (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w))));
    vlSelfRef.servile__DOT__rf_rreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_rreq;
    vlSelfRef.servile__DOT__rf_wreq = vlSelfRef.servile__DOT__cpu__DOT__o_rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__alu_rd;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned 
        = ((~ (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0)) 
           & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_rreq 
        = vlSelfRef.servile__DOT__rf_rreq;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq 
        = vlSelfRef.servile__DOT__rf_wreq;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__new_pc 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_trap)
            ? ((~ ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0) 
                   | (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1))) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc))
            : ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jump)
                ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                : (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_rd 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_utype) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)) 
           | ((IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr) 
              & (IData)(vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)));
    vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready 
        = ((IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wreq) 
           | (IData)(vlSelfRef.servile__DOT__rf_ram_if__DOT__rgnt));
    vlSelfRef.servile__DOT__cpu__DOT__bad_pc = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc;
    vlSelfRef.servile__DOT__cpu__DOT__ctrl_rd = vlSelfRef.servile__DOT__cpu__DOT__ctrl__DOT__o_rd;
    vlSelfRef.servile__DOT__rf_ready = vlSelfRef.servile__DOT__rf_ram_if__DOT__o_ready;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc 
        = vlSelfRef.servile__DOT__cpu__DOT__bad_pc;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd 
        = vlSelfRef.servile__DOT__cpu__DOT__ctrl_rd;
    vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready = vlSelfRef.servile__DOT__rf_ready;
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd 
        = (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd) 
            & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en)) 
           | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd) 
               & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en)) 
              | (((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_mem_rd) 
                  & (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en)) 
                 | (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd))));
    vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0 
        = ((IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__i_trap)
            ? (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval)
            : (IData)(vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd));
    vlSelfRef.servile__DOT__cpu__DOT__state__DOT__i_rf_ready 
        = vlSelfRef.servile__DOT__cpu__DOT__i_rf_ready;
    vlSelfRef.servile__DOT__cpu__DOT__o_wdata0 = vlSelfRef.servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0;
    vlSelfRef.servile__DOT__wdata0 = vlSelfRef.servile__DOT__cpu__DOT__o_wdata0;
    vlSelfRef.servile__DOT__rf_ram_if__DOT__i_wdata0 
        = vlSelfRef.servile__DOT__wdata0;
}

VL_ATTR_COLD void Vtop_subservient_core__M100___ctor_var_reset(Vtop_subservient_core__M100* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_subservient_core__M100___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->i_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15925868812496733354ull);
    vlSelf->i_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9693334148897220726ull);
    vlSelf->i_timer_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 957312006995112542ull);
    vlSelf->o_sram_waddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16092764788527308670ull);
    vlSelf->o_sram_wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12903178159036850611ull);
    vlSelf->o_sram_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16781781535881638952ull);
    vlSelf->o_sram_raddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2227053395370760471ull);
    vlSelf->i_sram_rdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7082147774490086927ull);
    vlSelf->o_sram_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1040945493188017601ull);
    vlSelf->o_wb_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9550757077294722118ull);
    vlSelf->o_wb_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16040732656928111873ull);
    vlSelf->o_wb_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17661454285373734595ull);
    vlSelf->o_wb_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12602236866684565393ull);
    vlSelf->o_wb_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3212184762813301731ull);
    vlSelf->i_wb_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 969702684492357082ull);
    vlSelf->i_wb_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 886313609955167879ull);
    vlSelf->wb_mem_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5981833078078765535ull);
    vlSelf->wb_mem_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1212320967882933532ull);
    vlSelf->wb_mem_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18375930020021121074ull);
    vlSelf->wb_mem_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10670744345801314906ull);
    vlSelf->wb_mem_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4271422125039695783ull);
    vlSelf->wb_mem_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17741263656292726803ull);
    vlSelf->wb_mem_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8505693626365983415ull);
    vlSelf->rf_waddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12713048650760543444ull);
    vlSelf->rf_wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12502994072091849792ull);
    vlSelf->rf_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5575201621105883436ull);
    vlSelf->rf_raddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7210602004194679788ull);
    vlSelf->rf_rdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14848828700202189916ull);
    vlSelf->rf_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2375472887485658971ull);
    vlSelf->rf_mem_if__DOT__i_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8846421127238727406ull);
    vlSelf->rf_mem_if__DOT__i_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17493533264171914652ull);
    vlSelf->rf_mem_if__DOT__i_waddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7501533515101430153ull);
    vlSelf->rf_mem_if__DOT__i_wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7675057557234733541ull);
    vlSelf->rf_mem_if__DOT__i_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1300820544365827287ull);
    vlSelf->rf_mem_if__DOT__i_raddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4059370207655682145ull);
    vlSelf->rf_mem_if__DOT__o_rdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18035844838560320897ull);
    vlSelf->rf_mem_if__DOT__i_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 348294972282908792ull);
    vlSelf->rf_mem_if__DOT__o_sram_waddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13595516172139932807ull);
    vlSelf->rf_mem_if__DOT__o_sram_wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11365746014466086815ull);
    vlSelf->rf_mem_if__DOT__o_sram_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13910729164920933805ull);
    vlSelf->rf_mem_if__DOT__o_sram_raddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11060537054903053042ull);
    vlSelf->rf_mem_if__DOT__i_sram_rdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4056201277528656861ull);
    vlSelf->rf_mem_if__DOT__o_sram_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6387468494219088519ull);
    vlSelf->rf_mem_if__DOT__i_wb_adr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1667952493454728824ull);
    vlSelf->rf_mem_if__DOT__i_wb_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15249707844394493410ull);
    vlSelf->rf_mem_if__DOT__i_wb_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10054870430592425165ull);
    vlSelf->rf_mem_if__DOT__i_wb_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13031534466096540111ull);
    vlSelf->rf_mem_if__DOT__i_wb_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5758000046183687274ull);
    vlSelf->rf_mem_if__DOT__o_wb_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6153271666284282921ull);
    vlSelf->rf_mem_if__DOT__o_wb_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10171222332954404617ull);
    vlSelf->rf_mem_if__DOT__bsel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4988934260215650601ull);
    vlSelf->rf_mem_if__DOT__wb_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1493882601062300773ull);
    vlSelf->rf_mem_if__DOT__wb_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14278027365428080081ull);
    vlSelf->rf_mem_if__DOT__rf_waddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4054225803365403126ull);
    vlSelf->rf_mem_if__DOT__rf_raddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16420943872970088220ull);
    vlSelf->rf_mem_if__DOT__wb_rdt = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16466299837583237226ull);
    vlSelf->rf_mem_if__DOT__regzero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17577610863135476456ull);
    vlSelf->rf_mem_if__DOT____VdfgRegularize_h18019837_0_0 = 0;
    vlSelf->servile__DOT__i_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11114464692523880662ull);
    vlSelf->servile__DOT__i_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4752336317665255478ull);
    vlSelf->servile__DOT__i_timer_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9919900726807827889ull);
    vlSelf->servile__DOT__o_wb_mem_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9533909723501325314ull);
    vlSelf->servile__DOT__o_wb_mem_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16525095498534352188ull);
    vlSelf->servile__DOT__o_wb_mem_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5113430495416726125ull);
    vlSelf->servile__DOT__o_wb_mem_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 691276133391311891ull);
    vlSelf->servile__DOT__o_wb_mem_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10485343592088185107ull);
    vlSelf->servile__DOT__i_wb_mem_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9538455397594579852ull);
    vlSelf->servile__DOT__i_wb_mem_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12282095653750882445ull);
    vlSelf->servile__DOT__o_wb_ext_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14255218820790840175ull);
    vlSelf->servile__DOT__o_wb_ext_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17707035451343842339ull);
    vlSelf->servile__DOT__o_wb_ext_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6815126675759249395ull);
    vlSelf->servile__DOT__o_wb_ext_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1083846566241390808ull);
    vlSelf->servile__DOT__o_wb_ext_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4484928973797750119ull);
    vlSelf->servile__DOT__i_wb_ext_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1267712842850556272ull);
    vlSelf->servile__DOT__i_wb_ext_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16246482749248775920ull);
    vlSelf->servile__DOT__o_rf_waddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9995990157338816696ull);
    vlSelf->servile__DOT__o_rf_wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4025630647704838072ull);
    vlSelf->servile__DOT__o_rf_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 377705905225612503ull);
    vlSelf->servile__DOT__o_rf_raddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14062758503589997108ull);
    vlSelf->servile__DOT__i_rf_rdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4609318523061519630ull);
    vlSelf->servile__DOT__o_rf_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11823739010054576130ull);
    vlSelf->servile__DOT__wb_ibus_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12105472626348878462ull);
    vlSelf->servile__DOT__wb_ibus_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6341645033962996869ull);
    vlSelf->servile__DOT__wb_ibus_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15828698366192063013ull);
    vlSelf->servile__DOT__wb_ibus_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13189450768831151440ull);
    vlSelf->servile__DOT__wb_dbus_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5761962129380621120ull);
    vlSelf->servile__DOT__wb_dbus_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18174950215228386466ull);
    vlSelf->servile__DOT__wb_dbus_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15432055261310790081ull);
    vlSelf->servile__DOT__wb_dbus_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3150830122025116364ull);
    vlSelf->servile__DOT__wb_dbus_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11196041463756454924ull);
    vlSelf->servile__DOT__wb_dbus_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8412395718761919093ull);
    vlSelf->servile__DOT__wb_dbus_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18067414895435958479ull);
    vlSelf->servile__DOT__wb_dmem_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13803357396450853382ull);
    vlSelf->servile__DOT__wb_dmem_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15384665702911121793ull);
    vlSelf->servile__DOT__wb_dmem_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10342305625946308420ull);
    vlSelf->servile__DOT__wb_dmem_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11073602053316661852ull);
    vlSelf->servile__DOT__wb_dmem_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11066653004139126054ull);
    vlSelf->servile__DOT__wb_dmem_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15943097976478480260ull);
    vlSelf->servile__DOT__wb_dmem_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2764227001905712735ull);
    vlSelf->servile__DOT__rf_wreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7069715057995688051ull);
    vlSelf->servile__DOT__rf_rreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1394200775267104810ull);
    vlSelf->servile__DOT__wreg0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8802634988284981299ull);
    vlSelf->servile__DOT__wreg1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5688617722758312137ull);
    vlSelf->servile__DOT__wen0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10111672064807565751ull);
    vlSelf->servile__DOT__wen1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10929765153294456180ull);
    vlSelf->servile__DOT__wdata0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13028377566101199275ull);
    vlSelf->servile__DOT__wdata1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10411220710251919408ull);
    vlSelf->servile__DOT__rreg0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2976123526651391616ull);
    vlSelf->servile__DOT__rreg1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11245713496144775748ull);
    vlSelf->servile__DOT__rf_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17424819285371600072ull);
    vlSelf->servile__DOT__rdata0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10097627686674347446ull);
    vlSelf->servile__DOT__rdata1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16976734599423437347ull);
    vlSelf->servile__DOT__mdu_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9796475496614751025ull);
    vlSelf->servile__DOT__mdu_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2924211919401518506ull);
    vlSelf->servile__DOT__mdu_op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13350331778804561743ull);
    vlSelf->servile__DOT__mdu_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 206844448886574714ull);
    vlSelf->servile__DOT__mdu_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12903864661134679004ull);
    vlSelf->servile__DOT__mdu_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9857240955572653090ull);
    vlSelf->servile__DOT__mux__DOT__i_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18145237228598882120ull);
    vlSelf->servile__DOT__mux__DOT__i_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14066709856416371599ull);
    vlSelf->servile__DOT__mux__DOT__i_wb_cpu_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3656843016771079426ull);
    vlSelf->servile__DOT__mux__DOT__i_wb_cpu_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17586998076495401318ull);
    vlSelf->servile__DOT__mux__DOT__i_wb_cpu_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12054632415602300137ull);
    vlSelf->servile__DOT__mux__DOT__i_wb_cpu_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12212160626595043485ull);
    vlSelf->servile__DOT__mux__DOT__i_wb_cpu_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9643401808204647184ull);
    vlSelf->servile__DOT__mux__DOT__o_wb_cpu_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6760148449289504548ull);
    vlSelf->servile__DOT__mux__DOT__o_wb_cpu_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2755229655666224574ull);
    vlSelf->servile__DOT__mux__DOT__o_wb_mem_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11998338649769438792ull);
    vlSelf->servile__DOT__mux__DOT__o_wb_mem_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11504940796198163729ull);
    vlSelf->servile__DOT__mux__DOT__o_wb_mem_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12006827682014231361ull);
    vlSelf->servile__DOT__mux__DOT__o_wb_mem_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14716657312223332449ull);
    vlSelf->servile__DOT__mux__DOT__o_wb_mem_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10338490047990761164ull);
    vlSelf->servile__DOT__mux__DOT__i_wb_mem_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13573452404555769341ull);
    vlSelf->servile__DOT__mux__DOT__i_wb_mem_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10730794455181531317ull);
    vlSelf->servile__DOT__mux__DOT__o_wb_ext_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8010242084135772730ull);
    vlSelf->servile__DOT__mux__DOT__o_wb_ext_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6307315094374525463ull);
    vlSelf->servile__DOT__mux__DOT__o_wb_ext_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6421446387796299203ull);
    vlSelf->servile__DOT__mux__DOT__o_wb_ext_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12316104503739009013ull);
    vlSelf->servile__DOT__mux__DOT__o_wb_ext_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3093084703729292822ull);
    vlSelf->servile__DOT__mux__DOT__i_wb_ext_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11440630112279038810ull);
    vlSelf->servile__DOT__mux__DOT__i_wb_ext_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17481104484840836763ull);
    vlSelf->servile__DOT__mux__DOT__sig_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8208817392846694560ull);
    vlSelf->servile__DOT__mux__DOT__halt_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15527449629845838534ull);
    vlSelf->servile__DOT__mux__DOT__sim_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8809225646882430929ull);
    vlSelf->servile__DOT__mux__DOT__ext = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9267522985097122428ull);
    vlSelf->servile__DOT__mux__DOT____VdfgRegularize_h6c257bca_0_0 = 0;
    vlSelf->servile__DOT__arbiter__DOT__i_wb_cpu_dbus_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 374963384070311850ull);
    vlSelf->servile__DOT__arbiter__DOT__i_wb_cpu_dbus_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11465088731339359583ull);
    vlSelf->servile__DOT__arbiter__DOT__i_wb_cpu_dbus_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13052799775655222085ull);
    vlSelf->servile__DOT__arbiter__DOT__i_wb_cpu_dbus_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3188558244200435759ull);
    vlSelf->servile__DOT__arbiter__DOT__i_wb_cpu_dbus_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11111585335309098637ull);
    vlSelf->servile__DOT__arbiter__DOT__o_wb_cpu_dbus_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7458678298737259437ull);
    vlSelf->servile__DOT__arbiter__DOT__o_wb_cpu_dbus_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6112326930546536547ull);
    vlSelf->servile__DOT__arbiter__DOT__i_wb_cpu_ibus_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11454660992944878222ull);
    vlSelf->servile__DOT__arbiter__DOT__i_wb_cpu_ibus_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 464906572901755716ull);
    vlSelf->servile__DOT__arbiter__DOT__o_wb_cpu_ibus_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11205365118099223815ull);
    vlSelf->servile__DOT__arbiter__DOT__o_wb_cpu_ibus_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9048694622389641571ull);
    vlSelf->servile__DOT__arbiter__DOT__o_wb_mem_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5087679470028069145ull);
    vlSelf->servile__DOT__arbiter__DOT__o_wb_mem_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8155947449171370527ull);
    vlSelf->servile__DOT__arbiter__DOT__o_wb_mem_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14136710242196742005ull);
    vlSelf->servile__DOT__arbiter__DOT__o_wb_mem_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12885051377051541566ull);
    vlSelf->servile__DOT__arbiter__DOT__o_wb_mem_stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 179784664387418812ull);
    vlSelf->servile__DOT__arbiter__DOT__i_wb_mem_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17714080594870954527ull);
    vlSelf->servile__DOT__arbiter__DOT__i_wb_mem_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12141075520399851654ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__i_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1999009875987959910ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__i_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14464790917284147057ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__i_wreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11217302318762050946ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__i_rreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4697562607907834352ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__o_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7893770281394242645ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__i_wreg0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12478304438229310686ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__i_wreg1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7546709543310518597ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__i_wen0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6568347621371570582ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__i_wen1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4158574183092362115ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__i_wdata0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13630275705682044613ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__i_wdata1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15857822228457736958ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__i_rreg0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8893690529484141688ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__i_rreg1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14393121129739513878ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__o_rdata0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14841105504851564683ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__o_rdata1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15364508608868953617ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__o_waddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2012338536452812610ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__o_wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9505166238510020215ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__o_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6400792780814449256ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__o_raddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8558359142966572660ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__o_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1888296929461362862ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__i_rdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8640639992022597709ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__rgnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13666398074791665922ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__rcnt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6549190148171951960ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__rtrig1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5304782674858225288ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__wcnt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3711743666753807668ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__wdata0_r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7239888503798466180ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__wdata1_r = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10326050665306738246ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__wen0_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2646391146805504469ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__wen1_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15309366259465954720ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__wtrig0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9563364495957693820ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__wtrig1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8932052186319021724ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__wreg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16382694392986342361ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__rtrig0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14980520507902620635ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__rreg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1454778437007176443ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__rdata0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10341639501101177442ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__rdata1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7720941994882911695ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__rgate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3554543180673634277ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__rreq_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 910887990217359222ull);
    vlSelf->servile__DOT__rf_ram_if__DOT__gen_wtrig_ratio_neq_2__DOT__wtrig0_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12471146463815788985ull);
    vlSelf->servile__DOT__cpu__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6584878495633310339ull);
    vlSelf->servile__DOT__cpu__DOT__i_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7668983991469821623ull);
    vlSelf->servile__DOT__cpu__DOT__i_timer_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11898159118591537181ull);
    vlSelf->servile__DOT__cpu__DOT__o_rf_rreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1857702829583464081ull);
    vlSelf->servile__DOT__cpu__DOT__o_rf_wreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18395019590800413544ull);
    vlSelf->servile__DOT__cpu__DOT__i_rf_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 957356818884515164ull);
    vlSelf->servile__DOT__cpu__DOT__o_wreg0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7231726657362690550ull);
    vlSelf->servile__DOT__cpu__DOT__o_wreg1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11793860704058092147ull);
    vlSelf->servile__DOT__cpu__DOT__o_wen0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2088940879246742715ull);
    vlSelf->servile__DOT__cpu__DOT__o_wen1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4861670291910007137ull);
    vlSelf->servile__DOT__cpu__DOT__o_wdata0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17955088266697787590ull);
    vlSelf->servile__DOT__cpu__DOT__o_wdata1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13587350556454686507ull);
    vlSelf->servile__DOT__cpu__DOT__o_rreg0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9647094159672738861ull);
    vlSelf->servile__DOT__cpu__DOT__o_rreg1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17981028956420490859ull);
    vlSelf->servile__DOT__cpu__DOT__i_rdata0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13907358539513563616ull);
    vlSelf->servile__DOT__cpu__DOT__i_rdata1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5765782300091978097ull);
    vlSelf->servile__DOT__cpu__DOT__o_ibus_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12107837248034160578ull);
    vlSelf->servile__DOT__cpu__DOT__o_ibus_cyc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14471748179503204400ull);
    vlSelf->servile__DOT__cpu__DOT__i_ibus_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15015806099067657900ull);
    vlSelf->servile__DOT__cpu__DOT__i_ibus_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 886222523394514961ull);
    vlSelf->servile__DOT__cpu__DOT__o_dbus_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8038457246727770117ull);
    vlSelf->servile__DOT__cpu__DOT__o_dbus_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 490412054642585899ull);
    vlSelf->servile__DOT__cpu__DOT__o_dbus_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2358142182547903869ull);
    vlSelf->servile__DOT__cpu__DOT__o_dbus_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5526871211331838166ull);
    vlSelf->servile__DOT__cpu__DOT__o_dbus_cyc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15573710931868229860ull);
    vlSelf->servile__DOT__cpu__DOT__i_dbus_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18431395899427278673ull);
    vlSelf->servile__DOT__cpu__DOT__i_dbus_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 958702107853897517ull);
    vlSelf->servile__DOT__cpu__DOT__o_ext_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16855450114828085356ull);
    vlSelf->servile__DOT__cpu__DOT__i_ext_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11712163893741669798ull);
    vlSelf->servile__DOT__cpu__DOT__i_ext_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10909604469346487214ull);
    vlSelf->servile__DOT__cpu__DOT__o_ext_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17673902686085957460ull);
    vlSelf->servile__DOT__cpu__DOT__o_ext_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2912474950713825202ull);
    vlSelf->servile__DOT__cpu__DOT__o_mdu_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5490088481084018614ull);
    vlSelf->servile__DOT__cpu__DOT__rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4366509041091860870ull);
    vlSelf->servile__DOT__cpu__DOT__rs1_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18276414768806366218ull);
    vlSelf->servile__DOT__cpu__DOT__rs2_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16070213025313849886ull);
    vlSelf->servile__DOT__cpu__DOT__immdec_ctrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8929831942382612458ull);
    vlSelf->servile__DOT__cpu__DOT__immdec_en = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16484450450485869614ull);
    vlSelf->servile__DOT__cpu__DOT__sh_right = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3137065059354235776ull);
    vlSelf->servile__DOT__cpu__DOT__bne_or_bge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13006327595856661144ull);
    vlSelf->servile__DOT__cpu__DOT__cond_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7882436765839373255ull);
    vlSelf->servile__DOT__cpu__DOT__two_stage_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13874818288571151034ull);
    vlSelf->servile__DOT__cpu__DOT__e_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10157151852360297401ull);
    vlSelf->servile__DOT__cpu__DOT__ebreak = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11410400873964566113ull);
    vlSelf->servile__DOT__cpu__DOT__branch_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1378335342718434669ull);
    vlSelf->servile__DOT__cpu__DOT__shift_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3260635336574023209ull);
    vlSelf->servile__DOT__cpu__DOT__rd_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10197679610506305986ull);
    vlSelf->servile__DOT__cpu__DOT__mdu_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8289821452730930679ull);
    vlSelf->servile__DOT__cpu__DOT__rd_alu_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7045050135269499436ull);
    vlSelf->servile__DOT__cpu__DOT__rd_csr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16060099467067596962ull);
    vlSelf->servile__DOT__cpu__DOT__rd_mem_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 675875398229573141ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17857213650867080636ull);
    vlSelf->servile__DOT__cpu__DOT__alu_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12701411510842161139ull);
    vlSelf->servile__DOT__cpu__DOT__mem_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10425795708234796461ull);
    vlSelf->servile__DOT__cpu__DOT__csr_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2057323678362026853ull);
    vlSelf->servile__DOT__cpu__DOT__mtval_pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13267956119766906654ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl_pc_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7959343507711804921ull);
    vlSelf->servile__DOT__cpu__DOT__jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16845662066607639718ull);
    vlSelf->servile__DOT__cpu__DOT__jal_or_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2677548159174795445ull);
    vlSelf->servile__DOT__cpu__DOT__utype = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2761245194770122578ull);
    vlSelf->servile__DOT__cpu__DOT__mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16222891662007815172ull);
    vlSelf->servile__DOT__cpu__DOT__imm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3601437770319681823ull);
    vlSelf->servile__DOT__cpu__DOT__trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2826540141874833470ull);
    vlSelf->servile__DOT__cpu__DOT__pc_rel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9952027103203744361ull);
    vlSelf->servile__DOT__cpu__DOT__iscomp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16184036339685004299ull);
    vlSelf->servile__DOT__cpu__DOT__init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 247517371961258886ull);
    vlSelf->servile__DOT__cpu__DOT__cnt_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11608799635798929349ull);
    vlSelf->servile__DOT__cpu__DOT__cnt0to3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15507945482302864527ull);
    vlSelf->servile__DOT__cpu__DOT__cnt12to31 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8644416634651186799ull);
    vlSelf->servile__DOT__cpu__DOT__cnt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 614701264391563326ull);
    vlSelf->servile__DOT__cpu__DOT__cnt1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1242298658820442947ull);
    vlSelf->servile__DOT__cpu__DOT__cnt2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13765059764915149910ull);
    vlSelf->servile__DOT__cpu__DOT__cnt3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1685447616553876386ull);
    vlSelf->servile__DOT__cpu__DOT__cnt7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14142763296726338535ull);
    vlSelf->servile__DOT__cpu__DOT__cnt11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14558220855523947140ull);
    vlSelf->servile__DOT__cpu__DOT__cnt12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15776452172473751883ull);
    vlSelf->servile__DOT__cpu__DOT__cnt_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15753504158863142504ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9402053671010959071ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg_sh_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12580366628651102451ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg_rs1_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11314961433971780379ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg_imm_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11150965930599402902ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg_clr_lsb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12322571248487328392ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161890010332778245ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg2_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15831421569611941659ull);
    vlSelf->servile__DOT__cpu__DOT__dbus_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9505381474505056845ull);
    vlSelf->servile__DOT__cpu__DOT__dbus_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3945837355030276457ull);
    vlSelf->servile__DOT__cpu__DOT__alu_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4052638875892318393ull);
    vlSelf->servile__DOT__cpu__DOT__alu_bool_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3593870408989494967ull);
    vlSelf->servile__DOT__cpu__DOT__alu_cmp_eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6792225564884974341ull);
    vlSelf->servile__DOT__cpu__DOT__alu_cmp_sig = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18002439068377394840ull);
    vlSelf->servile__DOT__cpu__DOT__alu_cmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9675524633933935767ull);
    vlSelf->servile__DOT__cpu__DOT__alu_rd_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11848242744255524045ull);
    vlSelf->servile__DOT__cpu__DOT__rs1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16739065865639665690ull);
    vlSelf->servile__DOT__cpu__DOT__rs2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17037335837004071367ull);
    vlSelf->servile__DOT__cpu__DOT__rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9243487802666046269ull);
    vlSelf->servile__DOT__cpu__DOT__op_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14984889808266716664ull);
    vlSelf->servile__DOT__cpu__DOT__op_b_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17081293793382327825ull);
    vlSelf->servile__DOT__cpu__DOT__mem_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6167496730296471180ull);
    vlSelf->servile__DOT__cpu__DOT__mem_word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17486025125696395746ull);
    vlSelf->servile__DOT__cpu__DOT__mem_half = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5909447067519540600ull);
    vlSelf->servile__DOT__cpu__DOT__mem_bytecnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8421210609880483847ull);
    vlSelf->servile__DOT__cpu__DOT__sh_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2086067078714745161ull);
    vlSelf->servile__DOT__cpu__DOT__mem_misalign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5291022977832494509ull);
    vlSelf->servile__DOT__cpu__DOT__bad_pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6426980580093614121ull);
    vlSelf->servile__DOT__cpu__DOT__csr_mstatus_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8363033771404715117ull);
    vlSelf->servile__DOT__cpu__DOT__csr_mie_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1100652747077211465ull);
    vlSelf->servile__DOT__cpu__DOT__csr_mcause_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8483284000467989381ull);
    vlSelf->servile__DOT__cpu__DOT__csr_source = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16264898945409320774ull);
    vlSelf->servile__DOT__cpu__DOT__csr_imm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9107261043618523636ull);
    vlSelf->servile__DOT__cpu__DOT__csr_d_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4865953648269288681ull);
    vlSelf->servile__DOT__cpu__DOT__csr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3266186972576536797ull);
    vlSelf->servile__DOT__cpu__DOT__csr_addr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11387542750093376077ull);
    vlSelf->servile__DOT__cpu__DOT__csr_pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11216724964519811295ull);
    vlSelf->servile__DOT__cpu__DOT__csr_imm_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1447708014075813918ull);
    vlSelf->servile__DOT__cpu__DOT__csr_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5243885236837496410ull);
    vlSelf->servile__DOT__cpu__DOT__rf_csr_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10538757476267021352ull);
    vlSelf->servile__DOT__cpu__DOT__dbus_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12027116522285280878ull);
    vlSelf->servile__DOT__cpu__DOT__new_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11823996269028440857ull);
    vlSelf->servile__DOT__cpu__DOT__lsb = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5324773055352826222ull);
    vlSelf->servile__DOT__cpu__DOT__i_wb_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8175897648483483207ull);
    vlSelf->servile__DOT__cpu__DOT__wb_ibus_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9211447197269910715ull);
    vlSelf->servile__DOT__cpu__DOT__wb_ibus_cyc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1904903561851847961ull);
    vlSelf->servile__DOT__cpu__DOT__wb_ibus_rdt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11327467789282119503ull);
    vlSelf->servile__DOT__cpu__DOT__wb_ibus_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12772673744734687123ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__i_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8159393392652961614ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__i_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2186654745957817346ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__i_new_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1525247914063917285ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__i_alu_cmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6844891905889137183ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__o_init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7845170208430015378ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__o_cnt_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7281054519380164460ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__o_cnt0to3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7555112244190820173ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__o_cnt12to31 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1498086751260201619ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__o_cnt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15760784551247707310ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__o_cnt1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11353053409215658259ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__o_cnt2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10787911825380444897ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__o_cnt3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10325419286070112584ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__o_cnt7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10041348434096256838ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__o_cnt11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 585941902916740399ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__o_cnt12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17835035742740960806ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__o_cnt_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2874346416081119721ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__o_bufreg_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9692431264756907997ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__o_ctrl_pc_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5162829375358135549ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__o_ctrl_jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11091935311664902773ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__o_ctrl_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14828717432846747999ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__i_ctrl_misalign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2013102518927827055ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__i_sh_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2629902129129171132ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__o_mem_bytecnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6294661137341182893ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__i_mem_misalign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6569598726632970968ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__i_bne_or_bge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9451133676563709574ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__i_cond_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8644574296704906727ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__i_dbus_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4966464552359072397ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__i_two_stage_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13733494843819767412ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__i_branch_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 714205469467276237ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__i_shift_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4936125051834164509ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__i_sh_right = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12490614037470053193ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__i_alu_rd_sel1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 68202074928440885ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__i_rd_alu_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12668770283887490451ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__i_e_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15692267339335677398ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__i_rd_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7591844635410023630ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__i_mdu_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18431245425437081591ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__o_mdu_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8960229245336614932ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__i_mdu_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5504204113953468466ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__o_dbus_cyc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14202356259090489544ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__i_dbus_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6721573350578142334ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__o_ibus_cyc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16998880291788743804ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__i_ibus_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8637604614518032954ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__o_rf_rreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17726634580603607188ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__o_rf_wreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14943659545514070098ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__i_rf_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1705178834186482356ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__o_rf_rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15180888002816861739ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__init_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15991187730005937884ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__misalign_trap_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17415699470469450432ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__o_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16513815820838949860ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__cnt_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3197647020699802297ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__ibus_cyc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16607213450852250712ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__take_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13866407855062605185ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__last_init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15525891479229349777ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__trap_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17633958309351529164ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__gen_cnt_w_eq_1__DOT__cnt_lsb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15213212359609488704ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT__gen_csr__DOT__misalign_trap_sync_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3624543545839332193ull);
    vlSelf->servile__DOT__cpu__DOT__state__DOT____VdfgRegularize_h2f4d1f67_0_2 = 0;
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2797247581558130664ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__i_wb_rdt = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 8017310531591994016ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__i_wb_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13530350890200692713ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_sh_right = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3552458009658027107ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_bne_or_bge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7075320189750743431ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_cond_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2171335369853454ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_e_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 782113076040488803ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_ebreak = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17092802180178072112ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_branch_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13564022455652191566ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_shift_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8387276667146519896ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_rd_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2692512586541488400ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_two_stage_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3302336064702174926ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_dbus_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6064631358785932675ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_mdu_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8713021229026178826ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_ext_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10516111578199671125ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_bufreg_rs1_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6084434563145464995ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_bufreg_imm_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4371120283269079923ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_bufreg_clr_lsb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15423826303807938685ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_bufreg_sh_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1744413682660806147ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_ctrl_jal_or_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10700063590617858707ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_ctrl_utype = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 614066552318347437ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_ctrl_pc_rel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5824743912903757369ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_ctrl_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8475806787952285136ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_alu_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8548534931973107093ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_alu_bool_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15862593802304955596ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 161642570363959260ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_alu_cmp_sig = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6506570225853868715ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_alu_rd_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16435107962256551709ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_mem_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9628125293877878897ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_mem_word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5012892009800199606ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_mem_half = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10559246792712636573ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_mem_cmd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7433538505104465522ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_csr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11792544408808121432ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_csr_addr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10692383098657037738ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_csr_mstatus_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15298041601632500398ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_csr_mie_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13274859915365108466ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_csr_mcause_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18103192171402072717ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_csr_source = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16314772750224254363ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_csr_d_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3264557476125583431ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_csr_imm_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12716863813732506379ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_mtval_pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7393624093805677095ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_immdec_ctrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18140229647819587224ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_immdec_en = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8613898871091040145ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_op_b_source = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2421928615059272952ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_rd_mem_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18271903714355337927ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_rd_csr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6937288893839427801ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__o_rd_alu_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15493723182585511062ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__opcode = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9366298094973319319ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9131429456507532474ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__op20 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7549722397351487040ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__op21 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9419983571531089051ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__op22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14551147470455906472ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__op26 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7089292561181617284ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__imm25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16632132029994531362ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__imm30 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13384555828272739720ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_mdu_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10594050624466458762ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_two_stage_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8899806471034851856ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_shift_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2499597742286936009ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_branch_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9434454645624895178ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_dbus_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10756018142250509573ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_mtval_pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2844920323298845647ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_mem_word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 892155624431264256ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_rd_alu_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9904480246679330867ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_rd_mem_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1135444205398688364ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_ext_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7331662115328727483ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17587153624466012512ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_bufreg_imm_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10934215219154255470ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_bufreg_clr_lsb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8287814789986008104ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_cond_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6493027913536423959ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_ctrl_utype = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4007557743872245130ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_ctrl_jal_or_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9589667346442356362ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_ctrl_pc_rel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17101558451825098094ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_rd_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5755932554585644719ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_sh_right = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 150399678443340401ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_bne_or_bge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7578364854940536489ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__csr_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18342678585189329124ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_ebreak = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11536698878889251358ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_ctrl_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9464702959896434738ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_e_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16210884018221577878ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_bufreg_sh_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18027514999241511575ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_alu_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2662641185631083481ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__csr_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12334709942514799127ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_rd_csr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5613331876757443501ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_csr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8340429543364664424ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15395741517783959023ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_csr_mie_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10256947748374245729ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13336370588358789342ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_csr_source = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3194377841098467926ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_csr_d_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12170801683653350844ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_csr_imm_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 994263761076419160ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_csr_addr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10513587651792342990ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14863055323788157337ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9421088776335963752ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_mem_cmd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7852074197761438995ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_mem_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2562988744251318014ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_mem_half = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9560453868294444717ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_alu_bool_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15188836065646184839ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17355530551287206326ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_immdec_en = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1937003986578780266ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15748014892455746461ull);
    vlSelf->servile__DOT__cpu__DOT__decode__DOT__co_op_b_source = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12651484086726834797ull);
    vlSelf->servile__DOT__cpu__DOT__immdec__DOT__i_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16610008358248489744ull);
    vlSelf->servile__DOT__cpu__DOT__immdec__DOT__i_cnt_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16553135052515310015ull);
    vlSelf->servile__DOT__cpu__DOT__immdec__DOT__i_cnt_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18355538990014805983ull);
    vlSelf->servile__DOT__cpu__DOT__immdec__DOT__i_immdec_en = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16911232030475264219ull);
    vlSelf->servile__DOT__cpu__DOT__immdec__DOT__i_csr_imm_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2679369848147562198ull);
    vlSelf->servile__DOT__cpu__DOT__immdec__DOT__i_ctrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7983587201876104200ull);
    vlSelf->servile__DOT__cpu__DOT__immdec__DOT__o_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4099537220149261835ull);
    vlSelf->servile__DOT__cpu__DOT__immdec__DOT__o_rs1_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4667024489697518282ull);
    vlSelf->servile__DOT__cpu__DOT__immdec__DOT__o_rs2_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5951421927179260746ull);
    vlSelf->servile__DOT__cpu__DOT__immdec__DOT__o_csr_imm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5218904110677456030ull);
    vlSelf->servile__DOT__cpu__DOT__immdec__DOT__o_imm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2154943302683297675ull);
    vlSelf->servile__DOT__cpu__DOT__immdec__DOT__i_wb_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12119393282625059769ull);
    vlSelf->servile__DOT__cpu__DOT__immdec__DOT__i_wb_rdt = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 6008492533121695794ull);
    vlSelf->servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm31 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5068542387445096151ull);
    vlSelf->servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm19_12_20 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9859724620744275384ull);
    vlSelf->servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14527231777237201554ull);
    vlSelf->servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm30_25 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9875226345583676264ull);
    vlSelf->servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm24_20 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6651987196848469534ull);
    vlSelf->servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__imm11_7 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7012681606118730986ull);
    vlSelf->servile__DOT__cpu__DOT__immdec__DOT__gen_immdec_w_eq_1__DOT__signbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5556196028724003626ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg__DOT__i_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10451746705900291490ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg__DOT__i_cnt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5812353446311626525ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg__DOT__i_cnt1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9980760252041118191ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg__DOT__i_cnt_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12026191006829568781ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg__DOT__i_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4458743840635932404ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg__DOT__i_init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2738333559095925152ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg__DOT__i_mdu_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12981109210169401462ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg__DOT__o_lsb = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 144604398488932831ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg__DOT__i_rs1_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10791912621565158405ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg__DOT__i_imm_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4643956585878431005ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg__DOT__i_clr_lsb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15245724062422821625ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg__DOT__i_shift_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1372822838432529506ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg__DOT__i_right_shift_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12375867579321816005ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg__DOT__i_shamt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13455151168184142242ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg__DOT__i_sh_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4519705275836979156ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg__DOT__i_rs1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1063956847046716889ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg__DOT__i_imm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18389913328357787244ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg__DOT__o_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8939977319813485108ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg__DOT__o_dbus_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2034140283892421979ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg__DOT__o_ext_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12622699030736473761ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg__DOT__c = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10966637205390569700ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8053960151955847065ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg__DOT__c_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15179896232089751652ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12150016248227256459ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg__DOT__clr_lsb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12810224057538518684ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg2__DOT__i_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4356946661663909619ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg2__DOT__i_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11740951624322076868ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg2__DOT__i_init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12233977030116083196ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg2__DOT__i_cnt7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9919256578066451788ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg2__DOT__i_cnt_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12368717663464767865ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg2__DOT__i_sh_right = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6008341033002354345ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg2__DOT__i_lsb = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13467125522427083271ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg2__DOT__i_bytecnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17656035788607522111ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg2__DOT__o_sh_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17042652276874195128ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg2__DOT__i_op_b_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16642118638924564235ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg2__DOT__i_shift_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16664931335186285965ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg2__DOT__i_rs2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6582102684300194688ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg2__DOT__i_imm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18052513056462025249ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg2__DOT__o_op_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16734048925724904515ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg2__DOT__o_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5144246866595245674ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg2__DOT__o_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17463512575740275075ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg2__DOT__i_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16270359267433861295ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg2__DOT__i_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18235213338988868365ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg2__DOT__dhi = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4420449145106120816ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg2__DOT__dlo = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6232594886917876372ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg2__DOT__byte_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6764162979778556726ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg2__DOT__shift_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10669656872864442717ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg2__DOT__cnt_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 765890450135339499ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg2__DOT__cnt_next = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5742518141760820991ull);
    vlSelf->servile__DOT__cpu__DOT__bufreg2__DOT__dat_shamt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4124481241149471397ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10141153220048714605ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__i_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2290702074220470492ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__i_pc_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5642564361562410973ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__i_cnt12to31 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3389214672255944916ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__i_cnt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14900973634774084560ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__i_cnt1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7820153930242764010ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__i_cnt2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16780851523172491818ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__i_jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8651972694462057845ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__i_jal_or_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6179574148860286740ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__i_utype = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1723461446959388916ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__i_pc_rel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15201460795272048075ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__i_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5380305743933756781ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__i_iscomp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7409730961655363159ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__i_imm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7476865445462994060ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__i_buf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7582175284483966987ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__i_csr_pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11323356801987207551ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__o_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9924097534122951163ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__o_bad_pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8887821556759369776ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__o_ibus_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5812036689387321009ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18093975713477873835ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18297676617926942471ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9006724527332677409ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4113640685551837290ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 968224701645364174ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14045603486300504715ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17171299066016268892ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11572300417786449498ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4236723501568648035ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__plus_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9014772924325870891ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7048238077898081101ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__new_pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9176564735191968207ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__offset_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7609693398399410891ull);
    vlSelf->servile__DOT__cpu__DOT__ctrl__DOT__offset_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3644038621587797142ull);
    vlSelf->servile__DOT__cpu__DOT__alu__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8816102615158051025ull);
    vlSelf->servile__DOT__cpu__DOT__alu__DOT__i_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10270883796851132635ull);
    vlSelf->servile__DOT__cpu__DOT__alu__DOT__i_cnt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7193767165987672008ull);
    vlSelf->servile__DOT__cpu__DOT__alu__DOT__o_cmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7952017095211275514ull);
    vlSelf->servile__DOT__cpu__DOT__alu__DOT__i_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10627674222335346273ull);
    vlSelf->servile__DOT__cpu__DOT__alu__DOT__i_bool_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16270405031652608834ull);
    vlSelf->servile__DOT__cpu__DOT__alu__DOT__i_cmp_eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4111360672516175200ull);
    vlSelf->servile__DOT__cpu__DOT__alu__DOT__i_cmp_sig = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16032745217812621630ull);
    vlSelf->servile__DOT__cpu__DOT__alu__DOT__i_rd_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 336892889356649916ull);
    vlSelf->servile__DOT__cpu__DOT__alu__DOT__i_rs1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1650674176588940067ull);
    vlSelf->servile__DOT__cpu__DOT__alu__DOT__i_op_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16306204380887138687ull);
    vlSelf->servile__DOT__cpu__DOT__alu__DOT__i_buf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15629773111210543322ull);
    vlSelf->servile__DOT__cpu__DOT__alu__DOT__o_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5954729327555421350ull);
    vlSelf->servile__DOT__cpu__DOT__alu__DOT__result_add = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13692448198336982554ull);
    vlSelf->servile__DOT__cpu__DOT__alu__DOT__result_slt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7577507400258208558ull);
    vlSelf->servile__DOT__cpu__DOT__alu__DOT__cmp_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11225814887344549000ull);
    vlSelf->servile__DOT__cpu__DOT__alu__DOT__add_cy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16907889433188075993ull);
    vlSelf->servile__DOT__cpu__DOT__alu__DOT__add_cy_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3985583531245421376ull);
    vlSelf->servile__DOT__cpu__DOT__alu__DOT__rs1_sx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3165861095977004638ull);
    vlSelf->servile__DOT__cpu__DOT__alu__DOT__op_b_sx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4287171144070516535ull);
    vlSelf->servile__DOT__cpu__DOT__alu__DOT__add_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5870858678637620529ull);
    vlSelf->servile__DOT__cpu__DOT__alu__DOT__result_lt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6679149020868416726ull);
    vlSelf->servile__DOT__cpu__DOT__alu__DOT__result_eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4520257201223093256ull);
    vlSelf->servile__DOT__cpu__DOT__alu__DOT__result_bool = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9855680769585126308ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__i_cnt_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2255983302033091295ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__o_wreg0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3322731071086571422ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__o_wreg1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4999912350692791679ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__o_wen0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17648655174425303834ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__o_wen1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14782734886829332402ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__o_wdata0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16839920649527046746ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__o_wdata1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2223816469798752214ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__o_rreg0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2559092159890137746ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__o_rreg1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10507552710816373843ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__i_rdata0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11363734742618653158ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__i_rdata1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18444481375646069724ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__i_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13050974746053862534ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__i_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7181091880063401044ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__i_mepc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15980366262011362714ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__i_mtval_pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15769203310202979837ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__i_bufreg_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4286839220817288638ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__i_bad_pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4681814621432536196ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__o_csr_pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14749194292080276328ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__i_csr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3075585030897568391ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__i_csr_addr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15267790024626435363ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__i_csr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11775282164891652241ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__o_csr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9548079142458652977ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__i_rd_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2537773984895623086ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__i_rd_waddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11208616648984494577ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__i_ctrl_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9524390004207632814ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__i_alu_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17916312239515143171ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__i_rd_alu_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7218444283350233266ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__i_csr_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17311672058129867358ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__i_rd_csr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6741989788522067685ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__i_mem_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11392136316519424660ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__i_rd_mem_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11541875762718984306ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__i_rs1_raddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8448881013720642141ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__o_rs1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10610583902115612057ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__i_rs2_raddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15625560360120557559ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__o_rs2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15888822353220999279ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__rd_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4915134604834319130ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6682255303395713479ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__mtval = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17115158135396090936ull);
    vlSelf->servile__DOT__cpu__DOT__rf_if__DOT__gen_csr__DOT__sel_rs2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 946383604195979316ull);
    vlSelf->servile__DOT__cpu__DOT__mem_if__DOT__i_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8995667005437921150ull);
    vlSelf->servile__DOT__cpu__DOT__mem_if__DOT__i_bytecnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5539281350309142950ull);
    vlSelf->servile__DOT__cpu__DOT__mem_if__DOT__i_lsb = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 205628500321235913ull);
    vlSelf->servile__DOT__cpu__DOT__mem_if__DOT__o_misalign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9611357860721579256ull);
    vlSelf->servile__DOT__cpu__DOT__mem_if__DOT__i_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10418810757564887879ull);
    vlSelf->servile__DOT__cpu__DOT__mem_if__DOT__i_word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17472134991534394139ull);
    vlSelf->servile__DOT__cpu__DOT__mem_if__DOT__i_half = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5553702537054028654ull);
    vlSelf->servile__DOT__cpu__DOT__mem_if__DOT__i_mdu_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16157383051344958090ull);
    vlSelf->servile__DOT__cpu__DOT__mem_if__DOT__i_bufreg2_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9334209938532797573ull);
    vlSelf->servile__DOT__cpu__DOT__mem_if__DOT__o_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5964652057246821552ull);
    vlSelf->servile__DOT__cpu__DOT__mem_if__DOT__o_wb_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14334046775169461102ull);
    vlSelf->servile__DOT__cpu__DOT__mem_if__DOT__signbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5031751102184270720ull);
    vlSelf->servile__DOT__cpu__DOT__mem_if__DOT__dat_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13734598086316846300ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1355774807595795458ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7824346646100511701ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trig_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17927411775933571801ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14317888251507822591ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt0to3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16606965425796247097ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13034469917626047844ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15352280576171663784ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3407988279553504993ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8963244418249182835ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_cnt_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11019889105647475313ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mem_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16789526457615247343ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mtip = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6655116300949813702ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 275783677879350325ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_new_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15908314365338404196ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_e_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3100953956337984100ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_ebreak = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 704598232596331601ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mem_cmd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3658124043498507510ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mstatus_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13045069431789116541ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mie_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3052651362576140406ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mcause_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9734567901097900992ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_source = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6777800760111849641ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1564791870228787062ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_d_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16835813608476125015ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rf_csr_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1223785759491300983ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_csr_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7480476687186021513ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_csr_imm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11860631745555685631ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__i_rs1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13565027718918707477ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__o_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15826469406557085531ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mie = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 827246943579345955ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus_mpie = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11935109591838659154ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mie_mtie = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12274529943998382570ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause31 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14473650407595108315ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause3_0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7515928945692954490ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mcause = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17622277175406918708ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13734342058621579740ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__csr_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2476030602096918823ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__timer_irq_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5242879290265269830ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14975989600849501500ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__mstatus = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15116422503091997476ull);
    vlSelf->servile__DOT__cpu__DOT__gen_csr__DOT__csr__DOT__timer_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2377520109127237989ull);
    vlSelf->__VdfgRegularize_hebeb780c_0_0 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_1 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_2 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_3 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_4 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_5 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_6 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_7 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_8 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_9 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_10 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_11 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_12 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_13 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_14 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_15 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_16 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_17 = 0;
}
