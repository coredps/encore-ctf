# FIfileLE
just read the flag

## Flag
enc0re{f1l3_1NsiD3_FlL3}

## Solution
1. If you read the file in hexeditor, you will see that there is a hidden zip file in the image.
2. you can use binawlk to extract the file.
3. repeating the process will give you different image files
4. Running this in loop gives, `while true; do binwalk -e ok.jpg; cd _ok.jpg.extracted/out; done`
