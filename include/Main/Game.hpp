#pragma once

#include "../../include/Character/Player/Player.hpp" // Correct path to Player.hpp
#include "../../include/Battle/BattleManager.hpp" // Correct path to Player.hpp
#include "../../include/Pokemon/Grass.hpp"
using namespace N_Player;
using namespace N_Battle;

class Player;

namespace N_Game {

	class Game {
	private:
		Grass forestGrass;
	public:
		Game();
		void gameLoop(N_Player::Player& player);
		void visitPokeCenter(N_Player::Player& player);
	};

}
