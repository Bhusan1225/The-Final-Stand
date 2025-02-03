#include "../../../Header/Character/Enemies/Enemy.h"
#include "../../../Header/Character/Warrior/Warrior.h"  // Include Warrior.h only in cpp

namespace Character
{
    Enemy::Enemy() : attackPower(10)  // Assign default attack power
    {
        health = 100;
    }

    int Enemy::Attack()
    {
        return attackPower;
    }

    int Enemy::TakeDamage(Warrior* warrior)
    {
        if (warrior)
            return warrior->Attack();
        else
            return 0;
    }
}
