#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate) 
    : Savings_Account{name, balance, int_rate}, withdraw_count{0}{}

bool Trust_Account::deposit(double amount){
    if(amount >= 5000)
        amount += 50;
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount){
    if(amount < balance * max_withdraw_percent && withdraw_count < max_withdrawals){
        withdraw_count++;
        return Savings_Account::withdraw(amount);
    }
    return false;
}

void Trust_Account::print(std::ostream &os) const{
    os.precision(2);
    os << std::fixed;
    os << "Trust Account: " << name << ": " << balance << ", " << int_rate 
    << "%, withdraws: " << withdraw_count << "]";
}

bool Trust_Account::operator-=(double amount){
    return Trust_Account::withdraw(amount);
}

bool Trust_Account::operator+=(double amount){
    return Trust_Account::deposit(amount);
}
