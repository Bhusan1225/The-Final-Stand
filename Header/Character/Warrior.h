#pragma once
#include <iostream>

#include "../../Header/Character/Enemies/Enemy.h"

using namespace std;

enum Distance
{
	ShortDistance,
	LongDistance

};

enum ChooseGameLevel 
{
	Level1,
	Level2, 
	Level3,
	Level4,
	Level5,
	Level6
};

namespace Character {
	class Warrior
	{
	private:

		int health = 100;

		float shortRangedAttack = 10;
		float longRangedAttack = 5;

		int shieldProtection = 1; //in level 3 
		//enums
		Distance enemyDistance;
		ChooseGameLevel playerLevel;
		bool isDefenceActive;
		
		int maxDistance = 20; //the distance is in meters
		int minDistance = 2; //the distance is in meters
	public:
		string worrierName;

		Enemy* enemy;

	public:
		Warrior();
		
		Distance CheckDistance(int& minDistace, int& maxDistace);
		int Attack();
		int ChooseAttack();
		int LongRangeAttack();
		int ShortRangeAttack();
		int TakeDamage(Enemy* enemy);
		bool IsDefenseActive();

		void ActiveSpecialAbility();







	};
}

