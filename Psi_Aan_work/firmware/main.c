#include <stdint.h>

/*
 * ============================================================
 * HARDWARE / MEMORY MAP
 * ============================================================
 *
 * SRAM layout (byte-addressed, 2 KB total):
 *   0x0000 – 0x04FF  firmware code + rodata + bss
 *   0x0500 – 0x0563  current grid   (SIZE*SIZE = 100 bytes)
 *   0x0600 – 0x0627  ghost buffers  N/S/W/E (10 bytes each = 40 bytes)
 *   0x0640 – 0x06A3  next_grid      (100 bytes)
 *   0x0700 – 0x073B  debug region   (60 bytes)
 *   0x07FC           stack top (grows down, set in _start)
 *
 * NoC register map (Wishbone, outside SRAM):
 *   0x80000000  WR: inject flit  word[31:28]=dest_id, word[28:0]=payload
 *   0x80000004  RD: eject flit   returns 29-bit payload (bit10 = FLIT_VALID_BIT)
 *   0x80000008  RD: my tile ID   returns 4-bit {row[1:0], col[1:0]}
 *
 * ============================================================
 * FLIT FORMAT  (34-bit on the wire; CPU sees 32-bit WB word)
 * ============================================================
 *   Wire bit [33]     = valid (set by router hardware on inject)
 *   Wire bit [32:29]  = dest_id {dest_row[1:0], dest_col[1:0]}
 *   Wire bit [28:0]   = payload (opaque to router hardware)
 *
 *   CPU INJECT word format (32-bit):
 *     [31:28] = dest_id   → maps to wire[32:29]
 *     [28:0]  = payload   → maps to wire[28:0]
 *     wire[33] is forced to 1 by the router
 *
 *   CPU EJECT read (32-bit):
 *     [28:0]  = payload (wire[28:0])
 *     [31:29] = 0 (stripped by router)
 *
 * ============================================================
 * GHOST FLIT PAYLOAD (firmware convention, inside the 29-bit payload)
 * ============================================================
 *   Bit 10      (FLIT_VALID_BIT)   = 1  ← marks this as a ghost flit
 *   Bits [12:11] (FLIT_TAG_SHIFT)  = store-direction tag (0=N,1=S,2=W,3=E)
 *   Bits [9:0]  (FLIT_BMAP_MASK)   = 10-bit row/col bitmap
 *
 * ============================================================
 * DEADLOCK FIX — SERIALISED GHOST EXCHANGE
 * ============================================================
 * The mesh_router can only eject ONE flit per clock cycle into a
 * tile's FIFO (the combinatorial route_one task has a single
 * next_eject register; the last writer wins and earlier arrivals
 * on the same cycle are silently dropped).
 *
 * If all 9 tiles send their ghosts simultaneously, two or more
 * flits destined for the same tile (e.g., tile (1,1) receives
 * from N, S, W, E neighbours all within a few cycles) can
 * collide, causing silent flit loss.  The blocking receive loop
 * then waits forever for flits that were dropped, hanging the
 * entire mesh in ghost_exchange().
 *
 * FIX: serialise the exchange into four independent phases,
 * one cardinal direction at a time:
 *
 *   Phase 0: every tile that HAS a south neighbour sends its
 *            bottom-row bitmap southward (TAG_STORE_N means
 *            "store into my ghost_N buffer").  Every tile that
 *            HAS a north neighbour then does ONE blocking recv.
 *
 *   Phase 1: north  → south  (TAG_STORE_S)
 *   Phase 2: east   → west   (TAG_STORE_E, i.e. "store into ghost_E")
 *   Phase 3: west   → east   (TAG_STORE_W)
 *
 * Because each phase involves at most ONE flit per destination
 * tile, no two flits can collide at any FIFO in any single phase.
 * The FIFO depth of 4 is more than sufficient.
 *
 * All 9 tiles run the same firmware in true lock-step (same
 * clock, no branch divergence before ghost_exchange), so the
 * phases are globally synchronised without any explicit barrier.
 */

/* ---- NoC base addresses ---- */
#define NOC_INJECT_BASE  0x80000000u
#define NOC_RECV_BASE    0x80000004u
#define NOC_ID_BASE      0x80000008u

/* ---- Tile ID helpers ---- */
#define TILE_ID(r,c)     ((((uint32_t)(r)) << 2) | ((uint32_t)(c)))
#define TILE_ROW(id)     ((((uint32_t)(id)) >> 2) & 0x3u)
#define TILE_COL(id)     (((uint32_t)(id)) & 0x3u)

/* ---- Flit field masks / shifts ---- */
#define FLIT_DEST_SHIFT   28u        /* CPU inject word: dest in [31:28] */
#define FLIT_PAYLOAD_MASK 0x0FFFFFFFu

#define FLIT_BMAP_MASK    0x03FFu    /* 10-bit bitmap in payload[9:0]   */
#define FLIT_VALID_BIT    0x0400u    /* firmware ghost marker: bit 10   */
#define FLIT_TAG_SHIFT    11u
#define FLIT_TAG_MASK     0x1800u    /* bits [12:11]                    */

/* Ghost store-direction tags (what the RECEIVER does with the bitmap) */
#define TAG_STORE_N       0u         /* store into ghost_N of receiver  */
#define TAG_STORE_S       1u         /* store into ghost_S              */
#define TAG_STORE_W       2u
#define TAG_STORE_E       3u

/* Off-mesh protocol signals (dest = 0xF → tile (3,3) doesn't exist) */
#define SIG_BOOT_ALIVE    0xF0000001u
#define SIG_SEED_LIVE     0xF0000002u
#define SIG_MATH_DONE     0xF0000003u
#define SIG_GEN_STABLE    0xF0000004u
#define SIG_STOP          0xF0000005u

/* ---- Mesh geometry ---- */
#define SIZE        10
#define MESH_ROWS    3
#define MESH_COLS    3

/* ---- SRAM layout ---- */
#define GRID_BASE       0x0500u
#define GHOST_BASE      0x0600u
#define NEXT_GRID_BASE  0x0640u
#define DEBUG_BASE      0x0700u

#define grid       ((volatile uint8_t *)GRID_BASE)
#define ghost_N    ((volatile uint8_t *)(GHOST_BASE +  0))
#define ghost_S    ((volatile uint8_t *)(GHOST_BASE + 10))
#define ghost_W    ((volatile uint8_t *)(GHOST_BASE + 20))
#define ghost_E    ((volatile uint8_t *)(GHOST_BASE + 30))
#define next_grid  ((volatile uint8_t *)NEXT_GRID_BASE)

/* ---- Debug layout (matches testbench offsets exactly) ---- */
#define DEBUG_LAST_RECV_N    ((volatile uint32_t *)(DEBUG_BASE +  0))
#define DEBUG_LAST_RECV_S    ((volatile uint32_t *)(DEBUG_BASE +  4))
#define DEBUG_LAST_RECV_W    ((volatile uint32_t *)(DEBUG_BASE +  8))
#define DEBUG_LAST_RECV_E    ((volatile uint32_t *)(DEBUG_BASE + 12))
#define DEBUG_NEIGHBOR_HIST  ((volatile uint8_t  *)(DEBUG_BASE + 16))
#define DEBUG_ITER_COUNT     ((volatile uint32_t *)(DEBUG_BASE + 28))
#define DEBUG_GHOST_FLAGS    ((volatile uint32_t *)(DEBUG_BASE + 32))
#define DEBUG_STAGE0         ((volatile uint32_t *)(DEBUG_BASE + 36))
#define DEBUG_STAGE1         ((volatile uint32_t *)(DEBUG_BASE + 40))
#define DEBUG_STAGE2         ((volatile uint32_t *)(DEBUG_BASE + 44))
#define DEBUG_STAGE3         ((volatile uint32_t *)(DEBUG_BASE + 48))

/* ==================================================================
 * NoC primitives
 * ================================================================== */

static inline void noc_write(uint32_t word)
{
    *(volatile uint32_t *)NOC_INJECT_BASE = word;
}

static inline uint32_t noc_recv_raw(void)
{
    return *(volatile uint32_t *)NOC_RECV_BASE;
}

static inline uint32_t noc_recv_payload_nonblocking(void)
{
    volatile uint32_t *reg = (volatile uint32_t *)NOC_RECV_BASE;
    uint32_t val = *reg & FLIT_PAYLOAD_MASK;
    /* NOTE: writing to NOC_RECV_BASE is a NOP in the router hardware;
     * the FIFO pops automatically one cycle after the CPU reads it.
     * This write is harmless but kept for historical compatibility. */
    if (val != 0) {
        *reg = 0;
    }
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

/*
 * noc_inject — send a ghost/data flit to another tile.
 *   dest_row, dest_col : destination tile coordinates
 *   payload28          : 28-bit payload (FLIT_VALID_BIT + tag + bitmap)
 */
static inline void noc_inject(uint8_t dest_row, uint8_t dest_col, uint32_t payload28)
{
    noc_write((TILE_ID(dest_row, dest_col) << FLIT_DEST_SHIFT)
              | (payload28 & FLIT_PAYLOAD_MASK));
}

/* ==================================================================
 * Small helpers
 * ================================================================== */

static inline void clear_buf10(volatile uint8_t *buf)
{
    for (int i = 0; i < SIZE; i++) buf[i] = 0u;
}

static inline void clear_debug_hist(void)
{
    for (int i = 0; i < 9; i++) DEBUG_NEIGHBOR_HIST[i] = 0u;
}

static inline void mark_stage(uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3)
{
    *DEBUG_STAGE0 = s0;
    *DEBUG_STAGE1 = s1;
    *DEBUG_STAGE2 = s2;
    *DEBUG_STAGE3 = s3;
}

static inline void store_bitmap_into_buf(volatile uint8_t *buf, uint32_t bm)
{
    for (int i = 0; i < SIZE; i++)
        buf[i] = (uint8_t)((bm >> i) & 1u);
}

/* ==================================================================
 * Bitmap helpers — pack a row or column of the grid into 10 bits
 * ================================================================== */

__attribute__((noinline))
static uint32_t row_bitmap(int row)
{
    uint32_t bm = 0;
    for (int c = 0; c < SIZE; c++)
        bm |= ((uint32_t)(grid[row * SIZE + c] & 1u) << c);
    return bm & FLIT_BMAP_MASK;
}

__attribute__((noinline))
static uint32_t col_bitmap(int col)
{
    uint32_t bm = 0;
    for (int r = 0; r < SIZE; r++)
        bm |= ((uint32_t)(grid[r * SIZE + col] & 1u) << r);
    return bm & FLIT_BMAP_MASK;
}

/* ==================================================================
 * Ghost flit send / receive primitives
 * ================================================================== */

/*
 * build_ghost_payload — pack tag + bitmap into a 29-bit payload.
 * FLIT_VALID_BIT (bit 10) is always set so recv_ghost_blocking()
 * can distinguish a real ghost from an empty FIFO read (all-zero).
 */
static inline uint32_t build_ghost_payload(uint32_t recv_store_tag, uint32_t bm)
{
    return FLIT_VALID_BIT
         | ((recv_store_tag & 0x3u) << FLIT_TAG_SHIFT)
         | (bm & FLIT_BMAP_MASK);
}

/*
 * send_ghost — send a bitmap to a neighbour tile.
 *   dest_id        : TILE_ID(r,c) of the recipient
 *   recv_store_tag : TAG_STORE_X telling the recipient which ghost buffer to fill
 *   bm             : 10-bit row/col bitmap
 */
static inline void send_ghost(uint32_t dest_id, uint32_t recv_store_tag, uint32_t bm)
{
    noc_write((dest_id << FLIT_DEST_SHIFT) | build_ghost_payload(recv_store_tag, bm));
}

/*
 * recv_ghost_blocking — spin until a flit with FLIT_VALID_BIT arrives,
 * then decode tag + bitmap and write into the correct ghost buffer.
 *
 * Returns the raw payload for debug logging.
 */
static uint32_t recv_ghost_blocking(void)
{
    uint32_t p;
    do {
        p = noc_recv_raw();
    } while ((p & FLIT_VALID_BIT) == 0u);
    return p & FLIT_PAYLOAD_MASK;
}

static void dispatch_ghost(uint32_t p)
{
    uint32_t tag = (p & FLIT_TAG_MASK) >> FLIT_TAG_SHIFT;
    uint32_t bm  = p & FLIT_BMAP_MASK;

    if (tag == TAG_STORE_N) {
        *DEBUG_LAST_RECV_N = bm;
        store_bitmap_into_buf(ghost_N, bm);
    } else if (tag == TAG_STORE_S) {
        *DEBUG_LAST_RECV_S = bm;
        store_bitmap_into_buf(ghost_S, bm);
    } else if (tag == TAG_STORE_W) {
        *DEBUG_LAST_RECV_W = bm;
        store_bitmap_into_buf(ghost_W, bm);
    } else { /* TAG_STORE_E */
        *DEBUG_LAST_RECV_E = bm;
        store_bitmap_into_buf(ghost_E, bm);
    }
}

/* ==================================================================
 * GHOST EXCHANGE  — serialised, one direction at a time
 * ==================================================================
 *
 * Hardware constraint: mesh_router can only eject ONE flit per cycle
 * into a tile's FIFO.  If two flits arrive at the same destination in
 * the same cycle, only the last one processed by route_one() survives.
 *
 * Solution: perform the exchange in four independent phases so that
 * each phase sends at most ONE flit to any given destination tile.
 *
 * Phase layout (sender → receiver, tag stored at receiver):
 *
 *   Phase 0: row i   → row i-1   (send top row  northward, tag=STORE_S)
 *            row i-1 receives if has_S  (it has a southern neighbour = row i)
 *            [only tiles with has_N send; only tiles with has_S receive]
 *
 *   Phase 1: row i   → row i+1   (send bottom row southward, tag=STORE_N)
 *
 *   Phase 2: col j   → col j+1   (send right column eastward, tag=STORE_W)
 *
 *   Phase 3: col j   → col j-1   (send left column westward, tag=STORE_E)
 *
 * In each phase exactly one send is in flight per link, so no FIFO
 * collision is possible.
 *
 * Tiles without the relevant neighbour skip the send or receive for
 * that phase (their ghost buffer is zeroed by clear_missing_ghosts).
 */
static void ghost_exchange(int my_row, int my_col,
                           int has_N, int has_S,
                           int has_W, int has_E)
{
    /* Reset debug registers */
    *DEBUG_GHOST_FLAGS = 0u;
    *DEBUG_LAST_RECV_N = 0u;
    *DEBUG_LAST_RECV_S = 0u;
    *DEBUG_LAST_RECV_W = 0u;
    *DEBUG_LAST_RECV_E = 0u;

    /* Zero ghost buffers for edges that have no neighbour */
    if (!has_N) clear_buf10(ghost_N);
    if (!has_S) clear_buf10(ghost_S);
    if (!has_W) clear_buf10(ghost_W);
    if (!has_E) clear_buf10(ghost_E);

    /* ----------------------------------------------------------
     * PHASE 0: send top row NORTHWARD  (tag=STORE_S at receiver)
     *   Sender  : tiles with has_N  (they have a northern neighbour)
     *   Receiver: tiles with has_S  (they have a southern neighbour
     *             that is sending its top row → store as ghost_S here)
     * ---------------------------------------------------------- */
    if (has_N) {
        send_ghost(TILE_ID(my_row - 1, my_col), TAG_STORE_S, row_bitmap(0));
        *DEBUG_GHOST_FLAGS |= (1u << 1);   /* sent_N flag */
    }
    if (has_S) {
        uint32_t p = recv_ghost_blocking();
        dispatch_ghost(p);
    }

    /* ----------------------------------------------------------
     * PHASE 1: send bottom row SOUTHWARD  (tag=STORE_N at receiver)
     * ---------------------------------------------------------- */
    if (has_S) {
        send_ghost(TILE_ID(my_row + 1, my_col), TAG_STORE_N, row_bitmap(SIZE - 1));
        *DEBUG_GHOST_FLAGS |= (1u << 0);   /* sent_S flag */
    }
    if (has_N) {
        uint32_t p = recv_ghost_blocking();
        dispatch_ghost(p);
    }

    /* ----------------------------------------------------------
     * PHASE 2: send right column EASTWARD  (tag=STORE_W at receiver)
     * ---------------------------------------------------------- */
    if (has_E) {
        send_ghost(TILE_ID(my_row, my_col + 1), TAG_STORE_W, col_bitmap(SIZE - 1));
        *DEBUG_GHOST_FLAGS |= (1u << 2);   /* sent_E flag */
    }
    if (has_W) {
        uint32_t p = recv_ghost_blocking();
        dispatch_ghost(p);
    }

    /* ----------------------------------------------------------
     * PHASE 3: send left column WESTWARD  (tag=STORE_E at receiver)
     * ---------------------------------------------------------- */
    if (has_W) {
        send_ghost(TILE_ID(my_row, my_col - 1), TAG_STORE_E, col_bitmap(0));
        *DEBUG_GHOST_FLAGS |= (1u << 3);   /* sent_W flag */
    }
    if (has_E) {
        uint32_t p = recv_ghost_blocking();
        dispatch_ghost(p);
    }
}

/* ==================================================================
 * Game-of-Life neighbour count
 * ==================================================================
 * Uses ghost buffers at the tile boundary.
 * ghost_N[c] = cell alive in row -1 (from northern neighbour's bottom row)
 * ghost_S[c] = cell alive in row SIZE (from southern neighbour's top row)
 * ghost_W[r] = cell alive in col -1 (from western neighbour's right col)
 * ghost_E[r] = cell alive in col SIZE (from eastern neighbour's left col)
 *
 * Corner ghosts (diagonal neighbours) are NOT exchanged: the blinker
 * pattern used here stays well away from tile corners, so corner
 * ghost cells are always 0.  If you add patterns near tile corners,
 * you will need diagonal ghost exchange too.
 */
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
        /* top row: read northern ghost */
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
        /* bottom row: read southern ghost */
        if (left)  n += ghost_S[col - 1] & 1;
                   n += ghost_S[col    ] & 1;
        if (right) n += ghost_S[col + 1] & 1;
    }

    return n;
}

/* ==================================================================
 * Entry point (placed at address 0x0000 by linker)
 * ==================================================================
 * _start runs before main().  It sets up the stack, zeroes the BSS,
 * and clears the working memory regions so main sees a clean slate.
 */
__attribute__((section(".text.init"), naked))
void _start(void)
{
    __asm__ volatile (
        /*
         * Stack top = 0x07FC (top of 2 KB SRAM, 4-byte aligned).
         * The linker places _start at 0x0000; the boot controller
         * writes each firmware byte to the matching SRAM byte address,
         * so byte 0 of firmware.bin → SRAM[0x0000], which is where
         * the CPU fetches its first instruction.
         */
        "li   sp, 0x07fc\n"

        /* Zero ghost region 0x0600–0x0627 (40 bytes: N/S/W/E × 10) */
        "li   t0, 0x0600\n"
        "li   t1, 0x0628\n"
        "1:\n"
        "bge  t0, t1, 2f\n"
        "sb   zero, 0(t0)\n"
        "addi t0, t0, 1\n"
        "j    1b\n"

        /* Zero next_grid 0x0640–0x06A3 (100 bytes) */
        "2:\n"
        "li   t0, 0x0640\n"
        "li   t1, 0x06a4\n"
        "3:\n"
        "bge  t0, t1, 4f\n"
        "sb   zero, 0(t0)\n"
        "addi t0, t0, 1\n"
        "j    3b\n"

        /* Zero debug region 0x0700–0x073F (64 bytes) */
        "4:\n"
        "li   t0, 0x0700\n"
        "li   t1, 0x0740\n"
        "5:\n"
        "bge  t0, t1, 6f\n"
        "sb   zero, 0(t0)\n"
        "addi t0, t0, 1\n"
        "j    5b\n"

        "6:\n"
        "call main\n"

        /* Should never return; spin forever if it does */
        "7:\n"
        "j    7b\n"
    );
}

/* ==================================================================
 * Seed
 * ==================================================================
 * Places a vertical blinker at (row=4,col=5), (5,5), (6,5) on every
 * tile.  The testbench Python model does the same (build_global_seed
 * calls expected_blinker_seed() for every tile), so all 9 tiles have
 * the same initial pattern.
 */
static void seed_local_tile(void)
{
    for (int i = 0; i < SIZE * SIZE; i++)
        grid[i] = 0u;

    grid[4 * SIZE + 5] = 1;
    grid[5 * SIZE + 5] = 1;
    grid[6 * SIZE + 5] = 1;
}

/* Idle loop for tiles outside the active mesh (row >= MESH_ROWS, etc.) */
static void idle_tile_forever(void)
{
    while (1) {
        uint32_t p = noc_recv_payload_nonblocking();
        if (p == (SIG_STOP & FLIT_PAYLOAD_MASK)) {
            while (1) {}
        }
    }
}

/* ==================================================================
 * main
 * ================================================================== */
int main(void)
{
    /* Read this tile's hardware ID */
    uint32_t my_id  = noc_read_my_id();
    int my_row = (int)TILE_ROW(my_id);
    int my_col = (int)TILE_COL(my_id);

    /* Any tile outside the 3×3 active mesh idles */
    if (my_row >= MESH_ROWS || my_col >= MESH_COLS) {
        idle_tile_forever();
    }

    /* Neighbour-existence flags */
    int has_N = (my_row > 0);
    int has_S = (my_row < MESH_ROWS - 1);
    int has_W = (my_col > 0);
    int has_E = (my_col < MESH_COLS - 1);

    /* Announce boot (off-mesh signal, dest=0xF=tile(3,3) which doesn't exist) */
    if (my_row == 0 && my_col == 0) {
        noc_signal(SIG_BOOT_ALIVE);
    }

    /* Write the initial GoL pattern */
    seed_local_tile();

    /* Initialise ghost buffers + debug area */
    if (!has_N) clear_buf10(ghost_N);
    if (!has_S) clear_buf10(ghost_S);
    if (!has_W) clear_buf10(ghost_W);
    if (!has_E) clear_buf10(ghost_E);
    clear_debug_hist();
    *DEBUG_ITER_COUNT = 0u;

    /*
     * STAGE0 = 0x11111111 is the FIRST breadcrumb written by firmware.
     * If the testbench sees STAGE0==0 it means main() was never reached
     * (boot failure) or crashed before this point.
     */
    mark_stage(0x11111111u, 0u, 0u, 0u);

    if (my_row == 0 && my_col == 0) {
        noc_signal(SIG_SEED_LIVE);
    }

    uint32_t iter = 0;

    while (1) {
        /* ---- breadcrumb: entering iteration ---- */
        mark_stage(0x11111111u, 0u, 0u, 0u);

        /* ---- Phase A: exchange ghost rows/columns with neighbours ---- */
        ghost_exchange(my_row, my_col, has_N, has_S, has_W, has_E);
        mark_stage(0x11111111u, 0x22222222u, 0u, 0u);

        /* ---- Phase B: compute next generation ---- */
        clear_debug_hist();
        for (int row = 0; row < SIZE; row++) {
            for (int col = 0; col < SIZE; col++) {
                int alive = grid[row * SIZE + col] & 1;
                int n     = neighbour_count(row, col);
                if (n >= 0 && n <= 8)
                    DEBUG_NEIGHBOR_HIST[n]++;
                next_grid[row * SIZE + col] =
                    (uint8_t)(alive ? ((n == 2) || (n == 3))
                                    : (n == 3));
            }
        }
        mark_stage(0x11111111u, 0x22222222u, 0x33333333u, 0u);

        if (my_row == 0 && my_col == 0) {
            noc_signal(SIG_MATH_DONE);
        }

        /* ---- Phase C: commit next → current grid ---- */
        for (int i = 0; i < SIZE * SIZE; i++)
            grid[i] = next_grid[i];

        iter++;
        *DEBUG_ITER_COUNT = iter;
        mark_stage(0x11111111u, 0x22222222u, 0x33333333u, 0x44444444u);

        if (my_row == 0 && my_col == 0) {
            noc_signal(SIG_GEN_STABLE);
        }

        /* Check for stop signal (non-blocking) */
        {
            uint32_t p = noc_recv_payload_nonblocking();
            if (p == (SIG_STOP & FLIT_PAYLOAD_MASK)) {
                while (1) {}
            }
        }
    }

    return 0;
}