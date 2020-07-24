# Boof
can you pwn this binary? tbh easiest challenge \
nc $IP 1234

## Flag
```
enc0re{d4mn_y0u_jus7_fl00ded_th15}
```

## Solution
1. not gonna explain the complex things \
agh f nvm here it is: \
<pre>
The question asks us for the secret and that is the only thing we can enter. So to get the flag we have to exploit it somehow. The first thing to notice is that the secret_phrase buffer comes just after the flag buffer. Noticing that the strcat function can cause an overflow leads to the answer. We need to do a stack flood, i.e. just input alot of random bits and the strcat function would append some string to to the secret_phrase buffer and push the null byte to the flag buffer and thus printing out the secret along with the flag.</pre>

2. `python -c "print 'a'*1000" | ./booof