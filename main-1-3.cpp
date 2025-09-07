#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <thread>
#include <chrono>

int main() {
    ParkingLot lot(10);

    lot.parkVehicle(new Car(1));
    lot.parkVehicle(new Car(2));
    lot.parkVehicle(new Car(3));
    lot.parkVehicle(new Car(4));
    lot.parkVehicle(new Car(5));

    lot.parkVehicle(new Bus(6));
    lot.parkVehicle(new Bus(7));
    lot.parkVehicle(new Bus(8));

    lot.parkVehicle(new Motorbike(9));
    lot.parkVehicle(new Motorbike(10));

    // simulate waiting
    std::this_thread::sleep_for(std::chrono::seconds(16));

    int overstayed = lot.countOverstayingVehicles(15);
    std::cout << "Number of overstaying vehicles (>15s): " << overstayed << std::endl;

    return 0;
}
