#include <stdint.h>

#define NOC_INJECT_BASE  0x80000000u
#define NOC_RECV_BASE    0x80000004u
#define NOC_ID_BASE      0x80000008u

#define TILE_ID(r,c)     (((uint32_t)(r) << 2) | (uint32_t)(c))
#define TILE_ROW(id)     (((uint32_t)(id) >> 2) & 0x3u)
#define TILE_COL(id)     ((uint32_t)(id) & 0x3u)

#define FLIT_DEST_SHIFT  28u
#define FLIT_BMAP_MASK   0x3FFu
#define FLIT_VALID_BIT   0x400u

/* Protocol signals — all use dest=0xF (off-mesh in any mesh up to 4x4).
 * Payload lower 28 bits must NOT have bit 10 set (FLIT_VALID_BIT) to avoid
 * being mistaken for ghost flits by recv_ghost().
 * Pattern: 0xFXXXXXXX where payload bits 10 = 0.
 */
#define SIG_BOOT_ALIVE   0xF0000001u
#define SIG_SEED_LIVE    0xF0000002u
#define SIG_MATH_DONE    0xF0000003u
#define SIG_GEN_STABLE   0xF0000004u
#define SIG_STOP         0xF0000005u

#define SIZE       10
#define MESH_ROWS  3
#define MESH_COLS  3

#define GRID_BASE       0x0500u
#define GHOST_BASE      0x0600u
#define NEXT_GRID_BASE  0x0640u

/* DEBUG MMIO / SRAM region */
#define DEBUG_BASE           0x0700u
#define DEBUG_LAST_RECV_N    (DEBUG_BASE +  0)
#define DEBUG_LAST_RECV_S    (DEBUG_BASE +  4)
#define DEBUG_LAST_RECV_W    (DEBUG_BASE +  8)
#define DEBUG_LAST_RECV_E    (DEBUG_BASE + 12)
#define DEBUG_NEIGHBOR_HIST  (DEBUG_BASE + 16)
#define DEBUG_ITER_COUNT     (DEBUG_BASE + 28)
#define DEBUG_GHOST_FLAGS    (DEBUG_BASE + 32)

#define grid      ((volatile uint8_t *)GRID_BASE)
#define ghost_N   ((volatile uint8_t *)(GHOST_BASE +  0))
#define ghost_S   ((volatile uint8_t *)(GHOST_BASE + 10))
#define ghost_W   ((volatile uint8_t *)(GHOST_BASE + 20))
#define ghost_E   ((volatile uint8_t *)(GHOST_BASE + 30))
#define next_grid ((volatile uint8_t *)NEXT_GRID_BASE)

#define debug_last_recv_n   ((volatile uint32_t *)DEBUG_LAST_RECV_N)
#define debug_last_recv_s   ((volatile uint32_t *)DEBUG_LAST_RECV_S)
#define debug_last_recv_w   ((volatile uint32_t *)DEBUG_LAST_RECV_W)
#define debug_last_recv_e   ((volatile uint32_t *)DEBUG_LAST_RECV_E)
#define debug_neighbor_hist ((volatile uint8_t  *)DEBUG_NEIGHBOR_HIST)
#define debug_iter_count    ((volatile uint32_t *)DEBUG_ITER_COUNT)
#define debug_ghost_flags   ((volatile uint32_t *)DEBUG_GHOST_FLAGS)

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

__attribute__((noinline))
static uint32_t row_bitmap(int row)
{
    uint32_t bm = 0;
    for (int c = 0; c < SIZE; c++)
        bm |= (uint32_t)(grid[row * SIZE + c] & 1u) << c;
    return bm & FLIT_BMAP_MASK;
}

__attribute__((noinline))
static uint32_t col_bitmap(int col)
{
    uint32_t bm = 0;
    for (int r = 0; r < SIZE; r++)
        bm |= (uint32_t)(grid[r * SIZE + col] & 1u) << r;
    return bm & FLIT_BMAP_MASK;
}

static inline void send_ghost(uint32_t dest_id, uint32_t bm)
{
    noc_write((dest_id << FLIT_DEST_SHIFT) | FLIT_VALID_BIT | (bm & FLIT_BMAP_MASK));
}

/* Wait for a valid ghost flit and return its 10-bit bitmap. */
static inline uint32_t recv_ghost(void)
{
    uint32_t p;
    do { p = noc_recv_raw(); } while (!(p & FLIT_VALID_BIT));
    return p & FLIT_BMAP_MASK;
}

__attribute__((section(".text.init"), naked))
void _start(void)
{
    __asm__ volatile (
        /* zero ghost buffers: 0x0600–0x0627 (40 bytes) */
        "li   sp, 0x7fc\n"
        "li   t0, 0x0600\n"
        "li   t1, 0x0628\n"
        "1: bge  t0, t1, 2f\n"
        "   sb   zero, 0(t0)\n"
        "   addi t0, t0, 1\n"
        "   j    1b\n"

        /* zero next_grid: 0x0640–0x06a3 (100 bytes) */
        "2: li   t0, 0x0640\n"
        "li   t1, 0x06a4\n"
        "3: bge  t0, t1, 4f\n"
        "   sb   zero, 0(t0)\n"
        "   addi t0, t0, 1\n"
        "   j    3b\n"

        /* zero debug region: 0x0700–0x0723 (36 bytes) */
        "4: li   t0, 0x0700\n"
        "li   t1, 0x0724\n"
        "5: bge  t0, t1, 6f\n"
        "   sb   zero, 0(t0)\n"
        "   addi t0, t0, 1\n"
        "   j    5b\n"

        "6: call main\n"
        "7: j    7b\n"
    );
}

static void ghost_exchange(int my_row, int my_col,
                           int has_N, int has_S,
                           int has_W, int has_E)
{
    uint32_t ghost_flags = 0;

    /* Phase 1: everyone sends */
    if (has_S) { send_ghost(TILE_ID(my_row + 1, my_col), row_bitmap(SIZE - 1)); ghost_flags |= 0x1; }
    if (has_N) { send_ghost(TILE_ID(my_row - 1, my_col), row_bitmap(0));        ghost_flags |= 0x2; }
    if (has_E) { send_ghost(TILE_ID(my_row, my_col + 1), col_bitmap(SIZE - 1)); ghost_flags |= 0x4; }
    if (has_W) { send_ghost(TILE_ID(my_row, my_col - 1), col_bitmap(0));        ghost_flags |= 0x8; }

    /* Phase 2: receive in fixed order */

    if (has_N) {
        uint32_t bm = recv_ghost();
        *debug_last_recv_n = bm;
        for (int i = 0; i < SIZE; i++) ghost_N[i] = (uint8_t)((bm >> i) & 1u);
    }

    if (has_S) {
        uint32_t bm = recv_ghost();
        *debug_last_recv_s = bm;
        for (int i = 0; i < SIZE; i++) ghost_S[i] = (uint8_t)((bm >> i) & 1u);
    }

    if (has_E) {
        uint32_t bm = recv_ghost();
        *debug_last_recv_e = bm;
        for (int i = 0; i < SIZE; i++) ghost_E[i] = (uint8_t)((bm >> i) & 1u);
    }

    if (has_W) {
        uint32_t bm = recv_ghost();
        *debug_last_recv_w = bm;
        for (int i = 0; i < SIZE; i++) ghost_W[i] = (uint8_t)((bm >> i) & 1u);
    }

    *debug_ghost_flags = ghost_flags;
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

    if (left)  n += grid[idx - 1] & 1;
    else       n += ghost_W[row] & 1;

    if (right) n += grid[idx + 1] & 1;
    else       n += ghost_E[row] & 1;

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

static void seed_grid(void)
{
    for (int i = 0; i < SIZE * SIZE; i++) grid[i] = 0u;

    grid[4 * SIZE + 5] = 1;
    grid[5 * SIZE + 5] = 1;
    grid[6 * SIZE + 5] = 1;

    grid[8 * SIZE + 0] = 1;
    grid[9 * SIZE + 0] = 1;

    grid[8 * SIZE + 9] = 1;
    grid[9 * SIZE + 9] = 1;
}

int main(void)
{
    uint32_t my_id  = noc_read_my_id();
    int my_row = (int)TILE_ROW(my_id);
    int my_col = (int)TILE_COL(my_id);

    /* Keep the original working rectangular mesh logic */
    int has_N = (my_row > 0);
    int has_S = (my_row < MESH_ROWS - 1);
    int has_W = (my_col > 0);
    int has_E = (my_col < MESH_COLS - 1);

    noc_signal(SIG_BOOT_ALIVE);

    seed_grid();

    noc_signal(SIG_SEED_LIVE);

    uint32_t iter = 0;
    while (1) {
        *debug_iter_count = iter;

        ghost_exchange(my_row, my_col, has_N, has_S, has_W, has_E);

        uint8_t neighbor_counts[9] = {0};

        for (int row = 0; row < SIZE; row++) {
            for (int col = 0; col < SIZE; col++) {
                int alive = grid[row * SIZE + col] & 1;
                int n     = neighbour_count(row, col);

                next_grid[row * SIZE + col] =
                    (uint8_t)(alive ? (n == 2 || n == 3) : (n == 3));

                if (n <= 8) neighbor_counts[n]++;
            }
        }

        for (int i = 0; i <= 8; i++) {
            debug_neighbor_hist[i] = neighbor_counts[i];
        }

        noc_signal(SIG_MATH_DONE);

        for (int i = 0; i < SIZE * SIZE; i++)
            grid[i] = next_grid[i];

        noc_signal(SIG_GEN_STABLE);

        iter++;
    }

    return 0;
}