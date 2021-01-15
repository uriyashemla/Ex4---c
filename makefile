CC = gcc 
FLAGS = -Wall


all: frequency
	
frequency : frequency.o main.o
	$(CC) $(FLAGS) -o frequency main.o frequency.o

main.o : main.c 
	$(CC) $(FLAGS) -c main.c
	
frequency.o : frequency.c frequency.h
	$(CC) $(FLAGS) -c frequency.c

.PHONY: clean all 

clean: 
	rm -f *.o  frequency
