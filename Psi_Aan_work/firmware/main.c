#include <stdint.h>

#define NOC_INJECT_BASE  0x80000000 // High nibble 8 triggers router injection
#define NOC_READ_PORT    0x40000000 // Port to read incoming flits [cite: 5, 10]
#define ADDR_TILE_ID     0x40000020 // Hardware register for this tile's ID [cite: 34]
#define SRAM_GRID_BASE   0x000002C0 // Current generation [cite: 62]
#define SRAM_NEXT_GEN    0x00000324 // Buffer for next generation [cite: 62]

// Local SRAM buffers for cardinal neighbor edges [cite: 62]
#define BUF_N  0x00000A00
#define BUF_S  0x00000A10
#define BUF_W  0x00000A20
#define BUF_E  0x00000A30

#define SIZE 10
#define MESH_DIM 3 

// Helper to send a generalized flit via the router [cite: 10, 43]
void noc_send(uint8_t target_id, uint32_t payload) {
    // Hardware uses lower 4 bits of the address as the destination ID [cite: 10]
    volatile uint32_t* dest = (volatile uint32_t*)(NOC_INJECT_BASE | (target_id & 0x0F));
    *dest = payload;
}

// Helper to compute wrapped coordinates for 3x3 mesh (avoids modulo operator)
static inline uint8_t wrap_coord_3(int val) {
    if (val < 0) return 2;
    if (val >= 3) return 0;
    return val;
}

void __attribute__((section(".text.init"))) _start() {
    // 1. Initialize Identification [cite: 7, 34]
    uint32_t id_reg = *(volatile uint32_t*)ADDR_TILE_ID;
    uint8_t my_x = id_reg & 0x03; 
    uint8_t my_y = (id_reg >> 2) & 0x03;
    uint8_t my_id = (my_y << 2) | my_x;

    uint8_t* current_grid = (uint8_t*)SRAM_GRID_BASE;
    uint8_t* next_grid    = (uint8_t*)SRAM_NEXT_GEN;

    // --- Seed initial GoL pattern: Blinker in the center ---
    for (int i = 0; i < SIZE * SIZE; i++) current_grid[i] = 0;
    // Blinker: three vertical cells in the center
    int cx = SIZE / 2;
    int cy = SIZE / 2;
    current_grid[(cy-1) * SIZE + cx] = 1;
    current_grid[(cy)   * SIZE + cx] = 1;
    current_grid[(cy+1) * SIZE + cx] = 1;

    while(1) {
        // 2. Transmit Edges to Neighbors [cite: 14, 19, 20, 21, 22]
        for (int i = 0; i < SIZE; i++) {
            // Pack: [Value: 1 bit] [Index: 8 bits] [SrcID: 4 bits]
            uint32_t p_n = (current_grid[0 * SIZE + i] << 12) | (i << 4) | my_id;
            uint32_t p_s = (current_grid[(SIZE-1) * SIZE + i] << 12) | (i << 4) | my_id;
            uint32_t p_w = (current_grid[i * SIZE + 0] << 12) | (i << 4) | my_id;
            uint32_t p_e = (current_grid[i * SIZE + (SIZE-1)] << 12) | (i << 4) | my_id;

            noc_send((wrap_coord_3(my_y - 1) << 2) | my_x, p_n); // North
            noc_send((wrap_coord_3(my_y + 1) << 2) | my_x, p_s);           // South
            noc_send((my_y << 2) | wrap_coord_3(my_x - 1), p_w); // West
            noc_send((my_y << 2) | wrap_coord_3(my_x + 1), p_e);           // East
        }

        // 3. Receive and Unpack Data [cite: 6, 14, 24]
        for (volatile int t = 0; t < 5000; t++) {
            uint32_t pkt = *(volatile uint32_t*)NOC_READ_PORT;
            if (pkt == 0) continue;
            
            uint8_t src_id = pkt & 0x0F;
            uint8_t idx    = (pkt >> 4) & 0xFF;
            uint8_t val    = (pkt >> 12) & 0x01;

            if (src_id == ((wrap_coord_3(my_y - 1) << 2) | my_x))      ((uint8_t*)BUF_N)[idx] = val;
            else if (src_id == ((wrap_coord_3(my_y + 1) << 2) | my_x))           ((uint8_t*)BUF_S)[idx] = val;
            else if (src_id == ((my_y << 2) | wrap_coord_3(my_x - 1))) ((uint8_t*)BUF_W)[idx] = val;
            else if (src_id == ((my_y << 2) | wrap_coord_3(my_x + 1)))           ((uint8_t*)BUF_E)[idx] = val;
        }

        // 4. Game of Life Logic Kernel
        for (int y = 0; y < SIZE; y++) {
            for (int x = 0; x < SIZE; x++) {
                int neighbors = 0;

                // Check 8 neighbors (Moore neighborhood)
                for (int dy = -1; dy <= 1; dy++) {
                    for (int dx = -1; dx <= 1; dx++) {
                        if (dx == 0 && dy == 0) continue;

                        int nx = x + dx;
                        int ny = y + dy;
                        uint8_t n_val = 0;

                        // Check if neighbor is in a different tile via buffers
                        if (ny < 0)           n_val = ((uint8_t*)BUF_N)[nx];
                        else if (ny >= SIZE)  n_val = ((uint8_t*)BUF_S)[nx];
                        else if (nx < 0)      n_val = ((uint8_t*)BUF_W)[ny];
                        else if (nx >= SIZE)  n_val = ((uint8_t*)BUF_E)[ny];
                        else                  n_val = current_grid[ny * SIZE + nx];

                        if (n_val) neighbors++;
                    }
                }

                // Apply Rules
                int cell_idx = y * SIZE + x;
                if (current_grid[cell_idx] == 1) {
                    // Survival: 2 or 3 neighbors
                    next_grid[cell_idx] = (neighbors == 2 || neighbors == 3) ? 1 : 0;
                } else {
                    // Birth: exactly 3 neighbors
                    next_grid[cell_idx] = (neighbors == 3) ? 1 : 0;
                }
            }
        }

        // 5. Update Grid and Sync [cite: 62]
        for (int i = 0; i < (SIZE * SIZE); i++) {
            current_grid[i] = next_grid[i];
        }

        noc_send(0xF, 0xDEADBEEF);
        
        for(volatile int delay = 0; delay < 1000; delay++);
    }
}