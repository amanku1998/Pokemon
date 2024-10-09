// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#include <iostream>
#include<string>
using namespace std;

enum class PokemonChoice
{
    CHARMANDER = 1,
    BULBASAUR,
    SQUIRTLE,
    InvalidChoice
};

enum class PokemonType
{
    FIRE,
    GRASS,
    WATER,
    ELECTRIC
};

class Pokemon {
    public :
    string name;
    PokemonType type;
    int health;

    //Created 2 constructors
    Pokemon() {
        //
    }

    Pokemon(string p_name, PokemonType p_type, int p_health) {
        name = p_name;
        type = p_type;
        health = p_health;
    }

    void attack()
    {
        cout << name << "attacks with a powerful move!\n";
    }
};

class Player{
public:
    string name;
    Pokemon chosenPokemon;

    void choosePokemon(int choice)
    {
        //Respond based on player choice
        switch ((PokemonChoice)choice)
        {
        case PokemonChoice::CHARMANDER :     chosenPokemon = Pokemon("Charmander", PokemonType::FIRE , 100);
            cout << "You chose Charmander!  A fiery and brave companion." << endl;
            cout << "Professor Oak: Charmander’s fire will light the path of your journey!" << endl;
            break;
        case PokemonChoice::BULBASAUR  :     chosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100);
            cout << "You chose Bulbasaur! A calm and wise choice." << endl;
            cout << "Professor Oak: Bulbasaur will grow strong, just like your bond with it." << endl;
            break;
        case PokemonChoice::SQUIRTLE   :     chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100);
            cout << "You chose Squirtle! A loyal and dependable friend" << endl;
            cout << "Professor Oak: Squirtle's water will wash away any obstacles in your way!" << endl;
            break;
        default:   chosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100);
            //cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose "
            //    "for you..." << endl;
            //cout << "Professor Oak: Just kidding! Let's go with Pikachu." << endl;
            break;
        }
    }
};

class ProfessorOak {
    public :
    string name;
    
    void greetPlayer(Player& player)
    {
        cout << name << ": Hello there! Welcome to the world of Pokémon!" << endl;
        cout << name << ": I am Professor Oak. People call me the Pokemon Professor" << endl;
        cout << name << ": But enough about me. Let's talk about you!" << endl;
    }

    void offerPokemonChoices(Player& player)
    {
        //string player_name;
        //PokemonChoice chosen_pokemon = PokemonChoice::InvalidChoice;

        // Ask the player for their name
        cout << name << ": Trainer! What is your name? ";
        cin >> player.name;  // Read the player's name
        //getline(cin, player.name);

        // Respond back with a congratulatory message
        cout << name << ": Congratulations, " << player.name << "! You're officially in the Pokémon world now!" << endl;
        cout << name << ": Great start, Trainer! Your adventure begins here!" << endl;
        cout << name << ": Today is a momentous day you’ll be choosing your very first Pokémon." << endl;
        cout << name << ": Every great Trainer remembers this moment for the rest of their lives." << endl;
        cout << name << ": So, choose wisely, young one!" << endl;

        cout << name << ": Here are your options:" << endl;
        cout << "1. Charmander - The fire type. A real hothead!" << endl;
        cout << "2. Bulbasaur - The grass type. Calm and collected!" << endl;
        cout << "3. Squirtle - The water type. Cool as a cucumber!" << endl;

        int playerChoice;
        //Capture the player's choice
        cout << name << ": Which Pokémon would you like to choose? Enter 1, 2, or 3: " << endl;
        cin >> playerChoice;

        player.choosePokemon(playerChoice);
    }
};

int main()
{
    // Creating Objects
    ProfessorOak professor;
    Pokemon placeholderPokemon;
    Player player;

    //Set default pokemon name
    placeholderPokemon.name = "Pikachu";
    placeholderPokemon.type = PokemonType::ELECTRIC;
    placeholderPokemon.health = 40;

    //Assigning Values to player attributes
    player.name = "Trainer";

    //Assigning Values to ProfessorOak attributes
    professor.name = "Professor Oak";

    // Greet the player and offer Pokemon choices 
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    cout << "Professor Oak: " << player.chosenPokemon.name << " and you, " << player.name << ", are going to be the best of friends!" << endl;
    cout << "Professor Oak: Your journey begins now! Get ready to explore "
        "the vast world of Pokemon!" << endl;

    return 0;
}

















