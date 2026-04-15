// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop___024root
constexpr CData/*3:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__TILE_ID;
constexpr CData/*3:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__router_inst__DOT__MY_ID;
constexpr CData/*3:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__TILE_ID;
constexpr CData/*3:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__router_inst__DOT__MY_ID;
constexpr CData/*3:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__TILE_ID;
constexpr CData/*3:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__router_inst__DOT__MY_ID;
constexpr CData/*3:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__TILE_ID;
constexpr CData/*3:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__router_inst__DOT__MY_ID;
constexpr CData/*3:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__TILE_ID;
constexpr CData/*3:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__router_inst__DOT__MY_ID;
constexpr CData/*3:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__TILE_ID;
constexpr CData/*3:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__router_inst__DOT__MY_ID;
constexpr CData/*3:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__TILE_ID;
constexpr CData/*3:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__tile_inst__DOT__router_inst__DOT__MY_ID;
constexpr CData/*3:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__TILE_ID;
constexpr CData/*3:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__tile_inst__DOT__router_inst__DOT__MY_ID;
constexpr CData/*3:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__TILE_ID;
constexpr CData/*3:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__tile_inst__DOT__router_inst__DOT__MY_ID;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__IDX;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__IDX;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__0__KET____DOT__cols__BRA__2__KET____DOT__IDX;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__IDX;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__IDX;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__1__KET____DOT__cols__BRA__2__KET____DOT__IDX;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__0__KET____DOT__IDX;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__1__KET____DOT__IDX;
constexpr IData/*31:0*/ Vtop___024root::mesh_3x3__DOT__rows__BRA__2__KET____DOT__cols__BRA__2__KET____DOT__IDX;


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
