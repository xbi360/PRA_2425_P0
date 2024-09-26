Robot: BrazoRobotico.o main.o 
	g++ -o Robot main.o BrazoRobotico.o 
main.o: main.cpp
	g++ -c main.cpp
BrazoRobotico.o: BrazoRobotico.cpp BrazoRobotico.h
	g++ -c BrazoRobotico.cpp
clean: 
	rm *.o Robot
test: 
	./Robot
all: Robot 
        
