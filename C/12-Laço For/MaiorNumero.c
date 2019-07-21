#include<stdio.h>

int main(void)
{
    //Algoritmo que  C que solicita 5 numeros ao usuario e mostra qual foi o maior digitado
    int maior = 0,
        num;

    for(int i = 1; i <= 5; i++) {
        printf("Digite o numero %d ",i);
        scanf("%d",&num);

        if(num > maior) {
            maior = num;
        }
    }

    printf("\nO maior numero digitado foi %d", maior);

    return 0;
}
