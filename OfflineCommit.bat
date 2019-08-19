@echo off
echo Name of commit
set /p input=""
git add .
git commit -m "%input%"
git push origin master
pause 