#pragma once
#include <iostream>
using namespace std;
#include "../../../Header/Game/Level/GameLevel.h"

// Forward declare Enemy class instead of including "Enemy.h"
namespace Character {
    class Enemy; // Forward declaration

    enum Distance
    {
        ShortDistance,
        LongDistance
    };
    
        class Warrior
        {
        private:
            int health;
            int shortRangedAttack;
            int longRangedAttack;
            int shieldProtection; // in level 3

            Distance enemyDistance;
            bool isDefenceActive;
            int maxDistance = 20;
            int minDistance = 2;

            GameLevel playerLevel;
        public:
            string warriorName;
            Enemy* enemy;  // Now it works because of forward declaration

        public:
            Warrior();
            Warrior(int& w_health, int& w_shortRangedAttack, int& w_longRangedAttack, int& w_shieldProtection);
            Distance CheckDistance(int minDistace, int maxDistace);
            int Attack();
            int ChooseAttack();
            int LongRangeAttack();
            int ShortRangeAttack();
            int TakeDamage(Enemy* enemy, int& health);
            bool IsDefenseActive();
            int getHealth();
            
            void ActiveSpecialAbility();
        };
    }
    

