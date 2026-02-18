#include <stdint.h>

// Hardware addresses matching your mesh_router logic
#define ADDR_NOC_SEND    0x40000000
#define ADDR_TILE_ID     0x40000020

// We use _start to avoid the C-standard library "main" wrapper
void __attribute__((section(".text.init"))) _start() {
    // Volatile is mandatory to prevent compiler from optimizing out H/W access
    volatile uint32_t* id_ptr  = (volatile uint32_t*)ADDR_TILE_ID;
    volatile uint32_t* noc_ptr = (volatile uint32_t*)ADDR_NOC_SEND;
    
    // Read who I am
    uint32_t my_id = *id_ptr;
    
    while(1) {
        // Broadcast my ID to the mesh
        // In your mesh_router, this triggers the "is_network_send" logic
        *noc_ptr = my_id;
        
        // Very short delay loop
        for(volatile int i = 0; i < 50; i++);
    }
}