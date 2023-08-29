#include <iostream>
#include<vector>

using namespace std;

int main()
{
    int cont = 0;

    while(cont++<20){
        cout << "Valor de cont: " << cont << endl;
        if(cont == 10) break;
    }
    cout << "Programa finalizado!\n";

    return 0;
}
