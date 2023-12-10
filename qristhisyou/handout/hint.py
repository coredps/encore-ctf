for _ in range(int(0.1 * width * height)):  # 10% of modules corrupted
        x, y = random.randint(0, width - 1), random.randint(0, height - 1)
        # invert the module color
        corrupted_data[y * width + x] = 255 - data[y * width + x]
