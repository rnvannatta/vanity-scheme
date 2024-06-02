SET VANITYPATH=C:\Program Files (x86)\Vanity Scheme
SET CC=%VANITYPATH%\mingw64\bin\gcc.exe
"%CC%" ponglib.c --shared -o pong.dll -L. -lSDL2 -I.
"%VANITYPATH%\bin\vanity.exe" -l./pong.dll pong.scm
