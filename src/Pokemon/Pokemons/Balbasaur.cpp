#include "../../include/Pokemon/Pokemons/Balbasaur.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Pokemon/Move.hpp"
#include "../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {
        using namespace std;
        using namespace N_Utility;

        //Balbasaur::Balbasaur() : Pokemon("Charmander", PokemonType::FIRE, 110, {
        //    Move("VINE WHIP",25),
        //    Move("TACKLE",10)}) {}

        //Balbasaur::Balbasaur()
        //    : Pokemon("Balbasaur", PokemonType::GRASS, 110, {
        //        Move("VINE WHIP", 25),
        //        Move("TACKLE", 10)
        //        }) {}

        Balbasaur::Balbasaur() : Pokemon("Balbasaur", PokemonType::GRASS, 110, 10) {}

        //void Balbasaur::attack(Pokemon* target) {
        //    //vineWhip(target);
        //    selectAndUseMove(target);
        //}

        void Balbasaur::attack(Move selectedMove, Pokemon* target) {
            Pokemon::attack(selectedMove, target);

            if (selectedMove.name == "VINE WHIP") {
                // Chance for a second hit (50% chance)
                int secondHitChance = rand() % 2;

                if (secondHitChance == 1) {
                    Pokemon::attack(selectedMove, target);
                    std::cout << name << " hits again with a second " << selectedMove.name << "!\n";
                }
                else
                    std::cout << target->name << " dodged the second hit!\n";
            }
        }

        void Balbasaur::vineWhip(Pokemon* target) {

            cout << name << " used VINE WHIP!\n";
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