#include<stdio.h>

int main(void)
{
    //Este algoritmo mostra todos os pares e impares de 0 ate onde o usuario digitou
    int num;
    int cont = 1;

    printf("Digite um numero : ");
    scanf("%d",&num);

    printf("IMPARES \tPARES \n");

    while(cont <= num) {
        if(cont % 2 == 1) {
            printf("   %d \t",cont);
        }
        else {
            printf("   \t%d \n",cont);
        }
        cont++;
    }
    return 0;
}
