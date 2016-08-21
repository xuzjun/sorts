CC=gcc
CFLAGS=
LDFLAGS=

P=test
OBJECTS=insertionsort.o quicksort.o mergesort.o test.o

$(P): $(OBJECTS)
