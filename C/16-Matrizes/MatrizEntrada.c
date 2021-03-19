#include<stdio.h>
#define dim 3
int main(void)
{
    //Vamos preencher uma matriz de inteiros com comandos de entrada(3x3)

    int num[dim][dim];

    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            printf("Digite um numero para compor a matriz : ");
            scanf("%d",&num[i][j]);
            fflush(stdin);
        }
    }

    printf("\n Matriz criada \n");

    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            printf("%d ",num[i][j]);
        }
        printf("\n");
    }
    return 0;
}
