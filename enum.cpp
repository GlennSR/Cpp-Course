#include <iostream>

using namespace std;

/* enum serve para enumerar campos de string e dar a eles valores, um pouco como dicionário em Python */

int main()
{
    enum armas{fuzil=100, revolver=8, rifle, escopeta=2};
    armas armaSel;

    armaSel = rifle;

    cout << armaSel << endl;

    return 0;
}
