#include <iostream>
#include <iomanip>
#include <cmath>
//Biblioteca para funções matematicas

using namespace std;

//Uma pessoa deposita R$1000 com 5% de juros
//quantia de dinheiro na conta ao fim de todo ano por 10 anos

int main()
{
    double amount; //quantia em depósito
    double principal = 1000.00; //capital
    double rate = 0.05; //juros 5%

    cout << "Ano" << setw(21)
         << "Quantia em deposito" << endl;

    //Ajusta formato para ponto flutuante
    cout << setiosflags(ios::fixed | ios::showpoint)
         << setprecision(2);

    for(int year = 1; year <= 10; year++)
    {
        amount = principal * pow(1.0 + rate, year);
        cout << setw(4) << year << setw(21) << amount << endl;
    }

    return 0;
}
