#pragma once

#include <vector>  // Missing vector include
struct BattleGround;
class Enemy;  // Forward declaration of Enemy


namespace Game
{
    //struct BattleGround  // Correct name usage
    //{
    //    std::vector<Enemy*> EnemiesList;  // Using std::vector properly
    //};

    class WildEncounterManager
    {
    public:
        WildEncounterManager();

        Enemy* GetRandomEnemyLevel1(BattleGround& battleground);  // Fixed struct name
    };
}
	
	
	
	
	



