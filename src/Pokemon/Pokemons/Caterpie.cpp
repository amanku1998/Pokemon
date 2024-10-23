#include "../../include/Pokemon/Pokemons/Caterpie.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Pokemon/Move.hpp"
#include "../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon {

    namespace N_Pokemons {

        using namespace std;
        using namespace N_Utility;

        Caterpie::Caterpie() : Pokemon("Caterpie", PokemonType::BUG, 100, 10) {}

        //void Caterpie::attack(Pokemon* target) {
        //    bugBite(target);
        //}

        void Caterpie::attack(Move selectedMove, Pokemon* target) {
            Pokemon::attack(selectedMove, target);

            if (selectedMove.name == "STICKY WEB")
            {
                // Reduce the target's next attack damage (for simplicity, reducing by a fixed value)
                int reducedDamage = 5;
                target->reduceAttackPower(reducedDamage);
                std::cout << target->name << "'s next attack will be reduced by " << reducedDamage << " damage!\n";
            }
        }


        void Caterpie::bugBite(Pokemon* target) {
            cout << name << " used BUG BITE!\n";
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