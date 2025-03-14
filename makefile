1-1: function-1-1.cpp main-1-1.cpp
	clang++ function-1-1.cpp main-1-1.cpp -o 1-1
	./1-1

1-2: function-1-2.cpp main-1-2.cpp
	clang++ function-1-2.cpp main-1-2.cpp -o 1-2
	./1-2

1-3: function-1-3.cpp main-1-3.cpp
	clang++ function-1-3.cpp main-1-3.cpp -o 1-3
	./1-3

1-4: function-1-4.cpp main-1-4.cpp
	clang++ function-1-4.cpp main-1-4.cpp -o 1-4
	./1-4

1-5: function-1-5.cpp main-1-5.cpp
	clang++ function-1-5.cpp main-1-5.cpp -o 1-5
	./1-5

2-1: function-2-1.cpp main-2-1.cpp
	clang++ function-2-1.cpp main-2-1.cpp -o 2-1
	./2-1

2-2: function-2-2.cpp main-2-2.cpp
	clang++ function-2-2.cpp main-2-2.cpp -o 2-2
	./2-2

all: 1-1 1-2 1-3 1-4 1-5 2-1 2-2

clear:
	rm -f 1-1 1-2 1-3 1-4 1-5 2-1 2-2