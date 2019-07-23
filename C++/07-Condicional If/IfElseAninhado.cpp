#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Tambem podemos encadear estruturas condicionais colocando uma dentro
    //da outra para testar multiplas condições

    int x;
    int y;

    cout << "Digite um numero:" << endl;
    cin >> x;

    cout << "Digte outro numero:" << endl;
    cin >> y;

    //Vamos encadear condicionais para testar mais de duas condições
    if(x == y) {
        cout << "Numeros iguais" << endl;
    }
    else {
        //Este if else esta aninhado dentro do else
        if(x > y) {
            cout << "O maior numero e " << x << endl;
        }
        else {
            cout << "O maior numero e " << y << endl;
        }
    }
    //Podemos aninhar quantas estruturas quisermos para testar multiplas condições, pelo menos
    //um dos blocos será executado
    system("pause");
    return 0;
}
