#include <stdint.h>

// Hardware Register Map
#define NOC_INJECT_BASE  0x80000000 
#define NOC_READ_PORT    0x40000000 
#define ADDR_TILE_ID     0x40000020 

#define SIZE 10

// Define globals. The linker will place these in the .bss section.
// This ensures they don't overlap with your compiled instructions.
uint8_t current_grid[SIZE * SIZE];
uint8_t next_grid[SIZE * SIZE];
uint8_t BUF_N[SIZE], BUF_S[SIZE], BUF_W[SIZE], BUF_E[SIZE];

void noc_send(uint8_t target_id, uint32_t payload) {
    volatile uint32_t* dest = (volatile uint32_t*)(NOC_INJECT_BASE | (target_id & 0x0F));
    *dest = payload;
}

static inline uint8_t wrap_coord_3(int val) {
    if (val < 0) return 2;
    if (val >= 3) return 0;
    return val;
}

void __attribute__((section(".text.init"))) _start() {
    uint32_t id_reg = *(volatile uint32_t*)ADDR_TILE_ID;
    uint8_t my_x = id_reg & 0x03; 
    uint8_t my_y = (id_reg >> 2) & 0x03;
    uint8_t my_id = (my_y << 2) | my_x;

    // Initialize: The .bss section isn't cleared by hardware, so we do it manually
    for (int i = 0; i < SIZE * SIZE; i++) current_grid[i] = 0;
    
    // Seed: Blinker in the center
    current_grid[(SIZE/2 - 1) * SIZE + (SIZE/2)] = 1;
    current_grid[(SIZE/2)     * SIZE + (SIZE/2)] = 1;
    current_grid[(SIZE/2 + 1) * SIZE + (SIZE/2)] = 1;

    while(1) {
        // 1. Transmit Edges
        for (int i = 0; i < SIZE; i++) {
            uint32_t p_n = (current_grid[0 * SIZE + i] << 12) | (i << 4) | my_id;
            uint32_t p_s = (current_grid[(SIZE-1) * SIZE + i] << 12) | (i << 4) | my_id;
            noc_send((wrap_coord_3(my_y - 1) << 2) | my_x, p_n);
            noc_send((wrap_coord_3(my_y + 1) << 2) | my_x, p_s);
        }

        // 2. Compute Game of Life (Simplified snippet)
        for (int i = 0; i < SIZE*SIZE; i++) {
            // ... (Your GoL logic from main.c)
            next_grid[i] = current_grid[i]; // Placeholder for brevity
        }

        // Signal completion of one "tick" to the testbench
        noc_send(0xF, 0xDEADBEEF);
        for(volatile int delay = 0; delay < 1000; delay++);
    }
}