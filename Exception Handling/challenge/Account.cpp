#include "Account.h"

Account::Account(std::string name, double balance) 
    : name{name}, balance{balance}{
        if(balance < 0.0)
            throw IllegalBalanceException();
    }

bool Account::deposit(double amount){
    if(amount < 0)
        return false;
    else{
        balance += amount;
        return true;
    }
}

bool Account::withdraw(double amount){
    if(balance - amount >= 0){
        balance -= amount;
        return true;
    }
    throw InsufficientFundsException();
    // return false;
}

double Account::get_balance() const{
    return balance;
}

// Deposit
bool Account::operator+=(double amount){
    return Account::deposit(amount);
}

// Withdraw
bool Account::operator-=(double amount){
    return Account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &os, const Account &account){
    os << "[Account: " << account.name << ": " << account.balance << "]";
    return os;
}