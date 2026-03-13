import random
import struct

# Must match housekeeping.sv exactly
NUM_SOCLETS = 9
ROWS_PER_SOCLET = 10
BASE_ADDR = 0x1000
WORD_SIZE = 4        # 4 bytes = 32 bits
SOCLET_STRIDE = 64  # 0x40 = soclet_counter << 6

def compute_addr(soclet, row):
    """Mirrors: wbs_adr = 0x1000 + (soclet_counter << 6) + (row_counter << 2)"""
    return BASE_ADDR + (soclet * SOCLET_STRIDE) + (row * WORD_SIZE)

def generate_full_grid_test(use_alternating=False):
    print("------- FULL GRID TEST -------")
    print(f"{NUM_SOCLETS} SoClets | {ROWS_PER_SOCLET} Rows each")
    print(f"Mode: {'Alternating 0xAA/0x55' if use_alternating else 'Random with ID prefix'}")

    test_vectors = []
    word_index = 0

    for s_id in range(NUM_SOCLETS):
        print(f"\nSoClet {s_id} (base addr: {hex(compute_addr(s_id, 0))}):")
        for row_id in range(ROWS_PER_SOCLET):

            addr = compute_addr(s_id, row_id)

            if use_alternating:
                # Matches the testbench: flash_bit_cnt[0] alternates each flash_clk
                # Even word index -> 0xAAAAAAAA, odd -> 0x55555555
                data = 0xAAAAAAAA if (word_index % 2 == 0) else 0x55555555
            else:
                # Random with soclet/row ID embedded in top byte for easy debug
                prefix = (s_id << 28) | (row_id << 24)
                data = prefix | random.getrandbits(24)

            test_vectors.append((addr, data))
            word_index += 1

            print(f"  Row {row_id:2d} | Addr: {hex(addr):12s} | "
                  f"Data: {hex(data):12s} | {format(data, '032b')}")

    return test_vectors


def check_addresses(vectors):
    """Verify all addresses are word-aligned and sequential."""
    print("\n--- ADDRESS SANITY CHECK ---")
    errors = 0

    prev_addr = None
    for i, (addr, val) in enumerate(vectors):
        # Alignment check
        if addr % 4 != 0:
            print(f"  ERROR: Misaligned address at word {i}: {hex(addr)}")
            errors += 1

        # Gap/duplicate check
        if prev_addr is not None:
            delta = addr - prev_addr
            if delta == 0:
                print(f"  WARNING: Duplicate address at word {i}: {hex(addr)}")
            elif delta != 4:
                print(f"  WARNING: Gap at word {i}: {hex(prev_addr)} -> {hex(addr)} "
                      f"(delta={hex(delta)}, expected 0x4)")
        prev_addr = addr

    if errors == 0:
        print("  All addresses word-aligned. OK.")

    # Check total count
    expected = NUM_SOCLETS * ROWS_PER_SOCLET
    print(f"  Total words: {len(vectors)} (expected {expected}) "
          f"{'OK' if len(vectors) == expected else 'MISMATCH'}")


def check_address_gaps(vectors):
    """Specifically flag the row-10 to row-0 boundary jump."""
    print("\n--- SOCLET BOUNDARY CHECK ---")
    for i in range(1, len(vectors)):
        addr_prev = vectors[i-1][0]
        addr_curr = vectors[i][0]
        delta = addr_curr - addr_prev

        s = i // ROWS_PER_SOCLET
        r = i % ROWS_PER_SOCLET

        if r == 0 and i > 0:
            # This is the first row of a new soclet
            expected_jump = SOCLET_STRIDE - (ROWS_PER_SOCLET - 1) * WORD_SIZE
            # = 64 - 36 = 28 bytes jump at soclet boundary
            print(f"  Boundary word {i:3d}: SoClet {s-1}->SoClet {s} | "
                  f"Addr jump: {hex(addr_prev)} -> {hex(addr_curr)} "
                  f"(delta={hex(delta)}, expected={hex(expected_jump)}) "
                  f"{'OK' if delta == expected_jump else 'BUG - check NEXT_NODE logic'}")


def generate_verilog_tb_checker(vectors):
    """Print Verilog $display checks you can paste into the testbench."""
    print("\n--- VERILOG CHECKER SNIPPET ---")
    print("// Paste this into your testbench after done_loading goes high:")
    print("initial begin")
    print("  wait(dut.FSM.done_loading == 1);")
    for i, (addr, data) in enumerate(vectors):
        print(f"  // Word {i+1}: SoClet {i//ROWS_PER_SOCLET}, Row {i%ROWS_PER_SOCLET}")
        print(f"  if (dut.ethan_sram.mem[{(addr - BASE_ADDR)//4}] !== 32'h{data:08X})")
        print(f"    $display(\"FAIL word {i+1}: addr {hex(addr)} "
              f"expected {hex(data)} got %h\", dut.ethan_sram.mem[{(addr - BASE_ADDR)//4}]);")
    print("  $display(\"=== VERIFICATION COMPLETE ===\");")
    print("end")


# --- EXECUTION ---
print("=" * 60)
print("RANDOM PATTERN TEST")
print("=" * 60)
random_vectors = generate_full_grid_test(use_alternating=False)
check_addresses(random_vectors)
check_address_gaps(random_vectors)

print("\n" + "=" * 60)
print("ALTERNATING PATTERN TEST (matches testbench flash_bit_cnt[0])")
print("=" * 60)
alt_vectors = generate_full_grid_test(use_alternating=True)
check_addresses(alt_vectors)
check_address_gaps(alt_vectors)

generate_verilog_tb_checker(alt_vectors)

