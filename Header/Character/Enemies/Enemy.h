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
        int health;
        int attackPower;
       

    public:
        Warrior* warrior;  // Now it will work because of forward declaration

    public:
        Enemy();
        virtual int Attack();
        virtual int TakeDamage(Warrior* warrior, int &health);
    };
}