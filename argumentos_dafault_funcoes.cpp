#include <iostream>

using namespace std;

void imp(string txt="Oi");

int main(int argc, char const *argv[])
{
    imp();

    return 0;
}

void imp(string txt){
    cout << "\n" << txt << "\n";
}