#pragma once
using namespace std;
#include <iostream> 


#include "../../Header/Level/LevelStatus.h"
#include"../../Header/Level/GameLevel.h"

namespace Level 
{
	class LevelManager
	{
	private:
		LevelStatus levelStatus;
		GameLevel gameLevel;
	public:
		
		//LevelManager();
		void GameOptions();
		//GameLevel ChooseGameLevel();

	};
}



