#include "../../include/Pokemon/Pokemons/Charmander.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {
        using namespace std;
        using namespace N_Utility;

        Charmander::Charmander() : Pokemon("Charmander", PokemonType::FIRE, 100, 35) {}

        void Charmander::attack(Pokemon* target) {
            flameThrower(target);
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