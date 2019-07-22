#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Em C++ temos os operadores de incremento ++ e decremento -- que acrescentam ou
    //diminuem em 1 o valor da variavel
    int x = 1;
    int y = 2;

    //Os pré-incrementos(++) e decrementos(--) são feitos antes
    ++x;
    --y;
    cout << x << endl;
    cout << y << endl;

    //Os pós-incrementos(++) e decrementos(--) são feitos depois
    x++;
    y--;
    cout << x << endl;
    cout << y << endl;

    system("pause");
    return 0;
}
