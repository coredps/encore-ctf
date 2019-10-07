## RSA baibi
You have been given the executable, solve the RSA encryption.

### Solution

1. Run the binary.
3. Most RSA have their e = 65537
4. c = int(Long numbers in output in the start)
5. goto decrypt menu and type -1.
6. n = int(output of 5) + 1
7. Goto decrypt menu again
8. mul = pow(2, e, n)
9. payload = c*mul % n

10. send payload as string
11. flag = int(new line of output)
12. finna = long_to_bytes(flag/2)
13. print finna

### Flag
**Flag:** enc0re{S01vlng_R54_i5_r3lly_difficult}
