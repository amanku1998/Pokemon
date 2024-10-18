#include "../../include/Character/ProfessorOak.hpp"
#include "../../include/Character/Player/Player.hpp"
#include "../../include/Utility/Utility.hpp"
#include <iostream>
using namespace std;


//Parameterized constructor
ProfessorOak::ProfessorOak(string p_name)
{
    name = p_name;
}

//
void ProfessorOak::greetPlayer(Player &player)
{
    cout << name << ": Hello there! Welcome to the world of Pokémon!" << endl;
    Utility::waitForEnter();
    cout << name << ": I am Professor Oak. People call me the Pokemon Professor" << endl;
    Utility::waitForEnter();
    cout << name << ": But enough about me. Let's talk about you!" << endl;
    Utility::waitForEnter();
}

void ProfessorOak::offerPokemonChoices(Player& player)
{
    // Ask the player for their name
    cout << name << ": Trainer! What is your name? ";
    cin >> player.name;  // Read the player's name
    //getline(cin, player.name);

    // Respond back with a congratulatory message
    cout << name << ": Congratulations, " << player.name << "! You're officially in the Pokémon world now!" << endl;
    Utility::waitForEnter();
    cout << name << ": Great start, Trainer! Your adventure begins here!" << endl;
    Utility::waitForEnter();
    cout << name << ": Today is a momentous day you’ll be choosing your very first Pokémon." << endl;
    Utility::waitForEnter();
    cout << name << ": Every great Trainer remembers this moment for the rest of their lives." << endl;
    Utility::waitForEnter();
    cout << name << ": So, choose wisely, young one!" << endl;
    Utility::waitForEnter();

    cout << name << ": Here are your options:" << endl;
    cout << "1. Charmander - The fire type. A real hothead!" << endl;
    cout << "2. Bulbasaur - The grass type. Calm and collected!" << endl;
    cout << "3. Squirtle - The water type. Cool as a cucumber!" << endl;

    int playerChoice;
    //Capture the player's choice
    cout << name << ": Which Pokémon would you like to choose? Enter the number of your choice: " << endl;
    cin >> playerChoice;

    player.choosePokemon(playerChoice);
    Utility::waitForEnter();
}

void ProfessorOak::explainMainQuest(Player &player)
{
    // Clear the console
    Utility::clearConsole();

    cout << name << ": Ah " << player.name << ", let me tell you about your grand adventure that's about to unfold!" << endl;
    Utility::waitForEnter();
    cout << name << ": Becoming a Pokémon Master is no easy task. It demands courage, strategy, and sometimes a little bit of luck." << endl;
    Utility::waitForEnter();
    cout << name << ": Your main mission is to collect all the Pokémon Badges and defeat the Pokémon League. Only then can you challenge the Elite Four   and aim for the    title of Champion. " << endl;
    Utility::waitForEnter();
    cout << player.name << ": Wait, isn’t that just like every other Pokémon game?" << endl;
    Utility::waitForEnter();
    cout << name << ": No breaking the fourth wall, " << player.name << " !This is serious business." << endl;
    Utility::waitForEnter();
    cout << name << ": To achieve this, you must capture new Pokémon, battle wild creatures, challenge gym leaders, and keep your Pokémon healthy at the PokeCenter." << endl;
    Utility::waitForEnter();
    cout << name << ": Remember, you can only carry a limited number of Pokémon. Choose wisely who you want on your team! " << player.name << "Piece of cake, right?" << endl;
    Utility::waitForEnter();
    cout << name << ": Ha! That’s what everyone thinks. But the path to becoming a Champion is filled with obstacles. Lose a battle, and it’s back to the start." << endl;
    Utility::waitForEnter();
    cout << name << ": So, what do you say? Are you ready to embark on this epic journey to become the next Pokémon Champion? " << player.name << " Ready as I’ll ever be, Professor!" << endl;
    Utility::waitForEnter();
    cout << name << ": That’s the spirit! Now, your journey begins. Remember, it’s not just about battling—it’s about forming bonds with your Pokémon. Go, Trainer, the world of Pokémon awaits you!" << endl;
    Utility::waitForEnter();
    cout << name << ": Oh, and about the actual game loop… let’s just pretend I didn’t forget to set it up. Onwards!" << endl;
    Utility::waitForEnter();
}