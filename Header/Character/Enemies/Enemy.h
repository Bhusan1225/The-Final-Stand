#pragma once
#include <iostream>
#include <vector>

using namespace std;
#include "../../../Header/Character/Warrior.h"


namespace Character 
{
	enum EnemyType 
	{
		Bear,
		Dragons,
		Boss

	};

	class Enemy 
	{
	private:
		string EnemyName;
		int health = 100;
		int attackPower;
		EnemyType typeOfEnemy;
	public:
		Warrior* warrior;

	public :
		
		int Attack();
		int TakeDamage(Warrior* warrior);

	};
	


}