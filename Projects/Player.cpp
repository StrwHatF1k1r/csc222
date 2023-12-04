#include "Player.h"
#include <cstdlib>

Player::Player(int baseDamage, double critChance)
    : baseDamage(baseDamage), critChance(critChance) {
    // Constructor code here
}

int Player::hit() {
    double random = (rand() % 100) / 100.0; // Generate a random number between 0 and 1
    if (random < critChance) {
        return baseDamage * 2; // Double damage for a critical hit
    }
    return baseDamage;
}
