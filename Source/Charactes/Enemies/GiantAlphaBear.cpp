#include "../../../Header/Character/Enemies/GiantAlphaBear.h"

namespace Character
{
	GiantAlphaBear::GiantAlphaBear(Warrior* warrior) 
	{
		health = maxHealth;
		doublePower = 6;
		doubleShield = warrior->Attack() - 1;
		cout << "I am the GiantAlphaBear, and are wonna die." << endl;
	}


	int GiantAlphaBear::Attack() 
	{
		int normalAttack = Enemy::Attack(); // normalAttack = 6
		return normalAttack + doublePower;


	}
	int GiantAlphaBear::TakeDamage(Warrior* warrior, int& health)
	{
		if (warrior->getHealth() > 0)
		{

			return warrior->Attack() - doubleShield;
		}
		else
		{
			return 0;
		}

	}






}
