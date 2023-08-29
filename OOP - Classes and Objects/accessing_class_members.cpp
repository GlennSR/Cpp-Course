#include<iostream>
#include<vector>

using namespace std;

class Player{
    // Attributes
    public:
        string name;
        int health {100};
        int xp {0};

        // Methods
        void talk(string s){ cout << name << " says " << s << endl;};
        bool is_dead();
};

class Account{
    public: 
        // Atributes
        string name;
        double balance{};

        // Methods
        bool deposit(double bal) { balance += bal; cout << "In deposit" << endl; return 0;};
        bool withdraw(double bal){ balance -= bal; cout << "In withdraw" << endl; return 0;};
};

int main()
{
    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hi, there");

    // With Dynamic Allocation
    Player *enemy = new Player;
    (*enemy).name = "enemy";
    (*enemy).health = 100;
    // or
    enemy -> xp = 15;
    enemy -> talk("I'll destroy you");

    Account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 5000.0;

    frank_account.deposit(1000.00);
    frank_account.withdraw(500.00);

    return 0;
}
