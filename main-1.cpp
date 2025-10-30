#include "Weapon.h"
#include "MeleeWeapon.h"
#include "RangedWeapon.h" 
#include <iostream> 

int main() {
    // Create MeleeWeapon and RangedWeapon instances
    MeleeWeapon m1("Iron Sword", 45, MeleeWeapon::Quality::STANDARD, 5);
    MeleeWeapon m2("Legendary Axe", 85, MeleeWeapon::Quality::MASTERWORK, 6);
    RangedWeapon r1("Short Bow", 35, RangedWeapon::Quality::CRUDE, 100);

    // Use printInfo (polymorphic call example)
    Weapon* ptr = &m1;
    ptr->printInfo();           // prints Iron Sword details (Weapon pointer to MeleeWeapon)
    m2.printInfo();             // prints Legendary Axe details
    r1.printInfo();             // prints ranged weapon details

    // Check static counts
    std::cout << "Total Weapons: " << Weapon::getTotalWeapons() << std::endl;
    std::cout << "Total Melee Weapons: " << MeleeWeapon::getTotalMeleeWeapons() << std::endl;
    std::cout << "Total Ranged Weapons: " << RangedWeapon::getTotalRangedWeapons() << std::endl;
}