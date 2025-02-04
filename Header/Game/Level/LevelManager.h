#pragma once
using namespace std;
#include <iostream> 


#include "../../../Header/Game/Level/LevelStatus.h"
#include"../../../Header/Game/Level/GameLevel.h"
#include "../../../Header/Game/GameManager.h"
#include "../../../Header/Game/WildEncounter/WildEncounterManager.h"

namespace Game
{
	class GameManager;
	
}
namespace Level 
{
	
	
		class LevelManager
		{
		private:
			LevelStatus levelStatus;
			GameLevel gameLevel;
			Game::GameManager gameManager;
			Game::BattleGround battleground;
			//BattleGround battleground;

		public:
			
			//LevelManager();
			void GameOptions();
			GameLevel ChooseGameLevel();

		};
	
}





