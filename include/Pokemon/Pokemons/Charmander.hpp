#pragma once
#include "../../include/Pokemon/pokemon.hpp"

namespace N_Pokemon {
    namespace N_Pokemons {

        class Charmander : public Pokemon {

        public:
            Charmander();

            void attack(Move selectedMove,Pokemon* target) override;
        //private:
            //void flameThrower(Pokemon* target);
        };

    }
}