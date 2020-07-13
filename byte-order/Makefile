all: add-nbo

add-nbo: endian.o main.o
		g++ -o add-nbo endian.o main.o

endian.o: endian.h endian.cpp
		g++ -c -o endian.o endian.cpp

main.o: main.cpp endian.h
		g++ -c -o main.o main.cpp

clean:
		rm -f add-nbo *.o	