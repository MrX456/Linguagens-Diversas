#include<iostream>
#include<stdlib.h>

using namespace std;

//esta fun��o retorna um fatorial de um numero
long fatorial(long x)
{
    int r = 1;
    for(int c = 1; c <= x; c++) { 
        r *= c;
    }
    return r;
}

int main()
{
    int n, f;
    
    cout << "Digite um numero para verificar o fatorial : " << endl;
    cin >> n;
    
    //Chamando fun��o que calcula fatorial
    f = fatorial(n);
    cout << "O valor de " << n << "! e " << f << endl;
    return 0;
}