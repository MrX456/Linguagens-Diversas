#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Este algoritmo soma quantos valores o usuario quiser
    int n;
    int soma = 0;
    char resp;

    do {
        cout << "Digite um numero para fazer uma soma : ";
        cin >> n;
        soma += n;

        cout << endl << "Deseja continuar adicionando valores? [s/n]" << endl;
        cin >> resp;
    } while(resp != 'n');

    cout << "A soma dos valores digitados e " << soma << endl;

    system("pause");
    return 0;
}
