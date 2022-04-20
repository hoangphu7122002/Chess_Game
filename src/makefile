OPT = -Wall
OBJS = main.o piece.o box.o board.o person.o player.o move.o

all: main

main: $(OBJS)
	gcc $(OPT) -o main $(OBJS) 

main.o: main.cpp
	gcc $(OPT) -c main.cpp -std=c++11

piece.o: piece.cpp piece.h
	gcc $(OPT) -c piece.cpp -std=c++11

box.o: box.cpp box.h
	gcc $(OPT) -c box.cpp -std=c++11

board.o: board.cpp board.h
	gcc $(OPT) -c board.cpp -std=c++11

person.o: person.cpp person.h
	gcc $(OPT) -c person.cpp -std=c++11

player.o: player.cpp player.h
	gcc $(OPT) -c player.cpp -std=c++11

move.o: move.cpp move.h
	gcc $(OPT) -c move.cpp -std=c++11

clean:
	rm -f $(OBJS) main