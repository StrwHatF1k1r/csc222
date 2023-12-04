#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include "Player.h"
#include "TestDummy.h"

TEST_CASE("Test Player hits TestDummy and calculates damage") {
    Player player(10, 0.2);  // Base damage of 10 and 20% crit chance
    TestDummy dummy(100);    // TestDummy with 100 health

    int damage = player.hit();
    int damageTaken = dummy.takeDamage(damage);

    CHECK(damageTaken == damage);
    CHECK(dummy.getHealth() <= 100); // Health should be less or equal to 100
}

int main(int argc, char* argv[]) {
    doctest::Context context(argc, argv);
    return context.run();
}
