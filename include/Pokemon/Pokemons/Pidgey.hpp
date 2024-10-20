#pragma once
#include "../../include/Pokemon/Pokemons/Pidgey.hpp"
#include "../../include/Pokemon/pokemon.hpp"

namespace N_Pokemon {
	namespace N_Pokemons {

		class Pidgey : public Pokemon {
		public:
			Pidgey();
			void wingAttack(Pokemon& target);
		};
	}
}