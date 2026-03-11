// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop___024root
constexpr CData/*3:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__TILE_ID;
constexpr CData/*3:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__router_inst__DOT__MY_ID;
constexpr CData/*3:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__TILE_ID;
constexpr CData/*3:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__router_inst__DOT__MY_ID;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__boot_inst__DOT__IDLE;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__boot_inst__DOT__CMD;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__boot_inst__DOT__ADDR;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__boot_inst__DOT__READ;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__boot_inst__DOT__WRITE;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__boot_inst__DOT__DONE;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__DOT__Tdly;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__DOT__Tcyc;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__DOT__Tckh;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__DOT__Tckl;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__DOT__tcs;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__DOT__tas;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__DOT__tds;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__DOT__tws;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__DOT__twis;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__DOT__tch;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__DOT__tah;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__DOT__tdh;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__DOT__twh;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__DOT__twih;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__sram_inst__DOT__ta;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__DOT__Tdly;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__DOT__Tcyc;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__DOT__Tckh;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__DOT__Tckl;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__DOT__tcs;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__DOT__tas;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__DOT__tds;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__DOT__tws;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__DOT__twis;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__DOT__tch;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__DOT__tah;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__DOT__tdh;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__DOT__twh;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__DOT__twih;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__sram_inst__DOT__ta;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
