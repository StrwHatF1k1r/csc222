#include "TestDummy.h"

TestDummy::TestDummy(int health)
    : health(health) {
    // Constructor code here
}

int TestDummy::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
    return damage;
}

int TestDummy::getHealth() const {
    return health;
}
