a.out : pong.o ponglib.o
	vsc $^ -o $@ -Wc,-lSDL2 -Wc,-lm

a.out.js : pong.js.o ponglib.js.o
	vsc $^ --platform=emscripten -Wc,-sUSE_SDL=2 -O2 -Wc,-Os

libpong.so : ponglib.o
	gcc $< --shared -o $@ -lSDL2

pong.dll : ponglib.c ponglib.h
	/usr/bin/x86_64-w64-mingw32-gcc $< --shared -o $@ -lSDL2

.PHONY : clean

clean :
	-rm -f a.out pong.o ponglib.o a.exe pong_windows.o ponglib_windows.o pong.dll libpong.so a.out.js a.out.wasm a.out.html pong.js.o ponglib.js.o

ponglib.o : ponglib.c ponglib.h
	gcc $< -c -o $@ -fPIC

pong.o : pong.scm ponglib.h
	vsc $< -c -o $@

ponglib.js.o : ponglib.c ponglib.h
	emcc $< -c -o $@  -sUSE_SDL=2 -Os

pong.js.o : pong.scm ponglib.h
	vsc $< -c -o $@ --platform=emscripten --main=emscripten-loop -O2 -Wc,-Os

a.exe : pong_windows.o ponglib_windows.o
	vsc $^ -o $@ -Wc,-lSDL2 --platform=windows -Wc,-lpthread

ponglib_windows.o : ponglib.c ponglib.h
	/usr/bin/x86_64-w64-mingw32-gcc $< -c -o $@ -fPIC

pong_windows.o : pong.scm ponglib.h
	vsc $< -c -o $@ --platform=windows
