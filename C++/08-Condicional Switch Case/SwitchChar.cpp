#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Tambem podemos usar o switch case com o tipo char
    char letra;

    cout << "a, b, c, d" << endl;
    cout << "Escolha uma letra para ver uma fruta que começa com a letra escolhida" << endl;
    cin >> letra;

    switch (letra) {
        case 'a':
            cout << "amora" << endl;
            break;
        case 'b':
            cout << "banana" << endl;
            break;
        case 'c':
            cout << "carambola" << endl;
            break;
        case 'd':
            cout << "damasco" << endl;
            break;
        default:
            cout << "Letra invalida" << endl;
            break;
    }
    system("pause");
    return 0;
}
