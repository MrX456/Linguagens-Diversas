#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Algoritmo que  C que solicita 5 numeros ao usuario e mostra qual foi o maior digitado
    int maior = 0,
        num;

     for(int i = 1; i <= 5; i++) {
        cout << "Digite o numero " << i << endl;
        cin >> num;
        if(num > maior) {
            maior = num;
        }
     }

     cout << endl << "O maior numero digitado foi " << maior << endl;
    system("pause");
    return 0;
}
