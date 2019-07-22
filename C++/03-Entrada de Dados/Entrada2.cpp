#include<iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    //Os dados de entrada podem ser de qualquer tipo, contanto que sejam armazenados em uma variavel
    //de mesmo tipo
    //Tres variaveis são do tipo string(não esquecer da , para separar)
    string nome,
           cidade,
           pais;

    cout << "Digite seu nome:" << endl;
    cin >> nome;

    cout << "Digite sua cidade:" << endl;
    cin >> cidade;

    cout << "Digite seu pais:" << endl;
    cin >> pais;

    //temos uma string e o valor de uma variavel juntas
    cout << "nome: " << nome << endl;
    cout << "cidade: " << cidade << endl;
    cout << "pais: " << pais << endl;

    system("pause");
    return 0;
}
