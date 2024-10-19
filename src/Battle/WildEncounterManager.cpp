#include "../../include/Battle/WildEncounterManager.hpp"
#include "../../include/Pokemon/Grass.hpp"
#include "../../include/Pokemon/Pokemon.hpp"
#include <cstdlib> // For rand()
#include <ctime>   // For time()
using namespace N_Pokemon;

namespace N_Battle {

	WildEncounterManager::WildEncounterManager() {
		srand(time(0)); // Seed the random number generator
	}

	N_Pokemon::Pokemon WildEncounterManager::getRandomPokemonFromGrass(const Grass& grass) {
		int randomIndex = rand() % grass.wildPokemonList.size();
		return grass.wildPokemonList[randomIndex];
	}
}