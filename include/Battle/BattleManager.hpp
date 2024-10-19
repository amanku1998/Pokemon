#pragma once
#include "../../include/Character/Player/Player.hpp" // Correct path to Player.hpp
#include "BattleState.hpp"
using namespace N_Player;
using namespace N_Pokemon;

class Player;
class Pokemon;

namespace N_Battle {

	class BattleManager {
	public:
		void startBattle(N_Player::Player& player, N_Pokemon::Pokemon& wildPokemon);

	private:
		BattleState battleState;
		//void battle(Pokemon &playerPokemon, Pokemon &wildPokemon);
		void battle();
		void updateBattleState();
		//void handleBattleOutcome(Player &player, bool playerWon);
		void handleBattleOutcome();
	};

}