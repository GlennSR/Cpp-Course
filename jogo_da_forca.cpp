#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

int main(){
    char palavra[30] = "animal", tracos[30] = "______", letra;
    int c, tentativas = 5, tam = 0;
    bool contida;

    for(c=0; palavra[c]!='\0'; c++){
        tam++;
    }

    for(c=0; c<tam; c++){
        tracos[c] = '_';
    }

    while(tentativas > 0){
        system("clear");
        contida = false;

        cout << "Palavra: ";
        for(c=0; c<tam; c++){
            cout << tracos[c];
        }
        cout << "\n";
        cout << "Chances = " << tentativas << "\n\n";

        if(strcmp(palavra, tracos) == 0) break;

        cout << "Digite uma letra: ";
        cin >> letra;

        for(c=0; c<sizeof(palavra)/sizeof(char); c++){
            if(letra == palavra[c]){
                tracos[c] = palavra[c];
                contida = true;
            }
        }

        if(!contida) tentativas--;
    }

    if(tentativas == 0){
        cout << "Voce perdeu! Tente novamente!" << endl;
    }
    else{
        cout << "Parabens, voce acertou!" << endl;
    }

    return 0;
}