#include "../../Header/Character/Worrier.h"


namespace Character 
{
	Worrier::Worrier()
	{
		health = 100;
		CheckDistance(maxDistance, minDistance);
	}

	Distance Worrier::CheckDistance(int& minDistace, int& maxDistace)
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

	float Worrier::Attack()
	{
		if (enemyDistance == LongDistance)
		{
			LongRangeAttack();
		}
		else if (enemyDistance == ShortDistance)
		{
			ShortRangeAttack();
		}

	}

	float Worrier::LongRangeAttack()

	{
		//logic 
	}

	float Worrier::ShortRangeAttack()
	{

		//logic
	}
}
