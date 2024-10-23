#pragma once
#include "../../include/Battle/BattleManager.hpp"
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Battle {

    using namespace std;
    using namespace N_Utility;
    using namespace N_Pokemon;

    BattleState BattleManager::battleState;

    void BattleManager::startBattle(Player* player, N_Pokemon::Pokemon* wildPokemon) {
        battleState.playerPokemon = player->chosenPokemon;
        battleState.wildPokemon = wildPokemon;
        battleState.playerTurn = true;      // Player starts first
        battleState.battleOngoing = true;

        cout << "A wild " << wildPokemon->name << " appeared!\n";
        // battle(player.chosenPokemon, wildPokemon);
        battle();
    }

    void BattleManager::stopBattle() { battleState.battleOngoing = false; }

    void BattleManager::battle() {
        while (battleState.battleOngoing) {
            if (battleState.playerTurn && battleState.playerPokemon->canAttack())
                // Player's turn to attack
                battleState.playerPokemon->selectAndUseMove(battleState.wildPokemon);
            else if(battleState.wildPokemon->canAttack())
                // Wild Pok�mon's turn to attack
                battleState.wildPokemon->selectAndUseMove(battleState.playerPokemon);

            // Update the battle state after the turn
            updateBattleState();

            // Switch turns
            battleState.playerTurn = !battleState.playerTurn;

            N_Utility::Utility::waitForEnter();
        }

        handleBattleOutcome();
    }

    void BattleManager::updateBattleState() {
        if (battleState.playerPokemon->isFainted()) {
            battleState.battleOngoing = false;
        }
        else if (battleState.wildPokemon->isFainted()) {
            battleState.battleOngoing = false;
        }
    }

    void BattleManager::handleBattleOutcome()
    {
        if (battleState.playerPokemon->isFainted()) {
            cout << battleState.playerPokemon->name << " has fainted! You lose the battle.\n";
        }
        else {
            cout << "You defeated the wild " << battleState.wildPokemon->name << " !\n";
        }
    }

}
