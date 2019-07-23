#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Em C++ temos também a estrutura de repetição do while
    //Este laço executa o bloco pelo menos uma vez ja que a condição só será testada
    //ao término da primeira iteração(se for verdadeira continuara executando senão é encerrado)

    int x, y, soma;
    char resp;

    cout << "Calculadora de soma" << endl;

    //Neste laço o teste é feito somente no final da primeira iteração
    do {
        cout << "Digite um numero:" << endl;
        cin >> x;

        cout << "Digite outro numero:" << endl;
        cin >> y;

        soma = x + y;

        cout << x << " + " << y << " = " << soma << endl;

        cout << "Deseja fazer outra operacao? [s/n]" << endl;
        cin >> resp;
    }
    //Enquanto usario não apertar n este bloco seguira executando
    while(resp != 'n');

    system("pause");
    return 0;
}
