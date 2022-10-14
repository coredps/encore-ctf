# Ctrl+c Ctrl+v
Can you find the flag<br>
[file](https://drive.google.com/file/d/1kxTezBXO2LyoYXERLI3ZeCohMmgVLwFL/view)

## Flag
```
enc0re{v0l4til1ty_cl1pb04rd}
```

## Making of the challenge
Booted fresh Windows7 vm with 512mb of ram; suspended the vm; copied the *.vram file

## Solution
* After running strings on the file, we can see that it is something related to windows and is exacly 512mb
* After googling windows dump analyser, we find that the program to be used for solving this challenge is `volatility`
* we first find the profile of the memory dump by running `./vol.py -f file imageinfo` which gives us `Win7SP1x64` 
* from the challenge name we can figure out that we have to use clipboard plugin of volatility

> Final payload: ./vol.py -f file --profile=Win7SP1x64 clipboard
