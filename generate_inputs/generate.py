import numpy as np
from PIL import Image
import random
import sys

def generate_random_pattern(size=60, density=0.3, seed=None):
    """
    Generate a random pattern for Game of Life
    
    Args:
        size: Grid size (default 60x60)
        density: Probability of a cell being alive (0.0 to 1.0)
        seed: Random seed for reproducibility
    
    Returns:
        PIL Image
    """
    if seed is not None:
        np.random.seed(seed)
        random.seed(seed)
    
    # Generate random pattern
    pattern = np.random.choice([0, 255], size=(size, size), p=[density, 1-density]).astype(np.uint8)
    
    return Image.fromarray(pattern)

def generate_cluster_pattern(size=60, num_clusters=5, cluster_size=10, seed=None):
    """
    Generate clustered random patterns (more interesting than pure random)
    
    Args:
        size: Grid size
        num_clusters: Number of clusters to generate
        cluster_size: Approximate size of each cluster
        seed: Random seed
    
    Returns:
        PIL Image
    """
    if seed is not None:
        np.random.seed(seed)
        random.seed(seed)
    
    # Create white canvas
    canvas = np.ones((size, size), dtype=np.uint8) * 255
    
    for _ in range(num_clusters):
        # Random center point
        center_x = random.randint(cluster_size, size - cluster_size)
        center_y = random.randint(cluster_size, size - cluster_size)
        
        # Create cluster around center
        for i in range(cluster_size):
            for j in range(cluster_size):
                if random.random() < 0.4:  # 40% chance of cell being alive
                    x = center_x + random.randint(-cluster_size//2, cluster_size//2)
                    y = center_y + random.randint(-cluster_size//2, cluster_size//2)
                    if 0 <= x < size and 0 <= y < size:
                        canvas[x, y] = 0
    
    return Image.fromarray(canvas)

def generate_symmetric_pattern(size=60, seed=None):
    """
    Generate a symmetric pattern (often creates interesting results)
    
    Args:
        size: Grid size
        seed: Random seed
    
    Returns:
        PIL Image
    """
    if seed is not None:
        np.random.seed(seed)
        random.seed(seed)
    
    # Create white canvas
    canvas = np.ones((size, size), dtype=np.uint8) * 255
    
    # Generate random quarter, then mirror it
    quarter_size = size // 2
    quarter = np.random.choice([0, 255], size=(quarter_size, quarter_size), p=[0.3, 0.7]).astype(np.uint8)
    
    # Mirror to create symmetric pattern
    canvas[:quarter_size, :quarter_size] = quarter
    canvas[:quarter_size, quarter_size:] = np.fliplr(quarter)
    canvas[quarter_size:, :quarter_size] = np.flipud(quarter)
    canvas[quarter_size:, quarter_size:] = np.flipud(np.fliplr(quarter))
    
    return Image.fromarray(canvas)

def generate_line_pattern(size=60, num_lines=5, seed=None):
    """
    Generate random lines (creates interesting oscillators)
    
    Args:
        size: Grid size
        num_lines: Number of random lines
        seed: Random seed
    
    Returns:
        PIL Image
    """
    if seed is not None:
        np.random.seed(seed)
        random.seed(seed)
    
    # Create white canvas
    canvas = np.ones((size, size), dtype=np.uint8) * 255
    
    for _ in range(num_lines):
        # Random starting point
        x = random.randint(5, size - 15)
        y = random.randint(5, size - 15)
        
        # Random length and direction
        length = random.randint(3, 10)
        direction = random.choice(['horizontal', 'vertical', 'diagonal'])
        
        if direction == 'horizontal':
            canvas[x, y:min(y+length, size)] = 0
        elif direction == 'vertical':
            canvas[x:min(x+length, size), y] = 0
        else:  # diagonal
            for i in range(length):
                if x+i < size and y+i < size:
                    canvas[x+i, y+i] = 0
    
    return Image.fromarray(canvas)

def main():
    """Generate multiple input images"""
    
    # Parse command line arguments
    num_images = 5
    if len(sys.argv) > 1:
        try:
            num_images = int(sys.argv[1])
        except ValueError:
            print(f"Invalid number: {sys.argv[1]}, using default of 5")
    
    print(f"Generating {num_images} Game of Life input images...")
    print("=" * 50)
    
    patterns = ['random', 'cluster', 'symmetric', 'lines']
    
    for i in range(num_images):
        # Use iteration number as seed for reproducibility
        seed = i + 1
        
        # Cycle through different pattern types
        pattern_type = patterns[i % len(patterns)]
        
        if pattern_type == 'random':
            density = random.uniform(0.2, 0.4)
            img = generate_random_pattern(size=60, density=density, seed=seed)
            filename = f"input_{i+1:03d}_random.jpg"
            print(f"✓ {filename} - Random pattern (density: {density:.2f})")
            
        elif pattern_type == 'cluster':
            num_clusters = random.randint(3, 7)
            img = generate_cluster_pattern(size=60, num_clusters=num_clusters, seed=seed)
            filename = f"input_{i+1:03d}_cluster.jpg"
            print(f"✓ {filename} - Clustered pattern ({num_clusters} clusters)")
            
        elif pattern_type == 'symmetric':
            img = generate_symmetric_pattern(size=60, seed=seed)
            filename = f"input_{i+1:03d}_symmetric.jpg"
            print(f"✓ {filename} - Symmetric pattern")
            
        elif pattern_type == 'lines':
            num_lines = random.randint(3, 8)
            img = generate_line_pattern(size=60, num_lines=num_lines, seed=seed)
            filename = f"input_{i+1:03d}_lines.jpg"
            print(f"✓ {filename} - Line pattern ({num_lines} lines)")
        
        # Save as JPEG
        img.save(filename, 'JPEG', quality=95)
    
    print("=" * 50)
    print(f"Successfully generated {num_images} input images!")
    print("\nUsage in your Game of Life script:")
    print("  input_file = 'input_001_random.jpg'")

if __name__ == "__main__":
    main()