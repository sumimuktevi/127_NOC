module cocotb_iverilog_dump();
initial begin
    $dumpfile("sim_build_rf_mem_if/rf_mem_if_tb_top.fst");
    $dumpvars(0, rf_mem_if_tb_top);
end
endmodule
