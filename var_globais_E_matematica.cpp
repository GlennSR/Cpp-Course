#include <iostream>
using namespace std;

int n1, n2; // Variáveis globais

int main(int argc, char const *argv[])
{
    // Operadores matemáticos: + - / * ()
    int n3, n4; // Variáveis locais
    int res;
    string res_str;

    n1 = 11;
    n2 = 3;
    n3 = 5;
    n4 = 2;

    res = (n1 + n2 + n3 + n4)*2 - 10/2;
    res_str = "(n1 + n2 + n3 + n4)/2 - 10";

    cout << "Resultado de (" << res_str << ") : " << res << endl;
    cout << "Resto de res % 3: " << res%3 << endl;

    return 0;
}
