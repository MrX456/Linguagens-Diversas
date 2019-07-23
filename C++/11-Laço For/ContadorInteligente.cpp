#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Contador inteligente, incrementa ou decrementa dependendo dos valores passados
    //pelo usuario

    int x, y;

    cout << "Contador Inteligente" << endl;
    cout << "Digite um numero:" << endl;
    cin >> x;

    cout << "Digite outro numero" << endl;
    cin >> y;

    //Incrementa se
    if(x < y) {
        for(int i = x; i <= y; i++) {
            cout << i << " ";
        }
    }
    //Decrementa se
    else {
        for(int i = x; i >= y; i--) {
            cout << i << " ";
        }
    }

    cout << endl;
    system("pause");
    return 0;
}
