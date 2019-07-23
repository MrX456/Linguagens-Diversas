#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
     //podemos alterar o fluxo de um laço com alguns comandos
     int cont = 0;

     while(cont < 10) {
        cont++;
         //Variavel vai incrementar em 1 a cada iteração

        if((cont == 4) || (cont == 6)) {
            //Este comando volta imediatamente para o teste ignorando instruções abaixo dele
            continue;
        }
        //4 e 6 não serão impressos pois continue impedira programa de chegar nesta instrução
        //voltando ao inicio do while imediatamente
        cout << cont << " ";
     }
     cout << endl << "Contagem finalizada" << endl;

     //Tambem temos o break que encerra imedatamente o laço se for acionado
     while(cont > 0) {
        //cont deve ir até 1
        cont--;

        //break sera acionado quando cont valer 4 interrompendo este laço imediatamente
        if(cont == 4) {
            //4 não será impresso pois impressão está abaixo do break
            break;
        }
        cout << cont << " ";
     }
     cout << endl << "Contagem interrompida" << endl;
    system("pause");
    return 0;
}
