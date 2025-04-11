#include "Vehicle.h"

Vehicle::Vehicle(int id) : ID(id), timeOfEntry(std::time(0)) {}

int Vehicle::getID() const {
    return ID;
}

std::time_t Vehicle::getTimeOfEntry() const {
    return timeOfEntry;
}

Vehicle::~Vehicle() {}