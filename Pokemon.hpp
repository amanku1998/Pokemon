#include<string>
enum class PokemonType;
using namespace std;

class Pokemon {
public:
    int attackPower;        // New attribute for attack power

    string name;
    PokemonType type;
    int health;         // Represents the current HP
    int maxHealth;      // Represents the maximum HP

    //Default constructor
    Pokemon();

    //Parameterized constructor
    Pokemon(string p_name, PokemonType p_type, int p_maxHealth);

    //Copy constructor
    Pokemon(const Pokemon& other);

    //Destructor
    ~Pokemon();

    void attack(Pokemon& target);

    void TakeDamage(int damage);      // Method to reduce HP

    bool isFainted() const;       // Method to check if the Pokemon has fainted

    void heal();
};
