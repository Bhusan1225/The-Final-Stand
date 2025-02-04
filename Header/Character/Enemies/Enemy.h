#pragma once
#include <iostream>
#include <vector>

namespace Character
{
    class Warrior;  // Forward declaration

    enum class EnemyType  // Prefer scoped enums (`enum class`)
    {
        Bear,
        Dragon,  // Fixed typo (Dragons ? Dragon)
        Boss
    };

    class Enemy
    {
    public :
        std::string EnemyName;
        int health;
        int attackPower;

    public:
        Warrior* warrior;  

        Enemy();  
        //virtual ~Enemy() {} 
        virtual int getHealth();
        virtual int Attack();
        virtual int TakeMeleeDamage(Warrior* warrior, int& health);  
        virtual int TakeRangeDamage(Warrior* warrior, int& health);
    };
}