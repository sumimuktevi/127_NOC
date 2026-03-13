# Toolchain configuration
CC      = riscv64-unknown-elf-gcc
OBJCOPY = riscv64-unknown-elf-objcopy
SIZE    = riscv64-unknown-elf-size

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
	@$(SIZE) firmware.elf
	@echo "Targeting Grid Base @ 0x2F8 (760 bytes). Text + Data must be smaller than this."

clean:
	rm -f *.elf *.bin *.hex

pbm_tile_pipeline.elf: pbm_tile_pipeline.c link.ld
	$(CC) $(CFLAGS) -o $@ pbm_tile_pipeline.c $(LDFLAGS)

pbm_tile_pipeline.bin: pbm_tile_pipeline.elf
	$(OBJCOPY) -O binary $< $@

pbm_tile_pipeline.hex: pbm_tile_pipeline.bin
	python3 bin2hex.py $< $@
