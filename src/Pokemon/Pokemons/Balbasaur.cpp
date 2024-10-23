#include "../../include/Pokemon/Pokemons/Balbasaur.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Pokemon/Move.hpp"
#include "../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {
        using namespace std;
        using namespace N_Utility;

        Balbasaur::Balbasaur()
            : Pokemon("Balbasaur", PokemonType::GRASS, 110, {
                Move("VINE WHIP", 25),
                Move("TACKLE", 10)
                }) {}

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
    }
}