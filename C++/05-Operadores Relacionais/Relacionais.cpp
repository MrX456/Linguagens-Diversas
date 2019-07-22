#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Operadores relacionais testam uma relação entre variaveis(se são verdadeiras ou falsas)
    //Se for verdadeira retorna 1 se for falsa retorna 0.
    int x = 4;
    int y = 3;
    int z = 3;
    bool teste;

    cout << "Operadores Relacionais" << endl;
    cout << "1- Verdadeiro / 0- Falso" << endl;

    //os operadores relacionais em C+= são:
    //< <= > >= == !=
    teste = x > y;
    cout << x << " > [maior] " << y << " ? " << teste <<endl; //verdadeiro(1)
    teste = x < y;
    cout << x << " < [menor] " << y << " ? " << teste <<endl; //falso(0)
    teste = y >= z;
    cout << y << " >= [maior ou igual] " << z << " ? " << teste <<endl; //verdadeiro(1)
    teste = x <= z;
    cout << x << " <= [menor ou igual] " << z << " ? " << teste <<endl; //falso(0)
    teste = x == y;
    cout << x << " == [igual] " << y << " ? " << teste <<endl; //falso(0)
    teste = x != z;
    cout << x << " != [diferente] " << z << " ? " << teste <<endl; //verdadeiro(1)

    system("pause");
    return 0;
}
