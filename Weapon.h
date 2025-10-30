// Weapon.h (Skeleton)
#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
protected:
    std::string name;
    int damage;
    // TODO declare a static member variable totalWeapons of type int
    static int totalWeapons;

public:
    // TODO declare an enum class 'Type' with two enumerators 'MELEE' & 'RANGED'
    enum class Type {
        MELEE,
        RANGED;
    }

    // Constructor: initialize name and damage
    Weapon(const std::string& name, int damage);

    // Virtual destructor
    virtual ~Weapon();

    // Pure virtual function to print weapon details (implemented in derived classes)
    virtual void printInfo() const = 0;
    
    // Pure virtual function to return the weapon type
    virtual Type getType() const = 0;
    
    // Pure virtual function to make a deep copy of the weapon
    virtual Weapon* clone() const = 0;

    // Getters
    std::string getName() const;
    int getDamage() const;

    // Static function to get total number of Weapon instances
    static int getTotalWeapons();
};
#endif