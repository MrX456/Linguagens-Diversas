#include<iostream>
#include<stdlib.h>

using namespace std;

//esta função subtrai valores digitados pelo usuario porém é void e não pode retornar nada
void subtracao(int x, int y)
{
    //Como a função não tem retorno só podemos imprimir esta subtração com um cout
    //para ver sendo feita(não será possivel armazenar em uma variavel depois)
    cout << x - y << endl;
}
int main()
{
    int a, b;
    
    cout << "Digite um numero : " << endl;
    cin >> a;
    
    cout << "Digite outro numero : " << endl;
    cin >> b;
    
    cout << a << "-" << b << endl;
    subtracao(a, b);
    return 0;
}