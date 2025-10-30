// MeleeWeapon.cpp (Skeleton)
#include "MeleeWeapon.h"
#include <iostream>

// TODO initialise the static member variable totalMeleeWeapons to 0

int totalMeleeWeapons = 0;

MeleeWeapon::MeleeWeapon(const std::string& name, int damage, Quality q, int r)
    : Weapon(name, damage), quality(q), reach(r) {
    // TODO: initialize quality, reach
    // TODO: increment totalMeleeWeapons count
    totalMeleeWeapons++;
}

MeleeWeapon::MeleeWeapon(const MeleeWeapon& other)
    : Weapon(other.name, other.damage), quality(other.quality), reach(other.reach) {
    // TODO: copy other's quality, reach
    // TODO: increment totalMeleeWeapons count
        totalMeleeWeapons++;
}

MeleeWeapon::~MeleeWeapon() {
    // TODO: decrement totalMeleeWeapons count
    totalMeleeWeapons--;
}

void MeleeWeapon::printInfo() const {
    // TODO: print melee weapon details in format:
    // "MeleeWeapon - <name> (Damage <damage>): Quality=<qualityName>, Reach=<reach> ft"
    // HINT: Be careful with formatting and whitespace. You are expected to print quality as one 
    // of three values 'Crude', 'Standard' or 'Masterwork'. Might be time for a switch statement!
    std::string qualityName;
    
        switch (quality) {
            case Quality::CRUDE :
                qualityName = "Crude";
            case Quality::STANDARD :
                qualityName = "Standard";
            case Quality::MASTERWORK :
                qualityName = "Masterwork";
            break;
        }

    std::cout << "MeleeWeapon - " << name << " (Damage " << damage << "): Quality=" << qualityName
        << ", Reach=" << reach << " ft" << std::endl;

}

int MeleeWeapon::getReach() const {
    // TODO
    return reach;
}

MeleeWeapon::Quality MeleeWeapon::getQuality() const {
    // TODO
    return quality;
}

int MeleeWeapon::getTotalMeleeWeapons() {
    // TODO
    return totalMeleeWeapons;
}

// clone() method creates a deep copy of the MeleeWeapon object using the copy constructor
Weapon* MeleeWeapon::clone() const { 
    // TODO
    
 }

// getType() method returns the Type for a Weapon object
Weapon::Type MeleeWeapon::getType() const { return Type::MELEE; }