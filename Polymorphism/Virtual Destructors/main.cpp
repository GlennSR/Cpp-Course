// Section 16
// Using Base class pointers
#include <iostream>
#include <vector>

// This class uses dynamic polymorphism for the withdraw method
// We'll learn about virtual functions in the next video

class Account {
public:
    // Once a member function is virtual, then it stays virtual in every class derived from that class.
    // So, even if the virtual keyword is not provided in derived classes, the function is still virtual.
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual ~Account() { std::cout << "Account: destructor" << std::endl; }
};

// removed virtual keyword
class Checking: public Account  {
public:
     void withdraw(double amount) {
        std::cout << "In Checking::withdraw" << std::endl;
    }
     ~Checking() { std::cout << "Checking: destructor" << std::endl; }
};

// removed virtual keyword
class Savings: public Account  {
public:
     void withdraw(double amount) {
        std::cout << "In Savings::withdraw" << std::endl;
    }
     ~Savings() { std::cout << "Savings: destructor" << std::endl; }
};

// removed virtual keyword
class Trust: public Account  {
public:
     void withdraw(double amount) {
        std::cout << "In Trust::withdraw" << std::endl;
    }
     ~Trust() { std::cout << "Trust: destructor" << std::endl; }
};

// removed virtual keyword

int main() {

    std::cout << "\n === Pointers ==== " << std::endl;

    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();

    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);

    std::cout << "\n === Clean up ==== " << std::endl;

    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;

}