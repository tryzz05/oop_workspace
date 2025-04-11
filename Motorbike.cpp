#include "Motorbike.h"

Motorbike::Motorbike(int id) : Vehicle(id) {}

int Motorbike::getParkingDuration() const {
    int duration = std::difftime(std::time(nullptr), getTimeOfEntry());
    return duration - (duration * 0.15);
}