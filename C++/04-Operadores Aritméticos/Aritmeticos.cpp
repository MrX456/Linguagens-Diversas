#include<iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    //Os operadores aritmétiocs em C++ são
    int x = 6;
    int y = 3;

    int soma = x + y;
    int subtracao = x - y;
    int multiplicacao = x * y;
    float divisao = (float)x / y;
    int modulo = x % 2; //resto da divisão

    cout << soma << endl;
    cout << subtracao << endl;
    cout << multiplicacao << endl;
    cout << divisao << endl;
    cout << modulo << endl;

    system("pause");
    return 0;
}
