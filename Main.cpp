// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

#include "../../include/Main/Game.hpp"
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Character/ProfessorOak.hpp"
#include "../../include/Pokemon/PokemonChoice.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"
#include <iostream>
#include <limits> // Include this header to use numeric_limits
#include<string>
using namespace std;

//void gameLoop(Player& player)
//{
//    int choice;
//    bool keepPlaying = true;
//
//    while (keepPlaying == true)
//    {
//        // Clear console before showing options
//        Utility::clearConsole();
//
//        // Display options to the player
//        cout << "What would you like to do next, " << player.name << "?" << endl;
//        cout << "1. Battle Wild Pok�mon" << endl;
//        cout << "2. Visit PokeCenter" << endl;
//        cout << "3. Challenge Gyms" << endl;
//        cout << "4. Enter Pok�mon League" << endl;
//        cout << "5. Quit" << endl;
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        Utility::clearInputBuffer(); // Clear the input buffer
//
//        switch (choice)
//        {
//        case 1:
//            cout << "You look around... but all the wild Pokemon are on vacation. Maybe try again later?" << endl;
//            break;
//        case 2:
//            cout << "You head to the PokeCenter, but Nurse Joy is on vacation! Come back later." << endl;
//            break;
//        case 3:
//            cout << "You challenged a Gym Leader, but they�re too busy drinking coffee right now. Maybe later!" << endl;
//            break;
//        case 4:
//            cout << "You tried to enter the Pok�mon League, but the guard said your outfit isn�t fashionable enough." << endl;
//            break;
//        case 5:
//            cout << "You try to quit, but Professor Oak's voice echoes: "
//                "'There's no quitting in Pok�mon training!'\n";
//            cout << "Are you sure you want to quit? (y/n): ";
//            char quitChoice;
//            cin >> quitChoice;
//            if (quitChoice == 'y' || quitChoice == 'Y') {
//                keepPlaying = false; // Exit the game loop
//            }
//            break;
//        default:
//            cout << "Oops! That's not a valid choice. Try again." << endl;
//            break;
//        }
//
//        Utility::waitForEnter();
//    }
//
//    cout << "Goodbye, " << player.name << "! Thanks for playing!" << endl;
//}

int main()
{
    // Creating Objects
    ProfessorOak professor("Professor Oak");
    Player player;

    // Greet the player and offer Pokemon choices 
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    // Explain the main quest
    professor.explainMainQuest(player);

    // Start the main game loop
    Game game;
    // Start the main game loop
    game.gameLoop(player);

    return 0;
}

















