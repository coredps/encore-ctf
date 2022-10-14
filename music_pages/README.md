# Music Pages
Can you locate the flag?<br>
http://20.204.100.202:1234/

## Flag
```
enc0re{Lf1_G17}
```

## Solution
* Clicking on the music page doesn't open the music*.html but it is opened by index.php with the help of ?view= parameter
* We can check for Local File Inclusion(LFI) by giving the file path as ../../../../etc/passwd
	* The `../` is used to go back from the directory the challenge is hosted in
	* when we are back enough so that we are in highest directory ie/ we can access /etc/passwd which is in every linux machine
* After the hint `github` was released, we could think that the directory has .git folder in it which is in every git repository
* The flag is in the commit message which can be accessed from logs ie `.git/logs/HEAD`

> Final payload: http://$ip:$port/index.php?view=.git/logs/HEAD
