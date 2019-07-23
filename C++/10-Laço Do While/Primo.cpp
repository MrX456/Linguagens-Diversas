#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Algoritmo verifica se numero digitado é primo
    int c, n, numDiv;

    c = 1; //divisor
    numDiv = 0; //numero divisores

    cout << "Digite um numero para verificar se e primo:" << endl;
    cin >> n;

    do {
        c++;
        if(n % c == 0) {
            numDiv++;
        }
    } while(c < n);

    if(numDiv > 2) {
        cout << "O numero " << n << " nao e primo" << endl;
    }
    else {
        cout << "O numero " << n << " e primo" << endl;
    }
    system("pause");
    return 0;
}
