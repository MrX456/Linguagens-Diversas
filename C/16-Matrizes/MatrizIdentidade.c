#include<stdio.h>
#define dim 3
int main(void)
{
    //Vamos criar uma matriz identidade 3x3
    int matId[dim][dim];

    for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            if(i == j) {
                matId[i][j] = 1;
            }
            else {
                matId[i][j] = 0;
            }
        }
    }

    printf("\nMatriz Identidade \n");

     for(int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            printf("%d ",matId[i][j]);
        }
        printf("\n");
    }
    return 0;
}
