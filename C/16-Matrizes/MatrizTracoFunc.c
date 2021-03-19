#include<stdio.h>
#define dim 3

//Vamos passar matriz como parâmetro para funções
void preenche(int matriz[][dim])
{
    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            printf("Digite um numero para compor a matriz : ");
            scanf("%d",&matriz[i][j]);
            fflush(stdin);
        }
    }
}

void exibir(int matriz[][dim])
{
    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
}

int traco(int matriz[][dim])
{
    int traco = 0;

    for(int i = 0; i < dim; i++) {
        traco += matriz[i][i];
    }
    return traco;
}

int main(void)
{
    int matriz[dim][dim];

    //Vamos usar as funções
    preenche(matriz);
    exibir(matriz);
    printf("\nTraco da matriz: %d",traco(matriz));
    return 0;
}
