#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

int main()
{
    //Podemos comparar tipos diferentes de variaveis
    //OBS: Variaveis de caracteres só podem ser comparadas com == ou !=
    int a = 5;
    float b = 5.0;
    char c = '5';
    bool teste;

    cout << "1- Verdadeiro / 0- Falso" << endl;

    teste = a == b;
    cout << a << " == [igual] " << b << " ? " << teste << endl; //verdadeiro(1)
    teste = a == c;
    cout << a << " == [igual] " << c << " ? " << teste << endl; //falso(0) c é caractere
    teste = a != c;
    cout << a << " != [diferente] " << c << " ? " << teste << endl; //verdadeiro(1)

    system("pause");

    return 0;
}
