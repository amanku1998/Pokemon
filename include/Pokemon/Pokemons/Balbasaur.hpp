#pragma once
#include "../../include/Pokemon/Pokemons/Balbasaur.hpp"
#include "../../include/Pokemon/pokemon.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {

        class Balbasaur : public Pokemon {

        public:
            Balbasaur();

        //private:
            void vineWhip(Pokemon& target);

        };

    }
}