#include <iostream>
#include <memory>
#include <vector>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"

class Test{
private:
    int data;
public:
    Test() : data{0} { std::cout << "Test constructor (" << data << ")\n";}
    Test(int data) : data{data} { std::cout << "Test constructor (" << data << ")\n";}
    int get_data() const{return data;}
    ~Test() { std::cout << "Test destructor (" << data << ")\n";}
};

int main()
{
    // Raw Pointer
    // Test *t1 = new Test{100};
    // delete t1;

    // Unique Pointer
    // std::unique_ptr<Test> t1 {new Test{100}}; // Way 1
    // std::unique_ptr<Test> t2 = std::make_unique<Test>(1000); // Way 2

    // std::unique_ptr<Test> t3;
    // // t3 = t1; // NOT ALLOWED
    // t3 = std::move(t1); // OK

    // if(!t1)
    //     std::cout << "t1 is nullptr\n";

    // Using Account Class
    std::unique_ptr<Account> a1 = std::make_unique<Checking_Account>("Moe", 5000);
    std::cout << *a1 << std::endl;
    a1->deposit(5000);
    std::cout << *a1 << std::endl << std::endl;

    std::vector<std::unique_ptr<Account>> accounts;
    accounts.push_back(std::make_unique<Checking_Account>("James", 1000));
    accounts.push_back(std::make_unique<Savings_Account>("Billy", 4000, 5.2));
    accounts.push_back(std::make_unique<Trust_Account>("Bobby", 5000, 4.5));

    for(const auto &acc: accounts)
        std::cout << *acc << std::endl;

    return 0;
}
