# Crackme
Can you crack me?

## Flag
enc0re{91246}

## Solution
1. After decompiling the binary properly, you will notice the line 
`return param_1 * 10 & 0xffffff00U | (uint)(param_1 * 10 == 0xdec4c);` in FUN_001011a9
2. Here 0xdec4c is 912460
3. param1 = 0xdec4c/10 which is 912460/10 = 91246
4. Hence 91246 is the password
