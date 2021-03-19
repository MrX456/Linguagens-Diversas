#include<stdio.h>

int main(void)
{
    //Tambem podemos colocar os valores da matriz na inicialização
    int num[2][3] = {{3, 2, 4},{5, 6, 1}};

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ",num[i][j]);
        }
        printf("\n");
    }
    return 0;
}
