CFLAGS=-Wall -g

clean:
	rm -rf ex5_bin

valgrind: clean
	cc -Wall -g ex5.c -o ex5_bin
	valgrind ./ex5_bin
