#pragma once
#include "../../include/Pokemon/Pokemons/Zubat.hpp"
#include "../../include/Pokemon/pokemon.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {

        class Zubat : public Pokemon {
        public:
            Zubat();
            void supersonic(Pokemon &target);
        };

    }
}