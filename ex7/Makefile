CFLAGS=-Wall -g

clean:
	rm -rf ex7_bin

all: clean
	cc -Wall -g ex7.c -o ex7_bin

valgrind: all
	valgrind ./ex7_bin
