#include<iostream>
#include<stdlib.h>

using namespace std;

//Função Fibonacci
void fibonacci(int a, int b, int lim)
{
    int aux;

    for(int i = 0; i < lim; i++) {
        aux = a + b;
        a = b;
        b = aux;
        cout << aux << " ";
    }
}

int main()
{
    int x = 0;
    int y = 1;
    int limite;

    cout << "Sequencia de Fibonacci" << endl;
    cout << "Digite o termo final desejado " << endl;
    cin >> limite;

    fibonacci(x, y, limite);
    cout << endl;
    system("pause");
    return 0;
}
