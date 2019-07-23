#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Tabuada de um numero digitado pelo usuario
    int fator,
        contador = 0,
        produto;

    cout << "Tabuada" <<endl;
    cout << "Digite um numero para ver a tabuada" << endl;
    cin >> fator;

    cout << "=-=-=-=-=-=-=-=-=-=" << endl;

    while(contador <= 10) {
        produto = fator * contador;
        cout << fator << " x " << contador << " = " << produto << endl;
        contador++;
    }
    system("pause");
    return 0;
}
