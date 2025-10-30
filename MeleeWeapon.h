

// MeleeWeapon.h (Skeleton)
#ifndef MELEEWEAPON_H
#define MELEEWEAPON_H

#include "Weapon.h"
#include <string>

class MeleeWeapon : public Weapon {
public:
    // TODO create an enum class 'Quality' with three enumerators: 'CRUDE', 'STANDARD' & 'MASTERWORK'
    enum class Quality { CRUDE, STANDARD, MASTERWORK };
private:
    Quality quality;
    int reach;
    // TODO declare a static member variable totalMeleeWeapons of type int
public:
    MeleeWeapon(const std::string& name, int damage, Quality quality, int reach);
    MeleeWeapon(const MeleeWeapon& other);   // copy constructor
    ~MeleeWeapon();  // destructor

    void printInfo() const override;
    
    // Getters
    int getReach() const;
    Quality getQuality() const;
    static int getTotalMeleeWeapons();

    // call the copy constructor to return a clone of this object
    Weapon* clone() const override;

    // Return the enumerator MELEE
    Weapon::Type getType() const override;
};
#endif

