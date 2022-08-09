program: compile run

compile:
	g++ -Ofast -finline-functions -ffast-math -Wall -O3 -I ./include/ -o ./lib/ArrayList.o -c ./src/ArrayList.cpp
	g++ -Ofast -finline-functions -ffast-math -Wall -O3 -I ./include/ -o ./lib/Hata.o -c ./src/Hata.cpp
	g++ -Ofast -finline-functions -ffast-math -Wall -O3 -I ./include/ -o ./lib/main.o -c ./src/main.cpp
	g++ -Ofast -finline-functions -ffast-math -Wall -O3 ./lib/Hata.o ./lib/ArrayList.o ./lib/main.o -o ./bin/program

run:
	./bin/program