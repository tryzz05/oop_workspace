// Weapon.cpp (Skeleton)
#include "Weapon.h"
#include <iostream>

// TODO initialise the static member variable totalWeapons to 0
int Weapon::totalWeapons = 0;

Weapon::Weapon(const std::string& n, int d) : name(n), damage(d) {
    // TODO: increment totalWeapons count
    totalWeapons++;
}

Weapon::~Weapon() {
    // TODO: decrement totalWeapons count
    totalWeapons--;
}

std::string Weapon::getName() const {
    // TODO: return the weapon name
    return name;
}

int Weapon::getDamage() const {
    // TODO: return the weapon damage
    return damage;
}

int Weapon::getTotalWeapons() {
    // TODO: return the totalWeapons count
    return totalWeapons;
}