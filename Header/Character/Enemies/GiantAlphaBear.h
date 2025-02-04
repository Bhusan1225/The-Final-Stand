#pragma once
#include "../../../Header/Character/Enemies/Enemy.h"
#include "../../../Header/Character/Warrior/Warrior.h"

namespace Character
{
	class GiantAlphaBear : public Enemy
	{
	private:
		int maxHealth;
		int doublePower;
		int doubleShield;

	public:
		GiantAlphaBear(Warrior* warrior);
		int Attack() override;
		int TakeDamage(Warrior* warrior, int& health) override;
	};
}


