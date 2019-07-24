#include<stdio.h>

//Podmeos ter varias funções em um programa, vamos fazer 4 operações matematicas
int soma(int x, int y)
{
    return x + y;
}

int subtracao(int x, int y)
{
    return x - y;
}

int multiplicacao(int x, int y)
{
    return x * y;
}

float divisao(int x, int y)
{
    return (float)x / y;
}
int main(void)
{
    int a;
    int b;
    int op;

    printf("Digite um numero : \n");
    scanf("%d",&a);

    fflush(stdin);

    printf("Digite outro numero : \n");
    scanf("%d",&b);

    fflush(stdin);

    printf("Digite 1 para soma \n");
    printf("Digite 2 para subtracao \n");
    printf("Digite 3 para multiplicacao \n");
    printf("Digite 4 para divisao \n");
    scanf("%d",&op);

    switch (op) {
        case 1 :
            printf("soma = %d \n",soma(a, b));
            break;
         case 2 :
            printf("subtracao = %d \n",subtracao(a, b));
            break;
         case 3 :
            printf("multiplicacao = %d \n",multiplicacao(a, b));
            break;
         case 4 :
            printf("divisao = %.2f \n",divisao(a, b));
            break;
         default :
            printf("Operacao invalida");
            break;
    }
    return 0;
}
