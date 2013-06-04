CFLAGS=-Wall -g

clean:
	rm -rf *_bin

ex8: clean
	cc -Wall -g ex8.c -o ex8_bin

valgrind: ex8
	valgrind ./ex8_bin
