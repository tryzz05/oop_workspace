#ifndef PLAYER_H
#define PLAYER_H

#include "player.cpp"

Player(string name, int health, int damage);

void attack(Player* opponent, int damage);

void takeDamage(int damage);

#endif