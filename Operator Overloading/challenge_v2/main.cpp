// Overloading Move Constructor and Move Asssingnment operator
#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main()
{
    cout << boolalpha << endl;
    Mystring ana{"Ana"};
    Mystring bruna {"Ana"};

    cout << (ana == bruna) << endl;
    cout << (ana != bruna) << endl;

    bruna = {"Bruna"};
    cout << (ana == bruna) << endl;
    cout << (ana != bruna) << endl;
    cout << (ana < bruna) << endl;
    cout << (ana > bruna) << endl;

    Mystring glenio{"Glenio"};
    glenio = -glenio;
    cout << glenio << endl;

    glenio = glenio + " simiao";
    cout << glenio << endl;

    glenio += " ramalho";
    cout << glenio << endl;

    Mystring s1{"12345"};
    glenio = s1 * 2;
    cout << glenio << endl;

    Mystring s2{"abcde"};
    s2 *= 3;
    cout << s2 << endl;

    Mystring frank{"Frank"};
    ++frank;
    cout << frank << endl;

    frank = -frank;
    cout << frank << endl;

    Mystring result;
    result = ++frank;
    cout << frank << endl;
    cout << result << endl;

    frank = "Frank";
    result = frank++;
    cout << frank << endl;
    cout << result << endl;

    return 0;
}
