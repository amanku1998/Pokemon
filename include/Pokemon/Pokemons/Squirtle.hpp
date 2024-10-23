#pragma once
#include "../../include/Pokemon/pokemon.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {

        class Squirtle : public Pokemon {
        public:
            Squirtle();

            void attack(Move selectedMove, Pokemon* target) override;
        //private:
            void waterSplash(Pokemon* target);

        };

    }
}