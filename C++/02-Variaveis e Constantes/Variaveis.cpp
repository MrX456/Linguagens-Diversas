#include<iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    //Os tipos de variaveis em C++ são

    //Variaveis de numeros inteiros declaradas
    int a = -1; //mais comum
    short b = 2; //- 32.768 a 32.767
    long c = 3; //-2.147.483.648 a 2.147.483.647

    //Variaveis de numeros reais(com ponto flutuante) declaradas
    float d = 1.6; //valores de 1,2e-38 a 3,4e38 e tamanho de 4 bytes
    double e = 3.21; //valores de 2,2e-308 a 1,8e308 e tamanho de 8 bytes

    //Variavel que armazena apenas 1 caractere
    char f = 'r';

    //Variaveis booleanas(podem ser true(1) ou false(0))
    bool leitura = false;
    bool jogar = true;

    //Cadeia de caracteres(armazena palavras, frases, texto). String é uma classe.
    string palavra = "palavra";

    //exibindo variaveis
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    cout << leitura << endl;
    cout << jogar << endl;
    cout << palavra << endl;

    system("pause");
    return 0;
}
