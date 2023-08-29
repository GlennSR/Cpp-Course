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

    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};

// Using Initialization Lists
Player::Player() : name{"None"}, health{100}, xp{0}{};
Player::Player(std::string name_val) : name{name_val}, health{100}, xp{0}{};
Player::Player(std::string name_val, int health_val, int xp_val) : name{name_val}, health{health_val}, xp{xp_val}{};

int main()
{
    Player frank;
    std::cout << "Name: " + frank.get_name() << std::endl;

    Player hero("Hero", 100, 12);
    std::cout << "Name: " + hero.get_name() << std::endl;

    return 0;
}
