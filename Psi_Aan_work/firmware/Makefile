# Toolchain configuration
CC      = riscv64-unknown-elf-gcc
OBJCOPY = riscv64-unknown-elf-objcopy

# -march=rv32i: Minimal instructions for the SERV core
# -Os: Aggressive size optimization
# -ffreestanding: No assumption of a standard library
# -nostartfiles: Do not link the bulky crt0.o startup code
CFLAGS  = -march=rv32i -mabi=ilp32 -Os -ffreestanding -nostdlib -nostartfiles -T link.ld

all: firmware.hex

firmware.elf: main.c link.ld
	$(CC) $(CFLAGS) -o $@ main.c

firmware.bin: firmware.elf
	$(OBJCOPY) -O binary $< $@

firmware.hex: firmware.bin
	python3 bin2hex.py $< $@

clean:
	rm -f *.elf *.bin *.hex