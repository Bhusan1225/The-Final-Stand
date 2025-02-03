#include "../../../Header/Character/Enemies/WinterBear.h"


namespace Character
{

    WinterBear::WinterBear() 
    {
        health = maxHealth;
        winterPower = 2; //multilple of 2
        winterShield = 5;
        
    }
	int WinterBear::Attack()
	{
		int normalAttack = Enemy::Attack();
		return normalAttack + winterPower;
	}

    int WinterBear::TakeDamage(Warrior* warrior, int& health)
    {
        if (warrior->getHealth() > 0)
        {

            return warrior->Attack() - winterShield;
        }
        else
        {
            return 0;
        }

    }
}
