main: main.o MyVector.o
	g++ -o main main.o MyVector.o

tests: tests.o MyVector.o
	g++ -o tests tests.o MyVector.o


main.o: main.cpp MyVector.h MyVector.cxx

tests.o: tests.cpp doctest.h MyVector.h MyVector.cxx

MyVector.o: MyVector.h MyVector.cxx


clean:
	rm -f main.o tests.o MyVector.o