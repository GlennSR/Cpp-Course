#include<iostream>
#include<string>

using namespace std;

class Player{
// Attributes
private:
    string name;
    int health;
    int xp;

public:
    void set_name(string n){ name = n; };
    string get_name(){ return name; };
    int get_xp(){return xp;};

    // Overloaded Constructors
    Player(){ cout << "No args constructor called\n"; }
    Player(string name){ cout << "String arg constructor called\n"; };
    Player(string name, int health, int xp){ cout << "Three args constructor called\n"; };

    // Destructor (no need to overload the Destructor method)
    ~Player(){ cout << "Destructor called for " << name << endl; };
};

int main()
{
    {
        Player slayer;
        slayer.set_name("Slayer");
    }

    {
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villain("Villan", 100, 12);
        villain.set_name("Villain");
    }

    Player *enemy = new Player();
    enemy->set_name("Enemy");

    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("Level Boss");

    delete enemy;
    delete level_boss;

    return 0;
}
