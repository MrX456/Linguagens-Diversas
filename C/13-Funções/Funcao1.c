#include<stdio.h>

//Funções(Métodos em outras linguagens) são blocos de códigos que executam uma determinada tarefa
//ao serem chamados pelo seu nome(podemos usar uma função quantas vezes quisermos sem necessidade
//de reescrever a tarefa que ela executa quando precisarmos)

//tipo de retorno nome(parametros opcionais)
void ola()
{
    printf("Ola mundo!");
}
//Toda vez que for chamada esta função escrevera ola mundo na tela
//OBS:tipo de retorno void não pode retornar nada(ela apenas escreve uma mensagem na tela)

int main(void)
{
    //Chamaremos a função criada
    ola();
    printf("\n");
    ola();
    return 0;
}
