#include<iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    //Para receber comandos de entrada em C++ usamos
    int x;
    int y;
    int z;

    cout << "Digite um numero : ";
    //para receber dados digitados
    cin >> x;

    cout << "Digite outro numero : ";
    cin >> y;

    cout << "Digite o ultimo numero : ";
    cin >> z;

    //Agora vamos exibir os valores digitados que foram armazenados nas variaveis
    cout << "Voce digitou os valores" << endl;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    system("pause");
    return 0;
}
