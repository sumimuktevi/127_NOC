#include <stdint.h>

// --- Hardware Memory Map ---
#define ADDR_MY_COORDS   0x80000000  // Read-only: [Unused][Y-byte][X-byte] <- PACKET for reading! Wanting to know the coord. of the current sub. 
#define ADDR_NOC_ROUTER  0x40000000  // Write-only: Send packet to NoC
#define SRAM_GOL_GRID    0x00000800  // Local 10x10 current state
#define SRAM_NEXT_GEN    0x00000900  // Local 10x10 future state (empty)
#define SRAM_SEND        0x00000C00  // Incoming packet buffer

// --- Pointers ---
#define HW_REGS    ((volatile uint32_t*)ADDR_MY_COORDS)
#define NOC_OUT    ((volatile uint32_t*)ADDR_NOC_ROUTER)
#define SEND       ((volatile uint32_t*)SRAM_SEND)

#define GRID_SIZE 10

int main() {
    // 1. Boot-up: Identify who I am in the 3x3 mesh
    uint32_t my_id = *HW_REGS;
    uint8_t my_x = (uint8_t)(my_id & 0xFF);
    uint8_t my_y = (uint8_t)((my_id >> 8) & 0xFF);

    uint8_t *grid = (uint8_t*)SRAM_GOL_GRID;
    uint8_t *next_gen = (uint8_t*)SRAM_NEXT_GEN;

    while(1) {
        // 2. Network Management: Check for incoming data (from Host or Neighbors)
        uint32_t packet = *SEND;
        if (packet != 0) {
            uint8_t dest_x = (uint8_t)(packet & 0xFF);
            uint8_t dest_y = (uint8_t)((packet >> 8) & 0xFF);
            uint8_t state  = (uint8_t)((packet >> 16) & 0xFF);
            uint8_t index  = (uint8_t)((packet >> 24) & 0xFF); // Which cell in the 10x10?

            // --- Coordinate Comparison ---
            if (dest_x == my_x && dest_y == my_y) {
                // IT'S FOR US: Update the local SRAM grid
                grid[index] = state; 
            } else {
                // NOT FOR US: Forward it back to the Verilog Router
                *NOC_OUT = packet;
            }
            *SEND = 0; // Reset SEND to "empty"
        }

        // 3. Game of Life Logic: Process the 10x10 segment
        for (int y = 0; y < GRID_SIZE; y++) {
            for (int x = 0; x < GRID_SIZE; x++) {
                int neighbors = 0;
                
                // Check 8 neighbors (Limited to local 10x10 for simplicity)
                for (int dy = -1; dy <= 1; dy++) {
                    for (int dx = -1; dx <= 1; dx++) {
                        if (dx == 0 && dy == 0) continue;
                        int nx = x + dx;
                        int ny = y + dy;

                        if (nx >= 0 && nx < GRID_SIZE && ny >= 0 && ny < GRID_SIZE) {
                            if (grid[ny * GRID_SIZE + nx]) neighbors++;
                        }
                    }
                }

                // Apply GoL Rules
                int idx = y * GRID_SIZE + x;
                if (grid[idx] == 1) {
                    next_gen[idx] = (neighbors == 2 || neighbors == 3) ? 1 : 0;
                } else {
                    next_gen[idx] = (neighbors == 3) ? 1 : 0;
                }
            }
        }

        // 4. Update Grid and Sync
        for (int i = 0; i < 100; i++) {
            grid[i] = next_gen[i];
            
            // OPTIONAL: Send update back to Host via NoC if Node (0,0)
            if (my_x == 0 && my_y == 0) {
                *NOC_OUT = (i << 24) | (grid[i] << 16) | (0xFF << 8) | (0xFF); // Send to "Host" addr
            }
        }
    }
}