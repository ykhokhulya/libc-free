.PHONY: all

all:
	gcc -g -c main.c
	ld main.o /usr/lib/crt1.o -o run
	wc --bytes run
	./run
