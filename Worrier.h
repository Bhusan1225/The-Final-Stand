#pragma once

using namespace std;

class Worrier
{
private:
	float health = 100;
	
	float shortRangedAttack = 10;
	float longRangedAttack = 5;

public:
	float Attack();
	float CheckDistance();
	void TakeDamage();
	void Defence();
	void ActiveSpecialAbility();

	





};

