#include "Vehicle.h"

Vehicle::Vehicle(int entryTime) {
    timeOfEntry = entryTime;
}

int Vehicle::getParkingDuration() const {
    return std::difftime(std::time(nullptr), timeOfEntry);
}
