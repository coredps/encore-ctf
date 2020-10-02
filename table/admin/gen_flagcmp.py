from binascii import hexlify
with open('table-inc.h') as f:
    trans_raws = [
        tuple(map(int, x
            .strip()
            .replace('{ ', '')
            .replace(' },', '')
            .split(', ')
        )) for x in f.readlines()
    ]

trans = dict(trans_raws)

flag = 'enc0re{r3v3rs1ng_Br34kpts_1N_GdB}'
trans_flag = b''.join(bytes([trans[ord(c)]]) for c in flag)

x = ''.join([
    r'\x{:x}'.format(c) for c in trans_flag
])
print('char ans[] = "{}";'.format(x))
