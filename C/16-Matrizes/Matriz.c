#include<stdio.h>

int main(void)
{
    //Matrizes são arrays multidimensionais(normalmente 2 dimensões)
    //Para declarar uma matriz em C usamos:
    int num[2][2]; //matriz 2x2

    //Vamos definir os valores desta matriz
    num[0][0] = 4;
    num[1][0] = 2;
    num[0][1] = 1;
    num[1][1] = 3;

    //Para exibir uma matriz precisamos de uma estrutura de repetição aninhada
    //para linhas e colunas
    for(int linha = 0; linha < 2; linha++) {
        for(int coluna = 0; coluna < 2; coluna++) {
            printf("%d ",num[linha][coluna]);
        }
        //Para ficar em formato de tabela
        printf("\n");
    }

    return 0;
}
