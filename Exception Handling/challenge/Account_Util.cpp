#include <iostream>
#include "Account_Util.h"

// Helper functions for Account class

void display(const std::vector<Account> &accounts){
    std::cout << "\n=== Accounts ====================================\n";
    for(const auto &acc: accounts)
        std::cout << acc << std::endl;
}

void deposit(std::vector<Account> &accounts, double amount){
    std::cout << "\n=== Depositing to Accounts ====================================\n";
    for(auto &acc: accounts){
        if(acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

void withdraw(std::vector<Account> &accounts, double amount){
    std::cout << "\n=== Withdrawing from Accounts ====================================\n";
    for(auto &acc: accounts){
        if(acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdraw of " << amount << " from " << acc << std::endl;
    }
}

// Helper functions for Savings Account class

void display(const std::vector<Savings_Account> &accounts){
    std::cout << "\n=== Savings Accounts ====================================\n";
    for(const auto &acc: accounts)
        std::cout << acc << std::endl;
}

void deposit(std::vector<Savings_Account> &accounts, double amount){
    std::cout << "\n=== Depositing to Savings Accounts ====================================\n";
    for(auto &acc: accounts){
        if(acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

void withdraw(std::vector<Savings_Account> &accounts, double amount){
    std::cout << "\n=== Withdrawing from Savings Accounts ====================================\n";
    for(auto &acc: accounts){
        if(acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdraw of " << amount << " from " << acc << std::endl;
    }
}

// Helper functions for Checking Account class

void display(const std::vector<Checking_Account> &accounts){
    std::cout << "\n=== Checking Accounts ====================================\n";
    for(const auto &acc: accounts)
        std::cout << acc << std::endl;
}

void deposit(std::vector<Checking_Account> &accounts, double amount){
    std::cout << "\n=== Depositing to Checking Accounts ====================================\n";
    for(auto &acc: accounts){
        if(acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

void withdraw(std::vector<Checking_Account> &accounts, double amount){
    std::cout << "\n=== Withdrawing from Checking Accounts ====================================\n";
    for(auto &acc: accounts){
        if(acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdraw of " << amount << " from " << acc << std::endl;
    }
}

// Helper functions for Trust Account class

void display(const std::vector<Trust_Account> &accounts){
    std::cout << "\n=== Trust Accounts ====================================\n";
    for(const auto &acc: accounts)
        std::cout << acc << std::endl;
}

void deposit(std::vector<Trust_Account> &accounts, double amount){
    std::cout << "\n=== Depositing to Trust Accounts ====================================\n";
    for(auto &acc: accounts){
        if(acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

void withdraw(std::vector<Trust_Account> &accounts, double amount){
    std::cout << "\n=== Withdrawing from Trust Accounts ====================================\n";
    for(auto &acc: accounts){
        if(acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdraw of " << amount << " from " << acc << std::endl;
    }
}