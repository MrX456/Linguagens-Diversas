#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Este algoritmo mostra todos os pares e impares de 0 ate onde o usuario digitou
    int num;
    int cont = 1;

    cout << "Digite um numero:" << endl;
    cin >> num;

    //\t para tabulação
    cout << "IMPARES " << "\tPARES" << endl;

    while(cont <= num) {
        if(cont % 2 == 1) {
            cout << " " << cont << "\t";
        }
        else {
            cout << " \t" << cont << endl;
        }
        cont++;
    }
    cout << endl;
    system("pause");
    return 0;
}
