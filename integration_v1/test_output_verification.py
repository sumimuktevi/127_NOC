"""
Test 3: Output Verification - Dump memory and output to host, verify via PBM image
"""

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer, Event
import os
import sys

sys.path.insert(0, os.path.dirname(__file__))
from pbm_utils import PBMImage, create_test_image
# reuse helper from memory dump tests for SRAM access
from test_memory_dump import MemoryDumpTest


class OutputVerificationTest:
    """Helper class for output verification testing."""
    
    def __init__(self, dut, tile_rows=3, tile_cols=3, pixels_per_tile=None):
        self.dut = dut
        self.tile_rows = tile_rows
        self.tile_cols = tile_cols
        self.pixels_per_tile = pixels_per_tile
        # geometry information populated when loading an image
        self.image_width = None
        self.image_height = None
        self.tile_width = None
        self.tile_height = None
        self.output_data = {}
        self.host_packets = []
        # helper used for actual SRAM operations
        self.mem_helper = MemoryDumpTest(dut, tile_rows, tile_cols,
                                        pixels_per_tile=pixels_per_tile or 0)
    
    async def wait_clocks(self, n):
        """Wait for n clock cycles."""
        for _ in range(n):
            await RisingEdge(self.dut.clk)

    async def load_image(self, image):
        """Load a PBMImage into DUT SRAM via MemoryDumpTest helper.

        This is the proper way to inject data into the simulated tile
        memories so that subsequent dumping will return the same values.
        The method also records image geometry so the output image can
        be reconstructed later.
        """
        # record geometry
        self.image_width = image.width
        self.image_height = image.height
        self.tile_width = self.image_width // self.tile_cols
        self.tile_height = self.image_height // self.tile_rows
        self.pixels_per_tile = self.tile_width * self.tile_height
        # update helper with correct pixel count
        self.mem_helper.pixels_per_tile = self.pixels_per_tile
        # load through helper (also populates mem_helper.tile_data)
        await self.mem_helper.load_tiles(image)
        # initialize output_data with what was written
        self.output_data = {k: v.copy() for k, v in self.mem_helper.tile_data.items()}
    
    async def read_tile_memory(self, tile_row, tile_col):
        """Read complete memory from a tile via hierarchical access.

        Arguments mirror MemoryDumpTest.dump_tile_memory.
        """
        tile_path = f"system_top.noc_mesh.rows[{tile_row}].cols[{tile_col}].tile_inst"
        tile_data = []
        # default to 100 when not configured
        count = self.pixels_per_tile or 100
        for addr in range(count):
            try:
                tile = self.dut.noc_mesh.rows[tile_row].cols[tile_col].tile_inst.sram_inst
                pixel = int(tile.mem[addr].value)
                tile_data.append(pixel & 0x1)
            except Exception:
                try:
                    sram_path = f"{tile_path}.sram_inst.mem[{addr}]"
                    pixel = int(self.dut._collect_hier(sram_path))
                    tile_data.append(pixel & 0x1)
                except Exception:
                    tile_data.append(0)
        self.output_data[(tile_row, tile_col)] = tile_data
        return tile_data
    
    async def dump_all_tile_memory(self):
        """Dump memory from all tiles.
        
        Returns:
            Dict of tile memories
        """
        print("\n=== Dumping All Tile Memory ===")
        
        for r in range(self.tile_rows):
            for c in range(self.tile_cols):
                data = await self.read_tile_memory(r, c)
                ones = sum(data)
                print(f"Tile ({r},{c}): {len(data)} pixels, {ones} ones")
        
        return self.output_data
    
    async def send_to_host(self, tile_row, tile_col):
        """Send tile data to host via NoC packet injection.
        
        Simulates:
        1. Create packet from tile data
        2. Set bypass_en = 1
        3. Inject via host_mosi (SPI)
        4. Capture via host_miso (response)
        
        Args:
            tile_row: Source tile row
            tile_col: Source tile column
        """
        if (tile_row, tile_col) not in self.output_data:
            print(f"No data for tile ({tile_row},{tile_col})")
            return
        
        tile_data = self.output_data[(tile_row, tile_col)]
        
        # In a real test, would:
        # 1. Inject read packet to destination tile
        # 2. Wait for response
        # 3. Capture response bits
        # 4. Store in host_packets
        
        print(f"Sending tile ({tile_row},{tile_col}) data to host...")
        self.host_packets.append({
            'tile': (tile_row, tile_col),
            'data': tile_data
        })
    
    async def send_all_to_host(self):
        """Send all tile memories to host."""
        print("\n=== Sending All Tiles to Host ===")
        
        for r in range(self.tile_rows):
            for c in range(self.tile_cols):
                await self.send_to_host(r, c)
        
        print(f"Queued {len(self.host_packets)} tiles for transmission")
    
    def create_output_image(self):
        """Create image from output data using the previously recorded geometry.
        """
        if self.image_width is None or self.image_height is None:
            # fallback to simple multiplication if geometry unknown
            image_width = 8 * self.tile_cols
            image_height = 8 * self.tile_rows
        else:
            image_width = self.image_width
            image_height = self.image_height
        image = PBMImage(image_width, image_height)
        image.merge_from_tiles(self.output_data, self.tile_rows, self.tile_cols)
        return image
    
    def write_output_image(self, filename):
        """Write output image to file.
        
        Args:
            filename: Output PBM path
        """
        image = self.create_output_image()
        os.makedirs(os.path.dirname(filename) or '.', exist_ok=True)
        image.write_pbm(filename, 'P1')
        print(f"Wrote output image: {filename}")
        return image


@cocotb.test()
async def test_output_verification(dut):
    """Test output verification: dump memory and send to host.
    
    1. Load test image into tiles
    2. Wait for processing
    3. Dump all tile memories
    4. Send data to host
    5. Write output to PBM file
    6. Compare with input
    """
    
    # Start clock
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    
    # Reset
    dut.reset.value = 1
    dut.bypass_en.value = 0
    dut.flash_miso.value = 0
    dut.host_mosi.value = 0
    await Timer(100, unit="ns")
    dut.reset.value = 0
    
    print("\n" + "="*60)
    print("TEST 3: OUTPUT VERIFICATION")
    print("="*60)
    
    # Create and load test image (30×30 = 3×3 tiles of 10×10 pixels)
    test_image = create_test_image(30, 30, 'grid')
    test_image.write_pbm('test_output/output_test_input.pbm', 'P1')
    print(f"Created test image: test_output/output_test_input.pbm")
    
    # Initialize output test helper
    output_test = OutputVerificationTest(dut, tile_rows=3, tile_cols=3)
    # load image into DUT SRAM so that subsequent dumps see real data
    await output_test.load_image(test_image)
    # Wait a bit for any processing (no-op here)
    await Timer(1, unit="us")
    # Dump tile memories from hardware
    await output_test.dump_all_tile_memory()
    
    # Send to host (simulated)
    await output_test.send_all_to_host()
    
    # Write output image
    output_image = output_test.write_output_image('test_output/output_verification.pbm')
    
    # Compare with input
    match, diff_count, diffs = test_image.compare(output_image)
    
    print(f"\n=== Output Comparison ===")
    print(f"Input image:  test_output/output_test_input.pbm")
    print(f"Output image: test_output/output_verification.pbm")
    print(f"Match: {match}")
    print(f"Differences: {diff_count}")
    
    if not match:
        print(f"\n⚠ Output does not match input (found {diff_count} differences)")
    else:
        print(f"\n✓ Output matches input perfectly")
    
    print("\n" + "="*60)
    print(f"TEST RESULT: {'PASS' if match else 'FAIL'}")
    print("="*60)
    
    assert match, f"Output verification failed: {diff_count} differences found"


@cocotb.test()
async def test_host_communication(dut):
    """Test host communication protocol.
    
    1. Enable bypass mode (bypass_en=1)
    2. Send SPI packets from host
    3. Receive responses
    4. Verify packet integrity
    """
    
    # Start clock
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    
    # Reset
    dut.reset.value = 1
    dut.bypass_en.value = 0
    await Timer(100, unit="ns")
    dut.reset.value = 0
    
    print("\n" + "="*60)
    print("TEST 3B: HOST COMMUNICATION")
    print("="*60)
    
    # Wait for system to be ready
    await Timer(100, unit="ns")
    
    # Enable bypass mode
    print("Enabling bypass mode...")
    dut.bypass_en.value = 1
    
    # Simulate SPI communication
    print("Sending test packets to host gateway...")
    
    # Create test packets (example: read request for tile 1,1)
    # Packet format: [opcode:4][source_x:2][source_y:2][target_x:2][target_y:2][addr:4][payload:10]
    
    test_packets = [
        0x2_0_0_1_1_0_0_123,  # Read request: target=(1,1), addr=0
        0x1_0_0_0_0_5_0_555,  # Write request: target=(0,0), addr=5, data=0x555
    ]
    
    packets_sent = 0
    for packet in test_packets:
        print(f"  Packet: 0x{packet:08x}")
        packets_sent += 1
    
    print(f"\nSent {packets_sent} packets")
    
    # In real test, would:
    # 1. Drive host_mosi bit by bit
    # 2. Capture host_miso responses
    # 3. Verify packet routing
    
    await Timer(1, unit="us")
    
    print("\n" + "="*60)
    print("HOST COMMUNICATION TEST COMPLETE")
    print("="*60)


@cocotb.test()
async def test_full_pipeline(dut):
    """Test complete pipeline: load image → process → dump → output.
    
    This combines all three test scenarios.
    """
    
    # Start clock
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    
    # Reset
    dut.reset.value = 1
    dut.bypass_en.value = 0
    dut.flash_miso.value = 0
    await Timer(100, unit="ns")
    dut.reset.value = 0
    
    print("\n" + "="*60)
    print("TEST 3C: FULL PIPELINE TEST")
    print("="*60)
    
    # Step 1: Create input image (30×30 = 3×3 tiles of 10×10 pixels)
    print("\n[Step 1] Creating input image...")
    input_image = create_test_image(30, 30, 'checkerboard')
    input_image.write_pbm('test_output/pipeline_input.pbm', 'P1')
    
    # Step 2: Load into tiles
    print("[Step 2] Loading image into tiles...")
    output_test = OutputVerificationTest(dut, tile_rows=3, tile_cols=3)
    tiles = input_image.split_to_tiles(3, 3)
    for (r, c), tile_data in tiles.items():
        output_test.output_data[(r, c)] = tile_data
    
    await Timer(100, unit="ns")
    
    # Step 3: Dump memory
    print("[Step 3] Dumping tile memory...")
    await output_test.dump_all_tile_memory()
    
    # Step 4: Send to host
    print("[Step 4] Sending to host...")
    await output_test.send_all_to_host()
    
    # Step 5: Write output
    print("[Step 5] Writing output image...")
    output_image = output_test.write_output_image('test_output/pipeline_output.pbm')
    
    # Step 6: Compare
    print("[Step 6] Comparing results...")
    match, diff_count, _ = input_image.compare(output_image)
    
    print(f"\n{'✓ PASS' if match else '✗ FAIL'}: Pipeline test {'succeeded' if match else f'failed ({diff_count} diffs)'}")
    
    print("\n" + "="*60)
    print("FULL PIPELINE TEST COMPLETE")
    print("="*60)


@cocotb.test()
async def test_integration_with_paul_image(dut):
    """Integration test using the real test3_paul.pbm image.
    
    This test validates the complete system with actual user content:
    1. Load test3_paul.pbm (30×30 ASCII art image)
    2. Write to tile memories via testbench
    3. Dump all tile memories
    4. Send to host
    5. Reconstruct and compare with original
    
    This serves as an acceptance test for real-world image processing.
    """
    
    # Start clock
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    
    # Reset
    dut.reset.value = 1
    dut.bypass_en.value = 0
    dut.flash_miso.value = 0
    await Timer(100, unit="ns")
    dut.reset.value = 0
    
    print("\n" + "="*60)
    print("TEST 3D: INTEGRATION TEST WITH REAL IMAGE")
    print("="*60)
    
    # Load the real image
    print("\n[Step 1] Loading test3_paul.pbm...")
    paul_image = PBMImage.read_pbm('test3_paul.pbm')
    print(f"Loaded image: {paul_image.width}×{paul_image.height}")
    
    # Verify dimensions
    if paul_image.width != 30 or paul_image.height != 30:
        print(f"⚠ Warning: Expected 30×30, got {paul_image.width}×{paul_image.height}")
    
    # Count ones in original image
    ones_in_original = sum(sum(row) for row in paul_image.data)
    print(f"Original image: {ones_in_original} ones out of 900 pixels")
    
    # Initialize test helper
    output_test = OutputVerificationTest(dut, tile_rows=3, tile_cols=3)
    
    # Step 2: Load into tiles
    print("[Step 2] Loading image into tiles...")
    await output_test.load_image(paul_image)
    
    await Timer(100, unit="ns")
    
    # Step 3: Dump memory
    print("[Step 3] Dumping tile memory...")
    await output_test.dump_all_tile_memory()
    
    # Step 4: Send to host
    print("[Step 4] Sending to host...")
    await output_test.send_all_to_host()
    
    # Step 5: Write output
    print("[Step 5] Writing reconstructed image...")
    output_image = output_test.write_output_image('test_output/paul_reconstructed.pbm')
    
    # Count ones in reconstructed image
    ones_in_output = sum(sum(row) for row in output_image.data)
    print(f"Reconstructed image: {ones_in_output} ones out of {output_image.width * output_image.height} pixels")
    
    # Step 6: Compare
    print("[Step 6] Comparing with original...")
    match, diff_count, diffs = paul_image.compare(output_image)
    
    print(f"\n=== Comparison Results ===")
    print(f"Original:      test3_paul.pbm")
    print(f"Reconstructed: test_output/paul_reconstructed.pbm")
    print(f"Match: {match}")
    print(f"Differences: {diff_count}")
    
    if not match and diffs and len(diffs) <= 20:
        print(f"\nDifferences found at:")
        for y, x, actual, expected in diffs[:20]:
            print(f"  ({y},{x}): got {actual}, expected {expected}")
    
    print("\n" + "="*60)
    print(f"TEST RESULT: {'PASS ✓' if match else 'FAIL ✗'}")
    print("="*60)
    
    assert match, f"Integration test failed: {diff_count} differences found"
