#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Este algoritmo mostra a tabela ASCII que contém todos os caracteres usados em um computador
    int c = 0;

    //Temos 255 caracteres
    while(c <= 255) {
        cout << c << " = " << (char) c << endl;
        c++;
    }

    system("pause");
    return 0;
}
