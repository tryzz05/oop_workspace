#include "Car.h"

Car::Car(int id) : Vehicle(id) {}

int Car::getParkingDuration() const {
    std::time_t now = std::time(0);
    int duration = static_cast<int>(now - getTimeOfEntry());
    return duration - (duration * 0.10);
}
