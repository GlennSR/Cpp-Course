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
    Carro *carros = new Carro[5];
    Carro car1, car2, car3, car4, car5;

    carros[0] = car1, carros[1] = car2, carros[2] = car3, carros[3] = car4, carros[4] = car5;

    carros[0].add_valores("Tornado", "Vermelho", 450, 350);
    carros[1].add_valores("Mercedes", "Preto", 250, 260);
    carros[2].add_valores("Ferrari", "Prata", 300, 320);
    carros[3].add_valores("Gol", "Azul", 180, 160);
    carros[4].add_valores("Chevete", "Amarelo", 150, 120);

    for(int i=0; i<5; i++){
        carros[i].mostra_valores();
    }

    return 0;
}
