1-1: Appliance.cpp main-1-1.cpp
	clang++ Appliance.cpp main-1-1.cpp -o 1-1
	./1-1

2-1: Appliance.cpp Fridge.cpp main-2-1.cpp
	clang++ Appliance.cpp Fridge.cpp main-2-1.cpp -o 2-1
	./2-1
	
2-2: Appliance.cpp TV.cpp main-2-2.cpp
	clang++ Appliance.cpp TV.cpp main-2-2.cpp -o 2-2
	./2-2