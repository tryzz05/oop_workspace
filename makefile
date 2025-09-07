1-1: main-1-1.cpp Bus.cpp Car.cpp Vehicle.cpp Motorbike.cpp
	clang++ main-1-1.cpp Bus.cpp Car.cpp Vehicle.cpp Motorbike.cpp -o 1-1
	./1-1 

1-2: Vehicle.cpp Car.cpp Bus.cpp Motorbike.cpp ParkingLot.cpp main-1-2.cpp
	clang++ Vehicle.cpp Car.cpp Bus.cpp Motorbike.cpp ParkingLot.cpp main-1-2.cpp -o 1-2
	./1-2

1-3: Vehicle.cpp Car.cpp Bus.cpp Motorbike.cpp ParkingLot.cpp main-1-3.cpp
	clang++ Vehicle.cpp Car.cpp Bus.cpp Motorbike.cpp ParkingLot.cpp main-1-3.cpp -o 1-3
	./1-3

clear: 1-1 1-2 1-3
	rm -f 1-1 1-2 1-3