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

// In the delegating constructor we call the already defined three-args constructor inside the other constructors, so we don't repeat code
Player::Player() : Player{"None", 100, 0}{
    std::cout << "No-args constructor\n";
};
Player::Player(std::string name_val) : Player{name_val, 100, 0}{
    std::cout << "One-arg constructor\n";
};
Player::Player(std::string name_val, int health_val, int xp_val) : name{name_val}, health{health_val}, xp{xp_val}{
    std::cout << "Three-args constructor\n";
};

int main()
{
    Player empty;
    Player frank{"Frank"};
    Player hero("Hero", 100, 12);

    return 0;
}
