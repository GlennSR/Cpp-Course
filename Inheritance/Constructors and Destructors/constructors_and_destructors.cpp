#include <iostream>

using namespace std;

class Base{
private:
    int value;
public:
    Base() : value{0} {cout << "Base no-args constructor\n"; }
    Base(int x) : value{x} { cout << "Base (int) overloaded constructor\n"; }
    ~Base() { cout << "Base destructor\n"; } 
};

class Derived : public Base{
    // The code below allow the derived class to inherit the parent's non-special constructor when its Derived(int x) don't exist (line 20)
    // So the Base(int x) is called, initializing the value, but the doubled_value will be initialized by the no-args constructor
    // in this case, to 0
    using Base::Base;
private:
    int doubled_value;
public:
    Derived() : doubled_value{0} {cout << "Derived no-args constructor\n"; }
    Derived(int x) : doubled_value{x*2} { cout << "Derived (int) overloaded constructor\n"; }
    ~Derived() { cout << "Derived destructor\n"; }
};

int main(int argc, char const *argv[])
{
    Base b1;
    Base b2{100};

    Derived d1;
    Derived d2{1000};

    return 0;
}
