CFLAGS=-Wall -g

clean:
	rm -rf ex3_bin

all: clean
	cc -Wall -g ex3.c -o ex3_bin

valgrind: all
	valgrind ./ex3_bin
