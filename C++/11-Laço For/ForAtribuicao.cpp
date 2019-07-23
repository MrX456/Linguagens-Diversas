#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Dentro do laço for podemos usar os operadores de atribuição
    //+=
    for(int i = 0; i <= 30; i += 3) {
        cout << i << " ";
    }

    cout << endl;

    //-=
    for(int i = 90; i >= 0; i -= 9) {
        cout << i << " ";
    }

    cout << endl;

    //*=
    for(int i = 1; i <= 130; i *= 5) {
        cout << i << " ";
    }

    cout << endl;
    system("pause");
    return 0;
}
