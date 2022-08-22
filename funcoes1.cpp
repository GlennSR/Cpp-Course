#include <iostream>

using namespace std;

void soma(int n1, int n2);
int soma2(int n1, int n2);
void hello_world();
void transporte(string transp[4]);

int main(){
    int res;
    string transp[4] = {"carro", "moto", "barco", "aviao"};

    hello_world();
    soma(5, 2);
    res = soma2(175, 25);
    cout << "Soma2 = " << res << endl;

    transporte(transp);

    return 0;
}

void hello_world(){
    cout << "Hello World!\n\n";
}

void soma(int n1, int n2){
    int s = n1 + n2;
    cout << "Soma dos valores = " << s << endl;
}

int soma2(int n1, int n2){
    return n1+n2;
}

void transporte(string transp[4]){
    for(int i=0; i<4; i++){
        cout << transp[i] << "\n";
    }
}