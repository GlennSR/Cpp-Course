#include <iostream>

using namespace std;

void somar(float *var, float valor);
void init_vetor(float *v);

int main()
{
    float num = 0;
    float vetor[5];

    somar(&num, 15);
    init_vetor(vetor);

    cout << num << "\n";

    for(int i=0; i<5; i++){
        cout << vetor[i] << "\n";
    }

    return 0;
}

void somar(float *var, float valor){
    *var += valor;
}

void init_vetor(float *v){
    for(int i=0; i<5; i++){
        *v = i;
        *(v++);
    }
}