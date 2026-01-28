Game of Life Mesh: Image-to-Tile Processor

This is a Python based bridge between a visual drawing and an ASIC mesh of 1-bit bit-serial RISC-V cores (SERV). It takes a high resolution image, identifies the pattern, and slices it into $10 \times 10$ pixel tiles, each assigned to a specific SoClet coordinate $(X, Y)$.How It WorksThe processing pipeline consists of four main stages:Content Detection & Inversion: The script loads the image and identifies the "active" drawing by finding the bounding box of black pixels. It inverts the logic so that Black pixels = Alive (1) and White pixels = Dead (0).Downsampling: The drawing is resized to a $51 \times 51$ "logical" grid. This resolution is chosen to fit within a $6 \times 6$ SoClet mesh while allowing for padding.Tile Slicing: The $51 \times 51$ grid is padded to $60 \times 60$ and sliced into thirty-six $10 \times 10$ tiles. 


Export: The data is exported to mesh_init.mem using Hex values. Each 10-bit row is converted to a 3-digit hex value (e.g., 3ff for 10 living cells).

Project Structuregenerate_mesh_data.py: The main Python processing script.mesh_init.mem:

 The output Verilog memory file containing the tile data and sample#1.jpg: 
 
 The source input drawing. inside debug.png


     ,Col 0,Col 1,Col 2,Col 3,Col 4,Col 5
Row 0,"(0,0) ⏹️","(1,0) ➖","(2,0) .","(3,0) .","(4,0) .","(5,0) ."
Row 1,"(0,1) ⏹️","(1,1) ⏹️","(2,1) 📉","(3,1) ⏹️","(4,1) ⏹️","(5,1) ."
Row 2,"(0,2) ⏹️","(1,2) ➖","(2,2) 📉","(3,2) 📉","(4,2) .","(5,2) ."
Row 3,"(0,3) .","(1,3) .","(2,3) .","(3,3) 📉","(4,3) 📉","(5,3) ."
Row 4,"(0,4) .","(1,4) .","(2,4) .","(3,4) 📉","(4,4) 📉","(5,4) 📉"
Row 5,"(0,5) .","(1,5) .","(2,5) .","(3,5) .","(4,5) .","(5,5) ."