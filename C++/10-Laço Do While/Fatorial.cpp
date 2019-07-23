#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Verifcar um fatorial de um numero passado pelo usuario
    long c, n, f;
    char resp;

    do {
        cout << "Digite um numero para verificar o fatorial:" << endl;
        cin >> n;

        c = n;
        f = 1;

        //Vamos encadear outro do while
        do {
           cout << c << " x ";
           f *= c;
           c -= 1;
        } while(c >= 1);

        cout << endl << "O fatorial de " << n << " e " << f << endl;
        cout << "Deseja fazer outra operacao? [s/n]" << endl;
        cin >> resp;
    } while(resp != 'n');

    system("pause");
    return 0;
}
