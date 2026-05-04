#include <stdint.h>

#define NOC_INJECT_BASE  0x80000000u
#define NOC_RECV_BASE    0x80000004u
#define NOC_ID_BASE      0x80000008u

#define TILE_ID(r,c)     (((uint32_t)(r) << 2) | (uint32_t)(c))
#define FLIT_DEST_SHIFT  28u
#define FLIT_BMAP_MASK   0x3FFu
#define FLIT_VALID_BIT   0x400u

/* ── CHANGE 1: tag lives in bits [12:11] of the payload ────────────────────
 * The receiver reads the tag to know which ghost buffer to fill.
 * This removes all dependence on flit arrival order.
 * TAG_W = flit carries the sender's right column  -> receiver stores as ghost_W
 * TAG_E = flit carries the sender's left  column  -> receiver stores as ghost_E
 * ─────────────────────────────────────────────────────────────────────────── */
#define FLIT_TAG_SHIFT   11u
#define FLIT_TAG_MASK    0x1800u   /* bits [12:11] */
#define TAG_W            0u        /* "store into ghost_W of receiver" */
#define TAG_E            1u        /* "store into ghost_E of receiver" */

#define SIG_BOOT_ALIVE   0xF0000001u
#define SIG_SEED_LIVE    0xF0000002u
#define SIG_MATH_DONE    0xF0000003u
#define SIG_GEN_STABLE   0xF0000004u

#define SIZE       10

#define PHYS_ROWS    3
#define PHYS_COLS    3
#define ACTIVE_ROWS  3
#define ACTIVE_COLS  3
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

#define DEBUG_PHASE       (DEBUG_BASE + 96)
#define DEBUG_GRID0_PRE   (DEBUG_BASE + 100)
#define DEBUG_NGRID0_PRE  (DEBUG_BASE + 104)
#define DEBUG_GRID0_POST  (DEBUG_BASE + 108)

#define debug_phase       ((volatile uint32_t *)DEBUG_PHASE)
#define debug_grid0_pre   ((volatile uint32_t *)DEBUG_GRID0_PRE)
#define debug_ngrid0_pre  ((volatile uint32_t *)DEBUG_NGRID0_PRE)
#define debug_grid0_post  ((volatile uint32_t *)DEBUG_GRID0_POST)

#define PHASE_BOOT          0x01u
#define PHASE_SEEDED        0x02u
#define PHASE_ITER_START    0x10u
#define PHASE_SENT_WEST     0x11u
#define PHASE_SENT_EAST     0x12u
#define PHASE_WAIT_W_RECV   0x13u
#define PHASE_DONE_W_RECV   0x14u
#define PHASE_WAIT_E_RECV   0x15u
#define PHASE_DONE_E_RECV   0x16u
#define PHASE_COMPUTE_DONE  0x20u
#define PHASE_MATH_SIG_SENT 0x21u
#define PHASE_PRE_COPY      0x30u
#define PHASE_POST_COPY     0x31u
#define PHASE_GEN_SIG_SENT  0x32u

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

static inline uint32_t noc_read_my_id(void)
{
    return *(volatile uint32_t *)NOC_ID_BASE & 0xFu;
}

static inline void noc_signal(uint32_t sig_word)
{
    noc_write(sig_word);
}


static inline void send_ghost(uint32_t dest_id, uint32_t tag, uint32_t bm)
{
    uint32_t payload = ((tag & 0x3u) << FLIT_TAG_SHIFT)
                     | FLIT_VALID_BIT
                     | (bm & FLIT_BMAP_MASK);
    noc_write((dest_id << FLIT_DEST_SHIFT) | payload);
}


static void recv_ghost_tagged(int need_W, int need_E)
{
    int got_W = !need_W;   /* already "done" if we don't need it */
    int got_E = !need_E;

    while (!got_W || !got_E) {
        uint32_t p = *(volatile uint32_t *)NOC_RECV_BASE;
        if (!(p & FLIT_VALID_BIT)) continue;   /* empty FIFO — spin */

        uint32_t tag = (p & FLIT_TAG_MASK) >> FLIT_TAG_SHIFT;
        uint32_t bm  =  p & FLIT_BMAP_MASK;

        if (tag == TAG_W && !got_W) {
            *debug_last_recv_w = bm;
            for (int i = 0; i < SIZE; i++) ghost_W[i] = (bm >> i) & 1u;
            got_W = 1;
        } else if (tag == TAG_E && !got_E) {
            *debug_last_recv_e = bm;
            for (int i = 0; i < SIZE; i++) ghost_E[i] = (bm >> i) & 1u;
            got_E = 1;
        }
        /* unknown tag or duplicate: ignore and keep spinning */
    }
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
        bm = bm | (bit << i);
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
        "li   t0, 0x0600\n"  "li   t1, 0x0628\n"
        "1: bge  t0, t1, 2f\n"  "sb   zero, 0(t0)\n"
        "   addi t0, t0, 1\n"  "j    1b\n"
        "2: li   t0, 0x0640\n"  "li   t1, 0x06a4\n"
        "3: bge  t0, t1, 4f\n"  "sb   zero, 0(t0)\n"
        "   addi t0, t0, 1\n"  "j    3b\n"
        "4: li   t0, 0x0700\n"  "li   t1, 0x0780\n"
        "5: bge  t0, t1, 6f\n"  "sb   zero, 0(t0)\n"
        "   addi t0, t0, 1\n"  "j    5b\n"
        "6: call main\n"
        "7: j    7b\n"
    );
}

static void idle_tile_forever(void)
{
    while (1) { (void)*(volatile uint32_t *)NOC_RECV_BASE; }
}

int main(void)
{
    *(volatile uint32_t *)0x0730u = 0xDEADBEEFu;
    *(volatile uint32_t *)0x0734u = 0xCAFEBABEu;

    uint32_t my_id = noc_read_my_id();
    *(volatile uint32_t *)DEBUG_MY_ID = my_id;

    int phys_row = (int)((my_id >> 2) & 0x3u);
    int phys_col = (int)(my_id & 0x3u);

    if (phys_row >= ACTIVE_ROWS || phys_col >= ACTIVE_COLS) {
        idle_tile_forever();
    }

    int my_row = phys_row;
    int my_col = phys_col;

    *debug_phase = PHASE_BOOT;
    noc_signal(SIG_BOOT_ALIVE);

    for (int i = 0; i < SIZE * SIZE; i++) grid[i] = 0u;
    grid[3 * SIZE + 4] = 1;
    grid[3 * SIZE + 6] = 1;
    grid[4 * SIZE + 5] = 1;
    grid[5 * SIZE + 5] = 1;
    grid[6 * SIZE + 5] = 1;
    grid[7 * SIZE + 4] = 1;
    grid[7 * SIZE + 6] = 1;

    *debug_phase = PHASE_SEEDED;
    noc_signal(SIG_SEED_LIVE);

    /* Neighbour flags — computed once, never change */
    int has_W = (my_col > 0);
    int has_E = (my_col < ACTIVE_COLS - 1);

    uint32_t iter = 0;
    while (1) {
        *debug_iter_count = iter;

        __sync_synchronize();


        if (has_W) {
            /* send right column to western neighbour; they store it as ghost_E */
            send_ghost(TILE_ID(my_row, my_col - 1), TAG_E, col_bitmap(SIZE - 1));
            *debug_ghost_flags |= 0x8;
            *debug_phase = PHASE_SENT_WEST;
        }

        if (has_E) {
            /* send left column to eastern neighbour; they store it as ghost_W */
            send_ghost(TILE_ID(my_row, my_col + 1), TAG_W, col_bitmap(0));
            *debug_ghost_flags |= 0x4;
            *debug_phase = PHASE_SENT_EAST;
        }

        *debug_phase = PHASE_WAIT_W_RECV;
        recv_ghost_tagged(has_W, has_E);
        *debug_phase = PHASE_DONE_E_RECV;

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

        *debug_phase = PHASE_COMPUTE_DONE;
        noc_signal(SIG_MATH_DONE);
        *debug_phase = PHASE_MATH_SIG_SENT;

        *debug_grid0_pre  = (uint32_t)grid[0];
        *debug_ngrid0_pre = (uint32_t)next_grid[0];

        for (int i = 0; i < SIZE * SIZE; i++)
            grid[i] = next_grid[i];

        *debug_grid0_post = (uint32_t)grid[0];

        noc_signal(SIG_GEN_STABLE);
        iter++;
    }
    return 0;
}