#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Os operadores de atribuição C++ funcioanm como os incrementos, mas permitem
    //definir o tamanho do passo e podem ser utilizados com qualquer operador aritmético
    int w = 2;
    int x = 3;
    int y = 4;
    int z = 10;

    //+=
    x += 2; //x = x + 2

    //-=
    y -= 2; //y = y - 2

    //*=
    w *= 10; //w = w * 10

    /* /= */
    z /= 5; //z = z / 5

    cout << x << endl;
    cout << y << endl;
    cout << w << endl;
    cout << z << endl;

    system("pause");
    return 0;
}
