#include "../../include/Pokemon/Pokemons/Pidgey.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Battle/BattleManager.hpp"
#include "../../include/Pokemon/Move.hpp"
#include "../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {
        using namespace std;
        using namespace N_Utility;

        Pidgey::Pidgey()
            : Pokemon("Pidgey", PokemonType::FLYING, 80, {
                Move("GUST", 15),
                Move("TACKLE", 10)
                }) {}

        void Pidgey::attack(Move selectedMove, Pokemon* target) {
            Pokemon::attack(selectedMove, target);

            if (selectedMove.name == "GUST")
            {
                // 20% chance to blow the opponent away
                if (rand() % 100 < 20)
                {
                    std::cout << "... and blew the opponent away!\n";
                    N_Battle::BattleManager::stopBattle();
                    N_Utility::Utility::waitForEnter();
                }
            }
        }
    }
}