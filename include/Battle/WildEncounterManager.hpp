#include "../../include/Pokemon/Pokemon.hpp"
#include <vector>

namespace N_Pokemon
{
    struct Grass;
    class Pokemon;
}

namespace N_Battle {
    using namespace N_Pokemon;

    class WildEncounterManager {
    public:
        WildEncounterManager();
        N_Pokemon::Pokemon getRandomPokemonFromGrass(const Grass &grass);
    };

}