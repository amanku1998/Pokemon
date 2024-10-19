#pragma once
#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include<iostream>
using namespace std;

namespace N_Pokemon {

    // Default constructor
    Pokemon::Pokemon() {
        name = "Unknown";
        type = PokemonType::NORMAL;
        health = 50;
        maxHealth = 50;
        attackPower = 10;
    }

    // Parameterized constructor
    Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health, int p_attackPower) {
        name = p_name;
        type = p_type;
        maxHealth = p_health;
        health = p_health;
        attackPower = p_attackPower;
    }


    // Copy constructor
    Pokemon::Pokemon(const Pokemon& other) {
        name = other.name;
        type = other.type;
        health = other.health;
        maxHealth = other.maxHealth;
        attackPower = other.attackPower;
    }

    void Pokemon::TakeDamage(int damage)
    {
        health -= damage;   // Reduce HP by the damage amount
        if (health < 0) {
            health = 0; // Ensure HP doesn't go below 0
        }
    }

    bool Pokemon::isFainted() const {
        return health <= 0;     // Return true if HP is 0 or less
    }

    void Pokemon::heal() {
        health = maxHealth;
    }

    void Pokemon::attack(Pokemon& target)
    {
        cout << name << " attacks " << target.name << " for " << attackPower << " damage!\\n";
        target.TakeDamage(attackPower);   // Apply damage to the target Pokémon
    }

}