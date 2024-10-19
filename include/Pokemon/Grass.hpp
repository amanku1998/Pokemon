#pragma once
#include <string>
#include <vector>
using namespace std;
using namespace N_Pokemon;

class Pokemon;

struct Grass {
    string environmentType;  // Example: "Forest", "Cave", "Riverbank"
    vector<N_Pokemon::Pokemon> wildPokemonList;  // List of wild Pok�mon in this grass
    int encounterRate;  // Likelihood of encountering a wild Pok�mon, out of 100
};
