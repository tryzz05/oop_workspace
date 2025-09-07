#include "Bus.h"

Bus::Bus(int id) : Vehicle(id) {}

int Bus::getParkingDuration() const {
    std::time_t now = std::time(0);
    int duration = static_cast<int>(now - getTimeOfEntry());
    return duration - (duration * 0.25);
}
 