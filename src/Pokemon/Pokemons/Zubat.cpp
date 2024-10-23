#include "../../../include/Pokemon/Pokemons/Zubat.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../include/Pokemon/Move.hpp"
#include "../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {

        using namespace std;
        using namespace N_Utility;

        Zubat::Zubat() : Pokemon("Zubat", PokemonType::POISON, 100, 20) {}

        //void Zubat::attack(Pokemon* target) {
        //    supersonic(target);
        //}

        void Zubat::attack(Move selectedMove, Pokemon* target) {
            // Call the base class method from child class.
            Pokemon::attack(selectedMove, target);

            if (selectedMove.name == "LEECH LIFE")
            {
                // Restore 50% of the damage dealt
                this->health += selectedMove.power * 0.5;

                // Ensure health does not exceed maxHealth
                if (this->health > this->maxHealth)
                    this->health = this->maxHealth;

                std::cout << "... and regained health!\n";
            }
        }

        void Zubat::supersonic(Pokemon* target) {
            cout << name << " used SUPERSONIC!\n";
            Utility::waitForEnter();

            cout << "...\n";
            Utility::waitForEnter();

            target->TakeDamage(attackPower);

            if (target->isFainted())
                cout << target->name << " fainted!\n";
            else
                cout << target->name << " has " << target->health << " HP left.\n";
            Utility::waitForEnter();
        }
    }
}