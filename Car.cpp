#include "Car.h"
#include <ctime>

Car::Car(int id) : Vehicle(id) {}

int Car::getParkingDuration() const {
    int duration = std::difftime(std::time(nullptr), getTimeOfEntry());
    return duration * 0.9;
}
