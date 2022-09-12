#include<iostream>

using namespace std;

int main()
{
    int num{};

    cout << "Enter an integer: ";
    cin >> num;

    cout << num << " is " << ((num % 2 == 0 ? "even" : "odd")) << endl;    

    cout << endl;
    return 0;
}
