#include <iostream>
#include <stdio.h> // Para a função gets
#include <stdlib.h> //Para a função malloc

using namespace std;

int main(int argc, char const *argv[])
{
    char *vnome = new char[20];
    string *nome = new string[2];
    nome[0] = "maluco doido";
    nome[1] = "mano ceu";

    *(nome++);
    cout << *nome << endl;
    cout << sizeof(nome) << endl;
    cout << sizeof(*nome) << endl;
    delete [] nome;

    // cin divide palavras espaçadas, gets não
    cin.getline(vnome, sizeof(vnome));
    cout << sizeof(vnome);

    cout << vnome << "\n";

    return 0;
}
