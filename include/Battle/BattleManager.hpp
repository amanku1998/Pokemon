//#pragma once
//#include "../Battle/BattleState.hpp"
//#include "../../include/Character/Player/Player.hpp" // Correct path to Player.hpp
////#include "../../include/Pokemon/Pokemon.hpp"
//
//namespace N_Battle {
//
//	class Pokemon;
//	using namespace N_Character::N_Player;
//	using namespace N_Pokemon;
//
//	class BattleManager {
//	public:
//		void startBattle(Player* player, Pokemon* wildPokemon);
//		static void stopBattle();
//
//	private:
//		static BattleState battleState;
//
//		//void battle(Pokemon &playerPokemon, Pokemon &wildPokemon);
//		void battle();
//		void updateBattleState();
//		//void handleBattleOutcome(Player &player, bool playerWon);
//		void handleBattleOutcome();
//	};
//
//}


#pragma once
#include "../Battle/BattleState.hpp"
#include "../Character/Player/Player.hpp"

namespace N_Battle
{
    class Pokemon;
    using namespace N_Character::N_Player;
    using namespace N_Pokemon;

    class BattleManager {
    public:
        void startBattle(Player* player, N_Pokemon::Pokemon* wildPokemon);
        static void stopBattle();
        static BattleState battleState;

    private:


        void battle();
        void handleBattleOutcome();
        void updateBattleState();
    };
}