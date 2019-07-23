#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    //Aqui vamos verifcar quantos dias um determinado mes
    int mes;
    int dia = 31;

    cout << "Digite o numero de um mes [1 a 12]:" << endl;
    cin >> mes;

    //Validar o numero digitado
    if((mes < 1) || (mes > 12)) {
        cout << "Mes invalido" << endl;
    }
    else {
        //Vamos verificar dias
        switch (mes) {
            //fevereiro tem 28(não considerar bissexto)
            case 2 :
                dia -= 3;
                break;
            //Todos este meses possuem 30 dias, podemos usar varios cases em uma linha porem cada uma com um valor constante
            case 4: case 6: case 9: case 11:
                dia--;
                break;
        }
        //Os demais meses ja estão com 31 dias
        cout << "O mes " << mes << " possui " << dia << " dias" << endl;
    }
    system("pause");
    return 0;
}
