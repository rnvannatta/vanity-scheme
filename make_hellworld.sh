#!/bin/bash
/usr/bin/x86_64-w64-mingw32-gcc runtime/vlibrary.c runtime/vruntime.c runtime/vapply-windows-amd64.S -Iinclude -masm=intel -fPIC -shared -o vruntime.dll -O2
/usr/bin/x86_64-w64-mingw32-gcc helloworld.c -Iinclude -L. -lvruntime -ohelloworld.exe -O2 -Wl,--stack,8388608
