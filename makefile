all: a.o lab2.o
	g++ -o main a.o lab2.o
a.o : a.cpp a.h
	g++ -c a.cpp
lab2.o : lab2.cpp a.h
	g++ -c lab2.cpp


clean:
	rm a.o lab2.o
