#include "../../include/Character/Player/Player.hpp" // Correct path to Player.hpp
using namespace N_Player;
#include <iostream>
using namespace std;

class Player;

namespace N_ProfessorOak {

    class ProfessorOak {
    public:
        string name;

        //Parameterized constructor
        ProfessorOak(string p_name);
        //
        void greetPlayer(N_Player::Player& player);

        void offerPokemonChoices(N_Player::Player& player);

        void explainMainQuest(N_Player::Player& player);
    };
}