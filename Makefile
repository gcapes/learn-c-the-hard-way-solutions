CFLAGS=-Wall -g

all: ex1.c
	gcc -g -Wall ex1.c -o ex1 
clean:
	rm -f ex1
	rm -f ex3
