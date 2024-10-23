#pragma once
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Pokemon/PokemonChoice.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../../include/Pokemon/Pokemons/Charmander.hpp"
#include "../../include/Pokemon/Pokemons/Balbasaur.hpp"
#include "../../include/Pokemon/Pokemons/Squirtle.hpp"
#include "../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Character
{
    namespace N_Player {

        using namespace N_Utility;
        using namespace N_Pokemon;
        using namespace N_Pokemons;

        Player::Player() {
            name = "Trainer";
        }

        Player::Player(string p_name) {
            name = p_name;
        }

        void Player::choosePokemon(int choice)
        {
            //Respond based on player choice
            switch ((PokemonChoice)choice)
            {
            case PokemonChoice::CHARMANDER:     
                chosenPokemon = new Charmander();
                cout << "You chose Charmander!  A fiery and brave companion." << endl;
                cout << "Professor Oak: Charmander’s fire will light the path of your journey!" << endl;
                break;
            case PokemonChoice::BULBASAUR:     
                //chosenPokemon = new Pokemon("Bulbasaur", PokemonType::GRASS, 100, 8);
                chosenPokemon = new Balbasaur();
                cout << "You chose Bulbasaur! A calm and wise choice." << endl;
                cout << "Professor Oak: Bulbasaur will grow strong, just like your bond with it." << endl;
                break;
            case PokemonChoice::SQUIRTLE:     
                //chosenPokemon = new Pokemon("Squirtle", PokemonType::WATER, 100, 9);
                chosenPokemon = new Squirtle();
                cout << "You chose Squirtle! A loyal and dependable friend" << endl;
                cout << "Professor Oak: Squirtle's water will wash away any obstacles in your way!" << endl;
                break;
            default:
                chosenPokemon = new Pikachu();
                break;
            }
            cout << "Player " << name << " chose " << chosenPokemon->name << "!\n";
            Utility::waitForEnter(); // Wait for user to press Enter before proceeding
        }
    }

}