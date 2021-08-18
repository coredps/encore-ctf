from PIL import Image
import numpy as np
import wave
import struct
import math
import scipy.ndimage
import os


def assemble_column(chars, one):
    y_offset = 0
    column = Image.new("1", (one.size[0], 8 * one.size[1]), 0)
    for c in chars:
        if c == '1':
            column.paste(one, (0, y_offset))
        y_offset += one.size[1]
    return column


def assemble_image(flag, one):
    img = Image.new("1", (len(flag) * one.size[0], 8 * one.size[1]), 0)
    x_offset = 0
    for c in flag:
        col = assemble_column(bits(c), one)
        img.paste(col, (x_offset, 0))
        x_offset += one.size[0]
    return img


def bits(s):
    return list(bin(ord(s))[2:].zfill(8))


def load_picture(size, img):
    img = img.convert("L")
    img_array = np.array(img)
    img_array = np.flipud(img_array)
    img_array -= np.min(img_array)
    img_array = img_array / np.max(img_array)
    if size[0] == 0:
        size = img_array.shape[0], size[1]
    if size[1] == 0:
        size = size[0], img_array.shape[1]
    resampling_factor = size[0] / img_array.shape[0], size[1] / img_array.shape[1]
    if resampling_factor[0] == 0:
        resampling_factor = 1, resampling_factor[1]
    if resampling_factor[1] == 0:
        resampling_factor = resampling_factor[0], 1
    img_array = scipy.ndimage.zoom(img_array, resampling_factor, order=0)
    return img_array


def generate_sound(img, output, duration, sample_rate, intensity_factor, min_freq, max_freq):
    wave_f = wave.open(str(os.path.expanduser("~/Desktop/")) + output, 'w')
    wave_f.setnchannels(1)
    wave_f.setsampwidth(2)
    wave_f.setframerate(sample_rate)
    max_frame = int(duration * sample_rate)
    max_intensity = 32767
    step_size = 400
    stepping_spectrum = int((max_freq - min_freq) / step_size)
    img_mat = load_picture((stepping_spectrum, max_frame), img)
    img_mat *= intensity_factor
    img_mat *= max_intensity
    for frame in range(max_frame):
        signal_value, count = 0, 0
        for step in range(stepping_spectrum):
            intensity = img_mat[step, frame]
            if intensity < 0.1:
                continue
            current_freq = (step * step_size) + min_freq
            next_freq = ((step + 1) * step_size) + min_freq
            if next_freq - min_freq > max_freq:
                next_freq = max_freq
            for freq in range(current_freq, next_freq, 1000):
                signal_value += intensity * math.cos(freq * 2 * math.pi * float(frame) / float(sample_rate))
                count += 1
        if count == 0: count = 1
        signal_value /= count
        data = struct.pack('<h', int(signal_value))
        wave_f.writeframesraw(data)
    wave_f.writeframes(''.encode())
    wave_f.close()


def main(flag, name, length):
    print("Generating image...")
    one = Image.new("1", (10, 10), 1)
    img = assemble_image(flag, one)
    img.save(name + ".png")
    print("Image generated")
    print("Generating sound...")
    generate_sound(img, name + ".wav", length, 44100.0, 1, 0, 22000)
    print("Sound generated")


main("enc0re{b1n4rY_1n_4ud10???}", "audio", 5)
