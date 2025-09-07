#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    ParkingLot lot(3);

    lot.parkVehicle(new Car(101));
    lot.parkVehicle(new Bus(202));
    lot.parkVehicle(new Motorbike(303));
    lot.parkVehicle(new Car(404)); // should print "The lot is full"

    lot.unparkVehicle(202); // removes bus
    lot.unparkVehicle(999); // should print "Vehicle not in the lot"

    return 0;
}
