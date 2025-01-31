#include "../../Header/Character/Warrior.h"


namespace Character 
{
	Warrior::Warrior()
	{
		health = 100;
		
	}

	Distance Warrior::CheckDistance(int& minDistace, int& maxDistace)
	{
		//here we can check the distance between enemy and worrier
		// create cases for the Distance like distance >10, distance <10
		srand(static_cast<unsigned>(time(0)));
		int finalDistance = minDistance + rand() % (maxDistance - minDistace + 1);

		if (finalDistance > 5)
		{
			enemyDistance = LongDistance;
		}
		else if (finalDistance <= 5)
		{
			enemyDistance = ShortDistance;
		}

		return enemyDistance;

	}

	int Warrior::Attack()
	{
		CheckDistance(maxDistance, minDistance);

		
		return ChooseAttack();

	}
	int Warrior::ChooseAttack()
	{
		if (enemyDistance == LongDistance)
		{
			return LongRangeAttack();
		}
		else if (enemyDistance == ShortDistance)
		{
			return ShortRangeAttack();
		}
	}

	int Warrior::LongRangeAttack()

	{
		//logic 
		return longRangedAttack;
	}

	int Warrior::ShortRangeAttack()
	{

		//logic
		return shortRangedAttack;
	}

	int Warrior::TakeDamage(Enemy* enemy)
	{

		if (IsDefenseActive() == true)
		{
			 int updatedHealth = health - enemy->Attack();
			 return updatedHealth;
		}
		else
		{
			int updatedHealth = (health - enemy->Attack()) + shieldProtection;
			return updatedHealth;
		}
	
	}

	bool Warrior::IsDefenseActive()
	{
		if (playerLevel == Level1, Level2)
		{
			return isDefenceActive = false;
		}
		else
		{
			return isDefenceActive = true;
		}
		
	}

}