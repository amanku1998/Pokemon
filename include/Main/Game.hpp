#pragma once

#include "../../include/Character/Player/Player.hpp" // Correct path to Player.hpp
//#include "../../include/Pokemon/Pokemon.hpp" 
#include "../../include/Pokemon/Grass.hpp"

// class Player;
namespace N_Main
{
	using namespace N_Pokemon;
	//using namespace N_Character::N_Player;

	class Game {
	private:
		Grass forestGrass;
		Pokemon* wildPokemon;

	public:
		Game();
		~Game();
		void gameLoop(N_Character::N_Player::Player* player);
		void visitPokeCenter(N_Character::N_Player::Player* player);
	};
}
