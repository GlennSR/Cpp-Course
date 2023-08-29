#include<iostream>
#include<string>

class Player{
// Attributes
private:
    std::string name;
    int health;
    int xp;

public:
    void set_name(std::string n){ name = n; };
    std::string get_name(){ return name; };

    Player(std::string name_val = "None", int health_val = 100, int xp_val = 0);
};

Player::Player(std::string name_val, int health_val, int xp_val) : name{name_val}, health{health_val}, xp{xp_val}{
    std::cout << "Three-args constructor\n";
};

int main()
{
    Player empty;
    Player frank{"Frank"};
    Player villain{"Villan", 120};
    Player hero("Hero", 100, 12);

    return 0;
}
