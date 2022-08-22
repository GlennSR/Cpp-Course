#include <iostream>

using namespace std;

void soma(int n1, int n2);
void soma();

int main()
{
    soma(20, 30);
    soma();

    return 0;
}

void soma(int n1, int n2){
    int s = n1 + n2;
    cout << "Soma de " << n1 << " com " << n2 << " = " << s << endl;
}

void soma(){
    int n1, n2, res;
    n1 = 10, n2 = 20;
    res = n1 + n2;

    cout << "Soma de " << n1 << " com " << n2 << " = " << res << endl;
}