#pragma once

#include<string>
using namespace std;

enum class PokemonType;

namespace N_Pokemon {

    class Pokemon {
    public:
        string name;
        PokemonType type;
        int health;         // Represents the current HP
        int maxHealth;      // Represents the maximum HP
        int attackPower;        // New attribute for attack power

        //Default constructor
        Pokemon();
        //Parameterized constructor
        Pokemon(string p_name, PokemonType p_type, int p_health, int p_attackPower);
        //Copy constructor
        Pokemon(const Pokemon& other);

        bool isFainted() const;       // Method to check if the Pokemon has fainted
        void heal();
        void attack(Pokemon& target);
        void TakeDamage(int damage);      // Method to reduce HP
    };

}