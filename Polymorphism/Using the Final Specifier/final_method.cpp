#include <iostream>

class Base{ 
public:
    virtual void do_something() final; // Final prevents further overriding

    Base();
    ~Base();
};

class Derived : public Base { 
public:
    virtual void do_something(); // ERROR

    Derived();
    ~Derived();
};

int main()
{
    
    return 0;
}
