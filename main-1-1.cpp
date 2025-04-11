#include <iostream>
#include <vector>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    int numVehicles;
    std::cout << "Enter the number of vehicles: ";
    std::cin >> numVehicles;

    std::vector<Vehicle*> vehicles;

    for (int i = 0; i < numVehicles; ++i) {
        int type, id;
        std::cout << "Enter Vehicle Type (1-Car, 2-Bus, 3-Motorbike): ";
        std::cin >> type;
        std::cout << "Enter Vehicle ID: ";
        std::cin >> id;

        if (type == 1) {
            vehicles.push_back(new Car(id));
        } else if (type == 2) {
            vehicles.push_back(new Bus(id));
        } else if (type == 3) {
            vehicles.push_back(new Motorbike(id));
        } else {
            std::cout << "Invalid type! Skipping...\n";
        }
    }

    std::cout << "\nParking Durations:\n";
    for (int i = 0; i < numVehicles; i++) {
        vehicles[i]->getParkingDuration();
    }

    return 0;
}
