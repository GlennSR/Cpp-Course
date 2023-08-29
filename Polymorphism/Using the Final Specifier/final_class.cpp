#include <iostream>

class Base final{ // Final means it cannot be derived from
    Base();
    ~Base();
};

class Derived : public Base { // ERROR
    Derived();
    ~Derived();
};

int main()
{
    
    return 0;
}
