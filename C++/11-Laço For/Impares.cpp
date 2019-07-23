#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Este algoritmo retorna todos os numeros impares até onde o usuario digitar
    int limite;

    cout << "Digite um numero:" << endl;
    cin >> limite;

    cout << "Os numeros impares de 0 a " << limite << " sao:" << endl;

    for(int i = 0; i <= limite; i++) {
        if(i % 2 == 1) {
            cout << i << endl;
        }
    }
    system("pause");
    return 0;
}
