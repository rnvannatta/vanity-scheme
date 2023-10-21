a.out : spades.o spadeslib.o
	vsc $^ -o $@ -Wc,-lSDL2 -Wc,-lm

.PHONY : clean

clean :
	-rm -f a.out spades.o spadeslib.o

spadeslib.o : spadeslib.c spadeslib.h
	gcc $< -c -o $@ -fPIC

spades.o : spades.scm spadeslib.h
	vsc $< -c -o $@
