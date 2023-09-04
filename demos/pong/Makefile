a.out : pong.o ponglib.o
	vsc $^ -o $@ -Wc,-lSDL2 -Wc,-lm

.PHONY : clean

clean :
	-rm -f a.out pong.o ponglib.o

ponglib.o : ponglib.c ponglib.h
	gcc $< -c -o $@ -fPIC

pong.o : pong.scm ponglib.h
	vsc $< -c -o $@
