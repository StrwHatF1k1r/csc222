#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
    Player(int baseDamage, double critChance);
    int hit();
private:
    int baseDamage;
    double critChance;
};

#endif // PLAYER_H
