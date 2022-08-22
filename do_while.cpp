#include <iostream>

using namespace std;

int main()
{
    int cont = 20;

    do{
        cout << "Valor de cont: " << cont << endl;
        if(cont == 10) break;
    }while(cont++<20);

    cout << "Programa finalizado!\n";

    return 0;
}
