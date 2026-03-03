OUTPUT_ARCH(riscv)
ENTRY(_start)

MEMORY {
    /* The gf180mcu SRAM you provided is 256 bytes */
    sram (rwx) : ORIGIN = 0x00000000, LENGTH = 256
}

SECTIONS {
    /* Ensure the entry point code is at the very beginning */
    .text : {
        *(.text.init)
        *(.text)
        *(.rodata*)
    } > sram

    /* Throw away compiler info and attributes to save space */
    /DISCARD/ : {
        *(.comment)
        *(.riscv.attributes)
        *(.eh_frame)
    }
}