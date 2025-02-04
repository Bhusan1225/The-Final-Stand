#include "../../Header/Game/GameManager.h"
#include "../../Header/Character/Warrior/Warrior.h"
#include "../../Header/Character/Enemies/GiantAlphaBear.h"
#include "../../Header/Character/Enemies/WinterBear.h"
//#include "../../Header/Game/WildEncounter/WildEncounterManager.h"

#include <iostream>  // Ensure iostream is included for std::cout

namespace Game
{
	
	GameManager::GameManager()
	{
		warrior = nullptr;
		enemy = nullptr;
		
		// Create the battleground with a specific environment and enemies
		battleGround = new BattleGround{"Big Arena",  { new Character::GiantAlphaBear(nullptr), new Character::WinterBear() }, 70  };
		
		
	}

	
	GameManager::~GameManager()
	{
		delete warrior;
		warrior = nullptr;

		if (battleGround)  // Corrected Pointer Check
		{
			// Delete all enemies in the battleground
			for (Character::Enemy* enemy : battleGround->enemiesList)
			{
				delete enemy;
			}
			battleGround->enemiesList.clear();

			// Delete the battleground itself
			delete battleGround;
			battleGround = nullptr;  // Corrected Null Assignment
		}
	}



	void GameManager::WarriorInitialize(int health, int shortRangedAttack, int longRangedAttack, int shieldProtection)
	{
		std::cout << "Initializing Level ..." << std::endl;

		// Ensure only one warrior instance exists
		if (!warrior)
		{
			warrior = new Character::Warrior(health, shortRangedAttack, longRangedAttack, shieldProtection);//creating a new warrior
		}

		std::cout << "Warrior Initialized with level " << GameLevel::Level1 << std::endl;
		std::cout << "Health: " << health << "\n";
		std::cout << "Short Ranged Attack: " << shortRangedAttack << "\n";
		std::cout << "Long Ranged Attack: " << longRangedAttack << "\n";
		std::cout << "Shield Protection: " << shieldProtection << "\n";
	}

	Character::Enemy* GameManager::EnemyInitialize()
	{
		if (battleGround && wildEncounter)
		{
			return wildEncounter->GetRandomEnemyLevel1(*battleGround);
		}
		else
		{
			std::cerr << "Error: BattleGround not initialized!" << std::endl;
			return nullptr;
		}
	}

	// Check if Warrior is still alive
	bool GameManager::isWarriorAlive()
	{
		return (warrior && warrior->getHealth() > 0);
	}

	// Play the level (Game loop logic)
	void GameManager::PlayLevel()
	{
		std::cout << "Game Start!" << std::endl;

		// Ensure there is an enemy to fight
		enemy = EnemyInitialize();
		if (!enemy)
		{
			std::cout << "No enemy encountered!" << std::endl;
			return;
		}
		while (isWarriorAlive() && enemy->getHealth() > 0) // Cleaner condition
		{
			std::cout << "\n--- Player Turn ---" << std::endl;
			int choice;
			std::cout << "Choose your action:\n";
			std::cout << "1. Short Attack\n";
			std::cout << "2. Long Attack\n";
			std::cout << "3. Defend\n";
			std::cout << "Enter choice: ";
			std::cin >> choice;

			switch (choice)
			{
			case 1:
				std::cout << "You attack with short-range!" << std::endl;
				enemy->TakeMeleeDamage(warrior, enemy->health);
				break;
			case 2:
				std::cout << "You attack with long-range!" << std::endl;
				enemy->TakeRangeDamage(warrior, enemy->health);
				break;
			case 3:
				std::cout << "You defend! Shield activated!" << std::endl;
				//warrior->increaseShield();  // Assume this function exists
				break;
			default:
				std::cout << "Invalid choice. Turn skipped!" << std::endl;
				break;
			}

			// Check if enemy is defeated
			if (enemy->getHealth() <= 0)
			{
				std::cout << enemy->EnemyName << " has been defeated!" << std::endl;
				delete enemy;
				enemy = nullptr;
				break; // Exit loop
			}


			// Enemy Turn
			std::cout << "\n--- Enemy Turn ---" << std::endl;
			int enemyAttackDamage = enemy->Attack();
			std::cout << enemy->EnemyName << " attacks for " << enemyAttackDamage << " damage!" << std::endl;

		
			warrior->health = warrior->TakeDamage(enemy, warrior->health);

			
			if (!isWarriorAlive())
			{
				std::cout << "You have been defeated! Game Over." << std::endl;
				break;
			}

						std::cout << "\nWarrior Health: " << warrior->getHealth() << std::endl;
			std::cout << enemy->EnemyName << " Health: " << enemy->getHealth() << std::endl;
		}
	}
}