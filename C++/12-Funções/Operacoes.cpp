#include<iostream>
#include<stdlib.h>

using namespace std;

//Podmeos ter varias funções em um programa, vamos fazer 4 operações matematicas

int soma(int x, int y)
{
    return x + y;
}

int subtracao(int x, int y)
{
    return x - y;
}

int multiplicacao(int x, int y)
{
    return x * y;
}

float divisao(int x, int y)
{
    return (float) x / y;
}

int main()
{
    int a, b, op;
    
    cout << "Digite um numero : " << endl;
    cin >> a;
    
    cout << "Digite outro numero : " << endl;
    cin >> b;
    
    cout << "Digite 1 para SOMA" << endl;
    cout << "Digite 2 para SUBTRACAO" << endl;
    cout << "Digite 3 para MULTIPLICACAO" << endl;
    cout << "Digite 4 para DIVISAO" << endl;
    cin >> op;
    
    switch(op) 
    {
        case 1:
            cout << "soma = " << soma(a, b) << endl;
            break;
            
        case 2:
            cout << "subtracao = " << subtracao(a, b) << endl;
            break;
            
        case 3:
            cout << "multiplicacao = " << multiplicacao(a, b) << endl;
            break;
            
        case 4:
            cout << "divisao = " << divisao(a, b) << endl;
            break;
    }
    return 0;
}