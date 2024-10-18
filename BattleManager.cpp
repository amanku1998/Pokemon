#include "BattleManager.hpp"
#include "Utility.hpp"
#include <iostream>
using namespace std;

void BattleManager::startBattle(Player& player, Pokemon& wildPokemon) {
    cout << "A wild " << wildPokemon.name << " appeared!\n";
    battle(player.chosenPokemon, wildPokemon);
}

void BattleManager::battle(Pokemon& playerPokemon, Pokemon& wildPokemon) {
    cout << "A wild " << wildPokemon.name << " appeared!\\n";

    while (!playerPokemon.isFainted() && !wildPokemon.isFainted()) {
        playerPokemon.attack(wildPokemon); // Player attacks first

        if (!wildPokemon.isFainted()) {
            wildPokemon.attack(playerPokemon); // Wild Pokémon attacks back
        }
    }

    if (playerPokemon.isFainted()) {
        cout << playerPokemon.name << " has fainted! You lose the battle.\\n";
    }
    else {
        cout << "You defeated the wild " << wildPokemon.name << "!\\n";
    }
}

void BattleManager::handleBattleOutcome(Player& player, bool playerWon)
{
    if (playerWon) {
        cout << player.chosenPokemon.name << " is victorious! Keep an eye on your Pokémon's health.\n";
    }
    else {
        cout << "Oh no! " << player.chosenPokemon.name << " fainted! You need to visit the PokeCenter.\n";
        Utility::waitForEnter();
        cout << "Game Over.\n";
    }
}

