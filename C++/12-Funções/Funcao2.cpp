#include<iostream>
#include<stdlib.h>

using namespace std;

//Ja esta função soma dois valores e retorna um inteiro. Tambem precisaremos de parâmetros
//(numeros para fazer esta soma)

int soma(int x, int y)
{
    int soma = x + y;
    return soma;
}

int main()
{
    int a = 3;
    int b = 6;
    //Chamando função de soma
    cout << a << "+" << b << " = " << soma(a, b) << endl;
    return 0;
}