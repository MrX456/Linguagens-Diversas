#include<iostream>
#include<stdlib.h>

using namespace std;

//Verificar par ou impar com função sem retorno
void par_impar(int num)
{
    if(num % 2 == 0) {
        cout << "O numero " << num << " e par " << endl;
    }
    else {
        cout << "O numero " << num << " e impar " << endl;
    }
}

int main()
{
    int x;
    
    cout << "Digite um numero : " << endl;
    cin >> x;
    
    par_impar(x);
    return 0;
}