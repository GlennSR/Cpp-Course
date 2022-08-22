#include <iostream>
#include <list>

using namespace std;

void exibir_lista(list <int> lista_inteiro, list<int>::iterator it);

int main()
{
    list <int> lista1, lista2;
    int tam = 10;
    // Usando iterator na lista para poder andar dentro dela
    list<int>::iterator it;

    for(int i=0; i<tam; i++){
        lista1.push_front(i);
    }

    for(int i=0; i<4; i++){
        lista2.push_front(9);
    }

    // Posicionando o iterator no início da lista
    it = lista1.begin();
    // Avançando o iterator para a posição 5 da lista
    advance(it, 3);
    // Inserindo o valor 0 nessa posição
    lista1.insert(it, 0);
    tam = 11;
    // Removendo valores de uma posição
    // OBS: Porém, ele remove uma posição após o iterator, ou seja, se it=3, o erase remove o item na pos 4
    // Por isso, precisamos decrementar o iterator
    lista1.erase(--it);
    tam=10;

    cout << "Tamanho da lista1 antes do clear: " << lista1.size() << "\n";
    exibir_lista(lista1, it);

    // Limpando a lista
    lista1.clear();

    cout << "Tamanho da lista1 apos o clear: " << lista1.size() << "\n";
    exibir_lista(lista1, it);

    // Mesclando duas listas
    // OBS: o método retira os elementos da segunda lista e adiciona na primeira
    cout << "Tamanho da lista2 antes do merge: " << lista2.size() << "\n";

    lista1.merge(lista2);
    tam = lista1.size();

    cout << "Tamanho da lista2 após o merge: " << lista2.size() << "\n";
    cout << "Lista 1:" << "\n";
    exibir_lista(lista1, it);

    return 0;
}

void exibir_lista(list <int> lista_inteiro, list<int>::iterator it) {
    //Função para exibir a lista
	
	cout << "\n---------------------------------\n";
	
	for(it = lista_inteiro.begin(); it != lista_inteiro.end(); it++) {
		cout << *it << ' ';
	}

	cout << "\n---------------------------------\n";
}