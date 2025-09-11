#include <iostream>
#include "Appliance.h"

int main(){
    Appliance a1;
    Appliance a2(150);

    std::cout << "1st appliance power: " << a1.get_PowerRating() << std::endl;
    std::cout << "2nd appliance power: " << a2.get_PowerRating() << std::endl;

    a2.turnOn();
    std::cout << "Is 2nd appliance on?" << std::endl << (a2.get_isOn() ? "yes" : "no") << std::endl;

    std::cout << "What is the power consumption?" << std::endl << a2.getPowerConsumption() << std::endl;

    return 0;
}