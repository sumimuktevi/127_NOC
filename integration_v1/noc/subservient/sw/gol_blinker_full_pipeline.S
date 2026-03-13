/*
 * gol_blinker_full_pipeline.S : Boot-path-friendly blinker smoke test
 *
 * This program is intended for the SPI-flash/bootloader testbench.
 * After boot it seeds the vertical blinker, then writes the expected
 * 1-iteration horizontal blinker back into SRAM in place.
 */

#define SEED0_ADDR  391
#define SEED1_ADDR  396
#define SEED2_ADDR  401
#define CLEAR0_ADDR 391
#define SET0_ADDR   395
#define SET1_ADDR   397
#define CLEAR1_ADDR 401

    .globl _start
_start:
    addi    t1, zero, 1

    li      t0, SEED0_ADDR
    sb      t1, 0(t0)
    li      t0, SEED1_ADDR
    sb      t1, 0(t0)
    li      t0, SEED2_ADDR
    sb      t1, 0(t0)

    li      t0, CLEAR0_ADDR
    sb      zero, 0(t0)
    li      t0, SET0_ADDR
    sb      t1, 0(t0)
    li      t0, SET1_ADDR
    sb      t1, 0(t0)
    li      t0, CLEAR1_ADDR
    sb      zero, 0(t0)

done:
    j       done
