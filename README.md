1. System Requirements
The following tools must be installed and present in your system's $PATH:

Compiler: riscv64-unknown-elf-gcc (RV32I architecture support).

HDL Simulation: iverilog (Icarus Verilog).

Waveform Analysis: gtkwave.

Test Environment: Python 3.8+ with cocotb and cocotb-test packages.

2. Directory Structure
/rtl: Verilog source files for the mesh tiles, routers, and SERV core.

/firmware: C source code, linker scripts, and hex generation utilities.

/tests: Python-based cocotb test scripts.

3. Standard Development Workflow
Strictly follow these steps to implement and verify logic changes.

Step A: Update Firmware Logic
Modify main.c. Use the noc_send function to signal milestones to the hardware monitor.

0xAAAAAAAA: Heartbeat (Signifies CPU has successfully entered main).

0xCCCCCCCC: Generation Complete (Triggers automated memory verification in the testbench).

Step B: Compile Binary
Navigate to the /firmware directory and execute:

Bash
make clean && make
This generates firmware.bin. This file contains the machine code and the initialized .data section (the starting Game of Life seed).

Step C: Hardware Synchronization
The Verilog simulator expects the binary at the project root. Copy the new bin file out of the firmware directory:

Bash
cp firmware.hex ../rtl/
Step D: Execution
From the root directory where the Verilog and Python tests reside, run:

Bash
make
The simulation will load the bin into the SPI Flash model, the hardware bootloader will copy it to SRAM, and the CPU will begin execution.

4. Verification of Iteration 1
The testbench validates the Game of Life logic by monitoring the NoC. Once the CPU sends the completion signal (0xCCCCCCCC), the testbench performs a direct memory "peek":

Check Alive: Verifies indices [54, 55, 56] are logic HIGH.

Check Dead: Verifies indices [45, 65] are logic LOW.

Result: If the "Blinker" has rotated 90 degrees from vertical to horizontal, the test reports a PASS.