#include "../../../Header/Character/Enemies/Enemy.h"
#include "../../../Header/Character/Warrior/Warrior.h"  // Include Warrior.h only in cpp

namespace Character
{
    Enemy::Enemy()   // Assign default attack power
    {
        EnemyName = "Vixen King";
        attackPower = 6;
        health = 100;
        cout << "I am the Queen of the Foxes, and your doom is at hand." << endl;
    }

    int Enemy::Attack()
    {
        return attackPower;
    }

    int Enemy::TakeDamage(Warrior* warrior, int& health)
    {
        if (warrior->getHealth() > 0) 
        {
            return warrior->Attack();
        }    
        else 
        {
            return 0;
        }
            
    }
}
