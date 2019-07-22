#include<iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    string nome;
    int idade;

    cout << "Digite seu nome:" << endl;
    cin >> nome;

    cout << "Digite sua idade:" << endl;
    cin >> idade;

    //Aqui juntamos as informações em um unico cout(concatenação)
    cout << nome << " tem " << idade << " anos." << endl;

    system("pause");
    return 0;
}
