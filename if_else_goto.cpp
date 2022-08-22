#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
    int n1, n2, res;
    char opc;

    inicio:
    system("clear");

    cout << "Digite o valor da nota 1: ";
    cin >> n1;
    cout << "Digite o valor da nota 2: ";
    cin >> n2;

    res = n1 + n2;

    if(res >= 60){
        cout << "\nAluno Aprovado\n";
    }
    else if(res >= 50){
        cout << "\nAluno em Sub\n";
    }
    else{
        cout << "\nAluno Reprovado\n";
    }

    // Uso do goto
    cout << "\nDeseja digitar outras notas? [s/n]: ";
    cin >> opc;
    cout << endl;

    if(opc == 's' or opc == 'S'){
        goto inicio;
    }

    return 0;
}
