#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Para testar mutliplas condições tambem podemos usar o switch case
    int x;

    cout << "Digite um numero de 1 a 5" << endl;
    cin >> x;

    //Vamos verificar o valor da variavel x e dependendo do valor será executado
    //apenas um destes blocos
    switch (x) {
        //se x for = 1
        case 1 :
            cout << "um";
            //este break sai desta estrutura se esta condição for verdadeira
            break;
        //se x for = 2
        case 2 :
            cout << "dois";
            break;
        case 3 :
            cout << "tres";
            break;
        case 4 :
            cout << "quatro";
            break;
        case 5 :
            cout << "cinco";
            break;
        //caso nenhuma das condições acima seja satisfeita executa este default
        default :
            cout << "Numero invalido";
            break;
    }
    //Obs este condicional não funciona com ponto flutuante ou operadores(<>&&||...), apenas com valor constante
    cout << endl;
    system("pause");
    return 0;
}
