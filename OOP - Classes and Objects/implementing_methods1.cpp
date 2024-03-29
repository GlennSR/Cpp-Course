#include<iostream>
#include<string>

using namespace std;

class Account{
    private:
        string name;
        double balance;

    public:
        // Methods declared inline
        void set_balance(double bal) { balance += bal; }
        double get_balance() { return balance; }

        // Methods declared outside the class declaration
        void set_name(string n);
        string get_name();
        bool deposit(double amount);
        bool withdraw(double amount);
};

void Account::set_name(string n){
    name = n;
}

string Account::get_name(){
    return name;
}

bool Account::deposit(double amount){
    // if verify amount
    balance += amount;
    return true;
}

bool Account::withdraw(double amount){
    if(balance -= amount >= 0){
        balance -= amount;
        return true;
    }
    else
        return false;
}

int main()
{
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);

    if(frank_account.deposit(200.0))
        cout << "Deposit OK\n";
    else
        cout << "Deposit not allowed\n";

    if(frank_account.withdraw(500.0))
        cout << "Withdraw OK\n";
    else
        cout << "Not sufficient funds\n";

    if(frank_account.withdraw(1500.0))
         cout << "Withdraw OK\n";
    else
        cout << "Not sufficient funds\n";

    return 0;
}
