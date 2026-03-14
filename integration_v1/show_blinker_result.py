#!/usr/bin/env python3
"""
Render the seeded and one-step blinker patterns in the terminal.

This mirrors the deterministic SRAM update used by
`test_boot_and_dump.py::test_one_gol_iteration`.
"""

SIZE = 10
MESH_ROWS = 3
MESH_COLS = 3
LIVE = "█"
DEAD = "·"


def make_seeded_blinker(size=SIZE):
    grid = [0] * (size * size)
    for idx in (45, 55, 65):
        grid[idx] = 1
    return grid


def gol_step_local(grid, size=SIZE):
    nxt = [0] * (size * size)
    for y in range(size):
        for x in range(size):
            neighbors = 0
            for dy in (-1, 0, 1):
                for dx in (-1, 0, 1):
                    if dx == 0 and dy == 0:
                        continue
                    nx = x + dx
                    ny = y + dy
                    if 0 <= nx < size and 0 <= ny < size:
                        neighbors += 1 if grid[ny * size + nx] else 0

            idx = y * size + x
            if grid[idx]:
                nxt[idx] = 1 if neighbors in (2, 3) else 0
            else:
                nxt[idx] = 1 if neighbors == 3 else 0
    return nxt


def render_grid(grid, size=SIZE):
    return "\n".join(
        "".join(LIVE if grid[y * size + x] else DEAD for x in range(size))
        for y in range(size)
    )


def render_mesh(grid, rows=MESH_ROWS, cols=MESH_COLS, size=SIZE):
    tile_lines = render_grid(grid, size).splitlines()
    mesh_lines = []
    for _ in range(rows):
        for line in tile_lines:
            mesh_lines.append("  ".join(line for _ in range(cols)))
        if _ != rows - 1:
            mesh_lines.append("")
    return "\n".join(mesh_lines)


def main():
    before = make_seeded_blinker()
    after = gol_step_local(before)

    print("Blinker Demo")
    print()
    print("Single Tile Before")
    print(render_grid(before))
    print()
    print("Single Tile After")
    print(render_grid(after))
    print()
    print("Full 3x3 Mesh After")
    print(render_mesh(after))


if __name__ == "__main__":
    main()
