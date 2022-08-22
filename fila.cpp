#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue <string> cartas;

    // Adicionando elementos à pilha
    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout << "Tamanho da fila: " << cartas.size() << "\n";
    cout << "Primeira carta: " << cartas.front() << "\n";
    cout << "Ultima carta..: " << cartas.back() << "\n";   

    while(!cartas.empty()){
        cout << "\nTamanho da fila: " << cartas.size() << "\n";
        cout << "Primeira carta: " << cartas.front() << "\n";
        cartas.pop();
    }
    
    if(cartas.empty()) cout << "\nFila vazia\n";
    else cout << "\nFila com cartas\n";

    return 0;
}
