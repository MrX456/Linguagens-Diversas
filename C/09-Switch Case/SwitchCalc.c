#include<stdio.h>

int main(void)
{
    //Calculadora que faz 4 operações usando switch case
    int x;
    int y;
    int operacao;

    printf("Digite um numero : ");
    scanf("%d",&x);

    fflush(stdin);

    printf("Digite outro numero : ");
    scanf("%d",&y);

    fflush(stdin);

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    printf("Digite 1 para soma \n");
    printf("Digite 2 para subtracao \n");
    printf("Digite 3 para multiplicacao \n");
    printf("Digite 4 para divisao \n");
    scanf("%d",&operacao);

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    switch (operacao) {
        case 1:
            printf("A soma entre %d e %d e %d",x, y, x + y);
            break;
        case 2:
            printf("A subtracao entre %d e %d e %d",x, y, x - y);
            break;
        case 3:
            printf("A multiplicacao entre %d e %d e %d",x, y, x * y);
            break;
        case 4:
            printf("A divisao entre %d e %d e %.2f",x, y, (float) x / y);
            break;
        default:
            printf("Operacao invalida!");
            break;
    }
    return 0;
}
