#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    int n, type, id = 1;
    std::cout << "Enter number of vehicles: ";
    std::cin >> n;

    Vehicle** vehicles = new Vehicle*[n];
 
    for (int i = 0; i < n; i++) {
        std::cout << "Enter type of vehicle (1-Car, 2-Bus, 3-Motorbike): ";
        std::cin >> type;

        if (type == 1)
            vehicles[i] = new Car(id++);
        else if (type == 2)
            vehicles[i] = new Bus(id++);
        else if (type == 3)
            vehicles[i] = new Motorbike(id++);
        else {
            std::cout << "Invalid type\n";
            i--;
        }
    }

    std::cout << "Waiting for some time to simulate parking duration...\n";
    std::cout << "Press enter to continue...\n";
    std::cin.ignore();
    std::cin.get();

    for (int i = 0; i < n; i++) {
        std::cout << "Vehicle ID: " << vehicles[i]->getID()
                  << " Parking Duration (after reduction): "
                  << vehicles[i]->getParkingDuration() << " seconds" << std::endl;
    }

    for (int i = 0; i < n; i++) {
        delete vehicles[i];
    }
    delete[] vehicles;

    return 0;
}
