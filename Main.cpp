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

void clearconsole() {
    // Platform-specific clear console command
#ifdef _WIN32
    system("cls");
#else
    (void)system("clear");
#endif
}

// Function to wait for user to press Enter
void waitForEnter() {
    cin.get();    // Wait for Enter key
}

enum class PokemonChoice
{
    CHARMANDER = 1,
    BULBASAUR,
    SQUIRTLE,
    PIKACHU // Default choice
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
        name = "Unknown";
        type = PokemonType::NORMAL;
        health = 50;
    }

    //Parameterized constructor
    Pokemon(string p_name, PokemonType p_type, int p_health) {
        name = p_name;
        type = p_type;
        health = p_health;
    }

    //Copy constructor
    Pokemon(const Pokemon &other) {
        name = other.name;
        type = other.type;
        health = other.health;
    }

    void attack()
    {
        cout << name << "attacks with a powerful move!\n";
    }

    //Destructor
    ~Pokemon() {
        //
    }
};

class Player{
    public:
    string name;
    Pokemon chosenPokemon;

    Player() {
        name = "Trainer";
        chosenPokemon = Pokemon(); // Using the default Pokemon constructor 
    }

    Player(string p_name, Pokemon p_chosenPokemon) {
        name = p_name;
        chosenPokemon = p_chosenPokemon; // Using the default Pokemon constructor 
    }

    //Copy constructor
    Player(const Player& other) {
        name = other.name;
        chosenPokemon = other.chosenPokemon;
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
        waitForEnter(); // Wait for user to press Enter before proceeding
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
        waitForEnter();
        cout << name << ": I am Professor Oak. People call me the Pokemon Professor" << endl;
        waitForEnter();
        cout << name << ": But enough about me. Let's talk about you!" << endl;
        waitForEnter();
    }

    void offerPokemonChoices(Player& player)
    {
        // Ask the player for their name
        cout << name << ": Trainer! What is your name? ";
        cin >> player.name;  // Read the player's name
        //getline(cin, player.name);

        // Respond back with a congratulatory message
        cout << name << ": Congratulations, " << player.name << "! You're officially in the Pokémon world now!" << endl;
        waitForEnter();
        cout << name << ": Great start, Trainer! Your adventure begins here!" << endl;
        waitForEnter();
        cout << name << ": Today is a momentous day you’ll be choosing your very first Pokémon." << endl;
        waitForEnter();
        cout << name << ": Every great Trainer remembers this moment for the rest of their lives." << endl;
        waitForEnter();
        cout << name << ": So, choose wisely, young one!" << endl;
        waitForEnter();

        cout << name << ": Here are your options:" << endl;
        cout << "1. Charmander - The fire type. A real hothead!" << endl;
        cout << "2. Bulbasaur - The grass type. Calm and collected!" << endl;
        cout << "3. Squirtle - The water type. Cool as a cucumber!" << endl;

        int playerChoice;
        //Capture the player's choice
        cout << name << ": Which Pokémon would you like to choose? Enter 1, 2, or 3: " << endl;
        cin >> playerChoice;

        player.choosePokemon(playerChoice);
        waitForEnter();
    }

    void explainMainQuest(Player& player)
    {
        cout << name << ": Ah " << player.name << ", let me tell you about your grand adventure that's about to unfold!" << endl;
        waitForEnter();
        cout << name << ": Becoming a Pokémon Master is no easy task. It demands courage, strategy, and sometimes a little bit of luck." << endl;
        waitForEnter();
        cout << name << ": Your main mission is to collect all the Pokémon Badges and defeat the Pokémon League. Only then can you challenge the Elite Four   and aim for the    title of Champion. " << endl;
        waitForEnter();
        cout << player.name << ": Wait, isn’t that just like every other Pokémon game?" << endl;
        waitForEnter();
        cout << name << ": No breaking the fourth wall, " << player.name << " !This is serious business." << endl;
        waitForEnter();
        cout << name << ": To achieve this, you must capture new Pokémon, battle wild creatures, challenge gym leaders, and keep your Pokémon healthy at the PokeCenter." << endl;
        waitForEnter();
        cout << name << ": Remember, you can only carry a limited number of Pokémon. Choose wisely who you want on your team! "<< player.name << "Piece of cake, right?"<< endl;
        waitForEnter();
        cout << name << ": Ha! That’s what everyone thinks. But the path to becoming a Champion is filled with obstacles. Lose a battle, and it’s back to the start." << endl;
        waitForEnter();
        cout << name << ": So, what do you say? Are you ready to embark on this epic journey to become the next Pokémon Champion? " << player.name << " Ready as I’ll ever be, Professor!" << endl;
        waitForEnter();
        cout << name << ": That’s the spirit! Now, your journey begins. Remember, it’s not just about battling—it’s about forming bonds with your Pokémon. Go, Trainer, the world of Pokémon awaits you!" << endl;
        waitForEnter();
        cout << name << ": Oh, and about the actual game loop… let’s just pretend I didn’t forget to set it up. Onwards!" << endl;
        waitForEnter();
    }
};

void gameLoop(Player& player)
{
    int choice;
    bool keepPlaying = true;

    while (keepPlaying == true)
    {
        // Clear console before showing options
        clearconsole();

        // Display options to the player
        cout << "What would you like to do next, " << player.name << "?" << endl;
        cout << "1. Battle Wild Pokémon" << endl;
        cout << "2. Visit PokeCenter" << endl;
        cout << "3. Challenge Gyms" << endl;
        cout << "4. Enter Pokémon League" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        // Clear the newline character left in the buffer after cin >> choice
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

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

        waitForEnter();
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

















