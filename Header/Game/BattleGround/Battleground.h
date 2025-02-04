#pragma once
#include <string>
#include <vector>
using namespace std;

class Enemy; //forward declaration

namespace game 
{
	struct BattleGround
	{

		vector<Enemy*> EnemiesList;

	};
}

