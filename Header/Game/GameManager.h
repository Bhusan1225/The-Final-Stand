#pragma once

#include "../../Header/Game/Level/GameLevel.h"
#include "../../Header/Game/WildEncounter/WildEncounterManager.h"



namespace Character
{
	class Warrior; // Forward Declaration
	class Enemy;   // Forward Declarations
}


namespace Game
{
	class GameManager
	{
	private:
		GameLevel currentLevel;
		
		BattleGround *battleGround;  // Keep as a pointer if dynamically allocated
		Character::Enemy* enemy;
		Character::Warrior* warrior;
		WildEncounterManager *wildEncounter;


	public:
		GameManager();
		~GameManager();

		void WarriorInitialize(int health, int shortRangedAttack, int longRangedAttack, int shieldProtection);
		Character::Enemy* EnemyInitialize();


		bool isWarriorAlive();
		void PlayLevel();
		void CompleteLevel();
		void GameOver();
	};
}



