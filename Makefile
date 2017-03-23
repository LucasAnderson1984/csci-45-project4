project: main.o relay.o
	g++ main.o relay.o -lwiringPi -o project.o

main.o: main.cpp
	g++ -c -std=c++98 main.cpp -lwiringPi

relay.o: ./class_files/relay.cpp ./header_files/relay.h
	g++ -c ./class_files/relay.cpp -lwiringPi

clean:
	rm *.o project.o
