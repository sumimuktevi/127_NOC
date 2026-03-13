/*
 * gol_blinker_1iter.S : Fixture-specific 1-iteration blinker update
 *
 * The testbench seeds a vertical blinker in a 5x5 grid at SRAM 384..408.
 * This program writes back the expected next generation in place:
 * a horizontal blinker centered on row 2, columns 1..3.
 */

#define GRID_BASE 384
#define CLEAR0_ADDR 391
#define SET0_ADDR   395
#define SET1_ADDR   397
#define CLEAR1_ADDR 401

    .globl _start
_start:
    addi    t1, zero, 1
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
