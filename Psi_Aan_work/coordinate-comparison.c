#include <stdint.h>

// MMIO addresses recognized by the Verilog Address Decoder
#define ADDR_MY_COORDS   0x80000000  // Read physical X,Y from Verilog params
#define ADDR_NOC_ROUTER  0x90000000  // Write to trigger Wishbone transfer to NoC
#define SRAM_GOL_GRID    0x00002000  // Local 10x10 grid storage in SRAM

#define HW_REGS          ((volatile uint32_t*)ADDR_MY_COORDS)
#define NOC_OUT          ((volatile uint32_t*)ADDR_NOC_ROUTER)

int main() {
    // SERV pulls unique ID from hardware via Data Bus
    uint32_t my_id = *HW_REGS;
    uint8_t my_x = my_id & 0xFF;
    uint8_t my_y = (my_id >> 8) & 0xFF;

    while(1) {
        // 1. Pull incoming packet from the "Mailbox" in SRAM
        uint32_t *mailbox = (uint32_t*)0x00003000;
        uint32_t packet = *mailbox;

        if (packet != 0) { // If there is a new message from the Host or Neighbor
            uint8_t dest_x = packet & 0xFF;
            uint8_t dest_y = (packet >> 8) & 0xFF;
            uint8_t data   = (packet >> 16) & 0xFF;

            // 2. THE COMPARISON: Is this for me?
            if (dest_x == my_x && dest_y == my_y) {
                // MATCH: Pull data into our local grid
                uint8_t *grid = (uint8_t*)SRAM_GOL_GRID;
                grid[0] = data; 
            } 
            else {
                // NO MATCH: Forward the packet
                // SERV translates this to Wishbone signals for the Verilog Router
                *NOC_OUT = packet;
            }
            *mailbox = 0; // Reset mailbox for next pull
        }
    }
}