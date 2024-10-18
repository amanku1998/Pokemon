#include "Pokemon.hpp"
#include "PokemonType.hpp"
#include<iostream>
using namespace std;

// Default constructor
Pokemon::Pokemon() : name("Unknown"), type(PokemonType::NORMAL), health(50) {}

// Parameterized constructor
Pokemon::Pokemon(string p_name, PokemonType p_type, int p_maxHealth)
    : name(p_name), type(p_type), maxHealth(p_maxHealth), health(p_maxHealth) {}

// Copy constructor
Pokemon::Pokemon(const Pokemon& other)
    : name(other.name), type(other.type), health(other.health) {}

// Destructor
Pokemon::~Pokemon() {
    // Destructor logic (if any) goes here
}

void Pokemon::attack(Pokemon& target)
{
    int damage = attackPower;// Fixed damage for simplicity
    cout << name << " attacks " << target.name << " for " << damage << " damage!\\n";
    target.TakeDamage(damage);   // Apply damage to the target Pokémon
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
