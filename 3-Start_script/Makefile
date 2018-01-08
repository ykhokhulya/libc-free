.PHONY: all

all:
	gcc -c main.c
	ld main.o /usr/lib/crt1.o -o run
	wc --bytes run
	./run
