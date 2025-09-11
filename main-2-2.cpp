#include <iostream>
#include "TV.h"

int main() {
    TV t1;
    TV t2(100,65);

    std::cout << "TV 1: Has a power rating of " << t1.get_PowerRating() <<
    "Wh and a screen size of " << t1.getScreenSize() << " inches. This TV therefore has a power consumption of " <<
    t1.getPowerConsumption() << "W" << std::endl;

    std::cout << "TV 2: Has a power rating of " << t2.get_PowerRating() <<
    "Wh and a screen size of " << t2.getScreenSize() << " inches. This TV therefore has a power consumption of " <<
    t2.getPowerConsumption() << "W" << std::endl;

    return 0;

}