#include "Utility.hpp"
#include <iostream>
#include <limits>
using namespace std;

void Utility::clearConsole() {
    // Platform-specific clear console command
#ifdef _WIN32
    system("cls");
#else
    (void)system("clear");
#endif
}

// Function to wait for user to press Enter
void Utility::waitForEnter() {
    cin.get();    // Wait for Enter key
}

void Utility::clearInputBuffer() {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}