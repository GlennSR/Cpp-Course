#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x, y, z;

    // Podemos usar várias variáveis dentro do for
    for(x=0, y=1, z=0; x < 10 && z <= 6; x++, y+=2, z+=2){
        cout << x << ", " << y << ", " << z << endl;
    }

    // For sem corpo, serve como uma pausa
    for(int tmp=0; tmp < 100000000000; tmp++);

    return 0;
}
