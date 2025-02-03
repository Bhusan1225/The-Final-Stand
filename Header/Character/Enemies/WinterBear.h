#pragma once
#include "../../../Header/Character/Enemies/Enemy.h"
#include "../../../Header/Character/Warrior/Warrior.h"

namespace Character 
{
	class WinterBear : public Enemy
	{
	private:
		int health = 50;
		const int maxHealth = 50;
		int winterPower;
		int winterShield;
		//script Reference
		Warrior* warrior;

	public:
		WinterBear();
		int Attack();
		int TakeDamage(Warrior* warrior, int& health);




	};
}



