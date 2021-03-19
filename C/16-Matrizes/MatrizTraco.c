#include<stdio.h>
#define dim 2
int main(void)
{
    //Vamos calcular o traço(soma diagonal principal) de uma matriz 2x2
    //digitada pelo usuario
    int matriz[dim][dim];
    int traco = 0;
    int i, j;


    for(i = 0; i < dim; i++) {
        for(j = 0; j < dim; j++) {
            printf("Digite um numero para compor a matriz : ");
            scanf("%d",&matriz[i][j]);
            fflush(stdin);
        }
    }

    for(i = 0; i < dim; i++) {
        for(j = 0; j < dim; j++) {
            printf("%d ",matriz[i][j]);
        }
        traco += matriz[i][i];
        printf("\n");
    }

    printf("Traco da matriz = %d",traco);
    return 0;
}
