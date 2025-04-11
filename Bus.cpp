#include "Bus.h"

Bus::Bus(int id) : Vehicle(id) {}

int Bus::getParkingDuration() const {
    int duration = std::difftime(std::time(nullptr), getTimeOfEntry());
    return duration - (duration * 0.25);
}
