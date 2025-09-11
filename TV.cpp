#include "TV.h"

    TV::TV() : Appliance() {
        screenSize = 0;
    };
        
    TV::TV(int powerRating, double screenSize) : Appliance(powerRating) {
        this -> screenSize = screenSize;
    };

    void TV::setScreenSize(double screenSize) {
        screenSize = screenSize;
    };

    double TV::getScreenSize() {
        return screenSize;
    };

    double TV::getPowerConsumption() {
        return get_PowerRating() * (screenSize/10);
    };