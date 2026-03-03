OUTPUT_ARCH(riscv)
ENTRY(_start)

MEMORY {
    sram (rwx) : ORIGIN = 0x00000000, LENGTH = 1024
}

SECTIONS {
    .text : {
        *(.text.init)
        *(.text)
        *(.rodata*)
    } > sram

    .bss : {
        _bss_start = .;
        *(.bss)
        *(.bss.*)
        *(COMMON)
        _bss_end = .;
    } > sram
}