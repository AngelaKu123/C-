Fraction.out: Fraction.o main.o
	g++ Fraction.o main.o -o Fraction.out -Wall

Fraction.o: Fraction.cpp Fraction.h
	g++ -std=c++17 -c Fraction.cpp -o Fraction.o -Wall

main.o: main.cpp Fraction.h
	g++ -c main.cpp -o main.o -Wall

clean:
	rm -f *.o Fraction.out