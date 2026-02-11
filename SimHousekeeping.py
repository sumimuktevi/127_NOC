# Simulation of Host talking to Housekeeping via Wishbone/GPIO
import time

# Constants for your 3x3 Grid
SOCLET_ID = 1  # The second SoClet (0, 1, 2...)
ROWS_PER_SOCLET = 10
BASE_FLASH_ADDR = 0x1000 # Example starting address in Flash

def write_to_flash(address, data_32bit):
    """
    Simulates the Host 'Bypassing' the logic to write a 32-bit 
    word into the Flash bit-by-bit.
    """
    binary_str = format(data_32bit, '032b')
    print(f"Writing to Flash Addr {hex(address)}: {binary_str}")
    
    # In real hardware, you would toggle the MOSI pin here:
    # for bit in binary_str:
    #     set_mosi(bit)
    #     tick_clock()

def generate_checkerboard_soclet():
    print(f"--- Generating Data for SoClet {SOCLET_ID} ---")
    
    # We will store 10 rows for this specific SoClet
    for row in range(ROWS_PER_SOCLET):
        # Alternate patterns for every other row to make a true checkerboard
        if row % 2 == 0:
            row_data = 0x2AA # 1010101010
        else:
            row_data = 0x155 # 0101010101
            
        # Calculate the unique Flash address for this SoClet's row
        # Each row is 4 bytes (32 bits)
        target_addr = BASE_FLASH_ADDR + (SOCLET_ID * 64) + (row * 4)
        
        write_to_flash(target_addr, row_data) 

# --- EXECUTION ---
# 1. Enable Bypass Mode (Host takes control of MOSI)       
print("Setting Bypass Mode: ON")

# 2. Run the generator
generate_checkerboard_soclet()

# 3. Disable Bypass Mode (Let Housekeeping Boot the grid)
print("\nSetting Bypass Mode: OFF")
print("Housekeeping FSM will now 'Harvest' this data from Flash to the NoC.")