#include <iostream>

using namespace std;

int main()
{
    int vetor[] = {10, 20, 30, 40, 50};
    int i;

    for(i=0; i<sizeof(vetor)/sizeof(int); i++){
        cout << vetor[i] << endl;
    }

    return 0;
}
