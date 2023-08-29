// Overloading Move Constructor and Move Asssingnment operator
#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main()
{
    Mystring a{"Hello"}; // Overloaded Constructor
    a = Mystring{"Ola"}; // Overloaded Constructor then Move Assignment
    a = "Bonjour";       // Overloaded Constructor then Move Assignment

    
    Mystring empty;
    Mystring larry{"Larry"};
    Mystring stooge{larry};
    Mystring stooges;

    empty = stooge;
    empty = "Funny";

    empty.display();
    larry.display();
    stooge.display();

    stooges = "Larry, Moe and Curly";
    stooges.display();

    vector<Mystring> stooges_vec;
    stooges_vec.push_back("Larry");
    stooges_vec.push_back("Moe");
    stooges_vec.push_back("Curly");

    cout << "=========== Loop 1 ===============\n";
    for(const Mystring &s: stooges_vec)
        s.display();

    cout << "=========== Loop 2 ===============\n";
    for(Mystring &s: stooges_vec)
        s = "Changed";

    cout << "=========== Loop 3 ===============\n";
    for(const Mystring &s: stooges_vec)
        s.display();

    return 0;
}
