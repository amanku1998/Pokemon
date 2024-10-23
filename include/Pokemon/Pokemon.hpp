#pragma once
#include <string>
#include <vector>
using namespace std;

namespace N_Pokemon {

    struct Move;
    enum class PokemonType;

    class Pokemon {
    public:
        string name;
        PokemonType type;
        int health;         // Represents the current HP
        int maxHealth;      // Represents the maximum HP
        int attackPower;        // New attribute for attack power

        vector<Move> moves; // Store the list of moves

        //Default constructor
        Pokemon();
        //Parameterized constructor
        Pokemon(string p_name, PokemonType p_type, int p_health, int p_attackPower);
        //Copy constructor
        Pokemon(const Pokemon* other);

        bool isFainted() const;       // Method to check if the Pokemon has fainted
        void heal();
        virtual void attack(Move selectedMove, Pokemon* target)=0;
        void TakeDamage(int damage);      // Method to reduce HP

    protected:
        // Base implementation for selecting and using a move
        void selectAndUseMove(Pokemon* target);

        void printAvailableMoves();

        int selectMove();

        void useMove(Move selectedMove, Pokemon* target);
    };

}