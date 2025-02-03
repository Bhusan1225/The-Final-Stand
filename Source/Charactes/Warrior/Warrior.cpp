#include <cstdlib>  // Required for rand() and srand()
#include <ctime>    // Required for time()
#include "../../../Header/Character/Warrior/Warrior.h"
#include "../../../Header/Character/Enemies/Enemy.h"


namespace Character
{
  
        Warrior::Warrior()
        {
            health = 100;
        }

        Warrior::Warrior(int& w_health, int& w_shortRangedAttack, int& w_longRangedAttack, int& w_shieldProtection)
        {
            health = w_health;
            shortRangedAttack = w_shortRangedAttack;
            longRangedAttack = w_longRangedAttack;
            shieldProtection = w_shieldProtection;
        }

        int Warrior::getHealth() {
            return health;
        }
        Distance Warrior::CheckDistance(int minDistace, int maxDistace)
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

        int Warrior::TakeDamage(Enemy* enemy, int& health)
        {
            /*if (IsDefenseActive() == false)
            {
                int updatedHealth = health - enemy->Attack();
                return updatedHealth;
            }
            else if (IsDefenseActive() == true)
            {
                int updatedHealth = (health - enemy->Attack()) + shieldProtection;
                return updatedHealth;
            }*/
            int updatedHealth = (health - enemy->Attack()) + shieldProtection;
            return updatedHealth;
        }

        /*bool Warrior::IsDefenseActive()
        {
            if (playerLevel == GameLevel::Level1 || playerLevel == GameLevel::Level2)
            {
                return isDefenceActive = false;
            }
            else if (playerLevel == GameLevel::Level3)
            {
                
                return isDefenceActive = true;
                shieldProtection = 2;
            }
            else if (playerLevel == GameLevel::Level4)
            {
                
                return isDefenceActive = true;
                shieldProtection = 4;
            }
            else if (playerLevel == GameLevel::Level5)
            {
                
                return isDefenceActive = true;
                shieldProtection = 6;
            }
            else if (playerLevel == GameLevel::Level6)
            {
                
                return isDefenceActive = true;
                shieldProtection = 8;
            }
        }*/
    }
    
