#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>

class Vehicle {
private:
    int ID;
    std::time_t timeOfEntry;

protected:
    std::time_t getTimeOfEntry() const;

public:
    Vehicle(int id);
    int getID() const;
    virtual int getParkingDuration() const = 0;
    virtual ~Vehicle();
};

#endif
 