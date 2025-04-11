#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>

class Vehicle {
private:
    time_t timeOfEntry;
    int ID;

public:
    Vehicle(int id);
    int getID() const;
    virtual int getParkingDuration() const;

protected:
    time_t getTimeOfEntry() const {
        return timeOfEntry;
    }

};

#endif
