module cocotb_iverilog_dump();
initial begin
    $dumpfile("sim_build/subservient_generic_ram.fst");
    $dumpvars(0, subservient_generic_ram);
end
endmodule
