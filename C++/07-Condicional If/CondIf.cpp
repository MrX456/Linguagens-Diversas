#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //O condicional if faz um teste lógico em uma condição e
    //se for verdadeira executa o bloco(qualquer operador pode ser utilizado)
    int num;

    cout << "Escolha um numero : 1 ,2 ou 3" << endl;
    cin >> num;

    //Se e somente se o usuario digitar 1 este bloco será executado
    if(num == 1) {
        cout << "Parabens voce ganhou um carro!" << endl;
    }

    //Se condição testada for falsa o bloco acima será ignorado e o fluxo do programa
    //segue

    cout << "Encerrando programa..." << endl;

    system("pause");
    return 0;
}
