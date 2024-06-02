# Vanity Demos

Demos of various neat functionality of Vanity, such as its parallelism support and its FFI. To run the demos:

## LINUX:

compiler: `vsc file.scm && ./a.out`
interpreter: `vanity file.scm`
wine: `vsc --platform=windows file.scm && cp /usr/local/x86_64-w64-mingw32/lib/vscheme.dll . && wine a.exe`

## WINDOWS:

You must include the double quotes.

interpreter: `"C:/Program Files (x86)/Vanity Scheme/bin/vanity.exe" file.scm`

# The Pong Demo

The pong demo is a more involved demo that shows Vanity's ability to FFI to a custom C library, in this case some graphics and windows routines in C to run a simple pong game. On Windows, SDL2 is vendored.

## Linux

You must install SDL2 dev files if running linux native.

compiler: `make a.out && ./a.out`
interpreter: `make libpong.so && vanity pong.scm -l./libpong.so`
wine: `make a.exe && cp /usr/local/x86_64-w64-mingw32/lib/vscheme.dll . && wine a.exe`

## Windows

SDL2 is vendored for you.

interpreter: `build_and_run.bat`
