// Arsenal.cpp (Skeleton)
#include "Arsenal.h"
#include "MeleeWeapon.h"
#include "RangedWeapon.h"
#include <iostream>

int Arsenal::totalArsenals = 0;

Arsenal::Arsenal() {
    // Initialize an empty arsenal
    totalArsenals++;
}

Arsenal::Arsenal(const Arsenal& other) {
    totalArsenals++;
    // Iterate over weapons to deep copy weapons from 'other'
    // TODO: copy/clone weapon from the arsenal and add it to the new arsenal
    // NOTE: Increment Weapon count static in each new Weapon's constructor (happens automatically)
}

Arsenal::~Arsenal() {
    // TODO Delete all weapons in the arsenal and decrement totalArsenals
}

void Arsenal::addWeapon(Weapon* weapon) {
    // TODO add weapon to the weapons vector
    // NOTE: (Weapon count is updated by Weapon constructor of the object being added)
}

int Arsenal::size() const {
    // TODO: return number of weapons in arsenal
}

int Arsenal::countMeleeWeapons() const {
    // TODO: iterate over the weapons vector counting the number of MeleeWeapons
    // and returning that value
}

void Arsenal::printArsenal() const {
    std::cout << "Arsenal contains " << weapons.size() << " weapons:" << std::endl;
    // TODO for every weapon in the arsenal, call printInfo() to 
    // display details
}

int Arsenal::getTotalArsenals() {
    return totalArsenals;
}