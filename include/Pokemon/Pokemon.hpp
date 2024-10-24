#pragma once
#include <string>
#include <vector>
#include "Move.hpp"
#include "../../include/StatusEffect/IStatusEffect.hpp"
#include "../../include/StatusEffect/StatusEffectType.hpp"
using namespace std;
using namespace N_Pokemon::N_StatusEffects;

namespace N_Pokemon {

    struct Move;
    enum class PokemonType;

    class Pokemon {
    public:
        string name;
        PokemonType type;
        int health;         // Represents the current HP
        int maxHealth;      // Represents the maximum HP
        vector<Move> moves; // Store the list of moves
        ISatusEffect *appliedEffect;

        //Default constructor
        Pokemon();
        //Parameterized constructor
        Pokemon(string p_name, PokemonType p_type, int p_health, vector<Move>);
        //Copy constructor
        Pokemon(Pokemon* other);

        bool isFainted() const;       // Method to check if the Pokemon has fainted
        void heal();
        virtual void attack(Move selectedMove, Pokemon* target);
        void takeDamage(int damage);      // Method to reduce HP

        void selectAndUseMove(Pokemon* target);
        void reduceAttackPower(int reduced_damage);
        bool canAttack();
        bool canApplyEffect();
        void applyEffect(StatusEffectType effectToApply);
        void clearEffect();

    protected:
        // Base implementation for selecting and using a move
        void printAvailableMoves();
        int selectMove();
        void useMove(Move selectedMove, Pokemon* target);
    };

}