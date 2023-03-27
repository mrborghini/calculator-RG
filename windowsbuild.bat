@echo off

if not exist "build" (
    mkdir "build"
)

if exist "build\main.exe" (
    del "build\main.exe"
)

gcc.exe src\main.c src\Math\Temperature.c src\Math\ohm.c src\components\ShowList.c src\components\Start.c src\Math\length.c src\Math\emc.c src\Math\NormalMath.c -o build\main

exit
