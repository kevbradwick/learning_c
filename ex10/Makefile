CFLAGS=-Wall -g

clean:
	rm -rf *_bin

ex8: clean
	cc -Wall -g ex10.c -o ex10_bin

valgrind: ex8
	valgrind ./ex10_bin
