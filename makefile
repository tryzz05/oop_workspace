1-1: Musician.cpp main-1-1.cpp
	clang++ Musician.cpp main-1-1.cpp -o 1-1
	./1-1

1-2: Orchestra.cpp Musician.cpp main-1-2.cpp
	clang++ Orchestra.cpp Musician.cpp main-1-2.cpp -o 1-2
	./1-2

clear: 1-1 1-2
	rm -f 1-1 1-2