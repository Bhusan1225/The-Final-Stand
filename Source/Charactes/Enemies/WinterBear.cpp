#include "../../../Header/Character/Enemies/WinterBear.h"


namespace Character
{
	int WinterBear::Attack()
	{
		int normalAttack = Enemy::Attack();
		return normalAttack + winterPower;
	}
}
