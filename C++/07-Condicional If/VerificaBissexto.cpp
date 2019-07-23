#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Vamos verificar se um ano digitado pelo usuario é bissexto
    int ano;

    cout << "Digite um ano para verificar se e bisssexto" << endl;
    cin >> ano;

    //Também podemos usar os operadores lógico no teste
    if((ano % 4 == 0) && (ano % 100 != 0) || (ano % 400 == 0)) {
        cout << "O ano " << ano << " e bissexto." << endl;
    }
    else {
        cout << "O ano " << ano << " nao e bissexto." << endl;
    }
    cout << "Encerrando programa..." << endl;
    system("pause");
    return 0;
}
