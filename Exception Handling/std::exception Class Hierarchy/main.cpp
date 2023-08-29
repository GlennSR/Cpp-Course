#include <iostream>
#include <vector>
#include <memory>
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include "IllegalBalanceException.h"

using namespace std;

int main()
{
    try{
        unique_ptr<Account> moes_account = make_unique<Checking_Account>("Moe", -10.0);
        cout << *moes_account << endl;
    }
    catch(const IllegalBalanceException &ex){
        cerr << ex.what() << endl;
    }
    cout << "Program completed successfully\n";
    
    return 0;
}
