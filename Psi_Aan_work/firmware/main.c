/*
 * main.c — parameterized Game-of-Life firmware for a tiled NoC mesh.
 *
 * Tile ID encoding (matches hardware TILE_ID parameter):
 *   id[3:2] = row  (0-based)
 *   id[1:0] = col  (0-based)
 *
 * To run a 2×2 logical GoL on 3×3 physical hardware: set MESH_ROWS=2,
 * MESH_COLS=2.  Tiles with row>=MESH_ROWS or col>=MESH_COLS idle immediately
 * and never touch the NoC, so they cannot deadlock the active tiles.
 *
 * Ghost-exchange protocol (deadlock-free):
 *   Phase 1 (send, non-blocking): S → N → E → W
 *   Phase 2 (receive, blocking):  N → S → E → W
 *
 * The receive order is consistent with send order: each tile's northern
 * neighbour sends southward first → that flit arrives first → received first.
 *
 * After each recv_ghost() the FIFO pops automatically one cycle later
 * (hardware driven by cpu_read_q in mesh_router).  The *reg=0 write in
 * firmware is harmless — the hardware ignores writes to NOC_RECV_BASE.
 */

#include <stdint.h>

/* ── Hardware MMIO ──────────────────────────────────────────────────────── */
#define NOC_INJECT_BASE  0x80000000u
#define NOC_RECV_BASE    0x80000004u
#define NOC_ID_BASE      0x80000008u

/* ── Tile ID encoding ───────────────────────────────────────────────────── */
#define TILE_ID(r,c)   (((uint32_t)(r) << 2) | (uint32_t)(c))
#define TILE_ROW(id)   (((uint32_t)(id) >> 2) & 0x3u)
#define TILE_COL(id)   ((uint32_t)(id) & 0x3u)

/* ── Flit format (CPU word written to NOC_INJECT_BASE) ──────────────────── */
/*   bits [31:28] = destination tile ID  (4 bits)                           */
/*   bit  [10]    = FLIT_VALID_BIT — marks a ghost flit (not a signal)      */
/*   bits [9:0]   = 10-bit cell bitmap                                       */
#define FLIT_DEST_SHIFT  28u
#define FLIT_BMAP_MASK   0x3FFu
#define FLIT_VALID_BIT   0x400u

/* ── Protocol signals (dest=0xF off-mesh, bit10=0 so not a ghost flit) ──── */
#define SIG_BOOT_ALIVE   0xF0000001u
#define SIG_SEED_LIVE    0xF0000002u
#define SIG_MATH_DONE    0xF0000003u
#define SIG_GEN_STABLE   0xF0000004u
#define SIG_STOP         0xF0000005u

/* ── Mesh geometry ──────────────────────────────────────────────────────── */
#define PHYS_ROWS  3   /* must match Verilog top-level */
#define PHYS_COLS  3

#define MESH_ROWS  3   /* logical active sub-mesh — reduce to 2 for 2×2     */
#define MESH_COLS  3

#define SIZE  10       /* cells per tile side */

/* ── SRAM layout ────────────────────────────────────────────────────────── */
#define GRID_BASE       0x0500u
#define GHOST_BASE      0x0600u
#define NEXT_GRID_BASE  0x0640u

/*  ghost_N[0..9]  @ 0x0600  — northern neighbour's bottom row  */
/*  ghost_S[0..9]  @ 0x060A  — southern neighbour's top row     */
/*  ghost_W[0..9]  @ 0x0614  — western neighbour's right col    */
/*  ghost_E[0..9]  @ 0x061E  — eastern neighbour's left col     */
#define ghost_N   ((volatile uint8_t *)(GHOST_BASE +  0))
#define ghost_S   ((volatile uint8_t *)(GHOST_BASE + 10))
#define ghost_W   ((volatile uint8_t *)(GHOST_BASE + 20))
#define ghost_E   ((volatile uint8_t *)(GHOST_BASE + 30))

#define grid      ((volatile uint8_t *)GRID_BASE)
#define next_grid ((volatile uint8_t *)NEXT_GRID_BASE)

/* ── Debug region 0x0700–0x0723 ────────────────────────────────────────── */
#define DEBUG_BASE           0x0700u
#define DEBUG_LAST_RECV_N    (DEBUG_BASE +  0)
#define DEBUG_LAST_RECV_S    (DEBUG_BASE +  4)
#define DEBUG_LAST_RECV_W    (DEBUG_BASE +  8)
#define DEBUG_LAST_RECV_E    (DEBUG_BASE + 12)
#define DEBUG_NEIGHBOR_HIST  (DEBUG_BASE + 16)  /* 9 bytes */
#define DEBUG_ITER_COUNT     (DEBUG_BASE + 28)
#define DEBUG_GHOST_FLAGS    (DEBUG_BASE + 32)

#define debug_last_recv_n   ((volatile uint32_t *)DEBUG_LAST_RECV_N)
#define debug_last_recv_s   ((volatile uint32_t *)DEBUG_LAST_RECV_S)
#define debug_last_recv_w   ((volatile uint32_t *)DEBUG_LAST_RECV_W)
#define debug_last_recv_e   ((volatile uint32_t *)DEBUG_LAST_RECV_E)
#define debug_neighbor_hist ((volatile uint8_t  *)DEBUG_NEIGHBOR_HIST)
#define debug_iter_count    ((volatile uint32_t *)DEBUG_ITER_COUNT)
#define debug_ghost_flags   ((volatile uint32_t *)DEBUG_GHOST_FLAGS)

/* ── NoC primitives ─────────────────────────────────────────────────────── */

static inline void noc_write(uint32_t word)
{
    *(volatile uint32_t *)NOC_INJECT_BASE = word;
}

static inline uint32_t noc_read_my_id(void)
{
    return *(volatile uint32_t *)NOC_ID_BASE & 0xFu;
}

static inline void noc_signal(uint32_t sig_word)
{
    noc_write(sig_word);
}

/*
 * send_ghost — pack dest_id into bits [31:28], set FLIT_VALID_BIT, add bitmap.
 * The router builds the 34-bit flit as {1'b1, dat_o[31:28], dat_o[28:0]}.
 * dest_id must be <= 15 (4-bit field).
 */
static inline void send_ghost(uint32_t dest_id, uint32_t bm)
{
    noc_write((dest_id << FLIT_DEST_SHIFT) | FLIT_VALID_BIT | (bm & FLIT_BMAP_MASK));
}

/*
 * recv_ghost — spin until a flit with FLIT_VALID_BIT arrives in the FIFO,
 * then return its 10-bit bitmap.  The hardware FIFO pops automatically one
 * cycle after the WB read transaction (cpu_read_q in mesh_router.v).
 */
static inline uint32_t recv_ghost(void)
{
    volatile uint32_t *reg = (volatile uint32_t *)NOC_RECV_BASE;
    uint32_t p;
    do { p = *reg; } while (!(p & FLIT_VALID_BIT));
    return p & FLIT_BMAP_MASK;
}

/* ── Bitmap helpers ─────────────────────────────────────────────────────── */

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

/* ── Startup ────────────────────────────────────────────────────────────── */

__attribute__((section(".text.init"), naked))
void _start(void)
{
    __asm__ volatile (
        "li   sp, 0x7fc\n"

        /* zero ghost buffers 0x0600–0x0627 */
        "li   t0, 0x0600\n"  "li   t1, 0x0628\n"
        "1: bge  t0, t1, 2f\n"
        "   sb   zero, 0(t0)\n"  "   addi t0, t0, 1\n"  "   j 1b\n"

        /* zero next_grid 0x0640–0x06a3 */
        "2: li   t0, 0x0640\n"  "li   t1, 0x06a4\n"
        "3: bge  t0, t1, 4f\n"
        "   sb   zero, 0(t0)\n"  "   addi t0, t0, 1\n"  "   j 3b\n"

        /* zero debug region 0x0700–0x0723 */
        "4: li   t0, 0x0700\n"  "li   t1, 0x0724\n"
        "5: bge  t0, t1, 6f\n"
        "   sb   zero, 0(t0)\n"  "   addi t0, t0, 1\n"  "   j 5b\n"

        "6: call main\n"
        "7: j    7b\n"
    );
}

/* ── Ghost exchange ──────────────────────────────────────────────────────── */

static void ghost_exchange(int my_row, int my_col,
                           int has_N, int has_S,
                           int has_W, int has_E)
{
    uint32_t ghost_flags = 0;

    /* Phase 1 — send (S→N→E→W, non-blocking) */
    if (has_S) { send_ghost(TILE_ID(my_row+1, my_col), row_bitmap(SIZE-1)); ghost_flags |= 0x1; }
    if (has_N) { send_ghost(TILE_ID(my_row-1, my_col), row_bitmap(0));      ghost_flags |= 0x2; }
    if (has_E) { send_ghost(TILE_ID(my_row, my_col+1), col_bitmap(SIZE-1)); ghost_flags |= 0x4; }
    if (has_W) { send_ghost(TILE_ID(my_row, my_col-1), col_bitmap(0));      ghost_flags |= 0x8; }

    /* Phase 2 — receive (N→S→E→W, blocking)
     * Consistent with send order: northern neighbour sent south first,
     * so its flit is first in our FIFO → we receive N first. */
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

/* ── Neighbour count ────────────────────────────────────────────────────── */

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
    else       n += ghost_W[row]  & 1;

    if (right) n += grid[idx + 1] & 1;
    else       n += ghost_E[row]  & 1;

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

/* ── Seed ───────────────────────────────────────────────────────────────── */
/*
 * Vertical blinker at rows 4,5,6 col 5.
 *   gen 0: rows 4,5,6 col 5   (vertical)
 *   gen 1: row 5 cols 4,5,6   (horizontal)
 *   gen 2: rows 4,5,6 col 5   (vertical again)
 *
 * The testbench expected_blinker_seed() MUST match this pattern exactly.
 */
static void seed_grid(void)
{
    for (int i = 0; i < SIZE * SIZE; i++) grid[i] = 0u;
    grid[4 * SIZE + 5] = 1;
    grid[5 * SIZE + 5] = 1;
    grid[6 * SIZE + 5] = 1;
}

/* ── Idle for inactive tiles ────────────────────────────────────────────── */

static void idle_tile(void)
{
    noc_signal(SIG_BOOT_ALIVE);
    while (1) { __asm__ volatile ("nop"); }
}

/* ── main ───────────────────────────────────────────────────────────────── */

int main(void)
{
    uint32_t my_id  = noc_read_my_id();
    int phys_row    = (int)TILE_ROW(my_id);
    int phys_col    = (int)TILE_COL(my_id);

    /* Tiles outside the logical mesh idle immediately — they never
     * enter ghost_exchange so they cannot block or corrupt the network. */
    if (phys_row >= MESH_ROWS || phys_col >= MESH_COLS) {
        idle_tile();
    }

    int my_row = phys_row;
    int my_col = phys_col;

    /* Neighbour flags derived from LOGICAL mesh bounds. */
    int has_N = (my_row > 0);
    int has_S = (my_row < MESH_ROWS - 1);
    int has_W = (my_col > 0);
    int has_E = (my_col < MESH_COLS - 1);

    noc_signal(SIG_BOOT_ALIVE);

    seed_grid();

    /* Generation 0 = seed.  Set iter count BEFORE signalling seed-live
     * so the testbench sees a consistent snapshot. */
    *debug_iter_count = 0;
    noc_signal(SIG_SEED_LIVE);

    uint32_t iter = 0;

    while (1) {
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

        for (int i = 0; i <= 8; i++)
            debug_neighbor_hist[i] = neighbor_counts[i];

        noc_signal(SIG_MATH_DONE);

        /* Commit grid THEN update iter count — testbench polls iter_count
         * and reads the grid; the grid must be complete before iter_count
         * advances. */
        for (int i = 0; i < SIZE * SIZE; i++)
            grid[i] = next_grid[i];

        iter++;
        *debug_iter_count = iter;

        noc_signal(SIG_GEN_STABLE);

        /* Brief spin so testbench can snapshot this generation. */
        for (volatile uint32_t spin = 0; spin < 2000; spin++)
            __asm__ volatile ("nop");
    }

    return 0;
}