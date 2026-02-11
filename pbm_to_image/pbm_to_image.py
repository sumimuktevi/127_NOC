import numpy as np
from PIL import Image
import sys
import os

def pbm_to_image(input_file, output_filename="reengineered_output.png"):
    if not os.path.exists(input_file):
        print(f"Error: The file '{input_file}' was not found.")
        return

    with open(input_file, 'r') as f:
        lines = f.readlines()

    # 1. Extract the binary data (ignoring PBM headers starting with 'P' or '#')
    raw_data = []
    for line in lines:
        line = line.strip()
        if not line or line.startswith('P') or line.startswith('#'):
            continue
        # Split by spaces or handle joined digits like '111000'
        # This regex-like approach handles both formats
        row_bits = [char for char in line if char in ('0', '1')]
        if row_bits:
            raw_data.append(row_bits)

    if not raw_data:
        print("Error: No binary data (0s or 1s) found in the file.")
        return

    # 2. Convert to Numpy Array
    # Note: PBM standard usually has 1=Black, 0=White (which you requested)
    height = len(raw_data)
    width = len(raw_data[0])
    print(f"Detected File Dimensions: {width}x{height}")

    img_data = np.zeros((height, width), dtype=np.uint8)

    for i, row in enumerate(raw_data):
        for j, char in enumerate(row):
            if char == '1':
                img_data[i, j] = 0   # 1 = Black (Alive)
            else:
                img_data[i, j] = 255 # 0 = White (Dead)

    # 3. Create and Scale Image
    img = Image.fromarray(img_data)
    
    # Scale up by 10x so you can actually see it (30x30 -> 300x300)
    # Using NEAREST keeps the pixels sharp and blocky
    display_img = img.resize((width * 10, height * 10), resample=Image.NEAREST)
    
    display_img.save(output_filename)
    print(f"✓ Success! Re-engineered image saved as: {output_filename}")

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Usage: python3 pbm_to_image.py <your_file.pbm>")
    else:
        pbm_to_image(sys.argv[1])
        