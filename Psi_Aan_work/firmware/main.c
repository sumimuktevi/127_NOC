#include <stdint.h>

#define NOC_INJECT_BASE  0x80000000u
#define NOC_RECV_BASE    0x80000004u
#define NOC_ID_BASE      0x80000008u

#define TILE_ID(r,c)     (((uint32_t)(r) << 2) | (uint32_t)(c))
#define FLIT_DEST_SHIFT  28u
#define FLIT_BMAP_MASK   0x3FFu
#define FLIT_VALID_BIT   0x400u

#define SIG_BOOT_ALIVE   0xF0000001u
#define SIG_SEED_LIVE    0xF0000002u
#define SIG_MATH_DONE    0xF0000003u
#define SIG_GEN_STABLE   0xF0000004u

#define SIZE       10

/* ── CHANGE 1 ──────────────────────────────────────────────────────────────
 * Physical grid is always 3×3 in RTL (mesh_3x3.v).
 * ACTIVE_ROWS / ACTIVE_COLS define the logical GoL region.
 * To run a 2×2 mesh: set ACTIVE_ROWS 2 and ACTIVE_COLS 2.
 * Tiles with phys_row >= ACTIVE_ROWS or phys_col >= ACTIVE_COLS idle.
 * MESH_ROWS/MESH_COLS kept as aliases so nothing else needs to change.
 * ────────────────────────────────────────────────────────────────────────── */
#define PHYS_ROWS    3
#define PHYS_COLS    3
#define ACTIVE_ROWS  2      /* ← change this to resize the logical mesh */
#define ACTIVE_COLS  2      /* ← change this to resize the logical mesh */
#define MESH_ROWS    ACTIVE_ROWS
#define MESH_COLS    ACTIVE_COLS

#define GRID_BASE       0x0500u
#define GHOST_BASE      0x0600u
#define NEXT_GRID_BASE  0x0640u

#define DEBUG_BASE           0x0700u
#define DEBUG_LAST_RECV_N    (DEBUG_BASE +  0)
#define DEBUG_LAST_RECV_S    (DEBUG_BASE +  4)
#define DEBUG_LAST_RECV_W    (DEBUG_BASE +  8)
#define DEBUG_LAST_RECV_E    (DEBUG_BASE + 12)
#define DEBUG_NEIGHBOR_HIST  (DEBUG_BASE + 16)
#define DEBUG_ITER_COUNT     (DEBUG_BASE + 28)
#define DEBUG_GHOST_FLAGS    (DEBUG_BASE + 32)
#define DEBUG_LIVE_COUNT     (DEBUG_BASE + 36)
#define DEBUG_COL0_BM        (DEBUG_BASE + 40)
#define DEBUG_MY_ID          (DEBUG_BASE + 44)
#define DEBUG_SEND_BM        (DEBUG_BASE + 48)
#define DEBUG_ROW_TRACE_BASE (DEBUG_BASE + 52)
#define DEBUG_ROW8_AT_CALL   (DEBUG_BASE + 52)
#define DEBUG_ROW9_AT_CALL   (DEBUG_BASE + 56)

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
#define debug_send_bm       ((volatile uint32_t *)DEBUG_SEND_BM)

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

static inline uint32_t recv_ghost(void)
{
    uint32_t p;
    do { p = *(volatile uint32_t *)NOC_RECV_BASE; } while (!(p & FLIT_VALID_BIT));
    return p & FLIT_BMAP_MASK;
}

__attribute__((noinline))
static uint32_t col_bitmap(int col)
{
    volatile uint8_t *g = (volatile uint8_t *)GRID_BASE;
    uint32_t bm = 0;
    uint32_t i;
    for (i = 0; i < 10; i++) {
        uint32_t cell = g[i * 10 + col];
        uint32_t bit  = cell & 1u;
        uint32_t shifted = bit << i;
        bm = bm | shifted;
    }
    return bm;
}

__attribute__((noinline))
static int neighbour_count(int row, int col)
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

__attribute__((section(".text.init"), naked))
void _start(void)
{
    __asm__ volatile (
        "li   sp, 0x7fc\n"
        "li   t0, 0x0600\n"
        "li   t1, 0x0628\n"
        "1: bge  t0, t1, 2f\n"
        "   sb   zero, 0(t0)\n"
        "   addi t0, t0, 1\n"
        "   j    1b\n"
        "2: li   t0, 0x0640\n"
        "li   t1, 0x06a4\n"
        "3: bge  t0, t1, 4f\n"
        "   sb   zero, 0(t0)\n"
        "   addi t0, t0, 1\n"
        "   j    3b\n"
        "4: li   t0, 0x0700\n"
        "li   t1, 0x0780\n"
        "5: bge  t0, t1, 6f\n"
        "   sb   zero, 0(t0)\n"
        "   addi t0, t0, 1\n"
        "   j    5b\n"
        "6: call main\n"
        "7: j    7b\n"
    );
}

/* ── CHANGE 2 ──────────────────────────────────────────────────────────────
 * Tiles outside the active mesh spin here draining any stray flits.
 * They never participate in ghost exchange or GoL compute.
 * ────────────────────────────────────────────────────────────────────────── */
static void idle_tile_forever(void)
{
    while (1) {
        /* drain FIFO so it never fills and blocks routing for active tiles */
        (void)*(volatile uint32_t *)NOC_RECV_BASE;
    }
}

int main(void)
{
    /* MAGIC CHECK — proves testbench can read what firmware writes */
    *(volatile uint32_t *)0x0730u = 0xDEADBEEFu;
    *(volatile uint32_t *)0x0734u = 0xCAFEBABEu;

    uint32_t my_id = noc_read_my_id();
    *(volatile uint32_t *)DEBUG_MY_ID = my_id;

    /* ── CHANGE 3 ────────────────────────────────────────────────────────────
     * Decode physical row/col from the hardware ID.
     * TILE_ID = (r<<2)|c, so row = id>>2, col = id&3.
     * This is identical to the working code — just renamed phys_row/phys_col
     * to make the physical vs logical distinction explicit.
     * ──────────────────────────────────────────────────────────────────────── */
    int phys_row = (int)((my_id >> 2) & 0x3u);
    int phys_col = (int)(my_id & 0x3u);

    /* ── CHANGE 4 ────────────────────────────────────────────────────────────
     * Gate on ACTIVE mesh size.  Tiles outside the logical region idle.
     * For a 3×3 active mesh this never triggers (all tiles pass).
     * For a 2×2 active mesh, tiles at row≥2 or col≥2 idle here.
     * ──────────────────────────────────────────────────────────────────────── */
    if (phys_row >= ACTIVE_ROWS || phys_col >= ACTIVE_COLS) {
        idle_tile_forever();
    }

    /* logical == physical (active region is always the top-left corner) */
    int my_row = phys_row;
    int my_col = phys_col;

    noc_signal(SIG_BOOT_ALIVE);

    for (int i = 0; i < SIZE * SIZE; i++) grid[i] = 0u;
    grid[4 * SIZE + 5] = 1; grid[5 * SIZE + 5] = 1; grid[6 * SIZE + 5] = 1;

    noc_signal(SIG_SEED_LIVE);

    uint32_t iter = 0;
    while (1) {
        *debug_iter_count = iter;

        __sync_synchronize();

        /* ── CHANGE 5 ────────────────────────────────────────────────────────
         * has_W / has_E now check ACTIVE_COLS instead of MESH_COLS.
         * (MESH_COLS is aliased to ACTIVE_COLS above so this is a no-op
         *  for the 3×3 case, but it's correct for any ACTIVE_COLS value.)
         * ──────────────────────────────────────────────────────────────────── */
        if (my_col > 0) {
            uint32_t dest = TILE_ID(my_row, my_col - 1);
            uint32_t bm0  = 0x300;
            noc_write((dest << FLIT_DEST_SHIFT) | FLIT_VALID_BIT | (bm0 & FLIT_BMAP_MASK));
            *debug_ghost_flags |= 0x8;
        }

        if (my_col < ACTIVE_COLS - 1) {
            uint32_t dest = TILE_ID(my_row, my_col + 1);
            uint32_t bm9  = 0x300;
            noc_write((dest << FLIT_DEST_SHIFT) | FLIT_VALID_BIT | (bm9 & FLIT_BMAP_MASK));
            *debug_ghost_flags |= 0x4;
        }

        if (my_col > 0) {
            uint32_t bmr0 = recv_ghost();
            *debug_last_recv_w = bmr0;
            for (int i = 0; i < SIZE; i++) ghost_W[i] = (bmr0 >> i) & 1u;
        }

        if (my_col < ACTIVE_COLS - 1) {
            uint32_t bmr9 = recv_ghost();
            *debug_last_recv_e = bmr9;
            for (int i = 0; i < SIZE; i++) ghost_E[i] = (bmr9 >> i) & 1u;
        }

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
        for (int i = 0; i <= 8; i++)
            debug_neighbor_hist[i] = neighbor_counts[i];

        noc_signal(SIG_MATH_DONE);

        for (int i = 0; i < SIZE * SIZE; i++)
            grid[i] = next_grid[i];

        noc_signal(SIG_GEN_STABLE);
        iter++;
    }
    return 0;
}