from binascii import crc32

crc_checksum = int.from_bytes(b'\x60\x44\x4c\xb6',byteorder='big') 

for h in range(0xffff):
   for w in range(0xffff):
   	    #IHDR Chunk + (4 Bytes Width) + (4 Bytes Height) + Bit Depth + Col Type + Compression Method + Filter Method + Interlace Method
   	    crc=b"\x49\x48\x44\x52"+w.to_bytes(4,byteorder='big')+h.to_bytes(4,byteorder='big')+b"\x08\x06\x00\x00\x00"
   	    if crc32(crc) % (1<<32) == crc_checksum:
   		    print('Image Width: ',end="")
   		    print(hex(w))
   		    print('Image Height :',end="")
   		    print(hex(h))
