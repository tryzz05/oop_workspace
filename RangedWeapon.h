

// RangedWeapon.h (Skeleton)
#ifndef RANGEDWEAPON_H
#define RANGEDWEAPON_H

#include "Weapon.h"
#include <string>

class RangedWeapon : public Weapon {
public:
    // TODO create a duplicate enum class 'Quality' with three enumerators: 'CRUDE', 'STANDARD' & 'MASTERWORK'
    enum class Quality { CRUDE, STANDARD, MASTERWORK };
private:
    Quality quality;
    int range;
    // TODO declare a static member variable totalRangedWeapons of type int
public:
    RangedWeapon(const std::string& name, int damage, Quality quality, int range);
    RangedWeapon(const RangedWeapon& other);
    ~RangedWeapon();

    void printInfo() const override;
    
    Quality getQuality() const;
    int getRange() const;
    static int getTotalRangedWeapons();

    // call the copy constructor to return a clone of this object
    Weapon* clone() const override;
    Weapon::Type getType() const override;
};
#endif

