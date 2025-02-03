#pragma once
using namespace std;
#include <iostream> 


#include "../../../Header/Game/Level/LevelStatus.h"
#include"../../../Header/Game/Level/GameLevel.h"

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
			GameLevel ChooseGameLevel();

		};
	
}





