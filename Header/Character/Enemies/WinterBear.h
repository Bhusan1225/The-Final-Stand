#pragma once
#include "../../../Header/Character/Enemies/Enemy.h"
#include "../../../Header/Character/Warrior/Warrior.h"

namespace Character 
{
	class WinterBear : public Enemy
	{
	private:
		int health = 50;
		int maxHealth = 50;
		int winterPower;
		int winterShield = 2;
		//script Reference
		Warrior* warrier;

	public:
		int Attack();
		int TakeDamage(Warrior* warrior, int& health);




	};
}



