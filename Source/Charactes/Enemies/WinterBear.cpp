#include "../../../Header/Character/Enemies/WinterBear.h"


namespace Character
{

    WinterBear::WinterBear() 
    {
        health = maxHealth;
        winterPower = 2; //multilple of 2
        winterShield = 5;
        cout << "I am the WinterBear, I have power of ice, frizzzzzze you in ice." << endl;
        
    }
	int WinterBear::Attack()
	{
		int normalAttack = Enemy::Attack();
		return normalAttack + winterPower;
	}

   

	int WinterBear::TakeMeleeDamage(Warrior* warrior, int& health)
	{
		if (warrior->getHealth() > 0)
		{

			return warrior->ShortRangeAttack() - winterShield;
		}
		else
		{
			return 0;
		}

	}
	int WinterBear::TakeRangeDamage(Warrior* warrior, int& health)
	{
		if (warrior->getHealth() > 0)
		{

			return warrior->LongRangeAttack() - winterShield;
		}
		else
		{
			return 0;
		}

	}

    int WinterBear::getHealth()
    {

        return health;

    }
}
