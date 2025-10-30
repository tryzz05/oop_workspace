// RangedWeapon.cpp (Skeleton)
#include "RangedWeapon.h"
#include <iostream>

// TODO initialise the static member variable totalRangedWeapons to 0
static int totalRangedWeapons;

RangedWeapon::RangedWeapon(const std::string& name, int damage, Quality q, int r)
    : Weapon(name, damage), quality(q), range(r) {
    // TODO: initialize quality, range
    // TODO: increment totalRangedWeapons count
    totalRangedWeapons++;
}

RangedWeapon::RangedWeapon(const RangedWeapon& other)
    : Weapon(other.name, other.damage), quality(other.quality), range(other.range) {
    // TODO: copy other's quality, range
    // TODO: increment totalRangedWeapons count
    totalRangedWeapons++;
}

RangedWeapon::~RangedWeapon() {
    // TODO: decrement totalRangedWeapons count
    totalRangedWeapons--;
}

void RangedWeapon::printInfo() const {
    // TODO: print ranged weapon details in format:
    // "RangedWeapon - <name> (Damage <damage>): Quality=<qualityName>, Range=<range> yards"
    // HINT: Again, be careful with formatting and whitespace. You can use the expected output
    // below for an exact comparison!

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

    std::cout << "RangedWeapon - " << name << " (Damage " << damage << "): Quality=" << qualityName
        << ", Range=" << range << " yards" << std::endl;
}

RangedWeapon::Quality RangedWeapon::getQuality() const {
    // TODO
    return quality;
}

int RangedWeapon::getRange() const {
    // TODO
    return range;
}

int RangedWeapon::getTotalRangedWeapons() {
    // TODO
    return totalRangedWeapons;
}

// clone() method creates a deep copy of the RangedWeapon object using the copy constructor
Weapon* RangedWeapon::clone() const { 
    // TODO
}

// getType() method returns the Type for a Weapon object
Weapon::Type RangedWeapon::getType() const { return Type::RANGED; }