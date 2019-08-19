@echo off
echo Name of commit
set /p input=""
git add .
git commit -m "%input%"
git fetch origin master:tmp
git rebase tmp
git push origin HEAD:master
git branch -D tmp
pause 