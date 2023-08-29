#include<iostream>
#include<vector>

using namespace std;

class Player{
    // Attributes
    string name;
    int health {100};
    int xp {0};

    // Methods
    void talk(string);
    bool is_dead();
};

class Account{
    // Atributes
    string name;
    double balance{};

    // Methods
    bool deposit(double);
    bool withdraw(double);
};

int main()
{
    Player frank, hero;

    Player players[] {frank, hero};
    // or
    vector<Player> player_vec {frank};
    player_vec.push_back(hero);

    Player *enemy = new Player;
    delete enemy;

    Account frank_account;
    Account jim_account;
    
    return 0;
}
