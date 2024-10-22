#pragma once

#include "../../include/Character/Player/Player.hpp" // Correct path to Player.hpp
//#include "../../include/Battle/BattleManager.hpp" // Correct path to Player.hpp
#include "../../include/Pokemon/Grass.hpp"

// class Player;
namespace N_Main
{
	using namespace N_Pokemon;
	using namespace N_Character::N_Player;

	//class Player;

	class Game {
	private:
		Grass forestGrass;
	public:
		Game();
		void gameLoop(Player &player);
		void visitPokeCenter(Player &player);
	};
}
