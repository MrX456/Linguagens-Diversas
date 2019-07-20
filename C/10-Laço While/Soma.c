#include<stdio.h>

int main(void)
{
    //calculadora de soma com laço while
    int x;
    int y;
    int op = 1;
    int qtde;

    printf("Calculadora de soma \n");
    printf("Quantas operacoes deseja fazer ? \n");
    scanf("%d",&qtde);

    fflush(stdin);

    printf("===========================\n");

    while(op <= qtde) {

        printf("Operacao %d \n", op);

        printf("Digite um numero : \n");
        scanf("%d",&x);

        fflush(stdin);

        printf("Digite outro numero : \n");
        scanf("%d",&y);

        printf("%d + %d = %d \n",x, y, x + y);
        printf("===========================\n");

        //Incrementar op ou laço nunca encerarra
        op++;
    }

    printf("Encerrando programa...");

    return 0;
}
