#include <iostream>
#include <vector>
#include <memory>
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include "IllegalBalanceException.h"
#include "InsufficientFundsException.h"

using namespace std;

int main()
{
    try{
        unique_ptr<Account> moes_account = make_unique<Checking_Account>("Moe", 100.0);
        cout << *moes_account << endl;
        moes_account->withdraw(200.0);
    }
    catch(const IllegalBalanceException &ex){
        cerr << ex.what() << endl;
    }
    catch(const InsufficientFundsException &ex){
        cerr << ex.what() << endl;
    }
    cout << "Program completed successfully\n";
    
    return 0;
}
