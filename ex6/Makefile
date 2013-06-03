CFLAGS=-Wall -g

clean:
	rm -rf ex6_bin

build: clean
	cc -Wall -g ex6.c -o ex6_bin

valgrind: build
	valgrind ./ex6_bin
