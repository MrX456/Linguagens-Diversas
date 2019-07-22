#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
     //Operadores lógicos permitem testar multiplas relações entre variaveis
    //Os operadores lógicos em C são: e&& ou|| não!
    int x = 2;
    int y = 4;
    int z = 6;
    bool teste;

    cout << "Operadores Logicos" << endl;
    cout << "1- Verdadeiro / 0- Falso" << endl;
    cout << "x = " << x << " y = " << y << " z = " << z << endl;

    //operador && só retorna verdadeiro se duas condições testadas forem verdadeiras
    cout << "Operador && [e]" << endl;
    teste = (x < y) && (y < z);
    cout << teste << endl; //v e v = v(1)
    teste = (x > y) && (y < z);
    cout << teste << endl; //f e v = f(0)
    teste = (x != y) && (y >= z);//v e f = f(0)
    cout << teste << endl; //v e f = f(0)
    teste = (x == y) && (y >= z);
    cout << teste << endl; // f e f = f(0)

    cout << "=-=-=-=-=-=-=-=" << endl;

    //operador || só retorna falso se duas condições testadas forem falsas
    cout << "Operador || [ou]" << endl;
    teste = (x < y) || (y < z);
    cout << teste << endl; //v ou v = v(1)
    teste = (x > y) || (y < z);
    cout << teste << endl; //f ou v = v(1)
    teste = (x != y) || (y >= z);
    cout << teste << endl; //v ou f = v(1)
    teste = (x == y) || (y >= z);
    cout << teste << endl; // f ou f = f(0)

    cout << "=-=-=-=-=-=-=-=" << endl;

    //operador ! inverte o resultado do teste lógico
    cout << "Operador ! [nao]" << endl;
    teste = !((x < y) || (y < z));
    cout << teste << endl; //não v = f(0)
    teste = !((x == y) && (y >= z));
    cout << teste << endl; //não f = v(1)


    system("pause");
    return 0;
}
