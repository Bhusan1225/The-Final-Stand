#include "../../../Header/Game/WildEncounter/WildEncounterManager.h"
#include "../../../Header/Character/Enemies/Enemy.h"

#include <cstdlib> // For rand()
#include <ctime>   // For time()

namespace Game
{
    WildEncounterManager::WildEncounterManager()
    {
        srand(time(0)); // Seed the random number generator
    }

    Character::Enemy* WildEncounterManager::GetRandomEnemyLevel1(BattleGround& battleground)
    {
        //if (battleground.enemiesList.empty())
        //{
        //    return nullptr; // No enemies available
        //}

        int randomIndex = rand() % battleground.enemiesList.size();
        Character::Enemy* WildEnemy = battleground.enemiesList[randomIndex];

        return WildEnemy;
    }
}


	
		
	

	





