#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Calculadora que faz 4 operações usando switch case
    int x,
        y,
        operacao;

    cout << "Digite um numero:" << endl;
    cin >> x;

    cout << "Digite outro numero:" << endl;
    cin >> y;

    cout << "=-=-=-=-=-=-=-=-=-=" << endl;

    cout << "Digite 1 para soma" << endl;
    cout << "Digite 2 para subtracao" << endl;
    cout << "Digite 3 para multiplicacao" << endl;
    cout << "Digite 4 para divisao" << endl;
    cin >> operacao;

     cout << "=-=-=-=-=-=-=-=-=-=" << endl;

    switch (operacao) {
        case 1 :
            cout << x << " + " << y << " = " << x + y << endl;
            break;
        case 2 :
            cout << x << " - " << y << " = " << x - y << endl;
            break;
        case 3 :
            cout << x << " x " << y << " = " << x * y << endl;
            break;
        case 4 :
            cout << x << " / " << y << " = " << (float)x / y << endl;
            break;
        default :
            cout << "Operacao invalida" << endl;
            break;
    }
    cout << "Encerrando programa..." << endl;
    system("pause");
    return 0;
}
