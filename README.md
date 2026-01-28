Game of Life Mesh: Image-to-Tile Processor

This is a Python based bridge between a visual drawing and an ASIC mesh of 1-bit bit-serial RISC-V cores (SERV). It takes a high resolution image, identifies the pattern, and slices it into $10 \times 10$ pixel tiles, each assigned to a specific SoClet coordinate $(X, Y)$.
How It Works

The processing pipeline consists of four main stages:
Content Detection & Inversion: The script loads the image and identifies the "active" drawing by finding the bounding box of black pixels. It inverts the logic so that Black pixels = Alive (1) and White pixels = Dead (0).

Downsampling: The drawing is resized to a $51 \times 51$ "logical" grid. This resolution is chosen to fit within a $6 \times 6$ SoClet mesh while allowing for padding.Tile Slicing: The $51 \times 51$ grid is padded to $60 \times 60$ and sliced into thirty-six $10 \times 10$ tiles. 

Export: The data is exported to mesh_init.mem using Hex values. Each 10-bit row is converted to a 3-digit hex value (e.g., 3ff for 10 living cells).

Project Structuregenerate_mesh_data.py: The main Python processing script.mesh_init.mem:

 The output Verilog memory file containing the tile data and sample#1.jpg: 
 
 The source input drawing. inside debug.png

How to run the Program: 

# Create the virtual environment
python3 -m venv venv

# On macOS/Linux:
source venv/bin/activate

# run
python3 generate_mesh_data.py