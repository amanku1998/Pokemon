#pragma once
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Battle/BattleManager.hpp"
#include "../../include/Utility/Utility.hpp"
#include <iostream>
using namespace std;
using namespace N_Utility;
using namespace N_Player;
using namespace N_Pokemon;

namespace N_Battle {

    void BattleManager::startBattle(N_Player::Player& player, N_Pokemon::Pokemon& wildPokemon) {
        battleState.playerPokemon = player.chosenPokemon;
        battleState.wildPokemon = wildPokemon;
        battleState.playerTurn = true;      // Player starts first
        battleState.battleOngoing = true;

        cout << "A wild " << wildPokemon.name << " appeared!\n";
        // battle(player.chosenPokemon, wildPokemon);
        battle();
    }

    //void BattleManager::battle(Pokemon& playerPokemon, Pokemon& wildPokemon) {
    //    cout << "A wild " << wildPokemon.name << " appeared!\\n";
    //
    //    while (!playerPokemon.isFainted() && !wildPokemon.isFainted()) {
    //        playerPokemon.attack(wildPokemon); // Player attacks first
    //
    //        if (!wildPokemon.isFainted()) {
    //            wildPokemon.attack(playerPokemon); // Wild Pokémon attacks back
    //        }
    //    }
    //
    //    if (playerPokemon.isFainted()) {
    //        cout << playerPokemon.name << " has fainted! You lose the battle.\\n";
    //    }
    //    else {
    //        cout << "You defeated the wild " << wildPokemon.name << "!\\n";
    //    }
    //}

    void BattleManager::battle() {
        while (battleState.battleOngoing) {
            if (battleState.playerTurn) {
                // Player's turn to attack
                battleState.playerPokemon.attack(battleState.wildPokemon);
            }
            else {
                // Wild Pokémon's turn to attack
                battleState.wildPokemon.attack(battleState.playerPokemon);
            }

            // Update the battle state after the turn
            updateBattleState();

            // Switch turns
            battleState.playerTurn = !battleState.playerTurn;

            Utility::waitForEnter();
        }

        handleBattleOutcome();
    }

    void BattleManager::updateBattleState() {
        if (battleState.playerPokemon.isFainted()) {
            battleState.battleOngoing = false;
        }
        else if (battleState.wildPokemon.isFainted()) {
            battleState.battleOngoing = false;
        }
    }

    //void BattleManager::handleBattleOutcome(Player& player, bool playerWon)
    //{
    //    if (playerWon) {
    //        cout << player.chosenPokemon.name << " is victorious! Keep an eye on your Pokémon's health.\n";
    //    }
    //    else {
    //        cout << "Oh no! " << player.chosenPokemon.name << " fainted! You need to visit the PokeCenter.\n";
    //        Utility::waitForEnter();
    //        cout << "Game Over.\n";
    //    }
    //}

    void BattleManager::handleBattleOutcome()
    {
        if (battleState.playerPokemon.isFainted()) {
            cout << battleState.playerPokemon.name << " has fainted! You lose the battle.\n";
        }
        else {
            cout << "You defeated the wild " << battleState.wildPokemon.name << " !\n";
        }
    }

}
