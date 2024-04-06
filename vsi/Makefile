a.out : main.o
	gcc $^ -rdynamic -lvscheme -g
main.o : main.scm
	vsc -c -g $< -o $@
