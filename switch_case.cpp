#include <iostream>

using namespace std;

int main()
{
    int valor;

    // cout << "Selecione uma cor:\n";
    // cout << "[1]=Verde, [2]=Azul, [3]=Vermelho\n";

    // cin >> valor;

    // switch(valor){
    //     case 1:
    //         cout << "\nCor selecionada: Verde" << endl;
    //         break;
    //     case 2:
    //         cout << "\nCor selecionada: Azul" <<  endl;
    //         break;
    //     case 3:
    //         cout << "\nCor selecionada: Vermelho" << endl;
    //         break;
    //     default:
    //         cout << "\nNenhuma cor selecionada, usando cor default: Amarelo" << endl;
    // }

    // Usando mais de um valor num case
    // cout << "\nSelecione uma cor:\n";
    // cout << "[1, 2, 3]=Verde, [4, 5, 6]=Azul\n";

    // cin >> valor;

    // switch(valor){
    //     case 1:
    //     case 2:
    //     case 3:
    //         cout << "\nCor selecionada: Verde" << endl;
    //         break;
    //     case 4:
    //     case 5:
    //     case 6:
    //         cout << "\nCor selecionada: Azul" << endl;
    //         break;
    //     default:
    //         cout << "\nNenhuma cor selecionada, usando cor default: Amarelo" << endl;
    // }

    // Switch-case aninhado
    cout << "Selecione um transporte:\n";
    cout << "[1]=Carro, [2]=Moto, [3]=Aviao, [4]=Helicoptero\n";

    cin >> valor;

    switch(valor){
        case 1:
        case 2:
            cout << "\nTransporte terrestre\n";
            switch(valor){
                case 1:
                    cout << "Carro selecionado" << endl;
                    break;
                case 2:
                    cout << "Moto selecionada" << endl;
                    break;
            }
            break;
        case 3:
        case 4:
            cout << "\nTransporte aereo\n";
            switch(valor){
                case 3:
                    cout << "Aviao selecionado" << endl;
                    break;
                case 4:
                    cout << "Helicoptero selecionado" << endl;
                    break;
            }
            break;
        default:
            cout << "Transporte selecionado invalido" << endl;
    }


    return 0;
}
