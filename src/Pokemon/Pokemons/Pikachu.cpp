#include "../../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Pokemon/Move.hpp"
#include "../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon {
	namespace N_Pokemons {

		using namespace std;
		using namespace N_Utility;

		Pikachu::Pikachu():Pokemon("Pikachu", PokemonType::ELECTRIC, 100, 20) {};

		//void Pikachu::attack(Pokemon* target) {
		//	thunderShock(target);
		//}

		void Pikachu::attack(Move selectedMove, Pokemon* target) {
			if (selectedMove.name == "THUNDER BOLT")
			{
				// 80% chance to hit
				if (rand() % 100 < 80)
				{
					Pokemon::attack(selectedMove, target);
					std::cout << "... and it hit successfully!\n";
				}
				else
					std::cout << "... but it missed!\n";
			}
			else
				Pokemon::attack(selectedMove, target);

		}

		void Pikachu::thunderShock(Pokemon* target) {
			cout << name << " used THUNDER SHOCK!\n";
			Utility::waitForEnter();

			cout << "...\n";
			Utility::waitForEnter();

			target->TakeDamage(attackPower);

			if (target->isFainted())
				cout << target->name << " fainted!\n";
			else
				cout << target->name << " has " << target->health << " HP left.\n";
			Utility::waitForEnter();
		}
	}
}