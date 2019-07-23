#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Laços são estruturas de repetição que ficam repetindo um bloco de instruções
    //enquanto uma determinada condição for verdadeira

    int contador = 0;

    //Vamos fazer uma contagem de 0 a 10 usando um laço while
    //O while primeiro executa um teste lógico e enaquanto o
    //teste for verdadeiro o laço seguirá executando

    while(contador <= 10) {
        cout << contador << " ";
        contador++;
    }
    cout << endl;
    system("pause");
    return 0;
}

