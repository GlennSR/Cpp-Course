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

    void muda_vel_max(int newVelMax){
        if(newVelMax > velMax){
            cout << "Velocidade maior que a velocidade maxima atingida pelo veiculo, mantendo velMax padrao" << "\n\n";
        }
        else if(newVelMax < 0){
            cout << "Velocidades negativas não são permitidas" << "\n\n";
        }
        else{
            velMax = newVelMax;
        }
    }
};

int main()
{
    Carro car1;

    // ou
    car1.add_valores("Corolla", "Prata", 250, 250);

    car1.mostra_valores();

    car1.muda_vel_max(-20);

    car1.mostra_valores();

    return 0;
}
