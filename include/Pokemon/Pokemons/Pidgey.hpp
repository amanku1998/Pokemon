#pragma once
#include "../../include/Pokemon/pokemon.hpp"

namespace N_Pokemon {
	namespace N_Pokemons {

		class Pidgey : public Pokemon {
		public:
			Pidgey();

		//private:
			void wingAttack(Pokemon* target);
		};
	}
}