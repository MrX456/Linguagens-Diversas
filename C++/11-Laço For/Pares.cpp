#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Este algoritmo retorna todos os numeros pares até onde o usuario digitar
    int limite;

    cout << "Digite um numero:" << endl;
    cin >> limite;

    cout << "Os numeros pares de 0 a " << limite << " sao:" << endl;

    for(int i = 0; i <= limite; i++) {
        if(i % 2 == 0) {
            cout << i << endl;
        }
    }
    system("pause");
    return 0;
}
