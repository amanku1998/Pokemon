#include "../../include/Pokemon/Pokemon.hpp"
#include <vector>
using namespace N_Pokemon;

struct Grass;
class Pokemon;

namespace N_Battle {

    class WildEncounterManager {
    public:
        WildEncounterManager();
        N_Pokemon::Pokemon getRandomPokemonFromGrass(const Grass& grass);
    };

}