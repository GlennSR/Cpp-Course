#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main()
{
    float pi = 3.1415;

    printf("Valor de PI: %02.2f\n", pi);

    // cout

    int num = 10;

    cout << "Valor de NUM em dec: " << dec << num << endl;

    cout << "Valor de NUM em hex: " << hex << num << endl;
    cout << "Valor de NUM em hex: " << setbase(16) << num << endl;

    cout << "Valor de NUM em oct: " << oct << num << endl;
    cout << "Valor de NUM em hex: " << setbase(8) << num << endl;

    cout.precision(4);
    cout << "Valor de PI: " << pi << endl; 
    
    // Voltando à precisão padrão
    cout.precision(-1);
    cout << "Valor de PI: " << pi << endl;

    // Notação científica
    cout << "Valor de PI: " << std::scientific << pi << endl;

    // Colocando espaçamento
    cout << "Valor de PI:" << setw(20) << setfill('-') << pi << endl;


    return 0;
}
