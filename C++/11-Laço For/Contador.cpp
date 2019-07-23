#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Outra estrutura de repetição do C++ é o laço for
    //Uma variavel de controle é inicializada dentro do próprio laço
    //para fazer as iterações, e o incremento também é feito dentro
    //da própria estrutura

     //Contador 0 a 10
     for(int cont = 0; cont <= 10; cont++) {
        cout << cont << " ";
     }

     //Dentro do for tambem podemos fazer decrementações
     cout << endl << "Contador Reverso" << endl;

     for(int cont = 10; cont >= 0; cont--) {
        cout << cont << " ";
     }

     cout << endl;
    system("pause");
    return 0;
}
