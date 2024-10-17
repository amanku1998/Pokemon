#include "WildEncounterManager.hpp"
#include < cstdlib >		//For rand()
#include < ctime >			//For time()


WildEncounterManager::WildEncounterManager()
{
	srand(time(0));	//Seed the random number generator
}

WildPokemon WildEncounterManager::getRandomPokemonFromGrass(Grass& grass)
{
	int randomIndex = rand() % grass.wildPokemonList.size();
	return grass.wildPokemonList(randomIndex);
}

