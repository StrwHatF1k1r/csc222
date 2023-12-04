#ifndef TESTDUMMY_H
#define TESTDUMMY_H

#include <string>

class TestDummy {
public:
    TestDummy(int health);
    int takeDamage(int damage);
    int getHealth() const;
private:
    int health;
};

#endif // TESTDUMMY_H
