#pragma once
#include "../../include/Pokemon/pokemon.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {

        class Zubat : public Pokemon {
        public:
            Zubat();

            void attack(Move selectedMove, Pokemon* target) override;
        //private:
            void supersonic(Pokemon* target);
        };

    }
}