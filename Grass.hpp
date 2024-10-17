
#include <string>
#include <vector>
using namespace std;

struct Grass{

	string environmentType;					 // Example: "Forest", "Cave", "Riverbank"
	vector<WildPokemon> wildPokemonList;	 // List of wild Pokémon that live in this grass
	int encounterRate;						// Likelihood of encountering a wild Pokémon, out of 100
};

Grass forestGrass = { "Cave",
	{{"Zubat", PokemonType::POISION,80}, {"Caterpie",PokemonType::ROCK, 80}, {"Pidgey ",PokemonType::ROCK, 80}},
	80
};
