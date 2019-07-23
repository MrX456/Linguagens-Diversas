#include<stdio.h>

int main(void)
{
    //Este algoritmo soma quantos valores o usuario quiser
    int n;
    int soma = 0;
    char resp;

    do {
        printf("Digite um numero para fazer uma soma : ");
        scanf("%d",&n);
        soma += n;

        fflush(stdin);

        printf("Deseja continuar adicionando valores? [s/n] \n");
        scanf("%c",&resp);
    } while(resp != 'n');

    printf("A soma dos valores digitados e %d",soma);

    return 0;
}
