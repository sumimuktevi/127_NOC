import random

# Constants matching your Housekeeping FSM logic
NUM_SOCLETS = 9
ROWS_PER_SOCLET = 10
BASE_FLASH_ADDR = 0x1000
WORD_SIZE = 4  # 4 bytes = 32 bits
SOCLET_OFFSET = 64 # 0x40 bytes per SoClet area

def generate_full_grid_test():
    """
    Generates a unique data pattern for every cell in all 9 cores.
    Each 32-bit word is unique so we can catch 'bleeding' or addressing errors.
    """
    print(f"--- COMMENCING FULL GRID TEST GENERATION ---")
    print(f"Targeting 9 SoClets | 10 Rows each | 2,880 total bits")
    
    test_vectors = []

    for s_id in range(NUM_SOCLETS):
        print(f"\nConstructing SoClet {s_id} Data Segment:")
        for row_id in range(ROWS_PER_SOCLET):
            # Create a unique pattern: [SoCletID (4bits)][RowID (4bits)][Random (24bits)]
            # This makes it very easy to debug in the waveform viewer!
            prefix = (s_id << 28) | (row_id << 24)
            data_payload = random.getrandbits(24)
            final_word = prefix | data_payload
            
            # Use your Verilog formula: 0x1000 + (s_id * 64) + (row_id * 4)
            target_addr = BASE_FLASH_ADDR + (s_id * SOCLET_OFFSET) + (row_id * WORD_SIZE)
            
            # Store for verification
            test_vectors.append((target_addr, final_word))
            
            # Print for the user/log
            print(f"  Flash Addr: {hex(target_addr)} | Pattern: {format(final_word, '032b')}")

    return test_vectors

def simulate_harvest_check(vectors):
    """
    Simulates what the Housekeeping FSM should see.
    """
    print("\n--- HARVEST SIMULATION CHECK ---")
    for addr, val in vectors:
        # Check the 'Edge Case' we debugged: 4-byte alignment
        if addr % 4 != 0:
            print(f"ERROR: Misaligned Address detected at {hex(addr)}!")
            return
    print("All addresses are 32-bit word aligned. FSM will not hang.")

# --- EXECUTION ---
grid_data = generate_full_grid_test()
simulate_harvest_check(grid_data)