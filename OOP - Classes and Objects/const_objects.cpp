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

    // Declaring the method as const
    std::string get_name() const { return name; };

    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};

// In the delegating constructor we call the already defined three-args constructor inside the other constructors, so we don't repeat code
Player::Player() : Player{"None", 100, 0}{};

Player::Player(std::string name_val) : Player{name_val, 100, 0}{};

Player::Player(std::string name_val, int health_val, int xp_val) : name{name_val}, health{health_val}, xp{xp_val}{};

void display_player_name(const Player &p){
    // In order to this function work, we have to set the get_name() method to const,
    // so the compiler knows that is a method that won't change the object's attributes 
    std::cout << p.get_name() << std::endl;
}

int main()
{
    const Player frank{"Frank"};
    Player hero("Hero", 100, 12);

    std::cout << frank.get_name() << std::endl;

    display_player_name(frank);
    display_player_name(hero);

    return 0;
}
