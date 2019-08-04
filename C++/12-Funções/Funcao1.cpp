#include<iostream>
#include<stdlib.h>

using namespace std;

    //Funções são blocos de códigos que executam uma determinada tarefa
    //ao serem chamados pelo seu nome(podemos usar uma função quantas vezes quisermos sem necessidade
    //de reescrever a tarefa que ela executa quando precisarmos)
    
void ola()
{
    cout << "Ola mundo" << endl;
}
    //Toda vez que for chamado esta função escrevera ola mundo na tela
   //OBS:tipo de retorno void não pode retornar nada(ela apenas escreve uma mensagem na tela)

int main()
{
    //Podemos executar todo bloco da função sempre que chamarmos a função
    ola();

    //Chamando método novamente
    ola();
    cout << endl;
    return 0;
}