#include<iostream>
#include<stdlib.h>

using namespace std;

    //Fun��es s�o blocos de c�digos que executam uma determinada tarefa
    //ao serem chamados pelo seu nome(podemos usar uma fun��o quantas vezes quisermos sem necessidade
    //de reescrever a tarefa que ela executa quando precisarmos)
    
void ola()
{
    cout << "Ola mundo" << endl;
}
    //Toda vez que for chamado esta fun��o escrevera ola mundo na tela
   //OBS:tipo de retorno void n�o pode retornar nada(ela apenas escreve uma mensagem na tela)

int main()
{
    //Podemos executar todo bloco da fun��o sempre que chamarmos a fun��o
    ola();

    //Chamando m�todo novamente
    ola();
    cout << endl;
    return 0;
}