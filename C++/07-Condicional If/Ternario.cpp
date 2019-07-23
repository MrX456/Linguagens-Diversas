#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Em C++ para testar condições de forma simples temos o operador ternário
    //condição ? verdadeiro : falso
    int num;

    cout << "Digite um numero:" << endl;
    cin >> num;

    //Numero positivo incrementa(v) e negativo decrementa(f)
    num >= 0 ? num++ : num-- ;

    cout << "O novo valor e " << num <<  endl;

    system("pause");
    return 0;
}
