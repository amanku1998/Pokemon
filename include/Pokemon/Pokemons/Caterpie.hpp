#pragma once
//#include "../../include/Pokemon/Pokemons/Caterpie.hpp"
#include "../../include/Pokemon/pokemon.hpp"
#include <iostream>

namespace N_Pokemon {

    namespace N_Pokemons {

        class Caterpie : public Pokemon {
        public:
            Caterpie();

        //private:
            void bugBite(Pokemon* target);
        };
    }
}
