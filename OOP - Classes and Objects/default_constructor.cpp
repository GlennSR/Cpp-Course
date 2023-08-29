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

    Player(){
        name = "None";
        health = 100;
        xp = 0;
    }
    Player(string name_val, int health_val, int xp_val){
        name = name_val;
        health = health_val;
        xp = xp_val;
    }

};

int main()
{
    Player frank;
    cout << "Name: " + frank.get_name() << endl;

    Player hero("Hero", 100, 12);
    cout << "Name: " + hero.get_name() << endl;

    return 0;
}
