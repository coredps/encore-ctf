# fast internet
do you have fast enough internet? 
if not then you can access this from cloud
139.59.46.128:3456

## Flag
enc0re{t4Rush_whY_4r3_y0u_putting_last_y3ars's_ch4ll3ng3s???????????}

## Solution
1. From the challenge text you will see that you have to access this from "cloud"
2. setting the user-agent as cloud, you can view the flag 
3. `curl -A "cloud" 139.59.46.128:3456`
