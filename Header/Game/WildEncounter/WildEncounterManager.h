#include <string>
#include <vector>
using namespace std;

namespace Character
{
    class Enemy; // Forward declaration inside the correct namespace
}

namespace Game
{
    struct BattleGround  // Correct name usage
    {
        string environmentType;
        vector<Character::Enemy*> enemiesList;
        int encounterRate;
    };

    class WildEncounterManager
    {
    public:
        WildEncounterManager();

        Character::Enemy* GetRandomEnemyLevel1(BattleGround& battleground);  // Fixed struct name
    };
}
	
	
	
	
	



