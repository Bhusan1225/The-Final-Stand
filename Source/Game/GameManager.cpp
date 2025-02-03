#include "../../Header/Game/GameManager.h"
#include "../../Header/Character/Warrior/Warrior.h"


namespace Game 
{

	// Constructor: Initializes Warrior as NULL
	GameManager::GameManager() {
		warrior = nullptr;
	}

	// Destructor: Cleans up dynamically allocated memory
	GameManager::~GameManager() {
		delete warrior;
	}
	void GameManager::PlyaerInitialize(int health, int shortRangedAttack, int longRangedAttack, int shieldProtection)
	{
		
			cout << "Initializing Level ..." << endl;
			

			warrior = new Character::Warrior(health, shortRangedAttack, longRangedAttack, shieldProtection);

			std::cout << "Warrior Initialized with level "<< GameLevel::Level1<<endl; // check leter once
			std::cout << "Health: " << health << "\n";
			std::cout << "Short Ranged Attack: " << shortRangedAttack << "\n";
			std::cout << "Long Ranged Attack: " << longRangedAttack << "\n";
			std::cout << "Shield Protection: " << shieldProtection << "\n";
		
	
	
	}

	bool GameManager::isWarriorAlive() 
	{
		
		if (warrior != nullptr && warrior->getHealth() > 0) 
		{
			return true;  // Warrior is still alive
		}
		else
		{ 
			return false;

		}
		

	}
	void GameManager::PlayLevel() 
	{
		while (isWarriorAlive() == true)
		{
			//Gameloop logic
		}
		

	}


	}



