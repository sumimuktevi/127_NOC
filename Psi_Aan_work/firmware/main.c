#include <stdint.h>

#define NOC_INJECT_BASE  0x80000000u
#define NOC_RECV_BASE    0x80000004u
#define NOC_ID_BASE      0x80000008u

#define TILE_ID(r,c)     (((uint32_t)(r) << 2) | (uint32_t)(c))
#define FLIT_DEST_SHIFT  28u
#define FLIT_BMAP_MASK   0x3FFu
#define FLIT_VALID_BIT   0x400u

/* Protocol signals — all use dest=0xF (off-mesh in any mesh up to 4x4).
 * Payload lower 28 bits must NOT have bit 10 set (FLIT_VALID_BIT) to avoid
 * being mistaken for ghost flits by recv_ghost().
 * Pattern: 0xFXXXXXXX where payload bits 10 = 0.
 * Using 0xF0000xNN where NN is a unique tag.                              */
#define SIG_BOOT_ALIVE   0xF0000001u   /* dest=0xF off-mesh, no bit10     */
#define SIG_SEED_LIVE    0xF0000002u
#define SIG_MATH_DONE    0xF0000003u
#define SIG_GEN_STABLE   0xF0000004u   /* testbench watches for this       */
#define SIG_STOP         0xF0000005u   /* host sends this to halt          */


#define SIZE       10
#define MESH_ROWS  3
#define MESH_COLS  3

#define GRID_BASE       0x0600u
#define GHOST_BASE      0x0670u
#define NEXT_GRID_BASE  0x06A0u

#define grid      ((volatile uint8_t *)GRID_BASE)
#define ghost_N   ((volatile uint8_t *)(GHOST_BASE +  0))
#define ghost_S   ((volatile uint8_t *)(GHOST_BASE + 10))
#define ghost_W   ((volatile uint8_t *)(GHOST_BASE + 20))
#define ghost_E   ((volatile uint8_t *)(GHOST_BASE + 30))
#define ghost_NW  ((volatile uint8_t *)(GHOST_BASE + 40))
#define ghost_NE  ((volatile uint8_t *)(GHOST_BASE + 41))
#define ghost_SW  ((volatile uint8_t *)(GHOST_BASE + 42))
#define ghost_SE  ((volatile uint8_t *)(GHOST_BASE + 43))
#define next_grid ((volatile uint8_t *)NEXT_GRID_BASE)

static inline void noc_write(uint32_t word)
{
    *(volatile uint32_t *)NOC_INJECT_BASE = word;
}

static inline uint32_t noc_recv_raw(void)
{
    return *(volatile uint32_t *)NOC_RECV_BASE;
}

static inline uint32_t noc_recv(void)
{
    volatile uint32_t *reg = (volatile uint32_t *)NOC_RECV_BASE;
    uint32_t val = *reg & 0x0FFFFFFFu;
    if (val != 0) *reg = 0;
    return val;
}

static inline uint32_t noc_read_my_id(void)
{
    return *(volatile uint32_t *)NOC_ID_BASE & 0xFu;
}

static inline void noc_signal(uint32_t sig_word)
{
    noc_write(sig_word);
}

static inline void noc_inject(uint8_t dest_row, uint8_t dest_col,
                               uint32_t payload28)
{
    noc_write((TILE_ID(dest_row, dest_col) << FLIT_DEST_SHIFT)
              | (payload28 & 0x0FFFFFFFu));
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

static inline void send_ghost(uint32_t dest_id, uint32_t type, uint32_t bm)
{
    noc_write((dest_id << FLIT_DEST_SHIFT) | ((type & 0xFu) << 24) | FLIT_VALID_BIT | (bm & FLIT_BMAP_MASK));
}

static inline uint32_t recv_ghost(void)
{
    volatile uint32_t *reg = (volatile uint32_t *)NOC_RECV_BASE;
    uint32_t p;
    do { p = *reg; } while (!(p & FLIT_VALID_BIT));
    *reg = 0; // ACK/Clear flit from FIFO
    return p;
}

__attribute__((section(".text.init"), naked))
void _start(void)
{
    __asm__ volatile (
        "li   sp, 0x7fc\n"
        "li   t0, 0x0670\n"
        "li   t1, 0x06a0\n"
        "1: bge  t0, t1, 2f\n"
        "   sb   zero, 0(t0)\n"
        "   addi t0, t0, 1\n"
        "   j    1b\n"
        "2: li   t0, 0x06a0\n"
        "li   t1, 0x0704\n"
        "3: bge  t0, t1, 4f\n"
        "   sb   zero, 0(t0)\n"
        "   addi t0, t0, 1\n"
        "   j    3b\n"
        "4: call main\n"
        "5: j    5b\n"
    );
}

/* Delay for NOC to clear flits and prevent collisions */
static void delay(void) {
    for (volatile int i = 0; i < 50; i++);
}

static void ghost_exchange(int my_row, int my_col,
                           int has_N, int has_S,
                           int has_W, int has_E)
{
    /* Use types: 0=N_to_S, 1=S_to_N, 2=W_to_E, 3=E_to_W, 4-7=Corners */
    
    /* Phase 1: Rows S and N */
    if (has_S) send_ghost(TILE_ID(my_row+1, my_col), 0, row_bitmap(SIZE-1));
    delay();
    if (has_N) {
        uint32_t p = recv_ghost();
        uint32_t bm = p & FLIT_BMAP_MASK;
        for (int i = 0; i < SIZE; i++) ghost_N[i] = (uint8_t)((bm >> i) & 1u);
    }
    delay();
    if (has_N) send_ghost(TILE_ID(my_row-1, my_col), 1, row_bitmap(0));
    delay();
    if (has_S) {
        uint32_t p = recv_ghost();
        uint32_t bm = p & FLIT_BMAP_MASK;
        for (int i = 0; i < SIZE; i++) ghost_S[i] = (uint8_t)((bm >> i) & 1u);
    }
    delay();

    /* Phase 2: Columns E and W */
    if (has_E) send_ghost(TILE_ID(my_row, my_col+1), 2, col_bitmap(SIZE-1));
    delay();
    if (has_W) {
        uint32_t p = recv_ghost();
        uint32_t bm = p & FLIT_BMAP_MASK;
        for (int i = 0; i < SIZE; i++) ghost_W[i] = (uint8_t)((bm >> i) & 1u);
    }
    delay();
    if (has_W) send_ghost(TILE_ID(my_row, my_col-1), 3, col_bitmap(0));
    delay();
    if (has_E) {
        uint32_t p = recv_ghost();
        uint32_t bm = p & FLIT_BMAP_MASK;
        for (int i = 0; i < SIZE; i++) ghost_E[i] = (uint8_t)((bm >> i) & 1u);
    }
    delay();

    /* Phase 3: Corners */
    /* NW corner needs (9,9) from TILE(r-1, c-1). We send (9,9) to SE. */
    if (has_S && has_E) send_ghost(TILE_ID(my_row+1, my_col+1), 4, grid[(SIZE-1)*SIZE + (SIZE-1)]);
    delay();
    if (has_N && has_W) ghost_NW[0] = (uint8_t)(recv_ghost() & 1u);
    delay();

    if (has_S && has_W) send_ghost(TILE_ID(my_row+1, my_col-1), 5, grid[(SIZE-1)*SIZE + 0]);
    delay();
    if (has_N && has_E) ghost_NE[0] = (uint8_t)(recv_ghost() & 1u);
    delay();

    if (has_N && has_E) send_ghost(TILE_ID(my_row-1, my_col+1), 6, grid[0*SIZE + (SIZE-1)]);
    delay();
    if (has_S && has_W) ghost_SW[0] = (uint8_t)(recv_ghost() & 1u);
    delay();

    if (has_N && has_W) send_ghost(TILE_ID(my_row-1, my_col-1), 7, grid[0*SIZE + 0]);
    delay();
    if (has_S && has_E) ghost_SE[0] = (uint8_t)(recv_ghost() & 1u);
    delay();
}

static inline int neighbour_count(int row, int col)
{
    int idx   = row * SIZE + col;
    int n = 0;

    /* Logic: check all 8 directional neighbors Relative to (row, col) */
    
    /* Directions: NW(-1,-1), N(-1,0), NE(-1,1), W(0,-1), E(0,1), SW(1,-1), S(1,0), SE(1,1) */

    // N neighbors
    if (row > 0) {
        if (col > 0) n += grid[idx - SIZE - 1] & 1; else n += ghost_W[row-1] & 1;
        n += grid[idx - SIZE] & 1;
        if (col < SIZE-1) n += grid[idx - SIZE + 1] & 1; else n += ghost_E[row-1] & 1;
    } else {
        if (col > 0) n += ghost_N[col-1] & 1; else n += ghost_NW[0] & 1;
        n += ghost_N[col] & 1;
        if (col < SIZE-1) n += ghost_N[col+1] & 1; else n += ghost_NE[0] & 1;
    }

    // Side neighbors
    if (col > 0) n += grid[idx - 1] & 1; else n += ghost_W[row] & 1;
    if (col < SIZE-1) n += grid[idx + 1] & 1; else n += ghost_E[row] & 1;

    // S neighbors
    if (row < SIZE-1) {
        if (col > 0) n += grid[idx + SIZE - 1] & 1; else n += ghost_W[row+1] & 1;
        n += grid[idx + SIZE] & 1;
        if (col < SIZE-1) n += grid[idx + SIZE + 1] & 1; else n += ghost_E[row+1] & 1;
    } else {
        if (col > 0) n += ghost_S[col-1] & 1; else n += ghost_SW[0] & 1;
        n += ghost_S[col] & 1;
        if (col < SIZE-1) n += ghost_S[col+1] & 1; else n += ghost_SE[0] & 1;
    }

    return n;
}

int main(void)
{
    uint32_t my_id  = noc_read_my_id();
    int my_row = (int)((my_id >> 2) & 0x3u);
    int my_col = (int)(my_id & 0x3u);

    int has_N = (my_row > 0);
    int has_S = (my_row < MESH_ROWS - 1);
    int has_W = (my_col > 0);
    int has_E = (my_col < MESH_COLS - 1);

    noc_signal(SIG_BOOT_ALIVE);

    for (int i = 0; i < SIZE * SIZE; i++) grid[i] = 0u;
    grid[4*SIZE+5] = 1; grid[5*SIZE+5] = 1; grid[6*SIZE+5] = 1;
    grid[8*SIZE+0] = 1; grid[9*SIZE+0] = 1;
    grid[8*SIZE+9] = 1; grid[9*SIZE+9] = 1;

    noc_signal(SIG_SEED_LIVE);

    while (1) {
        ghost_exchange(my_row, my_col, has_N, has_S, has_W, has_E);

        for (int row = 0; row < SIZE; row++) {
            for (int col = 0; col < SIZE; col++) {
                int alive = grid[row * SIZE + col] & 1;
                int n     = neighbour_count(row, col);
                next_grid[row * SIZE + col] =
                    (uint8_t)(alive ? (n==2||n==3) : (n==3));
            }
        }

        noc_signal(SIG_MATH_DONE);

        for (int i = 0; i < SIZE * SIZE; i++)
            grid[i] = next_grid[i];

        noc_signal(SIG_GEN_STABLE);

        /* No row broadcast — avoids flooding tile(2,2)'s FIFO */
    }

    return 0;
}