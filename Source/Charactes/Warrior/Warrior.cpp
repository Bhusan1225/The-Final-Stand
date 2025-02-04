#include <cstdlib>  // Required for rand() and srand()
#include <ctime>    // Required for time()
#include "../../../Header/Character/Warrior/Warrior.h"
#include "../../../Header/Character/Enemies/Enemy.h"


namespace Character
{
  
      

        Warrior::Warrior(int& w_health, int& w_shortRangedAttack, int& w_longRangedAttack, int& w_shieldProtection)
        {
            health = w_health;
            shortRangedAttack = w_shortRangedAttack;
            longRangedAttack = w_longRangedAttack;
            shieldProtection = w_shieldProtection;
            InventoryUpdate();
        }

        void Warrior::InventoryUpdate()
        {
            if (Levelchoosed = Level1)
            {
                cout << "Sward: NO";
                cout << "shield: No";
                cout << " Armor: No";
                cout << " Bow: No";
            }
            else if (Levelchoosed = Level2)
            {
                cout << "Sward: Yes";
                cout << "shield: No";
                cout << " Armor: No";
                cout << " Bow: No";
            }
            else if (Levelchoosed = Level3)
            {
                cout << "Sward: Yes";
                cout << "shield: Yes";
                cout << " Armor: No";
                cout << " Bow: No";
            }
            else if (Levelchoosed = Level4)
            {
                cout << "Sward: Yes";
                cout << "shield: Yes";
                cout << " Armor: yes";
                cout << " Bow: No";
            }
            else if (Levelchoosed = Level5)
            {
                cout << "Sward: Yes";
                cout << "shield: Yes";
                cout << " Armor: yes";
                cout << " Bow: Yes";
            }
            else if (Levelchoosed = Level6)
            {
                cout << "Sward: Yes";
                cout << "shield: Yes";
                cout << " Armor: yes";
                cout << " Bow: Yes";
            }
        }

        int Warrior::getHealth() {
            return health;
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
            
            int updatedHealth = (health - enemy->Attack()) + shieldProtection;
            return updatedHealth;
        }

        
    }
    
