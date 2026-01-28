# from PIL import Image
# import numpy as np
# import math

# def process_image_to_tiles(image_path, threshold=128):
#     # 1. Load and find the "content" of the image
#     img = Image.open(image_path).convert('L')
    
#     # Invert so pattern is light on dark for easier bbox detection
#     inv_img = img.point(lambda p: 255 if p < threshold else 0)
#     bbox = inv_img.getbbox() # Finds the edges of your black drawing
    
#     if bbox:
#         img = img.crop(bbox) # Crop to just your drawing
#         print(f"Cropped to drawing size: {img.width}x{img.height}")
    
#     # 2. Force it to the target resolution
#     # Using Image.LANCZOS helps preserve thin lines better than NEAREST
#     img = img.resize((51, 51), Image.LANCZOS)
    
#     new_w, new_h = 60, 60
#     canvas = Image.new('L', (new_w, new_h), 255)
#     canvas.paste(img, (0, 0))

#     # 3. Final binary conversion (Black = 1, White = 0)
#     img_binary = canvas.point(lambda p: 1 if p < threshold else 0, mode='1')
#     img_binary.save('debug_view.png') # CHECK THIS FILE!
    
#     data = np.array(img_binary).astype(int)
#     tiles = {}
#     for y in range(0, new_h, 10):
#         for x in range(0, new_w, 10):
#             tiles[(x // 10, y // 10)] = data[y:y+10, x:x+10]
            
#     return tiles

# def save_for_verilog(tiles, filename="mesh_init.mem"):
#     """
#     Saves data in a format compatible with Verilog's $readmemh.
#     Each row of a 10x10 tile is converted to a Hex value.
#     """
#     with open(filename, 'w') as f:
#         # Sort by Y then X to keep the file organized for the mesh
#         for (tx, ty) in sorted(tiles.keys(), key=lambda x: (x[1], x[0])):
#             grid = tiles[(tx, ty)]
#             f.write(f"// SoClet Address: ({tx}, {ty})\n")
            
#             for row in grid:
#                 # Convert list of 1s and 0s to a binary string
#                 binary_str = "".join(map(str, row))
#                 # Convert 10-bit binary to Hex (padded to 3 digits)
#                 hex_val = hex(int(binary_str, 2))[2:].zfill(3)
#                 f.write(f"{hex_val}\n")
#             f.write("\n") # Space between SoClet data blocks

# if __name__ == "__main__":
#     # Ensure your image filename matches here!
#     input_image = 'sample#1.jpg' 
    
#     try:
#         tiles_data = process_image_to_tiles(input_image)
#         save_for_verilog(tiles_data)
#         print(f"Success! Data written to 'mesh_init.mem'")
#     except FileNotFoundError:
#         print(f"Error: Could not find {input_image}. Make sure it's in this folder!")






from PIL import Image
import numpy as np
import math

def process_image_to_tiles(image_path, threshold=128):
    img = Image.open(image_path).convert('L')
    inv_img = img.point(lambda p: 255 if p < threshold else 0)
    bbox = inv_img.getbbox() 
    
    if bbox:
        img = img.crop(bbox)
    
    img = img.resize((51, 51), Image.LANCZOS)
    new_w, new_h = 60, 60
    canvas = Image.new('L', (new_w, new_h), 255)
    canvas.paste(img, (0, 0))

    img_binary = canvas.point(lambda p: 1 if p < threshold else 0, mode='1')
    data = np.array(img_binary).astype(int)
    
    tiles = {}
    for y in range(0, new_h, 10):
        for x in range(0, new_w, 10):
            tiles[(x // 10, y // 10)] = data[y:y+10, x:x+10]
            
    return tiles

def save_for_verilog(tiles, filename="mesh_init.mem"):
    with open(filename, 'w') as f:
        # Sort by Y then X for logical mesh order
        for (tx, ty) in sorted(tiles.keys(), key=lambda x: (x[1], x[0])):
            grid = tiles[(tx, ty)]
            
            # --- Visual Print Section for your eyes ---
            print(f"\n[ SoClet ({tx}, {ty}) ]")
            f.write(f"// SoClet Address: ({tx}, {ty})\n")
            
            for row in grid:
                binary_str = "".join(map(str, row))
                hex_val = hex(int(binary_str, 2))[2:].zfill(3)
                
                # Visual 'art' version: # for Alive (1), . for Dead (0)
                visual_row = binary_str.replace('1', '#').replace('0', '.')
                
                # Print everything in one line: Map | Binary | Hex
                print(f"{visual_row} | Bin: {binary_str} | Hex: {hex_val}")
                
                f.write(f"{hex_val}\n")
            f.write("\n")

if __name__ == "__main__":
    input_image = 'sample#1.jpg' 
    output_mem = 'mesh_init.mem'  # Define it here
    try:
        tiles_data = process_image_to_tiles(input_image)
        save_for_verilog(tiles_data, output_mem)
        print(f"\nSuccess! Data written to '{output_mem}'") # Use the variable here
    except FileNotFoundError:
        print(f"Error: Could not find {input_image}.")