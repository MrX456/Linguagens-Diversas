#include<iostream>
#include<stdlib.h>

using namespace std;

//esta fun��o subtrai valores digitados pelo usuario por�m � void e n�o pode retornar nada
void subtracao(int x, int y)
{
    //Como a fun��o n�o tem retorno s� podemos imprimir esta subtra��o com um cout
    //para ver sendo feita(n�o ser� possivel armazenar em uma variavel depois)
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