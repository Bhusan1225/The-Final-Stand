#include "../../../Header/Character/Enemies/Enemy.h"


namespace Character 
{
	int Enemy::Attack()
	{
		//logic
		return attackPower;
	}

	int Enemy::TakeDamage(Warrior* warrior)
	{
		return warrior->Attack();
	}

}
