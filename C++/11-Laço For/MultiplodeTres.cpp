#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Este algoritmo retorna todos os numeros multiplos de 3 até onde o usuario digitar
    int val;

    cout << "Digite um numero:" << endl;
    cin >> val;

    cout << "Os multiplos de 3 de 0 a " << val << " sao:" << endl;

    for(int i = 1; i <= val; i++) {
        if(i % 3 == 0) {
            cout << i << endl;
        }
    }
    system("pause");
    return 0;
}
