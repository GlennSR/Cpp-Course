/*
    The Derived class doesn't inherit the Copy/Move and the operators of the Base class, so we have to define them to the 
    Derived class. The Copy/Move and operator assignment of the Derived class will work slicing the Base attributes and calling
    the Base methods and slicing the Derived attributes to call the Derived methods.
*/

#include <iostream>

using namespace std;

class Base{
private:
    int value;
public:
    Base() : value{0} {cout << "Base no-args constructor\n"; }
    Base(int x) : value{x} { cout << "Base (int) overloaded constructor\n"; }

    // Copy Constructor
    Base(const Base &other) : value{other.value}{
        cout << "Base copy constructor\n";
    }

    // Operator assignment
    Base &operator=(const Base &rhs){
        cout << "Base operator=\n";
        if(this != &rhs)
            value = rhs.value;
        return *this;
    }

    ~Base() { cout << "Base destructor\n"; } 
};

class Derived : public Base{
private:
    int doubled_value;
public:
    Derived() : Base{}, doubled_value{0} {cout << "Derived no-args constructor\n"; }
    Derived(int x) : Base{x}, doubled_value{x*2} { cout << "Derived (int) overloaded constructor\n"; }

    // Copy Constructor
    Derived(const Derived &other) : Base{other}, doubled_value{other.doubled_value}{
        cout << "Derived copy constructor\n";
    }

    // Operator assignment
    Derived &operator=(const Derived &rhs){
        cout << "Derived operator=\n";
        if(this != &rhs){
            Base::operator=(rhs);
            doubled_value = rhs.doubled_value;
        }
        return *this;
    }

    ~Derived() { cout << "Derived destructor\n"; }
};

int main(int argc, char const *argv[])
{
    Base b {100};       // Overloaded constructor
    Base b1 {b};        // Copy constructor
    b = b1;             // Copy assignment

    Derived d {100};    // Overloaded constructor
    Derived d1 {d};     // Copy constructor
    d = d1;             // Copy assignment

    return 0;
}
