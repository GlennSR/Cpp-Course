#include <iostream>

using namespace std;

int main()
{
    // (expressão) ? valor1 : valor2;
    int n1, n2, nota, x;
    string res;

    cout << "Digite o valor da nota 1: ";
    cin >> n1;
    cout << "Digite o valor da nota 2: ";
    cin >> n2;

    nota = n1 + n2;

    // (nota >= 60) ? res = "Aprovado" : res = "Reprovado";
    res = (nota >= 60) ? "Aprovado" : "Reprovado";

    cout << "\nSituacao do aluno: " << res << endl;

    cout << "\nDigite um valor para x: ";
    cin >> x;

    (x >= 10) ? x++ : x--;

    cout << "\nNovo valor de x: " << x << endl;

    return 0;
}
