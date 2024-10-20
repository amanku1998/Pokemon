#pragma once
#include "../../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../../include/Pokemon/pokemon.hpp"

namespace N_Pokemon {
	namespace N_Pokemons {

		class Pikachu : public Pokemon {
		public :
			Pikachu();
			void thunderShock(Pokemon &target);
		};
	}
}
