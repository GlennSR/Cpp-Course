#include <iostream>

using namespace std;

class Base{
    // Note that friends of Base have access to all class attributes and methods
public:
    int a{0};
    void display(){ cout << a << ", " << b << ", " << c << endl; }
protected:
    int b{0};
private:
    int c{0};
};

class Derived : Base{
    // Friends of Derived have access to only what Derived has access to

    // a will be public
    // b will be protected
    // c will not be accessible
public:
    void access_base_members(){
        a = 100; // OK
        b = 200; // OK
        // c = 300; // Not accessible - Compiler error
    }
};

int main()
{
    cout << "=== Base member access from base objects ===\n";
    Base base;
    base.a = 100; // OK
    // base.b = 200; // Compiler error
    // base.c = 300; // Compiler error

    cout << "=== Base member access from derived objects ===\n";
    Derived dev;
    dev.a = 100; // OK
    // dev.b = 200; // Compiler error
    // dev.c = 300; // Compiler error

    return 0;
}
