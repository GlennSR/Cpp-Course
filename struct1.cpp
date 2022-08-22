#include <iostream>

using namespace std;

struct Carro{
    string nome;
    string cor;
    int pot;
    int velMax;

    // Método para adicionar valores na struct mais simples
    void add_valores(string stNome, string stCor, int stPot, int stVelMax){
        nome = stNome;
        cor = stCor;
        pot = stPot;
        velMax = stVelMax;
    }

    void mostra_valores(){
        cout << "Nome.............: " << nome << "\n";
        cout << "Cor..............: " << cor << "\n";
        cout << "Potencia.........: " << pot << "\n";
        cout << "Velocidade maxima: " << velMax << "\n\n";
    }
};

int main()
{
    Carro car1, car2, car3;

    car1.nome = "Tornado";
    car1.cor = "Vermelho";
    car1.pot = 450;
    car1.velMax = 350;

    // ou
    car2 = {"Mercedes", "Preto", 250, 220};

    // ou
    car3.add_valores("Corolla", "Prata", 250, 250);

    cout << "Nome.............: " << car1.nome << "\n";
    cout << "Cor..............: " << car1.cor << "\n";
    cout << "Potencia.........: " << car1.pot << "\n";
    cout << "Velocidade maxima: " << car1.velMax << "\n\n";

    car2.mostra_valores();

    car3.mostra_valores();

    return 0;
}
