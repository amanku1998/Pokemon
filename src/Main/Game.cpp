#pragma once

#include "../../include/Battle/BattleManager.hpp"
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Main/Game.hpp"
#include "../../include/Utility/Utility.hpp"
#include "../../include/Battle/WildEncounterManager.hpp"
#include <iostream>
using namespace std;
using namespace N_Utility;
using namespace N_Player;

namespace N_Game {

    Game::Game() {
        // Create a sample grass environment with actual Pokemon objects
        forestGrass = { "Forest",
                       {N_Pokemon::Pokemon("Pidgey", PokemonType::NORMAL, 40, 7),
                        N_Pokemon::Pokemon("Caterpie", PokemonType::BUG, 35, 5),
                        N_Pokemon::Pokemon("Zubat", PokemonType::POISON, 30, 8)},
                       70 };
    }

    void Game::gameLoop(N_Player::Player& player) {
        int choice;
        bool keepPlaying = true;
        N_Battle::BattleManager battleManager;
        N_Battle::WildEncounterManager encounterManager;
        N_Pokemon::Pokemon wildPokemon;

        while (keepPlaying) {
            // Clear console before showing options
            Utility::clearConsole();

            // Display options to the player
            cout << "\nWhat would you like to do next, " << player.name << "?\n";
            cout << "1. Battle Wild Pok�mon\n";
            cout << "2. Visit PokeCenter\n";
            cout << "3. Challenge Gyms\n";
            cout << "4. Enter Pok�mon League\n";
            cout << "5. Quit\n";
            cout << "Enter your choice: ";

            cin >> choice;

            Utility::clearInputBuffer(); // Clear the input buffer

            // Process the player's choice and display the corresponding message
            switch (choice) {
            case 1: {
                // Create a scope within case 1

                wildPokemon = encounterManager.getRandomPokemonFromGrass(forestGrass);
                battleManager.startBattle(player, wildPokemon);
                break;
            }
            case 2: {
                visitPokeCenter(player);
                break;
            }
            case 3: {
                cout << "You march up to the Gym, but it's closed for renovations. Seems "
                    "like even Gym Leaders need a break!\n";
                break;
            }
            case 4: {
                cout << "You boldly step towards the Pok�mon League... but the "
                    "gatekeeper laughs and says, 'Maybe next time, champ!'\n";
                break;
            }
            case 5: {
                cout << "You try to quit, but Professor Oak's voice echoes: 'There's no "
                    "quitting in Pok�mon training!'\n";
                cout << "Are you sure you want to quit? (y/n): ";
                char quitChoice;
                cin >> quitChoice;
                if (quitChoice == 'y' || quitChoice == 'Y') {
                    keepPlaying = false;
                }
                break;
            }
            default: {
                cout << "That's not a valid choice. Try again!\n";
                break;
            }
            }

            // Wait for Enter key before the screen is cleared and the menu is shown
            // again
            Utility::waitForEnter();
        }

        cout << "Goodbye, " << player.name << "! Thanks for playing!\n";
    }

    void Game::visitPokeCenter(N_Player::Player& player) {
        if (player.chosenPokemon.health == player.chosenPokemon.maxHealth) {
            cout << "Your Pok�mon is already at full health!\n";
        }
        else {
            cout << "You head to the PokeCenter.\n";
            cout << "Healing your Pok�mon...\n";
            Utility::waitForEnter(); // Simulate a short pause for the healing process
            player.chosenPokemon.heal(); // Heal the player's Pok�mon
            cout << player.chosenPokemon.name << "'s health is fully restored!\n";
        }
    }

}