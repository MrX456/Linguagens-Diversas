#include<iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    //Podos formatar a exibição de numeros de ponto flutuante
    float j = 3.1234;
    float k = 23.456789;
    double l = 432.13456321;

    //temos um método para fazer esta formatação
    //Uma casa após virgula
    cout.precision(1);
    cout << fixed << j << endl;

    //Duas casas após virgula
    cout.precision(2);
    cout << fixed << k << endl;

    //Podemos colocar a precisão que quisermos
    cout.precision(4);
    cout << fixed << l <<endl;
    system("pause");
    return 0;
}
