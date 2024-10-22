#include "../../include/Pokemon/Pokemons/Pidgey.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {
        using namespace std;
        using namespace N_Utility;

        Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::NORMAL, 100, 35) {}

        void Pidgey::attack(Pokemon* target) {
            wingAttack(target);
        }

        void Pidgey::wingAttack(Pokemon* target) {
            cout << name << " used WING ATTACK!\n";
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