#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
     //Tambem temos o condicional composto if else. If executa se teste for
    //verdadeiro e else executa se for falso(um dos dois será executado)
    int x,
        y,
        opc,
        operacao;

    cout << "Digite um numero:" << endl;
    cin >> x;

    cout << "Digite outro numero:" << endl;
    cin >> y;

    cout << "Digite 1 para somar" << endl;
    cout << "Digite qualquer tecla para subtrair" << endl;
    cin >> opc;

    //Se condição for verdadeira
    if(opc == 1) {
        operacao = x + y;
        cout << x << " + " << y << " = " << operacao << endl;
    }
     //Se condição for falsa
     else {
        operacao = x - y;
        cout << x << " - " << y << " = " << operacao << endl;
     }

     //Obrigatóriamente um e somente um dos blocos acima será executado

     cout << "Encerrando programa..." << endl;
     system("pause");
     return 0;
}
