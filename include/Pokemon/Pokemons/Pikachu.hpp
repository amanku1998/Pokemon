#pragma once
#include "../../include/Pokemon/pokemon.hpp"

namespace N_Pokemon {
	namespace N_Pokemons {

		class Pikachu : public Pokemon {
		public :
			Pikachu();

			void attack(Pokemon* target) override;
		//private:
			void thunderShock(Pokemon* target);
		};
	}
}
