// Arsenal.h (Skeleton)
#ifndef ARSENAL_H
#define ARSENAL_H

#include <vector>
#include "Weapon.h"

class Arsenal {
private:
    std::vector<Weapon*> weapons;
    static int totalArsenals;
public:
    Arsenal();
    Arsenal(const Arsenal& other);
    ~Arsenal();

    void addWeapon(Weapon* weapon);
    int size() const;
    int countMeleeWeapons() const;
    void printArsenal() const;

    static int getTotalArsenals();
};
#endif
