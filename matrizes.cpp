#include <iostream>

using namespace std;

int main(){
    // int matriz[3][4] = {
    //     {0, 0, 0, 0},
    //     {1, 1, 1, 1},
    //     {2, 2, 2, 2}
    // };

    int matriz[3][4];

    for (int l=0; l<3; l++){
        for(int c=0; c<4; c++){
            cin >> matriz[l][c];
        }
    }

    for (int l=0; l<3; l++){
        for(int c=0; c<4; c++){
            cout << matriz[l][c] << " ";
        }
        cout << endl;
    }

    return 0;
}