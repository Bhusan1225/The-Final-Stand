#pragma once

#include "../../Header/Game/Level/LevelStatus.h"
#include"../../Header/Game/Level/GameLevel.h"
#include "../../Header/Character/Warrior/Warrior.h" 



namespace Game {
	class Warrior;//forword Declaration
class GameManager
{
private:
	LevelStatus levelStatus;
	GameLevel currentLevel;
	Character::Warrior* warrior;

	bool WarriorAlive;
public:
	GameManager();;
	~GameManager();
	void PlyaerInitialize(int health, int shortRangedAttack, int longRangedAttack, int shieldProtection);
	bool isWarriorAlive();
	void PlayLevel();
	void CompleteLevel();

	void GameOver();
	



};
}


