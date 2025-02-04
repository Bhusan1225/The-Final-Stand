#include "../../../Header/Game/Level/LevelManager.h"



namespace Level
{
    
        /*LevelManager::LevelManager() 
        {



        }*/

        void LevelManager::GameOptions()
        {
            cout << " The game will forword as you clear the levels\nEach levels will give you special powers and inventory to protect yourself\n and train you to fight with the boss enemy\n";
            cout << " 1) Level 1" << endl;
            cout << " 2) Level 2" << endl;
            cout << " 3) Level 3" << endl;
            cout << " 4) Level 4" << endl;
            cout << " 5) Level 5" << endl;
            cout << " 6) Level 6" << endl;

        }

        GameLevel LevelManager::ChooseGameLevel()
        {
            int chooseLevel;

            // Loop until a valid choice is made
            while (true)
            {
                cout << "Choose your level (1-6): ";
                cin >> chooseLevel;

                if (chooseLevel >= 1 && chooseLevel <= 6)
                {
                    break;  // Valid input, exit loop
                }
                cout << "Invalid choice. Please enter a number between 1 and 6.\n";
            }

            switch (chooseLevel) {
            case Level1:
                cout << "You chose Level 1.\n";
                gameManager.WarriorInitialize(100,10,5,0);
                gameManager.EnemyInitialize();
                gameManager.PlayLevel();

                return Level1;
            case Level2:
                cout << "You chose Level 2.\n";
                return Level2;
            case Level3:
                cout << "You chose Level 3.\n";
                return Level3;
            case Level4:
                cout << "You chose Level 4.\n";
                return Level4;
            case Level5:
                cout << "You chose Level 5.\n";
                return Level5;
            case Level6:
                cout << "You chose Level 6.\n";
                return Level6;
            default:
                cout << "Something went wrong.\n";
                return Level1;  // Default fallback
            }

        }

       // return static_cast<GameLevel>(chooseLevel);
    }









