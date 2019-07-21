#include<stdio.h>

int main(void)
{
    //Outra estrutura de repetição do C é o laço for
    //Uma variavel de controle é inicializada dentro do próprio laço
    //para fazer as iterações, e o incremento também é feito dentro
    //da própria estrutura

    //Contador 0 a 10
    for(int cont = 0; cont <= 10; cont++) {
        printf("%d  ",cont);
    }

    printf("\n Contador reverso \n");
    
    //Dentro do for tambem podemos fazer decrementações
    for(int cont = 10; cont >= 0; cont--) {
        printf("%d  ",cont);
    }

    return 0;
}

