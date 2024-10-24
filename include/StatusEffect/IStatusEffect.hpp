#pragma once
#include "../../include/Pokemon/Pokemon.hpp"

namespace N_Pokemon
{
	class Pokemon;  // Forward declaration of the Pokemon class

	namespace N_StatusEffects
	{
		class ISatusEffect {
		public:
			// for applying the status effect to a Pokémon.
			virtual void applyEffect(Pokemon* target) = 0;
			//for getting the name of the effect to display in the game.
			virtual string getEffectName() = 0;
			//for applying changes due to the effect at the end of each turn and determining if the Pokémon can still move.
			virtual bool turnEndEffect(Pokemon* target) = 0;
			//for removing the status effect once it’s over.
			virtual void clearEffect(Pokemon* target) = 0;
		};
	}
}