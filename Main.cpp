// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

#include "PokemonChoice.hpp"
#include "PokemonType.hpp"
#include "Utility.hpp"
#include <iostream>
#include <limits> // Include this header to use numeric_limits
#include<string>
using namespace std;

#include "Player.hpp"

class ProfessorOak {
    public :
    string name;

    //Parameterized constructor
    ProfessorOak(string p_name)
    {
        name = p_name;
    }
    
    //
    void greetPlayer(Player& player)
    {
        cout << name << ": Hello there! Welcome to the world of Pokémon!" << endl;
        Utility::waitForEnter();
        cout << name << ": I am Professor Oak. People call me the Pokemon Professor" << endl;
        Utility::waitForEnter();
        cout << name << ": But enough about me. Let's talk about you!" << endl;
        Utility::waitForEnter();
    }

    void offerPokemonChoices(Player& player)
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
        cout << name << ": Which Pokémon would you like to choose? Enter 1, 2, or 3: " << endl;
        cin >> playerChoice;

        player.choosePokemon(playerChoice);
        Utility::waitForEnter();
    }

    void explainMainQuest(Player& player)
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
        cout << name << ": Remember, you can only carry a limited number of Pokémon. Choose wisely who you want on your team! "<< player.name << "Piece of cake, right?"<< endl;
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
};

void gameLoop(Player& player)
{
    int choice;
    bool keepPlaying = true;

    while (keepPlaying == true)
    {
        // Clear console before showing options
        Utility::clearConsole();

        // Display options to the player
        cout << "What would you like to do next, " << player.name << "?" << endl;
        cout << "1. Battle Wild Pokémon" << endl;
        cout << "2. Visit PokeCenter" << endl;
        cout << "3. Challenge Gyms" << endl;
        cout << "4. Enter Pokémon League" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        Utility::clearInputBuffer(); // Clear the input buffer

        switch (choice)
        {
        case 1:
            cout << "You look around... but all the wild Pokemon are on vacation. Maybe try again later?" << endl;
            break;
        case 2:
            cout << "You head to the PokeCenter, but Nurse Joy is on vacation! Come back later." << endl;
            break;
        case 3:
            cout << "You challenged a Gym Leader, but they’re too busy drinking coffee right now. Maybe later!" << endl;
            break;
        case 4:
            cout << "You tried to enter the Pokémon League, but the guard said your outfit isn’t fashionable enough." << endl;
            break;
        case 5:
            cout << "You try to quit, but Professor Oak's voice echoes: "
                "'There's no quitting in Pokémon training!'\n";
            cout << "Are you sure you want to quit? (y/n): ";
            char quitChoice;
            cin >> quitChoice;
            if (quitChoice == 'y' || quitChoice == 'Y') {
                keepPlaying = false; // Exit the game loop
            }
            break;
        default:
            cout << "Oops! That's not a valid choice. Try again." << endl;
            break;
        }

        Utility::waitForEnter();
    }

    cout << "Goodbye, " << player.name << "! Thanks for playing!" << endl;
}

int main()
{
    //Using parameterized constructor
    Pokemon charmander("Charmander", PokemonType::FIRE, 100);

    // Creating Objects
    ProfessorOak professor("Professor Oak");
    Player player("Ash", charmander);

    // Greet the player and offer Pokemon choices 
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    // Explain the main quest
    professor.explainMainQuest(player);

    // Start the main game loop
    gameLoop(player);

    return 0;
}

















