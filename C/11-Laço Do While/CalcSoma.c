#include<stdio.h>

int main(void)
{
    //Em C temos também a estrutura de repetição do while
    //Este laço executa o bloco pelo menos uma vez ja que a condição só será testada
    //ao término da primeira iteração(se for verdadeira continuara executando senão é encerrado)

    int x, y, soma;
    char resp;

    printf("Calculadora de soma \n");

    //Neste laço o teste é feito somente no final da primeira iteração
    do {
        printf("Digite um numero : ");
        scanf("%d",&x);

        fflush(stdin);

        printf("Digite outro numero : ");
        scanf("%d",&y);

        fflush(stdin);

        soma = x + y;

        printf("%d + %d = %d \n", x, y, soma);

        printf("Deseja fazer outra operacao?[s/n] \n");
        scanf("%c",&resp);
    }
    //Enquanto usario não apertar n este bloco seguira executando
    while(resp != 'n');

    return 0;
}
