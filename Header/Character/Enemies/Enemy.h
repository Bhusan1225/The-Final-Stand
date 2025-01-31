#pragma once
#include <iostream>
//#include <String>

using namespace std;



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
		EnemyType typeOfEnemy;

	public :
		void Attack();


	};
	


}