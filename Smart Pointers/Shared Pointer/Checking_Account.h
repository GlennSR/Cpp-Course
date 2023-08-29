#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include "Account.h"

class Checking_Account : public Account{
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double flat_fee = 1.5; // static because is a class attribute, not an object's 
public:
    Checking_Account(std::string name = def_name, double balance = def_balance);
    virtual bool withdraw(double amount);
    virtual bool deposit(double amount);
    virtual void print(std::ostream &os) const;
    bool operator-=(double amount); // Withdraw
    virtual ~Checking_Account() = default;
};

#endif