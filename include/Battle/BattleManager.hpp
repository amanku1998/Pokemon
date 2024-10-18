#include "BattleState.hpp"
class Player;
class Pokemon;

class BattleManager {
public :
	void startBattle(Player &player, Pokemon &wildPokemon);

private:
	BattleState battleState;
	//void battle(Pokemon &playerPokemon, Pokemon &wildPokemon);
	void battle();
	void updateBattleState();
	//void handleBattleOutcome(Player &player, bool playerWon);
	void handleBattleOutcome();
};
