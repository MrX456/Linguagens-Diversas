#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{

    //A precedencia dos operadores aritméticos em C++ é
    //()
    //*/%
    //+-
    //Mesma precedencia é feito da esquerda para direita
    int x = 10;
    int y = 21;

    //parenteses tem maior precedência
    float media = (float)(x + y) / 2;
    //multiplicação ou divisão tem maior precedência que soma ou subtração
    int valor = x + y * x; //10 + 210
    //mesma precedencia é resolvido da esquerda para direita
    int valor2 = x + y - x;

    cout << media << endl;
    cout << valor << endl;
    cout << valor2 << endl;

    system("pause");
    return 0;
}
