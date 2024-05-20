MyShape.out: MyShape.o main.o
	g++ MyShape.o main.o -o MyShape.out -Wall

MyShape.o: MyShape.cpp MyShape.h
	g++ -std=c++17 -c MyShape.cpp -Wall

main.o: main.cpp MyShape.h
	g++ -std=c++17 -c main.cpp -Wall

clean:
	rm -f *.o MyShape.out