#include "../../include/Character/Player/Player.hpp" // Correct path to Player.hpp
#include <iostream>

class Player;

namespace N_Character {

    using namespace std;
    using namespace N_Player;

    class ProfessorOak {
    public:
        string name;

        //Parameterized constructor
        ProfessorOak(string p_name);
        //
        void greetPlayer(Player* player);

        void offerPokemonChoices(Player* player);

        void explainMainQuest(Player* player);
    };
}