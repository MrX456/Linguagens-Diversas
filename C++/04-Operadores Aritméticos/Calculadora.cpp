#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Calculadora 4 operações basicas
    int x;
    int y;

    cout << "Digite um numero:" << endl;
    cin >> x;

    cout << "Digite outro numero:" << endl;
    cin >> y;

    cout << "A soma entre " << x << " e " << y << " e " << x + y << endl;
    cout << "A subtracao entre " << x << " e " << y << " e " << x - y << endl;
    cout << "A multiplicacao entre " << x << " e " << y << " e " << x * y << endl;
    cout << "A divisao entre " << x << " e " << y << " e " << (float)x / y << endl;

    system("pause");
    return 0;
}
