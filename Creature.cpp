// Creature.cpp (Skeleton)
#include <iostream>

#include "Creature.h"

int Creature::totalCreatures = 0;

Creature::Creature(const std::string& name, int cost, CreatureType t, int atk,
                   int def)
    : Card(name, cost), type(t), attack(a), defense(d) {
  // TODO: initialize type, attack, defense
  // TODO: increment totalCreatures count
        totalCreatures++;
}

Creature::Creature(const Creature& other) : Card(other.name, other.cost), type(other.type), attack(other.attack), defense(other.defense) {
  // TODO: copy other's type, attack, defense
  // TODO: increment totalCreatures count
    totalCreatures--;
}

Creature::~Creature() {
  // TODO: decrement totalCreatures count
    totalCreatures--;
}

void Creature::printInfo() const {
  // TODO: print creature details in format:
  // "Creature - <name> (Cost <cost>): Creature Type=<typeName>,
  // Attack=<attack>, Defense=<defense>"

  std::cout << "Creature - " << getName() << "(Cost " << getCost() << "): Creature Type=" << getCreatureType()
            << ", Attack=" << getAttack() << ", Defense=" << getDefense();
}

int Creature::getAttack() const {
  // TODO
  return attack;
}

int Creature::getDefense() const {
  // TODO
  return defense;
}

Creature::CreatureType Creature::getCreatureType() const {
  // TODO
  return type;
}

int Creature::getTotalCreatures() {
  // TODO
  return totalCreatures;
}
// clone() method creates a deep copy of the Creature object using the copy
// constructor
Card* Creature::clone() const { return new Creature(*this); }
// getType() method reuturns the Type for a Card object
Card::Type Creature::getType() const { return Type::CREATURE; }