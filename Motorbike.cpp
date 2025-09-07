#include "Motorbike.h"

Motorbike::Motorbike(int id) : Vehicle(id) {}

int Motorbike::getParkingDuration() const {
    std::time_t now = std::time(0);
    int duration = static_cast<int>(now - getTimeOfEntry());
    return duration - (duration * 0.15);
}
 