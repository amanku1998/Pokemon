#pragma once
#include "../../include/Character/Player/Player.hpp" // Correct path to Player.hpp
#include "../Battle/BattleState.hpp"

namespace N_Battle {

	class Pokemon;
	using namespace N_Character::N_Player;
	using namespace N_Pokemon;

	class BattleManager {
	public:
		void startBattle(Player* player, N_Pokemon::Pokemon* wildPokemon);
		static void stopBattle();
		static BattleState battleState;

	private:
		
		//void battle(Pokemon &playerPokemon, Pokemon &wildPokemon);
		void battle();
		void updateBattleState();
		//void handleBattleOutcome(Player &player, bool playerWon);
		void handleBattleOutcome();
	};

}