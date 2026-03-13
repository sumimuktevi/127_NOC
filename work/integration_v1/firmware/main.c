#include <stdint.h>

#define NOC_INJECT_BASE   0x80000000u
#define NOC_RECV_BASE     0x80000004u
#define SIZE 10

#define SIG_GEN_STABLE    0xCCCCCCCCu
#define SIG_READY         0xA5A5A5A5u
#define FLIT_PAYLOAD_MASK 0x0FFFFFFFu

// Force alignment to 64 bytes so current_grid starts exactly at 0x40
volatile uint8_t current_grid[SIZE * SIZE] __attribute__((section(".data"), aligned(64))) = {
    [0] = 1, [19] = 1,
    [45] = 1, [55] = 1, [65] = 1,
    [80] = 1, [89] = 1, [90] = 1, [99] = 1
};

volatile uint8_t next_grid[SIZE * SIZE];
uint8_t ghost_col[SIZE];

void noc_send(uint32_t dest_id, uint32_t payload) {
    *((volatile uint32_t*)NOC_INJECT_BASE) = (dest_id << 28) | (payload & FLIT_PAYLOAD_MASK);
}

uint32_t noc_recv_blocking() {
    uint32_t v;
    do { v = *((volatile uint32_t*)NOC_RECV_BASE); } while (!(v & 0x80000000u));
    return v & FLIT_PAYLOAD_MASK;
}

void main() {
    int my_id = (*((volatile uint32_t*)0x90000000)) & 0xF;

    // -----------------------------------------------------------------------
    // STARTUP BARRIER: ensure both tiles are past init before iteration 0.
    //
    // Protocol (deadlock-free, matches ghost exchange ordering):
    //   tile0: send READY to tile1, then recv READY from tile1
    //   tile1: recv READY from tile0, then send READY to tile0
    // -----------------------------------------------------------------------
    if (my_id == 0) {
        noc_send(1, SIG_READY & FLIT_PAYLOAD_MASK);
        noc_recv_blocking();
    } else {
        noc_recv_blocking();
        noc_send(0, SIG_READY & FLIT_PAYLOAD_MASK);
    }

    while (1) {
        /* 1. GHOST COLUMN EXCHANGE (East-West)
         *
         * Interleaved send+recv per row — deadlock-free with 1-entry eject_reg.
         * Payload: bits[4:1] = row index, bit[0] = cell value
         */
        if (my_id == 0) {
            for (int i = 0; i < SIZE; i++) {
                noc_send(1, (i << 1) | (current_grid[i*SIZE + 9] & 1));
                ghost_col[i] = (uint8_t)(noc_recv_blocking() & 1);
            }
        } else {
            for (int i = 0; i < SIZE; i++) {
                ghost_col[i] = (uint8_t)(noc_recv_blocking() & 1);
                noc_send(0, (i << 1) | (current_grid[i*SIZE + 0] & 1));
            }
        }

        /* 2. COMPUTE NEXT GENERATION */
        for (int y = 0; y < SIZE; y++) {
            for (int x = 0; x < SIZE; x++) {
                int n = 0;
                for (int dy = -1; dy <= 1; dy++) {
                    for (int dx = -1; dx <= 1; dx++) {
                        if (dx == 0 && dy == 0) continue;
                        int nx = x + dx, ny = y + dy;
                        if (ny >= 0 && ny < SIZE) {
                            if (nx >= 0 && nx < SIZE) {
                                n += (current_grid[ny * SIZE + nx] & 1);
                            } else if (my_id == 0 && nx == SIZE) {
                                n += (ghost_col[ny] & 1);
                            } else if (my_id == 1 && nx == -1) {
                                n += (ghost_col[ny] & 1);
                            }
                        }
                    }
                }
                int alive = current_grid[y * SIZE + x] & 1;
                next_grid[y * SIZE + x] = (alive ? (n==2 || n==3) : (n==3));
            }
        }

        /* 3. COMMIT */
        for (int i = 0; i < SIZE*SIZE; i++) current_grid[i] = next_grid[i];

        /* 4. END-OF-ITERATION BARRIER
         *
         * Same deadlock-free ordering — tile0 sends first, tile1 recvs first.
         */
        if (my_id == 0) {
            noc_send(1, SIG_GEN_STABLE & FLIT_PAYLOAD_MASK);
            while (noc_recv_blocking() != (SIG_GEN_STABLE & FLIT_PAYLOAD_MASK));
        } else {
            while (noc_recv_blocking() != (SIG_GEN_STABLE & FLIT_PAYLOAD_MASK));
            noc_send(0, SIG_GEN_STABLE & FLIT_PAYLOAD_MASK);
        }
    }
}
