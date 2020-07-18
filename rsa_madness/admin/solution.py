from pwn import *
from Crypto.Util.number import long_to_bytes

mul = pow(2, e, n)
payload = c*mul % n
r.sendline(str(payload))
flag = int(r.recvuntil('\n').strip())
print "Flag:", long_to_bytes(flag/2)