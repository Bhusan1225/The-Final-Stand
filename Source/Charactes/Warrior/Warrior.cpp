#include <cstdlib>  // Required for rand() and srand()
#include <ctime>    // Required for time()
#include "../../../Header/Character/Warrior/Warrior.h"
#include "../../../Header/Character/Enemies/Enemy.h"


namespace Character
{
  
        Warrior::Warrior() : enemy(nullptr) {
            health = 100;
        }

        Distance Warrior::CheckDistance(int& minDistace, int& maxDistace)
        {
            srand(static_cast<unsigned>(time(0)));
            int finalDistance = minDistance + rand() % (maxDistance - minDistance + 1);

            if (finalDistance > 5)
            {
                enemyDistance = LongDistance;
            }
            else
            {
                enemyDistance = ShortDistance;
            }

            return enemyDistance;
        }

        int Warrior::Attack()
        {
            CheckDistance(minDistance, maxDistance);
            return ChooseAttack();
        }

        int Warrior::ChooseAttack()
        {
            if (enemyDistance == LongDistance)
            {
                return LongRangeAttack();
            }
            else
            {
                return ShortRangeAttack();
            }
        }

        int Warrior::LongRangeAttack()
        {
            return longRangedAttack;
        }

        int Warrior::ShortRangeAttack()
        {
            return shortRangedAttack;
        }

        int Warrior::TakeDamage(Enemy* enemy)
        {
            if (IsDefenseActive())
            {
                int updatedHealth = health - enemy->Attack();
                return updatedHealth;
            }
            else
            {
                int updatedHealth = (health - enemy->Attack()) + shieldProtection;
                return updatedHealth;
            }
        }

        bool Warrior::IsDefenseActive()
        {
            if (playerLevel == GameLevel::Level1 || playerLevel == GameLevel::Level2)
            {
                return isDefenceActive = false;
            }
            else
            {
                return isDefenceActive = true;
            }
        }
    }
    
