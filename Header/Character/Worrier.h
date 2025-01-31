#pragma once
#include <iostream>

using namespace std;

enum Distance
{
	ShortDistance,
	LongDistance

};

namespace Character {
	class Worrier
	{
	private:

		int health = 100;

		float shortRangedAttack = 10;
		float longRangedAttack = 5;

		Distance enemyDistance;

		//int finalDistance;
		int maxDistance = 20; //the distance is in meters
		int minDistance = 2; //the distance is in meters
	public:
		string worrierName;


	public:
		Worrier();
		//int MakeDistance(int& minDistace, int& maxDistace);
		Distance CheckDistance(int& minDistace, int& maxDistace);
		float Attack();
		float LongRangeAttack();
		float ShortRangeAttack();
		void TakeDamage();
		void Defence();
		void ActiveSpecialAbility();







	};
}

