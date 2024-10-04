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
using namespace std;

int main()
{
    string player_name;
    string chosen_pokemon;

    // Ask the player for their name
    cout << "Trainer! What is your name? ";
    cin >> player_name;  // Read the player's name

    // Respond back with a congratulatory message
    cout << "Congratulations, " << player_name << "! You're officially in the Pokémon world now!" << endl;
    cout << "Great start, Trainer! Your adventure begins here!" << endl;

    cout << "Welcome to the world of Pokémon! I am Professor Oak." << endl;
    cout << "Today is a momentous day you’ll be choosing your very first Pokémon."  << endl;
    cout << "Every great Trainer remembers this moment for the rest of their lives."  << endl;
    cout << "So, choose wisely, young one!" << endl;

    cout << "Here are your options:" << endl;
    cout << "1. Charmander" << endl;
    cout << "2. Bulbasaur " << endl;
    cout << "3. Squirtle" << endl;

    int playerChoice;
    //Capture the player's choice
    cout << "Which Pokémon would you like to choose? Enter 1, 2, or 3: " << endl;
    cin >> playerChoice;

    //Respond based on player choice
    switch (playerChoice)
    {
        case 1:
            chosen_pokemon = "Charmander";
            cout << "You chose Charmander!  A fiery and brave companion." << endl;
            cout << "Professor Oak: Charmander’s fire will light the path of your journey!" << endl;
            break;

        case 2:
            chosen_pokemon = "Bulbasaur";
            cout << "You chose Bulbasaur! A calm and wise choice." << endl;
            cout << "Professor Oak: Bulbasaur will grow strong, just like your bond with it." << endl;
            break;

        case 3:
            chosen_pokemon = "Squirtle";
            cout << "You chose Squirtle! A loyal and dependable friend" << endl;
            cout << "Professor Oak: Squirtle's water will wash away any obstacles in your way!" << endl;
            break;

        default :
            cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose "
                "for you..." << endl;
            chosen_pokemon = "Pikachu"; // Default if no valid choice is made
            cout << "Professor Oak: Just kidding! Let's go with Pikachu, the "
                "surprise guest!" << endl;

            break;
    }

    cout << "Professor Oak: " << chosen_pokemon << " and you, "
        << player_name << ", are going to be the best of friends!" << endl;
    cout << "Professor Oak: Your journey begins now! Get ready to explore "
        "the vast world of Pokemon!" << endl;

    return 0;
}

















