#include<iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    //Diferente das variaveis as constantes não podem ter seu valor alterado no decorrer
    //do programa.Podem ser dos mesmos tipos das variaveis
    //são indicadas pela palavra const

    const int x = 3;
    const float pi = 3.14;
    const string frase = "Hey Jude, don't make it bad";
    const char c = 'k';

    cout << x << endl;
    cout << pi << endl;
    cout << frase << endl;
    cout << c << endl;
    system("pause");
    
    return 0;
}

