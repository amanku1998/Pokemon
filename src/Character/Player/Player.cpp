#pragma once
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Pokemon/PokemonChoice.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../../include/Utility/Utility.hpp"
#include <iostream>
using namespace std;


namespace N_Character
{
    namespace N_Player {

        using namespace N_Utility;
        using namespace N_Pokemon;
        using namespace N_Pokemons;

        Player::Player() {
            name = "Trainer";
            chosenPokemon = Pokemon(); // Using the default Pokemon constructor 
        }

        Player::Player(string p_name, Pokemon p_chosenPokemon) {
            name = p_name;
            chosenPokemon = p_chosenPokemon; // Using the default Pokemon constructor 
        }


        void Player::choosePokemon(int choice)
        {
            //Respond based on player choice
            switch ((PokemonChoice)choice)
            {
            case PokemonChoice::CHARMANDER:     chosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100, 10);
                cout << "You chose Charmander!  A fiery and brave companion." << endl;
                cout << "Professor Oak: Charmander’s fire will light the path of your journey!" << endl;
                break;
            case PokemonChoice::BULBASAUR:     chosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100, 8);
                cout << "You chose Bulbasaur! A calm and wise choice." << endl;
                cout << "Professor Oak: Bulbasaur will grow strong, just like your bond with it." << endl;
                break;
            case PokemonChoice::SQUIRTLE:     chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100, 9);
                cout << "You chose Squirtle! A loyal and dependable friend" << endl;
                cout << "Professor Oak: Squirtle's water will wash away any obstacles in your way!" << endl;
                break;
            default:
                //cout << "Professor Oak: Let's go with Pikachu." << endl;
                //chosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100, 12);

                chosenPokemon = Pikachu();
                break;
            }
            cout << "Player " << name << " chose " << chosenPokemon.name << "!\n";
            Utility::waitForEnter(); // Wait for user to press Enter before proceeding
        }
    }

}