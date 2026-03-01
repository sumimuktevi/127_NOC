Tim Edwards' 3v3 1024x8 SRAM:
- 8 bit words
- address 0 - 895     | Pragram + data memory              | 896 bytes
- address 896 - 1019  | x31 down to x1 (GPRs, inverted)    | 124 bytes
- address 1020 - 1023 | x0 (zero register, always reads 0) |   4 bytes

Register-to-SRAM mapping:

RISC-V Reg	 | RF byte addr | SRAM addr 
x0 (byte 3)  |	3		    | 1020
x0 (byte 2)	 | 2		    | 1021
x0 (byte 1)	 | 1		    | 1022
x0 (byte 0)	 | 0		    | 1023
x1 (byte 3)	 | 7		    | 1016
x1 (byte 2)	 | 6		    | 1017
x1 (byte 1)	 | 5		    | 1018
x1 (byte 0)	 | 4		    | 1019
...	     	 | ...          | ...
x31 (byte 3) | 127		    | 896
x31 (byte 2) | 126		    | 897
x31 (byte 1) | 125		    | 898
x31 (byte 0) | 124		    | 899

The entire register file is stored in reverse order at the top of the SRAM, with x0 at the very top (1020–1023) and ending with x31 (896-899)

test_sram_gf180.py:
run make
- Only tests SRAM functionality withou the entire SERV CPU