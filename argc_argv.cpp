#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    // argv é o vetor de argumentos passado
    cout << argv[1] << "\n";
    // argc é a quatidade de argumentos passados (arg count)
    // OBS: O nome do programa sempre será argv[0], logo arg count terá valor >= 1
    cout << argc << "\n\n";

    // Comparando argumentos de entrada com strings
    if(argc > 1){
        if(!strcmp(argv[1], "sol")){
            cout << "Vou ao clube" << endl;
        }else if(!strcmp(argv[1], "nublado")){
            cout << "Vou ao cinema" << endl;
        }else{
            cout << "Vou ficar em casa\n\n";
        }
    }
    // Pausa o programa (Equivalente do system("pause") do windows)
    getchar();

    return 0;
}
