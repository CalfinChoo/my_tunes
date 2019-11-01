ifeq ($(DEBUG), true)
	CC = gcc -g
else
	CC = gcc
endif

all: main.o llist.o music.o
	$(CC) -o test main.o llist.o music.o

main.o: main.c music.h
	$(CC) -c main.c

llist.o: llist.c llist.h
	$(CC) -c llist.c

music.o: music.c music.h
	$(CC) -c music.c

run:
	./test

memcheck:
	valgrind --leak-check=yes ./test

clean:
	rm *.o
	rm *~
