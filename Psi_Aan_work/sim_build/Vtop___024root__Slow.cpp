// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop___024root
constexpr CData/*1:0*/ Vtop___024root::mesh_2x2__DOT__t00__DOT__TILE_ID;
constexpr CData/*1:0*/ Vtop___024root::mesh_2x2__DOT__t00__DOT__router__DOT__MY_ID;
constexpr CData/*1:0*/ Vtop___024root::mesh_2x2__DOT__t01__DOT__TILE_ID;
constexpr CData/*1:0*/ Vtop___024root::mesh_2x2__DOT__t01__DOT__router__DOT__MY_ID;
constexpr CData/*1:0*/ Vtop___024root::mesh_2x2__DOT__t10__DOT__TILE_ID;
constexpr CData/*1:0*/ Vtop___024root::mesh_2x2__DOT__t10__DOT__router__DOT__MY_ID;
constexpr CData/*1:0*/ Vtop___024root::mesh_2x2__DOT__t11__DOT__TILE_ID;
constexpr CData/*1:0*/ Vtop___024root::mesh_2x2__DOT__t11__DOT__router__DOT__MY_ID;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* namep)
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
