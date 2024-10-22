#pragma once

#include<string>
#include "../../include/Pokemon/pokemon.hpp"

namespace N_Character
{
    namespace N_Player {
        using namespace std;
        using namespace N_Pokemon;

        class Player {
        public:
            string name;
            Pokemon* chosenPokemon;

            Player(); // Default constructor
            Player(string p_name, Pokemon* p_chosenPokemon); // Parameterized constructor

            void choosePokemon(int choice); // Method to choose a Pokemon
        };

    }

}