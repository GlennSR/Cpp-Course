#include <iostream>

class Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual ~Account() {  }
};

// removed virtual keyword
class Checking: public Account  {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Checking::withdraw" << std::endl;
    }
    virtual ~Checking() {  }
};

// removed virtual keyword
class Savings: public Account  {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Savings::withdraw" << std::endl;
    }
    virtual ~Savings() {  }
};

class Trust: public Account  {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Trust::withdraw" << std::endl;
    }
    virtual ~Trust() {  }
};

void do_withdraw(Account &account, double amount){
    account.withdraw(amount);
}

int main() {

    Account a;
    Account &ref = a;
    ref.withdraw(100);

    Trust t;
    Account &ref1 = t;
    ref1.withdraw(100);
    std::cout << std::endl;

    Account a1;
    Savings a2;
    Checking a3;
    Trust a4;

    do_withdraw(a1, 100);
    do_withdraw(a2, 100);
    do_withdraw(a3, 100);
    do_withdraw(a4, 100);

    return 0;
}