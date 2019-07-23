#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Vamos veirifcar se o numero digitado pelo usuario é par ou impar
    int x;

    cout << "Digite um numero:" << endl;
    cin >> x;

    //Aqui o operador ! inverte o teste, portanto se o numero passado NÃO
    //possui resto de divisão por 2 igual a 0 este bloco será executado
    if(!(x % 2 == 0)) {
        cout << "O numero " << x << " e impar." << endl;
    }
    //se possui este bloco sera executado
    else {
        cout << "O numero " << x << " e par." << endl;
    }

    system("pause");
    return 0;
}
