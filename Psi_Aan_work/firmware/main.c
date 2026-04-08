#include <stdint.h>

#define NOC_INJECT_BASE  0x80000000u
#define NOC_RECV_BASE    0x80000004u
#define NOC_ID_BASE      0x80000008u

#define TILE_ID(r,c)     (((uint32_t)(r) << 2) | (uint32_t)(c))
#define FLIT_DEST_SHIFT  28u

/* Ghost payload layout:
 *   bits [9:0]   = bitmap/data (10 bits, corners use bit0)
 *   bit  [10]    = valid bit
 *   bits [14:11] = ghost tag
 */
#define FLIT_BMAP_MASK   0x03FFu
#define FLIT_VALID_BIT   0x0400u
#define FLIT_TAG_SHIFT   11u
#define FLIT_TAG_MASK    0x7800u

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

/* -------------------------------------------------------------------------- */
/* Debug window in SRAM that cocotb can read                                  */
/* -------------------------------------------------------------------------- */
#define DBG_BASE        0x06B0u

#define dbg8(off)   (*(volatile uint8_t  *)(DBG_BASE + (off)))
#define dbg16(off)  (*(volatile uint16_t *)(DBG_BASE + (off)))
#define dbg32(off)  (*(volatile uint32_t *)(DBG_BASE + (off)))

/* byte offsets */
#define DBG_MAGIC0              0x00
#define DBG_MAGIC1              0x01
#define DBG_TILE_ID             0x02
#define DBG_ITER_LSB            0x03

#define DBG_PHASE               0x04  /* 0=idle,1=ghost_exch,2=count,3=commit */
#define DBG_CUR_ROW             0x05
#define DBG_CUR_COL             0x06
#define DBG_CUR_IDX             0x07

#define DBG_HAS_FLAGS           0x08  /* bit0=N bit1=S bit2=W bit3=E */
#define DBG_LAST_DIR_RX         0x09  /* 1=N 2=S 4=W 8=E 16=NW 32=NE 64=SW 128=SE */
#define DBG_LAST_DIR_TX         0x0A
#define DBG_LAST_NEIGHBOR_CNT   0x0B

#define DBG_LAST_TX_DEST        0x0C
#define DBG_LAST_RX_RAW         0x10  /* 32-bit raw flit */
#define DBG_LAST_TX_WORD        0x14  /* 32-bit sent flit */

#define DBG_RX_BM_N             0x18  /* 16-bit */
#define DBG_RX_BM_S             0x1A
#define DBG_RX_BM_W             0x1C
#define DBG_RX_BM_E             0x1E

#define DBG_TX_BM_N             0x20
#define DBG_TX_BM_S             0x22
#define DBG_TX_BM_W             0x24
#define DBG_TX_BM_E             0x26

#define DBG_TOP_L               0x28
#define DBG_TOP_C               0x29
#define DBG_TOP_R               0x2A
#define DBG_MID_L               0x2B
#define DBG_MID_R               0x2C
#define DBG_BOT_L               0x2D
#define DBG_BOT_C               0x2E
#define DBG_BOT_R               0x2F
#define DBG_SELF                0x30

#define DBG_LAST_TAG_RX         0x31
#define DBG_LAST_TAG_TX         0x32
#define DBG_ERROR_CODE          0x33
#define DBG_STALL_COUNTER       0x34
#define DBG_EXPECTED_RECV       0x35
#define DBG_GOT_RECV            0x36

#define DBG_RX_CORNER_NW        0x38
#define DBG_RX_CORNER_NE        0x39
#define DBG_RX_CORNER_SW        0x3A
#define DBG_RX_CORNER_SE        0x3B

#define DBG_TX_CORNER_NW        0x3C
#define DBG_TX_CORNER_NE        0x3D
#define DBG_TX_CORNER_SW        0x3E
#define DBG_TX_CORNER_SE        0x3F

#define DBG_GHOST_N_LAST0       0x40  /* 10 bytes */
#define DBG_GHOST_S_LAST0       0x50  /* 10 bytes */
#define DBG_GHOST_W_LAST0       0x60  /* 10 bytes */
#define DBG_GHOST_E_LAST0       0x70  /* 10 bytes */

#define DBG_GHOST_NW_LAST       0x7A
#define DBG_GHOST_NE_LAST       0x7B
#define DBG_GHOST_SW_LAST       0x7C
#define DBG_GHOST_SE_LAST       0x7D

#define grid      ((volatile uint8_t *)GRID_BASE)
#define ghost_N   ((volatile uint8_t *)(GHOST_BASE +  0))
#define ghost_S   ((volatile uint8_t *)(GHOST_BASE + 10))
#define ghost_W   ((volatile uint8_t *)(GHOST_BASE + 20))
#define ghost_E   ((volatile uint8_t *)(GHOST_BASE + 30))
#define next_grid ((volatile uint8_t *)NEXT_GRID_BASE)

/* diagonal ghosts */
static volatile uint8_t ghost_NW = 0;
static volatile uint8_t ghost_NE = 0;
static volatile uint8_t ghost_SW = 0;
static volatile uint8_t ghost_SE = 0;

/* receiver-side tags */
enum {
    TAG_TO_GHOST_N  = 1,
    TAG_TO_GHOST_S  = 2,
    TAG_TO_GHOST_W  = 3,
    TAG_TO_GHOST_E  = 4,
    TAG_TO_GHOST_NW = 5,
    TAG_TO_GHOST_NE = 6,
    TAG_TO_GHOST_SW = 7,
    TAG_TO_GHOST_SE = 8
};

enum {
    DIR_N  = 0x01,
    DIR_S  = 0x02,
    DIR_W  = 0x04,
    DIR_E  = 0x08,
    DIR_NW = 0x10,
    DIR_NE = 0x20,
    DIR_SW = 0x40,
    DIR_SE = 0x80
};

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

static inline uint32_t corner_bit(int row, int col)
{
    return (uint32_t)(grid[row * SIZE + col] & 1u);
}

static inline void debug_copy_ghost_bytes(uint32_t base, volatile uint8_t *src)
{
    for (int i = 0; i < SIZE; i++) dbg8(base + i) = src[i] & 1u;
}

static inline void debug_init(uint32_t my_id, int has_N, int has_S, int has_W, int has_E)
{
    dbg8(DBG_MAGIC0) = 0xDA;
    dbg8(DBG_MAGIC1) = 0x7A;
    dbg8(DBG_TILE_ID) = (uint8_t)my_id;
    dbg8(DBG_ITER_LSB) = 0;
    dbg8(DBG_PHASE) = 0;
    dbg8(DBG_CUR_ROW) = 0xFF;
    dbg8(DBG_CUR_COL) = 0xFF;
    dbg8(DBG_CUR_IDX) = 0xFF;
    dbg8(DBG_HAS_FLAGS) =
        (has_N ? 1u : 0u) |
        (has_S ? 2u : 0u) |
        (has_W ? 4u : 0u) |
        (has_E ? 8u : 0u);

    dbg8(DBG_LAST_DIR_RX) = 0;
    dbg8(DBG_LAST_DIR_TX) = 0;
    dbg8(DBG_LAST_NEIGHBOR_CNT) = 0;
    dbg8(DBG_LAST_TX_DEST) = 0xFF;
    dbg32(DBG_LAST_RX_RAW) = 0;
    dbg32(DBG_LAST_TX_WORD) = 0;

    dbg16(DBG_RX_BM_N) = 0;
    dbg16(DBG_RX_BM_S) = 0;
    dbg16(DBG_RX_BM_W) = 0;
    dbg16(DBG_RX_BM_E) = 0;
    dbg16(DBG_TX_BM_N) = 0;
    dbg16(DBG_TX_BM_S) = 0;
    dbg16(DBG_TX_BM_W) = 0;
    dbg16(DBG_TX_BM_E) = 0;

    dbg8(DBG_LAST_TAG_RX) = 0;
    dbg8(DBG_LAST_TAG_TX) = 0;
    dbg8(DBG_ERROR_CODE) = 0;
    dbg8(DBG_STALL_COUNTER) = 0;
    dbg8(DBG_EXPECTED_RECV) = 0;
    dbg8(DBG_GOT_RECV) = 0;

    dbg8(DBG_RX_CORNER_NW) = 0;
    dbg8(DBG_RX_CORNER_NE) = 0;
    dbg8(DBG_RX_CORNER_SW) = 0;
    dbg8(DBG_RX_CORNER_SE) = 0;
    dbg8(DBG_TX_CORNER_NW) = 0;
    dbg8(DBG_TX_CORNER_NE) = 0;
    dbg8(DBG_TX_CORNER_SW) = 0;
    dbg8(DBG_TX_CORNER_SE) = 0;

    for (int i = 0; i < SIZE; i++) {
        dbg8(DBG_GHOST_N_LAST0 + i) = 0;
        dbg8(DBG_GHOST_S_LAST0 + i) = 0;
        dbg8(DBG_GHOST_W_LAST0 + i) = 0;
        dbg8(DBG_GHOST_E_LAST0 + i) = 0;
    }

    dbg8(DBG_GHOST_NW_LAST) = 0;
    dbg8(DBG_GHOST_NE_LAST) = 0;
    dbg8(DBG_GHOST_SW_LAST) = 0;
    dbg8(DBG_GHOST_SE_LAST) = 0;
}

static inline uint32_t make_ghost_word(uint32_t dest_id, uint32_t tag, uint32_t data10)
{
    return (dest_id << FLIT_DEST_SHIFT)
         | ((tag & 0xFu) << FLIT_TAG_SHIFT)
         | FLIT_VALID_BIT
         | (data10 & FLIT_BMAP_MASK);
}

static inline void send_ghost_dbg(uint32_t dest_id, uint32_t tag, uint32_t data10, uint8_t dir_mask)
{
    uint32_t word = make_ghost_word(dest_id, tag, data10);
    dbg8(DBG_LAST_DIR_TX) = dir_mask;
    dbg8(DBG_LAST_TAG_TX) = (uint8_t)tag;
    dbg8(DBG_LAST_TX_DEST) = (uint8_t)(dest_id & 0xFFu);
    dbg32(DBG_LAST_TX_WORD) = word;
    noc_write(word);
}

static inline uint32_t recv_ghost_raw_dbg(void)
{
    uint32_t p;
    uint32_t spins = 0;

    while (1) {
        p = noc_recv_raw();
        if (p & FLIT_VALID_BIT) {
            dbg32(DBG_LAST_RX_RAW) = p;
            dbg8(DBG_ERROR_CODE) = 0;
            return p;
        }

        spins++;
        if ((spins & 0xFFu) == 0u)
            dbg8(DBG_STALL_COUNTER)++;

        if (spins > 2000000u) {
            dbg32(DBG_LAST_RX_RAW) = p;
            dbg8(DBG_ERROR_CODE) = 0xEE; /* timeout waiting for ghost */
            return FLIT_VALID_BIT;       /* fake empty valid flit, tag=0, data=0 */
        }
    }
}

__attribute__((section(".text.init"), naked))
void _start(void)
{
    __asm__ volatile (
        "li   sp, 0x7fc\n"
        "li   t0, 0x0600\n"
        "li   t1, 0x0790\n"
        "1: bge  t0, t1, 2f\n"
        "   sb   zero, 0(t0)\n"
        "   addi t0, t0, 1\n"
        "   j    1b\n"
        "2: call main\n"
        "3: j    3b\n"
    );
}

static inline void clear_receive_buffers(void)
{
    for (int i = 0; i < SIZE; i++) {
        ghost_N[i] = 0;
        ghost_S[i] = 0;
        ghost_W[i] = 0;
        ghost_E[i] = 0;
    }
    ghost_NW = 0;
    ghost_NE = 0;
    ghost_SW = 0;
    ghost_SE = 0;

    dbg16(DBG_RX_BM_N) = 0;
    dbg16(DBG_RX_BM_S) = 0;
    dbg16(DBG_RX_BM_W) = 0;
    dbg16(DBG_RX_BM_E) = 0;
    dbg8(DBG_RX_CORNER_NW) = 0;
    dbg8(DBG_RX_CORNER_NE) = 0;
    dbg8(DBG_RX_CORNER_SW) = 0;
    dbg8(DBG_RX_CORNER_SE) = 0;
    dbg8(DBG_GHOST_NW_LAST) = 0;
    dbg8(DBG_GHOST_NE_LAST) = 0;
    dbg8(DBG_GHOST_SW_LAST) = 0;
    dbg8(DBG_GHOST_SE_LAST) = 0;
}

static void ghost_exchange(int my_row, int my_col,
                           int has_N, int has_S,
                           int has_W, int has_E)
{
    int has_NW = has_N && has_W;
    int has_NE = has_N && has_E;
    int has_SW = has_S && has_W;
    int has_SE = has_S && has_E;
    int expected = 0;

    dbg8(DBG_PHASE) = 1;
    dbg8(DBG_GOT_RECV) = 0;
    dbg8(DBG_ERROR_CODE) = 0;
    clear_receive_buffers();

    /* --------------------------- SEND PHASE --------------------------- */

    if (has_N) {
        uint32_t bm = row_bitmap(0);
        dbg16(DBG_TX_BM_N) = (uint16_t)bm;
        send_ghost_dbg(TILE_ID(my_row - 1, my_col), TAG_TO_GHOST_S, bm, DIR_N);
    }
    if (has_S) {
        uint32_t bm = row_bitmap(SIZE - 1);
        dbg16(DBG_TX_BM_S) = (uint16_t)bm;
        send_ghost_dbg(TILE_ID(my_row + 1, my_col), TAG_TO_GHOST_N, bm, DIR_S);
    }
    if (has_W) {
        uint32_t bm = col_bitmap(0);
        dbg16(DBG_TX_BM_W) = (uint16_t)bm;
        send_ghost_dbg(TILE_ID(my_row, my_col - 1), TAG_TO_GHOST_E, bm, DIR_W);
    }
    if (has_E) {
        uint32_t bm = col_bitmap(SIZE - 1);
        dbg16(DBG_TX_BM_E) = (uint16_t)bm;
        send_ghost_dbg(TILE_ID(my_row, my_col + 1), TAG_TO_GHOST_W, bm, DIR_E);
    }

    if (has_NW) {
        uint32_t bit = corner_bit(0, 0);
        dbg8(DBG_TX_CORNER_NW) = (uint8_t)bit;
        send_ghost_dbg(TILE_ID(my_row - 1, my_col - 1), TAG_TO_GHOST_SE, bit, DIR_NW);
    }
    if (has_NE) {
        uint32_t bit = corner_bit(0, SIZE - 1);
        dbg8(DBG_TX_CORNER_NE) = (uint8_t)bit;
        send_ghost_dbg(TILE_ID(my_row - 1, my_col + 1), TAG_TO_GHOST_SW, bit, DIR_NE);
    }
    if (has_SW) {
        uint32_t bit = corner_bit(SIZE - 1, 0);
        dbg8(DBG_TX_CORNER_SW) = (uint8_t)bit;
        send_ghost_dbg(TILE_ID(my_row + 1, my_col - 1), TAG_TO_GHOST_NE, bit, DIR_SW);
    }
    if (has_SE) {
        uint32_t bit = corner_bit(SIZE - 1, SIZE - 1);
        dbg8(DBG_TX_CORNER_SE) = (uint8_t)bit;
        send_ghost_dbg(TILE_ID(my_row + 1, my_col + 1), TAG_TO_GHOST_NW, bit, DIR_SE);
    }

    /* -------------------------- RECEIVE PHASE ------------------------- */

    expected = has_N + has_S + has_W + has_E + has_NW + has_NE + has_SW + has_SE;
    dbg8(DBG_EXPECTED_RECV) = (uint8_t)expected;

    for (int got = 0; got < expected; got++) {
        uint32_t p = recv_ghost_raw_dbg();
        uint32_t tag = (p & FLIT_TAG_MASK) >> FLIT_TAG_SHIFT;
        uint32_t data = p & FLIT_BMAP_MASK;

        dbg8(DBG_LAST_TAG_RX) = (uint8_t)tag;
        dbg8(DBG_GOT_RECV) = (uint8_t)(got + 1);

        switch (tag) {
            case TAG_TO_GHOST_N:
                dbg8(DBG_LAST_DIR_RX) = DIR_N;
                dbg16(DBG_RX_BM_N) = (uint16_t)data;
                for (int i = 0; i < SIZE; i++) ghost_N[i] = (uint8_t)((data >> i) & 1u);
                debug_copy_ghost_bytes(DBG_GHOST_N_LAST0, ghost_N);
                break;

            case TAG_TO_GHOST_S:
                dbg8(DBG_LAST_DIR_RX) = DIR_S;
                dbg16(DBG_RX_BM_S) = (uint16_t)data;
                for (int i = 0; i < SIZE; i++) ghost_S[i] = (uint8_t)((data >> i) & 1u);
                debug_copy_ghost_bytes(DBG_GHOST_S_LAST0, ghost_S);
                break;

            case TAG_TO_GHOST_W:
                dbg8(DBG_LAST_DIR_RX) = DIR_W;
                dbg16(DBG_RX_BM_W) = (uint16_t)data;
                for (int i = 0; i < SIZE; i++) ghost_W[i] = (uint8_t)((data >> i) & 1u);
                debug_copy_ghost_bytes(DBG_GHOST_W_LAST0, ghost_W);
                break;

            case TAG_TO_GHOST_E:
                dbg8(DBG_LAST_DIR_RX) = DIR_E;
                dbg16(DBG_RX_BM_E) = (uint16_t)data;
                for (int i = 0; i < SIZE; i++) ghost_E[i] = (uint8_t)((data >> i) & 1u);
                debug_copy_ghost_bytes(DBG_GHOST_E_LAST0, ghost_E);
                break;

            case TAG_TO_GHOST_NW:
                dbg8(DBG_LAST_DIR_RX) = DIR_NW;
                ghost_NW = (uint8_t)(data & 1u);
                dbg8(DBG_RX_CORNER_NW) = ghost_NW;
                dbg8(DBG_GHOST_NW_LAST) = ghost_NW;
                break;

            case TAG_TO_GHOST_NE:
                dbg8(DBG_LAST_DIR_RX) = DIR_NE;
                ghost_NE = (uint8_t)(data & 1u);
                dbg8(DBG_RX_CORNER_NE) = ghost_NE;
                dbg8(DBG_GHOST_NE_LAST) = ghost_NE;
                break;

            case TAG_TO_GHOST_SW:
                dbg8(DBG_LAST_DIR_RX) = DIR_SW;
                ghost_SW = (uint8_t)(data & 1u);
                dbg8(DBG_RX_CORNER_SW) = ghost_SW;
                dbg8(DBG_GHOST_SW_LAST) = ghost_SW;
                break;

            case TAG_TO_GHOST_SE:
                dbg8(DBG_LAST_DIR_RX) = DIR_SE;
                ghost_SE = (uint8_t)(data & 1u);
                dbg8(DBG_RX_CORNER_SE) = ghost_SE;
                dbg8(DBG_GHOST_SE_LAST) = ghost_SE;
                break;

            default:
                dbg8(DBG_ERROR_CODE) = 0xEF; /* unknown tag */
                break;
        }
    }
}

static inline uint8_t local_or_ghost_top_left(int row, int col)
{
    if (row > 0 && col > 0) return grid[(row - 1) * SIZE + (col - 1)] & 1u;
    if (row == 0 && col == 0) return ghost_NW & 1u;
    if (row == 0) return ghost_N[col - 1] & 1u;
    return ghost_W[row - 1] & 1u;
}

static inline uint8_t local_or_ghost_top(int row, int col)
{
    if (row > 0) return grid[(row - 1) * SIZE + col] & 1u;
    return ghost_N[col] & 1u;
}

static inline uint8_t local_or_ghost_top_right(int row, int col)
{
    if (row > 0 && col < SIZE - 1) return grid[(row - 1) * SIZE + (col + 1)] & 1u;
    if (row == 0 && col == SIZE - 1) return ghost_NE & 1u;
    if (row == 0) return ghost_N[col + 1] & 1u;
    return ghost_E[row - 1] & 1u;
}

static inline uint8_t local_or_ghost_mid_left(int row, int col)
{
    if (col > 0) return grid[row * SIZE + (col - 1)] & 1u;
    return ghost_W[row] & 1u;
}

static inline uint8_t local_or_ghost_mid_right(int row, int col)
{
    if (col < SIZE - 1) return grid[row * SIZE + (col + 1)] & 1u;
    return ghost_E[row] & 1u;
}

static inline uint8_t local_or_ghost_bot_left(int row, int col)
{
    if (row < SIZE - 1 && col > 0) return grid[(row + 1) * SIZE + (col - 1)] & 1u;
    if (row == SIZE - 1 && col == 0) return ghost_SW & 1u;
    if (row == SIZE - 1) return ghost_S[col - 1] & 1u;
    return ghost_W[row + 1] & 1u;
}

static inline uint8_t local_or_ghost_bot(int row, int col)
{
    if (row < SIZE - 1) return grid[(row + 1) * SIZE + col] & 1u;
    return ghost_S[col] & 1u;
}

static inline uint8_t local_or_ghost_bot_right(int row, int col)
{
    if (row < SIZE - 1 && col < SIZE - 1) return grid[(row + 1) * SIZE + (col + 1)] & 1u;
    if (row == SIZE - 1 && col == SIZE - 1) return ghost_SE & 1u;
    if (row == SIZE - 1) return ghost_S[col + 1] & 1u;
    return ghost_E[row + 1] & 1u;
}

static inline int neighbour_count(int row, int col)
{
    uint8_t tl = local_or_ghost_top_left(row, col);
    uint8_t tc = local_or_ghost_top(row, col);
    uint8_t tr = local_or_ghost_top_right(row, col);
    uint8_t ml = local_or_ghost_mid_left(row, col);
    uint8_t mr = local_or_ghost_mid_right(row, col);
    uint8_t bl = local_or_ghost_bot_left(row, col);
    uint8_t bc = local_or_ghost_bot(row, col);
    uint8_t br = local_or_ghost_bot_right(row, col);
    uint8_t self = grid[row * SIZE + col] & 1u;

    int n = tl + tc + tr + ml + mr + bl + bc + br;

    dbg8(DBG_PHASE) = 2;
    dbg8(DBG_CUR_ROW) = (uint8_t)row;
    dbg8(DBG_CUR_COL) = (uint8_t)col;
    dbg8(DBG_CUR_IDX) = (uint8_t)(row * SIZE + col);
    dbg8(DBG_LAST_NEIGHBOR_CNT) = (uint8_t)n;

    dbg8(DBG_TOP_L) = tl;
    dbg8(DBG_TOP_C) = tc;
    dbg8(DBG_TOP_R) = tr;
    dbg8(DBG_MID_L) = ml;
    dbg8(DBG_MID_R) = mr;
    dbg8(DBG_BOT_L) = bl;
    dbg8(DBG_BOT_C) = bc;
    dbg8(DBG_BOT_R) = br;
    dbg8(DBG_SELF) = self;

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

    debug_init(my_id, has_N, has_S, has_W, has_E);

    noc_signal(SIG_BOOT_ALIVE);

    for (int i = 0; i < SIZE * SIZE; i++) grid[i] = 0u;

    /* same seed as testbench */
    grid[4 * SIZE + 5] = 1;
    grid[5 * SIZE + 5] = 1;
    grid[6 * SIZE + 5] = 1;
    grid[8 * SIZE + 0] = 1;
    grid[9 * SIZE + 0] = 1;
    grid[8 * SIZE + 9] = 1;
    grid[9 * SIZE + 9] = 1;

    noc_signal(SIG_SEED_LIVE);

    uint32_t iter = 0;

    while (1) {
        dbg8(DBG_ITER_LSB) = (uint8_t)(iter & 0xFFu);

        ghost_exchange(my_row, my_col, has_N, has_S, has_W, has_E);

        for (int row = 0; row < SIZE; row++) {
            for (int col = 0; col < SIZE; col++) {
                int alive = grid[row * SIZE + col] & 1u;
                int n     = neighbour_count(row, col);
                next_grid[row * SIZE + col] =
                    (uint8_t)(alive ? (n == 2 || n == 3) : (n == 3));
            }
        }

        noc_signal(SIG_MATH_DONE);

        dbg8(DBG_PHASE) = 3;
        for (int i = 0; i < SIZE * SIZE; i++)
            grid[i] = next_grid[i];

        noc_signal(SIG_GEN_STABLE);
        iter++;
        dbg8(DBG_PHASE) = 0;
    }

    return 0;
}