#include<stdio.h>

int main(void)
{
    //Dentro do laço for podemos usar os operadores de atribuição
    //+=
    for(int i = 0; i <= 40; i += 4) {
        printf("%d ", i);
    }

    printf("\n---------------------------------------------\n");

    //-=
    for(int i = 100; i >= 0; i -= 10) {
        printf("%d ", i);
    }

    printf("\n---------------------------------------------\n");

    //*=
    for(int i = 1; i <= 100; i *= 3) {
        printf("%d ", i);
    }


    return 0;
}
