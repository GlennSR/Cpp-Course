#include <iostream>

using namespace std;

void fibo(int n_1, int n, int termo, int cont=0);

int main()
{
    fibo(0, 1, 15);

    return 0;
}

void fibo(int ni_1, int n, int termo, int cont){
    int ni = n;
    if(cont == 0){
        cout << ni_1 << ", ";
    }
    cout << ni << ", ";

    if(termo > cont){
        fibo(ni, ni+ni_1, termo, ++cont);
    }
}