#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Calculadora de soma com laço while
    int x,
        y,
        op = 1,
        qtde;

    cout << "Calculadora de soma" << endl;
    cout << "Quantas operacoes deseja fazer" << endl;
    cin >> qtde;

    cout << "=-=-=-=-=-=-=-=-=-=-=" << endl;

    while(op <= qtde) {
        cout << "Operacao " << op << endl;

        cout << "Digite um numero:" << endl;
        cin >> x;

        cout << "Digite outro numero:" << endl;
        cin >> y;

        cout << x << " + " << y << " = " << x + y << endl;

        cout << "=-=-=-=-=-=-=-=-=-=-=" << endl;

        op++;
    }
    cout << "Encerrando programa..." << endl;
    system("pause");
    return 0;
}
