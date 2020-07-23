from pwn import *
from Crypto.Util.number import *
import gmpy2
import math
context.log_level = "error"

e = 65537
r = process("python rsa.py")
r.recvuntil("\n")
c = int(r.recvuntil("\n").strip().split("- ")[1])
r.recvuntil('Exit\n')
r.sendline("2")
r.recvuntil('\n')

# retrieve N with input: -1
r.sendline("-1")
n = int(r.recvuntil('\n').strip()) + 1


# start retrieving flag
r.recvuntil("Exit\n")
r.sendline("2")


mul = pow(2, e, n)
payload = c*mul % n
r.sendline(str(payload))
flag = int(r.recvuntil('\n').strip())
print "Flag:", long_to_bytes(flag/2)
