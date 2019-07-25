#include<stdio.h>

int main(void)
{
    //Analizar quantos valores digitados pelo usuario sãao pares
    int val[8];
    int totPar = 0;

    for(int i = 0; i < 8; i++) {
        printf("Digite o numero %d : ",i + 1);
        scanf("%d",&val[i]);
        fflush(stdin);
        if(val[i] % 2 == 0) {
            printf("%d PAR \n",val[i]);
            totPar++;
        }
    }

    printf("\nO total de pares foi %d \n",totPar);

    for(int i = 0; i < 8; i++) {
        if(val[i] % 2 == 0) {
            printf("Valor par na posicao %d \n",i + 1);
        }
    }
    return 0;
}
