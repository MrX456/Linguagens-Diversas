#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Podemos utilizar operadores relaacionais para testar mais que duas expressões
    int x = 4;
    float y = 5.32;
    char z = '4';
    bool teste;

    cout << "Operadores Logicos" << endl;
    cout << "1- Verdadeiro / 0- Falso" << endl;
    cout << "x = " << x << " y = " << y << " z = " << z << "[char]" << endl;

    //Independente de quantas expressões && só retorna verdadeiro(1) se TODAS forem verdadeiras
    cout << "Operador && [e]" << endl;
    teste = (x != y) && (x != z) && (x < y);
    cout << teste << endl; //todas verdadeiras entao verdadeiro(1)
    teste = (x != y) && (x == z) && (x < y);
    cout << teste << endl; //pelo menos uma falsa entao falsa(0)

    cout << "=-=-=-=-=-=-=-=" << endl;

    //Independente de quantas expressões || só retorna falso(0) se TODAS forem falsas
    cout << "Operador || [ou]" << endl;
    teste = (x == z) || (x > y) || !(x == y);
    cout << teste << endl; //! inverteu um dos testes e pelo menos uma condição é verdadeira portanto v(1)
    teste = (x == z) || (x > y) || (x == y) || (y < x);
    cout << teste << endl; //todas falsas portanto f(0)

    system("pause");
    return 0;
}
