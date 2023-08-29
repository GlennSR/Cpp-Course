#include<iostream>
#include "Account.h"

using namespace std;

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
