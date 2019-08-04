#include<iostream>
#include<stdlib.h>

using namespace std;

//esta função com 2 parametros retorna quem é o maior
float maior(float x, float y)
{
    if(x >= y) {
        return x;
    }
    else {
        return y;
    }
}

int main()
{
    int a, b;
    
    cout << "Digite um numero : " << endl;
    cin >> a;
    
    cout << "Digite outro numero : " << endl;
    cin >> b;
    
    cout << "O maior valor e " << maior(a, b) << endl;
    return 0;
}