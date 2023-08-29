#include<iostream>
#include<string>

class Player{
// Attributes
private:
    std::string name;
    int health;
    int xp;

public:
    void set_name(std::string n){ name = n; }
    std::string get_name(){ return name; }
    int get_health() { return health; }
    int get_xp() { return xp; }

    Player(std::string name_val = "None", int health_val = 100, int xp_val = 0);
    // Copy Constructor
    Player(const Player &source);
    // Destructor
    ~Player() { std::cout << "Destructor called for: " << name << std::endl; }
};

Player::Player(std::string name_val, int health_val, int xp_val) : name{name_val}, health{health_val}, xp{xp_val}{
    std::cout << "Three-args constructor\n";
};

Player::Player(const Player &source) 
    // : name{source.name}, health{source.health}, xp{source.xp}
    : Player{source.name, source.health, source.xp}
    {
    std::cout << "Copy Constructor called for: " << source.name << std::endl;
}

// This function will call the Copy Constructor because it is a pass-by-value function
void display_player(Player p){
    std::cout << "Name: " << p.get_name() << std::endl;
    std::cout << "Health: " << p.get_health() << std::endl;
    std::cout << "XP: " << p.get_xp() << std::endl;
}

int main()
{
    Player empty;
    std::cout << std::endl;
    Player my_new_player{empty};
    std::cout << std::endl;
    display_player(empty);

    // Player frank{"Frank"};
    // Player villain{"Villan", 120};
    // Player hero("Hero", 100, 12);

    return 0;
}
