#pragma once
#include "../../include/StatusEffect/IStatusEffect.hpp"

namespace N_Pokemon
{
	namespace N_StatusEffects
	{
		class ParalyzedEffect : public ISatusEffect {
		private:
			int turnsLeft; // Track the remaining turns for the effect
		public:
			void applyEffect(Pokemon* target) override;
			std::string getEffectName() override;
			bool turnEndEffect(Pokemon* target) override;
			void clearEffect(Pokemon* target) override;
		};
	}
}