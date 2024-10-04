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
    int playerChoice;

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
    cout << "1. Bulbasaur" << endl;
    cout << "2. Charmander" << endl;
    cout << "3. Squirtle" << endl;

    //Capture the player's choice
    cout << "Which Pokémon would you like to choose? Enter 1, 2, or 3: " << endl;
    cin >> playerChoice;

    //Respond based on player choice
    if (playerChoice == 1){
        cout << "You chose Bulbasaur! A wise choice." << endl;
    }
    else if (playerChoice == 2){
        cout << "You chose Charmander! A fiery choice." << endl;
    }
    else if (playerChoice == 3){
        cout << "You chose Squirtle! A cool choice." << endl;
    }
    else{
        cout << "Invalid choice. Please restart the game." << endl;
    }

    cout << "Professor Oak: Ah, an excellent choice!" << endl;
    cout << "But beware, Trainer," << endl;
    cout << "this is only the beginning." << endl;
    cout << "Your journey is about to unfold."  << endl;
    cout << "Now let’s see if you’ve got what it takes to keep going!"  << endl;
    cout << "Good luck, and remember… Choose wisely!" << endl;

    return 0;
}

















