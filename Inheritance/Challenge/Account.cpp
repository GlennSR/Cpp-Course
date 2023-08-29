#include "Account.h"

Account::Account(std::string name, double balance) 
    : name{name}, balance{balance}{}

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

    return false;
}

double Account::get_balance() const{
    return balance;
}

// Deposit
bool Account::operator+=(double amount){
    // if(amount < 0){
    //     std::cout << "Failed Deposit of " << amount << " to " << *this << std::endl;
    //     return false;
    // }
    // else{
    //     std::cout << "Deposited " << amount << " to " << *this << std::endl;
    //     balance += amount;
    //     return true;
    // }
    return Account::deposit(amount);
}

// Withdraw
bool Account::operator-=(double amount){
    // if(balance - amount >= 0){
    //     std::cout << "Withdrew " << amount << " from " << *this << std::endl;
    //     balance -= amount;
    //     return true;
    // }
    // std::cout << "Failed Withdraw of " << amount << " from " << *this << std::endl;
    // return false;
    return Account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &os, const Account &account){
    os << "[Account: " << account.name << ": " << account.balance << "]";
    return os;
}