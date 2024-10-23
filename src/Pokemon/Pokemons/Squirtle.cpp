#include "../../include/Pokemon/Pokemons/Squirtle.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Pokemon/Move.hpp"
#include "../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {
        using namespace std;
        using namespace N_Utility;

        Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::FIRE, 100, 35) {}

        //void Squirtle::attack(Pokemon* target) {
        //    waterSplash(target);
        //}

        void Squirtle::attack(Move selectedMove, Pokemon* target) {
            Pokemon::attack(selectedMove, target);

            if (selectedMove.name == "RAPID SPIN")
            {
                // Random number of hits between 2 and 5
                int hits = (rand() % 4) + 2;

                // Split damage across hits
                for (int i = 0; i < hits; ++i) {
                    Pokemon::attack(selectedMove, target);
                }

                std::cout << "... and hit " << hits << " times!\\n";
            }
        }

        void Squirtle::waterSplash(Pokemon* target) {

            cout << name << " used WATER SPLASH!\n";
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