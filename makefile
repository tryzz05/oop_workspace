1-1: function-1-1.cpp main-1-1.cpp
	clang++ function-1-1.cpp main-1-1.cpp -o 1-1
	./1-1

1-2: function-1-2.cpp main-1-2.cpp
	clang++ function-1-2.cpp main-1-2.cpp -o 1-2
	./1-2

1-3: function-1-3.cpp main-1-3.cpp
	clang++ function-1-3.cpp main-1-3.cpp -o 1-3
	./1-3

clear: 1-1 1-2 1-3
	rm -f 1-1 1-2 1-3