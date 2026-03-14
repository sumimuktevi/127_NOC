# Variables
$IVERILOG = "C:\iverilog\bin\iverilog.exe"
$VVP      = "C:\iverilog\bin\vvp.exe"
$TARGET   = "sim.vvp"
$SRCS     = "topmod.sv", "housekeeping.sv", "shiftregister.sv", "flash_clk.sv", "gf180mcu_ocd_ip_sram__sram1024x8m8wm1.v", "tb_integration.v"

Write-Host "--- Compiling ---" -ForegroundColor Cyan
& $IVERILOG -g2012 -o $TARGET $SRCS

if ($LASTEXITCODE -eq 0) {
    Write-Host "--- Running Simulation ---" -ForegroundColor Green
    & $VVP $TARGET
} else {
    Write-Host "--- Compilation Failed ---" -ForegroundColor Red
}

