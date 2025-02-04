#include "../../Header/Game/GameManager.h"
#include "../../Header/Character/Warrior/Warrior.h"
#include "../../Header/Character/Enemies/GiantAlphaBear.h"
#include "../../Header/Character/Enemies/WinterBear.h"
//#include "../../Header/Game/WildEncounter/WildEncounterManager.h"

#include <iostream>  // Ensure iostream is included for std::cout

namespace Game
{
	// Constructor: Initializes Warrior as NULL and sets up the BattleGround
	GameManager::GameManager()
	{
		warrior = nullptr;
		// Create the battleground with a specific environment and enemies
		battleGround = new BattleGround{"Big Arena",  { new Character::GiantAlphaBear(nullptr), new Character::WinterBear() }, 70  };
	}

	// Destructor: Cleans up dynamically allocated memory
	GameManager::~GameManager()
	{
		delete warrior;

		// Delete all dynamically allocated enemies in battleGround
		if (battleGround)
		{
			for (Character::Enemy* enemy : battleGround->enemiesList)
			{
				delete enemy;  // Free memory of each enemy
			}
			delete battleGround;  // Free battleGround itself
		}

		// Prevent dangling pointer
		battleGround = nullptr;
	}

	void GameManager::WarriorInitialize(int health, int shortRangedAttack, int longRangedAttack, int shieldProtection)
	{
		std::cout << "Initializing Level ..." << std::endl;

		// Ensure only one warrior instance exists
		if (!warrior)
		{
			warrior = new Character::Warrior(health, shortRangedAttack, longRangedAttack, shieldProtection);
		}

		std::cout << "Warrior Initialized with level " << GameLevel::Level1 << std::endl;
		std::cout << "Health: " << health << "\n";
		std::cout << "Short Ranged Attack: " << shortRangedAttack << "\n";
		std::cout << "Long Ranged Attack: " << longRangedAttack << "\n";
		std::cout << "Shield Protection: " << shieldProtection << "\n";
	}

	// Check if Warrior is still alive
	bool GameManager::isWarriorAlive()
	{
		return (warrior && warrior->getHealth() > 0);
	}

	// Play the level (Game loop logic)
	void GameManager::PlayLevel()
	{
		while (isWarriorAlive()) // Cleaner condition
		{
			// TODO: Implement game loop logic
		}
	}
}