# """
# test_boot_and_dump.py
# =====================
# Two-phase testbench for the 3x3 mesh (dut = system_top).

#   PHASE 1 - Instruction load verification
#     * Drive the SPI flash responder with firmware.bin
#     * Let the boot_controller run its FSM (IDLE->CMD->ADDR->READ->WRITE x1024->DONE)
#     * Once cpu_rst_n goes HIGH, dump every tile's SRAM and verify vs firmware.bin

#   PHASE 2 - PBM image data load
#     * Same boot flow, firmware.bin must embed PBM pixel data at DATA_BASE
#     * After boot, dump the data region and compare against test3_paul.pbm

# Hierarchy (dut = system_top):
#     dut.noc_mesh                                         (mesh_3x3)
#     dut.noc_mesh.boot_inst                               (boot_controller)
#     dut.noc_mesh.rows[r].cols[c].tile_inst.sram_inst     (GF180 SRAM)
# """

# import os
# import cocotb
# from cocotb.clock import Clock
# from cocotb.triggers import Timer, RisingEdge, FallingEdge

# # ---------------------------------------------------------------------------
# # Configuration -- adjust INSTR_BASE / DATA_BASE to match your link.ld
# # ---------------------------------------------------------------------------
# FIRMWARE_PATH = os.path.join(os.path.dirname(__file__), "firmware.bin")
# PBM_PATH      = os.path.join(os.path.dirname(__file__), "test3_paul.pbm")

# SRAM_SIZE     = 1024   # bytes per tile
# CLK_PERIOD_NS = 60     # >= GF180 SRAM 55.6 ns Tcyc minimum
# RESET_CYCLES  = 20

# # Byte offsets inside the 1 KB SRAM that match your linker script sections.
# # Phase 1 checks [INSTR_BASE .. DATA_BASE).
# # Phase 2 checks [DATA_BASE .. DATA_BASE + len(pbm)].
# INSTR_BASE    = 0x000
# DATA_BASE     = 0x300

# GRID_ROWS     = 3
# GRID_COLS     = 3

# # ---------------------------------------------------------------------------
# # File loaders
# # ---------------------------------------------------------------------------

# def load_bin(path, pad_to=SRAM_SIZE):
#     """Read firmware binary, zero-pad to pad_to bytes."""
#     try:
#         with open(path, "rb") as f:
#             data = f.read()
#         if len(data) > pad_to:
#             cocotb.log.warning(f"[LOAD] {path}: {len(data)} B > {pad_to} B, truncating")
#             data = data[:pad_to]
#         return data + bytes(pad_to - len(data))
#     except FileNotFoundError:
#         cocotb.log.error(f"[LOAD] Not found: {path} -- using NOP fallback")
#         nop = bytes([0x13, 0x00, 0x00, 0x00])
#         return (nop * (pad_to // 4))[:pad_to]


# def pbm_to_bytes(path):
#     """
#     Parse P1 (ASCII) or P4 (binary) PBM and return packed bits, MSB-first,
#     each row padded to a byte boundary.

#     Reads the ENTIRE file first then tokenizes -- this handles P1 files
#     where pixels may be on the same line as the dimensions or split
#     across any number of lines.
#     """
#     with open(path, "rb") as f:
#         raw = f.read()

#     # Tokenize whole file, dropping comment content
#     tokens = []
#     for line in raw.decode("ascii", errors="replace").splitlines():
#         line = line.split("#")[0]
#         tokens.extend(line.split())

#     assert tokens, "PBM file is empty"
#     magic = tokens[0]
#     assert magic in ("P1", "P4"), f"Unsupported PBM type: {magic}"

#     w, h      = int(tokens[1]), int(tokens[2])
#     row_bytes = (w + 7) // 8

#     if magic == "P4":
#         # Binary: pixel data starts after the second newline in the raw bytes
#         nl1 = raw.index(b"\n")
#         nl2 = raw.index(b"\n", nl1 + 1)
#         pixel_bytes = raw[nl2 + 1 :]
#         cocotb.log.info(f"[PBM] P4 {w}x{h} -> {row_bytes * h} packed bytes")
#         return pixel_bytes[: row_bytes * h]

#     # P1 -- all tokens after magic/w/h are pixel values
#     bits = [int(t) for t in tokens[3:] if t in ("0", "1")]
#     assert len(bits) == w * h, \
#         f"[PBM] P1 expected {w * h} pixels, got {len(bits)}"

#     result = bytearray()
#     for row_idx in range(h):
#         row_bits = bits[row_idx * w : row_idx * w + w]
#         row_bits += [0] * (row_bytes * 8 - w)
#         for byte_start in range(0, row_bytes * 8, 8):
#             val = 0
#             for bp in range(8):
#                 val = (val << 1) | row_bits[byte_start + bp]
#             result.append(val)

#     cocotb.log.info(f"[PBM] P1 {w}x{h} -> {len(result)} packed bytes")
#     return bytes(result)


# # ---------------------------------------------------------------------------
# # SPI flash responder
# # ---------------------------------------------------------------------------

# async def spi_flash_responder(dut, firmware: bytes):
#     """
#     Mimics SPI NOR READ (cmd 0x03) by monitoring boot_controller's OWN
#     internal flash signals directly inside noc_mesh.

#     WHY: system_top has two drivers on flash_clk/flash_csb/flash_mosi --
#     both topmod (flash_controller) and noc_mesh.boot_controller drive them.
#     These fight on the top-level wires making edge detection unreliable.

#     Fix: probe noc_mesh.boot_inst.flash_cs_n and boot_inst.flash_clk
#     directly -- clean signals driven only by boot_controller.
#     We still write dut.flash_miso (top-level input) since that feeds
#     straight through to boot_controller.flash_miso.
#     """
#     boot = dut.noc_mesh.boot_inst   # shortcut to boot_controller signals
#     dut.flash_miso.value = 0

#     while True:
#         # Wait for boot_controller's own CS# (active LOW)
#         await FallingEdge(boot.flash_cs_n)
#         dut._log.info("[SPI] boot_ctrl CS asserted")

#         # Sink 32 bits of header on boot_ctrl's own clock
#         for _ in range(32):
#             await RisingEdge(boot.flash_clk)
#             if boot.flash_cs_n.value == 1:
#                 break
#         if boot.flash_cs_n.value == 1:
#             dut._log.warning("[SPI] CS deasserted during header")
#             continue

#         dut._log.info("[SPI] Streaming firmware...")

#         aborted = False
#         for byte_idx, byte_val in enumerate(firmware):
#             for bit in range(7, -1, -1):
#                 # Drive MISO on falling edge -- stable for boot_ctrl rising-edge sample
#                 await FallingEdge(boot.flash_clk)
#                 dut.flash_miso.value = (byte_val >> bit) & 1
#                 if boot.flash_cs_n.value == 1:
#                     dut._log.info(f"[SPI] CS deasserted after byte {byte_idx}")
#                     aborted = True
#                     break
#             if aborted:
#                 break

#         if not aborted:
#             await RisingEdge(boot.flash_cs_n)
#         dut._log.info("[SPI] Transaction done")


# # ---------------------------------------------------------------------------
# # Boot wait helper
# # ---------------------------------------------------------------------------

# async def wait_for_boot(dut, timeout_cycles=200_000):
#     """Wait for boot_controller DONE state (cpu_reset_n HIGH)."""
#     for cycle in range(timeout_cycles):
#         await RisingEdge(dut.clk)
#         try:
#             done = dut.noc_mesh.boot_inst.cpu_reset_n.value == 1
#         except Exception:
#             done = False
#         if done:
#             dut._log.info(f"[BOOT] Done at cycle {cycle} "
#                           f"({cycle * CLK_PERIOD_NS / 1000:.1f} us)")
#             return True
#         if cycle % 10_000 == 0 and cycle > 0:
#             dut._log.info(f"[BOOT] Still booting... cycle {cycle}")
#     dut._log.error("[BOOT] TIMEOUT -- cpu_reset_n never went HIGH")
#     return False


# # ---------------------------------------------------------------------------
# # SRAM read / hex dump / compare
# # ---------------------------------------------------------------------------

# def read_tile_sram(dut, row, col, start=0, length=SRAM_SIZE):
#     """
#     Read 'length' bytes from tile (row, col) SRAM starting at byte 'start'.
#     Path: dut.noc_mesh.rows[r].cols[c].tile_inst.sram_inst.mem[addr]
#     """
#     mem = dut.noc_mesh.rows[row].cols[col].tile_inst.sram_inst.mem
#     result = []
#     for addr in range(start, start + length):
#         try:
#             result.append(int(mem[addr].value))
#         except Exception as e:
#             dut._log.warning(f"[SRAM] ({row},{col}) 0x{addr:03x} read error: {e}")
#             result.append(0xFF)
#     return result


# def dump_hex(dut, row, col, data, label=""):
#     tag = f"[SRAM ({row},{col}){' ' + label if label else ''}]"
#     dut._log.info(f"{tag} -- {len(data)} bytes")
#     for base in range(0, len(data), 16):
#         chunk     = data[base : base + 16]
#         hex_str   = " ".join(f"{b:02x}" for b in chunk)
#         ascii_str = "".join(chr(b) if 32 <= b < 127 else "." for b in chunk)
#         dut._log.info(f"  0x{base:03x}: {hex_str:<47}  |{ascii_str}|")


# def compare_region(dut, row, col, actual, expected, offset=0, label=""):
#     """Compare actual list vs expected bytes. Returns mismatch count."""
#     mismatches = 0
#     tag = f"[CMP ({row},{col}){' ' + label if label else ''}]"
#     for i, (a, e) in enumerate(zip(actual, expected)):
#         if a != e:
#             if mismatches < 16:
#                 dut._log.error(
#                     f"{tag} MISMATCH @ 0x{offset + i:03x}: "
#                     f"got 0x{a:02x}, expected 0x{e:02x}"
#                 )
#             mismatches += 1
#     if mismatches == 0:
#         dut._log.info(f"{tag} All {len(expected)} bytes match!")
#     else:
#         dut._log.error(f"{tag} {mismatches} mismatches in {len(expected)} bytes")
#     return mismatches


# # ---------------------------------------------------------------------------
# # Shared reset + boot sequence (used by both tests)
# # ---------------------------------------------------------------------------

# async def reset_and_boot(dut, firmware):
#     """Drive reset, launch SPI responder, wait for boot to complete."""
#     cocotb.start_soon(Clock(dut.clk, CLK_PERIOD_NS, unit="ns").start())
#     dut.reset.value      = 1
#     dut.flash_miso.value = 0
#     dut.bypass_en.value  = 0
#     dut.host_mosi.value  = 0
#     await Timer(CLK_PERIOD_NS * RESET_CYCLES, unit="ns")
#     dut.reset.value = 0

#     # Start SPI responder after reset is released so boot_controller
#     # sees a clean CS# edge transition
#     cocotb.start_soon(spi_flash_responder(dut, firmware))

#     ok = await wait_for_boot(dut)
#     assert ok, "Boot controller timed out -- check SPI responder and clock"

#     # Extra settling time so the last SRAM write pulse fully propagates
#     await Timer(CLK_PERIOD_NS * 20, unit="ns")


# # ===========================================================================
# # TEST 1 -- Verify instruction region
# # ===========================================================================
# @cocotb.test()
# async def test_phase1_instruction_load(dut):
#     """
#     Boot all 9 cores via SPI, then verify that the instruction region
#     [INSTR_BASE .. DATA_BASE) in every tile's SRAM matches firmware.bin.
#     """
#     firmware  = load_bin(FIRMWARE_PATH)
#     instr_len = DATA_BASE - INSTR_BASE

#     dut._log.info(f"[SETUP] firmware.bin = {len(firmware)} bytes")
#     dut._log.info(f"[SETUP] Instruction region: 0x{INSTR_BASE:03x} - "
#                   f"0x{DATA_BASE:03x} ({instr_len} bytes/tile)")

#     await reset_and_boot(dut, firmware)

#     total_mismatches = 0
#     for r in range(GRID_ROWS):
#         for c in range(GRID_COLS):
#             raw         = read_tile_sram(dut, r, c)
#             instr_bytes = raw[INSTR_BASE : INSTR_BASE + instr_len]
#             expected    = list(firmware[INSTR_BASE : INSTR_BASE + instr_len])

#             dump_hex(dut, r, c, instr_bytes, label="INSTRUCTIONS")
#             total_mismatches += compare_region(
#                 dut, r, c, instr_bytes, expected,
#                 offset=INSTR_BASE, label="INSTR CHECK"
#             )

#     dut._log.info("=" * 60)
#     if total_mismatches == 0:
#         dut._log.info("PHASE 1 PASSED -- All tiles loaded correctly")
#     else:
#         dut._log.error(f"PHASE 1 FAILED -- {total_mismatches} total mismatches")

#     assert total_mismatches == 0, \
#         f"PHASE 1: {total_mismatches} SRAM mismatches across all tiles"


# # ===========================================================================
# # TEST 2 -- Verify PBM image in data region
# # ===========================================================================
# @cocotb.test()
# async def test_phase2_pbm_data_load(dut):
#     """
#     Boot all 9 cores, then verify that the data region [DATA_BASE..)
#     in every tile's SRAM matches the packed pixel bytes from test3_paul.pbm.

#     Prerequisite: firmware.bin must be compiled so that the PBM pixel
#     data is placed at DATA_BASE by the linker (.data / .rodata section).
#     """
#     firmware = load_bin(FIRMWARE_PATH)
#     pbm_raw  = pbm_to_bytes(PBM_PATH)
#     data_len = SRAM_SIZE - DATA_BASE

#     dut._log.info(f"[SETUP] PBM pixel data = {len(pbm_raw)} bytes")
#     dut._log.info(f"[SETUP] Data region: 0x{DATA_BASE:03x} - 0x{SRAM_SIZE:03x} "
#                   f"({data_len} bytes/tile)")

#     if len(pbm_raw) > data_len:
#         dut._log.warning(
#             f"[SETUP] PBM ({len(pbm_raw)} B) > data region ({data_len} B) "
#             f"-- verifying first {data_len} bytes only"
#         )
#         pbm_raw = pbm_raw[:data_len]

#     await reset_and_boot(dut, firmware)

#     total_mismatches = 0
#     for r in range(GRID_ROWS):
#         for c in range(GRID_COLS):
#             raw        = read_tile_sram(dut, r, c)
#             data_bytes = raw[DATA_BASE : DATA_BASE + len(pbm_raw)]

#             dump_hex(dut, r, c, data_bytes, label="DATA/PBM")
#             total_mismatches += compare_region(
#                 dut, r, c, data_bytes, list(pbm_raw),
#                 offset=DATA_BASE, label="PBM CHECK"
#             )

#     dut._log.info("=" * 60)
#     if total_mismatches == 0:
#         dut._log.info("PHASE 2 PASSED -- PBM stored correctly in all tiles")
#     else:
#         dut._log.error(f"PHASE 2 FAILED -- {total_mismatches} total mismatches")

#     assert total_mismatches == 0, \
#         f"PHASE 2: {total_mismatches} PBM mismatches across all tiles"





























# """
# test_boot_and_dump.py
# =====================
# Two-phase testbench for the 3x3 mesh (dut = system_top).

#   PHASE 1 - Instruction load verification
#     * Drive the SPI flash responder with firmware.bin
#     * Let the boot_controller run its FSM (IDLE->CMD->ADDR->READ->WRITE x1024->DONE)
#     * Once cpu_rst_n goes HIGH, dump every tile's SRAM and verify vs firmware.bin

#   PHASE 2 - PBM image data load
#     * Same boot flow, firmware.bin must embed PBM pixel data at DATA_BASE
#     * After boot, dump the data region and compare against test3_paul.pbm

# Hierarchy (dut = system_top):
#     dut.noc_mesh                                         (mesh_3x3)
#     dut.noc_mesh.boot_inst                               (boot_controller)
#     dut.noc_mesh.rows[r].cols[c].tile_inst.sram_inst     (GF180 SRAM)
# """

# import os
# import cocotb
# from cocotb.clock import Clock
# from cocotb.triggers import Timer, RisingEdge, FallingEdge

# # ---------------------------------------------------------------------------
# # Configuration
# # ---------------------------------------------------------------------------
# FIRMWARE_PATH = os.path.join(os.path.dirname(__file__), "firmware.bin")
# PBM_PATH      = os.path.join(os.path.dirname(__file__), "test3_paul.pbm")

# SRAM_SIZE     = 1024   # bytes per tile
# CLK_PERIOD_NS = 60     # >= GF180 SRAM 55.6 ns Tcyc minimum
# RESET_CYCLES  = 20

# # link.ld puts .text + .data + .rodata ALL in one flat .text section
# # starting at 0x000. There is no separate data offset -- everything is
# # one contiguous blob. Phase 1 verifies the whole 1024-byte firmware.
# # Phase 2 auto-detects where the PBM pixel data starts inside the binary.
# INSTR_BASE    = 0x000   # flat binary starts here
# DATA_BASE     = None    # auto-detected by find_pbm_offset() at runtime

# GRID_ROWS     = 3
# GRID_COLS     = 3


# def find_pbm_offset(firmware: bytes, pbm_raw: bytes, search_start: int = 0x040) -> int:
#     """
#     Scan firmware.bin to find where the PBM pixel data was linked in.

#     Strategy:
#       - Try matching the first 8 bytes of pbm_raw against every aligned
#         4-byte offset in firmware from search_start onwards.
#       - Returns the byte offset of the match, or raises if not found.

#     If your PBM data is a C array (e.g. uint8_t image[] = {...}), the
#     bytes in firmware.bin will match the packed pixel bytes exactly.
#     """
#     needle = pbm_raw[:8]
#     for offset in range(search_start, len(firmware) - len(needle), 4):
#         if firmware[offset : offset + len(needle)] == needle:
#             # Verify more bytes to reduce false positives
#             check_len = min(32, len(pbm_raw))
#             if firmware[offset : offset + check_len] == pbm_raw[:check_len]:
#                 cocotb.log.info(
#                     f"[PBM] Auto-detected PBM data at firmware offset "
#                     f"0x{offset:03x} ({offset})"
#                 )
#                 return offset
#     raise RuntimeError(
#         f"[PBM] Could not find PBM pixel data in firmware.bin!\n"
#         f"  First 8 PBM bytes: {pbm_raw[:8].hex()}\n"
#         f"  Make sure the PBM data is compiled into firmware as a C array "
#         f"in .rodata or .data, e.g.:\n"
#         f"    const uint8_t image_data[] = {{ 0x{pbm_raw[0]:02x}, ... }};\n"
#         f"  Then rebuild firmware.bin and retry."
#     )

# # ---------------------------------------------------------------------------
# # File loaders
# # ---------------------------------------------------------------------------

# def load_bin(path, pad_to=SRAM_SIZE):
#     """Read firmware binary, zero-pad to pad_to bytes."""
#     try:
#         with open(path, "rb") as f:
#             data = f.read()
#         if len(data) > pad_to:
#             cocotb.log.warning(f"[LOAD] {path}: {len(data)} B > {pad_to} B, truncating")
#             data = data[:pad_to]
#         return data + bytes(pad_to - len(data))
#     except FileNotFoundError:
#         cocotb.log.error(f"[LOAD] Not found: {path} -- using NOP fallback")
#         nop = bytes([0x13, 0x00, 0x00, 0x00])
#         return (nop * (pad_to // 4))[:pad_to]


# def pbm_to_bytes(path):
#     """
#     Parse P1 (ASCII) or P4 (binary) PBM and return packed bits, MSB-first,
#     each row padded to a byte boundary.

#     Reads the ENTIRE file first then tokenizes -- this handles P1 files
#     where pixels may be on the same line as the dimensions or split
#     across any number of lines.
#     """
#     with open(path, "rb") as f:
#         raw = f.read()

#     # Tokenize whole file, dropping comment content
#     tokens = []
#     for line in raw.decode("ascii", errors="replace").splitlines():
#         line = line.split("#")[0]
#         tokens.extend(line.split())

#     assert tokens, "PBM file is empty"
#     magic = tokens[0]
#     assert magic in ("P1", "P4"), f"Unsupported PBM type: {magic}"

#     w, h      = int(tokens[1]), int(tokens[2])
#     row_bytes = (w + 7) // 8

#     if magic == "P4":
#         # Binary: pixel data starts after the second newline in the raw bytes
#         nl1 = raw.index(b"\n")
#         nl2 = raw.index(b"\n", nl1 + 1)
#         pixel_bytes = raw[nl2 + 1 :]
#         cocotb.log.info(f"[PBM] P4 {w}x{h} -> {row_bytes * h} packed bytes")
#         return pixel_bytes[: row_bytes * h]

#     # P1 -- all tokens after magic/w/h are pixel values
#     # Expand each token char-by-char -- handles both spaced ("0 1 0")
#     # and unspaced ("010") P1 pixel layouts
#     bits = [int(ch) for t in tokens[3:] for ch in t if ch in ("0", "1")]
#     assert len(bits) == w * h, \
#         f"[PBM] P1 expected {w * h} pixels, got {len(bits)}"

#     result = bytearray()
#     for row_idx in range(h):
#         row_bits = bits[row_idx * w : row_idx * w + w]
#         row_bits += [0] * (row_bytes * 8 - w)
#         for byte_start in range(0, row_bytes * 8, 8):
#             val = 0
#             for bp in range(8):
#                 val = (val << 1) | row_bits[byte_start + bp]
#             result.append(val)

#     cocotb.log.info(f"[PBM] P1 {w}x{h} -> {len(result)} packed bytes")
#     return bytes(result)


# # ---------------------------------------------------------------------------
# # SPI flash responder
# # ---------------------------------------------------------------------------

# async def spi_flash_responder(dut, firmware: bytes):
#     """
#     Mimics SPI NOR READ (cmd 0x03) by monitoring boot_controller's OWN
#     internal flash signals directly inside noc_mesh.

#     WHY: system_top has two drivers on flash_clk/flash_csb/flash_mosi --
#     both topmod (flash_controller) and noc_mesh.boot_controller drive them.
#     These fight on the top-level wires making edge detection unreliable.

#     Fix: probe noc_mesh.boot_inst.flash_cs_n and boot_inst.flash_clk
#     directly -- clean signals driven only by boot_controller.
#     We still write dut.flash_miso (top-level input) since that feeds
#     straight through to boot_controller.flash_miso.
#     """
#     boot = dut.noc_mesh.boot_inst   # shortcut to boot_controller signals
#     dut.flash_miso.value = 0

#     while True:
#         # Wait for boot_controller's own CS# (active LOW)
#         await FallingEdge(boot.flash_cs_n)
#         dut._log.info("[SPI] boot_ctrl CS asserted")

#         # Sink 32 bits of header on boot_ctrl's own clock
#         for _ in range(32):
#             await RisingEdge(boot.flash_clk)
#             if boot.flash_cs_n.value == 1:
#                 break
#         if boot.flash_cs_n.value == 1:
#             dut._log.warning("[SPI] CS deasserted during header")
#             continue

#         dut._log.info("[SPI] Streaming firmware...")

#         aborted = False
#         for byte_idx, byte_val in enumerate(firmware):
#             for bit in range(7, -1, -1):
#                 # Drive MISO on falling edge -- stable for boot_ctrl rising-edge sample
#                 await FallingEdge(boot.flash_clk)
#                 dut.flash_miso.value = (byte_val >> bit) & 1
#                 if boot.flash_cs_n.value == 1:
#                     dut._log.info(f"[SPI] CS deasserted after byte {byte_idx}")
#                     aborted = True
#                     break
#             if aborted:
#                 break

#         if not aborted:
#             await RisingEdge(boot.flash_cs_n)
#         dut._log.info("[SPI] Transaction done")


# # ---------------------------------------------------------------------------
# # Boot wait helper
# # ---------------------------------------------------------------------------

# async def wait_for_boot(dut, timeout_cycles=200_000):
#     """Wait for boot_controller DONE state (cpu_reset_n HIGH)."""
#     for cycle in range(timeout_cycles):
#         await RisingEdge(dut.clk)
#         try:
#             done = dut.noc_mesh.boot_inst.cpu_reset_n.value == 1
#         except Exception:
#             done = False
#         if done:
#             dut._log.info(f"[BOOT] Done at cycle {cycle} "
#                           f"({cycle * CLK_PERIOD_NS / 1000:.1f} us)")
#             return True
#         if cycle % 10_000 == 0 and cycle > 0:
#             dut._log.info(f"[BOOT] Still booting... cycle {cycle}")
#     dut._log.error("[BOOT] TIMEOUT -- cpu_reset_n never went HIGH")
#     return False


# # ---------------------------------------------------------------------------
# # SRAM read / hex dump / compare
# # ---------------------------------------------------------------------------

# def read_tile_sram(dut, row, col, start=0, length=SRAM_SIZE):
#     """
#     Read 'length' bytes from tile (row, col) SRAM starting at byte 'start'.
#     Path: dut.noc_mesh.rows[r].cols[c].tile_inst.sram_inst.mem[addr]
#     """
#     mem = dut.noc_mesh.rows[row].cols[col].tile_inst.sram_inst.mem
#     result = []
#     for addr in range(start, start + length):
#         try:
#             result.append(int(mem[addr].value))
#         except Exception as e:
#             dut._log.warning(f"[SRAM] ({row},{col}) 0x{addr:03x} read error: {e}")
#             result.append(0xFF)
#     return result


# def dump_hex(dut, row, col, data, label=""):
#     tag = f"[SRAM ({row},{col}){' ' + label if label else ''}]"
#     dut._log.info(f"{tag} -- {len(data)} bytes")
#     for base in range(0, len(data), 16):
#         chunk     = data[base : base + 16]
#         hex_str   = " ".join(f"{b:02x}" for b in chunk)
#         ascii_str = "".join(chr(b) if 32 <= b < 127 else "." for b in chunk)
#         dut._log.info(f"  0x{base:03x}: {hex_str:<47}  |{ascii_str}|")


# def compare_region(dut, row, col, actual, expected, offset=0, label=""):
#     """Compare actual list vs expected bytes. Returns mismatch count."""
#     mismatches = 0
#     tag = f"[CMP ({row},{col}){' ' + label if label else ''}]"
#     for i, (a, e) in enumerate(zip(actual, expected)):
#         if a != e:
#             if mismatches < 16:
#                 dut._log.error(
#                     f"{tag} MISMATCH @ 0x{offset + i:03x}: "
#                     f"got 0x{a:02x}, expected 0x{e:02x}"
#                 )
#             mismatches += 1
#     if mismatches == 0:
#         dut._log.info(f"{tag} All {len(expected)} bytes match!")
#     else:
#         dut._log.error(f"{tag} {mismatches} mismatches in {len(expected)} bytes")
#     return mismatches


# # ---------------------------------------------------------------------------
# # Shared reset + boot sequence (used by both tests)
# # ---------------------------------------------------------------------------

# async def reset_and_boot(dut, firmware):
#     """Drive reset, launch SPI responder, wait for boot to complete."""
#     cocotb.start_soon(Clock(dut.clk, CLK_PERIOD_NS, unit="ns").start())
#     dut.reset.value      = 1
#     dut.flash_miso.value = 0
#     dut.bypass_en.value  = 0
#     dut.host_mosi.value  = 0
#     await Timer(CLK_PERIOD_NS * RESET_CYCLES, unit="ns")
#     dut.reset.value = 0

#     # Start SPI responder after reset is released so boot_controller
#     # sees a clean CS# edge transition
#     cocotb.start_soon(spi_flash_responder(dut, firmware))

#     ok = await wait_for_boot(dut)
#     assert ok, "Boot controller timed out -- check SPI responder and clock"

#     # Extra settling time so the last SRAM write pulse fully propagates
#     await Timer(CLK_PERIOD_NS * 20, unit="ns")


# # ===========================================================================
# # TEST 1 -- Verify instruction region
# # ===========================================================================
# @cocotb.test()
# async def test_phase1_instruction_load(dut):
#     """
#     Boot all 9 cores via SPI, then verify the ENTIRE 1024-byte SRAM
#     in every tile matches firmware.bin byte-for-byte.

#     link.ld note: .text, .rodata, and .data are all in one flat section
#     from 0x000. There is no separate data boundary -- we verify everything.
#     """
#     firmware = load_bin(FIRMWARE_PATH)

#     # Find last non-zero byte so we know how much firmware is actually used
#     last_nz = max((i for i, b in enumerate(firmware) if b != 0), default=0)
#     used    = last_nz + 1

#     dut._log.info(f"[SETUP] firmware.bin = {len(firmware)} bytes")
#     dut._log.info(f"[SETUP] Used region:  0x000 - 0x{last_nz:03x} ({used} bytes)")
#     dut._log.info(f"[SETUP] Flat layout: .text + .data + .rodata all at 0x000")

#     await reset_and_boot(dut, firmware)

#     total_mismatches = 0
#     for r in range(GRID_ROWS):
#         for c in range(GRID_COLS):
#             raw = read_tile_sram(dut, r, c)

#             # Dump only the used region (skip trailing zeros for readability)
#             dump_hex(dut, r, c, raw[:used], label="FULL SRAM (used region)")

#             # Verify entire 1024 bytes
#             total_mismatches += compare_region(
#                 dut, r, c, raw, list(firmware),
#                 offset=0x000, label="FULL CHECK"
#             )

#     dut._log.info("=" * 60)
#     if total_mismatches == 0:
#         dut._log.info("PHASE 1 PASSED -- All tiles loaded correctly")
#     else:
#         dut._log.error(f"PHASE 1 FAILED -- {total_mismatches} total mismatches")

#     assert total_mismatches == 0, \
#         f"PHASE 1: {total_mismatches} SRAM mismatches across all tiles"


# # ===========================================================================
# # TEST 2 -- Verify PBM image in data region
# # ===========================================================================
# @cocotb.test()
# async def test_phase2_pbm_data_load(dut):
#     """
#     Boot all 9 cores, then verify the PBM pixel data is present in every
#     tile's SRAM at the correct offset.

#     link.ld note: there is no fixed data section offset -- .text, .rodata,
#     and .data are all flat from 0x000. The PBM pixel data offset is
#     auto-detected by scanning firmware.bin for the pixel byte pattern.

#     Prerequisite: your C firmware must include the PBM pixel data as a
#     const array so the linker bakes it into firmware.bin, e.g.:
#         const uint8_t image_data[] = { 0xXX, 0xYY, ... };
#     Run 'make firmware' after adding this, then run this test.
#     """
#     firmware = load_bin(FIRMWARE_PATH)
#     pbm_raw  = pbm_to_bytes(PBM_PATH)

#     dut._log.info(f"[SETUP] firmware.bin   = {len(firmware)} bytes")
#     dut._log.info(f"[SETUP] PBM pixel data = {len(pbm_raw)} bytes "
#                   f"({len(pbm_raw) * 8} pixels packed)")

#     # Auto-detect where the PBM data was linked into the flat binary
#     pbm_offset = find_pbm_offset(firmware, pbm_raw)
#     dut._log.info(f"[SETUP] PBM data found at firmware offset 0x{pbm_offset:03x}")

#     if pbm_offset + len(pbm_raw) > SRAM_SIZE:
#         raise RuntimeError(
#             f"PBM data at 0x{pbm_offset:03x} + {len(pbm_raw)} bytes "
#             f"exceeds SRAM size ({SRAM_SIZE})"
#         )

#     await reset_and_boot(dut, firmware)

#     total_mismatches = 0
#     for r in range(GRID_ROWS):
#         for c in range(GRID_COLS):
#             raw        = read_tile_sram(dut, r, c)
#             data_bytes = raw[pbm_offset : pbm_offset + len(pbm_raw)]

#             dump_hex(dut, r, c, data_bytes, label=f"PBM @ 0x{pbm_offset:03x}")
#             total_mismatches += compare_region(
#                 dut, r, c, data_bytes, list(pbm_raw),
#                 offset=pbm_offset, label="PBM CHECK"
#             )

#     dut._log.info("=" * 60)
#     if total_mismatches == 0:
#         dut._log.info("PHASE 2 PASSED -- PBM stored correctly in all tiles")
#     else:
#         dut._log.error(f"PHASE 2 FAILED -- {total_mismatches} total mismatches")

#     assert total_mismatches == 0, \
#         f"PHASE 2: {total_mismatches} PBM mismatches across all tiles"


# # ===========================================================================
# # TEST 3 -- Direct SRAM write: inject image slices without CPU involvement
# # ===========================================================================
# #
# # KEY INSIGHT: Verilator gives us direct read/write access to any signal
# # in the hierarchy, including the SRAM memory array itself.
# # We don't need the CPU, NoC, or gateway to load image data.
# # We just write directly:
# #   dut.noc_mesh.rows[r].cols[c].tile_inst.sram_inst.mem[addr].value = val
# #
# # This works at ANY point in simulation -- before boot, after boot, mid-GoL.
# # No firmware change needed. No RISC-V compiler needed.
# #
# # The only thing we need to know is WHERE current_grid lives in SRAM.
# # Since current_grid is all-zeros in the new firmware.bin, we can't scan
# # for it by value. Two ways to find it:
# #
# #   A) Run Phase 1, look at the hex dump, find the first all-zero 100-byte
# #      region that starts right after the instruction bytes end.
# #      Set GRID_OFFSET manually below.
# #
# #   B) Use the ELF symbol table (if you have the toolchain):
# #      riscv-elf-nm firmware.elf | grep current_grid
# #      This prints the exact address.
# #
# # For now the test auto-detects it by:
# #   1. Running boot (Phase 1 flow)
# #   2. Writing a known test pattern to tile(0,0) SRAM at various offsets
# #   3. Reading it back to confirm the write works
# #   4. Then writing all 9 slices

# TILE_SIZE   = 10
# GRID_OFFSET = 0x244  # confirmed: current_grid[0] at 0x244 (blinker seed [45,55,65]=1 at 0x271,0x27b,0x285)


# def slice_pbm_for_tiles(pbm_path):
#     """
#     Parse 30x30 PBM, return { (tile_row, tile_col): [100 pixel ints] }
#     Tile (tr,tc) owns image rows [tr*10..(tr+1)*10), cols [tc*10..(tc+1)*10).
#     """
#     with open(pbm_path, "rb") as f:
#         raw = f.read()
#     tokens = []
#     for line in raw.decode("ascii", errors="replace").splitlines():
#         tokens.extend(line.split("#")[0].split())
#     w, h = int(tokens[1]), int(tokens[2])
#     bits = [int(ch) for t in tokens[3:] for ch in t if ch in ("0","1")]
#     assert len(bits) == w * h
#     pixels = [[bits[r*w+c] for c in range(w)] for r in range(h)]
#     slices = {}
#     for tr in range(GRID_ROWS):
#         for tc in range(GRID_COLS):
#             tile_px = []
#             for row in range(tr*TILE_SIZE, (tr+1)*TILE_SIZE):
#                 for col in range(tc*TILE_SIZE, (tc+1)*TILE_SIZE):
#                     tile_px.append(pixels[row][col])
#             slices[(tr,tc)] = tile_px
#     return slices


# def write_tile_sram(dut, row, col, offset, data):
#     """
#     Directly write a list of byte values into tile (row,col) SRAM
#     starting at byte address 'offset'.
#     Works at any point in simulation -- no CPU needed.
#     """
#     mem = dut.noc_mesh.rows[row].cols[col].tile_inst.sram_inst.mem
#     for i, val in enumerate(data):
#         mem[offset + i].value = int(val)


# def find_grid_offset_from_sram(dut, row, col, n_pixels=100):
#     """
#     Auto-detect current_grid offset by looking at what the CPU
#     has actually written. After boot + a few GoL cycles, current_grid
#     will have been modified by the CPU -- it won't be identical to
#     firmware.bin anymore. But on first boot with all-zero init,
#     we look for where the .data section starts by finding the boundary
#     where instruction bytes end and data bytes begin.

#     Heuristic: instructions are 32-bit aligned RISC-V words (rarely 0x00).
#     The .data section for current_grid starts as a run of zeros.
#     We look for the first 100-byte aligned region that is all zeros
#     AND comes after the main code block.
#     """
#     raw = read_tile_sram(dut, row, col)

#     # Find the 'ret' instruction (0x67 0x80 0x00 0x00) which is the last
#     # instruction before .data begins. current_grid starts at ret_addr+4.
#     # Scan backwards from end of non-zero region for the ret opcode.
#     last_nz = max((i for i, b in enumerate(raw) if b != 0), default=0)

#     # Scan forward from 0x100 for 'ret' = 67 80 00 00 (RISC-V jalr x0,x1,0)
#     candidate = None
#     for i in range(0x100, last_nz, 4):
#         if raw[i:i+4] == bytes([0x67, 0x80, 0x00, 0x00]):
#             candidate = i + 4  # .data starts right after ret
#     if candidate is None:
#         candidate = (last_nz - 100) & ~3  # fallback: 100 bytes before last nz

#     dut._log.info(
#         f"[GRID_DETECT] Last non-zero byte at 0x{last_nz:03x}, "
#         f"current_grid candidate: 0x{candidate:03x}"
#     )
#     return candidate


# @cocotb.test()
# async def test_phase3_direct_sram_write(dut):
#     """
#     Load image slices into all 9 tiles by writing DIRECTLY to SRAM.
#     No CPU, no NoC, no gateway, no compiler needed.

#     Flow:
#       1. Boot (so SRAM has valid firmware and CPU is running)
#       2. While CPU runs GoL, directly overwrite current_grid in each tile
#       3. Verify the write by reading back
#       4. CPU will automatically use the new grid on its next GoL iteration

#     This is the correct way to inject image data in simulation --
#     it bypasses all the CPU/NoC complexity and works at any time.
#     """
#     firmware = load_bin(FIRMWARE_PATH)
#     slices   = slice_pbm_for_tiles(PBM_PATH)

#     dut._log.info("[P3] Sliced 30x30 PBM into 9 x 10x10 tiles:")
#     for tr in range(GRID_ROWS):
#         for tc in range(GRID_COLS):
#             tid = (tr<<2)|tc
#             nz  = sum(slices[(tr,tc)])
#             dut._log.info(f"  Tile ({tr},{tc}) id=0x{tid:x}  {nz:3d} non-zero pixels")

#     # ── 1. Boot ───────────────────────────────────────────────────────────────
#     await reset_and_boot(dut, firmware)
#     dut._log.info("[P3] Boot complete.")

#     # ── 2. Find current_grid offset ───────────────────────────────────────────
#     grid_off = GRID_OFFSET
#     if grid_off is None:
#         grid_off = find_grid_offset_from_sram(dut, 0, 0)
#         dut._log.info(
#             f"[P3] Auto-detected grid offset: 0x{grid_off:03x}. "
#             f"Set GRID_OFFSET = 0x{grid_off:03x} at top of test to skip detection."
#         )

#     # Sanity check: grid must fit in SRAM
#     assert grid_off + TILE_SIZE * TILE_SIZE <= SRAM_SIZE, (
#         f"Grid offset 0x{grid_off:03x} + 100 bytes exceeds SRAM! "
#         f"Check GRID_OFFSET value."
#     )

#     # ── 3. Write each tile's image slice directly into its SRAM ───────────────
#     dut._log.info(f"[P3] Writing image slices to current_grid @ 0x{grid_off:03x}...")
#     for tr in range(GRID_ROWS):
#         for tc in range(GRID_COLS):
#             pixels = slices[(tr,tc)]
#             write_tile_sram(dut, tr, tc, grid_off, pixels)

#     # One clock cycle for writes to settle
#     await RisingEdge(dut.clk)

#     # ── 4. Verify by reading back ─────────────────────────────────────────────
#     dut._log.info("[P3] Verifying SRAM contents...")
#     total_mismatches = 0
#     for tr in range(GRID_ROWS):
#         for tc in range(GRID_COLS):
#             raw    = read_tile_sram(dut, tr, tc)
#             actual = raw[grid_off : grid_off + TILE_SIZE * TILE_SIZE]
#             expected = slices[(tr,tc)]

#             dump_hex(dut, tr, tc, actual,
#                      label=f"current_grid @ 0x{grid_off:03x}")
#             total_mismatches += compare_region(
#                 dut, tr, tc, actual, expected,
#                 offset=grid_off, label="SLICE CHECK"
#             )

#     dut._log.info("=" * 60)
#     if total_mismatches == 0:
#         dut._log.info(
#             "PHASE 3 PASSED -- All 9 tiles have correct image slices! "
#             "CPU will use this data on next GoL iteration."
#         )
#     else:
#         dut._log.error(f"PHASE 3 FAILED -- {total_mismatches} total mismatches")

#     assert total_mismatches == 0, \
#         f"PHASE 3: {total_mismatches} slice mismatches across all tiles"


# # ===========================================================================
# # TEST 4 -- Full 1024-byte SRAM dump for all 9 tiles (matches old sram_dump format)
# # ===========================================================================

# @cocotb.test()
# async def test_phase4_full_sram_dump(dut):
#     """
#     Boot all 9 tiles, then print the complete 1024-byte SRAM dump for every
#     tile in the same format as the original sram_dump.py output:

#         ======== TILE (r,c) SRAM DUMP ========
#         0x000: b7 07 00 40 83 a7 07 02 ...
#         ...

#     This gives you the full picture -- instructions, data, and zeros --
#     exactly matching the reference image.
#     """
#     firmware = load_bin(FIRMWARE_PATH)

#     await reset_and_boot(dut, firmware)
#     dut._log.info("Boot complete. Starting full SRAM dump...")

#     for r in range(GRID_ROWS):
#         for c in range(GRID_COLS):
#             dut._log.info(f"======== TILE ({r},{c}) SRAM DUMP ========")
#             raw = read_tile_sram(dut, r, c, start=0, length=SRAM_SIZE)

#             for addr in range(0, SRAM_SIZE, 16):
#                 chunk    = raw[addr : addr + 16]
#                 hex_str  = " ".join(f"{b:02x}" for b in chunk)
#                 dut._log.info(f"0x{addr:03x}: {hex_str}")


# # ===========================================================================
# # TEST 5 -- Combined: boot + write image slices + full SRAM dump
# # ===========================================================================

# @cocotb.test()
# async def test_phase5_image_then_dump(dut):
#     """
#     Single simulation run that does everything:
#       1. Boot all 9 tiles via SPI
#       2. Write each tile's 10x10 image slice into current_grid @ 0x244
#       3. Print full 1024-byte SRAM dump for all 9 tiles

#     This is what you want to see: instructions + image data + zeros,
#     all in one dump, matching the reference format.
#     """
#     GRID_OFFSET = 0x244

#     firmware = load_bin(FIRMWARE_PATH)
#     slices   = slice_pbm_for_tiles(PBM_PATH)

#     # ── 1. Boot ───────────────────────────────────────────────────────────────
#     await reset_and_boot(dut, firmware)
#     dut._log.info("[P5] Boot complete. Writing image slices...")

#     # ── 2. Write image slices directly into current_grid ─────────────────────
#     for tr in range(GRID_ROWS):
#         for tc in range(GRID_COLS):
#             write_tile_sram(dut, tr, tc, GRID_OFFSET, slices[(tr, tc)])
#     await RisingEdge(dut.clk)
#     dut._log.info(f"[P5] Image slices written to current_grid @ 0x{GRID_OFFSET:03x}")


#     # ── 3. Full 1024-byte dump ────────────────────────────────────────────────
#     for r in range(GRID_ROWS):
#         for c in range(GRID_COLS):
#             dut._log.info(f"======== TILE ({r},{c}) SRAM DUMP ========")
#             raw = read_tile_sram(dut, r, c, start=0, length=SRAM_SIZE)
#             for addr in range(0, SRAM_SIZE, 16):
#                 chunk   = raw[addr : addr + 16]
#                 hex_str = " ".join(f"{b:02x}" for b in chunk)
#                 dut._log.info(f"0x{addr:03x}: {hex_str}")
                


# # ===========================================================================
# # TEST 6 -- Boot + inject PBM image + run N GoL iterations + dump
# # ===========================================================================

# # ===========================================================================
# # TEST 6 -- Boot + inject blinker + run N GoL iterations + dump
# # ===========================================================================

# GOL_ITERATIONS = 3

# async def wait_for_grid_change(dut, tr, tc, previous_grid, timeout_cycles=20_000_000):
#     """Keep polling until current_grid changes or we timeout."""
#     for cycle in range(0, timeout_cycles, 20_000):
#         await Timer(CLK_PERIOD_NS * 20_000, unit="ns")
#         raw = read_tile_sram(dut, tr, tc)
#         current = list(raw[GRID_OFFSET : GRID_OFFSET + TILE_SIZE * TILE_SIZE])
#         if current != list(previous_grid):
#             dut._log.info(f"[P6] Grid changed after ~{cycle} cycles!")
#             return current
#     dut._log.warning(f"[P6] TIMEOUT -- grid never changed!")
#     return list(previous_grid)

# def _print_grid(dut, tr, tc, grid, gen):
#     """Print a 10x10 tile grid as ASCII art and hex side by side."""
#     dut._log.info(f"  Tile ({tr},{tc}) gen={gen}:")
#     for row in range(TILE_SIZE):
#         row_pixels = grid[row * TILE_SIZE : (row + 1) * TILE_SIZE]
#         ascii_art  = " ".join("█" if p else "." for p in row_pixels)
#         hex_str    = " ".join(f"{p:02x}" for p in row_pixels)
#         dut._log.info(f"    row{row:02d}  {ascii_art}   [{hex_str}]")

# def slice_blinker_for_tiles():
#     """Put a horizontal blinker in center of tile (1,1), zeros everywhere else."""
#     slices = {}
#     for tr in range(GRID_ROWS):
#         for tc in range(GRID_COLS):
#             pixels = [0] * (TILE_SIZE * TILE_SIZE)
#             if tr == 1 and tc == 1:
#                 center = TILE_SIZE * (TILE_SIZE // 2)
#                 pixels[center + 3] = 1
#                 pixels[center + 4] = 1
#                 pixels[center + 5] = 1
#             slices[(tr, tc)] = pixels
#     return slices

# @cocotb.test()
# async def test_phase6_gol_evolution(dut):
#     firmware = load_bin(FIRMWARE_PATH)
#     slices   = slice_blinker_for_tiles()

#     await reset_and_boot(dut, firmware)
#     dut._log.info("[P6] Boot complete.")

#     dut._log.info(f"[P6] Injecting blinker into current_grid @ 0x{GRID_OFFSET:03x}...")
#     for tr in range(GRID_ROWS):
#         for tc in range(GRID_COLS):
#             write_tile_sram(dut, tr, tc, GRID_OFFSET, slices[(tr, tc)])
#     await RisingEdge(dut.clk)
#     dut._log.info("[P6] Blinker injected. Starting GoL iterations...")

#     dut._log.info("=" * 60)
#     dut._log.info("[P6] GENERATION 0 (injected blinker)")
#     dut._log.info("=" * 60)
#     prev_raw  = read_tile_sram(dut, 1, 1)
#     prev_grid = list(prev_raw[GRID_OFFSET : GRID_OFFSET + TILE_SIZE * TILE_SIZE])
#     for tr in range(GRID_ROWS):
#         for tc in range(GRID_COLS):
#             raw  = read_tile_sram(dut, tr, tc)
#             grid = raw[GRID_OFFSET : GRID_OFFSET + TILE_SIZE * TILE_SIZE]
#             _print_grid(dut, tr, tc, grid, gen=0)

#     for gen in range(1, GOL_ITERATIONS + 1):
#         dut._log.info(f"[P6] Waiting for generation {gen} to complete...")
#         prev_grid = await wait_for_grid_change(dut, 1, 1, prev_grid)

#         dut._log.info("=" * 60)
#         dut._log.info(f"[P6] GENERATION {gen}")
#         dut._log.info("=" * 60)
#         for tr in range(GRID_ROWS):
#             for tc in range(GRID_COLS):
#                 raw  = read_tile_sram(dut, tr, tc)
#                 grid = raw[GRID_OFFSET : GRID_OFFSET + TILE_SIZE * TILE_SIZE]
#                 _print_grid(dut, tr, tc, grid, gen=gen)

#     dut._log.info("[P6] DONE -- GoL evolution complete!")










"""
test_boot_and_dump.py
=====================
Testbench for the 3x3 NoC mesh (dut = system_top).

Hierarchy:
    dut.noc_mesh.rows[r].cols[c].tile_inst.sram_inst     (GF180 SRAM)
    dut.noc_mesh.rows[r].cols[c].tile_inst.router_inst   (mesh_router)

Firmware signals:
    noc_send(0xF, 0xDEADBEEF) after each GoL generation
    inject_flit: {valid[33], dest[32:29]=0xF, payload[28:0]=0x1EADBEEF}

Router fix required in mesh_router.v:
    output wire local_wb_ack,
    assign local_wb_ack = local_wb_stb;
"""

import os
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Timer, RisingEdge, FallingEdge

FIRMWARE_PATH = os.path.join(os.path.dirname(__file__), "firmware.bin")
PBM_PATH      = os.path.join(os.path.dirname(__file__), "test3_paul.pbm")

SRAM_SIZE     = 1024
CLK_PERIOD_NS = 60
RESET_CYCLES  = 20
GRID_ROWS     = 3
GRID_COLS     = 3
TILE_SIZE     = 10
GRID_OFFSET   = 0x060
GOL_ITERATIONS = 3

GEN_DONE_DEST    = 0xF
GEN_DONE_PAYLOAD = 0xDEADBEEF & 0x1FFFFFFF   # 0x1EADBEEF
GEN_TIMEOUT      = 3_000_000


# ── Data helpers ─────────────────────────────────────────────────────────────

def load_bin(path, pad_to=SRAM_SIZE):
    try:
        with open(path, "rb") as f:
            data = f.read()
        if len(data) > pad_to:
            data = data[:pad_to]
        return data + bytes(pad_to - len(data))
    except FileNotFoundError:
        nop = bytes([0x13, 0x00, 0x00, 0x00])
        return (nop * (pad_to // 4))[:pad_to]


def slice_pbm_for_tiles(pbm_path):
    with open(pbm_path, "rb") as f:
        raw = f.read()
    tokens = []
    for line in raw.decode("ascii", errors="replace").splitlines():
        tokens.extend(line.split("#")[0].split())
    w, h = int(tokens[1]), int(tokens[2])
    bits = [int(ch) for t in tokens[3:] for ch in t if ch in ("0", "1")]
    assert len(bits) == w * h
    pixels = [[bits[r * w + c] for c in range(w)] for r in range(h)]
    slices = {}
    for tr in range(GRID_ROWS):
        for tc in range(GRID_COLS):
            tile_px = []
            for row in range(tr * TILE_SIZE, (tr + 1) * TILE_SIZE):
                for col in range(tc * TILE_SIZE, (tc + 1) * TILE_SIZE):
                    tile_px.append(pixels[row][col])
            slices[(tr, tc)] = tile_px
    return slices


def slice_blinker_for_tiles():
    """Vertical blinker [45,55,65] in tile(0,0), zeros elsewhere."""
    slices = {}
    for tr in range(GRID_ROWS):
        for tc in range(GRID_COLS):
            s = [0] * (TILE_SIZE * TILE_SIZE)
            if tr == 0 and tc == 0:
                s[45] = s[55] = s[65] = 1
            slices[(tr, tc)] = s
    return slices


def read_tile_sram(dut, row, col, start=0, length=SRAM_SIZE):
    mem = dut.noc_mesh.rows[row].cols[col].tile_inst.sram_inst.mem
    result = []
    for addr in range(start, start + length):
        try:
            result.append(int(mem[addr].value))
        except Exception:
            result.append(0xFF)
    return result


def write_tile_sram(dut, row, col, offset, data):
    mem = dut.noc_mesh.rows[row].cols[col].tile_inst.sram_inst.mem
    for i, val in enumerate(data):
        mem[offset + i].value = int(val)


def print_grid(dut, tr, tc, grid, gen=None):
    label = f"Tile({tr},{tc})" + (f" Gen{gen}" if gen is not None else "")
    live  = sum(grid)
    dut._log.info(f"  [{label}] {live} live cells")
    for row in range(TILE_SIZE):
        row_str = "".join("X" if grid[row * TILE_SIZE + col] else "." for col in range(TILE_SIZE))
        dut._log.info(f"    {row_str}")


def gol_step_python(grid_flat):
    nxt = [0] * (TILE_SIZE * TILE_SIZE)
    for y in range(TILE_SIZE):
        for x in range(TILE_SIZE):
            neighbors = sum(
                grid_flat[(y + dy) * TILE_SIZE + (x + dx)]
                for dy in (-1, 0, 1) for dx in (-1, 0, 1)
                if (dx or dy) and 0 <= x + dx < TILE_SIZE and 0 <= y + dy < TILE_SIZE
            )
            idx = y * TILE_SIZE + x
            if grid_flat[idx]:
                nxt[idx] = 1 if neighbors in (2, 3) else 0
            else:
                nxt[idx] = 1 if neighbors == 3 else 0
    return nxt


# ── Boot helpers ─────────────────────────────────────────────────────────────

async def spi_flash_responder(dut, firmware: bytes):
    """Respond to exactly ONE SPI transaction then exit."""
    boot = dut.noc_mesh.boot_inst
    dut.flash_miso.value = 0
    await FallingEdge(boot.flash_cs_n)
    dut._log.info("[SPI] CS asserted")
    for _ in range(32):
        await RisingEdge(boot.flash_clk)
        if boot.flash_cs_n.value == 1:
            return
    dut._log.info("[SPI] Streaming firmware...")
    aborted = False
    for byte_val in firmware:
        for bit in range(7, -1, -1):
            await FallingEdge(boot.flash_clk)
            dut.flash_miso.value = (byte_val >> bit) & 1
            if boot.flash_cs_n.value == 1:
                aborted = True
                break
        if aborted:
            break
    if not aborted:
        await RisingEdge(boot.flash_cs_n)
    dut._log.info("[SPI] Transaction done")


async def wait_for_boot(dut, timeout_cycles=200_000):
    for cycle in range(timeout_cycles):
        await RisingEdge(dut.clk)
        try:
            if dut.noc_mesh.boot_inst.cpu_reset_n.value == 1:
                dut._log.info(f"[BOOT] Done at cycle {cycle} ({cycle * CLK_PERIOD_NS / 1000:.1f} us)")
                return True
        except Exception:
            pass
        if cycle % 10_000 == 0 and cycle > 0:
            dut._log.info(f"[BOOT] Still booting... cycle {cycle}")
    dut._log.error("[BOOT] TIMEOUT")
    return False


async def reset_and_boot(dut, firmware):
    cocotb.start_soon(Clock(dut.clk, CLK_PERIOD_NS, unit="ns").start())
    dut.reset.value      = 1
    dut.flash_miso.value = 0
    dut.bypass_en.value  = 0
    dut.host_mosi.value  = 0
    await Timer(CLK_PERIOD_NS * RESET_CYCLES, unit="ns")
    dut.reset.value = 0
    cocotb.start_soon(spi_flash_responder(dut, firmware))
    ok = await wait_for_boot(dut)
    assert ok, "Boot timed out"
    await Timer(CLK_PERIOD_NS * 20, unit="ns")


async def wait_for_noc_signal(dut, dest, payload_29, timeout_cycles=GEN_TIMEOUT):
    """Watch all 9 tiles for a matching inject_flit."""
    for cycle in range(timeout_cycles):
        await RisingEdge(dut.clk)
        for tr in range(GRID_ROWS):
            for tc in range(GRID_COLS):
                try:
                    raw = int(dut.noc_mesh.rows[tr].cols[tc].tile_inst.router_inst.inject_flit.value)
                    if (raw >> 33) & 1:
                        if ((raw >> 29) & 0xF) == dest and (raw & 0x1FFFFFFF) == payload_29:
                            dut._log.info(f"[NOC] Signal seen from tile({tr},{tc}) at cycle {cycle}")
                            return True
                except Exception:
                    pass
        if cycle % 100_000 == 0 and cycle > 0:
            dut._log.info(f"[NOC] Still waiting... cycle {cycle}")
    return False


async def wait_for_grid_change(dut, tr, tc, prev_grid, timeout_cycles=GEN_TIMEOUT):
    """Poll SRAM until current_grid changes."""
    for cycle in range(timeout_cycles):
        await RisingEdge(dut.clk)
        raw  = read_tile_sram(dut, tr, tc)
        grid = list(raw[GRID_OFFSET: GRID_OFFSET + TILE_SIZE * TILE_SIZE])
        if grid != prev_grid:
            dut._log.info(f"[GRID] Tile({tr},{tc}) changed at cycle {cycle}")
            return grid
        if cycle % 100_000 == 0 and cycle > 0:
            dut._log.info(f"[GRID] Still waiting... cycle {cycle}")
    dut._log.warning(f"[GRID] Tile({tr},{tc}) never changed")
    return prev_grid


# ===========================================================================
# TEST 1 -- Firmware load verification
# ===========================================================================

@cocotb.test()
async def test_phase1_instruction_load(dut):
    """Boot via SPI and verify all 9 tiles have correct firmware in SRAM."""
    firmware = load_bin(FIRMWARE_PATH)
    last_nz  = max((i for i, b in enumerate(firmware) if b != 0), default=0)
    dut._log.info(f"[P1] firmware {len(firmware)} bytes, used 0x000-0x{last_nz:03x}")

    await reset_and_boot(dut, firmware)

    total = 0
    for r in range(GRID_ROWS):
        for c in range(GRID_COLS):
            raw = read_tile_sram(dut, r, c)
            mm  = sum(1 for a, e in zip(raw, firmware) if a != e)
            dut._log.info(f"  Tile({r},{c}): {'OK' if mm == 0 else f'{mm} mismatches'}")
            total += mm

    assert total == 0, f"PHASE 1 FAILED -- {total} mismatches"
    dut._log.info("PHASE 1 PASSED")


# ===========================================================================
# TEST 3 -- Image injection and readback
# ===========================================================================

@cocotb.test()
async def test_phase3_direct_sram_write(dut):
    """Boot, write PBM slices directly into SRAM, verify readback."""
    firmware = load_bin(FIRMWARE_PATH)
    slices   = slice_pbm_for_tiles(PBM_PATH)

    await reset_and_boot(dut, firmware)
    dut._log.info(f"[P3] Writing image slices @ 0x{GRID_OFFSET:03x}...")

    for tr in range(GRID_ROWS):
        for tc in range(GRID_COLS):
            write_tile_sram(dut, tr, tc, GRID_OFFSET, slices[(tr, tc)])
    await RisingEdge(dut.clk)

    total = 0
    for tr in range(GRID_ROWS):
        for tc in range(GRID_COLS):
            raw    = read_tile_sram(dut, tr, tc)
            actual = raw[GRID_OFFSET: GRID_OFFSET + TILE_SIZE * TILE_SIZE]
            mm     = sum(1 for a, e in zip(actual, slices[(tr, tc)]) if a != e)
            live   = sum(slices[(tr, tc)])
            dut._log.info(f"  Tile({tr},{tc}): {'OK' if mm == 0 else f'{mm} mismatches'} ({live} live cells)")
            total += mm

    assert total == 0, f"PHASE 3 FAILED -- {total} mismatches"
    dut._log.info("PHASE 3 PASSED")


# ===========================================================================
# TEST 6 -- GoL evolution with grid printing
# ===========================================================================

@cocotb.test()
async def test_phase6_gol_evolution(dut):
    """
    Inject vertical blinker [45,55,65] into tile(0,0).
    Observe GOL_ITERATIONS generations via NOC signal + SRAM dump.

    Expected oscillation in tile(0,0):
      Gen0: [45,55,65]  vertical
      Gen1: [54,55,56]  horizontal
      Gen2: [45,55,65]  vertical  (blinker confirmed)
    """
    firmware = load_bin(FIRMWARE_PATH)
    slices   = slice_blinker_for_tiles()

    await reset_and_boot(dut, firmware)
    dut._log.info("[P6] Boot complete.")

    dut._log.info(f"[P6] Injecting blinker @ 0x{GRID_OFFSET:03x}...")
    for tr in range(GRID_ROWS):
        for tc in range(GRID_COLS):
            write_tile_sram(dut, tr, tc, GRID_OFFSET, slices[(tr, tc)])
    await RisingEdge(dut.clk)

    # Print Gen 0
    dut._log.info("=" * 50)
    dut._log.info("[P6] GENERATION 0")
    dut._log.info("=" * 50)
    for tr in range(GRID_ROWS):
        for tc in range(GRID_COLS):
            raw  = read_tile_sram(dut, tr, tc)
            grid = raw[GRID_OFFSET: GRID_OFFSET + TILE_SIZE * TILE_SIZE]
            print_grid(dut, tr, tc, grid, gen=0)

    prev_raw  = read_tile_sram(dut, 0, 0)
    prev_grid = list(prev_raw[GRID_OFFSET: GRID_OFFSET + TILE_SIZE * TILE_SIZE])

    for gen in range(1, GOL_ITERATIONS + 1):
        dut._log.info(f"[P6] Waiting for generation {gen}...")

        seen = await wait_for_noc_signal(dut, GEN_DONE_DEST, GEN_DONE_PAYLOAD)
        if seen:
            await Timer(CLK_PERIOD_NS * 10, unit="ns")
        else:
            dut._log.warning("[P6] NOC signal not seen, falling back to SRAM poll")
            prev_grid = await wait_for_grid_change(dut, 0, 0, prev_grid)

        dut._log.info("=" * 50)
        dut._log.info(f"[P6] GENERATION {gen}")
        dut._log.info("=" * 50)
        for tr in range(GRID_ROWS):
            for tc in range(GRID_COLS):
                raw  = read_tile_sram(dut, tr, tc)
                grid = raw[GRID_OFFSET: GRID_OFFSET + TILE_SIZE * TILE_SIZE]
                print_grid(dut, tr, tc, grid, gen=gen)

        raw       = read_tile_sram(dut, 0, 0)
        prev_grid = list(raw[GRID_OFFSET: GRID_OFFSET + TILE_SIZE * TILE_SIZE])

    dut._log.info("[P6] DONE -- GoL evolution complete!")


# ===========================================================================
# TEST 7 -- Blinker oscillation verification (exact assertion)
# ===========================================================================

@cocotb.test()
async def test_phase7_blinker_verify(dut):
    """
    Inject vertical blinker, verify Gen1=horizontal, Gen2=vertical.
    Proves the CPU GoL is correct and the NOC signaling works end-to-end.
    """
    firmware = load_bin(FIRMWARE_PATH)
    slices   = slice_blinker_for_tiles()

    gen0 = slices[(0, 0)]                   # [45,55,65] = 1
    gen1 = [0] * (TILE_SIZE * TILE_SIZE)
    gen1[54] = gen1[55] = gen1[56] = 1     # horizontal

    dut._log.info(f"[P7] Gen0 seed:      {[i for i,v in enumerate(gen0) if v]}")
    dut._log.info(f"[P7] Gen1 expected:  {[i for i,v in enumerate(gen1) if v]}")
    dut._log.info(f"[P7] Gen2 expected:  {[i for i,v in enumerate(gen0) if v]}")

    await reset_and_boot(dut, firmware)

    dut._log.info("[P7] Injecting blinker...")
    for tr in range(GRID_ROWS):
        for tc in range(GRID_COLS):
            write_tile_sram(dut, tr, tc, GRID_OFFSET, slices[(tr, tc)])
    await RisingEdge(dut.clk)

    # ── Gen 1 ────────────────────────────────────────────────────────────────
    dut._log.info("[P7] Waiting for Gen1...")
    seen = await wait_for_noc_signal(dut, GEN_DONE_DEST, GEN_DONE_PAYLOAD)
    assert seen, "[P7] Gen1 signal never received"
    await Timer(CLK_PERIOD_NS * 10, unit="ns")

    raw    = read_tile_sram(dut, 0, 0)
    result = list(raw[GRID_OFFSET: GRID_OFFSET + TILE_SIZE * TILE_SIZE])
    live   = [i for i, v in enumerate(result) if v]
    dut._log.info(f"[P7] Gen1 actual: {live}")
    print_grid(dut, 0, 0, result, gen=1)

    assert result == gen1, f"[P7] Gen1 FAIL: expected {[i for i,v in enumerate(gen1) if v]}, got {live}"
    dut._log.info("[P7] Gen1 PASS")

    # ── Gen 2 ────────────────────────────────────────────────────────────────
    dut._log.info("[P7] Waiting for Gen2...")
    seen2 = await wait_for_noc_signal(dut, GEN_DONE_DEST, GEN_DONE_PAYLOAD)
    assert seen2, "[P7] Gen2 signal never received"
    await Timer(CLK_PERIOD_NS * 10, unit="ns")

    raw2    = read_tile_sram(dut, 0, 0)
    result2 = list(raw2[GRID_OFFSET: GRID_OFFSET + TILE_SIZE * TILE_SIZE])
    live2   = [i for i, v in enumerate(result2) if v]
    dut._log.info(f"[P7] Gen2 actual: {live2}")
    print_grid(dut, 0, 0, result2, gen=2)

    assert result2 == gen0, f"[P7] Gen2 FAIL: expected {[i for i,v in enumerate(gen0) if v]}, got {live2}"
    dut._log.info("[P7] Gen2 PASS -- blinker oscillates correctly!")
    dut._log.info("[P7] PHASE 7 PASSED")