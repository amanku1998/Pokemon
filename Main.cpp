// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

#include "../../include/Main/Game.hpp"
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Character/ProfessorOak.hpp"
#include <iostream>
using namespace std;

int main()
{
    // Creating Objects
    N_Character::ProfessorOak professor("Professor Oak");
    N_Character::N_Player::Player player;

    // Greet the player and offer Pokemon choices 
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    // Explain the main quest
    professor.explainMainQuest(player);

    // Start the main game loop
    N_Main::Game game;
    // Start the main game loop
    game.gameLoop(player);

    return 0;
}

















