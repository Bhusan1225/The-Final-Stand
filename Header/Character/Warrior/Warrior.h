#pragma once
#include <iostream>
using namespace std;
#include "../../../Header/Level/GameLevel.h"

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
            int health = 100;
            int shortRangedAttack = 10;
            int longRangedAttack = 5;
            int shieldProtection = 1; // in level 3

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
            Distance CheckDistance(int& minDistace, int& maxDistace);
            int Attack();
            int ChooseAttack();
            int LongRangeAttack();
            int ShortRangeAttack();
            int TakeDamage(Enemy* enemy);
            bool IsDefenseActive();

            void ActiveSpecialAbility();
        };
    }
    

