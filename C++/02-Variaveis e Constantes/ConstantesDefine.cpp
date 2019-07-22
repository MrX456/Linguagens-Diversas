#include<iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    //Constantes tambem podem ser declaradas através de #define. Neste caso não precisamos
    //especificar o tipo ou colocar ; após a declaração

    #define pi 3.1415
    #define x 52
    #define pais "Brasil"

    cout << pi << endl;
    cout << x << endl;
    cout << pais << endl;

    system("pause");
    return 0;
}
