#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance)
    : Account{name, balance}{}

bool Checking_Account::withdraw(double amount){
    amount += flat_fee;
    return Account::withdraw(amount);
}

bool Checking_Account::deposit(double amount){
    return Account::deposit(amount);
}

void Checking_Account::print(std::ostream &os) const{
    os.precision(2);
    os << std::fixed;
    os << "Checking Account: " << name << ": " << balance << "]";
}

bool Checking_Account::operator-=(double amount){
    return Checking_Account::withdraw(amount);
}