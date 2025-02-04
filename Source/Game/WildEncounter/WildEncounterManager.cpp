#include "../../../Header/Game/WildEncounter/WildEncounterManager.h"
//#include "../../../Header/Game/BattleGround/Battleground.h"
#include "../../../Header/Character/Enemies/Enemy.h"

#include <cstdlib> // For rand()
#include <ctime>   // For time()


namespace Game
{
	WildEncounterManager::WildEncounterManager()
	{
		srand(time(0)); // Seed the random number generator
	}

	Enemy* WildEncounterManager::GetRandomEnemyLevel1(BattleGround& battleground)
	{
		int randomIndex = rand() % battleground.EnemiesList.size();

		Enemy* WildEnemy = battleground.EnemiesList[randomIndex];
		
		return WildEnemy;
		
	}

}

	
		
	

	





