#include "Appliance.h"

Appliance::Appliance(){
    powerRating = 0;
    isOn = false;
}

Appliance::Appliance(int powerRating){
    this -> powerRating = powerRating;
    this -> isOn = false;
}

int Appliance::get_PowerRating(){
    return powerRating;
}

void Appliance::turnOff(){
    isOn = false;
}

void Appliance::turnOn() {
    isOn = true;
}

bool Appliance::get_isOn(){
    return isOn;
}

double Appliance::getPowerConsumption(){
    return 0.0;
}