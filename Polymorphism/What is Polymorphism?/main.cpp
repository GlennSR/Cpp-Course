// Section 16
// Showing the problem of Static Binding
// The example below don't use polymorphism so it can show you the problem with static binding
#include <iostream>
#include <memory>

class Base{
public:
    void say_hello() const{
        std::cout << "Hello - I'm a Base class object\n";
    }
};

class Derived : public Base{
    public:
    void say_hello() const{
        std::cout << "Hello - I'm a Derived class object\n";
    }
};

void greetings(const Base &obj){
    /*
    This is not a virtual function, so it will always call Base::say_hello() method, that is the problem
    */
    std::cout << "Greetings: ";
    obj.say_hello();
}

int main(int argc, char const *argv[])
{
    // Calling the methods directly = No problem
    Base b;
    b.say_hello();

    Derived d;
    d.say_hello();

    // Calling greeting() will print the Base::say_hello()
    greetings(b);
    greetings(d);

    // Raw pointer example
    Base *ptr = new Derived();
    ptr->say_hello();

    // Smart pointer example
    std::unique_ptr<Base> ptr1 = std::make_unique<Derived>();
    ptr1->say_hello();

    delete ptr;

    return 0;
}
