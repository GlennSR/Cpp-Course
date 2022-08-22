#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string veiculo = "Carro";
    string *pv;

    // Para vetores
    int vetor[10];
    int *p;

    pv = &veiculo; // O ponteiro recebe o endereço da variável veiculo

    cout << "Ponteiro = "<< pv << ", Variavel = " << &veiculo <<"\n"; // Imprime o endereço da variável

    cout << "\nValor de veiculo: " << *pv << "\n";

    // Manipular o valor da variável usando ponteiro
    *pv = "Moto"; // No endereço apontado pelo ponteiro pv adicione o valor moto

    cout << "Valor de veiculo: " << *pv << "\n";

    // Vetores
    cout << "\n------VETORES------\n";
    p = &vetor[0]; // Mesmo que p = vetor;
    *p = 10;
    cout << "\nEndereco: " << p << "\nValor = " << *p << "\n";

    *(p++);
    *p = 20;
    cout << "\nEndereco: " << p << "\nValor = " << *p << "\n";

    *(p+=1);
    *p = 30;
    cout << "\nEndereco: " << p << "\nValor = " << *p << "\n";
    // Como int tem 4 bytes de tamanho, então os endereços impressos estarão espaçados de 4 bytes

    return 0;
}
