CFLAGS=-Wall -g

clean:
	rm -rf *_bin

ex8: clean
	cc -Wall -g ex9.c -o ex9_bin

valgrind: ex8
	valgrind ./ex9_bin
