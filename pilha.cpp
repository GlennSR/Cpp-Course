#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack <string> cartas;

    // Adicionando elementos à pilha
    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout << "Tamanho da pilha: " << cartas.size() << "\n";
    cout << "Carta do topo: " << cartas.top() << "\n";

    while(!cartas.empty()){
        cout << "\nTamanho da pilha: " << cartas.size() << "\n";
        cout << "Carta do topo: " << cartas.top() << "\n";
        cartas.pop();
    }
    
    if(cartas.empty()) cout << "\nPilha vazia\n";
    else cout << "\nPilha com cartas\n";

    return 0;
}
