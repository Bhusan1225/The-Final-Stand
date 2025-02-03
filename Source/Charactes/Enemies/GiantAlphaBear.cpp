#include "../../../Header/Character/Enemies/GiantAlphaBear.h"

namespace Character
{
	GiantAlphaBear::GiantAlphaBear(Warrior* warrior) 
	{
		health = maxHealth;
		doublePower = 6;
		doubleShield = warrior->Attack() - 1;
	}









}
