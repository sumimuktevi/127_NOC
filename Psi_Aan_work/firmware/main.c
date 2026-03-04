#include <stdint.h>

#define NOC_INJECT_BASE  0x80000000 
#define SIZE 10


__attribute__((section(".text.init"), naked))
void _start() {
    __asm__ volatile (
        "li   sp, 0x380\n"   
        "call main\n"
        "1: j 1b\n"          
    );
}

__attribute__((section(".text.init")))
void noc_send(uint32_t payload) {
    volatile uint32_t* dest = (volatile uint32_t*)(NOC_INJECT_BASE);
    *dest = payload;
}

volatile uint8_t current_grid[SIZE * SIZE] __attribute__((section(".data"))) = {
    [45] = 1, [55] = 1, [65] = 1 
};
volatile uint8_t next_grid[SIZE * SIZE];

int main() {
    // HEARTBEAT: Reached Main
    noc_send(0xAAAAAAAA);

    while(1) {
        // Compute Next Generation
        for (int y = 0; y < SIZE; y++) {
            for (int x = 0; x < SIZE; x++) {
                int neighbors = 0;
                for (int dy = -1; dy <= 1; dy++) {
                    for (int dx = -1; dx <= 1; dx++) {
                        if (dx == 0 && dy == 0) continue;
                        int nx = x + dx; int ny = y + dy;
                        if (nx >= 0 && nx < SIZE && ny >= 0 && ny < SIZE) {
                            if (current_grid[ny * SIZE + nx]) neighbors++;
                        }
                    }
                }
                int idx = y * SIZE + x;
                if (current_grid[idx] == 1)
                    next_grid[idx] = (neighbors == 2 || neighbors == 3);
                else
                    next_grid[idx] = (neighbors == 3);
            }
        }

        // Apply Generation Update
        for (int i = 0; i < (SIZE * SIZE); i++) {
            current_grid[i] = next_grid[i];
        }

        // Signal completion of iteration
        noc_send(0xCCCCCCCC);
    }
    return 0;
}