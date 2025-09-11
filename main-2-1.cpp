#include <iostream>
#include "Fridge.h"

int main() {
    Fridge f1;
    Fridge f2(138,300);

    std::cout << "First fridge has a volume " << f1.getVolume() 
    << "L and power rating of " << f1.get_PowerRating() << "W" << std::endl;
    std::cout << "Second fridge has a volume " << f2.getVolume() << 
    "L and power rating of " << f2.get_PowerRating() << "W" << std::endl;

    std::cout << "They have power consumptions of " << f1.getPowerConsumption() <<
    "Wh and " << f2.getPowerConsumption() << "Wh respectively" << std::endl;

    return 0;

}