a.out : pong.o ponglib.o
	vsc $^ -o $@ -Wc,-lSDL2 -Wc,-lm

.PHONY : clean

clean :
	-rm -f a.out pong.o ponglib.o a.exe pong_windows.o ponglib_windows.o

ponglib.o : ponglib.c ponglib.h
	gcc $< -c -o $@ -fPIC

pong.o : pong.scm ponglib.h
	vsc $< -c -o $@

a.exe : pong_windows.o ponglib_windows.o
	vsc $^ -o $@ -Wc,-lSDL2 --platform=windows -Wc,-lpthread

ponglib_windows.o : ponglib.c ponglib.h
	/usr/bin/x86_64-w64-mingw32-gcc $< -c -o $@ -fPIC

pong_windows.o : pong.scm ponglib.h
	vsc $< -c -o $@ --platform=windows
