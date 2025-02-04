#include "../../../Header/Character/Enemies/GiantAlphaBear.h"

namespace Character
{
	GiantAlphaBear::GiantAlphaBear(Warrior* warrior) 
	{
		health = maxHealth;
		doublePower = 6;
		doubleShield = 5;
		cout << "I am the GiantAlphaBear, and are wonna die." << endl;
	}


	int GiantAlphaBear::Attack() 
	{
		int normalAttack = Enemy::Attack(); // normalAttack = 6
		return normalAttack + doublePower;


	}
	int GiantAlphaBear::TakeMeleeDamage(Warrior* warrior, int& health)
	{
		if (warrior->getHealth() > 0)
		{

			return warrior->ShortRangeAttack() - doubleShield;
		}
		else
		{
			return 0;
		}

	}
	int GiantAlphaBear::TakeRangeDamage(Warrior* warrior, int& health)
	{
		if (warrior->getHealth() > 0)
		{

			return warrior->LongRangeAttack() - doubleShield;
		}
		else
		{
			return 0;
		}

	}

	int GiantAlphaBear::getHealth()
	{

		return health;

	}



}
