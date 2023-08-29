#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main()
{
    cout.precision(2);
    cout << fixed;

    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account{"Larry"});
    accounts.push_back(Account{"Moe", 2000});
    accounts.push_back(Account{"Curly", 5000});

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    // Savings
    vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account{});
    sav_accounts.push_back(Savings_Account{"Flash"});
    sav_accounts.push_back(Savings_Account{"Batman", 2000});
    sav_accounts.push_back(Savings_Account{"Mulher Maravilha", 5000, 5.0});

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);

    // Checking
    vector<Checking_Account> check_accounts;
    check_accounts.push_back(Checking_Account{});
    check_accounts.push_back(Checking_Account{"Iron Man"});
    check_accounts.push_back(Checking_Account{"Captain America", 1500});
    check_accounts.push_back(Checking_Account{"Thor", 3000});

    display(check_accounts);
    deposit(check_accounts, 1000);
    withdraw(check_accounts, 2000);

    // Trust
    vector<Trust_Account> trust_accounts;
    trust_accounts.push_back(Trust_Account{});
    trust_accounts.push_back(Trust_Account{"Athos"});
    trust_accounts.push_back(Trust_Account{"Porthos", 1000, 3});
    trust_accounts.push_back(Trust_Account{"Aramis", 30000, 6});

    display(trust_accounts);
    deposit(trust_accounts, 5000);
    withdraw(trust_accounts, 2000);

    for(int i{0}; i < 5; ++i)
        withdraw(trust_accounts, 50);

    // Account test{"Test", 500};
    // cout << test.get_balance() << endl;

    // test += 500;
    // test -= 2000;
    // cout << test.get_balance() << endl;

    // Savings_Account test2{"Test2", 600};
    // cout << test2.get_balance() << endl;

    // test2 += 500;
    // test2 -= 100;
    // cout << test2.get_balance() << endl;

    // Checking_Account check_acc{"Check", 500};
    // cout << check_acc.get_balance() << endl;
    // check_acc -= 450;
    // cout << check_acc.get_balance() << endl;

    // Trust_Account t_acc{"Trust", 1000, 5};
    // cout << t_acc.get_withdraw_count() << endl;
    // t_acc.withdraw(150);
    // cout << t_acc.get_withdraw_count() << endl;
    // cout << t_acc.get_balance() << endl;
    
    return 0;
}
