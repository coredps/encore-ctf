# Sasti
can you run the flag?<br>
http://20.204.100.202:1337/
author: deva#0853

## Flag
```
enc0re{SsT1_ch4ll3ng3_4t_l4st_momint}
```

## Solution
* After reading the python code we see that in /vuln when ?query= parameter is passed, it will execute it / include it in the template
* Hence server side template injection (SSTI)
* by running `/vuln?query={{23*3}}` we see that it is getting executed and we get 69 as output
* In the python code the line `app.config.from_pyfile('topsecret.py')` tells us that flag is in app's config
* by running `{{config.items()}}` we get the flag

> Final payload: http://$ip:$port/vuln?query={{config.items()}}
