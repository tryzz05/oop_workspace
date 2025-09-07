#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int capacity) {
    maxCapacity = capacity;
    count = 0;
    vehicles = new Vehicle*[capacity];
}

ParkingLot::~ParkingLot() {
    for (int i = 0; i < count; i++) {
        delete vehicles[i];
    }
    delete[] vehicles;
}

int ParkingLot::getCount() const {
    return count;
}

void ParkingLot::parkVehicle(Vehicle* v) {
    if (count < maxCapacity) {
        vehicles[count++] = v;
    } else {
        std::cout << "The lot is full" << std::endl;
        delete v; // avoid memory leak
    }
}

void ParkingLot::unparkVehicle(int id) {
    for (int i = 0; i < count; i++) {
        if (vehicles[i]->getID() == id) {
            delete vehicles[i];
            for (int j = i; j < count - 1; j++) {
                vehicles[j] = vehicles[j + 1];
            }
            count--;
            return;
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) const {
    int overstayed = 0;
    for (int i = 0; i < count; i++) {
        if (vehicles[i]->getParkingDuration() > maxParkingDuration) {
            overstayed++;
        }
    }
    return overstayed;
}
