#include<iostream>
#include<stdlib.h>

using namespace std;

//Ja esta fun��o soma dois valores e retorna um inteiro. Tambem precisaremos de par�metros
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
    //Chamando fun��o de soma
    cout << a << "+" << b << " = " << soma(a, b) << endl;
    return 0;
}