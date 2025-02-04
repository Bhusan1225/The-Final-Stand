#pragma once
#include "../../../Header/Character/Enemies/Enemy.h"
#include "../../../Header/Character/Warrior/Warrior.h"

namespace Character 
{
	class GiantAlphaBear :public Enemy
	{
		int health = 120;
		int maxHealth = 120;
		int doublePower;
		int doubleShield;
		
		//script Reference
		Warrior* warrior;
		Enemy* enemy;

	public:
		GiantAlphaBear(Warrior* warrior);
		int Attack();
		int TakeDamage(Warrior* warrior, int& health);





	};
}


