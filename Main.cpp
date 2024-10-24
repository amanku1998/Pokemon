// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

#include "../../include/Main/Game.hpp"
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Character/ProfessorOak.hpp"
#include <iostream>
#include <limits> // Include this header to use std::numeric_limits
#include <string>
using namespace std;

using namespace N_Character;
using namespace N_Player;

int main()
{
    // Creating Objects
    ProfessorOak* professor = new ProfessorOak("Professor Oak");
    N_Player::Player* player = new N_Player::Player();

    // Greet the player and offer Pokemon choices 
    professor->greetPlayer(player);
    professor->offerPokemonChoices(player);

    // Explain the main quest
    professor->explainMainQuest(player);

    // Start the main game loop
    N_Main::Game* game = new N_Main::Game();
    // Start the main game loop
    game->gameLoop(player);

    delete(professor);
    delete(player);
    delete(game);

    return 0;
}

















