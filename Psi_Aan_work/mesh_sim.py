import threading
import random
import time
from datetime import datetime

class SyncBarrier:
    """Simulates the hardware 'DONE' signal and the Global Clock Edge."""
    def __init__(self, n):
        self.n = n
        self.count = 0
        self.mutex = threading.Lock()
        self.barrier = threading.Condition(self.mutex)

    def wait(self):
        with self.mutex:
            self.count += 1
            if self.count == self.n:
                self.count = 0
                self.barrier.notify_all()
            else:
                self.barrier.wait()

class SERVMeshNode(threading.Thread):
    def __init__(self, x, y, barrier, observer_barrier, total_gens, global_mem, size=10):
        super().__init__()
        self.x, self.y = x, y
        self.node_id = (x, y)
        self.size = size
        self.barrier = barrier
        self.observer_barrier = observer_barrier
        self.total_gens = total_gens
        self.global_mem = global_mem
        self.local_grid = [[0 for _ in range(size)] for _ in range(size)]

    def get_neighbor_val(self, r, c):
        tx, ty = self.x, self.y
        
        if r < 0: 
            ty -= 1
            r += self.size
        elif r >= self.size: 
            ty += 1
            r -= self.size
            
        if c < 0: 
            tx -= 1
            c += self.size
        elif c >= self.size: 
            tx += 1
            c -= self.size
        
        target_node = (tx, ty)
        if target_node == self.node_id:
            return self.local_grid[r][c]
        elif target_node in self.global_mem:
            return self.global_mem[target_node][r][c]
        
        return 0

    def run(self):
        for gen in range(1, self.total_gens + 1):
            new_grid = [[0 for _ in range(self.size)] for _ in range(self.size)]
            for r in range(self.size):
                for c in range(self.size):
                    n_sum = 0
                    for dr in [-1, 0, 1]:
                        for dc in [-1, 0, 1]:
                            if dr == 0 and dc == 0: continue
                            n_sum += self.get_neighbor_val(r + dr, c + dc)
                    
                    if self.local_grid[r][c] == 1:
                        new_grid[r][c] = 1 if 2 <= n_sum <= 3 else 0
                    else:
                        new_grid[r][c] = 1 if n_sum == 3 else 0
            
            # Sync 1: Wait for all 9 nodes to finish calculation
            self.barrier.wait()
            
            # Update Phase
            self.local_grid = new_grid
            self.global_mem[self.node_id] = [row[:] for row in self.local_grid]
            
            # Sync 2: Wait for all 9 nodes to finish memory write
            self.barrier.wait()
            
            # Sync 3: Wait for observer (Main Thread) to save state
            self.observer_barrier.wait()

def save_state(f, gen, global_mem, mesh_size=3, node_inner_size=10):
    """Writes the current 30x30 mesh state to the file."""
    f.write(f"\n{'='*15} GENERATION {gen} {'='*15}\n")
    total_rows = mesh_size * node_inner_size
    
    for gr in range(total_rows):
        # Horizontal visual separator between node rows
        if gr > 0 and gr % node_inner_size == 0:
            f.write("-" * (mesh_size * 13 - 1) + "\n")
            
        line = ""
        for nx in range(mesh_size):
            ny = gr // node_inner_size
            node_data = global_mem.get((nx, ny), [[0]*node_inner_size]*node_inner_size)
            line += "".join("#" if c else "." for c in node_data[gr % node_inner_size])
            if nx < mesh_size - 1:
                line += " | "
        f.write(line + "\n")

def run_simulation():
    print("--- SERVMesh 3x3 Python Simulation ---")
    gens = int(input("Number of generations to simulate: "))
    dens = float(input("Enter density (0.1 - 0.9): "))
    
    global_mem = {}
    mesh_dim = 3
    node_count = mesh_dim * mesh_dim
    
    # 9 nodes need to sync with each other
    barrier = SyncBarrier(node_count)
    # 9 nodes + 1 observer thread = 10
    observer_barrier = SyncBarrier(node_count + 1)
    
    nodes_map = {(x, y): SERVMeshNode(x, y, barrier, observer_barrier, gens, global_mem) 
                 for y in range(mesh_dim) for x in range(mesh_dim)}

    # Initialize Random Grid
    for n in nodes_map.values():
        n.local_grid = [[1 if random.random() < dens else 0 for _ in range(10)] for _ in range(10)]
        global_mem[n.node_id] = [row[:] for row in n.local_grid]

    filename = "hardware_simulation_3x3_output.txt"
    with open(filename, "w") as f:
        f.write(f"SERVMesh 3x3 Simulation Log - {datetime.now()}\n")
        save_state(f, 0, global_mem)
        
        threads = list(nodes_map.values())
        for t in threads: t.start()
        
        for g in range(1, gens + 1):
            observer_barrier.wait() # Wait for generation to complete
            save_state(f, g, global_mem)
            print(f"Generation {g} logged...")
        
        for t in threads: t.join()

    print(f"\nSimulation complete. 3x3 grid results saved to: {filename}")

if __name__ == "__main__":
    run_simulation()