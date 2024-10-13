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
    ELECTRIC,
    NORMAL      //Added default constructor
};

class Pokemon {
    public :
    string name;
    PokemonType type;
    int health;

    //Default constructor
    Pokemon() {
        //
        name = "Pikachu";
        type = PokemonType::ELECTRIC;
        health = 10;
        cout << "A new Pokemon has been created with the default constructor!\n";
    }

    //Parameterized constructor
    Pokemon(string p_name, PokemonType p_type, int p_health) {
        name = p_name;
        type = p_type;
        health = p_health;
        cout << "A new Pokemon named " << name << " has been created!\n";
    }

    //Copy constructor
    Pokemon(const Pokemon &other) {
        name = other.name;
        type = other.type;
        health = other.health;
        cout << "A new Pokemon copied from " << other.name << "!\n";
    }

    void attack()
    {
        cout << name << "attacks with a powerful move!\n";
    }

    ~Pokemon() {
        //
        cout << name << " has been released" << endl;
    }
};

class Player{
    public:
    string name;
    Pokemon chosenPokemon;

    Player() {
        name = "Trainer";
        chosenPokemon = Pokemon(); // Using the default Pokemon constructor 
        cout << "A new player named " << name << " has been created!\n";
    }

    Player(string p_name, Pokemon p_chosenPokemon) {
        name = p_name;
        chosenPokemon = p_chosenPokemon; // Using the default Pokemon constructor 
        cout << "player " << name << " has been created!\n";
    }

    //Copy constructor
    Player(const Player& other) {
        name = other.name;
        chosenPokemon = other.chosenPokemon;
        cout << "A new player copied from " << other.name << "!\n";
    }

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
        default:   
            cout << "Professor Oak: Let's go with Pikachu." << endl;
            chosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100);
            break;
        }
        cout << "Player " << name << " chose " << chosenPokemon.name << "!\n";
    }
};

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
    //Using default constructor
    Pokemon defaultPokemon;
    //Using parameterized constructor
    Pokemon charmander("Charmander", PokemonType::FIRE, 100);

    cout << "Pokemon details" << endl;
    cout << "Pokemon Name :" << defaultPokemon.name<< " /Type :" << (int)defaultPokemon.type << " /Health :"<< defaultPokemon.health << endl;
    cout << "Pokemon Name :" << charmander.name << " /Type :" << (int)charmander.type << " /Health :" << charmander.health << endl;

    //Create pokemon
    Pokemon bulbasaur("Bulbasaur", PokemonType::GRASS, 100);

    Pokemon bulbasaurCopy = bulbasaur;

    cout << "Original Pokemon Health: " << bulbasaur.health << endl;
    cout << "Copied Pokemon Health: " << bulbasaurCopy.health << endl;

    //Increase bulbasaurCopy health value
    bulbasaurCopy.health = 80;

    cout << "After Modification:" << endl;
    cout << "Original Pokemon Health: " << bulbasaur.health << endl;
    cout << "Copied Pokemon Health: " << bulbasaurCopy.health << endl;

    //Test the destructor
    {
        Pokemon squirtle("Squirtle", PokemonType::WATER, 100);
    }

    // Creating Objects
    ProfessorOak professor("Professor Oak");

    Player player("Ash", charmander);

    // Greet the player and offer Pokemon choices 
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    cout << "Professor Oak: " << player.chosenPokemon.name << " and you, " << player.name << ", are going to be the best of friends!" << endl;
    cout << "Professor Oak: Your journey begins now! Get ready to explore "
        "the vast world of Pokemon!" << endl;

    return 0;
}

















