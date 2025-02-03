#pragma once
#include <iostream>
#include <vector>
using namespace std;

// Forward declare Warrior class instead of including "Warrior.h"
namespace Character
{
    class Warrior;  // Forward declaration

    enum EnemyType
    {
        Bear,
        Dragons,
        Boss
    };

    class Enemy
    {
    private:
        string EnemyName;
        int health = 100;
        int attackPower;
        EnemyType typeOfEnemy;

    public:
        Warrior* warrior;  // Now it works because of forward declaration

    public:
        Enemy();
        int Attack();
        int TakeDamage(Warrior* warrior);
    };
}