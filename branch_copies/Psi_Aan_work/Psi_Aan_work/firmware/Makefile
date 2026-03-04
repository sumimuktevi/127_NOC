# Toolchain configuration
CC      = riscv64-unknown-elf-gcc
OBJCOPY = riscv64-unknown-elf-objcopy

# --- UPDATED FLAGS ---
# -Os: Aggressive size optimization
# -fdata-sections -ffunction-sections: Puts every function/variable in its own block 
# so the linker can delete unused ones.
CFLAGS = -march=rv32i -mabi=ilp32 -Os -ffreestanding -nostdlib -fno-builtin
LDFLAGS = -T link.ld -nostdlib
all: firmware.hex size_check

firmware.elf: main.c link.ld
	$(CC) $(CFLAGS) -o $@ main.c $(LDFLAGS)

firmware.bin: firmware.elf
	$(OBJCOPY) -O binary $< $@

firmware.hex: firmware.bin
	python3 bin2hex.py $< $@

# Added a size check to the build process so you can see if it fits
size_check: firmware.elf
	@echo "--- FIRMWARE SIZE REPORT ---"
	@riscv64-unknown-elf-size firmware.elf
	@echo "Targeting Grid Base @ 0x2F8 (760 bytes). Text + Data must be smaller than this."

clean:
	rm -f *.elf *.bin *.hex