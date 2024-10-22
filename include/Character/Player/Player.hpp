#pragma once

#include<string>
#include "../../include/Pokemon/pokemon.hpp"
//using namespace std;
//using namespace N_Pokemon;

namespace N_Character
{
    namespace N_Player {

        class Player {
        public:
            std::string name;
            N_Pokemon::Pokemon chosenPokemon;

            Player(); // Default constructor
            Player(std::string p_name, N_Pokemon::Pokemon p_chosenPokemon); // Parameterized constructor

            void choosePokemon(int choice); // Method to choose a Pokemon
        };

    }

}