#include <stdint.h>

#define NOC_INJECT_BASE  0x80000000u
#define NOC_RECV_BASE    0x80000004u
#define NOC_ID_BASE      0x80000008u

/* Tile ID encoding: matches RTL */
#define TILE_ID(r,c)     (((uint32_t)(r) << 2) | (uint32_t)(c))
#define TILE_ROW(id)     ((((uint32_t)(id)) >> 2) & 0x3u)
#define TILE_COL(id)     (((uint32_t)(id)) & 0x3u)

#define FLIT_DEST_SHIFT   28u
#define FLIT_PAYLOAD_MASK 0x0FFFFFFFu

/* Ghost flit layout:
 * bits [9:0]   = bitmap
 * bit  [10]    = ghost valid bit
 * bits [12:11] = direction tag for receiver-side ghost buffer
 */
#define FLIT_BMAP_MASK    0x03FFu
#define FLIT_VALID_BIT    0x0400u
#define FLIT_DIR_SHIFT    11u
#define FLIT_DIR_MASK     (0x3u << FLIT_DIR_SHIFT)

#define DIR_N             0u
#define DIR_S             1u
#define DIR_W             2u
#define DIR_E             3u

/* Off-mesh protocol signals.
 * bit 10 is clear so these are never mistaken for ghost flits.
 */
#define SIG_BOOT_ALIVE    0xF0000001u
#define SIG_SEED_LIVE     0xF0000002u
#define SIG_MATH_DONE     0xF0000003u
#define SIG_GEN_STABLE    0xF0000004u
#define SIG_STOP          0xF0000005u

#define SIZE        10

/* Physical mesh in RTL */
#define PHYS_ROWS   3
#define PHYS_COLS   3

/* Logical active mesh. Change these later for 2x2, 1x1, etc. */
#define ACTIVE_ROWS 3
#define ACTIVE_COLS 3

#define GRID_BASE       0x0500u
#define GHOST_BASE      0x0600u
#define NEXT_GRID_BASE  0x0640u

#define grid       ((volatile uint8_t *)GRID_BASE)
#define ghost_N    ((volatile uint8_t *)(GHOST_BASE +  0))
#define ghost_S    ((volatile uint8_t *)(GHOST_BASE + 10))
#define ghost_W    ((volatile uint8_t *)(GHOST_BASE + 20))
#define ghost_E    ((volatile uint8_t *)(GHOST_BASE + 30))
#define next_grid  ((volatile uint8_t *)NEXT_GRID_BASE)

static inline void noc_write(uint32_t word)
{
    *(volatile uint32_t *)NOC_INJECT_BASE = word;
}

static inline uint32_t noc_recv_raw(void)
{
    return *(volatile uint32_t *)NOC_RECV_BASE;
}

static inline uint32_t noc_read_my_id(void)
{
    return *(volatile uint32_t *)NOC_ID_BASE & 0xFu;
}

static inline void noc_signal(uint32_t sig_word)
{
    noc_write(sig_word);
}

static inline void clear_buf10(volatile uint8_t *buf)
{
    for (int i = 0; i < SIZE; i++) {
        buf[i] = 0u;
    }
}

static inline void clear_missing_ghosts(int has_N, int has_S, int has_W, int has_E)
{
    if (!has_N) clear_buf10(ghost_N);
    if (!has_S) clear_buf10(ghost_S);
    if (!has_W) clear_buf10(ghost_W);
    if (!has_E) clear_buf10(ghost_E);
}

__attribute__((noinline))
static uint32_t row_bitmap(int row)
{
    uint32_t bm = 0;
    for (int c = 0; c < SIZE; c++) {
        bm |= (uint32_t)(grid[row * SIZE + c] & 1u) << c;
    }
    return bm & FLIT_BMAP_MASK;
}

__attribute__((noinline))
static uint32_t col_bitmap(int col)
{
    uint32_t bm = 0;
    for (int r = 0; r < SIZE; r++) {
        bm |= (uint32_t)(grid[r * SIZE + col] & 1u) << r;
    }
    return bm & FLIT_BMAP_MASK;
}

static inline void send_ghost_tagged(uint32_t dest_id, uint32_t bm, uint32_t dir)
{
    noc_write((dest_id << FLIT_DEST_SHIFT)
              | FLIT_VALID_BIT
              | ((dir & 0x3u) << FLIT_DIR_SHIFT)
              | (bm & FLIT_BMAP_MASK));
}

static inline uint32_t recv_ghost_tagged(void)
{
    uint32_t p;
    do {
        p = noc_recv_raw();
    } while ((p & FLIT_VALID_BIT) == 0u);

    return p & FLIT_PAYLOAD_MASK;
}

static inline void store_bitmap(volatile uint8_t *buf, uint32_t bm)
{
    for (int i = 0; i < SIZE; i++) {
        buf[i] = (uint8_t)((bm >> i) & 1u);
    }
}

/* Tagged ghost exchange.
 *
 * Important convention:
 * The tag tells the RECEIVER where to store the bitmap.
 *
 * If I send my top row north, the north neighbor stores it as ghost_S.
 * If I send my bottom row south, the south neighbor stores it as ghost_N.
 * If I send my left col west, the west neighbor stores it as ghost_E.
 * If I send my right col east, the east neighbor stores it as ghost_W.
 */
static void ghost_exchange(int my_row, int my_col,
                           int has_N, int has_S,
                           int has_W, int has_E)
{
    clear_missing_ghosts(has_N, has_S, has_W, has_E);

    /* Phase 1: send all boundaries before receiving */
    if (has_N) {
        send_ghost_tagged(TILE_ID(my_row - 1, my_col),
                          row_bitmap(0),
                          DIR_S);
    }

    if (has_S) {
        send_ghost_tagged(TILE_ID(my_row + 1, my_col),
                          row_bitmap(SIZE - 1),
                          DIR_N);
    }

    if (has_W) {
        send_ghost_tagged(TILE_ID(my_row, my_col - 1),
                          col_bitmap(0),
                          DIR_E);
    }

    if (has_E) {
        send_ghost_tagged(TILE_ID(my_row, my_col + 1),
                          col_bitmap(SIZE - 1),
                          DIR_W);
    }

    /* Phase 2: receive expected ghosts in any order */
    int expected = has_N + has_S + has_W + has_E;

    for (int k = 0; k < expected; k++) {
        uint32_t p   = recv_ghost_tagged();
        uint32_t bm  = p & FLIT_BMAP_MASK;
        uint32_t dir = (p & FLIT_DIR_MASK) >> FLIT_DIR_SHIFT;

        if (dir == DIR_N) {
            store_bitmap(ghost_N, bm);
        } else if (dir == DIR_S) {
            store_bitmap(ghost_S, bm);
        } else if (dir == DIR_W) {
            store_bitmap(ghost_W, bm);
        } else {
            store_bitmap(ghost_E, bm);
        }
    }
}

static inline int neighbour_count(int row, int col)
{
    int idx   = row * SIZE + col;
    int above = (row > 0);
    int below = (row < SIZE - 1);
    int left  = (col > 0);
    int right = (col < SIZE - 1);
    int n = 0;

    if (above) {
        if (left)  n += grid[idx - SIZE - 1] & 1;
                   n += grid[idx - SIZE    ] & 1;
        if (right) n += grid[idx - SIZE + 1] & 1;
    } else {
        if (left)  n += ghost_N[col - 1] & 1;
                   n += ghost_N[col    ] & 1;
        if (right) n += ghost_N[col + 1] & 1;
    }

    if (left) {
        n += grid[idx - 1] & 1;
    } else {
        n += ghost_W[row] & 1;
    }

    if (right) {
        n += grid[idx + 1] & 1;
    } else {
        n += ghost_E[row] & 1;
    }

    if (below) {
        if (left)  n += grid[idx + SIZE - 1] & 1;
                   n += grid[idx + SIZE    ] & 1;
        if (right) n += grid[idx + SIZE + 1] & 1;
    } else {
        if (left)  n += ghost_S[col - 1] & 1;
                   n += ghost_S[col    ] & 1;
        if (right) n += ghost_S[col + 1] & 1;
    }

    return n;
}

__attribute__((section(".text.init"), naked))
void _start(void)
{
    __asm__ volatile (
        "li   sp, 0x07fc\n"

        /* clear ghost buffers: 0x0600 .. 0x0627 */
        "li   t0, 0x0600\n"
        "li   t1, 0x0628\n"
        "1:\n"
        "bge  t0, t1, 2f\n"
        "sb   zero, 0(t0)\n"
        "addi t0, t0, 1\n"
        "j    1b\n"

        /* clear next_grid: 0x0640 .. 0x06a3 */
        "2:\n"
        "li   t0, 0x0640\n"
        "li   t1, 0x06a4\n"
        "3:\n"
        "bge  t0, t1, 4f\n"
        "sb   zero, 0(t0)\n"
        "addi t0, t0, 1\n"
        "j    3b\n"

        "4:\n"
        "call main\n"

        "5:\n"
        "j    5b\n"
    );
}

static void seed_grid(void)
{
    for (int i = 0; i < SIZE * SIZE; i++) {
        grid[i] = 0u;
    }

    /* Vertical blinker only */
    grid[4 * SIZE + 5] = 1;
    grid[5 * SIZE + 5] = 1;
    grid[6 * SIZE + 5] = 1;
}

static void idle_tile_forever(void)
{
    while (1) {
        __asm__ volatile ("nop");
    }
}

int main(void)
{
    uint32_t my_id = noc_read_my_id();

    int phys_row = (int)TILE_ROW(my_id);
    int phys_col = (int)TILE_COL(my_id);

    /* Physical bounds guard */
    if (phys_row >= PHYS_ROWS || phys_col >= PHYS_COLS) {
        idle_tile_forever();
    }

    /* Logical active mesh guard */
    if (phys_row >= ACTIVE_ROWS || phys_col >= ACTIVE_COLS) {
        idle_tile_forever();
    }

    int my_row = phys_row;
    int my_col = phys_col;

    int has_N = (my_row > 0);
    int has_S = (my_row < ACTIVE_ROWS - 1);
    int has_W = (my_col > 0);
    int has_E = (my_col < ACTIVE_COLS - 1);

    noc_signal(SIG_BOOT_ALIVE);

    seed_grid();

    noc_signal(SIG_SEED_LIVE);

    while (1) {
        /* Phase A: exchange ghost boundaries */
        ghost_exchange(my_row, my_col, has_N, has_S, has_W, has_E);

        /* Phase B: compute next generation */
        for (int row = 0; row < SIZE; row++) {
            for (int col = 0; col < SIZE; col++) {
                int alive = grid[row * SIZE + col] & 1;
                int n     = neighbour_count(row, col);

                next_grid[row * SIZE + col] =
                    (uint8_t)(alive ? ((n == 2) || (n == 3))
                                    : (n == 3));
            }
        }

        noc_signal(SIG_MATH_DONE);

        /* Phase C: commit next generation */
        for (int i = 0; i < SIZE * SIZE; i++) {
            grid[i] = next_grid[i];
        }

        noc_signal(SIG_GEN_STABLE);

        /* Small sample window, like the working version.
         * Keep this small. Do not use huge spin loops.
         */
        for (volatile uint32_t spin = 0; spin < 2000; spin++) {
            __asm__ volatile ("nop");
        }
    }

    return 0;
}