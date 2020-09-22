all : add-nbo

add-nbo : getnum.o main.o
	g++ -o add-nbo getnum.o main.o

getnum.o : getnum.cpp addnbo.h
	g++ -c -o getnum.o getnum.cpp

main.o : main.cpp addnbo.h
	g++ -c -o main.o main.cpp

clean :
	rm -f add-nbo *.o


