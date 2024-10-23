#pragma once

#include "../../include/Character/Player/Player.hpp" // Correct path to Player.hpp
#include "../../include/Pokemon/Pokemon.hpp" 
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
		Pokemon* wildPokemon;

	public:
		Game();
		~Game();
		void gameLoop(Player* player);
		void visitPokeCenter(Player* player);
	};
}
