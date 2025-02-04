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
    protected:
        std::string EnemyName;
        int health;
        int attackPower;

    public:
        Warrior* warrior;  

        Enemy();  
        //virtual ~Enemy() {} 

        virtual int Attack();
        virtual int TakeDamage(Warrior* warrior, int& health) = 0;  // Pure virtual function (forces implementation in child classes)
    };
}