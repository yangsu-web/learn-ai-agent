@echo off
cd /d "%~dp0"
echo ===== 开始同步到 GitHub =====
git add -A
for /f "tokens=1-3 delims=/" %%a in ("%date%") do set D=%%a-%%b-%%c
git commit -m "学习打卡 %D%"
git push
echo.
echo ===== 同步完成 =====
pause