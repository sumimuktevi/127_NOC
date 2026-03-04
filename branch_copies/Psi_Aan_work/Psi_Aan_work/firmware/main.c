#include <stdint.h>

// --- Hardware Register Map ---
#define NOC_INJECT_BASE  0x80000000 
#define NOC_READ_PORT    0x40000000 
#define ADDR_TILE_ID     0x40000020 

// --- Simulation/Memory Map ---
// These addresses must match your link.ld placement
#define SIZE 10

// --- Initialized Grid (Option 1) ---
// This goes into the .data section of the binary.
// We seed a vertical "Blinker" pattern in the center.
uint8_t current_grid[SIZE * SIZE] = {
    [45] = 1, // Row 4, Col 5
    [55] = 1, // Row 5, Col 5
    [65] = 1  // Row 6, Col 5
};

// These stay in .bss (initialized to 0 by hardware/software)
uint8_t next_grid[SIZE * SIZE];
uint8_t BUF_N[SIZE], BUF_S[SIZE], BUF_W[SIZE], BUF_E[SIZE];

// --- Helper Functions ---

void noc_send(uint8_t target_id, uint32_t payload) {
    // Hardware uses lower 4 bits of the address as the destination ID
    volatile uint32_t* dest = (volatile uint32_t*)(NOC_INJECT_BASE | (target_id & 0x0F));
    *dest = payload;
}

static inline uint8_t wrap_coord_3(int val) {
    if (val < 0) return 2;
    if (val >= 3) return 0;
    return val;
}

// --- Entry Point ---

void __attribute__((section(".text.init"))) _start() {
    // 1. Identify ourselves in the 3x3 mesh
    uint32_t id_reg = *(volatile uint32_t*)ADDR_TILE_ID;
    uint8_t my_x = id_reg & 0x03; 
    uint8_t my_y = (id_reg >> 2) & 0x03;
    uint8_t my_id = (my_y << 2) | my_x;

    /* NOTE: We do NOT zero current_grid here. 
       Because we initialized it above, the bootloader handles the "seeding" 
       by copying the pattern from Flash to SRAM.
    */

    while(1) {
        // 2. Transmit Edges to Neighbors
        // Packets: [33]=Valid, [32:29]=Dest, [28:13]=Payload(Data,Idx,Src)
        for (int i = 0; i < SIZE; i++) {
            // Send North edge to the tile above
            uint32_t p_n = (current_grid[0 * SIZE + i] << 12) | (i << 4) | my_id;
            noc_send((wrap_coord_3(my_y - 1) << 2) | my_x, p_n);
            
            // Send South edge to the tile below
            uint32_t p_s = (current_grid[(SIZE-1) * SIZE + i] << 12) | (i << 4) | my_id;
            noc_send((wrap_coord_3(my_y + 1) << 2) | my_x, p_s);
        }

        // 3. Compute Next Generation (Simplified logic)
        for (int y = 0; y < SIZE; y++) {
            for (int x = 0; x < SIZE; x++) {
                int neighbors = 0;
                
                // Check 8 neighbors (Assume wrap-around for local grid)
                for (int dy = -1; dy <= 1; dy++) {
                    for (int dx = -1; dx <= 1; dx++) {
                        if (dx == 0 && dy == 0) continue;
                        
                        int nx = x + dx;
                        int ny = y + dy;

                        // Local bounds check
                        if (nx >= 0 && nx < SIZE && ny >= 0 && ny < SIZE) {
                            if (current_grid[ny * SIZE + nx]) neighbors++;
                        }
                    }
                }

                // Game of Life Rules
                int idx = y * SIZE + x;
                if (current_grid[idx] == 1) {
                    next_grid[idx] = (neighbors == 2 || neighbors == 3) ? 1 : 0;
                } else {
                    next_grid[idx] = (neighbors == 3) ? 1 : 0;
                }
            }
        }

        // 4. Update Current Grid
        for (int i = 0; i < (SIZE * SIZE); i++) {
            current_grid[i] = next_grid[i];
        }

        // 5. Signal "Generation Complete" to Testbench
        // We send a specific magic flit to ID 0xF (the monitor)
        noc_send(0xF, 0xDEADBEEF);

        // Small delay to prevent NoC congestion in simulation
        for(volatile int delay = 0; delay < 500; delay++);
    }
}