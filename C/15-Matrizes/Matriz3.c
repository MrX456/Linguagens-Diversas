#include<stdio.h>

int main(void)
{
    //Matrizes podem ser de qualquer tipo
    float mat[3][3] = {{2.1, 4.2, 1.2},{1.1, 5.6, 2.3},{7.2, 5.9, 8.4}};
    char mat2[3][2] = {{'d', 's'},{'p', 'g'},{'x', 'b'}};

    //Exibindo matrizes
    printf("Matriz 1 \n");

    for(int i = 0; i < 3; i++) {
        for(int j =0; j < 3; j++) {
            printf("%.1f ",mat[i][j]);
        }
        printf("\n");
    }

     printf("Matriz 2 \n");

    for(int i = 0; i < 3; i++) {
        for(int j =0; j < 2; j++) {
            printf("%c ",mat2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
