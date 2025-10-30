#include <iostream>
#include "Weapon.h"
#include "MeleeWeapon.h"
#include "RangedWeapon.h"
#include "Arsenal.h"

int main() {
    // Create some weapons dynamically and add to arsenal
    Arsenal arsenal;
    arsenal.addWeapon(new MeleeWeapon("Iron Sword", 45, MeleeWeapon::Quality::STANDARD, 5));
    arsenal.addWeapon(new RangedWeapon("Short Bow", 35, RangedWeapon::Quality::CRUDE, 100));
    arsenal.addWeapon(new MeleeWeapon("Legendary Axe", 85, MeleeWeapon::Quality::MASTERWORK, 6));

    // Print arsenal contents
    arsenal.printArsenal();
    std::cout << "Arsenal melee weapon count: " << arsenal.countMeleeWeapons() << std::endl;
    std::cout << "Total Weapons (overall): " << Weapon::getTotalWeapons() << std::endl;
    std::cout << "Total Arsenals: " << Arsenal::getTotalArsenals() << std::endl;

    // Test copy constructor
    Arsenal arsenal2 = Arsenal(arsenal);  // makes a deep copy of arsenal
    std::cout << "Copied arsenal2 from arsenal. Arsenal2 size: "
              << arsenal2.size() << ", Arsenal1 size: " << arsenal.size() << std::endl;
    arsenal2.printArsenal();
    std::cout << "Total Weapons after copying arsenals: " << Weapon::getTotalWeapons() << std::endl;

    return 0;
}