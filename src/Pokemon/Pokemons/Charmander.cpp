#include "../../include/Pokemon/Pokemons/Charmander.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Pokemon/Move.hpp"
#include "../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {
        using namespace std;
        using namespace N_Utility;

        Charmander::Charmander() : Pokemon("Charmander", PokemonType::FIRE, 100, 35) {}

        //void Charmander::attack(Pokemon* target) {
        //    flameThrower(target);
        //}

        void Charmander::attack(Move selectedMove, Pokemon* target) {
            Pokemon::attack(selectedMove, target);

            if (selectedMove.name == "BLAZING CHARGE")
            {
                // Recoil effect: Charmander takes recoil damage
                this->TakeDamage(10); // Fixed recoil damage
                std::cout << name << " takes 10 recoil damage from the Blazing Charge!\n";
                N_Utility::Utility::waitForEnter();
            }
        }

        void Charmander::flameThrower(Pokemon* target) {
            //cout << name << " uses Flame Thrower on " << target->name << "!\n";
            //target->TakeDamage(20);

            cout << name << " used FLAME THROWER!\n";
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