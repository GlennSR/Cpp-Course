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
private:
    int doubled_value;
public:
    Derived() : Base{}, doubled_value{0} {cout << "Derived no-args constructor\n"; }
    Derived(int x) : Base{x}, doubled_value{x*2} { cout << "Derived (int) overloaded constructor\n"; }
    ~Derived() { cout << "Derived destructor\n"; }
};

int main(int argc, char const *argv[])
{
    Base b1;            // Calls Base no-args constructor
    Base b2{100};       // Calls Base (int) constructor

    Derived d1;         // Calls Derived and Base no-args constructors
    Derived d2{1000};   // Calls Derived (int) and Base (int) constructors

    return 0;
}
