#pragma once
#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Pokemon/Move.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"
#include<iostream>
#include <vector>

namespace N_Pokemon {

    using namespace std;
    using namespace N_Utility;

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
    Pokemon::Pokemon(const Pokemon* other) {
        name = other->name;
        type = other->type;
        health = other->health;
        maxHealth = other->maxHealth;
        attackPower = other->attackPower;
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

    //void Pokemon::attack(Pokemon* target)
    //{
    //    cout << name << " attacks " << target->name << " for " << attackPower << " damage!\\n";
    //    target->TakeDamage(attackPower);   // Apply damage to the target Pokémon
    //}

    //void Pokemon::attack(Move selectedMove, Pokemon* target) { target->takeDamage(selectedMove.power); }


    void Pokemon::selectAndUseMove(Pokemon* target) {
        printAvailableMoves();

        int choice = selectMove();
        Move selectedMove = moves[choice - 1];

        useMove(selectedMove, target);
    }

    void Pokemon::printAvailableMoves() {
        cout << name << "'s available moves:\n";

        // List out all moves for the player to choose from
        for (size_t i = 0; i < moves.size(); ++i) {
            cout << i + 1 << ": " << moves[i].name << " (Power: " << moves[i].power << ")\n";
        }
    }

    int Pokemon::selectMove() {
        // Ask the player to select a move
        int choice;
        cout << "Choose a move: ";
        cin >> choice;

        // Validate the choice
        while (choice < 1 || choice > static_cast<int>(moves.size())) {
            cout << "Invalid choice. Try again: ";
            cin >> choice;
        }

        return choice;
    }

    void Pokemon::useMove(Move selectedMove, Pokemon* target) {
        cout << name << " used " << selectedMove.name << "!\n";
        attack(selectedMove, target);

        Utility::waitForEnter();

        cout << "...\n";
        Utility::waitForEnter();

        if (target->isFainted())
            cout << target->name << " fainted!\n";
        else
            cout << target->name << " has " << target->health << " HP left.\n";
    }
}