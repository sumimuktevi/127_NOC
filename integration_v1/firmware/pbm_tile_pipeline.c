#include <stdint.h>

#define SIZE 10

/* Host-controlled local-tile pipeline state.
 *
 * The mailbox lives in .data at a fixed aligned block so cocotb can patch the
 * image and flags after the flash boot finishes without touching code bytes.
 */
struct mailbox_layout {
    uint8_t current_grid[SIZE * SIZE];
    uint32_t host_start_flag;
    uint32_t host_done_flag;
    uint32_t iteration_counter;
};

volatile struct mailbox_layout tile_mailbox
    __attribute__((section(".mailbox"), aligned(64))) = {{0}, 0, 0, 0};
volatile uint8_t next_grid[SIZE * SIZE];

void main(void);

void _start(void) __attribute__((section(".text.init")));
void _start(void) {
    main();
    while (1) {
    }
}

static void step_local_game_of_life(void) {
    for (int y = 0; y < SIZE; y++) {
        for (int x = 0; x < SIZE; x++) {
            int neighbors = 0;

            for (int dy = -1; dy <= 1; dy++) {
                for (int dx = -1; dx <= 1; dx++) {
                    if (dx == 0 && dy == 0) {
                        continue;
                    }

                    int nx = x + dx;
                    int ny = y + dy;

                    if (nx >= 0 && nx < SIZE && ny >= 0 && ny < SIZE) {
                        neighbors += (tile_mailbox.current_grid[ny * SIZE + nx] & 1);
                    }
                }
            }

            {
                int idx = y * SIZE + x;
                int alive = tile_mailbox.current_grid[idx] & 1;
                next_grid[idx] = (uint8_t)(alive ? (neighbors == 2 || neighbors == 3)
                                                 : (neighbors == 3));
            }
        }
    }

    for (int i = 0; i < SIZE * SIZE; i++) {
        tile_mailbox.current_grid[i] = next_grid[i];
    }
}

void main(void) {
    while (1) {
        if (tile_mailbox.host_start_flag == 0) {
            continue;
        }

        tile_mailbox.host_done_flag = 0;
        step_local_game_of_life();
        tile_mailbox.iteration_counter++;
        tile_mailbox.host_start_flag = 0;
        tile_mailbox.host_done_flag = 1;
    }
}
