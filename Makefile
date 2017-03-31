project: main.o launcher.o random_player.o relay.o servo.o ultra_sonic.o
	g++ main.o launcher.o random_player.o relay.o servo.o ultra_sonic.o -lwiringPi -o project.o

main.o: main.cpp ./sample_code/sample_on_off.s
	g++ -c -std=c++11 main.cpp ./sample_code/sample_on_off.s -lwiringPi

launcher.o: ./class_files/launcher.cpp ./header_files/launcher.h
	g++ -c -std=c++11 ./class_files/launcher.cpp -lwiringPi

random_player.o: ./class_files/random_player.cpp ./header_files/random_player.h
	g++ -c -std=c++11 ./class_files/random_player.cpp

relay.o: ./class_files/relay.cpp ./header_files/relay.h
	g++ -c -std=c++11 ./class_files/relay.cpp -lwiringPi

servo.o: ./class_files/servo.cpp ./header_files/servo.h
	g++ -c -std=c++11 ./class_files/servo.cpp -lwiringPi

ultra_sonic.o: ./class_files/ultra_sonic.cpp ./header_files/ultra_sonic.h
	g++ -c -std=c++11 ./class_files/ultra_sonic.cpp -lwiringPi

clean:
	rm *.o
