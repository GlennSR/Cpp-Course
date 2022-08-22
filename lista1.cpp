#include <iostream>
#include <list>

using namespace std;

int main()
{
    list <int> crescente, decrescente;
    int tam = 10;
    // Usando iterator na lista para poder andar dentro dela
    list<int>::iterator it, it2;

    for(int i=0; i<tam; i++){
        crescente.push_front(i);
        decrescente.push_back(i);
    }

    // Posicionando o iterator no início da lista
    it = crescente.begin();
    it2 = decrescente.begin();
    // Avançando o iterator para a posição 5 da lista
    advance(it, 5);
    advance(it2, 5);
    // Inserindo o valor 0 nessa posição
    crescente.insert(it, 0);
    decrescente.insert(it2, 99);
    tam = 11;

    // Ordenando a lista na ordem crescente
    crescente.sort();
    // Revertendo a ordem da lista
    crescente.reverse();

    cout << "Tamanho da lista crescente: " << crescente.size() << "\n";
    cout << "Tamanho da lista decrescente: " << decrescente.size() << "\n\n";

    for(int i=0; i<tam; i++){
        cout << "(crescente, decrescente): " << crescente.front() << ", " << decrescente.front() << "\n";
        crescente.pop_front();
        decrescente.pop_front();
    }


    return 0;
}