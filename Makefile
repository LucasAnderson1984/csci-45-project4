project: main.o relay.o servo.o ultra_sonic.o
	g++ main.o relay.o servo.o ultra_sonic.o -lwiringPi -o project.o

main.o: main.cpp
	g++ -c -std=c++98 main.cpp -lwiringPi

relay.o: ./class_files/relay.cpp ./header_files/relay.h
	g++ -c ./class_files/relay.cpp -lwiringPi

servo.o: ./class_files/servo.cpp ./header_files/servo.h
	g++ -c ./class_files/servo.cpp -lwiringPi

ultra_sonic.o: ./class_files/ultra_sonic.cpp ./header_files/ultra_sonic.h
	g++ -c ./class_files/ultra_sonic.cpp -lwiringPi

clean:
	rm *.o
