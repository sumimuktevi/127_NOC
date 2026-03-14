#include <stdint.h>

#define NOC_INJECT_BASE 0x80000000u
#define NOC_RECV_BASE   0x80000004u

#define SIG_WAITING_HOST 0xEBBBBBBBu
#define SIG_HOST_LOADED  0xDCCCCCCCu
#define SIG_STORE_ACK_BASE 0xFAAA1000u

#define FLIT_TYPE_WRITE  0x1u
#define FLIT_TYPE_DONE   0x2u

#define SIZE 10

extern uint8_t _bss_start;
extern uint8_t _bss_end;

static inline void noc_signal(uint32_t sig_word)
{
    *(volatile uint32_t *)NOC_INJECT_BASE = sig_word;
}

static inline uint32_t noc_recv(void)
{
    volatile uint32_t *reg = (volatile uint32_t *)NOC_RECV_BASE;
    uint32_t val = *reg & 0x0FFFFFFFu;
    if (val != 0) {
        *reg = 0;
    }
    return val;
}

__attribute__((section(".text.init"), naked))
void _start(void)
{
    __asm__ volatile (
        "li   sp, 0x400\n"
        "la   t0, _bss_start\n"
        "la   t1, _bss_end\n"
        "1:\n"
        "bge  t0, t1, 2f\n"
        "sw   zero, 0(t0)\n"
        "addi t0, t0, 4\n"
        "j    1b\n"
        "2:\n"
        "call main\n"
        "3: j 3b\n"
    );
}

volatile uint8_t current_grid[SIZE * SIZE];

int main(void)
{
    noc_signal(SIG_WAITING_HOST);

    for (;;) {
        uint32_t packet = noc_recv();
        uint32_t kind = (packet >> 24) & 0xFFu;
        uint32_t index;

        if (packet == 0) {
            continue;
        }

        if (kind == FLIT_TYPE_WRITE) {
            index = (packet >> 8) & 0xFFu;
            if (index < (SIZE * SIZE)) {
                current_grid[index] = (uint8_t)(packet & 0xFFu);
                noc_signal(SIG_STORE_ACK_BASE | (packet & 0xFFu));
            }
        } else if (kind == FLIT_TYPE_DONE) {
            noc_signal(SIG_HOST_LOADED);
            break;
        }
    }

    for (;;) {
        __asm__ volatile ("" ::: "memory");
    }

    return 0;
}
